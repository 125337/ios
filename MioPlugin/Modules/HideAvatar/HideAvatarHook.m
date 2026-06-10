//
//  HideAvatarHook.m — 隐藏头像
//  复刻微信优化 1.6.5 isShowHeadImage Hook (FUN_000078bc)
//  架构: Hook BaseMsgContentViewController.viewDidLoad + viewWillAppear: 用于聊天类型分类
//        Hook CommonMessageViewModel.isShowHeadImage 核心决策
//  MRC 编译
//

#import "HideAvatarHook.h"
#import "HideAvatarConfig.h"
#import "../../Core/LogManager.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <objc/message.h>

// ============================================================
// MARK: - 聊天类型常量 (对齐 FUN_0000762c ~ L5970)
// ============================================================
typedef NS_ENUM(NSInteger, MOChatType) {
    MOChatTypeUnknown       = 0,
    MOChatTypePrivate       = 1,  // 私聊
    MOChatTypeGroup         = 2,  // 群聊
    MOChatTypeOfficial      = 3,  // 公众号
};

// ============================================================
// MARK: - 全局状态 (对齐 DAT_0013a930 + DAT_0013a910)
// ============================================================
static MOChatType _currentChatType = MOChatTypeUnknown;
static NSString  *_cachedUsername  = nil;  // 缓存去重 (FUN_0000776c L6024)

// ============================================================
// MARK: - Original IMPs
// ============================================================
static IMP _orig_BaseMsgContentVC_viewDidLoad      = NULL;
static IMP _orig_BaseMsgContentVC_viewWillAppear    = NULL;
static IMP _orig_CommonMessageVM_isShowHeadImage    = NULL;

// ============================================================
// MARK: - updateChatContext: 聊天类型分类 + 缓存去重 (对齐 FUN_0000776c L6006-L6055)
// ============================================================

static void updateChatContext(id self) {
    // Step 1: 获取联系人 → [self GetContact] (FUN_000c2420 → 反编译 L127432)
    // ★ 关键: 微信优化用 objc_msgSend 方法调用, 不是 KVC!
    //    KVC [valueForKey:@"m_contact"] 与 [self GetContact] 不是同一路径
    id contact = nil;
    @try {
        contact = ((id (*)(id, SEL))objc_msgSend)(self, NSSelectorFromString(@"GetContact"));
    } @catch (NSException *e) {
        WPLog(@"HideAvatar", @"updateChatContext: GetContact exception %@", e.reason);
        _currentChatType = MOChatTypeUnknown;
        return;
    }

    if (!contact) {
        WPLog(@"HideAvatar", @"updateChatContext: contact is nil");
        _currentChatType = MOChatTypeUnknown;
        return;
    }

    // Step 2: 获取用户名 → [contact m_nsUsrName] (FUN_000c7b40 → 反编译 L133725)
    // ★ 同样用 objc_msgSend, 不是 KVC
    NSString *username = nil;
    @try {
        username = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsUsrName"));
    } @catch (NSException *e) {
        WPLog(@"HideAvatar", @"updateChatContext: m_nsUsrName exception %@", e.reason);
        _currentChatType = MOChatTypeUnknown;
        return;
    }

    if (!username || username.length == 0) {
        _cachedUsername = nil;
        _currentChatType = MOChatTypeUnknown;
        return;
    }

    // Step 3: 缓存去重 — 同一联系人跳过重新分类 (FUN_0000776c L6024)
    if (_cachedUsername && [username isEqualToString:_cachedUsername]) {
        return;  // 缓存命中, 跳过
    }

    // Step 4: 更新缓存
    _cachedUsername = [username copy];

    // Step 5: 分类判定 (优先级: gh_ → @chatroom → 默认私聊)
    // 对齐 FUN_0000776c L6036-L6045
    if ([username hasPrefix:@"gh_"]) {
        _currentChatType = MOChatTypeOfficial;   // 公众号
    } else if ([username containsString:@"@chatroom"]) {
        _currentChatType = MOChatTypeGroup;       // 群聊
    } else {
        _currentChatType = MOChatTypePrivate;     // 私聊
    }
    WPLog(@"HideAvatar", @"updateChatContext: username=%@ chatType=%ld", username, (long)_currentChatType);
}

// ============================================================
// MARK: - Hook: BaseMsgContentViewController.viewDidLoad (FUN_00007714 L5976-L5991)
// ============================================================

static void hook_viewDidLoad(id self, SEL _cmd) {
    ((void (*)(id, SEL))_orig_BaseMsgContentVC_viewDidLoad)(self, _cmd);
    WPLog(@"HideAvatar", @"viewDidLoad triggered");
    updateChatContext(self);
}

// ============================================================
// MARK: - Hook: BaseMsgContentViewController.viewWillAppear: (FUN_00007740 L5992-L6005)
// ============================================================

static void hook_viewWillAppear(id self, SEL _cmd, BOOL animated) {
    ((void (*)(id, SEL, BOOL))_orig_BaseMsgContentVC_viewWillAppear)(self, _cmd, animated);
    updateChatContext(self);
}

