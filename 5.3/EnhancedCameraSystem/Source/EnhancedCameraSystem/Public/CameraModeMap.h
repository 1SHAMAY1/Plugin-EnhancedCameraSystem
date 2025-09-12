#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "CameraModeConfigs/CameraModeConfigBase.h"
#include "CameraModeMap.generated.h"

USTRUCT(BlueprintType)
struct FCameraModeMapEntry
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera", meta = (Categories = "EGCM.Mode"))
    FGameplayTag ModeTag;

    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite, Category="Camera")
    UCameraModeConfigBase* ModeConfig = nullptr;
};

/**
 * Map from GameplayTag -> CameraModeConfig.
 */
UCLASS(BlueprintType)
class ENHANCEDCAMERASYSTEM_API UCameraModeMap : public UDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Camera")
    TArray<FCameraModeMapEntry> Entries;

    UFUNCTION(BlueprintCallable, Category="Camera")
    UCameraModeConfigBase* FindModeByTag(const FGameplayTag& Tag) const;
};
