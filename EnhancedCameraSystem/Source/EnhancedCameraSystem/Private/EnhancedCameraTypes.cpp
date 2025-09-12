#include "EnhancedCameraTypes.h"

namespace EnhancedCameraGameplayTags
{
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Mode_FPP, "ECGM.Mode.Test.FPP", "First person perspective");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Mode_TPP, "ECGM.Mode.Test.TPP", "Third person perspective");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Mode_TDP, "ECGM.Mode.Test.TDP", "Top down perspective");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Mode_InputFolllowCamera, "ECGM.Mode.Test.InputFollowCamera", "Camera follows movement input");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Mode_InputToDistanceCurve, "ECGM.Mode.Test.InputToDistanceCurve", "Camera updates based on distance curve which uses input");

}
