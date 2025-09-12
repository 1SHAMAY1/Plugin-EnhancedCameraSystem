#pragma once

#include "CoreMinimal.h"
#include "CameraModeConfigBase.h"
#include "Engine/Scene.h"
#include "GenericCameraModeConfig.generated.h"

/**
 * UGenericCameraModeConfig
 *
 * A general-purpose camera mode configuration class that can be created and customized 
 * directly within the editor. Designed to be instanced and edited inline for flexible 
 * per-camera setup, it provides a foundation for defining camera behavior through data-driven 
 * configurations without requiring custom subclasses for every variation.
 *
 * Key Features:
 * - BlueprintType: Exposed to Blueprints for data-driven workflows.
 * - EditInlineNew / DefaultToInstanced: Supports inline editing and instancing directly 
 *   inside other assets (e.g., config maps, mode containers).
 * - Extends UCameraModeConfigBase: Integrates into the Enhanced Camera System as a reusable 
 *   and extendable configuration unit.
 *
 * Typical Use:
 * Use this class to define default camera mode parameters, then embed or reference it in 
 * higher-level camera configuration assets to drive runtime camera behavior.
 */
UCLASS(BlueprintType, EditInlineNew, DefaultToInstanced)
class ENHANCEDCAMERASYSTEM_API UGenericCameraModeConfig : public UCameraModeConfigBase
{
    GENERATED_BODY()

public:

    /** Socket name to follow (optional) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
    FName FollowSocketName;

    /** Offset from the socket/actor location applied to final camera position */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
    FVector PivotOffset = FVector::ZeroVector;

    /** Target offset relative to the actor (used for look-at) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
    FVector CameraOffset = FVector::ZeroVector;

    /** Use a fixed rotation instead of look-at or input-driven rotation */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
    bool bUseFixedRotation = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera", meta=(EditCondition="bUseFixedRotation"))
    FRotator FixedRotation = FRotator::ZeroRotator;

    /** Post process override */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
    bool bApplyPostProcess = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera", meta=(EditCondition="bApplyPostProcess"))
    FPostProcessSettings PostProcessSettings;

    // Implementation
    virtual FCameraTransformResult CalculateCamera_Implementation(
        APawn* TargetPawn,
        const FVector& CurrentCameraLocation,
        const FRotator& CurrentCameraRotation,
        const FRotator& ControlRotation,
        float DeltaTime) const override;
};
