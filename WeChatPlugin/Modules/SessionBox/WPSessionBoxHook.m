#import "WPSessionBoxHook.h"
#import "../../Config/PluginConfig.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>

static NSMutableDictionary *g_origIMPs = nil;

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

static NSString *sb_userNameFromCellData(id cellData) {
    if (!cellData) return nil;

    SEL userNameSel = NSSelectorFromString(@"m_nsUserName");
    if ([cellData respondsToSelector:userNameSel]) {
        id name = ((id (*)(id, SEL))objc_msgSend)(cellData, userNameSel);
        if ([name isKindOfClass:[NSString class]]) return name;
    }

    SEL sessionInfoSel = NSSelectorFromString(@"m_sessionInfo");
    if ([cellData respondsToSelector:sessionInfoSel]) {
        id sessionInfo = ((id (*)(id, SEL))objc_msgSend)(cellData, sessionInfoSel);
        if (sessionInfo && [sessionInfo respondsToSelector:userNameSel]) {
            id name = ((id (*)(id, SEL))objc_msgSend)(sessionInfo, userNameSel);
            if ([name isKindOfClass:[NSString class]]) return name;
        }
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

#pragma mark - Create Menu Item

static id sb_createMenuItem(NSString *title, NSUInteger actionType) {
    sbHookLog(@"[createMenuItem] title=%@ actionType=%lu", title, (unsigned long)actionType);

    Class itemClass = objc_getClass("SwipeCellActionItem");
    if (!itemClass) {
        itemClass = NSClassFromString(@"MMTableViewCellMenuItem");
    }

    if (itemClass) {
        sbHookLog(@"[createMenuItem] using class: %@", NSStringFromClass(itemClass));

        SEL initSel = NSSelectorFromString(@"initWithTitle:action:target:");
        if ([itemClass instancesRespondToSelector:initSel]) {
            id item = ((id (*)(id, SEL, id, NSUInteger, id))objc_msgSend)(
                [[itemClass alloc] init], initSel, title, actionType, nil);
            if (item) {
                sbHookLog(@"[createMenuItem] created via initWithTitle:action:target:");
                return item;
            }
        }

        initSel = NSSelectorFromString(@"initWithTitle:action:");
        if ([itemClass instancesRespondToSelector:initSel]) {
            id item = ((id (*)(id, SEL, id, NSUInteger))objc_msgSend)(
                [[itemClass alloc] init], initSel, title, actionType);
            if (item) {
                sbHookLog(@"[createMenuItem] created via initWithTitle:action:");
                return item;
            }
        }

        id item = [[itemClass alloc] init];
        if (item) {
            SEL titleSel = NSSelectorFromString(@"setTitle:");
            if ([item respondsToSelector:titleSel]) {
                ((void (*)(id, SEL, id))objc_msgSend)(item, titleSel, title);
            }
            SEL textSel = NSSelectorFromString(@"setText:");
            if ([item respondsToSelector:textSel]) {
                ((void (*)(id, SEL, id))objc_msgSend)(item, textSel, title);
            }
            SEL actionSel = NSSelectorFromString(@"setAction:");
            if ([item respondsToSelector:actionSel]) {
                ((void (*)(id, SEL, NSUInteger))objc_msgSend)(item, actionSel, actionType);
            }
            sbHookLog(@"[createMenuItem] created via init+setters");
            return item;
        }
    }

    sbHookLog(@"[createMenuItem] no suitable class found, trying UITableViewRowAction");
    return nil;
}

#pragma mark - Hook setArrMenuItems:

static void replaced_setArrMenuItems(id self, SEL _cmd, NSArray *items) {
    sbHookLog(@"[setArrMenuItems] === CALLED === on %@ with %lu items",
              NSStringFromClass([self class]), (unsigned long)items.count);

    for (id item in items) {
        sbHookLog(@"[setArrMenuItems]   orig item class=%@",
                  NSStringFromClass([item class]));
    }

    NSMutableArray *newItems = [NSMutableArray arrayWithArray:items];

    id cellData = nil;
    if ([self respondsToSelector:NSSelectorFromString(@"m_cellData")]) {
        cellData = ((id (*)(id, SEL))objc_msgSend)(self, NSSelectorFromString(@"m_cellData"));
    }

    NSString *userName = sb_userNameFromCellData(cellData);
    sbHookLog(@"[setArrMenuItems] userName=%@", userName ?: @"nil");

    if (userName.length > 0) {
        PluginConfig *config = [PluginConfig shared];

        if (config.quickPinEnabled) {
            BOOL isTop = sb_isSessionTop(userName);
            id pinItem = sb_createMenuItem(isTop ? @"取消置顶" : @"置顶", 100);
            if (pinItem) {
                [newItems addObject:pinItem];
                sbHookLog(@"[setArrMenuItems] added pin item");
            }
        }

        if (config.quickRemarkEnabled) {
            id remarkItem = sb_createMenuItem(@"备注", 101);
            if (remarkItem) {
                [newItems addObject:remarkItem];
                sbHookLog(@"[setArrMenuItems] added remark item");
            }
        }

        if (config.quickMuteEnabled) {
            BOOL isMuted = sb_isSessionMuted(userName);
            id muteItem = sb_createMenuItem(isMuted ? @"取消免打扰" : @"免打扰", 102);
            if (muteItem) {
                [newItems addObject:muteItem];
                sbHookLog(@"[setArrMenuItems] added mute item");
            }
        }
    }

    sbHookLog(@"[setArrMenuItems] calling original with %lu items", (unsigned long)newItems.count);

    NSValue *impValue = g_origIMPs[@"setArrMenuItems:"];
    if (impValue) {
        IMP origIMP = [impValue pointerValue];
        if (origIMP) {
            ((void (*)(id, SEL, NSArray *))origIMP)(self, _cmd, newItems);
        }
    }
}

#pragma mark - Hook onMenuTransitionToConfirmState: (for action handling)

static void replaced_onMenuTransitionToConfirmState(id self, SEL _cmd, NSUInteger style) {
    sbHookLog(@"[onMenuTransition] === CALLED === on %@ style=%lu",
              NSStringFromClass([self class]), (unsigned long)style);

    NSValue *impValue = g_origIMPs[@"onMenuTransitionToConfirmState:"];
    if (impValue) {
        IMP origIMP = [impValue pointerValue];
        if (origIMP) {
            ((void (*)(id, SEL, NSUInteger))origIMP)(self, _cmd, style);
        }
    }
}

#pragma mark - Hook onCommitEditingWithStyle:tableView: (for action handling)

static void replaced_onCommitEditingWithStyle(id self, SEL _cmd, NSUInteger style, id tableView) {
    sbHookLog(@"[onCommitEditing] === CALLED === on %@ style=%lu",
              NSStringFromClass([self class]), (unsigned long)style);

    id cellData = nil;
    if ([self respondsToSelector:NSSelectorFromString(@"m_cellData")]) {
        cellData = ((id (*)(id, SEL))objc_msgSend)(self, NSSelectorFromString(@"m_cellData"));
    }
    NSString *userName = sb_userNameFromCellData(cellData);
    sbHookLog(@"[onCommitEditing] userName=%@ style=%lu", userName, (unsigned long)style);

    if (style == 100 && userName) {
        BOOL isTop = sb_isSessionTop(userName);
        sb_togglePin(userName, isTop);
        sbHookLog(@"[onCommitEditing] executed togglePin");
        return;
    } else if (style == 101 && userName) {
        sb_showEditRemark(userName);
        sbHookLog(@"[onCommitEditing] executed showEditRemark");
        return;
    } else if (style == 102 && userName) {
        BOOL isMuted = sb_isSessionMuted(userName);
        sb_toggleMute(userName, isMuted);
        sbHookLog(@"[onCommitEditing] executed toggleMute");
        return;
    }

    NSValue *impValue = g_origIMPs[@"onCommitEditingWithStyle:tableView:"];
    if (impValue) {
        IMP origIMP = [impValue pointerValue];
        if (origIMP) {
            ((void (*)(id, SEL, NSUInteger, id))origIMP)(self, _cmd, style, tableView);
        }
    }
}

static IMP g_origViewDidLoad = NULL;

static void replaced_viewDidLoad(id self, SEL _cmd) {
    if (g_origViewDidLoad) {
        ((void (*)(id, SEL))g_origViewDidLoad)(self, _cmd);
    }
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.0 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [WPSessionBoxHook install];
    });
}

