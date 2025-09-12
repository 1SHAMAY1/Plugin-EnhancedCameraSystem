#pragma once

#include "CoreMinimal.h"
#include "EnhancedCameraTypes.h"
#include "Engine/Scene.h"
#include "CameraModeConfigBase.generated.h"

/**
 * Per-mode camera configuration as a UObject.
 * BlueprintNativeEvent CalculateCamera allows overriding in BP subclass of the DataAsset.
 */
UCLASS(BlueprintType, EditInlineNew, Abstract, DefaultToInstanced)
class UCameraModeConfigBase : public UObject
{
    GENERATED_BODY()

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera", meta=(ClampMin="0.0"))
    bool bEnableSafeCollisionUpdate = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera", meta=(ClampMin="0.0"))
    float CameraCollisionProbeSize = 28.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera", meta=(ClampMin="0.0"))
    float CameraCollisionInterpSpeed = 10.0f;
    
    /** Target arm length (spring-arm style). If > 0 we place the camera behind target along Rotation vector */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera", meta=(ClampMin="0.0"))
    float CameraBoomLength = 400.f;
    
    /** Blend duration when entering this mode (seconds) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
    float TransitionDuration = 0.5f;

    /** FOV for this mode. If <= 0, camera manager default is used */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
    float ModeFOV = 90.f;
    
    /** Enable positional lag (smooth follow) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
    bool bEnableLag = true;

    /** How quickly camera snaps to target when lag is enabled */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera", meta=(EditCondition="bEnableLag"))
    float LagSpeed = 10.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
    bool bClampPitch = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera", meta=(EditCondition="bClampPitch"))
    FVector2D PitchClamp = FVector2D(-89.f, 89.f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
    bool bClampYaw = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera", meta=(EditCondition="bClampYaw"))
    FVector2D YawClamp = FVector2D(0.f, 359.f);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
    bool bClampRoll = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera", meta=(EditCondition="bClampRoll"))
    FVector2D RollClamp = FVector2D(-89.f, 89.f);

    /**
     * Compute the camera transform for this mode.
     * Added ControlRotation so the data asset can respect player input.
     * BlueprintNativeEvent so you can override in BP DataAsset.
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Camera")
    FCameraTransformResult CalculateCamera(APawn* TargetPawn, const FVector& CurrentCameraLocation, const FRotator& CurrentCameraRotation, const FRotator& ControlRotation, float DeltaTime) const;
    virtual FCameraTransformResult CalculateCamera_Implementation(APawn* TargetPawn, const FVector& CurrentCameraLocation, const FRotator& CurrentCameraRotation, const FRotator& ControlRotation, float DeltaTime) const;

};
