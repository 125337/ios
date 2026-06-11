#import "ChatTopBarHook.h"
#import "MioChatAvatarTitleView.h"
#import "CSContactInfoPopoverController.h"
#import "ChatTopBarConfig.h"
#import "../../Config/Constants.h"
#import "../../Core/HookEngine.h"
#import "../../Core/LogManager.h"
#import "../../Core/ServiceHelper.h"
#import "../SettingEntry/WPCommonUI.h"
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
    ChatTopBarConfig *config = [ChatTopBarConfig shared];
    if (config.avatarTapFeedback) {
        UIImpactFeedbackGenerator *generator = [[UIImpactFeedbackGenerator alloc]
            initWithStyle:UIImpactFeedbackStyleLight];
        [generator prepare];
        [generator impactOccurred];
    }

    // 传入 contact，由 CSContactInfoPopoverController 内部用安全辅助函数读取数据
    CSContactInfoPopoverController *popover =
        [[CSContactInfoPopoverController alloc] initWithContact:contact
                                                        avatar:avatar];

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

static IMP orig_BaseMsgContentVC_viewDidLoad    = NULL;
static IMP orig_BaseMsgContentVC_viewWillAppear  = NULL;
static IMP orig_UINavigationController_push       = NULL;

static const void *kOriginalTitleViewKey = &kOriginalTitleViewKey;

#pragma mark - Helpers

static BOOL isContactInBlacklist(NSString *contactID) {
    if (!contactID.length) return NO;
    NSString *blacklist = [ChatTopBarConfig shared].chatAvatarBlacklist;
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

static NSString *getContactUsername(id vc) {
    id contact = ((id (*)(id, SEL))objc_msgSend)(vc, NSSelectorFromString(@"GetContact"));
    if (!contact) return nil;
    return ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsUsrName"));
}

static MioChatAvatarTitleView *createTitleView(id vc) {
    ChatTopBarConfig *config = [ChatTopBarConfig shared];
    CGFloat width = config.chatTitleViewWidth > 0 ? config.chatTitleViewWidth : 210.0;
    MioChatAvatarTitleView *view = [[MioChatAvatarTitleView alloc]
                                    initWithFrame:CGRectMake(0, 0, width, 45)];
    [view setChatController:(BaseMsgContentViewController *)vc];
    view.delegate = _popoverDelegate;
    return view;
}

static void installTitleView(id vc, MioChatAvatarTitleView *view) {
    [[vc navigationItem].titleView removeFromSuperview];
    [[vc navigationItem] setTitleView:view];
    [view layoutSubviews];
}

static void saveOriginalTitleViewIfNeeded(id vc) {
    id savedTitle = objc_getAssociatedObject(vc, kOriginalTitleViewKey);
    if (!savedTitle) {
        id originalTitleView = [vc navigationItem].titleView;
        if (originalTitleView) {
            objc_setAssociatedObject(vc, kOriginalTitleViewKey,
                                     originalTitleView,
                                     OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        }
    }
}

static void restoreOriginalTitleView(id vc) {
    UIView *originalTitle = objc_getAssociatedObject(vc, kOriginalTitleViewKey);
    if (originalTitle && [[vc navigationItem].titleView isKindOfClass:[MioChatAvatarTitleView class]]) {
        [[vc navigationItem] setTitleView:originalTitle];
    }
}

#pragma mark - Hooks

static void hook_viewDidLoad(id self, SEL _cmd) {
    ((void (*)(id, SEL))orig_BaseMsgContentVC_viewDidLoad)(self, _cmd);

    ChatTopBarConfig *config = [ChatTopBarConfig shared];
    if (!config.showChatAvatar) return;

    saveOriginalTitleViewIfNeeded(self);

    id currentTitle = [[self navigationItem] titleView];
    if ([currentTitle isKindOfClass:[MioChatAvatarTitleView class]]) return;

    NSString *username = getContactUsername(self);
    if (!username || isContactInBlacklist(username)) return;

    MioChatAvatarTitleView *view = createTitleView(self);
    installTitleView(self, view);
}

static void hook_viewWillAppear(id self, SEL _cmd, BOOL animated) {
    ((void (*)(id, SEL, BOOL))orig_BaseMsgContentVC_viewWillAppear)(self, _cmd, animated);

    ChatTopBarConfig *config = [ChatTopBarConfig shared];
    id currentTitle = [[self navigationItem] titleView];

    if (!config.showChatAvatar) {
        restoreOriginalTitleView(self);
        return;
    }

    NSString *username = getContactUsername(self);
    if (!username || isContactInBlacklist(username)) {
        restoreOriginalTitleView(self);
        return;
    }

    if (![currentTitle isKindOfClass:[MioChatAvatarTitleView class]]) {
        MioChatAvatarTitleView *view = createTitleView(self);
        [[self navigationItem] setTitleView:view];
        currentTitle = view;
    }

    [(MioChatAvatarTitleView *)currentTitle updateAvatars];
    [currentTitle setNeedsLayout];
    [currentTitle layoutIfNeeded];
    [currentTitle setNeedsDisplay];
}

static void hook_pushViewController(id self, SEL _cmd, id viewController, BOOL animated) {
    ((void (*)(id, SEL, id, BOOL))orig_UINavigationController_push)
        (self, _cmd, viewController, animated);

    Class msgCls = objc_getClass("BaseMsgContentViewController");
    if (!msgCls || ![viewController isKindOfClass:msgCls]) return;

    ChatTopBarConfig *config = [ChatTopBarConfig shared];
    if (!config.showChatAvatar) return;

    NSString *username = getContactUsername(viewController);
    if (!username || isContactInBlacklist(username)) return;

    MioChatAvatarTitleView *view = createTitleView(viewController);
    installTitleView(viewController, view);
}

@implementation ChatTopBarHook

+ (void)install {
    _popoverDelegate = [[MioPopoverHandler alloc] init];

    HookTableItem items[] = {
        {@"BaseMsgContentViewController", @"viewDidLoad",
            (IMP)hook_viewDidLoad, &orig_BaseMsgContentVC_viewDidLoad},
        {@"BaseMsgContentViewController", @"viewWillAppear:",
            (IMP)hook_viewWillAppear, &orig_BaseMsgContentVC_viewWillAppear},
        {@"UINavigationController", @"pushViewController:animated:",
            (IMP)hook_pushViewController, &orig_UINavigationController_push},
    };

    [HookEngine installHookTable:@"ChatTopBar" items:items
                           count:sizeof(items) / sizeof(items[0])];
}

@end