#import "QuickActionsHook.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/LogManager.h"
#import "../../Core/ServiceHelper.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>
#import <substrate.h>

static __unused IMP orig_trailingSwipeActionsConfig = NULL;
static __unused IMP orig_leadingSwipeActionsConfig = NULL;
static BOOL (*orig_canEditRowAtIndexPath)(id, SEL, id, id) = NULL;
static void (*orig_viewDidAppear)(id, SEL, BOOL) = NULL;
static BOOL s_methodsInstalled = NO;

static id getSessionInfo(id self, NSIndexPath *indexPath) {
    if ([self respondsToSelector:@selector(getSessionInfoAtIndexPath:)]) {
        return ((id (*)(id, SEL, id))objc_msgSend)(self, @selector(getSessionInfoAtIndexPath:), indexPath);
    }
    SEL logicSel = NSSelectorFromString(@"logicGetSessionAtIndexPath:");
    if ([self respondsToSelector:logicSel]) {
        return ((id (*)(id, SEL, id))objc_msgSend)(self, logicSel, indexPath);
    }
    id sessionMgr = [self valueForKey:@"m_sessionMgr"];
    if (sessionMgr && [sessionMgr respondsToSelector:@selector(getSessionInfoAtIndexPath:)]) {
        return ((id (*)(id, SEL, id))objc_msgSend)(sessionMgr, @selector(getSessionInfoAtIndexPath:), indexPath);
    }
    return nil;
}

static UIViewController *getTopViewController(void) {
    UIWindow *keyWindow = nil;
    if (@available(iOS 13.0, *)) {
        for (UIWindowScene *scene in [UIApplication sharedApplication].connectedScenes) {
            if (scene.activationState == UISceneActivationStateForegroundActive) {
                keyWindow = scene.windows.firstObject;
                break;
            }
        }
    }
    if (!keyWindow) {
        keyWindow = [UIApplication sharedApplication].keyWindow;
    }
    UIViewController *topVC = keyWindow.rootViewController;
    while (topVC.presentedViewController) {
        topVC = topVC.presentedViewController;
    }
    return topVC;
}

static void showToast(NSString *text) {
    dispatch_async(dispatch_get_main_queue(), ^{
        UIWindow *window = [UIApplication sharedApplication].keyWindow;
        if (!window) return;
        UILabel *label = [[UILabel alloc] init];
        label.text = text;
        label.textAlignment = NSTextAlignmentCenter;
        label.font = [UIFont systemFontOfSize:14];
        label.textColor = [UIColor whiteColor];
        label.backgroundColor = [[UIColor blackColor] colorWithAlphaComponent:0.7];
        label.layer.cornerRadius = 8;
        label.clipsToBounds = YES;
        [label sizeToFit];
        CGFloat w = label.frame.size.width + 30;
        CGFloat h = label.frame.size.height + 16;
        CGFloat x = (window.bounds.size.width - w) / 2;
        CGFloat y = window.bounds.size.height - 200;
        label.frame = CGRectMake(x, y, w, h);
        [window addSubview:label];
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(2.0 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            [label removeFromSuperview];
        });
    });
}

static void handleMute(id contact, NSString *userName) {
    BOOL isMuted = NO;
    SEL isMutedSel = NSSelectorFromString(@"isChatStatusNotifyOpen");
    if ([contact respondsToSelector:isMutedSel]) {
        isMuted = ((BOOL (*)(id, SEL))objc_msgSend)(contact, isMutedSel);
    }

    BOOL newStatus = !isMuted;

    id contactMgr = WXGetService(objc_getClass("CContactMgr"));
    if (contactMgr) {
        SEL changeSel = NSSelectorFromString(@"ChangeNotifyStatus:withStatus:sync:");
        if ([contactMgr respondsToSelector:changeSel]) {
            ((void (*)(id, SEL, id, BOOL, BOOL))objc_msgSend)(contactMgr, changeSel, contact, newStatus, YES);
        }
    }

    SEL setSel = NSSelectorFromString(@"setChatStatusNotifyOpen:");
    if ([contact respondsToSelector:setSel]) {
        ((void (*)(id, SEL, BOOL))objc_msgSend)(contact, setSel, newStatus);
    }

    NSString *tip = newStatus ? @"已开启免打扰" : @"已取消免打扰";
    showToast(tip);
    WPLog(@"QuickActions", @"[INFO] mute: %@ -> %@", userName, tip);
}

