#include "CameraModeMap.h"

UCameraModeConfigBase* UCameraModeMap::FindModeByTag(const FGameplayTag& Tag) const
{
	for (const FCameraModeMapEntry& E : Entries)
	{
		if (E.ModeTag == Tag)
		{
			return E.ModeConfig;
		}
	}
	return nullptr;
}
