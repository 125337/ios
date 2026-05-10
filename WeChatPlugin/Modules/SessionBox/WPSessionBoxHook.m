#import "WPSessionBoxHook.h"
#import "../../Config/PluginConfig.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>

static IMP g_origViewWillAppear = NULL;

static void sbLog(NSString *format, ...) {
    va_list args;
    va_start(args, format);
    NSString *content = [[NSString alloc] initWithFormat:format arguments:args];
    va_end(args);
    NSLog(@"[SessionBox] %@", content);
    
    @try {
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folderPath = [paths.firstObject stringByAppendingPathComponent:@"WeChatPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folderPath withIntermediateDirectories:YES attributes:nil error:nil];
        NSString *filePath = [folderPath stringByAppendingPathComponent:@"sessionbox.log"];
        NSString *line = [NSString stringWithFormat:@"[%@] %@\n", [NSDate date], content];
        NSFileHandle *handle = [NSFileHandle fileHandleForWritingAtPath:filePath];
        if (handle) {
            [handle seekToEndOfFile];
            [handle writeData:[line dataUsingEncoding:NSUTF8StringEncoding]];
            [handle closeFile];
        } else {
            [line writeToFile:filePath atomically:YES encoding:NSUTF8StringEncoding error:nil];
        }
    } @catch (NSException *e) {}
}

#pragma mark - Service Helpers

static id sb_getService(Class serviceClass) {
    Class scClass = objc_getClass("MMServiceCenter");
    if (!scClass) return nil;
    id center = ((id (*)(id, SEL))objc_msgSend)(scClass, NSSelectorFromString(@"defaultCenter"));
    if (!center) return nil;
    return ((id (*)(id, SEL, Class))objc_msgSend)(center, NSSelectorFromString(@"getService:"), serviceClass);
}

static id sb_getContactMgr() {
    Class cls = objc_getClass("CContactMgr");
    if (!cls) return nil;
    return sb_getService(cls);
}

static id sb_getSessionMgr() {
    const char *classNames[] = {
        "MMNewSessionMgr", "CConversationMgr", "CSessionMgr",
        "MMSessionMgr", "MainSessionMgr"
    };
    for (int i = 0; i < 5; i++) {
        Class cls = objc_getClass(classNames[i]);
        if (cls) {
            id svc = sb_getService(cls);
            if (svc) return svc;
        }
    }
    return nil;
}

#pragma mark - 获取 userName

static NSString *sb_userNameFromDataSource(id dataSource, NSIndexPath *indexPath) {
    if (!dataSource || !indexPath) return nil;
    
    @try {
        SEL sel1 = NSSelectorFromString(@"getSessionInfoAtIndexPath:");
        if ([dataSource respondsToSelector:sel1]) {
            id sessionInfo = ((id (*)(id, SEL, id))objc_msgSend)(dataSource, sel1, indexPath);
            if (sessionInfo) {
                SEL userNameSel = NSSelectorFromString(@"m_nsUserName");
                if ([sessionInfo respondsToSelector:userNameSel]) {
                    id name = ((id (*)(id, SEL))objc_msgSend)(sessionInfo, userNameSel);
                    if ([name isKindOfClass:[NSString class]] && [name length] > 0) return name;
                }
            }
        }
        
        SEL cellDataSel = NSSelectorFromString(@"getCellData:");
        if ([dataSource respondsToSelector:cellDataSel]) {
            id cellData = ((id (*)(id, SEL, id))objc_msgSend)(dataSource, cellDataSel, indexPath);
            if (cellData) {
                SEL sessionInfoSel = NSSelectorFromString(@"m_sessionInfo");
                if ([cellData respondsToSelector:sessionInfoSel]) {
                    id sessionInfo = ((id (*)(id, SEL))objc_msgSend)(cellData, sessionInfoSel);
                    if (sessionInfo) {
                        SEL userNameSel = NSSelectorFromString(@"m_nsUserName");
                        if ([sessionInfo respondsToSelector:userNameSel]) {
                            id name = ((id (*)(id, SEL))objc_msgSend)(sessionInfo, userNameSel);
                            if ([name isKindOfClass:[NSString class]] && [name length] > 0) return name;
                        }
                    }
                }
                SEL cellDataInfoSel = NSSelectorFromString(@"m_cellData");
                if ([cellData respondsToSelector:cellDataInfoSel]) {
                    id innerData = ((id (*)(id, SEL))objc_msgSend)(cellData, cellDataInfoSel);
                    if (innerData) {
                        SEL userNameSel2 = NSSelectorFromString(@"m_nsUserName");
                        if ([innerData respondsToSelector:userNameSel2]) {
                            id name = ((id (*)(id, SEL))objc_msgSend)(innerData, userNameSel2);
                            if ([name isKindOfClass:[NSString class]] && [name length] > 0) return name;
                        }
                    }
                }
            }
        }
        
        SEL sel2 = NSSelectorFromString(@"logicGetSessionAtIndexPath:");
        if ([dataSource respondsToSelector:sel2]) {
            id sessionInfo = ((id (*)(id, SEL, id))objc_msgSend)(dataSource, sel2, indexPath);
            if (sessionInfo) {
                SEL userNameSel = NSSelectorFromString(@"m_nsUserName");
                if ([sessionInfo respondsToSelector:userNameSel]) {
                    id name = ((id (*)(id, SEL))objc_msgSend)(sessionInfo, userNameSel);
                    if ([name isKindOfClass:[NSString class]] && [name length] > 0) return name;
                }
            }
        }
    } @catch (NSException *e) {
        sbLog(@"[getUserName] exception: %@", e.reason);
    }
    
    return nil;
}

#pragma mark - 状态检查

static BOOL sb_isSessionTop(NSString *userName) {
    id contactMgr = sb_getContactMgr();
    if (!contactMgr) return NO;
    SEL gcSel = NSSelectorFromString(@"getContactByName:");
    if (![contactMgr respondsToSelector:gcSel]) gcSel = NSSelectorFromString(@"getContactByNameFromCache:");
    if (![contactMgr respondsToSelector:gcSel]) return NO;
    id contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, gcSel, userName);
    if (!contact) return NO;
    SEL topSel = NSSelectorFromString(@"isContactSessionTop");
    if (![contact respondsToSelector:topSel]) return NO;
    return ((BOOL (*)(id, SEL))objc_msgSend)(contact, topSel);
}

