#include "CameraModeConfigs/InputToDistanceCurveCameraModeConfig.h"
#include "GameFramework/Pawn.h"
#include "Components/MeshComponent.h"
#include "Curves/CurveFloat.h"
#include "Kismet/KismetMathLibrary.h"

UInputToDistanceCurveCameraModeConfig::UInputToDistanceCurveCameraModeConfig()
{
    // --- Pitch default curve: domain -89..89, zoom-in at extremes (negative values) ---
    {
        FRichCurve& R = PitchDistanceCurve.EditorCurveData;
        R.Reset();
        FKeyHandle K1 = R.AddKey(0.f, 0.f);
        FKeyHandle K2 = R.AddKey(45.f, -80.f);
        FKeyHandle K3 = R.AddKey(89.f, -200.f);
        FKeyHandle K4 = R.AddKey(270.f, -200.f);
        FKeyHandle K5 = R.AddKey(314.f, -80.f);
        FKeyHandle K6 = R.AddKey(359.f, 0.f);

        // Set interpolation to Auto (cubic) for smoothness
        R.SetKeyInterpMode(K1, RCIM_Cubic);
        R.SetKeyInterpMode(K2, RCIM_Cubic);
        R.SetKeyInterpMode(K3, RCIM_Cubic);
        R.SetKeyInterpMode(K4, RCIM_Cubic);
        R.SetKeyInterpMode(K5, RCIM_Cubic);
        R.SetKeyInterpMode(K6, RCIM_Cubic);
    }

    // --- Yaw default curve: domain 0..359, zoom-in when turned away ---
    {
        FRichCurve& R = YawDistanceCurve.EditorCurveData;
        R.Reset();

        FKeyHandle K1 = R.AddKey(0.f,   0.f);
        FKeyHandle K2 = R.AddKey(45.f, -80.f);
        FKeyHandle K3 = R.AddKey(90.f, -200.f);

        FKeyHandle K4 = R.AddKey(135.f, -80.f);
        FKeyHandle K5 = R.AddKey(180.f,  0.f);
        FKeyHandle K6 = R.AddKey(225.f, -80.f);
        
        FKeyHandle K7 = R.AddKey(269.f, -200.f);
        FKeyHandle K8 = R.AddKey(314.f, -80.f);
        FKeyHandle K9 = R.AddKey(359.f,  0.f);

        R.SetKeyInterpMode(K1, RCIM_Cubic);
        R.SetKeyInterpMode(K2, RCIM_Cubic);
        R.SetKeyInterpMode(K3, RCIM_Cubic);
        R.SetKeyInterpMode(K4, RCIM_Cubic);
        R.SetKeyInterpMode(K5, RCIM_Cubic);
        R.SetKeyInterpMode(K6, RCIM_Cubic);
        R.SetKeyInterpMode(K7, RCIM_Cubic);
        R.SetKeyInterpMode(K8, RCIM_Cubic);
        R.SetKeyInterpMode(K9, RCIM_Cubic);
    }

}

void UInputToDistanceCurveCameraModeConfig::SetPitchCurveAsset(UCurveFloat* CurveAsset)
{
    if (CurveAsset)
    {
        PitchDistanceCurve.EditorCurveData = CurveAsset->FloatCurve;
    }
    else
    {
        PitchDistanceCurve.EditorCurveData = FRichCurve(); // reset
    }
}

void UInputToDistanceCurveCameraModeConfig::SetYawCurveAsset(UCurveFloat* CurveAsset)
{
    if (CurveAsset)
    {
        YawDistanceCurve.EditorCurveData = CurveAsset->FloatCurve;
    }
    else
    {
        YawDistanceCurve.EditorCurveData = FRichCurve(); // reset
    }
}

