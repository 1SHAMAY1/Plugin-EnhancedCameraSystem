# Enhanced Camera System (ECS)

[![Unreal Engine](https://img.shields.io/badge/Unreal%20Engine-5.3-blue?logo=unrealengine&logoColor=white)](https://www.unrealengine.com/)
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
| **Unreal Engine** | 5.3 |
| **Project Type** | C++ (Runtime Module) |
| **Engine Modules** | `GameplayTags`, `Core`, `Engine` |

### Installation Guide

#### 📥 Option A: Release ZIP (Recommended)
1. Download the latest packaged plugin ZIP.
2. Extract the contents into your project's `Plugins/` directory.
3. Restart the Editor — no project regeneration is required for pre-built binaries.

#### 🛠️ Option B: From Source (GitHub)
1. Clone/Copy the repository to `<YourProject>/Plugins/EnhancedCameraSystem/`.
2. Regenerate project files (Right-click `.uproject` → **Generate Visual Studio project files**).
3. Build the project in your IDE or let the Editor compile on startup.

---

## 🏗️ Core Architecture & Workflow

ECS utilizes a decoupled architecture where the **Camera Manager** handles orchestration and the **Data Assets** define state.

### 1. The Manager
Set your `PlayerCameraManagerClass` in your `GameMode` or `PlayerController` to:
`AEnhancedPlayerCameraManager`

### 3. Production-Ready Config Templates
The plugin includes specialized camera configurations to accelerate development:

| Config Class | Best Use Case | Key Behavior |
| :--- | :--- | :--- |
| **`GenericCameraModeConfig`** | General Gameplay | Standard socket-follow with configurable offsets and lag. |
| **`InputFollowCameraModeConfig`** | Third Person / Orbit | Camera orientation natively follows player input axes. |
| **`InputToDistanceCurveCameraModeConfig`**| Dynamic Zoom / Dolly | Maps player input to camera distance via customizable curves. |

### 4. Technical Reference (Data Assets)
| Variable | Type | Description |
| :--- | :--- | :--- |
| `FollowSocketName` | `FName` | The bone/socket to track for positional anchoring. |
| `SocketOffset` | `FVector` | Relative offset from the anchor socket. |
| `TargetOffset` | `FVector` | Offset for the look-at target (Ideal for over-the-shoulder). |
| `bEnableLag` | `bool` | Toggles sophisticated positional/rotational smoothing. |
| `TransitionDuration`| `float` | Controlled interpolation time (seconds) between camera states. |

---

## 🔗 Resources & Integration

### 🎮 Sample Project
> [!TIP]
> **[Download Sample Project (UE5.3)](https://drive.google.com/drive/folders/1L0G4GznlmOKkiwyFeq7Und8BddIfQ9yr?usp=sharing)**  
> Includes preconfigured camera modes, workflow examples, and a test character demonstrating runtime switching.

### 🧩 Technical Implementation

#### Blueprint Integration
Drag from `Get Player Camera Manager` → **Cast to AEnhancedPlayerCameraManager** → Use `SetCameraModeByTag` (Global) or `PushCameraMode` (Contextual).

#### C++ State Management
```cpp
// Example: Standardizing a High-Priority State Transition
if (AEnhancedPlayerCameraManager* EnhancedCam = Cast<AEnhancedPlayerCameraManager>(PlayerCameraManager))
{
    // Contextual Push: E.g., Entering Aim-Down-Sights (ADS)
    EnhancedCam->PushCameraMode(ADSConfigAsset, FGameplayTag::RequestGameplayTag("Camera.State.ADS"));
    
    // Safety Fallback: Pop back to previous gameplay state
    // EnhancedCam->PopCameraMode(); 
}
```

---

## 🔍 Troubleshooting & Pipeline Tips

### Linker Errors (Unresolved Symbols)
Ensure your module's `.uplugin` and `Build.cs` are synchronized. Linker errors typically indicate a missing dependency on `Core` or `Engine`.
- **Action**: Verify `EnhancedCameraSystem` is added to `PublicDependencyModuleNames`.

### DataAsset Visibility
If custom configs are not appearing: Compile in IDE → Restart Editor → Right-click → **Misc > Data Asset**.

### Advanced Extensibility
For complex logic (e.g., raytraced collision avoidance), extend `CameraModeConfig` in Blueprint and override the `CalculateCamera` (BlueprintNativeEvent).

---

## 🏳️ License & Support
Released under the **MIT License**. Engineered for stability and performance.

> [!NOTE]
> For enterprise-grade support or custom feature requests, please open a GitHub Issue with your UE version and reproduction logs.

© 2024 Shankharaj Datta