static BOOL sb_isSessionMuted(NSString *userName) {
    id contactMgr = sb_getContactMgr();
    if (!contactMgr) return NO;
    SEL gcSel = NSSelectorFromString(@"getContactByName:");
    if (![contactMgr respondsToSelector:gcSel]) gcSel = NSSelectorFromString(@"getContactByNameFromCache:");
    if (![contactMgr respondsToSelector:gcSel]) return NO;
    id contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, gcSel, userName);
    if (!contact) return NO;
    SEL notifySel = NSSelectorFromString(@"isChatStatusNotifyOpen");
    if (![contact respondsToSelector:notifySel]) return NO;
    return !((BOOL (*)(id, SEL))objc_msgSend)(contact, notifySel);
}

#pragma mark - 操作函数

static void sb_togglePin(NSString *userName, BOOL isTop) {
    id sessionMgr = sb_getSessionMgr();
    if (!isTop) {
        if (sessionMgr && [sessionMgr respondsToSelector:NSSelectorFromString(@"TopSessionByName:")]) {
            ((void (*)(id, SEL, id))objc_msgSend)(sessionMgr, NSSelectorFromString(@"TopSessionByName:"), userName);
        }
    } else {
        if (sessionMgr && [sessionMgr respondsToSelector:NSSelectorFromString(@"UntopSessionByName:")]) {
            ((void (*)(id, SEL, id))objc_msgSend)(sessionMgr, NSSelectorFromString(@"UntopSessionByName:"), userName);
        }
    }
    if (sessionMgr && [sessionMgr respondsToSelector:NSSelectorFromString(@"resortSessions")]) {
        ((void (*)(id, SEL))objc_msgSend)(sessionMgr, NSSelectorFromString(@"resortSessions"));
    }
}

static void sb_toggleMute(NSString *userName, BOOL isMuted) {
    id contactMgr = sb_getContactMgr();
    if (!contactMgr) return;
    NSInteger newStatus = isMuted ? 1 : 0;
    if ([contactMgr respondsToSelector:NSSelectorFromString(@"ChangeNotifyStatus:withStatus:sync:")]) {
        ((void (*)(id, SEL, id, NSInteger, BOOL))objc_msgSend)(contactMgr, NSSelectorFromString(@"ChangeNotifyStatus:withStatus:sync:"), userName, newStatus, YES);
    }
}