static void handleRemark(id contact) {
    UIViewController *topVC = getTopViewController();
    if (!topVC) return;

    Class cls = objc_getClass("ContactInfoViewController");
    if (!cls) {
        cls = NSClassFromString(@"ContactInfoViewController");
        if (!cls) return;
    }

    id vc = [cls alloc];
    ((void (*)(id, SEL))objc_msgSend)(vc, @selector(init));

    SEL setContactSel = NSSelectorFromString(@"setM_contact:");
    if ([vc respondsToSelector:setContactSel]) {
        ((void (*)(id, SEL, id))objc_msgSend)(vc, setContactSel, contact);
    }

    SEL setNeedEditSel = NSSelectorFromString(@"setNeedEditState:");
    if ([vc respondsToSelector:setNeedEditSel]) {
        ((void (*)(id, SEL, BOOL))objc_msgSend)(vc, setNeedEditSel, YES);
    }

    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:vc];
    [topVC presentViewController:nav animated:YES completion:nil];
}

static void handlePin(id contact, NSString *userName) {
    BOOL isTop = NO;
    SEL isTopSel = NSSelectorFromString(@"isContactSessionTop");
    if ([contact respondsToSelector:isTopSel]) {
        isTop = ((BOOL (*)(id, SEL))objc_msgSend)(contact, isTopSel);
    }

    BOOL newTop = !isTop;

    id contactMgr = WXGetService(objc_getClass("CContactMgr"));
    if (contactMgr) {
        SEL setTopSel = NSSelectorFromString(@"setContact:sessionTop:sync:");
        if ([contactMgr respondsToSelector:setTopSel]) {
            ((void (*)(id, SEL, id, BOOL, BOOL))objc_msgSend)(contactMgr, setTopSel, contact, newTop, YES);
        }
    }

    SEL setBIsTopSel = NSSelectorFromString(@"setM_bIsTop:");
    if ([contact respondsToSelector:setBIsTopSel]) {
        ((void (*)(id, SEL, BOOL))objc_msgSend)(contact, setBIsTopSel, newTop);
    }

    NSString *tip = newTop ? @"已置顶" : @"已取消置顶";
    showToast(tip);
    WPLog(@"QuickActions", @"[INFO] pin: %@ -> %@", userName, tip);

    UIImpactFeedbackGenerator *feedback = [[UIImpactFeedbackGenerator alloc] initWithStyle:UIImpactFeedbackStyleLight];
    [feedback impactOccurred];
}

static BOOL replaced_canEditRowAtIndexPath(id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath) {
    if ([PluginConfig shared].quickActionsEnabled) {
        return YES;
    }
    if (orig_canEditRowAtIndexPath) {
        return orig_canEditRowAtIndexPath(self, _cmd, tableView, indexPath);
    }
    return NO;
}