// ============================================================
// MARK: - Hook: CommonMessageViewModel.isShowHeadImage (FUN_000078bc L6059-L6135)
// ============================================================

static BOOL hook_isShowHeadImage(id self, SEL _cmd) {
    HideAvatarConfig *config = [HideAvatarConfig shared];

    // ── 快速路径: 6 个配置全关 → 直接走原始 ──
    if (!config.hideC2COtherAvatar   &&
        !config.hideC2CSelfAvatar    &&
        !config.hideGroupOtherAvatar &&
        !config.hideGroupSelfAvatar  &&
        !config.hideOAOtherAvatar    &&
        !config.hideOASelfAvatar) {
        return ((BOOL (*)(id, SEL))_orig_CommonMessageVM_isShowHeadImage)(self, _cmd);
    }

    // ── 聊天类型未知 → 不干预 ──
    if (_currentChatType == MOChatTypeUnknown) {
        return ((BOOL (*)(id, SEL))_orig_CommonMessageVM_isShowHeadImage)(self, _cmd);
    }

    // ── 获取 isSender (FUN_000c6f20 → 反编译 L132851) ──
    // ★ 同样用 objc_msgSend 方法调用
    BOOL isSender = NO;
    @try {
        isSender = ((BOOL (*)(id, SEL))objc_msgSend)(self, NSSelectorFromString(@"isSender"));
    } @catch (NSException *e) {
        WPLog(@"HideAvatar", @"isShowHeadImage: isSender exception %@", e.reason);
        return ((BOOL (*)(id, SEL))_orig_CommonMessageVM_isShowHeadImage)(self, _cmd);
    }

    // ── 查表: (聊天类型, isSender) → HideAvatarConfig 对应属性 ──
    BOOL shouldHide = NO;

    switch (_currentChatType) {
        case MOChatTypePrivate:  // 私聊 → hideC2C
            shouldHide = isSender ? config.hideC2CSelfAvatar
                                  : config.hideC2COtherAvatar;
            break;

        case MOChatTypeGroup:    // 群聊 → hideGroup
            shouldHide = isSender ? config.hideGroupSelfAvatar
                                  : config.hideGroupOtherAvatar;
            break;

        case MOChatTypeOfficial: // 公众号 → hideOA
            shouldHide = isSender ? config.hideOASelfAvatar
                                  : config.hideOAOtherAvatar;
            break;

        default:
            return ((BOOL (*)(id, SEL))_orig_CommonMessageVM_isShowHeadImage)(self, _cmd);
    }

    WPLog(@"HideAvatar", @"isShowHeadImage called: chatType=%ld isSender=%d hide=%d orig=%d",
          (long)_currentChatType, isSender, shouldHide,
          ((BOOL (*)(id, SEL))_orig_CommonMessageVM_isShowHeadImage)(self, _cmd));

    if (shouldHide) {
        return NO;  // ★ 隐藏头像 (对齐 FUN_000078bc L6127-L6128)
    }

    return ((BOOL (*)(id, SEL))_orig_CommonMessageVM_isShowHeadImage)(self, _cmd);
}

// ============================================================
// MARK: - Install (对齐 FUN_0000762c L5937-L5965)
// ============================================================

@implementation HideAvatarHook

+ (void)install {
    WPLog(@"HideAvatar", @"HideAvatarHook install (复刻微信优化 1.6.5 isShowHeadImage)");
    Class cls;

    // ① Hook BaseMsgContentViewController.viewDidLoad → 首次进入触发分类
    cls = objc_getClass("BaseMsgContentViewController");
    if (cls) {
        MSHookMessageEx(cls,
            @selector(viewDidLoad),
            (IMP)hook_viewDidLoad,
            &_orig_BaseMsgContentVC_viewDidLoad);
        WPLog(@"HideAvatar", @"[Hook] ✓ BaseMsgContentViewController.viewDidLoad");
    } else {
        WPLog(@"HideAvatar", @"[Hook] ✗ BaseMsgContentViewController class not found");
    }

    // ② Hook BaseMsgContentViewController.viewWillAppear: → 切换聊天/后台切回触发分类
    if (cls) {
        MSHookMessageEx(cls,
            @selector(viewWillAppear:),
            (IMP)hook_viewWillAppear,
            &_orig_BaseMsgContentVC_viewWillAppear);
        WPLog(@"HideAvatar", @"[Hook] ✓ BaseMsgContentViewController.viewWillAppear:");
    }

    // ③ Hook CommonMessageViewModel.isShowHeadImage → 核心决策 (每条消息调用)
    cls = objc_getClass("CommonMessageViewModel");
    if (cls) {
        MSHookMessageEx(cls,
            NSSelectorFromString(@"isShowHeadImage"),
            (IMP)hook_isShowHeadImage,
            &_orig_CommonMessageVM_isShowHeadImage);
        WPLog(@"HideAvatar", @"[Hook] ✓ CommonMessageViewModel.isShowHeadImage");
    } else {
        WPLog(@"HideAvatar", @"[Hook] ✗ CommonMessageViewModel class not found");
    }

    WPLog(@"HideAvatar", @"HideAvatarHook install complete");
}

@end