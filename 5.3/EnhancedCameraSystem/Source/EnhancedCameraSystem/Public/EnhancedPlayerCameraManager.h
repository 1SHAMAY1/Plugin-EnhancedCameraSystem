#pragma once

#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "CameraModeConfigs/CameraModeConfigBase.h"
#include "CameraModeMap.h"
#include "EnhancedCameraTypes.h"
#include "Engine/Scene.h"
#include "EnhancedPlayerCameraManager.generated.h"

USTRUCT()
struct FCameraStackEntry
{
    GENERATED_BODY()

    UPROPERTY()
    UCameraModeConfigBase* Mode = nullptr;

    UPROPERTY()
    FGameplayTag Tag;
};

/**
 * Enhanced PlayerCameraManager which reads camera mode data assets and applies transforms.
 */
UCLASS()
class AEnhancedPlayerCameraManager : public APlayerCameraManager
{
    GENERATED_BODY()

public:
    AEnhancedPlayerCameraManager();

    /** Map asset (tag -> config) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
    UCameraModeMap* CameraModeMapAsset;

    /** Currently active mode */
    UPROPERTY(BlueprintReadOnly, Category="Camera")
    UCameraModeConfigBase* ActiveMode;

    /** Associated tag */
    UPROPERTY(BlueprintReadOnly, Category="Camera")
    FGameplayTag ActiveModeTag;

    /** Simple non-additive stack (push/pop) */
    UPROPERTY()
    TArray<FCameraStackEntry> CameraStack;

    /** Set mode by tag at runtime */
    UFUNCTION(BlueprintCallable, Category="Camera")
    void SetCameraModeByTag(
        UPARAM(meta = (Categories = "EGCM.Mode")) const FGameplayTag ModeTag
    );

    /** Directly set mode */
    UFUNCTION(BlueprintCallable, Category="Camera")
    void SetCameraModeConfig(
        UCameraModeConfigBase* NewMode,
        UPARAM(meta = (Categories = "EGCM")) const FGameplayTag OptionalTag
    );

    /** Push new mode (saves previous) */
    UFUNCTION(BlueprintCallable, Category="Camera")
    void PushCameraMode(
        UCameraModeConfigBase* NewMode,
        UPARAM(meta = (Categories = "EGCM")) const FGameplayTag OptionalTag
    );


    /** Pop to previous mode */
    UFUNCTION(BlueprintCallable, Category="Camera")
    void PopCameraMode();

    /** Replace the CameraModeMap asset at runtime */
    UFUNCTION(BlueprintCallable, Category="Camera")
    void SetCameraModeMap(UCameraModeMap* NewMap);

protected:
    // blending helpers
    float CurrentBlendAlpha;
    float BlendDuration;
    FCameraTransformResult PreviousTransform;

    virtual void UpdateCamera(float DeltaTime) override;

    FVector LastSmoothedPivot;
    FVector LastSmoothedLocation;
    FRotator LastSmoothedRotation;
    FVector LastCollisionLocation;

private:
    void BeginBlendToMode(UCameraModeConfigBase* NewMode, const FGameplayTag& Tag);
};
