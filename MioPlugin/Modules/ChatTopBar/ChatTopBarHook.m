#import "ChatTopBarHook.h"
#import "MioChatAvatarTitleView.h"
#import "CSContactInfoPopoverController.h"
#import "../../Config/PluginConfig.h"
#import "../../Config/Constants.h"
#import "../../Core/LogManager.h"
#import "../../Core/ServiceHelper.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <objc/message.h>

static id _popoverDelegate = nil;

@interface MioPopoverHandler : NSObject <MioChatAvatarTitleViewDelegate>
@end

@implementation MioPopoverHandler
- (void)avatarTitleView:(MioChatAvatarTitleView *)view
didTapAvatarWithContact:(id)contact
           avatarImage:(UIImage *)avatar
            sourceView:(UIView *)sourceView
                  wxid:(NSString *)wxid {
    PluginConfig *config = [PluginConfig shared];
    if (config.avatarTapFeedback) {
        UIImpactFeedbackGenerator *generator = [[UIImpactFeedbackGenerator alloc]
            initWithStyle:UIImpactFeedbackStyleLight];
        [generator prepare];
        [generator impactOccurred];
    }

    CSContactInfoPopoverController *popover =
        [[CSContactInfoPopoverController alloc] initWithContact:contact avatar:avatar];

    popover.modalPresentationStyle = UIModalPresentationPopover;
    popover.preferredContentSize = CGSizeMake(280, 400);

    UIPopoverPresentationController *popPC = popover.popoverPresentationController;
    popPC.sourceView = sourceView;
    popPC.sourceRect = sourceView.bounds;
    popPC.permittedArrowDirections = UIPopoverArrowDirectionAny;
    popPC.backgroundColor = [UIColor whiteColor];
    popPC.delegate = popover;

    UIViewController *presentingVC = WPGetTopVCForPresentation();
    if (!presentingVC) {
        presentingVC = (UIViewController *)view.chatController;
    }
    if (presentingVC) {
        [presentingVC presentViewController:popover animated:YES completion:nil];
    }
}
@end

static IMP _orig_BaseMsgContentVC_viewDidLoad    = NULL;
static IMP _orig_BaseMsgContentVC_viewWillAppear  = NULL;
static IMP _orig_UINavigationController_push       = NULL;

static const void *kOriginalTitleViewKey = &kOriginalTitleViewKey;

