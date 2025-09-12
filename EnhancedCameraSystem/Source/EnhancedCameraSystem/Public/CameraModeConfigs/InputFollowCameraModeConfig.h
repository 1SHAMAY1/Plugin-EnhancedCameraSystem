#pragma once

#include "CoreMinimal.h"
#include "CameraModeConfigBase.h"
#include "Engine/Scene.h"
#include "InputFollowCameraModeConfig.generated.h"

/**
 * UInputFollowCameraModeConfig
 *
 * A specialized camera mode configuration that drives camera behavior based on player input. 
 * This mode typically makes the camera follow or align with input-driven orientation changes 
 * (such as mouse movement, controller stick input, or touch gestures), providing responsive 
 * player-controlled camera dynamics.
 *
 * Key Features:
 * - BlueprintType: Can be easily exposed and configured in Blueprints.
 * - EditInlineNew / DefaultToInstanced: Allows inline editing and instancing within 
 *   higher-level camera assets (e.g., camera config maps or mode containers).
 * - Extends UCameraModeConfigBase: Integrates seamlessly with the Enhanced Camera System 
 *   as a reusable and modular configuration unit.
 *
 * Typical Use:
 * Use this class to configure input-following camera behavior for third-person, first-person, 
 * or hybrid setups where camera orientation and position should dynamically respond to player 
 * input rather than being fixed or purely target-driven.
 */
UCLASS(BlueprintType, EditInlineNew, DefaultToInstanced)
class ENHANCEDCAMERASYSTEM_API UInputFollowCameraModeConfig : public UCameraModeConfigBase
{
	GENERATED_BODY()

public:
	UInputFollowCameraModeConfig();

	/** Socket name to follow (optional). If empty, uses pawn actor location. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
	FName FollowSocketName;

	/** Offset from the socket/actor location applied to final camera position (local). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
	FVector PivotOffset = FVector::ZeroVector;

	/** Target offset relative to the actor (used for look-at). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
	FVector CameraOffset = FVector::ZeroVector;

	/** Additional yaw offset applied on top of calculated yaw (degrees). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
	float YawAngleOffset = 0.f;

	/** Whether to use last movement input to influence yaw */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
	bool bUseYaw = true;

	/** Whether to use control rotation / input to influence pitch */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
	bool bUsePitch = false;

	/** Interpolation speed for rotation (degrees/sec). Higher -> snappier (used when bApplyAsInput==false). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera", meta=(ClampMin="0.0"))
	float RotationInterpSpeed = 10.f;

	/** Interpolation speed for position (units/sec) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera", meta=(ClampMin="0.0"))
	float PositionInterpSpeed = 800.f;

	/** If true, apply desired yaw/pitch as incremental "input" deltas instead of setting rotation directly. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
	bool bApplyAsInput = true;

	/** Scale of yaw "input" when bApplyAsInput==true (degrees per second). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera", meta=(EditCondition="bApplyAsInput"))
	float YawInputScale = 180.f;

	/** Scale of pitch "input" when bApplyAsInput==true (degrees per second). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera", meta=(EditCondition="bApplyAsInput"))
	float PitchInputScale = 90.f;

	/** Deadzone for last movement input magnitude below which no input-following occurs */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera", meta=(ClampMin="0.0"))
	float InputDeadzone = 0.01f;

	/** Post process override */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
	bool bApplyPostProcess = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera", meta=(EditCondition="bApplyPostProcess"))
	FPostProcessSettings PostProcessSettings;

	virtual FCameraTransformResult CalculateCamera_Implementation(
		APawn* TargetPawn,
		const FVector& CurrentCameraLocation,
		const FRotator& CurrentCameraRotation,
		const FRotator& ControlRotation,
		float DeltaTime) const override;
	
};
