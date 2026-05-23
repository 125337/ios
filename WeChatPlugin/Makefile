ARCHS = arm64
TARGET = iphone:latest:14.0

THEOS_DEVICE_IP = localhost
THEOS_DEVICE_PORT = 2222

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = MioHelper

MioHelper_FILES = Tweak.m \
	Config/PluginConfig.m \
	Core/HookEngine.m \
	Core/WPAlert.m \
	Core/WeChatAlertHelper.m \
	Registry/HookRegistry.m \
	Registry/FeatureModuleRegistry.m \
	Registry/FeatureRegistry.m \
	Modules/Revoke/RevokeHandler.m \
	Modules/Revoke/RevokeHook.m \
	Modules/Revoke/RevokeFormatEditorVC.m \
	Modules/RedEnvelop/RedEnvelopHook.m \
	Modules/RedEnvelop/WeChatRedEnvelopTaskManager.m \
	Modules/Layout/TintHook.m \
	Modules/Unread/ClearUnreadHook.m \
	Modules/AutoTransfer/AutoTransferHook.m \
	Modules/SettingEntry/SettingEntryHook.m \
	Modules/SettingEntry/WPOtherVC.m \
	Modules/SettingEntry/WPAboutVC.m \
	Modules/SettingEntry/WPBackupVC.m \
	Modules/Joker/JokerHook.m \
	Modules/GroupExit/GroupExitHook.m \
	Modules/FriendDetection/FriendDetectionHook.m \
	Modules/MessageTime/MessageTimeHook.m \
	Modules/MessageTime/MessageTimeFormatParser.m \
	Modules/MessageTime/MessageTimeFormatEditorVC.m \
	Settings/Common/WPBorderLayer.m \
	Settings/Common/SettingCategoryController.m \
	Settings/Controllers/SettingController.m \
	Settings/Controllers/SettingGeneralFunctionController.m \
	Settings/Controllers/SettingMessageTimeController.m \
	Settings/Controllers/SettingRevokeController.m \
	Settings/Controllers/SettingRedEnvelopController.m \
	Settings/Controllers/WeChatTweakGroupSelectsController.m
MioHelper_CFLAGS = -fobjc-arc -Wno-deprecated-declarations -Wno-unused-function -Wno-unused-variable \
	-I. \
	-I./Config \
	-I./Core \
	-I./Registry \
	-I./Modules/Revoke \
	-I./Modules/RedEnvelop \
	-I./Modules/Layout \
	-I./Modules/Unread \
	-I./Modules/AutoTransfer \
	-I./Modules/SettingEntry \
	-I./Modules/Joker \
	-I./Modules/GroupExit \
	-I./Modules/MessageTime \
	-I./Settings/Common \
	-I./Settings/Controllers
MioHelper_FRAMEWORKS = UIKit Foundation Security AVFoundation UserNotifications

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 WeChat"
