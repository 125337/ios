//
//  CornerResponsibility.m
//  MioPlugin
//

#import "CornerResponsibility.h"

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

+ (BOOL)isListCornerResponsibleFor:(UIViewController *)vc {
    if (vc == nil) return NO;

    NSString *cls = NSStringFromClass([vc class]);
    if (cls.length == 0) return NO;

    // 1. 前缀黑名单
    if (isPrefixSkipped(cls)) {
        return NO;
    }

    // 2. 列表圆角黑名单（暂不支持圆角的页面）
    if ([skipListSet() containsObject:cls]) {
        return NO;
    }

    // 3. 默认归列表圆角
    return YES;
}

@end