static id replaced_trailingSwipeActionsConfig(id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath) {
    if (![PluginConfig shared].quickActionsEnabled) {
        if (orig_trailingSwipeActionsConfig) {
            return ((id (*)(id, SEL, id, id))orig_trailingSwipeActionsConfig)(self, _cmd, tableView, indexPath);
        }
        return nil;
    }

    id sessionInfo = getSessionInfo(self, indexPath);
    if (!sessionInfo) {
        return nil;
    }

    NSString *userName = nil;
    SEL userNameSel = NSSelectorFromString(@"m_nsUserName");
    if ([sessionInfo respondsToSelector:userNameSel]) {
        userName = ((id (*)(id, SEL))objc_msgSend)(sessionInfo, userNameSel);
    }
    if (!userName || userName.length == 0) return nil;

    id contact = WXGetContactForWxid(userName);
    if (!contact) return nil;

    BOOL isTop = NO;
    SEL isTopSel = NSSelectorFromString(@"isContactSessionTop");
    if ([contact respondsToSelector:isTopSel]) {
        isTop = ((BOOL (*)(id, SEL))objc_msgSend)(contact, isTopSel);
    }

    BOOL isMuted = NO;
    SEL isMutedSel = NSSelectorFromString(@"isChatStatusNotifyOpen");
    if ([contact respondsToSelector:isMutedSel]) {
        isMuted = ((BOOL (*)(id, SEL))objc_msgSend)(contact, isMutedSel);
    }

    NSString *muteTitle = isMuted ? @"取消免打扰" : @"免打扰";
    UIContextualAction *muteAction = [UIContextualAction contextualActionWithStyle:UIContextualActionStyleNormal
        title:muteTitle
        handler:^(UIContextualAction *action, UIView *sourceView, void (^completionHandler)(BOOL)) {
            handleMute(contact, userName);
            completionHandler(YES);
        }];
    muteAction.backgroundColor = [UIColor grayColor];

    UIContextualAction *remarkAction = [UIContextualAction contextualActionWithStyle:UIContextualActionStyleNormal
        title:@"备注"
        handler:^(UIContextualAction *action, UIView *sourceView, void (^completionHandler)(BOOL)) {
            completionHandler(YES);
            handleRemark(contact);
        }];
    remarkAction.backgroundColor = [UIColor orangeColor];

    NSString *pinTitle = isTop ? @"取消置顶" : @"置顶";
    UIContextualAction *pinAction = [UIContextualAction contextualActionWithStyle:UIContextualActionStyleNormal
        title:pinTitle
        handler:^(UIContextualAction *action, UIView *sourceView, void (^completionHandler)(BOOL)) {
            handlePin(contact, userName);
            completionHandler(YES);
        }];
    pinAction.backgroundColor = [UIColor redColor];

    return [UISwipeActionsConfiguration configurationWithActions:@[muteAction, remarkAction, pinAction]];
}

static id replaced_leadingSwipeActionsConfig(id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath) {
    if ([PluginConfig shared].quickActionsEnabled) {
        return [UISwipeActionsConfiguration configurationWithActions:@[]];
    }
    if (orig_leadingSwipeActionsConfig) {
        return ((id (*)(id, SEL, id, id))orig_leadingSwipeActionsConfig)(self, _cmd, tableView, indexPath);
    }
    return nil;
}

