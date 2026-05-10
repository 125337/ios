#import "WPSessionBoxHook.h"
#import "../../Config/PluginConfig.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>

static NSMutableDictionary *g_origIMPs = nil;
static NSMutableSet *g_hookedTableViewClasses = nil;
static IMP g_origSetDataSource = NULL;
static IMP g_origDidMoveToWindow = NULL;

static void sbHookLog(NSString *format, ...) {
    va_list args;
    va_start(args, format);
    NSString *content = [[NSString alloc] initWithFormat:format arguments:args];
    va_end(args);

    NSLog(@"[WeChatPlugin][SessionBox] %@", content);

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
        sbHookLog(@"[getUserName] exception: %@", e.reason);
    }

    return nil;
}

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

#pragma mark - Enable Swipe Gestures

static void enableSwipeGestures(id tableView) {
    sbHookLog(@"[enableSwipe] tableView=%@", NSStringFromClass([tableView class]));
    
    // 尝试多种可能的属性名来启用左滑
    struct {
        const char *setter;
        BOOL value;
    } properties[] = {
        {"setSwipeEnable:", YES},
        {"setEnableSwipeLeft:", YES},
        {"setEnableSwipeRight:", YES},
        {"setForbidDisplayMenuWithGestures:", NO},
        {"setForbidMenuItemShow:", NO},
        {"setDisableMenuButton:", NO},
        {"setDisableSwipeGesture:", NO},
        {"setDisableGesture:", NO},
        {"setCanSwipeWithGesture:", YES},
        {"setContextMenuEnabled:", YES},
    };
    
    for (int i = 0; i < 10; i++) {
        SEL sel = NSSelectorFromString([NSString stringWithUTF8String:properties[i].setter]);
        if ([tableView respondsToSelector:sel]) {
            ((void (*)(id, SEL, BOOL))objc_msgSend)(tableView, sel, properties[i].value);
            sbHookLog(@"[enableSwipe] ✓ set %s = %@", properties[i].setter, properties[i].value ? @"YES" : @"NO");
        }
    }
    
    // 探测 tableView 的所有属性
    unsigned int propCount = 0;
    objc_property_t *props = class_copyPropertyList([tableView class], &propCount);
    sbHookLog(@"[enableSwipe] tableView properties: %u", propCount);
    for (unsigned int i = 0; i < propCount; i++) {
        const char *name = property_getName(props[i]);
        const char *attrs = property_getAttributes(props[i]);
        NSString *nameStr = [NSString stringWithUTF8String:name];
        if ([nameStr containsString:@"swipe"] || 
            [nameStr containsString:@"Swipe"] ||
            [nameStr containsString:@"menu"] || 
            [nameStr containsString:@"Menu"] ||
            [nameStr containsString:@"gesture"] ||
            [nameStr containsString:@"Gesture"] ||
            [nameStr containsString:@"enable"] ||
            [nameStr containsString:@"Enable"] ||
            [nameStr containsString:@"forbid"] ||
            [nameStr containsString:@"Forbid"] ||
            [nameStr containsString:@"disable"] ||
            [nameStr containsString:@"Disable"]) {
            sbHookLog(@"[enableSwipe]   prop: %s [%s]", name, attrs);
        }
    }
    free(props);
}

#pragma mark - Trailing Swipe Actions

static UISwipeActionsConfiguration *replaced_trailingSwipeActions(
    id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath) {

    sbHookLog(@"[trailingSwipe] === CALLED === indexPath=%@", indexPath);

    NSMutableArray<UIContextualAction *> *actions = [NSMutableArray array];

    NSString *userName = sb_userNameFromIndexPath(self, indexPath);
    sbHookLog(@"[trailingSwipe] userName=%@", userName ?: @"nil");

    if (userName.length > 0) {
        PluginConfig *config = [PluginConfig shared];

        if (config.quickPinEnabled) {
            BOOL isTop = sb_isSessionTop(userName);
            UIContextualAction *pinAction = [UIContextualAction
                contextualActionWithStyle:UIContextualActionStyleNormal
                                   title:isTop ? @"取消置顶" : @"置顶"
                                 handler:^(UIContextualAction *action, UIView *sourceView, void (^completion)(BOOL)) {
                    sbHookLog(@"[Action] togglePin: %@", userName);
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
                    sbHookLog(@"[Action] showEditRemark: %@", userName);
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
                    sbHookLog(@"[Action] toggleMute: %@", userName);
                    sb_toggleMute(userName, isMuted);
                    completion(YES);
                }];
            muteAction.backgroundColor = [UIColor systemPurpleColor];
            [actions addObject:muteAction];
        }
    }

    sbHookLog(@"[trailingSwipe] returning %lu actions", (unsigned long)actions.count);
    return [UISwipeActionsConfiguration configurationWithActions:actions];
}

