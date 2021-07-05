#ifndef __GD_H__
#define __GD_H__

#include <cocos2d.h>

#include "gdMacros.h"

namespace gd {
	inline auto base = reinterpret_cast<uintptr_t>(GetModuleHandle(0));

	inline bool init() {
		//if the base address is valid, all other values should be valid.
		#if (__WARN_DEBUG__ == true)
		static_assert(sizeof(std::string) == 24,
			"Any classes containing member strings or using strings in functions will break!\n"
			"");
		#endif
		return base;
	}
}

namespace FMOD {
	class System;
	class Sound;
	class Channel;
	class DSP;
}
enum FMOD_RESULT;


#include "GDProtocols.h"

#include "delegates/delegates.h"

#include "actions/CCCircleWave.h"

#include "achievement_nodes/AchievementBar.h"
#include "achievement_nodes/AchievementNotifier.h"

#include "menu_nodes/CCMenuItemSpriteExtra.h"
#include "menu_nodes/CCMenuItemToggler.h"
#include "menu_nodes/Slider.h"
#include "menu_nodes/InfoAlertButton.h"

#include "manager_nodes/GManager.h"
#include "manager_nodes/GameManager.h"
#include "manager_nodes/GameSoundManager.h"
#include "manager_nodes/GameLevelManager.h"
#include "manager_nodes/AchievementManager.h"
#include "manager_nodes/GJUserScore.h"
#include "manager_nodes/GJAccountManager.h"
#include "manager_nodes/GJEffectManager.h"
#include "manager_nodes/MusicDownloadManager.h"
#include "manager_nodes/ObjectToolbox.h"

#include "layers_scenes_transitions_nodes/CCNodeContainer.h"
#include "layers_scenes_transitions_nodes/OBB2D.h"
#include "layers_scenes_transitions_nodes/FLAlertLayer.h"
#include "layers_scenes_transitions_nodes/GJDropDownLayer.h"
#include "layers_scenes_transitions_nodes/GJListLayer.h"
#include "layers_scenes_transitions_nodes/LoadingLayer.h"
#include "layers_scenes_transitions_nodes/MenuLayer.h"
#include "layers_scenes_transitions_nodes/TextAlertPopup.h"
#include "layers_scenes_transitions_nodes/LoadingCircle.h"
#include "layers_scenes_transitions_nodes/CCBlockLayer.h"
#include "layers_scenes_transitions_nodes/PauseLayer.h"
#include "layers_scenes_transitions_nodes/GJBaseGameLayer.h"
#include "layers_scenes_transitions_nodes/PlayLayer.h"
#include "layers_scenes_transitions_nodes/LevelEditorLayer.h"
#include "layers_scenes_transitions_nodes/EditorUI.h"
#include "layers_scenes_transitions_nodes/NumberInputLayer.h"
#include "layers_scenes_transitions_nodes/SetIDPopup.h"
#include "layers_scenes_transitions_nodes/CustomSongWidget.h"
#include "layers_scenes_transitions_nodes/CustomSongLayer.h"
#include "layers_scenes_transitions_nodes/SongInfoLayer.h"
#include "layers_scenes_transitions_nodes/GJSpecialColorSelect.h"
#include "layers_scenes_transitions_nodes/HSVWidgetPopup.h"
#include "layers_scenes_transitions_nodes/GJScaleControl.h"
#include "layers_scenes_transitions_nodes/GJRotationControl.h"
#include "layers_scenes_transitions_nodes/SetGroupIDLayer.h"
#include "layers_scenes_transitions_nodes/ProfilePage.h"
#include "layers_scenes_transitions_nodes/LevelInfoLayer.h"
#include "layers_scenes_transitions_nodes/LevelBrowserLayer.h"
#include "layers_scenes_transitions_nodes/CustomizeObjectLayer.h"

#include "scroll_nodes/CCContentLayer.h"
#include "scroll_nodes/CCIndexPath.h"
#include "scroll_nodes/CCScrollLayerExt.h"
#include "scroll_nodes/TableView.h"
#include "scroll_nodes/BoomListView.h"
#include "scroll_nodes/CustomListView.h"
#include "scroll_nodes/ScrollingLayer.h"

#include "audio_nodes/FMODAudioEngine.h"
#include "audio_nodes/FMODSound.h"

#include "level_nodes/GJGameLevel.h"
#include "level_nodes/GJSearchObject.h"
#include "level_nodes/LevelSettingsObject.h"
#include "level_nodes/SongInfoObject.h"
#include "level_nodes/ColorAction.h"

#include "sprite_nodes/CCSpritePlus.h"
#include "sprite_nodes/ColorActionSprite.h"
#include "sprite_nodes/ButtonSprite.h"
#include "sprite_nodes/GameObject.h"
#include "sprite_nodes/CCAnimatedSprite.h"
#include "sprite_nodes/AnimatedShopKeeper.h"
#include "sprite_nodes/PlayerObject.h"
#include "sprite_nodes/TextArea.h"
#include "sprite_nodes/GJItemIcon.h"
#include "sprite_nodes/GJRobotSprite.h"
#include "sprite_nodes/GJSpiderSprite.h"
#include "sprite_nodes/GJSpriteColor.h"
#include "sprite_nodes/SimplePlayer.h"
#include "sprite_nodes/HardStreak.h"

#include "trigger_popups/SetupPickupTriggerPopup.h"

#include "cell_nodes/GJComment.h"

#include "text_input_nodes/CCTextInputNode.h"

#include "other_nodes/CheckpointObject.h"
#include "other_nodes/PlayerCheckpoint.h"
#include "other_nodes/PointNode.h"

#endif
