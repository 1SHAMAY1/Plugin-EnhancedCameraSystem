#include "EnhancedPlayerCameraManager.h"

#include "GameFramework/Pawn.h"
#include "Camera/CameraTypes.h"
#include "Components/MeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "Engine/Engine.h"

#include "HAL/IConsoleManager.h"

// Console variable: 0 = off, 1 = on
static TAutoConsoleVariable<int32> CVarEnhancedCameraDebug(
    TEXT("EnhancedCameraSystem.Debug"),
    0,
    TEXT("Toggle debug drawing for Enhanced Camera System.\n")
    TEXT("0 = Off, 1 = On"),
    ECVF_Default
);

// Console command: set debug state explicitly (0 or 1)
static FAutoConsoleCommand CmdSetEnhancedCameraDebug(
    TEXT("EnhancedCameraSystem.DebugSet"),
    TEXT("Set Enhanced Camera System debug state (0 = Off, 1 = On)"),
    FConsoleCommandWithArgsDelegate::CreateLambda([](const TArray<FString>& Args)
    {
        if (Args.Num() == 0)
        {
            UE_LOG(LogTemp, Warning, TEXT("Usage: EnhancedCameraSystem.DebugSet [0|1]"));
            return;
        }

        int32 InputValue = FCString::Atoi(*Args[0]);
        int32 NewValue = (InputValue != 0) ? 1 : 0;

        IConsoleVariable* Var = IConsoleManager::Get().FindConsoleVariable(TEXT("EnhancedCameraSystem.Debug"));
        if (Var)
        {
            Var->Set(NewValue, ECVF_SetByConsole);
            UE_LOG(LogTemp, Log, TEXT("[EnhancedCameraSystem] Debug state set to: %d"), NewValue);
        }
    })
);



// -----------------------------------------------------------------------------
// AEnhancedPlayerCameraManager
// -----------------------------------------------------------------------------

AEnhancedPlayerCameraManager::AEnhancedPlayerCameraManager()
    : CameraModeMapAsset(nullptr)
{
    PrimaryActorTick.bCanEverTick = true;
    CurrentBlendAlpha = 1.f;
    BlendDuration = 0.f;
    ActiveMode = nullptr;

    PrimaryActorTick.TickGroup = TG_PostUpdateWork;
}

void AEnhancedPlayerCameraManager::SetCameraModeMap(UCameraModeMap* NewMap)
{
    CameraModeMapAsset = NewMap;
}

void AEnhancedPlayerCameraManager::SetCameraModeByTag(const FGameplayTag ModeTag)
{
    if (!CameraModeMapAsset) return;
    UCameraModeConfigBase* Mode = CameraModeMapAsset->FindModeByTag(ModeTag);
    SetCameraModeConfig(Mode, ModeTag);
}

void AEnhancedPlayerCameraManager::SetCameraModeConfig(UCameraModeConfigBase* NewMode, UPARAM(meta = (Categories = "EGCM"))  const FGameplayTag OptionalTag)
{
    if (!NewMode)
    {
        ActiveMode = nullptr;
        ActiveModeTag = FGameplayTag();
        CurrentBlendAlpha = 1.f;
        BlendDuration = 0.f;
        return;
    }

    BeginBlendToMode(NewMode, OptionalTag);
}

void AEnhancedPlayerCameraManager::PushCameraMode(UCameraModeConfigBase* NewMode, UPARAM(meta = (Categories = "EGCM"))  const FGameplayTag OptionalTag)
{
    FCameraStackEntry Entry;
    Entry.Mode = ActiveMode;
    Entry.Tag = ActiveModeTag;
    CameraStack.Push(Entry);

    SetCameraModeConfig(NewMode, OptionalTag);
}

void AEnhancedPlayerCameraManager::PopCameraMode()
{
    if (CameraStack.Num() == 0) return;
    FCameraStackEntry Prev = CameraStack.Pop();
    SetCameraModeConfig(Prev.Mode, Prev.Tag);
}