#pragma mark - canEditRowAtIndexPath

static BOOL replaced_canEditRow(id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath) {
    sbHookLog(@"[canEditRow] indexPath=%@", indexPath);

    NSValue *impValue = g_origIMPs[@"canEditRowAtIndexPath:"];
    if (impValue) {
        IMP origIMP = [impValue pointerValue];
        if (origIMP) {
            BOOL result = ((BOOL (*)(id, SEL, UITableView *, NSIndexPath *))origIMP)(self, _cmd, tableView, indexPath);
            sbHookLog(@"[canEditRow] original result=%d", result);
            return result;
        }
    }

    return YES;
}

#pragma mark - editingStyleForRowAtIndexPath

static NSInteger replaced_editingStyleForRow(id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath) {
    sbHookLog(@"[editingStyle] indexPath=%@", indexPath);
    
    NSValue *impValue = g_origIMPs[@"editingStyleForRowAtIndexPath:"];
    if (impValue) {
        IMP origIMP = [impValue pointerValue];
        if (origIMP) {
            NSInteger result = ((NSInteger (*)(id, SEL, UITableView *, NSIndexPath *))origIMP)(self, _cmd, tableView, indexPath);
            sbHookLog(@"[editingStyle] original result=%ld", (long)result);
            if (result != UITableViewCellEditingStyleNone) return result;
        }
    }
    
    if (indexPath.section > 0) {
        sbHookLog(@"[editingStyle] returning UITableViewCellEditingStyleDelete");
        return UITableViewCellEditingStyleDelete;
    }
    
    return UITableViewCellEditingStyleNone;
}

#pragma mark - commitEditingStyle

static void replaced_commitEditingStyle(id self, SEL _cmd, NSInteger editingStyle, NSIndexPath *indexPath) {
    sbHookLog(@"[commitEditing] style=%ld indexPath=%@", (long)editingStyle, indexPath);
    
    if (editingStyle == UITableViewCellEditingStyleDelete) {
        NSString *userName = sb_userNameFromIndexPath(self, indexPath);
        sbHookLog(@"[commitEditing] userName=%@", userName ?: @"nil");
        
        if (userName.length > 0) {
            PluginConfig *config = [PluginConfig shared];
            
            if (config.quickPinEnabled) {
                BOOL isTop = sb_isSessionTop(userName);
                sb_togglePin(userName, isTop);
                sbHookLog(@"[commitEditing] executed togglePin");
                return;
            }
        }
    }
    
    NSValue *impValue = g_origIMPs[@"commitEditingStyle:forRowAtIndexPath:"];
    if (impValue) {
        IMP origIMP = [impValue pointerValue];
        if (origIMP) {
            ((void (*)(id, SEL, NSInteger, NSIndexPath *))origIMP)(self, _cmd, editingStyle, indexPath);
        }
    }
}

#pragma mark - editActionsForRowAtIndexPath (iOS 8-12)

