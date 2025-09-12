# Enhanced Camera System

Data-driven, runtime-switchable camera system for Unreal Engine 5.  
Uses `APlayerCameraManager` subclass and `UDataAsset` camera mode configs to provide mode-driven camera transforms, post-process overrides, and runtime switching (including push/pop stacks). Designed to work in PIE and packaged builds.

---

## Features

- Mode-driven camera configs (DataAssets) with:
  - Socket follow + socket offset
  - Target offset (look-at)
  - Fixed rotation option
  - Axis clamps (pitch/yaw/roll)
  - Enable/disable positional lag + configurable lag speed
  - Mode FOV and post-process override
  - Transition (blend) duration
- Runtime switching by gameplay tag (via CameraModeMap data asset)
- Simple non-additive camera stack (Push / Pop)
- BlueprintCallable API for easy integration
- `CalculateCamera` is `BlueprintNativeEvent` — create BP DataAsset subclasses for custom logic (traces, collision avoidance, cinematic offsets, etc.)

---

## Requirements

- Unreal Engine 5.x (tested on 5.3)
- C++ project (the plugin is a runtime module)
- GameplayTags (engine module)

---

## Installation

1. Copy the plugin folder into your project:
   ```
   <YourProject>/Plugins/EnhancedCameraSystem/
   ```
2. If the plugin is already present, ensure the files are consistent and module name is `EnhancedCameraSystem` in:
   - `EnhancedCameraSystem.uplugin` → `"Name": "EnhancedCameraSystem"`
   - `Source/EnhancedCameraSystem/EnhancedCameraSystem.Build.cs` → class name `EnhancedCameraSystem`
   - `IMPLEMENT_MODULE(..., EnhancedCameraSystem)` in the module .cpp
3. Close the Unreal Editor if open.
4. Delete stale intermediate directories (optional but recommended):
   ```
   <YourProject>/Intermediate/ 
   <YourProject>/Saved/ (optional)
   <YourProject>/Binaries/
   Plugins/EnhancedCameraSystem/Intermediate/
   ```
5. Regenerate project files:
   - Windows: Right-click `.uproject` → *Generate Visual Studio project files*  
   - macOS: run `GenerateProjectFiles.sh` or use the Editor (as appropriate)
6. Build the project in your IDE (Visual Studio / Xcode) or open the project in the Editor and let it compile.

---

## Enabling the System

1. In your `GameMode` (or `PlayerController`) set the `PlayerCameraManagerClass` to:
   ```
   AEnhancedPlayerCameraManager
   ```
   You can create a Blueprint subclass of `AEnhancedPlayerCameraManager` to set defaults (e.g., `CameraModeMapAsset`) in the editor.

2. Create DataAssets:
   - `CameraModeConfig` (Right click → Misc → Data Asset → select `CameraModeConfig`):
     - Configure socket name, socket offset, target offset, fixed rotation, clamps, lag, FOV, post-process, transition duration.
     - If you need advanced behavior, create a Blueprint subclass of this DataAsset and override `CalculateCamera`.
   - `CameraModeMap` (DataAsset) — add `ModeTag` → `ModeConfig` pairs.

3. Assign your `CameraModeMap` asset to the `CameraModeMapAsset` property on your `AEnhancedPlayerCameraManager` (via a Blueprint subclass or at runtime).

---

## Runtime API (Blueprint & C++)

**Key functions on `AEnhancedPlayerCameraManager`:**

```cpp
// Set by gameplay tag (uses CameraModeMap)
UFUNCTION(BlueprintCallable, Category="Camera")
void SetCameraModeByTag(const FGameplayTag& ModeTag);

// Set mode directly with a DataAsset
UFUNCTION(BlueprintCallable, Category="Camera")
void SetCameraModeConfig(UCameraModeConfig* NewMode, const FGameplayTag& OptionalTag);

// Push a new mode (saves previous)
UFUNCTION(BlueprintCallable, Category="Camera")
void PushCameraMode(UCameraModeConfig* NewMode, const FGameplayTag& OptionalTag);

// Pop back to previous mode
UFUNCTION(BlueprintCallable, Category="Camera")
void PopCameraMode();

// Replace CameraModeMap asset at runtime
UFUNCTION(BlueprintCallable, Category="Camera")
void SetCameraModeMap(UCameraModeMap* NewMap);
```

**DataAsset properties (high-level):**

- `FollowSocketName` (FName)
- `SocketOffset` (FVector)
- `TargetOffset` (FVector)
- `bUseFixedRotation` (bool) + `FixedRotation` (FRotator)
- `bClampPitch`, `PitchClamp` (FVector2D) — same for yaw/roll
- `TransitionDuration` (float)
- `bEnableLag` (bool), `LagSpeed` (float)
- `ModeFOV` (float)
- `bApplyPostProcess` (bool), `PostProcessSettings` (FPostProcessSettings)

