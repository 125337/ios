#import "ChatTopBarHook.h"
#import "CSChatAvatarTitleView.h"
#import "../../Config/PluginConfig.h"
#import "../../Config/Constants.h"
#import "../../Core/LogManager.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <objc/message.h>

// Original IMPs
static IMP _orig_BaseMsgContentVC_viewDidLoad   = NULL;
static IMP _orig_BaseMsgContentVC_viewWillAppear = NULL;

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

    for (NSString *line in lines) {
        NSString *t = [line stringByTrimmingCharactersInSet:
                        [NSCharacterSet whitespaceCharacterSet]];
        if (!t.length) continue;
        if (isGroup && [t isEqualToString:@"@"]) return YES;
        if ([contactID hasPrefix:@"gh_"] && [t hasPrefix:@"gh_"]) return YES;
        if ([t isEqualToString:contactID]) return YES;
        if (isGroup && [contactID containsString:t]) return YES;
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

    // Check if original titleView already saved
    id savedTitle = objc_getAssociatedObject(self, kOriginalTitleViewKey);
    if (!savedTitle) {
        id originalTitleView = [self navigationItem].titleView;
        if (originalTitleView) {
            objc_setAssociatedObject(self, kOriginalTitleViewKey,
                                     originalTitleView,
                                     OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        }
    }

    // Get contact
    id contact = ((id (*)(id, SEL))objc_msgSend)(self, NSSelectorFromString(@"GetContact"));
    if (!contact) return;

    NSString *username = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsUsrName"));
    if (isContactInBlacklist(username)) return;

    // Create CSChatAvatarTitleView
    CGFloat width = config.chatTitleViewWidth > 0 ? config.chatTitleViewWidth : 210.0;
    CSChatAvatarTitleView *view = [[CSChatAvatarTitleView alloc]
                                    initWithFrame:CGRectMake(0, 0, width, 45)];
    [view setChatController:(BaseMsgContentViewController *)self];

    [[self navigationItem].titleView removeFromSuperview];
    [[self navigationItem] setTitleView:view];
    [view layoutSubviews];
    [view release];
}

// ============================================================
// Hook: viewWillAppear:
// ============================================================
static void hook_viewWillAppear(id self, SEL _cmd, BOOL animated) {
    ((void (*)(id, SEL, BOOL))_orig_BaseMsgContentVC_viewWillAppear)(self, _cmd, animated);

    PluginConfig *config = [PluginConfig shared];
    id currentTitle = [[self navigationItem] titleView];

    if (!config.showChatAvatar) {
        // Switch off -> restore original titleView
        if ([currentTitle isKindOfClass:[CSChatAvatarTitleView class]]) {
            UIView *originalTitle = objc_getAssociatedObject(self, kOriginalTitleViewKey);
            if (originalTitle) {
                [[self navigationItem] setTitleView:originalTitle];
            }
        }
        return;
    }

    // Switch on -> blacklist check
    id contact = ((id (*)(id, SEL))objc_msgSend)(self, NSSelectorFromString(@"GetContact"));
    if (!contact) return;
    NSString *username = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsUsrName"));
    if (isContactInBlacklist(username)) {
        UIView *originalTitle = objc_getAssociatedObject(self, kOriginalTitleViewKey);
        if (originalTitle && [currentTitle isKindOfClass:[CSChatAvatarTitleView class]]) {
            [[self navigationItem] setTitleView:originalTitle];
        }
        return;
    }

    // Ensure titleView is CSChatAvatarTitleView
    if (![currentTitle isKindOfClass:[CSChatAvatarTitleView class]]) {
        CGFloat width = config.chatTitleViewWidth > 0 ? config.chatTitleViewWidth : 210.0;
        CSChatAvatarTitleView *view = [[CSChatAvatarTitleView alloc]
                                        initWithFrame:CGRectMake(0, 0, width, 45)];
        [view setChatController:(BaseMsgContentViewController *)self];
        [[self navigationItem] setTitleView:view];
        currentTitle = view;
        [view release];
    }

    // Refresh
    [(CSChatAvatarTitleView *)currentTitle updateAvatars];
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