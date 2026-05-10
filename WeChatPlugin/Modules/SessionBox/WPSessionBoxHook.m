#import "WPSessionBoxHook.h"
#import "../../Config/PluginConfig.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>

static NSMutableDictionary *g_origIMPs = nil;
static NSMutableSet *g_hookedTableViewClasses = nil;
static IMP g_origSetDataSource = NULL;
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
        // 方式 1: getSessionInfoAtIndexPath: → m_nsUserName
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
        
        // 方式 2: getCellData: → FakeMainFrameCellData → m_sessionInfo → m_nsUserName
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
                // 后备: FakeMainFrameCellData 直接有 m_cellData → m_nsUserName
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
        
        // 方式 3: logicGetSessionAtIndexPath: → m_nsUserName
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
        
        // 方式 4: sessionInfoForIndexPath:
        SEL sel3 = NSSelectorFromString(@"sessionInfoForIndexPath:");
        if ([dataSource respondsToSelector:sel3]) {
            id sessionInfo = ((id (*)(id, SEL, id))objc_msgSend)(dataSource, sel3, indexPath);
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

#pragma mark - willBeginEditingRowAtIndexPath (调试)

static void replaced_willBeginEditingRow(id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath) {
    sbLog(@"[willBeginEditing] === ENTERING EDIT MODE === indexPath=%@", indexPath);
    UITableViewCell *cell = [tableView cellForRowAtIndexPath:indexPath];
    sbLog(@"[willBeginEditing] cell=%@ frame=%@ editing=%d",
          NSStringFromClass([cell class]),
          NSStringFromCGRect(cell.frame),
          cell.isEditing);
    
    NSValue *impValue = g_origIMPs[@"willBeginEditingRowAtIndexPath:"];
    if (impValue) {
        IMP origIMP = [impValue pointerValue];
        if (origIMP) {
            ((void (*)(id, SEL, UITableView *, NSIndexPath *))origIMP)(self, _cmd, tableView, indexPath);
        }
    }
}

static void replaced_didEndEditingRow(id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath) {
    sbLog(@"[didEndEditing] === EXITING EDIT MODE === indexPath=%@", indexPath);
    NSValue *impValue = g_origIMPs[@"didEndEditingRowAtIndexPath:"];
    if (impValue) {
        IMP origIMP = [impValue pointerValue];
        if (origIMP) {
            ((void (*)(id, SEL, UITableView *, NSIndexPath *))origIMP)(self, _cmd, tableView, indexPath);
        }
    }
}

#pragma mark - editingStyleForRowAtIndexPath (调试)

static UITableViewCellEditingStyle replaced_editingStyle(id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath) {
    PluginConfig *config = [PluginConfig shared];
    NSValue *impValue = g_origIMPs[@"editingStyle"];
    UITableViewCellEditingStyle origStyle = UITableViewCellEditingStyleNone;
    if (impValue) {
        IMP origIMP = [impValue pointerValue];
        if (origIMP) {
            origStyle = ((UITableViewCellEditingStyle (*)(id, SEL, UITableView *, NSIndexPath *))origIMP)(self, _cmd, tableView, indexPath);
        }
    }
    sbLog(@"[editingStyle] indexPath=%@ origStyle=%ld", indexPath, (long)origStyle);
    
    if (config.quickPinEnabled || config.quickRemarkEnabled || config.quickMuteEnabled) {
        if (origStyle == UITableViewCellEditingStyleNone) {
            sbLog(@"[editingStyle] overriding .none → .delete for indexPath=%@", indexPath);
            return UITableViewCellEditingStyleDelete;
        }
    }
    return origStyle;
}

#pragma mark - Leading Swipe Actions (右滑菜单)

static UISwipeActionsConfiguration *replaced_leadingSwipeActions(
    id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath) {
    
    sbLog(@"[leadingSwipe] === CALLED === indexPath=%@", indexPath);
    
    UITableViewCell *cell = [tableView cellForRowAtIndexPath:indexPath];
    sbLog(@"[leadingSwipe] cell=%@ editing=%d allowsMultipleSelection=%d",
          NSStringFromClass([cell class]),
          cell.isEditing,
          tableView.allowsMultipleSelectionDuringEditing);
    
    UISwipeActionsConfiguration *origConfig = nil;
    NSValue *origIMPValue = g_origIMPs[@"leadingSwipe"];
    if (origIMPValue) {
        IMP origIMP = [origIMPValue pointerValue];
        if (origIMP) {
            origConfig = ((UISwipeActionsConfiguration *(*)(id, SEL, UITableView *, NSIndexPath *))origIMP)(self, _cmd, tableView, indexPath);
            sbLog(@"[leadingSwipe] orig actions count=%lu", (unsigned long)(origConfig ? origConfig.actions.count : 0));
        }
    }
    
    NSMutableArray<UIContextualAction *> *actions = [NSMutableArray array];
    NSString *userName = sb_userNameFromDataSource(self, indexPath);
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
    
    sbLog(@"[leadingSwipe] our actions count=%lu", (unsigned long)actions.count);
    
    if (actions.count == 0) return origConfig;
    
    if (!origConfig || origConfig.actions.count == 0) {
        UISwipeActionsConfiguration *config = [UISwipeActionsConfiguration configurationWithActions:actions];
        config.performsFirstActionWithFullSwipe = NO;
        return config;
    }
    
    NSMutableArray *allActions = [NSMutableArray arrayWithArray:actions];
    [allActions addObjectsFromArray:origConfig.actions];
    UISwipeActionsConfiguration *merged = [UISwipeActionsConfiguration configurationWithActions:allActions];
    merged.performsFirstActionWithFullSwipe = NO;
    sbLog(@"[leadingSwipe] merged actions count=%lu", (unsigned long)allActions.count);
    return merged;
}

#pragma mark - canEditRowAtIndexPath

static BOOL replaced_canEditRow(id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath) {
    PluginConfig *config = [PluginConfig shared];
    if (config.quickPinEnabled || config.quickRemarkEnabled || config.quickMuteEnabled) {
        sbLog(@"[canEditRow] indexPath=%@ → YES (features enabled)", indexPath);
        return YES;
    }
    
    NSValue *impValue = g_origIMPs[@"canEditRowAtIndexPath:"];
    if (impValue) {
        IMP origIMP = [impValue pointerValue];
        if (origIMP) {
            BOOL result = ((BOOL (*)(id, SEL, UITableView *, NSIndexPath *))origIMP)(self, _cmd, tableView, indexPath);
            sbLog(@"[canEditRow] indexPath=%@ → original=%d", indexPath, result);
            return result;
        }
    }
    
    sbLog(@"[canEditRow] indexPath=%@ → NO (no orig IMP)", indexPath);
    return NO;
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
        if ([self respondsToSelector:tvSel]) {
            UITableView *tableView = ((id (*)(id, SEL))objc_msgSend)(self, tvSel);
            if (tableView && [tableView isKindOfClass:[UITableView class]]) {
                // 确保 pan gesture 启用
                tableView.panGestureRecognizer.enabled = YES;
            }
        }
    } @catch (NSException *e) {
        sbLog(@"[viewWillAppear] exception: %@", e.reason);
    }
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
    
    // Hook leadingSwipeActionsConfigurationForRowAtIndexPath: (左→右滑 = 我们的自定义菜单)
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
    
    // Hook canEditRowAtIndexPath: (允许滑动编辑)
    SEL canEditSel = NSSelectorFromString(@"tableView:canEditRowAtIndexPath:");
    Method canEditMethod = class_getInstanceMethod(dsClass, canEditSel);
    
    if (canEditMethod) {
        IMP origIMP = method_getImplementation(canEditMethod);
        g_origIMPs[@"canEditRowAtIndexPath:"] = [NSValue valueWithPointer:origIMP];
        method_setImplementation(canEditMethod, (IMP)replaced_canEditRow);
        sbLog(@"[setDataSource] ✓ HOOKED canEditRowAtIndexPath: on %@", className);
    } else {
        class_addMethod(dsClass, canEditSel, (IMP)replaced_canEditRow, "B32@0:8@16@24");
        sbLog(@"[setDataSource] ✓ ADDED canEditRowAtIndexPath: to %@", className);
    }
    
    // Hook willBeginEditingRowAtIndexPath: (调试: 是否进入编辑状态)
    SEL willBeginSel = NSSelectorFromString(@"tableView:willBeginEditingRowAtIndexPath:");
    Method willBeginMethod = class_getInstanceMethod(dsClass, willBeginSel);
    if (willBeginMethod) {
        IMP origIMP = method_getImplementation(willBeginMethod);
        g_origIMPs[@"willBeginEditingRowAtIndexPath:"] = [NSValue valueWithPointer:origIMP];
        method_setImplementation(willBeginMethod, (IMP)replaced_willBeginEditingRow);
        sbLog(@"[setDataSource] ✓ HOOKED willBeginEditingRow on %@", className);
    } else {
        class_addMethod(dsClass, willBeginSel, (IMP)replaced_willBeginEditingRow, "v32@0:8@16@24");
        sbLog(@"[setDataSource] ✓ ADDED willBeginEditingRow to %@", className);
    }
    
    // Hook didEndEditingRowAtIndexPath: (调试: 是否退出编辑状态)
    SEL didEndSel = NSSelectorFromString(@"tableView:didEndEditingRowAtIndexPath:");
    Method didEndMethod = class_getInstanceMethod(dsClass, didEndSel);
    if (didEndMethod) {
        IMP origIMP = method_getImplementation(didEndMethod);
        g_origIMPs[@"didEndEditingRowAtIndexPath:"] = [NSValue valueWithPointer:origIMP];
        method_setImplementation(didEndMethod, (IMP)replaced_didEndEditingRow);
        sbLog(@"[setDataSource] ✓ HOOKED didEndEditingRow on %@", className);
    } else {
        class_addMethod(dsClass, didEndSel, (IMP)replaced_didEndEditingRow, "v32@0:8@16@24");
        sbLog(@"[setDataSource] ✓ ADDED didEndEditingRow to %@", className);
    }
    
    // Hook editingStyleForRowAtIndexPath: (调试: 检查原始编辑样式)
    SEL editingStyleSel = NSSelectorFromString(@"tableView:editingStyleForRowAtIndexPath:");
    Method editingStyleMethod = class_getInstanceMethod(dsClass, editingStyleSel);
    if (editingStyleMethod) {
        IMP origIMP = method_getImplementation(editingStyleMethod);
        g_origIMPs[@"editingStyle"] = [NSValue valueWithPointer:origIMP];
        method_setImplementation(editingStyleMethod, (IMP)replaced_editingStyle);
        sbLog(@"[setDataSource] ✓ HOOKED editingStyle on %@", className);
    } else {
        class_addMethod(dsClass, editingStyleSel, (IMP)replaced_editingStyle, "q32@0:8@16@24");
        sbLog(@"[setDataSource] ✓ ADDED editingStyle to %@", className);
    }
    
    [g_hookedTableViewClasses addObject:className];
}

#pragma mark - 安装

@implementation WPSessionBoxHook

+ (void)install {
    sbLog(@"[install] === START (leadingSwipe + canEdit + viewWillAppear) ===");
    
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
    
    Class vcClass = objc_getClass("NewMainFrameViewController");
    if (vcClass) {
        SEL viewWillAppearSel = NSSelectorFromString(@"viewWillAppear:");
        Method viewWillAppearMethod = class_getInstanceMethod(vcClass, viewWillAppearSel);
        if (viewWillAppearMethod) {
            g_origViewWillAppear = method_getImplementation(viewWillAppearMethod);
            method_setImplementation(viewWillAppearMethod, (IMP)replaced_viewWillAppear);
            sbLog(@"[install] ✓ hooked viewWillAppear: on NewMainFrameViewController");
        }
    } else {
        sbLog(@"[install] ✗ NewMainFrameViewController not found");
    }
    
    sbLog(@"[install] === COMPLETE ===");
}

@end