static void sb_showEditRemark(NSString *userName) {
    id contactMgr = sb_getContactMgr();
    if (!contactMgr) return;
    SEL gcSel = NSSelectorFromString(@"getContactByName:");
    if (![contactMgr respondsToSelector:gcSel]) gcSel = NSSelectorFromString(@"getContactByNameFromCache:");
    if (![contactMgr respondsToSelector:gcSel]) return;
    id contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, gcSel, userName);
    if (!contact) return;

    NSString *currentRemark = @"";
    if ([contact respondsToSelector:NSSelectorFromString(@"m_nsRemark")]) {
        id r = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsRemark"));
        if ([r isKindOfClass:[NSString class]]) currentRemark = r;
    }
    NSString *nickName = @"";
    if ([contact respondsToSelector:NSSelectorFromString(@"m_nsNickName")]) {
        id n = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsNickName"));
        if ([n isKindOfClass:[NSString class]]) nickName = n;
    }

    dispatch_async(dispatch_get_main_queue(), ^{
        UIAlertController *alert = [UIAlertController
            alertControllerWithTitle:@"修改备注"
                            message:[NSString stringWithFormat:@"当前昵称: %@", nickName]
                     preferredStyle:UIAlertControllerStyleAlert];
        [alert addTextFieldWithConfigurationHandler:^(UITextField *textField) {
            textField.text = currentRemark;
            textField.placeholder = @"请输入备注名";
        }];
        __weak UIAlertController *weakAlert = alert;
        [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
            NSString *newRemark = weakAlert.textFields.firstObject.text ?: @"";
            if ([contact respondsToSelector:NSSelectorFromString(@"setM_nsRemark:")]) {
                ((void (*)(id, SEL, id))objc_msgSend)(contact, NSSelectorFromString(@"setM_nsRemark:"), newRemark);
            }
            if ([contactMgr respondsToSelector:NSSelectorFromString(@"modifyDataItem:notify:")]) {
                ((void (*)(id, SEL, id, BOOL))objc_msgSend)(contactMgr, NSSelectorFromString(@"modifyDataItem:notify:"), contact, YES);
            }
            id sessionMgr = sb_getSessionMgr();
            if (sessionMgr && [sessionMgr respondsToSelector:NSSelectorFromString(@"updateMainSessionList")]) {
                ((void (*)(id, SEL))objc_msgSend)(sessionMgr, NSSelectorFromString(@"updateMainSessionList"));
            }
        }]];
        [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];

        UIViewController *topVC = nil;
        for (UIWindow *window in [UIApplication sharedApplication].windows) {
            if (window.isKeyWindow) { topVC = window.rootViewController; break; }
        }
        while (topVC.presentedViewController) topVC = topVC.presentedViewController;
        if (topVC) [topVC presentViewController:alert animated:YES completion:nil];
    });
}

#pragma mark - Swipe State (associated with each tableView)

static const char kSwipeStateKey;
static const char kGestureAddedKey;

@interface SBSwipeState : NSObject
@property (nonatomic, weak) UITableViewCell *cell;
@property (nonatomic, assign) CGFloat openedOffset;
@property (nonatomic, strong) UIView *buttonsView;
@property (nonatomic, copy) NSString *userName;
@property (nonatomic, assign) BOOL isOpen;
@end

@implementation SBSwipeState
@end

#pragma mark - Button Builder

static CGFloat kButtonWidth = 60.0;
static CGFloat kTotalButtonsWidth = 0;

