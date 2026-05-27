#import "ChatTopBarHook.h"
#import "MioChatAvatarTitleView.h"
#import "../../Config/PluginConfig.h"
#import "../../Config/Constants.h"
#import "../../Core/LogManager.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <objc/message.h>

// Original IMPs
static IMP _orig_BaseMsgContentVC_viewDidLoad    = NULL;
static IMP _orig_BaseMsgContentVC_viewWillAppear  = NULL;

// associatedObject key
static const void *kOriginalTitleViewKey = &kOriginalTitleViewKey;

// ============================================================
// 黑名单匹配
// ============================================================
static BOOL isContactInBlacklist(NSString *contactID) {
    if (!contactID.length) return NO;
    NSString *blacklist = [[NSUserDefaults standardUserDefaults]
        stringForKey:[kPluginPrefix stringByAppendingString:@"ChatAvatarBlacklist"]];
    if (!blacklist.length) return NO;

    NSArray *lines = [blacklist componentsSeparatedByString:@"\n"];
    BOOL isGroup = [contactID containsString:@"@chatroom"];
    BOOL isOA = [contactID hasPrefix:@"gh_"];

    for (NSString *line in lines) {
        NSString *t = [line stringByTrimmingCharactersInSet:
                        [NSCharacterSet whitespaceCharacterSet]];
        if (!t.length) continue;

        // 条件1: {群聊} — 屏蔽所有群聊
        if (isGroup && [t isEqualToString:@"{群聊}"]) return YES;
        // 条件2: {私聊} — 屏蔽所有私聊（非群非公众号）
        if (!isGroup && !isOA && [t isEqualToString:@"{私聊}"]) return YES;
        // 条件3: {公众号} — 屏蔽所有公众号
        if (isOA && [t isEqualToString:@"{公众号}"]) return YES;
        // 条件4: 精确匹配 wxid
        if ([t isEqualToString:contactID]) return YES;
    }
    return NO;
}

// ============================================================
// Hook: viewDidLoad
// ============================================================
static void hook_viewDidLoad(id self, SEL _cmd) {
    ((void (*)(id, SEL))_orig_BaseMsgContentVC_viewDidLoad)(self, _cmd);

    PluginConfig *config = [PluginConfig shared];
    if (!config.showChatAvatar) return;

    // 保存原始 titleView
    id savedTitle = objc_getAssociatedObject(self, kOriginalTitleViewKey);
    if (!savedTitle) {
        id originalTitleView = [self navigationItem].titleView;
        if (originalTitleView) {
            objc_setAssociatedObject(self, kOriginalTitleViewKey,
                                     originalTitleView,
                                     OBJC_ASSOCIATION_ASSIGN);
        }
    }

    // 已有 MioChatAvatarTitleView 则跳过
    id currentTitle = [[self navigationItem] titleView];
    if ([currentTitle isKindOfClass:[MioChatAvatarTitleView class]]) return;

    // 获取 contact
    id contact = ((id (*)(id, SEL))objc_msgSend)(self, NSSelectorFromString(@"GetContact"));
    if (!contact) return;

    NSString *username = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsUsrName"));
    if (isContactInBlacklist(username)) return;

    // 创建 MioChatAvatarTitleView
    CGFloat width = config.chatTitleViewWidth > 0 ? config.chatTitleViewWidth : 210.0;
    MioChatAvatarTitleView *view = [[MioChatAvatarTitleView alloc]
                                    initWithFrame:CGRectMake(0, 0, width, 45)];
    [view setChatController:(BaseMsgContentViewController *)self];

    [[self navigationItem] setTitleView:view];
    [(MioChatAvatarTitleView *)view updateAvatars];
    [view release];
}

// ============================================================
// Hook: viewWillAppear:
// ============================================================
static void hook_viewWillAppear(id self, SEL _cmd, BOOL animated) {
    ((void (*)(id, SEL, BOOL))_orig_BaseMsgContentVC_viewWillAppear)(self, _cmd, animated);

    PluginConfig *config = [PluginConfig shared];
    id currentTitle = [[self navigationItem] titleView];

    // 功能关闭时恢复原始 titleView
    if (!config.showChatAvatar) {
        if ([currentTitle isKindOfClass:[MioChatAvatarTitleView class]]) {
            UIView *originalTitle = objc_getAssociatedObject(self, kOriginalTitleViewKey);
            if (originalTitle) {
                [[self navigationItem] setTitleView:originalTitle];
            }
        }
        return;
    }

    // 获取 contact 并检查黑名单
    id contact = ((id (*)(id, SEL))objc_msgSend)(self, NSSelectorFromString(@"GetContact"));
    if (!contact) return;

    NSString *username = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsUsrName"));
    if (isContactInBlacklist(username)) {
        // 黑名单中，恢复原始 titleView
        UIView *originalTitle = objc_getAssociatedObject(self, kOriginalTitleViewKey);
        if (originalTitle && [currentTitle isKindOfClass:[MioChatAvatarTitleView class]]) {
            [[self navigationItem] setTitleView:originalTitle];
        }
        return;
    }

    // 非 MioChatAvatarTitleView 则创建
    if (![currentTitle isKindOfClass:[MioChatAvatarTitleView class]]) {
        CGFloat width = config.chatTitleViewWidth > 0 ? config.chatTitleViewWidth : 210.0;
        MioChatAvatarTitleView *view = [[MioChatAvatarTitleView alloc]
                                        initWithFrame:CGRectMake(0, 0, width, 45)];
        [view setChatController:(BaseMsgContentViewController *)self];
        [[self navigationItem] setTitleView:view];
        currentTitle = view;
        [view release];
    }

    // 更新
    [(MioChatAvatarTitleView *)currentTitle updateAvatars];
    [currentTitle setNeedsLayout];
    [currentTitle layoutIfNeeded];
    [currentTitle setNeedsDisplay];
}

// ============================================================
// Install
// ============================================================
@implementation ChatTopBarHook

+ (void)install {
    WPLog(@"ChatTopBar", @"ChatTopBarHook install");

    Class cls = objc_getClass("BaseMsgContentViewController");
    if (cls) {
        MSHookMessageEx(cls, @selector(viewDidLoad),
                        (IMP)hook_viewDidLoad,
                        &_orig_BaseMsgContentVC_viewDidLoad);
        MSHookMessageEx(cls, @selector(viewWillAppear:),
                        (IMP)hook_viewWillAppear,
                        &_orig_BaseMsgContentVC_viewWillAppear);
        WPLog(@"ChatTopBar", @"[Hook] ✓ BaseMsgContentViewController");
    }

}

@end