static BOOL isContactInBlacklist(NSString *contactID) {
    if (!contactID.length) return NO;
    NSString *blacklist = [PluginConfig shared].chatAvatarBlacklist;
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

static void hook_viewDidLoad(id self, SEL _cmd) {
    ((void (*)(id, SEL))_orig_BaseMsgContentVC_viewDidLoad)(self, _cmd);

    PluginConfig *config = [PluginConfig shared];
    if (!config.showChatAvatar) return;

    id savedTitle = objc_getAssociatedObject(self, kOriginalTitleViewKey);
    if (!savedTitle) {
        id originalTitleView = [self navigationItem].titleView;
        if (originalTitleView) {
            objc_setAssociatedObject(self, kOriginalTitleViewKey,
                                     originalTitleView,
                                     OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        }
    }

    id currentTitle = [[self navigationItem] titleView];
    if ([currentTitle isKindOfClass:[MioChatAvatarTitleView class]]) return;

    id contact = ((id (*)(id, SEL))objc_msgSend)(self, NSSelectorFromString(@"GetContact"));
    if (!contact) return;

    NSString *username = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsUsrName"));
    if (isContactInBlacklist(username)) return;

    CGFloat width = config.chatTitleViewWidth > 0 ? config.chatTitleViewWidth : 210.0;
    MioChatAvatarTitleView *view = [[MioChatAvatarTitleView alloc]
                                    initWithFrame:CGRectMake(0, 0, width, 45)];
    [view setChatController:(BaseMsgContentViewController *)self];
    view.delegate = _popoverDelegate;

    [[self navigationItem].titleView removeFromSuperview];
    [[self navigationItem] setTitleView:view];
    [view layoutSubviews];
}

static void hook_viewWillAppear(id self, SEL _cmd, BOOL animated) {
    ((void (*)(id, SEL, BOOL))_orig_BaseMsgContentVC_viewWillAppear)(self, _cmd, animated);

    PluginConfig *config = [PluginConfig shared];
    id currentTitle = [[self navigationItem] titleView];

    if (!config.showChatAvatar) {
        if ([currentTitle isKindOfClass:[MioChatAvatarTitleView class]]) {
            UIView *originalTitle = objc_getAssociatedObject(self, kOriginalTitleViewKey);
            if (originalTitle) {
                [[self navigationItem] setTitleView:originalTitle];
            }
        }
        return;
    }

    id contact = ((id (*)(id, SEL))objc_msgSend)(self, NSSelectorFromString(@"GetContact"));
    if (!contact) return;
    NSString *username = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsUsrName"));
    if (isContactInBlacklist(username)) {
        UIView *originalTitle = objc_getAssociatedObject(self, kOriginalTitleViewKey);
        if (originalTitle && [currentTitle isKindOfClass:[MioChatAvatarTitleView class]]) {
            [[self navigationItem] setTitleView:originalTitle];
        }
        return;
    }

    if (![currentTitle isKindOfClass:[MioChatAvatarTitleView class]]) {
        CGFloat width = config.chatTitleViewWidth > 0 ? config.chatTitleViewWidth : 210.0;
        MioChatAvatarTitleView *view = [[MioChatAvatarTitleView alloc]
                                        initWithFrame:CGRectMake(0, 0, width, 45)];
        [view setChatController:(BaseMsgContentViewController *)self];
        view.delegate = _popoverDelegate;
        [[self navigationItem] setTitleView:view];
        currentTitle = view;
    }

    [(MioChatAvatarTitleView *)currentTitle updateAvatars];
    [currentTitle setNeedsLayout];
    [currentTitle layoutIfNeeded];
    [currentTitle setNeedsDisplay];
}

static void hook_pushViewController(id self, SEL _cmd, id viewController, BOOL animated) {
    ((void (*)(id, SEL, id, BOOL))_orig_UINavigationController_push)
        (self, _cmd, viewController, animated);

    Class msgCls = objc_getClass("BaseMsgContentViewController");
    if (!msgCls || ![viewController isKindOfClass:msgCls]) return;

    PluginConfig *config = [PluginConfig shared];
    if (!config.showChatAvatar) return;

    id contact = ((id (*)(id, SEL))objc_msgSend)(viewController,
        NSSelectorFromString(@"GetContact"));
    if (!contact) return;

    NSString *username = ((id (*)(id, SEL))objc_msgSend)(contact,
        NSSelectorFromString(@"m_nsUsrName"));
    if (isContactInBlacklist(username)) return;

    CGFloat width = config.chatTitleViewWidth > 0 ? config.chatTitleViewWidth : 210.0;
    MioChatAvatarTitleView *view = [[MioChatAvatarTitleView alloc]
                                     initWithFrame:CGRectMake(0, 0, width, 45)];
    [view setChatController:(BaseMsgContentViewController *)viewController];
    view.delegate = _popoverDelegate;

    [[viewController navigationItem].titleView removeFromSuperview];
    [[viewController navigationItem] setTitleView:view];
    [view layoutSubviews];
}

@implementation ChatTopBarHook

+ (void)install {
    WPLog(@"ChatTopBar", @"ChatTopBarHook install");
    _popoverDelegate = [[MioPopoverHandler alloc] init];

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

    Class navCls = objc_getClass("UINavigationController");
    if (navCls) {
        MSHookMessageEx(navCls, @selector(pushViewController:animated:),
                        (IMP)hook_pushViewController,
                        &_orig_UINavigationController_push);
        WPLog(@"ChatTopBar", @"[Hook] ✓ UINavigationController::pushViewController:animated:");
    }
}

@end