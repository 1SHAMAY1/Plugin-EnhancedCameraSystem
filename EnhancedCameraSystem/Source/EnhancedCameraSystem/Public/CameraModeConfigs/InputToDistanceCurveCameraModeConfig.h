#pragma once

#include "CoreMinimal.h"
#include "CameraModeConfigBase.h"
#include "Curves/CurveFloat.h"
#include "Curves/CurveBase.h"
#include "Engine/EngineTypes.h"
#include "Engine/Scene.h"
#include "InputToDistanceCurveCameraModeConfig.generated.h"

UENUM(BlueprintType)
enum class ERotToDistAxis : uint8
{
    Pitch     UMETA(DisplayName="Pitch"),
    Yaw       UMETA(DisplayName="Yaw")
};


/**
 * UInputToDistanceCurveCameraModeConfig
 *
 * A camera mode configuration that maps player input values onto a distance curve, 
 * enabling smooth, data-driven control over camera distance from the subject. 
 * This allows designers to define how the camera pulls in or zooms out based on 
 * input intensity (e.g., analog stick, mouse wheel, or trigger axis).
 *
 * Key Features:
 * - BlueprintType: Exposed for use and customization in Blueprint workflows.
 * - EditInlineNew / DefaultToInstanced: Supports inline editing and instancing 
 *   inside higher-level camera assets such as mode containers or config maps.
 * - Distance Curve Mapping: Converts input values into camera distance offsets 
 *   for precise designer-driven tuning.
 * - Extends UCameraModeConfigBase: Fully integrated with the Enhanced Camera System 
 *   as a modular and reusable configuration unit.
 *
 * Typical Use:
 * Use this class to implement input-responsive zooming or distance scaling behaviors, 
 * such as dynamically adjusting third-person chase camera distance or simulating 
 * input-based dolly effects.
 */
UCLASS(BlueprintType, EditInlineNew, DefaultToInstanced)
class ENHANCEDCAMERASYSTEM_API UInputToDistanceCurveCameraModeConfig : public UCameraModeConfigBase
{
    GENERATED_BODY()

public:

    UInputToDistanceCurveCameraModeConfig();
    
    /** Socket name to follow (optional) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
    FName FollowSocketName;

    /** Pivot offset applied in pawn-local space (X forward, Y right, Z up) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
    FVector PivotOffset = FVector::ZeroVector;

    /** Camera offset applied in camera-local space (X forward, Y right, Z up) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
    FVector CameraOffset = FVector::ZeroVector;

    /** Runtime curve sampled by pitch (input = pitch degrees). Can be empty. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Curve")
    FRuntimeFloatCurve PitchDistanceCurve;

    /** Runtime curve sampled by yaw relative to pawn yaw (input = relative yaw degrees). Can be empty. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Curve")
    FRuntimeFloatCurve YawDistanceCurve;

    /** Global scale applied after combining axis samples */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Curve")
    float DistanceScale = 1.0f;

    // --- Pitch sampling ---
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Curve")
    bool bEnablePitchCurve = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Curve", meta=(EditCondition="bEnablePitchCurve"))
    float PitchDistanceScale = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Curve", meta=(EditCondition="bEnablePitchCurve"))
    float PitchAngleInputOffset = 0.f;

    // --- Yaw sampling ---
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Curve")
    bool bEnableYawCurve = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Curve", meta=(EditCondition="bEnableYawCurve"))
    float YawDistanceScale = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Curve", meta=(EditCondition="bEnableYawCurve"))
    float YawAngleInputOffset = 0.f;

    /** Post-process override */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
    bool bApplyPostProcess = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera", meta=(EditCondition="bApplyPostProcess"))
    FPostProcessSettings PostProcessSettings;

    /** Blueprint-friendly setters to copy external UCurveFloat assets into the runtime curves */
    UFUNCTION(BlueprintCallable, Category="Camera|Curve")
    void SetPitchCurveAsset(UCurveFloat* CurveAsset);

    UFUNCTION(BlueprintCallable, Category="Camera|Curve")
    void SetYawCurveAsset(UCurveFloat* CurveAsset);

    // Implementation
    virtual FCameraTransformResult CalculateCamera_Implementation(
        APawn* TargetPawn,
        const FVector& CurrentCameraLocation,
        const FRotator& CurrentCameraRotation,
        const FRotator& ControlRotation,
        float DeltaTime) const override;
};