**`CalculateCamera` signature (DataAsset):**
```cpp
UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Camera")
FCameraTransformResult CalculateCamera(
    AActor* TargetActor,
    const FVector& CurrentCameraLocation,
    const FRotator& CurrentCameraRotation,
    float DeltaTime
) const;
```
Return an `FCameraTransformResult` with Location, Rotation, FOV, and optional PostProcess settings.

---

## Example usage (C++)

Switch by tag:
```cpp
// Example: switch to third person tag
if (APlayerCameraManager* CamMgr = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0))
{
    if (AEnhancedPlayerCameraManager* Enhanced = Cast<AEnhancedPlayerCameraManager>(CamMgr))
    {
        const FGameplayTag Tag = FGameplayTag::RequestGameplayTag(FName("Camera.Mode.ThirdPerson"));
        Enhanced->SetCameraModeByTag(Tag);
    }
}
```

Push/pop example:
```cpp
Enhanced->PushCameraMode(MyADSModeAsset, FGameplayTag::RequestGameplayTag("Camera.Mode.ADS"));
// Later...
Enhanced->PopCameraMode();
```

Blueprint:
- Drag from `Get Player Camera Manager` → cast to `EnhancedPlayerCameraManager` → call `SetCameraModeByTag` / `PushCameraMode` / `PopCameraMode`.

---

## Troubleshooting (common build issues)

### Linker errors: unresolved `FMemory::Free`, `FString` constructors, etc.
These typically indicate a module name or Build.cs configuration mismatch.

Checklist:
- Ensure module name is consistent:
  - `.uplugin` `"Name"` matches the Build.cs class name and the `IMPLEMENT_MODULE` module name.
  - Example: `EnhancedCameraSystem` must appear in:
    - `EnhancedCameraSystem.uplugin` → `"Name": "EnhancedCameraSystem"`
    - `Source/EnhancedCameraSystem/EnhancedCameraSystem.Build.cs` → `public class EnhancedCameraSystem : ModuleRules`
    - `IMPLEMENT_MODULE(FEnhancedCameraSystemModule, EnhancedCameraSystem)`
- Ensure `Build.cs` contains **Core**, **CoreUObject**, and **Engine** in `PublicDependencyModuleNames`.
- Delete `Binaries/` and `Intermediate/` and regenerate project files after changing module/.uplugin files.
- Regenerate project files and perform a full **Clean** and **Rebuild** in your IDE.

### IDE unresolved symbols (e.g., `CameraCache`)
- Some engine internals are accessible during compile but flagged by IDE code analysis. If compilation succeeds, minor IDE warnings can be ignored.
- Prefer documented API calls: `GetCameraLocation()`, `GetCameraRotation()`, `GetFOVAngle()`, and `SetCameraCachePOV(FMinimalViewInfo)`.

### Creating DataAssets not visible
- Compile the project, restart the Editor, then right-click → *Miscellaneous* → *Data Asset* → pick `CameraModeConfig` / `CameraModeMap`.
- If you switched between `UDataAsset` and `UPrimaryDataAsset`, restart the Editor after compiling.

---

## Editor tips

- Create a Blueprint subclass of `AEnhancedPlayerCameraManager` to set the `CameraModeMapAsset` in defaults.
- For complex camera behaviors (collision avoidance, dynamic offsets), create a Blueprint DataAsset subclass and override `CalculateCamera` (BlueprintNativeEvent).
- To blend post-process settings smoothly, implement field-by-field lerps (the plugin uses a simple replace by default).

---

## Contributing

1. Fork the repository.
2. Create a feature branch: `git checkout -b feat/my-feature`.
3. Make changes, keep public headers stable if possible.
4. Submit a PR with a clear description and testing steps.

Please include:
- UE version used
- Steps to reproduce
- Build logs if you hit linker errors

---

## License

This project is licensed under the MIT License — see `LICENSE` for details.  
(Replace with your preferred license if needed.)

---

## Changelog

- **v1.1** — Stabilized module naming and Build.cs dependencies; switched to `UDataAsset`; use `SetCameraCachePOV` for applying camera POV.
- **v1.0** — Initial implementation: camera modes, runtime switching, push/pop stack, BlueprintNativeEvent `CalculateCamera`.

---

## Contact & Support

For issues, open a GitHub Issue with:
- UE version
- Plugin version (branch/tag)
- Reproduction steps and logs