static UIView *sb_buildButtonsView(NSString *userName, CGFloat cellHeight, UIView *superview) {
    PluginConfig *config = [PluginConfig shared];
    NSMutableArray *buttons = [NSMutableArray array];
    
    if (config.quickPinEnabled) {
        BOOL isTop = sb_isSessionTop(userName);
        UIButton *btn = [UIButton buttonWithType:UIButtonTypeSystem];
        [btn setTitle:isTop ? @"取消置顶" : @"置顶" forState:UIControlStateNormal];
        [btn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
        btn.backgroundColor = [UIColor colorWithRed:0.0 green:0.48 blue:1.0 alpha:1.0];
        btn.titleLabel.font = [UIFont systemFontOfSize:14];
        btn.tag = 1;
        [buttons addObject:btn];
    }
    
    if (config.quickRemarkEnabled) {
        UIButton *btn = [UIButton buttonWithType:UIButtonTypeSystem];
        [btn setTitle:@"备注" forState:UIControlStateNormal];
        [btn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
        btn.backgroundColor = [UIColor colorWithRed:1.0 green:0.58 blue:0.0 alpha:1.0];
        btn.titleLabel.font = [UIFont systemFontOfSize:14];
        btn.tag = 2;
        [buttons addObject:btn];
    }
    
    if (config.quickMuteEnabled) {
        BOOL isMuted = sb_isSessionMuted(userName);
        UIButton *btn = [UIButton buttonWithType:UIButtonTypeSystem];
        [btn setTitle:isMuted ? @"取消免打扰" : @"免打扰" forState:UIControlStateNormal];
        [btn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
        btn.backgroundColor = [UIColor colorWithRed:0.55 green:0.0 blue:0.85 alpha:1.0];
        btn.titleLabel.font = [UIFont systemFontOfSize:14];
        btn.tag = 3;
        [buttons addObject:btn];
    }
    
    if (buttons.count == 0) return nil;
    
    CGFloat totalWidth = buttons.count * (kButtonWidth + 1) + 4;
    kTotalButtonsWidth = totalWidth;
    
    UIView *container = [[UIView alloc] initWithFrame:CGRectMake(0, 0, totalWidth, cellHeight)];
    container.backgroundColor = [UIColor clearColor];
    
    for (NSUInteger i = 0; i < buttons.count; i++) {
        UIButton *btn = buttons[i];
        btn.frame = CGRectMake(4 + i * (kButtonWidth + 1), 5, kButtonWidth, cellHeight - 10);
        btn.layer.cornerRadius = 6;
        btn.clipsToBounds = YES;
        [container addSubview:btn];
    }
    
    return container;
}

static void sb_closeSwipe(UITableView *tableView) {
    SBSwipeState *state = objc_getAssociatedObject(tableView, &kSwipeStateKey);
    if (!state || !state.isOpen) return;
    
    state.isOpen = NO;
    UITableViewCell *cell = state.cell;
    UIView *buttonsView = state.buttonsView;
    
    [UIView animateWithDuration:0.2 animations:^{
        if (cell) {
            cell.contentView.frame = CGRectMake(0, 0,
                cell.contentView.frame.size.width,
                cell.contentView.frame.size.height);
        }
    } completion:^(BOOL finished) {
        cell.clipsToBounds = YES;
        [buttonsView removeFromSuperview];
        state.buttonsView = nil;
        state.cell = nil;
        state.userName = nil;
    }];
}

#pragma mark - Pan Gesture Handler (injected into NewMainFrameViewController)

static void sb_panGestureHandler(id self, SEL _cmd, UIPanGestureRecognizer *gesture) {
    PluginConfig *config = [PluginConfig shared];
    if (!(config.quickPinEnabled || config.quickRemarkEnabled || config.quickMuteEnabled)) return;
    
    UITableView *tableView = (UITableView *)gesture.view;
    CGPoint translation = [gesture translationInView:tableView];
    CGPoint velocity = [gesture velocityInView:tableView];
    CGPoint location = [gesture locationInView:tableView];
    
    SBSwipeState *state = objc_getAssociatedObject(tableView, &kSwipeStateKey);
    if (!state) {
        state = [[SBSwipeState alloc] init];
        objc_setAssociatedObject(tableView, &kSwipeStateKey, state, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    
    switch (gesture.state) {
        case UIGestureRecognizerStateBegan: {
            if (state.isOpen) {
                sb_closeSwipe(tableView);
                return;
            }
            
            if (velocity.x <= 0 || fabs(velocity.y) > fabs(velocity.x)) return;
            
            NSIndexPath *indexPath = [tableView indexPathForRowAtPoint:location];
            if (!indexPath) return;
            
            UITableViewCell *cell = [tableView cellForRowAtIndexPath:indexPath];
            if (!cell) return;
            
            NSString *userName = sb_userNameFromDataSource(self, indexPath);
            if (!userName || userName.length == 0) return;
            
            UIView *buttonsView = sb_buildButtonsView(userName, cell.bounds.size.height, cell);
            if (!buttonsView) return;
            
            CGRect f = buttonsView.frame;
            f.origin.x = cell.bounds.size.width - f.size.width;
            f.origin.y = 0;
            buttonsView.frame = f;
            
            [cell insertSubview:buttonsView belowSubview:cell.contentView];
            
            state.cell = cell;
            state.userName = userName;
            state.buttonsView = buttonsView;
            state.openedOffset = -buttonsView.frame.size.width;
            state.isOpen = NO;
            state.cell.clipsToBounds = NO;
            
            sbLog(@"[Pan] BEGAN cell=%@ userName=%@ buttons=%lu",
                  NSStringFromClass([cell class]), userName,
                  (unsigned long)buttonsView.subviews.count);
            break;
        }
        
        case UIGestureRecognizerStateChanged: {
            if (!state.cell) return;
            
            CGFloat newX = translation.x;
            if (newX < state.openedOffset) newX = state.openedOffset;
            if (newX > 0) newX = 0;
            
            state.cell.contentView.frame = CGRectMake(newX, 0,
                state.cell.contentView.frame.size.width,
                state.cell.contentView.frame.size.height);
            break;
        }
        
        case UIGestureRecognizerStateEnded:
        case UIGestureRecognizerStateCancelled: {
            if (!state.cell) return;
            
            if (state.cell.contentView.frame.origin.x < state.openedOffset * 0.5) {
                state.isOpen = YES;
                [UIView animateWithDuration:0.2 delay:0
                    usingSpringWithDamping:0.8 initialSpringVelocity:0
                    options:UIViewAnimationOptionCurveEaseOut
                    animations:^{
                        state.cell.contentView.frame = CGRectMake(state.openedOffset, 0,
                            state.cell.contentView.frame.size.width,
                            state.cell.contentView.frame.size.height);
                    } completion:nil];
            } else {
                [UIView animateWithDuration:0.15 animations:^{
                    state.cell.contentView.frame = CGRectMake(0, 0,
                        state.cell.contentView.frame.size.width,
                        state.cell.contentView.frame.size.height);
                } completion:^(BOOL finished) {
                    [state.buttonsView removeFromSuperview];
                    state.buttonsView = nil;
                    state.cell = nil;
                    state.userName = nil;
                }];
            }
            break;
        }
        
        default:
            break;
    }
}

static void sb_tapGestureHandler(id self, SEL _cmd, UITapGestureRecognizer *gesture) {
    UITableView *tableView = (UITableView *)gesture.view;
    SBSwipeState *state = objc_getAssociatedObject(tableView, &kSwipeStateKey);
    if (!state || !state.isOpen) return;
    
    CGPoint point = [gesture locationInView:state.buttonsView];
    
    for (UIView *subview in state.buttonsView.subviews) {
        if (![subview isKindOfClass:[UIButton class]]) continue;
        if (!CGRectContainsPoint(subview.frame, point)) continue;
        
        UIButton *btn = (UIButton *)subview;
        NSString *userName = state.userName;
        sbLog(@"[Action] button tapped tag=%ld userName=%@", (long)btn.tag, userName);
        
        if (btn.tag == 1) {
            BOOL isTop = sb_isSessionTop(userName);
            sb_togglePin(userName, isTop);
        } else if (btn.tag == 2) {
            sb_showEditRemark(userName);
        } else if (btn.tag == 3) {
            BOOL isMuted = sb_isSessionMuted(userName);
            sb_toggleMute(userName, isMuted);
        }
        
        sb_closeSwipe(tableView);
        return;
    }
    
    sb_closeSwipe(tableView);
}

static BOOL sb_gestureRecognizer_shouldBegin(id self, SEL _cmd, UIGestureRecognizer *gesture) {
    if (![gesture isKindOfClass:[UIPanGestureRecognizer class]]) return YES;
    UIPanGestureRecognizer *pan = (UIPanGestureRecognizer *)gesture;
    CGPoint velocity = [pan velocityInView:pan.view];
    return fabs(velocity.x) > fabs(velocity.y);
}

static BOOL sb_gestureRecognizer_shouldSimultaneously(id self, SEL _cmd,
    UIGestureRecognizer *gesture, UIGestureRecognizer *other) {
    return YES;
}

#pragma mark - viewWillAppear Hook

static void replaced_viewWillAppear(id self, SEL _cmd, BOOL animated) {
    if (g_origViewWillAppear) {
        ((void (*)(id, SEL, BOOL))g_origViewWillAppear)(self, _cmd, animated);
    }
    
    PluginConfig *config = [PluginConfig shared];
    if (!(config.quickPinEnabled || config.quickRemarkEnabled || config.quickMuteEnabled)) return;
    
    @try {
        SEL tvSel = NSSelectorFromString(@"tableView");
        if (![self respondsToSelector:tvSel]) return;
        
        UITableView *tableView = ((id (*)(id, SEL))objc_msgSend)(self, tvSel);
        if (!tableView || ![tableView isKindOfClass:[UITableView class]]) return;
        
        NSNumber *added = objc_getAssociatedObject(tableView, &kGestureAddedKey);
        if ([added boolValue]) return;
        objc_setAssociatedObject(tableView, &kGestureAddedKey, @YES, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        
        SEL panHandlerSel = NSSelectorFromString(@"sb_handlePanGesture:");
        SEL tapHandlerSel = NSSelectorFromString(@"sb_handleTapGesture:");
        
        UIPanGestureRecognizer *pan = [[UIPanGestureRecognizer alloc]
            initWithTarget:self action:panHandlerSel];
        pan.delegate = (id<UIGestureRecognizerDelegate>)self;
        [tableView addGestureRecognizer:pan];
        sbLog(@"[viewWillAppear] ✓ added custom PanGesture to %@", NSStringFromClass([tableView class]));
        
        UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc]
            initWithTarget:self action:tapHandlerSel];
        tap.delegate = (id<UIGestureRecognizerDelegate>)self;
        [tableView addGestureRecognizer:tap];
        sbLog(@"[viewWillAppear] ✓ added custom TapGesture to %@", NSStringFromClass([tableView class]));
    } @catch (NSException *e) {
        sbLog(@"[viewWillAppear] exception: %@", e.reason);
    }
}

#pragma mark - 安装

@implementation WPSessionBoxHook

+ (void)install {
    sbLog(@"[install] === START (custom PanGesture swipe) ===");
    
    Class vcClass = objc_getClass("NewMainFrameViewController");
    if (!vcClass) {
        sbLog(@"[install] ✗ NewMainFrameViewController not found");
        return;
    }
    
    SEL viewWillAppearSel = NSSelectorFromString(@"viewWillAppear:");
    Method viewWillAppearMethod = class_getInstanceMethod(vcClass, viewWillAppearSel);
    if (viewWillAppearMethod) {
        g_origViewWillAppear = method_getImplementation(viewWillAppearMethod);
        method_setImplementation(viewWillAppearMethod, (IMP)replaced_viewWillAppear);
        sbLog(@"[install] ✓ hooked viewWillAppear: on NewMainFrameViewController");
    }
    
    SEL panHandlerSel = NSSelectorFromString(@"sb_handlePanGesture:");
    class_addMethod(vcClass, panHandlerSel, (IMP)sb_panGestureHandler, "v@:@");
    sbLog(@"[install] ✓ added sb_handlePanGesture: to NewMainFrameViewController");
    
    SEL tapHandlerSel = NSSelectorFromString(@"sb_handleTapGesture:");
    class_addMethod(vcClass, tapHandlerSel, (IMP)sb_tapGestureHandler, "v@:@");
    sbLog(@"[install] ✓ added sb_handleTapGesture: to NewMainFrameViewController");
    
    SEL shouldBeginSel = NSSelectorFromString(@"gestureRecognizerShouldBegin:");
    class_addMethod(vcClass, shouldBeginSel, (IMP)sb_gestureRecognizer_shouldBegin, "B@:@");
    sbLog(@"[install] ✓ added gestureRecognizerShouldBegin: to NewMainFrameViewController");
    
    SEL shouldSimSel = NSSelectorFromString(@"gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:");
    class_addMethod(vcClass, shouldSimSel, (IMP)sb_gestureRecognizer_shouldSimultaneously, "B@:@@");
    sbLog(@"[install] ✓ added shouldRecognizeSimultaneously to NewMainFrameViewController");
    
    sbLog(@"[install] === COMPLETE ===");
}

@end