static void installMethodsOnClass(Class targetClass) {
    if (s_methodsInstalled) return;
    if (!targetClass) {
        WPLog(@"QuickActions", @"[ERR] targetClass is nil");
        return;
    }

    s_methodsInstalled = YES;
    WPLog(@"QuickActions", @"[INFO] installing methods on class: %@", NSStringFromClass(targetClass));

    SEL trailingSel = @selector(tableView:trailingSwipeActionsConfigurationForRowAtIndexPath:);
    if ([targetClass instancesRespondToSelector:trailingSel]) {
        MSHookMessageEx(targetClass, trailingSel,
            (IMP)replaced_trailingSwipeActionsConfig,
            &orig_trailingSwipeActionsConfig);
        WPLog(@"QuickActions", @"[INFO] hooked trailingSwipeActions on %@ (method exists)", NSStringFromClass(targetClass));
    } else {
        IMP impl = (IMP)replaced_trailingSwipeActionsConfig;
        BOOL added = class_addMethod(targetClass, trailingSel, impl, "@@:@@");
        if (added) {
            WPLog(@"QuickActions", @"[INFO] class_addMethod trailingSwipeActions on %@ OK", NSStringFromClass(targetClass));
        } else {
            WPLog(@"QuickActions", @"[ERR] class_addMethod trailingSwipeActions on %@ FAILED", NSStringFromClass(targetClass));
        }
    }

    SEL leadingSel = @selector(tableView:leadingSwipeActionsConfigurationForRowAtIndexPath:);
    if ([targetClass instancesRespondToSelector:leadingSel]) {
        MSHookMessageEx(targetClass, leadingSel,
            (IMP)replaced_leadingSwipeActionsConfig,
            &orig_leadingSwipeActionsConfig);
        WPLog(@"QuickActions", @"[INFO] hooked leadingSwipeActions on %@ (method exists)", NSStringFromClass(targetClass));
    } else {
        IMP impl = (IMP)replaced_leadingSwipeActionsConfig;
        BOOL added = class_addMethod(targetClass, leadingSel, impl, "@@:@@");
        if (added) {
            WPLog(@"QuickActions", @"[INFO] class_addMethod leadingSwipeActions on %@ OK", NSStringFromClass(targetClass));
        } else {
            WPLog(@"QuickActions", @"[ERR] class_addMethod leadingSwipeActions on %@ FAILED", NSStringFromClass(targetClass));
        }
    }

    SEL canEditSel = @selector(tableView:canEditRowAtIndexPath:);
    if ([targetClass instancesRespondToSelector:canEditSel]) {
        MSHookMessageEx(targetClass, canEditSel,
            (IMP)replaced_canEditRowAtIndexPath,
            (IMP *)&orig_canEditRowAtIndexPath);
        WPLog(@"QuickActions", @"[INFO] hooked canEditRowAtIndexPath on %@", NSStringFromClass(targetClass));
    } else {
        IMP impl = (IMP)replaced_canEditRowAtIndexPath;
        BOOL added = class_addMethod(targetClass, canEditSel, impl, "B@:@@");
        if (added) {
            WPLog(@"QuickActions", @"[INFO] class_addMethod canEditRowAtIndexPath on %@ OK", NSStringFromClass(targetClass));
        } else {
            WPLog(@"QuickActions", @"[ERR] class_addMethod canEditRowAtIndexPath on %@ FAILED", NSStringFromClass(targetClass));
        }
    }
}

static void replaced_viewDidAppear(id self, SEL _cmd, BOOL animated) {
    if (orig_viewDidAppear) {
        orig_viewDidAppear(self, _cmd, animated);
    }

    if (![PluginConfig shared].quickActionsEnabled) return;

    if (s_methodsInstalled) return;

    id tableView = nil;
    @try {
        tableView = [self valueForKey:@"m_tableView"];
    } @catch (NSException *e) {}

    if (!tableView) {
        WPLog(@"QuickActions", @"[DEBUG] no m_tableView found on %@", NSStringFromClass([self class]));
        return;
    }

    id delegate = [tableView delegate];
    if (!delegate) {
        WPLog(@"QuickActions", @"[DEBUG] no delegate on tableView");
        return;
    }

    Class delegateClass = [delegate class];
    WPLog(@"QuickActions", @"[INFO] found tableView delegate class: %@", NSStringFromClass(delegateClass));

    installMethodsOnClass(delegateClass);
}

@implementation QuickActionsHook

+ (void)install {
    Class newClass = objc_getClass("NewMainFrameViewController");
    if (!newClass) {
        newClass = objc_getClass("MMMainFrameViewController");
    }

    if (!newClass) {
        WPLog(@"QuickActions", @"[ERR] No main frame class found");
        return;
    }

    WPLog(@"QuickActions", @"[INFO] hooking viewDidAppear on %@", NSStringFromClass(newClass));

    SEL appearSel = @selector(viewDidAppear:);
    if ([newClass instancesRespondToSelector:appearSel]) {
        MSHookMessageEx(newClass, appearSel,
            (IMP)replaced_viewDidAppear,
            (IMP *)&orig_viewDidAppear);
        WPLog(@"QuickActions", @"[INFO] hooked viewDidAppear on %@", NSStringFromClass(newClass));
    } else {
        WPLog(@"QuickActions", @"[ERR] viewDidAppear not found on %@", NSStringFromClass(newClass));
    }
}

@end