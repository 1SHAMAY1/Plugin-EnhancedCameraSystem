# Enhanced Camera System (ECS)

[![Unreal Engine](https://img.shields.io/badge/Unreal%20Engine-5.3%20%7C%205.4%20%7C%205.5-blue?logo=unrealengine&logoColor=white)](https://www.unrealengine.com/)
[![License](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)
[![Architecture](https://img.shields.io/badge/Architecture-Data--Driven-brightgreen)](#technical-architecture)
[![Workflow](https://img.shields.io/badge/Workflow-Designer--First-orange)](#designer-workflow)

**Enhanced Camera System (ECS)** is a modular, runtime-switchable camera framework for Unreal Engine 5. Designed to meet the demands of high-fidelity productions, ECS decouples complex camera logic from character actors, empowering designers with a robust, data-driven pipeline for managing gameplay perspectives, cinematic transitions, and environmental camera overrides.

---

## 🚀 Technical Pillars

ECS is built on three core engineering principles designed for scalability and performance in modern AAA environments:

| Pillar | Focus | Implementation |
| :--- | :--- | :--- |
| **Modular State Management** | Decoupling | Tag-based mode switching using `AEnhancedPlayerCameraManager`. |
| **Designer-First Workflow** | Accessibility | Fully configurable `UDataAsset` configs for transforms and post-processing. |
| **Robust Blend Stack** | Consistency | Native Push/Pop stack logic for seamless cinematic and gameplay transitions. |

---

## ✨ Key Features

- **State-Driven Transitions**: Effortlessly switch camera modes via `GameplayTags` or direct stack manipulation.
- **Contextual Awareness**: Per-mode logic for socket follows, target offsets, and sophisticated axis clamping.
- **Performant Lag & Smoothing**: Optimized positional and rotational lag algorithms for fluid character-centered tracking.
- **Visual Overrides**: Integrated Post-Process and FOV overrides per camera state with smooth interpolation.
- **Total Logic Extensibility**: `CalculateCamera` is exposed as a `BlueprintNativeEvent`, allowing engineers to create specialized logic (e.g., raytraced collision avoidance) within a unified pipeline.

---

## 🛠️ Requirements & Installation
### System Requirements
| Component | Requirement |
| :--- | :--- |
| **Unreal Engine** | 5.3, 5.4, 5.5 |
| **Project Type** | C++ (Runtime Module) |
| **Engine Modules** | `GameplayTags`, `Core`, `Engine` |

### Installation Guide
1. **Directory Setup**: Clone or copy the plugin to your project's `Plugins` folder:
   ```bash
   <YourProject>/Plugins/EnhancedCameraSystem/
   ```
2. **Build Configuration**: If modifying, ensure your `Build.cs` includes:
   ```csharp
   PublicDependencyModuleNames.AddRange(new string[] { "GameplayTags", "Core", "Engine" });
   ```
3. **Project Regeneration**:
   - Right-click your `.uproject` file and select **Generate Visual Studio project files**.
   - Open your IDE and perform a **Clean & Build** to ensure module consistency.
4. **Activation**: Enable the plugin via the **Edit > Plugins** menu if required (usually auto-enabled if in project folder).

---

## 🏗️ Core Architecture & Workflow

ECS utilizes a decoupled architecture where the **Camera Manager** handles orchestration and the **Data Assets** define state.

### 1. The Manager
Set your `PlayerCameraManagerClass` in your `GameMode` or `PlayerController` to:
`AEnhancedPlayerCameraManager`

### 2. Designer Workflow
Designers create and manage camera views through two primary assets:
- **`CameraModeConfig`**: Defines specific camera behaviors (Offsets, Lag, FOV, Post-Process). 
  - *Extensibility*: Create Blueprint subclasses of `CameraModeConfig` to override `CalculateCamera` for custom math (e.g. spring-arm logic).
- **`CameraModeMap`**: A registry linking `GameplayTags` to specific `CameraModeConfig` assets.

### 3. Runtime Orchestration
The system supports both direct state switching and a non-additive stack (Push/Pop).

#### Implementation (C++)
```cpp
// 1. Switch by Tag (Uses CameraModeMap registry)
EnhancedCamMgr->SetCameraModeByTag(FGameplayTag::RequestGameplayTag("Camera.Mode.ThirdPerson"));

// 2. Direct Configuration
EnhancedCamMgr->SetCameraModeConfig(MyADSConfig, OptionalTag);

// 3. Stack Manipulation (Push/Pop)
EnhancedCamMgr->PushCameraMode(CinematicConfig, CinematicTag);
EnhancedCamMgr->PopCameraMode(); // Safely returns to previous state
```

#### Technical Reference (Data Assets)
| Variable | Type | Description |
| :--- | :--- | :--- |
| `FollowSocketName` | `FName` | The bone/socket to track. |
| `SocketOffset` | `FVector` | Relative offset from the socket. |
| `TargetOffset` | `FVector` | Offset for the look-at target. |
| `bEnableLag` | `bool` | Toggles positional smoothing. |
| `TransitionDuration`| `float` | Interpolation time between states. |

## 🧩 Examples & Integration

### Blueprint Usage
Drag from `Get Player Camera Manager` → **Cast to AEnhancedPlayerCameraManager** → Call `SetCameraModeByTag` or `PushCameraMode`.

### C++ Contextual Switching
```cpp
if (AEnhancedPlayerCameraManager* Enhanced = Cast<AEnhancedPlayerCameraManager>(MyPC->PlayerCameraManager))
{
    // High-priority cinematic override
    Enhanced->PushCameraMode(CinematicAsset, FGameplayTag::RequestGameplayTag("Camera.State.Cinematic"));
}
```

---

## 🔍 Troubleshooting & Pipeline Tips

### Linker Errors (Unresolved Symbols)
Ensure your module's `.uplugin` and `Build.cs` are synchronized. Linker errors like `unresolved FMemory::Free` typically indicate a missing dependency on `Core` or `Engine` in the project's dependency graph.
- **Action**: Verify `EnhancedCameraSystem` is added to `PublicDependencyModuleNames`.

### DataAsset Visibility
If custom `CameraModeConfig` subclasses are not appearing in the Data Asset selection:
1. Compile the project in your IDE.
2. Restart the Unreal Editor.
3. Ensure the class is marked with `BlueprintType`.

### Advanced Extensibility
For complex camera behaviors (e.g., dynamic offset based on character speed):
- Create a Blueprint subclass of `CameraModeConfig`.
- Override the `CalculateCamera` (BlueprintNativeEvent).
- Implement custom math using the `TargetActor` and `DeltaTime` inputs.

---

## 🏳️ License & Support
Released under the **MIT License**. Engineered for stability and performance.

> [!NOTE]
> For enterprise-grade support or custom feature requests, please open a GitHub Issue with your UE version and reproduction logs.

© 2024 Shankharaj Datta


