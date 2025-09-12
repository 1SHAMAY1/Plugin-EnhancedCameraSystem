#include "CameraModeConfigs/GenericCameraModeConfig.h"

#include "GameFramework/Pawn.h"
#include "Kismet/KismetMathLibrary.h"

FCameraTransformResult UGenericCameraModeConfig::CalculateCamera_Implementation(APawn* TargetPawn,
                                                                                const FVector& CurrentCameraLocation, const FRotator& CurrentCameraRotation, const FRotator& ControlRotation,
                                                                                float DeltaTime) const
{
    FCameraTransformResult Out;
    Out.Location = CurrentCameraLocation;
    Out.Rotation = CurrentCameraRotation;
    Out.FOV = ModeFOV;
    Out.bHasPostProcess = bApplyPostProcess;
    Out.PostProcessSettings = PostProcessSettings;

    if (!TargetPawn)
    {
        return Out;
    }

    // --- 1) Resolve pivot (socket location or fallback) ---
    FVector PivotWorldBase = FVector::ZeroVector;
    if (UMeshComponent* MeshComp = TargetPawn->FindComponentByClass<UMeshComponent>())
    {
        if (FollowSocketName != NAME_None && MeshComp->DoesSocketExist(FollowSocketName))
        {
            PivotWorldBase = MeshComp->GetSocketLocation(FollowSocketName);
        }
        else
        {
            PivotWorldBase = TargetPawn->GetActorLocation();
        }
    }
    else
    {
        PivotWorldBase = TargetPawn->GetActorLocation();
    }

    // --- 2) Apply PivotOffset (socket offset) in pawn local space ---
    const FTransform PawnXf = TargetPawn->GetActorTransform();
    const FVector PawnFwd   = PawnXf.GetUnitAxis(EAxis::X);
    const FVector PawnRight = PawnXf.GetUnitAxis(EAxis::Y);
    const FVector PawnUp    = PawnXf.GetUnitAxis(EAxis::Z);

    const FVector PivotOffsetWorld =
        PawnFwd   * PivotOffset.X +
        PawnRight * PivotOffset.Y +
        PawnUp    * PivotOffset.Z;

    FVector PivotWorld = PivotWorldBase + PivotOffsetWorld;

    // --- 3) Rotation selection ---
    FRotator DesiredRotation = CurrentCameraRotation;
    const bool bHaveControl = !ControlRotation.IsNearlyZero(0.001f);

    if (bUseFixedRotation)
    {
        DesiredRotation = FixedRotation;
    }
    else if (bHaveControl)
    {
        DesiredRotation = ControlRotation;
    }
    else
    {
        const FVector GuessForward = CurrentCameraRotation.Vector();
        const float Arm = FMath::Max(0.f, CameraBoomLength);
        const FVector GuessCamPos = PivotWorld - (GuessForward * Arm);
        DesiredRotation = UKismetMathLibrary::FindLookAtRotation(GuessCamPos, PivotWorld);
    }

    // NOTE:  Clamping is handled centrally in the CameraManager.

    Out.Rotation = DesiredRotation;

    // --- 4) Camera boom (arm length) ---
    FVector DesiredLocation = PivotWorld;
    if (CameraBoomLength > KINDA_SMALL_NUMBER)
    {
        DesiredLocation = PivotWorld - (DesiredRotation.Vector() * CameraBoomLength);
    }

    // --- 5) Apply CameraOffset (target offset) in CAMERA local space ---
    const FRotationMatrix CamRotMatrix(DesiredRotation);
    DesiredLocation += CamRotMatrix.GetScaledAxis(EAxis::X) * CameraOffset.X; // forward/back
    DesiredLocation += CamRotMatrix.GetScaledAxis(EAxis::Y) * CameraOffset.Y; // right/left
    DesiredLocation += CamRotMatrix.GetScaledAxis(EAxis::Z) * CameraOffset.Z; // up/down

    Out.Location = DesiredLocation;

    return Out;
}
