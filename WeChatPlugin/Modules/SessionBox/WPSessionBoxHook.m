#import "WPSessionBoxHook.h"
#import "../../Config/PluginConfig.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>

static NSMutableDictionary *g_origIMPs = nil;
static NSMutableSet *g_hookedTableViewClasses = nil;
static IMP g_origSetDataSource = NULL;

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
        [line writeToFile:filePath atomically:YES encoding:NSUTF8StringEncoding error:nil];
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

static NSString *sb_userNameFromIndexPath(id dataSource, NSIndexPath *indexPath) {
    if (!dataSource || !indexPath) return nil;
    
    @try {
        id sessionMgr = sb_getSessionMgr();
        if (!sessionMgr) return nil;
        
        SEL sessionListSel = NSSelectorFromString(@"sessionList");
        if (![sessionMgr respondsToSelector:sessionListSel]) {
            sessionListSel = NSSelectorFromString(@"m_arrSessionList");
        }
        if (![sessionMgr respondsToSelector:sessionListSel]) return nil;
        
        id sessionList = ((id (*)(id, SEL))objc_msgSend)(sessionMgr, sessionListSel);
        if (![sessionList isKindOfClass:[NSArray class]]) return nil;
        
        NSInteger actualIndex = indexPath.row;
        if (indexPath.section == 1) {
            NSInteger topCount = 0;
            for (id session in (NSArray *)sessionList) {
                SEL topSel = NSSelectorFromString(@"isSessionTop");
                if (![session respondsToSelector:topSel]) topSel = NSSelectorFromString(@"isTop");
                if ([session respondsToSelector:topSel]) {
                    if (((BOOL (*)(id, SEL))objc_msgSend)(session, topSel)) {
                        topCount++;
                    } else {
                        break;
                    }
                }
            }
            actualIndex = indexPath.row + topCount;
        }
        
        if (actualIndex < 0 || actualIndex >= [(NSArray *)sessionList count]) return nil;
        
        id sessionInfo = sessionList[actualIndex];
        if (!sessionInfo) return nil;
        
        SEL userNameSel = NSSelectorFromString(@"m_nsUserName");
        if ([sessionInfo respondsToSelector:userNameSel]) {
            id name = ((id (*)(id, SEL))objc_msgSend)(sessionInfo, userNameSel);
            if ([name isKindOfClass:[NSString class]]) return name;
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

#pragma mark - Leading Swipe Actions (右滑菜单，手指向右滑，菜单在左侧)

static UISwipeActionsConfiguration *replaced_leadingSwipeActions(
    id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath) {
    
    sbLog(@"[leadingSwipe] === CALLED === indexPath=%@", indexPath);
    
    NSMutableArray<UIContextualAction *> *actions = [NSMutableArray array];
    
    NSString *userName = sb_userNameFromIndexPath(self, indexPath);
    sbLog(@"[leadingSwipe] userName=%@", userName ?: @"nil");
    
    if (userName.length > 0) {
        PluginConfig *config = [PluginConfig shared];
        
        if (config.quickPinEnabled) {
            BOOL isTop = sb_isSessionTop(userName);
            UIContextualAction *pinAction = [UIContextualAction
                contextualActionWithStyle:UIContextualActionStyleNormal
                                   title:isTop ? @"取消置顶" : @"置顶"
                                 handler:^(UIContextualAction *action, UIView *sourceView, void (^completion)(BOOL)) {
                    sbLog(@"[Action] togglePin: %@", userName);
                    sb_togglePin(userName, isTop);
                    completion(YES);
                }];
            pinAction.backgroundColor = [UIColor systemBlueColor];
            [actions addObject:pinAction];
        }
        
        if (config.quickRemarkEnabled) {
            UIContextualAction *remarkAction = [UIContextualAction
                contextualActionWithStyle:UIContextualActionStyleNormal
                                   title:@"备注"
                                 handler:^(UIContextualAction *action, UIView *sourceView, void (^completion)(BOOL)) {
                    sbLog(@"[Action] showEditRemark: %@", userName);
                    sb_showEditRemark(userName);
                    completion(YES);
                }];
            remarkAction.backgroundColor = [UIColor systemOrangeColor];
            [actions addObject:remarkAction];
        }
        
        if (config.quickMuteEnabled) {
            BOOL isMuted = sb_isSessionMuted(userName);
            UIContextualAction *muteAction = [UIContextualAction
                contextualActionWithStyle:UIContextualActionStyleNormal
                                   title:isMuted ? @"取消免打扰" : @"免打扰"
                                 handler:^(UIContextualAction *action, UIView *sourceView, void (^completion)(BOOL)) {
                    sbLog(@"[Action] toggleMute: %@", userName);
                    sb_toggleMute(userName, isMuted);
                    completion(YES);
                }];
            muteAction.backgroundColor = [UIColor systemPurpleColor];
            [actions addObject:muteAction];
        }
    }
    
    sbLog(@"[leadingSwipe] returning %lu actions", (unsigned long)actions.count);
    return [UISwipeActionsConfiguration configurationWithActions:actions];
}

#pragma mark - setDataSource Hook

static void replaced_setDataSource(id self, SEL _cmd, id dataSource) {
    if (g_origSetDataSource) {
        ((void (*)(id, SEL, id))g_origSetDataSource)(self, _cmd, dataSource);
    }
    
    sbLog(@"[setDataSource] tableView=%@ dataSource=%@",
          NSStringFromClass([self class]),
          dataSource ? NSStringFromClass([dataSource class]) : @"nil");
    
    if (!dataSource) return;
    
    Class dsClass = [dataSource class];
    NSString *className = NSStringFromClass(dsClass);
    
    if ([g_hookedTableViewClasses containsObject:className]) {
        sbLog(@"[setDataSource] already hooked: %@", className);
        return;
    }
    
    // Hook leadingSwipeActionsConfigurationForRowAtIndexPath: (右滑菜单)
    SEL leadingSel = NSSelectorFromString(@"tableView:leadingSwipeActionsConfigurationForRowAtIndexPath:");
    Method leadingMethod = class_getInstanceMethod(dsClass, leadingSel);
    
    if (leadingMethod) {
        IMP origIMP = method_getImplementation(leadingMethod);
        g_origIMPs[@"leadingSwipe"] = [NSValue valueWithPointer:origIMP];
        method_setImplementation(leadingMethod, (IMP)replaced_leadingSwipeActions);
        sbLog(@"[setDataSource] ✓ HOOKED leadingSwipeActions on %@", className);
    } else {
        class_addMethod(dsClass, leadingSel, (IMP)replaced_leadingSwipeActions, "@32@0:8@16@24");
        sbLog(@"[setDataSource] ✓ ADDED leadingSwipeActions to %@", className);
    }
    
    [g_hookedTableViewClasses addObject:className];
}

#pragma mark - 安装

@implementation WPSessionBoxHook

+ (void)install {
    sbLog(@"[install] === START (Leading Swipe Hook) ===");
    
    g_origIMPs = [NSMutableDictionary dictionary];
    g_hookedTableViewClasses = [NSMutableSet set];
    
    Class tableViewClass = [UITableView class];
    SEL setDataSourceSel = NSSelectorFromString(@"setDataSource:");
    Method setDataSourceMethod = class_getInstanceMethod(tableViewClass, setDataSourceSel);
    
    if (setDataSourceMethod) {
        g_origSetDataSource = method_getImplementation(setDataSourceMethod);
        method_setImplementation(setDataSourceMethod, (IMP)replaced_setDataSource);
        sbLog(@"[install] ✓ hooked setDataSource: on UITableView");
    }
    
    sbLog(@"[install] === COMPLETE ===");
}

@end