void AEnhancedPlayerCameraManager::BeginBlendToMode(UCameraModeConfigBase* NewMode, UPARAM(meta = (Categories = "EGCM"))  const FGameplayTag& Tag)
{
    PreviousTransform.Location = GetCameraLocation();
    PreviousTransform.Rotation = GetCameraRotation();
    PreviousTransform.FOV = GetFOVAngle();
    PreviousTransform.bHasPostProcess = false;

    ActiveMode = NewMode;
    ActiveModeTag = Tag;

    BlendDuration = FMath::Max(0.f, ActiveMode->TransitionDuration);
    if (BlendDuration <= KINDA_SMALL_NUMBER)
    {
        CurrentBlendAlpha = 1.f;
    }
    else
    {
        CurrentBlendAlpha = 0.f;
    }
}

void AEnhancedPlayerCameraManager::UpdateCamera(float DeltaTime)
{
    Super::UpdateCamera(DeltaTime);

    if (!PCOwner)
    {
        return;
    }

    APawn* OwnerPawn = PCOwner->GetPawn();
    if (!OwnerPawn)
    {
        return;
    }

    // Use camera cache POV as the "current applied camera state"
    FMinimalViewInfo CurrentCachePOV = GetCameraCacheView();
    const FVector CurCamLoc = CurrentCachePOV.Location;
    const FRotator CurCamRot = CurrentCachePOV.Rotation;
    const float CurFOV = CurrentCachePOV.FOV;

    if (!ActiveMode)
    {
        return;
    }
    if (ActiveMode->bClampPitch)
    {
        ViewPitchMin = ActiveMode->PitchClamp.X;
        ViewPitchMax = ActiveMode->PitchClamp.Y;
    }
    if (ActiveMode->bClampYaw)
    {
        ViewYawMin = ActiveMode->YawClamp.X;
        ViewYawMax = ActiveMode->YawClamp.Y;
    }
    if (ActiveMode->bClampRoll)
    {
        ViewRollMin = ActiveMode->RollClamp.X;
        ViewRollMax = ActiveMode->RollClamp.Y;
    }
    // --- 1) Ask the active mode for the desired (raw) camera transform.
    // CalculateCamera_Implementation should compute pivot (mesh/socket/actor), apply arm length, and return the desired location/rotation.
    FCameraTransformResult RawDesired = ActiveMode->CalculateCamera(
        OwnerPawn,
        CurCamLoc,
        CurCamRot,
        PCOwner->GetControlRotation(),
        DeltaTime
    );

    // Ensure FOV fallback
    if (ActiveMode->ModeFOV <= 0.f)
    {
        RawDesired.FOV = CurFOV;
    }

    // --- 2) Apply lag / smoothing to the final desired location (using only data-asset values) ---
    // Initialize on first frame
    if (LastSmoothedLocation.IsNearlyZero())
    {
        LastSmoothedLocation = RawDesired.Location;
    }

    // Teleport snap threshold derived from arm length (kept same as before)
    const float ArmLength = ActiveMode->CameraBoomLength;
    const float SnapDist = FMath::Max(ArmLength * 2.f, 200.f);

    if (FVector::Dist(LastSmoothedLocation, RawDesired.Location) > SnapDist)
    {
        // Large jump — snap immediately
        LastSmoothedLocation = RawDesired.Location;
    }
    else if (ActiveMode->bEnableLag && DeltaTime > KINDA_SMALL_NUMBER)
    {
        // Apply smoothing using mode's LagSpeed
        LastSmoothedLocation = FMath::VInterpTo(LastSmoothedLocation, RawDesired.Location, DeltaTime, ActiveMode->LagSpeed);
    }
    else
    {
        LastSmoothedLocation = RawDesired.Location;
    }

    // --- 3) Rotation smoothing (optional) using same LagSpeed if lag enabled ---
    if (LastSmoothedRotation.IsNearlyZero())
    {
        LastSmoothedRotation = RawDesired.Rotation;
    }
    else
    {
        if (ActiveMode->bEnableLag && DeltaTime > KINDA_SMALL_NUMBER)
        {
            LastSmoothedRotation = FMath::RInterpTo(LastSmoothedRotation, RawDesired.Rotation, DeltaTime, ActiveMode->LagSpeed);
        }
        else
        {
            LastSmoothedRotation = RawDesired.Rotation;
        }
    }

    // --- Compute final POV (pre-collision) ---
    FMinimalViewInfo NewPOV;
    NewPOV.Location = LastSmoothedLocation;
    NewPOV.Rotation = LastSmoothedRotation;
    NewPOV.FOV = RawDesired.FOV;
    if (RawDesired.bHasPostProcess)
    {
        NewPOV.PostProcessSettings = RawDesired.PostProcessSettings;
    }

    // --- Safe collision update (sphere sweep from pivot -> desired camera) ---
    if (ActiveMode->bEnableSafeCollisionUpdate)
    {
        UWorld* World = GetWorld();
        if (World)
        {
            // --- 1) Determine pivot location (actor location as requested) ---
            const FVector PivotLocation = OwnerPawn->GetActorLocation();

            // --- 2) Setup collision sweep parameters ---
            const float ProbeRadius = (ActiveMode->CameraCollisionProbeSize > 0.f) ? ActiveMode->CameraCollisionProbeSize : 12.f;
            const float MinDistanceFromPivot = 10.f; // keep camera off the surface
            const FCollisionShape Shape = FCollisionShape::MakeSphere(ProbeRadius);

            FHitResult Hit;
            FCollisionQueryParams Params(SCENE_QUERY_STAT(CameraCollision), false, OwnerPawn);
            Params.bReturnPhysicalMaterial = false;

            // Sweep from pivot -> desired camera location
            const FVector DesiredCameraLocation = NewPOV.Location;
            const FVector SweepStart = PivotLocation;
            const FVector SweepEnd = DesiredCameraLocation;
            const FVector SweepDir = (SweepEnd - SweepStart);
            const float SweepLen = SweepDir.Size();

            FVector TargetLocation = DesiredCameraLocation; // fallback when no hit

            if (SweepLen > KINDA_SMALL_NUMBER)
            {
                const FQuat SweepRot = FQuat::Identity;
                const FVector UnitDir = SweepDir / SweepLen;

                // Perform sweep
                bool bHit = World->SweepSingleByChannel(Hit, SweepStart, SweepEnd, SweepRot, ECC_Camera, Shape, Params);

                if (bHit && Hit.bBlockingHit)
                {
                    // compute hit point along sweep (reliable even if ImpactPoint can be slightly off)
                    const float HitTimeClamped = FMath::Clamp(Hit.Time, 0.0f, 1.0f);
                    const FVector HitPointOnSweep = SweepStart + UnitDir * (HitTimeClamped * SweepLen);

                    // Place camera slightly closer to pivot than the hit point (move toward pivot along -normal)
                    TargetLocation = HitPointOnSweep - Hit.ImpactNormal * MinDistanceFromPivot;

                    // Ensure we don't place the camera inside the pivot or behind it: clamp distance from pivot
                    const float DistFromPivot = FVector::Dist(TargetLocation, PivotLocation);
                    const float MinAllowedDist = MinDistanceFromPivot; // keep at least this far from pivot
                    if (DistFromPivot < MinAllowedDist)
                    {
                        TargetLocation = PivotLocation + (UnitDir * MinAllowedDist);
                    }

                    // Optional debug visual (controlled by cvar)
                    if (CVarEnhancedCameraDebug.GetValueOnGameThread() == 1)
                    {
                        DrawDebugLine(World, HitPointOnSweep, HitPointOnSweep + Hit.ImpactNormal * 24.f, FColor::Red, false, 0.f, 0, 1.f);
                    }
                }
            }

            // --- 3) Smooth interpolation using persistent LastCollisionLocation to avoid snapping ---
            if (LastCollisionLocation.IsNearlyZero())
            {
                LastCollisionLocation = DesiredCameraLocation;
            }

            const float CollisionInterpSpeed = (ActiveMode->CameraCollisionInterpSpeed > 0.f) ? ActiveMode->CameraCollisionInterpSpeed : 12.f;

            if (DeltaTime > KINDA_SMALL_NUMBER)
            {
                LastCollisionLocation = FMath::VInterpTo(LastCollisionLocation, TargetLocation, DeltaTime, CollisionInterpSpeed);
            }
            else
            {
                LastCollisionLocation = TargetLocation;
            }

            // Final safety clamp: do not exceed desired camera distance from pivot (prevents overshoot)
            const float DesiredDist = FVector::Dist(DesiredCameraLocation, PivotLocation);
            const float FinalDist = FVector::Dist(LastCollisionLocation, PivotLocation);
            if (FinalDist > DesiredDist)
            {
                // push back to desired distance along direction from pivot
                const FVector DirFromPivot = (LastCollisionLocation - PivotLocation).GetSafeNormal();
                LastCollisionLocation = PivotLocation + DirFromPivot * DesiredDist;
            }

            // Apply collision-corrected, smoothed location to POV
            NewPOV.Location = LastCollisionLocation;
        }
    }

    // --- Debug drawing & on-screen message (controlled by console var: 0/1) ---
    if (CVarEnhancedCameraDebug.GetValueOnGameThread() == 1)
    {
        UWorld* World = GetWorld();
        if (World)
        {
            constexpr float DisplayTime = 0.f; // single-frame
            constexpr float SphereRadius = 8.f;
            constexpr int32 SphereSegments = 12;
            constexpr float LineThickness = 1.f;

            // Pivot is actor location (explicit)
            const FVector Pivot = OwnerPawn->GetActorLocation();

            // End point: the point at end of the previous "green forward" line (we'll compute from POV forward)
            const FVector CameraLoc = NewPOV.Location;
            const FRotator CameraRot = NewPOV.Rotation;
            const FVector CameraForward = CameraRot.Vector();
            const FVector ForwardEnd = CameraLoc + (CameraForward * FMath::Clamp(ArmLength * 0.5f, 50.f, 300.f));

            // Draw two spheres only: one at pivot and one at ForwardEnd
            DrawDebugSphere(World, Pivot, SphereRadius, SphereSegments, FColor::Red, false, DisplayTime, 0, LineThickness);
            DrawDebugSphere(World, ForwardEnd, SphereRadius / 2, SphereSegments, FColor::Green, false, DisplayTime, 0, LineThickness);

            // Join both spheres by a blue line
            DrawDebugLine(World, Pivot, ForwardEnd, FColor::Blue, false, DisplayTime, 0, LineThickness);

            // Prepare debug message
            const FString ModeName = ActiveModeTag.IsValid() ? ActiveModeTag.ToString() : FString(TEXT("None"));
            const FString Msg = FString::Printf(
                TEXT("[EnhancedCameraSystem] Debug ON\n")
                TEXT("Mode: %s\n")
                TEXT("FOV: %.1f\n")
                TEXT("CamLoc: X=%.1f Y=%.1f Z=%.1f\n")
                TEXT("Pivot:  X=%.1f Y=%.1f Z=%.1f"),
                *ModeName,
                NewPOV.FOV,
                CameraLoc.X, CameraLoc.Y, CameraLoc.Z,
                Pivot.X, Pivot.Y, Pivot.Z
            );

            // Draw text to the LEFT of the forward-end sphere
            const FVector RightVec = FRotationMatrix(CameraRot).GetScaledAxis(EAxis::Y);
            const FVector LeftOffset = -RightVec * 30.f;
            const FVector UpOffset = FVector(0.f, 0.f, 10.f);
            const FVector TextPosLeft = ForwardEnd + LeftOffset + UpOffset;

            DrawDebugString(World, TextPosLeft, Msg, nullptr, FColor::Yellow, DisplayTime, true);
        }
    }

    ApplyCameraModifiers(DeltaTime,NewPOV);
    // --- Finally apply the composed (and collision-corrected) camera POV to the camera cache ---
    SetCameraCachePOV(NewPOV);
}
