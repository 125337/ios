#import "WPSessionBoxHook.h"
#import "../../Config/PluginConfig.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>

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

#pragma mark - 保存原始 IMP

static IMP g_orig_canEditRow = NULL;
static IMP g_orig_editingStyle = NULL;
static IMP g_orig_editActions = NULL;

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

#pragma mark - 获取 userName（从 dataSource / indexPath）

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

#pragma mark - canEditRowAtIndexPath:

static BOOL replaced_canEditRow(id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath) {
    PluginConfig *config = [PluginConfig shared];
    BOOL featuresEnabled = config.quickPinEnabled || config.quickRemarkEnabled || config.quickMuteEnabled;
    
    if (featuresEnabled) {
        NSString *userName = sb_userNameFromDataSource(self, indexPath);
        if (userName.length > 0) return YES;
    }
    
    if (g_orig_canEditRow) {
        return ((BOOL (*)(id, SEL, UITableView *, NSIndexPath *))g_orig_canEditRow)(self, _cmd, tableView, indexPath);
    }
    return NO;
}

#pragma mark - editingStyleForRowAtIndexPath:

static UITableViewCellEditingStyle replaced_editingStyle(id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath) {
    PluginConfig *config = [PluginConfig shared];
    BOOL featuresEnabled = config.quickPinEnabled || config.quickRemarkEnabled || config.quickMuteEnabled;
    
    UITableViewCellEditingStyle origStyle = UITableViewCellEditingStyleNone;
    if (g_orig_editingStyle) {
        origStyle = ((UITableViewCellEditingStyle (*)(id, SEL, UITableView *, NSIndexPath *))g_orig_editingStyle)(self, _cmd, tableView, indexPath);
    }
    
    sbLog(@"[editingStyle] %@-%@ orig=%ld features=%d",
          @(indexPath.section), @(indexPath.row), (long)origStyle, featuresEnabled);
    
    if (featuresEnabled && origStyle == UITableViewCellEditingStyleNone) {
        NSString *userName = sb_userNameFromDataSource(self, indexPath);
        if (userName.length > 0) {
            sbLog(@"[editingStyle] override .none → .delete for %@-%@", @(indexPath.section), @(indexPath.row));
            return UITableViewCellEditingStyleDelete;
        }
    }
    
    return origStyle;
}

#pragma mark - leadingSwipeActionsConfigurationForRowAtIndexPath:

static UISwipeActionsConfiguration *replaced_leadingSwipeActions(id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath) {
    sbLog(@"[leadingSwipe] CALLED %@-%@", @(indexPath.section), @(indexPath.row));
    
    NSMutableArray<UIContextualAction *> *actions = [NSMutableArray array];
    NSString *userName = sb_userNameFromDataSource(self, indexPath);
    
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
            pinAction.backgroundColor = [UIColor colorWithRed:0.0 green:0.48 blue:1.0 alpha:1.0];
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
            remarkAction.backgroundColor = [UIColor colorWithRed:1.0 green:0.58 blue:0.0 alpha:1.0];
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
            muteAction.backgroundColor = [UIColor colorWithRed:0.55 green:0.0 blue:0.85 alpha:1.0];
            [actions addObject:muteAction];
        }
    }
    
    sbLog(@"[leadingSwipe] %@-%@ userName=%@ actions=%lu",
          @(indexPath.section), @(indexPath.row), userName ?: @"nil",
          (unsigned long)actions.count);
    
    if (actions.count > 0) {
        UISwipeActionsConfiguration *config = [UISwipeActionsConfiguration configurationWithActions:actions];
        config.performsFirstActionWithFullSwipe = NO;
        return config;
    }
    
    return nil;
}

#pragma mark - 安装

@implementation WPSessionBoxHook

+ (void)install {
    sbLog(@"[install] === START (direct class hook) ===");
    
    Class vcClass = objc_getClass("NewMainFrameViewController");
    if (!vcClass) {
        sbLog(@"[install] ✗ NewMainFrameViewController not found");
        return;
    }
    
    SEL canEditSel = NSSelectorFromString(@"tableView:canEditRowAtIndexPath:");
    Method canEditMethod = class_getInstanceMethod(vcClass, canEditSel);
    if (canEditMethod) {
        g_orig_canEditRow = method_getImplementation(canEditMethod);
        method_setImplementation(canEditMethod, (IMP)replaced_canEditRow);
        sbLog(@"[install] ✓ hooked canEditRow on %@", NSStringFromClass(vcClass));
    } else {
        sbLog(@"[install] ✗ canEditRow not found on %@", NSStringFromClass(vcClass));
    }
    
    SEL editingStyleSel = NSSelectorFromString(@"tableView:editingStyleForRowAtIndexPath:");
    Method editingStyleMethod = class_getInstanceMethod(vcClass, editingStyleSel);
    if (editingStyleMethod) {
        g_orig_editingStyle = method_getImplementation(editingStyleMethod);
        method_setImplementation(editingStyleMethod, (IMP)replaced_editingStyle);
        sbLog(@"[install] ✓ hooked editingStyle on %@", NSStringFromClass(vcClass));
    } else {
        class_addMethod(vcClass, editingStyleSel, (IMP)replaced_editingStyle, "q32@0:8@16@24");
        sbLog(@"[install] ✓ added editingStyle to %@", NSStringFromClass(vcClass));
    }
    
    SEL leadingSel = NSSelectorFromString(@"tableView:leadingSwipeActionsConfigurationForRowAtIndexPath:");
    Method leadingMethod = class_getInstanceMethod(vcClass, leadingSel);
    if (leadingMethod) {
        sbLog(@"[install] leadingSwipeActions already exists on %@ — hooking", NSStringFromClass(vcClass));
        method_setImplementation(leadingMethod, (IMP)replaced_leadingSwipeActions);
    } else {
        class_addMethod(vcClass, leadingSel, (IMP)replaced_leadingSwipeActions, "@32@0:8@16@24");
        sbLog(@"[install] ✓ added leadingSwipeActions to %@", NSStringFromClass(vcClass));
    }
    
    sbLog(@"[install] === COMPLETE ===");
}

@end