static NSArray *replaced_editActionsForRow(id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath) {
    sbHookLog(@"[editActions] indexPath=%@", indexPath);
    
    NSMutableArray *actions = [NSMutableArray array];
    
    NSValue *impValue = g_origIMPs[@"editActionsForRowAtIndexPath:"];
    if (impValue) {
        IMP origIMP = [impValue pointerValue];
        if (origIMP) {
            NSArray *origActions = ((NSArray *(*)(id, SEL, UITableView *, NSIndexPath *))origIMP)(self, _cmd, tableView, indexPath);
            if (origActions) [actions addObjectsFromArray:origActions];
        }
    }
    
    NSString *userName = sb_userNameFromIndexPath(self, indexPath);
    sbHookLog(@"[editActions] userName=%@", userName ?: @"nil");
    
    if (userName.length > 0 && indexPath.section > 0) {
        PluginConfig *config = [PluginConfig shared];
        
        if (config.quickPinEnabled) {
            BOOL isTop = sb_isSessionTop(userName);
            UITableViewRowAction *pinAction = [UITableViewRowAction
                rowActionWithStyle:UITableViewRowActionStyleNormal
                             title:isTop ? @"取消置顶" : @"置顶"
                           handler:^(UITableViewRowAction *action, NSIndexPath *indexPath) {
                    sbHookLog(@"[editAction] togglePin: %@", userName);
                    sb_togglePin(userName, isTop);
                }];
            pinAction.backgroundColor = [UIColor systemBlueColor];
            [actions addObject:pinAction];
        }
        
        if (config.quickRemarkEnabled) {
            UITableViewRowAction *remarkAction = [UITableViewRowAction
                rowActionWithStyle:UITableViewRowActionStyleNormal
                             title:@"备注"
                           handler:^(UITableViewRowAction *action, NSIndexPath *indexPath) {
                    sbHookLog(@"[editAction] showEditRemark: %@", userName);
                    sb_showEditRemark(userName);
                }];
            remarkAction.backgroundColor = [UIColor systemOrangeColor];
            [actions addObject:remarkAction];
        }
        
        if (config.quickMuteEnabled) {
            BOOL isMuted = sb_isSessionMuted(userName);
            UITableViewRowAction *muteAction = [UITableViewRowAction
                rowActionWithStyle:UITableViewRowActionStyleNormal
                             title:isMuted ? @"取消免打扰" : @"免打扰"
                           handler:^(UITableViewRowAction *action, NSIndexPath *indexPath) {
                    sbHookLog(@"[editAction] toggleMute: %@", userName);
                    sb_toggleMute(userName, isMuted);
                }];
            muteAction.backgroundColor = [UIColor systemPurpleColor];
            [actions addObject:muteAction];
        }
    }
    
    sbHookLog(@"[editActions] returning %lu actions", (unsigned long)actions.count);
    return actions;
}

#pragma mark - didMoveToWindow Hook

static void replaced_didMoveToWindow(id self, SEL _cmd) {
    if (g_origDidMoveToWindow) {
        ((void (*)(id, SEL))g_origDidMoveToWindow)(self, _cmd);
    }

    sbHookLog(@"[didMoveToWindow] tableView=%@", NSStringFromClass([self class]));

    enableSwipeGestures(self);
}

#pragma mark - setDataSource Hook

