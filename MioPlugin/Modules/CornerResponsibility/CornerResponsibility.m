//
//  CornerResponsibility.m
//  MioPlugin
//

#import "CornerResponsibility.h"

/// ========== 配置区：在此维护各模块的 VC 归属 ==========

/// 资料卡片美化模块专属的 VC 类名列表
/// 这些 VC 的 Cell 由 ProfileCardBgHook 全权管理
static NSString *const kProfileCardVCs[] = {
    @"MoreViewController",
};

/// 列表圆角黑名单（不支持任何圆角的 VC 类名列表）
/// 这些 VC 的页面还不适配圆角
static NSString *const kSkipListVCs[] = {
    @"WCTimeLineViewController",
    @"WCAccountLoginUsersViewController",
    @"SessionSelectController",
    @"WCListViewController",
    @"BrandNotificationListViewController",
    @"BrandNewSessionViewController",
    @"BaseMsgContentViewController",
    @"BraceletRankProfileViewController",
    @"BraceletRankViewController",
    @"WCRedEnvelopesRedEnvelopesDetailViewController",
    @"MsgRecordDetailViewController",
    @"ChatRoomInfoViewController",
    @"ContactInfoViewController",
    @"AddFriendEntryViewController",
    @"AddContactToChatRoomViewController",
    @"SayHelloViewController",
    @"MMFinderPivotLiveViewController",
    @"WCSearchController",
    @"WCPluginsViewController",
    @"AccountDetailViewController",
    @"SpecificPageLockViewController",
    @"ThemeExchangeViewController",
    @"RepeatEnhanceViewController",
    @"NewHBALLSettingController",
    @"DisableWeChatController",
    @"TheMessageController",
    @"TheVoiceController",
    @"VoiceCenterSettingController",
    @"TheGroupController",
    @"TheTimeLineController",
    @"AutoChangeWallpaperController",
    @"TheAutoMationController",
    @"TheSpecialController",
    @"KeyBoardMainController",
    @"WCAvatarFrameMainController",
    @"ChatFunctionsinfoController",
    @"WCEhanceViewController",
    @"WCUIBeautifyController",
    @"WCCustomNameController",
    @"WCHideToolController",
    @"WCVersionFakeController",
    @"WCEnhanceToolController",
    @"WCAboutController",
};

/// 类名前缀黑名单（以这些前缀开头的 VC 也不支持任何圆角）
static NSString *const kSkipPrefixList[] = {
    @"WCRefine",
    @"WCPulse",
    @"Themebox",
    @"BubbleBox",
};

/// ========== 配置区结束 ==========

/// 获取静态 NSSet（profileCardVCs）
static NSSet *profileCardSet(void) {
    static NSSet *set = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSMutableSet *mutableSet = [NSMutableSet set];
        NSUInteger count = sizeof(kProfileCardVCs) / sizeof(kProfileCardVCs[0]);
        for (NSUInteger i = 0; i < count; i++) {
            [mutableSet addObject:kProfileCardVCs[i]];
        }
        set = [mutableSet copy];
    });
    return set;
}

/// 获取静态 NSSet（skipListVCs）
static NSSet *skipListSet(void) {
    static NSSet *set = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSMutableSet *mutableSet = [NSMutableSet set];
        NSUInteger count = sizeof(kSkipListVCs) / sizeof(kSkipListVCs[0]);
        for (NSUInteger i = 0; i < count; i++) {
            [mutableSet addObject:kSkipListVCs[i]];
        }
        set = [mutableSet copy];
    });
    return set;
}

/// 检查类名是否匹配前缀黑名单
static BOOL isPrefixSkipped(NSString *cls) {
    static dispatch_once_t onceToken;
    static NSUInteger count = 0;
    dispatch_once(&onceToken, ^{
        count = sizeof(kSkipPrefixList) / sizeof(kSkipPrefixList[0]);
    });
    for (NSUInteger i = 0; i < count; i++) {
        if ([cls hasPrefix:kSkipPrefixList[i]]) {
            return YES;
        }
    }
    return NO;
}

@implementation CornerResponsibility

+ (CornerModule)moduleForViewController:(UIViewController *)vc {
    if (vc == nil) return kCornerModuleNone;

    NSString *cls = NSStringFromClass([vc class]);
    if (cls.length == 0) return kCornerModuleNone;

    // 1. 资料卡片美化专属 VC
    if ([profileCardSet() containsObject:cls]) {
        return kCornerModuleProfileCard;
    }

    // 2. 前缀黑名单
    if (isPrefixSkipped(cls)) {
        return kCornerModuleNone;
    }

    // 3. 列表圆角黑名单（暂不支持圆角的页面）
    if ([skipListSet() containsObject:cls]) {
        return kCornerModuleNone;
    }

    // 4. 默认都归列表圆角
    return kCornerModuleList;
}

+ (BOOL)isListCornerResponsibleFor:(UIViewController *)vc {
    return [self moduleForViewController:vc] == kCornerModuleList;
}

+ (BOOL)isProfileCardResponsibleFor:(UIViewController *)vc {
    return [self moduleForViewController:vc] == kCornerModuleProfileCard;
}

+ (BOOL)isNoCornerResponsibleFor:(UIViewController *)vc {
    return [self moduleForViewController:vc] == kCornerModuleNone;
}

@end