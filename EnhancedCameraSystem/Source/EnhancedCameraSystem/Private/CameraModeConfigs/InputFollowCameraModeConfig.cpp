#include "CameraModeConfigs/InputFollowCameraModeConfig.h"
#include "Components/MeshComponent.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/Controller.h"
#include "GameFramework/PlayerController.h"
#include "Engine/EngineTypes.h"


UInputFollowCameraModeConfig::UInputFollowCameraModeConfig()
{
	FollowSocketName = NAME_None;
	PivotOffset = FVector::ZeroVector;
	CameraOffset = FVector::ZeroVector;
	YawAngleOffset = 0.f;
	bUseYaw = true;
	bUsePitch = true;
	RotationInterpSpeed = 10.f;
	PositionInterpSpeed = 800.f;

	bApplyAsInput = true;
	YawInputScale = 180.f;
	PitchInputScale = 90.f;
	InputDeadzone = 0.01f;

	bClampPitch = true;
	PitchClamp = FVector2D(-89.f, 89.f);

	bClampYaw = true;
	YawClamp = FVector2D(0.f, 359.f);

	bClampRoll = true;
	RollClamp = FVector2D(-89.f, 89.f);

	bApplyPostProcess = false;

	CameraBoomLength = 400.f;
}

FCameraTransformResult UInputFollowCameraModeConfig::CalculateCamera_Implementation(
    APawn* TargetPawn,
    const FVector& CurrentCameraLocation,
    const FRotator& CurrentCameraRotation,
    const FRotator& ControlRotation,
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

    // --- 2) Apply PivotOffset (pawn local space) ---
    const FTransform PawnXf = TargetPawn->GetActorTransform();
    const FVector PawnFwd   = PawnXf.GetUnitAxis(EAxis::X);
    const FVector PawnRight = PawnXf.GetUnitAxis(EAxis::Y);
    const FVector PawnUp    = PawnXf.GetUnitAxis(EAxis::Z);

    const FVector PivotOffsetWorld =
        PawnFwd   * PivotOffset.X +
        PawnRight * PivotOffset.Y +
        PawnUp    * PivotOffset.Z;

    const FVector PivotWorld = PivotWorldBase + PivotOffsetWorld;

    // --- 3) Rotation selection based on input/control/fallback ---
    FRotator DesiredRot = CurrentCameraRotation;

    // Use last movement input to determine desired yaw/pitch when available
    const FVector LastInputRaw = TargetPawn->GetLastMovementInputVector();
    const float InputMag = LastInputRaw.Size();
    const bool bHasInput = InputMag > InputDeadzone;
    const FVector LastInput = bHasInput ? LastInputRaw.GetSafeNormal() : FVector::ZeroVector;

    if (bUseYaw && bHasInput)
    {
        DesiredRot.Yaw = LastInput.Rotation().Yaw + YawAngleOffset;
    }
    else if (!ControlRotation.IsNearlyZero(0.001f))
    {
        // if control rotation is available, prefer it when not following input
        DesiredRot.Yaw = ControlRotation.Yaw;
    }
    // else keep current yaw (no override)

    if (bUsePitch && bHasInput)
    {
        DesiredRot.Pitch = ControlRotation.Pitch;
    }
    else if (!ControlRotation.IsNearlyZero(0.001f) && !bUsePitch)
    {
        // if control rotation is present and we aren't using input-driven pitch, keep control pitch
        DesiredRot.Pitch = CurrentCameraRotation.Pitch;
    }
    // else keep current pitch

    DesiredRot.Roll = CurrentCameraRotation.Roll;

    // NOTE:  Clamping is handled centrally in the CameraManager,
    // this is for input only rotation not actual camera rotation,
    // this only effects how far input follow camera.
    FRotator Clamped = DesiredRot;
    if (bClampPitch) Clamped.Pitch = FMath::ClampAngle(Clamped.Pitch, PitchClamp.X, PitchClamp.Y);
    if (bClampYaw)   Clamped.Yaw   = FMath::ClampAngle(Clamped.Yaw,   YawClamp.X,   YawClamp.Y);
    if (bClampRoll)  Clamped.Roll  = FMath::ClampAngle(Clamped.Roll,  RollClamp.X,  RollClamp.Y);

    // --- 4) Input injection or direct rotation ---
    bool bInjectedControllerInput = false;
    if (bApplyAsInput && bHasInput && DeltaTime > KINDA_SMALL_NUMBER)
    {
        const float DeltaYaw   = FMath::UnwindRadians(FMath::DegreesToRadians(Clamped.Yaw - CurrentCameraRotation.Yaw)) * (180.0f / PI);
        const float RawDeltaPitch = (CurrentCameraRotation.Pitch < 90.f)
            ? (Clamped.Pitch + CurrentCameraRotation.Pitch)
            : (Clamped.Pitch - CurrentCameraRotation.Pitch);

        const float DeltaPitch = FMath::IsNearlyZero(RawDeltaPitch, KINDA_SMALL_NUMBER) ? 0.f : RawDeltaPitch;


        const float MaxYawChange   = YawInputScale * DeltaTime;
        const float MaxPitchChange = PitchInputScale * DeltaTime;

        const float AppliedYawChange   = FMath::Clamp(DeltaYaw,   -MaxYawChange,   MaxYawChange);
        const float AppliedPitchChange = FMath::Clamp(DeltaPitch, -MaxPitchChange, MaxPitchChange);

        if (AController* Controller = TargetPawn->GetController())
        {
            if (Controller->IsLocalController())
            {
                const float NormYaw = (FMath::Abs(YawInputScale) > KINDA_SMALL_NUMBER) ? (AppliedYawChange / (YawInputScale * DeltaTime)) : 0.f;
                const float NormPitch = (FMath::Abs(PitchInputScale) > KINDA_SMALL_NUMBER) ? (AppliedPitchChange / (PitchInputScale * DeltaTime)) : 0.f;

                TargetPawn->AddControllerYawInput(FMath::Clamp(NormYaw, -1.f, 1.f));
                TargetPawn->AddControllerPitchInput(FMath::Clamp(NormPitch, -1.f, 1.f));

                bInjectedControllerInput = true;
            }
        }
    }

    // If we didn't inject input, use the clamped rotation directly
    if (!bInjectedControllerInput)
    {
        Out.Rotation = DesiredRot;
    }
    else
    {
        // keep current rotation; controller will update rotation next frame
        Out.Rotation = CurrentCameraRotation;
    }

    // --- 5) Camera boom (arm length) + camera offset in camera-local space ---
    const float Arm = FMath::Max(0.f, CameraBoomLength);
    FVector DesiredLocation = PivotWorld;
    if (Arm > KINDA_SMALL_NUMBER)
    {
        // use the rotation we're outputting for camera placement
        const FRotator UseRot = Out.Rotation;
        DesiredLocation = PivotWorld - (UseRot.Vector() * Arm);
    }

    // Apply CameraOffset in camera local space (forward/right/up)
    const FRotationMatrix CamRotMatrix(Out.Rotation);
    DesiredLocation += CamRotMatrix.GetScaledAxis(EAxis::X) * CameraOffset.X; // forward/back
    DesiredLocation += CamRotMatrix.GetScaledAxis(EAxis::Y) * CameraOffset.Y; // right/left
    DesiredLocation += CamRotMatrix.GetScaledAxis(EAxis::Z) * CameraOffset.Z; // up/down

    Out.Location = DesiredLocation;

    return Out;
}