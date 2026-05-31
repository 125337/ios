#import "QuickActionsHook.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/LogManager.h"
#import "../../Core/ServiceHelper.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>
#import <substrate.h>

static IMP orig_trailingSwipeActionsConfig = NULL;
static BOOL (*orig_gestureRecognizerShouldBegin)(id, SEL, id) = NULL;

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

static id replaced_trailingSwipeActionsConfig(id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath) {
    id origConfig = nil;
    if (orig_trailingSwipeActionsConfig) {
        origConfig = ((id (*)(id, SEL, id, id))orig_trailingSwipeActionsConfig)(self, _cmd, tableView, indexPath);
    }

    if (![PluginConfig shared].quickActionsEnabled) {
        return origConfig;
    }

    id sessionInfo = getSessionInfo(self, indexPath);
    if (!sessionInfo) {
        WPLog(@"QuickActions", @"[DEBUG] no sessionInfo for indexPath %@", indexPath);
        return origConfig;
    }

    NSString *userName = nil;
    SEL userNameSel = NSSelectorFromString(@"m_nsUserName");
    if ([sessionInfo respondsToSelector:userNameSel]) {
        userName = ((id (*)(id, SEL))objc_msgSend)(sessionInfo, userNameSel);
    }
    if (!userName || userName.length == 0) return origConfig;

    id contact = WXGetContactForWxid(userName);
    if (!contact) return origConfig;

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

    NSArray *ourActions = @[muteAction, remarkAction, pinAction];
    NSArray *origActions = @[];
    if (origConfig) {
        SEL actionsSel = NSSelectorFromString(@"actions");
        if ([origConfig respondsToSelector:actionsSel]) {
            NSArray *acts = ((id (*)(id, SEL))objc_msgSend)(origConfig, actionsSel);
            if (acts) origActions = acts;
        }
    }

    NSMutableArray *merged = [NSMutableArray arrayWithArray:ourActions];
    [merged addObjectsFromArray:origActions];

    return [UISwipeActionsConfiguration configurationWithActions:merged];
}

static BOOL replaced_gestureRecognizerShouldBegin(id self, SEL _cmd, UIGestureRecognizer *gesture) {
    if (![PluginConfig shared].quickActionsEnabled) {
        if (orig_gestureRecognizerShouldBegin) {
            return orig_gestureRecognizerShouldBegin(self, _cmd, gesture);
        }
        return YES;
    }

    if ([gesture isKindOfClass:[UISwipeGestureRecognizer class]]) {
        UISwipeGestureRecognizerDirection dir = ((UISwipeGestureRecognizer *)gesture).direction;
        UIUserInterfaceLayoutDirection layoutDir = [UIApplication sharedApplication].userInterfaceLayoutDirection;
        BOOL isRTL = (layoutDir == UIUserInterfaceLayoutDirectionRightToLeft);

        BOOL isLeading = isRTL ? (dir == UISwipeGestureRecognizerDirectionLeft)
                               : (dir == UISwipeGestureRecognizerDirectionRight);
        BOOL isTrailing = isRTL ? (dir == UISwipeGestureRecognizerDirectionRight)
                                : (dir == UISwipeGestureRecognizerDirectionLeft);

        if (isLeading) {
            WPLog(@"QuickActions", @"[DEBUG] blocking leading swipe (dir=%lu, RTL=%d)", (unsigned long)dir, isRTL);
            return NO;
        }
        if (isTrailing) {
            WPLog(@"QuickActions", @"[DEBUG] allowing trailing swipe (dir=%lu, RTL=%d)", (unsigned long)dir, isRTL);
            return YES;
        }
    }

    if (orig_gestureRecognizerShouldBegin) {
        return orig_gestureRecognizerShouldBegin(self, _cmd, gesture);
    }
    return YES;
}

@implementation QuickActionsHook

+ (void)install {
    Class newClass = objc_getClass("NewMainFrameViewController");
    Class mmClass = objc_getClass("MMMainFrameViewController");
    Class targetClass = newClass ?: mmClass;

    if (!targetClass) {
        WPLog(@"QuickActions", @"[ERR] No target class found");
        return;
    }

    SEL targetSel = @selector(tableView:trailingSwipeActionsConfigurationForRowAtIndexPath:);

    if (newClass) {
        if ([newClass instancesRespondToSelector:targetSel]) {
            MSHookMessageEx(newClass, targetSel,
                (IMP)replaced_trailingSwipeActionsConfig,
                &orig_trailingSwipeActionsConfig);
            WPLog(@"QuickActions", @"[INFO] hooked on NewMainFrameViewController (method exists)");
        } else {
            IMP impl = (IMP)replaced_trailingSwipeActionsConfig;
            BOOL added = class_addMethod(newClass, targetSel, impl, "@@:@@");
            if (added) {
                WPLog(@"QuickActions", @"[INFO] class_addMethod on NewMainFrameViewController OK");
            } else {
                WPLog(@"QuickActions", @"[ERR] class_addMethod on NewMainFrameViewController FAILED");
            }
        }
    }

    if (mmClass && mmClass != newClass) {
        if ([mmClass instancesRespondToSelector:targetSel]) {
            MSHookMessageEx(mmClass, targetSel,
                (IMP)replaced_trailingSwipeActionsConfig,
                &orig_trailingSwipeActionsConfig);
            WPLog(@"QuickActions", @"[INFO] hooked on MMMainFrameViewController (method exists)");
        } else {
            IMP impl = (IMP)replaced_trailingSwipeActionsConfig;
            BOOL added = class_addMethod(mmClass, targetSel, impl, "@@:@@");
            if (added) {
                WPLog(@"QuickActions", @"[INFO] class_addMethod on MMMainFrameViewController OK");
            } else {
                WPLog(@"QuickActions", @"[ERR] class_addMethod on MMMainFrameViewController FAILED");
            }
        }
    }

    SEL grSel = @selector(gestureRecognizerShouldBegin:);
    if ([targetClass instancesRespondToSelector:grSel]) {
        MSHookMessageEx(targetClass, grSel,
            (IMP)replaced_gestureRecognizerShouldBegin,
            (IMP *)&orig_gestureRecognizerShouldBegin);
        WPLog(@"QuickActions", @"[INFO] hooked gestureRecognizerShouldBegin on %@", targetClass);
    } else {
        BOOL added = class_addMethod(targetClass, grSel,
            (IMP)replaced_gestureRecognizerShouldBegin, "B@:@");
        if (added) {
            WPLog(@"QuickActions", @"[INFO] class_addMethod gestureRecognizerShouldBegin on %@ OK", targetClass);
        } else {
            WPLog(@"QuickActions", @"[ERR] class_addMethod gestureRecognizerShouldBegin on %@ FAILED", targetClass);
        }
    }
}

@end