static void replaced_setDataSource(id self, SEL _cmd, id dataSource) {
    if (g_origSetDataSource) {
        ((void (*)(id, SEL, id))g_origSetDataSource)(self, _cmd, dataSource);
    }

    sbHookLog(@"[setDataSource] tableView=%@ dataSource=%@",
              NSStringFromClass([self class]),
              dataSource ? NSStringFromClass([dataSource class]) : @"nil");

    if (!dataSource) return;

    Class dsClass = [dataSource class];
    NSString *className = NSStringFromClass(dsClass);

    if ([g_hookedTableViewClasses containsObject:className]) {
        sbHookLog(@"[setDataSource] already hooked: %@", className);
        return;
    }

    SEL trailingSel = NSSelectorFromString(@"tableView:trailingSwipeActionsConfigurationForRowAtIndexPath:");
    Method trailingMethod = class_getInstanceMethod(dsClass, trailingSel);

    if (!trailingMethod) {
        BOOL added = class_addMethod(dsClass, trailingSel,
            (IMP)replaced_trailingSwipeActions, "@32@0:8@16@24");
        if (added) {
            sbHookLog(@"[setDataSource] ADDED trailingSwipeActions to %@", className);
        } else {
            sbHookLog(@"[setDataSource] FAILED to add trailingSwipeActions to %@", className);
        }
    } else {
        sbHookLog(@"[setDataSource] trailingSwipeActions already exists on %@", className);
    }

    SEL canEditSel = NSSelectorFromString(@"tableView:canEditRowAtIndexPath:");
    Method canEditMethod = class_getInstanceMethod(dsClass, canEditSel);

    if (canEditMethod) {
        IMP origIMP = method_getImplementation(canEditMethod);
        g_origIMPs[@"canEditRowAtIndexPath:"] = [NSValue valueWithPointer:origIMP];
        method_setImplementation(canEditMethod, (IMP)replaced_canEditRow);
        sbHookLog(@"[setDataSource] HOOKED canEditRowAtIndexPath: on %@", className);
    } else {
        class_addMethod(dsClass, canEditSel, (IMP)replaced_canEditRow, "B32@0:8@16@24");
        sbHookLog(@"[setDataSource] ADDED canEditRowAtIndexPath: to %@", className);
    }

    // Hook editingStyleForRowAtIndexPath:
    SEL editingStyleSel = NSSelectorFromString(@"tableView:editingStyleForRowAtIndexPath:");
    Method editingStyleMethod = class_getInstanceMethod(dsClass, editingStyleSel);
    if (editingStyleMethod) {
        IMP origIMP = method_getImplementation(editingStyleMethod);
        g_origIMPs[@"editingStyleForRowAtIndexPath:"] = [NSValue valueWithPointer:origIMP];
        method_setImplementation(editingStyleMethod, (IMP)replaced_editingStyleForRow);
        sbHookLog(@"[setDataSource] HOOKED editingStyleForRowAtIndexPath: on %@", className);
    } else {
        class_addMethod(dsClass, editingStyleSel, (IMP)replaced_editingStyleForRow, "q32@0:8@16@24");
        sbHookLog(@"[setDataSource] ADDED editingStyleForRowAtIndexPath: to %@", className);
    }

    // Hook editActionsForRowAtIndexPath:
    SEL editActionsSel = NSSelectorFromString(@"tableView:editActionsForRowAtIndexPath:");
    Method editActionsMethod = class_getInstanceMethod(dsClass, editActionsSel);
    if (editActionsMethod) {
        IMP origIMP = method_getImplementation(editActionsMethod);
        g_origIMPs[@"editActionsForRowAtIndexPath:"] = [NSValue valueWithPointer:origIMP];
        method_setImplementation(editActionsMethod, (IMP)replaced_editActionsForRow);
        sbHookLog(@"[setDataSource] HOOKED editActionsForRowAtIndexPath: on %@", className);
    } else {
        class_addMethod(dsClass, editActionsSel, (IMP)replaced_editActionsForRow, "@32@0:8@16@24");
        sbHookLog(@"[setDataSource] ADDED editActionsForRowAtIndexPath: to %@", className);
    }

    // Hook commitEditingStyle:forRowAtIndexPath:
    SEL commitSel = NSSelectorFromString(@"tableView:commitEditingStyle:forRowAtIndexPath:");
    Method commitMethod = class_getInstanceMethod(dsClass, commitSel);
    if (commitMethod) {
        IMP origIMP = method_getImplementation(commitMethod);
        g_origIMPs[@"commitEditingStyle:forRowAtIndexPath:"] = [NSValue valueWithPointer:origIMP];
        method_setImplementation(commitMethod, (IMP)replaced_commitEditingStyle);
        sbHookLog(@"[setDataSource] HOOKED commitEditingStyle:forRowAtIndexPath: on %@", className);
    } else {
        class_addMethod(dsClass, commitSel, (IMP)replaced_commitEditingStyle, "v40@0:8q16@24@32");
        sbHookLog(@"[setDataSource] ADDED commitEditingStyle:forRowAtIndexPath: to %@", className);
    }

    [g_hookedTableViewClasses addObject:className];
}

#pragma mark - Install

@implementation WPSessionBoxHook

+ (void)install {
    sbHookLog(@"[install] === START (Enable Swipe + Add Menu) ===");

    g_origIMPs = [NSMutableDictionary dictionary];
    g_hookedTableViewClasses = [NSMutableSet set];

    Class tableViewClass = [UITableView class];
    SEL setDataSourceSel = NSSelectorFromString(@"setDataSource:");
    Method setDataSourceMethod = class_getInstanceMethod(tableViewClass, setDataSourceSel);

    if (setDataSourceMethod) {
        g_origSetDataSource = method_getImplementation(setDataSourceMethod);
        method_setImplementation(setDataSourceMethod, (IMP)replaced_setDataSource);
        sbHookLog(@"[install] hooked setDataSource: on UITableView");
    }

    Class mainFrameTVClass = objc_getClass("MainFrameTableView");
    if (mainFrameTVClass) {
        SEL moveSel = NSSelectorFromString(@"didMoveToWindow");
        Method moveMethod = class_getInstanceMethod(mainFrameTVClass, moveSel);
        if (moveMethod) {
            g_origDidMoveToWindow = method_getImplementation(moveMethod);
            method_setImplementation(moveMethod, (IMP)replaced_didMoveToWindow);
            sbHookLog(@"[install] hooked didMoveToWindow on MainFrameTableView");
        }
    } else {
        sbHookLog(@"[install] MainFrameTableView not found");
    }

    sbHookLog(@"[install] === COMPLETE ===");
}

@end