static bool ResolvePivotLocationForPawn(APawn* Pawn, const FName& SocketName, FVector& OutLocation)
{
    OutLocation = FVector::ZeroVector;
    if (!Pawn)
        return false;

    if (UMeshComponent* MeshComp = Pawn->FindComponentByClass<UMeshComponent>())
    {
        if (SocketName != NAME_None && MeshComp->DoesSocketExist(SocketName))
        {
            OutLocation = MeshComp->GetSocketLocation(SocketName);
            return true;
        }

        // prefer bounds origin for better center
        OutLocation = MeshComp->Bounds.Origin;
        return true;
    }

    OutLocation = Pawn->GetActorLocation();
    return true;
}

FCameraTransformResult UInputToDistanceCurveCameraModeConfig::CalculateCamera_Implementation(
    APawn* TargetPawn,
    const FVector& CurrentCameraLocation,
    const FRotator& CurrentCameraRotation,
    const FRotator& ControlRotation,
    float DeltaTime) const
{
    FCameraTransformResult Out;

    // Preserve default camera properties first (curves should NOT modify these directly)
    Out.Location = CurrentCameraLocation;
    Out.Rotation = CurrentCameraRotation;
    Out.FOV = ModeFOV;
    Out.bHasPostProcess = bApplyPostProcess;
    Out.PostProcessSettings = PostProcessSettings;

    if (!TargetPawn)
    {
        return Out;
    }

    // 1) Resolve pivot base world location (socket -> mesh bounds -> actor)
    FVector PivotBase;
    ResolvePivotLocationForPawn(TargetPawn, FollowSocketName, PivotBase);

    // 2) Apply PivotOffset in pawn local space
    const FTransform PawnXf = TargetPawn->GetActorTransform();
    const FVector PawnFwd = PawnXf.GetUnitAxis(EAxis::X);
    const FVector PawnRight = PawnXf.GetUnitAxis(EAxis::Y);
    const FVector PawnUp = PawnXf.GetUnitAxis(EAxis::Z);
    const FVector PivotOffsetWorld = PawnFwd * PivotOffset.X + PawnRight * PivotOffset.Y + PawnUp * PivotOffset.Z;
    const FVector PivotWorld = PivotBase + PivotOffsetWorld;

    // 3) Determine rotation to use for sampling and camera orientation
    // Note: rotation is computed independently of curve outputs — curves will NOT modify rotation.
    FRotator DesiredRotation = CurrentCameraRotation;
    //const bool bHaveControl = !ControlRotation.IsNearlyZero(0.001f);

    // If no control rot, look-at pivot from current camera (guess using CameraBoomLength)
    const FVector GuessForward = CurrentCameraRotation.Vector();
    const FVector GuessCamPos = PivotWorld - (GuessForward * CameraBoomLength);
    DesiredRotation = UKismetMathLibrary::FindLookAtRotation(GuessCamPos, PivotWorld);

    // NOTE: Clamping/normalization is handled centrally in the CameraManager.
    Out.Rotation = DesiredRotation;

    // -----------------------------
    // 4) Compute pitch and yaw samples (conditionally) using runtime curves
    //     Evaluate both separately, then choose the one with the larger absolute effect.
    // -----------------------------
    float PitchDeltaValue = 0.f;
    float YawDeltaValue = 0.f;
    bool bPitchSampled = false;
    bool bYawSampled = false;

    // Helper to wrap any angle to [0,360)
    auto WrapAngleTo360 = [](float AngleDeg) -> float
    {
        float Wrapped = FMath::Fmod(AngleDeg, 360.0f);
        if (Wrapped < 0.0f) Wrapped += 360.0f;
        return Wrapped;
    };

    if (bEnablePitchCurve && PitchDistanceCurve.GetRichCurveConst())
    {
        float PitchInput = DesiredRotation.Pitch + PitchAngleInputOffset;
        PitchInput = WrapAngleTo360(PitchInput);
        const float PitchSample = PitchDistanceCurve.GetRichCurveConst()->Eval(PitchInput);
        PitchDeltaValue = PitchSample * PitchDistanceScale;
        bPitchSampled = true;
    }

    if (bEnableYawCurve && YawDistanceCurve.GetRichCurveConst())
    {
        const float PawnYaw = TargetPawn->GetActorRotation().Yaw;

        float NormalizedDesiredYaw = FRotator(0.f, DesiredRotation.Yaw, 0.f).GetNormalized().Yaw;
        float NormalizedPawnYaw    = FRotator(0.f, PawnYaw, 0.f).GetNormalized().Yaw;
        float RelativeYawSigned = NormalizedDesiredYaw - NormalizedPawnYaw;

        if (RelativeYawSigned > 180.0f) RelativeYawSigned -= 360.0f;
        if (RelativeYawSigned < -180.0f) RelativeYawSigned += 360.0f;

        float YawInputSigned = RelativeYawSigned + YawAngleInputOffset;
        float YawInput = WrapAngleTo360(YawInputSigned);

        // Robust boundary handling: sample around 0/360 and 180 boundaries
        const float BoundaryEpsilon = 1e-3f;
        const float TinyOffset = 5e-4f;
        float YawSample = 0.f;

        if (FMath::IsNearlyEqual(YawInput, 180.0f, BoundaryEpsilon))
        {
            const float A = WrapAngleTo360(YawInput - TinyOffset);
            const float B = WrapAngleTo360(YawInput + TinyOffset);
            const float SA = YawDistanceCurve.GetRichCurveConst()->Eval(A);
            const float SB = YawDistanceCurve.GetRichCurveConst()->Eval(B);
            YawSample = 0.5f * (SA + SB);
        }
        else if (FMath::IsNearlyEqual(YawInput, 0.0f, BoundaryEpsilon) || FMath::IsNearlyEqual(YawInput, 360.0f, BoundaryEpsilon))
        {
            const float A = WrapAngleTo360(YawInput - TinyOffset);
            const float B = WrapAngleTo360(YawInput + TinyOffset);
            const float SA = YawDistanceCurve.GetRichCurveConst()->Eval(A);
            const float SB = YawDistanceCurve.GetRichCurveConst()->Eval(B);
            YawSample = 0.5f * (SA + SB);
        }
        else
        {
            YawSample = YawDistanceCurve.GetRichCurveConst()->Eval(YawInput);
        }

        YawDeltaValue = YawSample * YawDistanceScale;
        bYawSampled = true;
    }

    // Choose the larger effect by absolute value (preserve sign)
    float SelectedDelta = 0.f;
    bool bSelected = false;
    if (bPitchSampled && bYawSampled)
    {
        SelectedDelta = (FMath::Abs(PitchDeltaValue) >= FMath::Abs(YawDeltaValue)) ? PitchDeltaValue : YawDeltaValue;
        bSelected = true;
    }
    else if (bPitchSampled)
    {
        SelectedDelta = PitchDeltaValue;
        bSelected = true;
    }
    else if (bYawSampled)
    {
        SelectedDelta = YawDeltaValue;
        bSelected = true;
    }

    // -----------------------------
    // 5) Compute final boom length
    // -----------------------------
    float BoomLength = CameraBoomLength;
    if (bSelected)
    {
        BoomLength = CameraBoomLength + (SelectedDelta * DistanceScale);
    }

    // -----------------------------
    // 6) Place camera at pivot - forward * BoomLength
    // -----------------------------
    FVector DesiredLocation = PivotWorld - (DesiredRotation.Vector() * BoomLength);

    // 7) Apply CameraOffset in camera local space (offsets are not driven by curves)
    const FRotationMatrix CamRot(DesiredRotation);
    DesiredLocation += CamRot.GetScaledAxis(EAxis::X) * CameraOffset.X;
    DesiredLocation += CamRot.GetScaledAxis(EAxis::Y) * CameraOffset.Y;
    DesiredLocation += CamRot.GetScaledAxis(EAxis::Z) * CameraOffset.Z;

    // Only Location is changed by curve output; rotation, FOV, and post-process remain as set above.
    Out.Location = DesiredLocation;
    return Out;
}