#pragma mark - Install

@implementation WPSessionBoxHook

+ (void)install {
    sbHookLog(@"[install] === START (NewMainFrameCell Hook) ===");

    g_origIMPs = [NSMutableDictionary dictionary];

    Class cellClass = objc_getClass("NewMainFrameCell");
    if (!cellClass) {
        sbHookLog(@"[install] ✗ NewMainFrameCell not found, trying delayed hook");

        Class vcClass = objc_getClass("NewMainFrameViewController");
        if (vcClass) {
            SEL viewDidLoadSel = NSSelectorFromString(@"viewDidLoad");
            Method viewDidLoadMethod = class_getInstanceMethod(vcClass, viewDidLoadSel);
            if (viewDidLoadMethod) {
                g_origViewDidLoad = method_getImplementation(viewDidLoadMethod);
                method_setImplementation(viewDidLoadMethod, (IMP)replaced_viewDidLoad);
                sbHookLog(@"[install] ✓ Hooked viewDidLoad for delayed retry");
            }
        }
        return;
    }

    sbHookLog(@"[install] Found NewMainFrameCell");

    SEL setArrMenuSel = NSSelectorFromString(@"setArrMenuItems:");
    Method setArrMenuMethod = class_getInstanceMethod(cellClass, setArrMenuSel);
    if (setArrMenuMethod) {
        IMP origIMP = method_getImplementation(setArrMenuMethod);
        g_origIMPs[@"setArrMenuItems:"] = [NSValue valueWithPointer:origIMP];
        method_setImplementation(setArrMenuMethod, (IMP)replaced_setArrMenuItems);
        sbHookLog(@"[install] ✓ Hooked setArrMenuItems:");
    } else {
        sbHookLog(@"[install] ✗ setArrMenuItems: not found");
    }

    SEL commitSel = NSSelectorFromString(@"onCommitEditingWithStyle:tableView:");
    Method commitMethod = class_getInstanceMethod(cellClass, commitSel);
    if (commitMethod) {
        IMP origIMP = method_getImplementation(commitMethod);
        g_origIMPs[@"onCommitEditingWithStyle:tableView:"] = [NSValue valueWithPointer:origIMP];
        method_setImplementation(commitMethod, (IMP)replaced_onCommitEditingWithStyle);
        sbHookLog(@"[install] ✓ Hooked onCommitEditingWithStyle:tableView:");
    } else {
        sbHookLog(@"[install] ✗ onCommitEditingWithStyle:tableView: not found");
    }

    SEL transitionSel = NSSelectorFromString(@"onMenuTransitionToConfirmState:");
    Method transitionMethod = class_getInstanceMethod(cellClass, transitionSel);
    if (transitionMethod) {
        IMP origIMP = method_getImplementation(transitionMethod);
        g_origIMPs[@"onMenuTransitionToConfirmState:"] = [NSValue valueWithPointer:origIMP];
        method_setImplementation(transitionMethod, (IMP)replaced_onMenuTransitionToConfirmState);
        sbHookLog(@"[install] ✓ Hooked onMenuTransitionToConfirmState:");
    } else {
        sbHookLog(@"[install] ✗ onMenuTransitionToConfirmState: not found");
    }

    unsigned int methodCount = 0;
    Method *methods = class_copyMethodList(cellClass, &methodCount);
    sbHookLog(@"[install] NewMainFrameCell total methods: %u", methodCount);
    for (unsigned int i = 0; i < methodCount; i++) {
        SEL sel = method_getName(methods[i]);
        const char *name = sel_getName(sel);
        NSString *nameStr = [NSString stringWithUTF8String:name];
        if ([nameStr containsString:@"menu"] || [nameStr containsString:@"Menu"] ||
            [nameStr containsString:@"action"] || [nameStr containsString:@"Action"] ||
            [nameStr containsString:@"edit"] || [nameStr containsString:@"Edit"] ||
            [nameStr containsString:@"swipe"] || [nameStr containsString:@"Swipe"] ||
            [nameStr containsString:@"commit"] || [nameStr containsString:@"Commit"] ||
            [nameStr containsString:@"delete"] || [nameStr containsString:@"Delete"]) {
            sbHookLog(@"[install]   method: %s", name);
        }
    }
    free(methods);

    sbHookLog(@"[install] === COMPLETE ===");
}

@end
