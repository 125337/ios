#import "WPSessionBoxHook.h"
#import "../../Config/PluginConfig.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>

static NSMutableDictionary *g_origIMPs = nil;
static BOOL g_swipeCellHooked = NO;
static BOOL g_probeDone = NO;

static void tryHookSwipeCellClasses(void);
static void hookSwipeCellClass(Class cellClass);

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

static NSString *sb_userNameFromCell(id cell) {
    if (!cell) return nil;

    @try {
        SEL dataSel = NSSelectorFromString(@"sessionCellData");
        if (![cell respondsToSelector:dataSel])
            dataSel = NSSelectorFromString(@"cellData");
        if (![cell respondsToSelector:dataSel])
            dataSel = NSSelectorFromString(@"m_data");
        if (![cell respondsToSelector:dataSel])
            dataSel = NSSelectorFromString(@"data");

        if ([cell respondsToSelector:dataSel]) {
            id cellData = ((id (*)(id, SEL))objc_msgSend)(cell, dataSel);
            if (cellData) {
                SEL userNameSel = NSSelectorFromString(@"m_nsUserName");
                if ([cellData respondsToSelector:userNameSel]) {
                    id name = ((id (*)(id, SEL))objc_msgSend)(cellData, userNameSel);
                    if ([name isKindOfClass:[NSString class]]) return name;
                }
            }
        }

        if ([cell respondsToSelector:NSSelectorFromString(@"userName")]) {
            id name = ((id (*)(id, SEL))objc_msgSend)(cell, NSSelectorFromString(@"userName"));
            if ([name isKindOfClass:[NSString class]]) return name;
        }

        if ([cell respondsToSelector:NSSelectorFromString(@"m_nsUserName")]) {
            id name = ((id (*)(id, SEL))objc_msgSend)(cell, NSSelectorFromString(@"m_nsUserName"));
            if ([name isKindOfClass:[NSString class]]) return name;
        }
    } @catch (NSException *e) {
        sbHookLog(@"[userNameFromCell] exception: %@", e.reason);
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

#pragma mark - Class Probe

static void dumpClassInfo(Class cls, NSString *label) {
    if (!cls) return;
    sbHookLog(@"[probe] === %@ : %@ ===", label, NSStringFromClass(cls));

    unsigned int propCount = 0;
    objc_property_t *props = class_copyPropertyList(cls, &propCount);
    for (unsigned int i = 0; i < propCount; i++) {
        const char *name = property_getName(props[i]);
        sbHookLog(@"[probe]   prop: %s", name);
    }
    free(props);

    unsigned int methodCount = 0;
    Method *methods = class_copyMethodList(cls, &methodCount);
    for (unsigned int i = 0; i < methodCount; i++) {
        SEL sel = method_getName(methods[i]);
        const char *name = sel_getName(sel);
        NSString *nameStr = [NSString stringWithUTF8String:name];
        if ([nameStr containsString:@"menu"] || [nameStr containsString:@"Menu"] ||
            [nameStr containsString:@"action"] || [nameStr containsString:@"Action"] ||
            [nameStr containsString:@"swipe"] || [nameStr containsString:@"Swipe"] ||
            [nameStr containsString:@"edit"] || [nameStr containsString:@"Edit"] ||
            [nameStr containsString:@"delete"] || [nameStr containsString:@"Delete"] ||
            [nameStr containsString:@"pin"] || [nameStr containsString:@"Pin"] ||
            [nameStr containsString:@"top"] || [nameStr containsString:@"Top"] ||
            [nameStr containsString:@"mute"] || [nameStr containsString:@"Mute"] ||
            [nameStr containsString:@"mark"] || [nameStr containsString:@"Mark"] ||
            [nameStr containsString:@"confirm"] || [nameStr containsString:@"Confirm"]) {
            sbHookLog(@"[probe]   method: %s", name);
        }
    }
    free(methods);
}

static void probeAllClasses() {
    if (g_probeDone) return;
    g_probeDone = YES;

    sbHookLog(@"[probe] === DUMPING ALL RELEVANT CLASSES ===");

    unsigned int classCount = 0;
    Class *classes = objc_copyClassList(&classCount);
    sbHookLog(@"[probe] total classes loaded: %u", classCount);

    for (unsigned int i = 0; i < classCount; i++) {
        const char *name = class_getName(classes[i]);
        NSString *nameStr = [NSString stringWithUTF8String:name];

        if ([nameStr containsString:@"Swipe"] || [nameStr containsString:@"swipe"] ||
            [nameStr containsString:@"SwipeCell"] || [nameStr containsString:@"SessionCell"] ||
            [nameStr containsString:@"MainFrameCell"] || [nameStr containsString:@"ConversationCell"]) {
            dumpClassInfo(classes[i], @"FOUND");
        }
    }
    free(classes);

    const char *specificClasses[] = {
        "SwipeCell", "SwipeCellActionItem", "SwipeCellActionView", "SwipeCellStore",
        "WCSwipeCell", "MMSwipeCell", "MMTableViewCell", "MainFrameTableViewCell",
        "SessionCell", "ConversationCell", "NewSessionCell",
        "MainFrameCellData", "SessionCellData", "ConversationCellData"
    };
    for (int i = 0; i < 13; i++) {
        Class cls = objc_getClass(specificClasses[i]);
        if (cls) {
            dumpClassInfo(cls, @"SPECIFIC");
        } else {
            sbHookLog(@"[probe] class NOT found: %s", specificClasses[i]);
        }
    }

    Class vcClass = objc_getClass("NewMainFrameViewController");
    if (vcClass) {
        unsigned int methodCount = 0;
        Method *methods = class_copyMethodList(vcClass, &methodCount);
        sbHookLog(@"[probe] NewMainFrameViewController methods: %u", methodCount);
        for (unsigned int i = 0; i < methodCount; i++) {
            SEL sel = method_getName(methods[i]);
            const char *name = sel_getName(sel);
            NSString *nameStr = [NSString stringWithUTF8String:name];
            if ([nameStr containsString:@"menu"] || [nameStr containsString:@"Menu"] ||
                [nameStr containsString:@"swipe"] || [nameStr containsString:@"Swipe"] ||
                [nameStr containsString:@"edit"] || [nameStr containsString:@"Edit"] ||
                [nameStr containsString:@"cell"] || [nameStr containsString:@"Cell"] ||
                [nameStr containsString:@"action"] || [nameStr containsString:@"Action"] ||
                [nameStr containsString:@"row"] || [nameStr containsString:@"Row"] ||
                [nameStr containsString:@"delete"] || [nameStr containsString:@"Delete"] ||
                [nameStr containsString:@"session"] || [nameStr containsString:@"Session"]) {
                sbHookLog(@"[probe]   VC method: %s", name);
            }
        }
        free(methods);
    }

    sbHookLog(@"[probe] === PROBE COMPLETE ===");
}

#pragma mark - Create SwipeCellActionItem

static id createActionItem(NSString *title, NSUInteger actionType) {
    Class itemClass = objc_getClass("SwipeCellActionItem");
    if (!itemClass) {
        sbHookLog(@"[createAction] SwipeCellActionItem class not found");
        return nil;
    }

    sbHookLog(@"[createAction] creating item: %@ type=%lu", title, (unsigned long)actionType);

    id item = nil;

    SEL initSel = NSSelectorFromString(@"initWithTitle:action:target:");
    if ([itemClass instancesRespondToSelector:initSel]) {
        sbHookLog(@"[createAction] using initWithTitle:action:target:");
        item = ((id (*)(id, SEL, id, NSUInteger, id))objc_msgSend)(
            [[itemClass alloc] init], initSel, title, actionType, nil);
        return item;
    }

    initSel = NSSelectorFromString(@"initWithTitle:action:");
    if ([itemClass instancesRespondToSelector:initSel]) {
        sbHookLog(@"[createAction] using initWithTitle:action:");
        item = ((id (*)(id, SEL, id, NSUInteger))objc_msgSend)(
            [[itemClass alloc] init], initSel, title, actionType);
        return item;
    }

    initSel = NSSelectorFromString(@"initWithTitle:type:");
    if ([itemClass instancesRespondToSelector:initSel]) {
        sbHookLog(@"[createAction] using initWithTitle:type:");
        item = ((id (*)(id, SEL, id, NSUInteger))objc_msgSend)(
            [[itemClass alloc] init], initSel, title, actionType);
        return item;
    }

    item = [[itemClass alloc] init];
    if (item) {
        SEL titleSel = NSSelectorFromString(@"setTitle:");
        if ([item respondsToSelector:titleSel]) {
            ((void (*)(id, SEL, id))objc_msgSend)(item, titleSel, title);
        }
        SEL actionSel = NSSelectorFromString(@"setAction:");
        if ([item respondsToSelector:actionSel]) {
            ((void (*)(id, SEL, NSUInteger))objc_msgSend)(item, actionSel, actionType);
        }
        SEL textSel = NSSelectorFromString(@"setText:");
        if ([item respondsToSelector:textSel]) {
            ((void (*)(id, SEL, id))objc_msgSend)(item, textSel, title);
        }
        sbHookLog(@"[createAction] created via init+setters");
    }

    return item;
}

#pragma mark - SwipeCell Hooks

static NSArray *replaced_arrMenuItems(id self, SEL _cmd) {
    sbHookLog(@"[arrMenuItems] === CALLED === self=%@", NSStringFromClass([self class]));

    NSMutableArray *items = [NSMutableArray array];

    NSValue *impValue = g_origIMPs[@"arrMenuItems"];
    if (impValue) {
        IMP origIMP = [impValue pointerValue];
        if (origIMP) {
            NSArray *origItems = ((NSArray *(*)(id, SEL))origIMP)(self, _cmd);
            if (origItems) {
                [items addObjectsFromArray:origItems];
                sbHookLog(@"[arrMenuItems] original items: %lu", (unsigned long)origItems.count);
                for (id item in origItems) {
                    sbHookLog(@"[arrMenuItems]   orig item class=%@ description=%@",
                              NSStringFromClass([item class]),
                              [item respondsToSelector:NSSelectorFromString(@"description")] ?
                              [item performSelector:NSSelectorFromString(@"description")] : @"?");
                }
            }
        }
    }

    PluginConfig *config = [PluginConfig shared];
    if (!config.quickPinEnabled && !config.quickRemarkEnabled && !config.quickMuteEnabled) {
        sbHookLog(@"[arrMenuItems] all features disabled, returning original");
        return items;
    }

    NSString *userName = sb_userNameFromCell(self);
    sbHookLog(@"[arrMenuItems] userName=%@", userName ?: @"nil");

    if (userName) {
        if (config.quickPinEnabled) {
            BOOL isTop = sb_isSessionTop(userName);
            id pinItem = createActionItem(isTop ? @"取消置顶" : @"置顶", 100);
            if (pinItem) {
                [items addObject:pinItem];
                sbHookLog(@"[arrMenuItems] added pin item");
            }
        }

        if (config.quickRemarkEnabled) {
            id remarkItem = createActionItem(@"备注", 101);
            if (remarkItem) {
                [items addObject:remarkItem];
                sbHookLog(@"[arrMenuItems] added remark item");
            }
        }

        if (config.quickMuteEnabled) {
            BOOL isMuted = sb_isSessionMuted(userName);
            id muteItem = createActionItem(isMuted ? @"取消免打扰" : @"免打扰", 102);
            if (muteItem) {
                [items addObject:muteItem];
                sbHookLog(@"[arrMenuItems] added mute item");
            }
        }
    }

    sbHookLog(@"[arrMenuItems] returning %lu items", (unsigned long)items.count);
    return items;
}

static NSArray *replaced_filteredMenuItems(id self, SEL _cmd, NSArray *items) {
    sbHookLog(@"[filteredMenuItems] === CALLED === self=%@ items=%lu",
              NSStringFromClass([self class]), (unsigned long)items.count);

    NSMutableArray *result = [NSMutableArray array];

    NSValue *impValue = g_origIMPs[@"filteredMenuItems:"];
    if (impValue) {
        IMP origIMP = [impValue pointerValue];
        if (origIMP) {
            NSArray *filtered = ((NSArray *(*)(id, SEL, NSArray *))origIMP)(self, _cmd, items);
            if (filtered) {
                [result addObjectsFromArray:filtered];
            }
        }
    } else {
        [result addObjectsFromArray:items];
    }

    PluginConfig *config = [PluginConfig shared];
    if (config.quickPinEnabled || config.quickRemarkEnabled || config.quickMuteEnabled) {
        NSString *userName = sb_userNameFromCell(self);
        if (userName) {
            if (config.quickPinEnabled) {
                BOOL isTop = sb_isSessionTop(userName);
                id pinItem = createActionItem(isTop ? @"取消置顶" : @"置顶", 100);
                if (pinItem) [result addObject:pinItem];
            }
            if (config.quickRemarkEnabled) {
                id remarkItem = createActionItem(@"备注", 101);
                if (remarkItem) [result addObject:remarkItem];
            }
            if (config.quickMuteEnabled) {
                BOOL isMuted = sb_isSessionMuted(userName);
                id muteItem = createActionItem(isMuted ? @"取消免打扰" : @"免打扰", 102);
                if (muteItem) [result addObject:muteItem];
            }
        }
    }

    sbHookLog(@"[filteredMenuItems] returning %lu items", (unsigned long)result.count);
    return result;
}

#pragma mark - Menu Action Handler

static void replaced_onMenuTransitionToConfirmState(id self, SEL _cmd, id sessionCellData) {
    sbHookLog(@"[onMenuTransition] === CALLED === self=%@ data=%@",
              NSStringFromClass([self class]), sessionCellData);

    NSValue *impValue = g_origIMPs[@"onMenuTransitionToConfirmState:sessionCellData:"];
    if (impValue) {
        IMP origIMP = [impValue pointerValue];
        if (origIMP) {
            ((void (*)(id, SEL, id))origIMP)(self, _cmd, sessionCellData);
        }
    }
}

static void replaced_onMenuItemsAppear(id self, SEL _cmd, id sessionCellData) {
    sbHookLog(@"[onMenuItemsAppear] === CALLED === self=%@ data=%@",
              NSStringFromClass([self class]), sessionCellData);

    tryHookSwipeCellClasses();

    NSValue *impValue = g_origIMPs[@"onMenuItemsAppearInSessionCellData:"];
    if (impValue) {
        IMP origIMP = [impValue pointerValue];
        if (origIMP) {
            ((void (*)(id, SEL, id))origIMP)(self, _cmd, sessionCellData);
        }
    }
}

#pragma mark - Cell for Row Hook (to find cell class)

static id replaced_cellForRowAtIndexPath(id self, SEL _cmd, NSIndexPath *indexPath) {
    id cell = nil;
    NSValue *impValue = g_origIMPs[@"cellForRowAtIndexPath:"];
    if (impValue) {
        IMP origIMP = [impValue pointerValue];
        if (origIMP) {
            cell = ((id (*)(id, SEL, id))origIMP)(self, _cmd, indexPath);
        }
    }

    if (cell && !g_swipeCellHooked) {
        Class cellClass = [cell class];
        sbHookLog(@"[cellForRow] cell class=%@ indexPath=%@", NSStringFromClass(cellClass), indexPath);

        if ([cell respondsToSelector:NSSelectorFromString(@"arrMenuItems")] ||
            [cell respondsToSelector:NSSelectorFromString(@"filteredMenuItems:")]) {
            sbHookLog(@"[cellForRow] cell responds to menu methods! Hooking...");
            hookSwipeCellClass(cellClass);
        }

        Class superClass = cellClass;
        int depth = 0;
        while (superClass && depth < 5) {
            superClass = [superClass superclass];
            sbHookLog(@"[cellForRow] superclass(%d)=%@", depth, NSStringFromClass(superClass));
            if ([superClass respondsToSelector:NSSelectorFromString(@"arrMenuItems")] ||
                [superClass instancesRespondToSelector:NSSelectorFromString(@"arrMenuItems")]) {
                sbHookLog(@"[cellForRow] superclass responds to arrMenuItems!");
            }
            depth++;
        }
    }

    return cell;
}

#pragma mark - Hook SwipeCell Class

static void hookSwipeCellClass(Class cellClass) {
    if (g_swipeCellHooked) return;
    if (!cellClass) return;

    sbHookLog(@"[hookCell] hooking class=%@", NSStringFromClass(cellClass));

    SEL arrMenuSel = NSSelectorFromString(@"arrMenuItems");
    Method arrMenuMethod = class_getInstanceMethod(cellClass, arrMenuSel);
    if (arrMenuMethod) {
        IMP origIMP = method_getImplementation(arrMenuMethod);
        g_origIMPs[@"arrMenuItems"] = [NSValue valueWithPointer:origIMP];
        method_setImplementation(arrMenuMethod, (IMP)replaced_arrMenuItems);
        sbHookLog(@"[hookCell] ✓ Hooked arrMenuItems on %@", NSStringFromClass(cellClass));
        g_swipeCellHooked = YES;
    } else {
        sbHookLog(@"[hookCell] arrMenuItems method not found on %@", NSStringFromClass(cellClass));
    }

    SEL filteredSel = NSSelectorFromString(@"filteredMenuItems:");
    Method filteredMethod = class_getInstanceMethod(cellClass, filteredSel);
    if (filteredMethod) {
        IMP origIMP = method_getImplementation(filteredMethod);
        g_origIMPs[@"filteredMenuItems:"] = [NSValue valueWithPointer:origIMP];
        method_setImplementation(filteredMethod, (IMP)replaced_filteredMenuItems);
        sbHookLog(@"[hookCell] ✓ Hooked filteredMenuItems: on %@", NSStringFromClass(cellClass));
    }

    if (g_swipeCellHooked) {
        dumpClassInfo(cellClass, @"HOOKED_CELL");
    }
}

static void tryHookSwipeCellClasses() {
    if (g_swipeCellHooked) return;

    sbHookLog(@"[tryHook] searching for SwipeCell classes...");

    const char *cellClassNames[] = {
        "SwipeCell",
        "WCSwipeCell",
        "MMSwipeCell",
        "SwipeableCell",
        "MMTableViewCell",
        "MainFrameTableViewCell",
        "SessionTableViewCell",
        "ConversationCell",
        "NewMainFrameSessionCell",
        "MainFrameSessionCell"
    };

    for (int i = 0; i < 10; i++) {
        Class cls = objc_getClass(cellClassNames[i]);
        if (cls) {
            sbHookLog(@"[tryHook] found class: %s", cellClassNames[i]);
            if ([cls instancesRespondToSelector:NSSelectorFromString(@"arrMenuItems")] ||
                [cls instancesRespondToSelector:NSSelectorFromString(@"filteredMenuItems:")]) {
                hookSwipeCellClass(cls);
                if (g_swipeCellHooked) return;
            }
        }
    }

    unsigned int classCount = 0;
    Class *classes = objc_copyClassList(&classCount);
    for (unsigned int i = 0; i < classCount; i++) {
        const char *name = class_getName(classes[i]);
        NSString *nameStr = [NSString stringWithUTF8String:name];

        if ([nameStr containsString:@"Swipe"] || [nameStr containsString:@"swipe"]) {
            sbHookLog(@"[tryHook] found Swipe class via scan: %s", name);
            Class cls = classes[i];
            if ([cls instancesRespondToSelector:NSSelectorFromString(@"arrMenuItems")]) {
                hookSwipeCellClass(cls);
                if (g_swipeCellHooked) {
                    free(classes);
                    return;
                }
            }
        }
    }
    free(classes);

    sbHookLog(@"[tryHook] SwipeCell still not found, will retry later");
}

#pragma mark - View Lifecycle Hooks

static IMP g_origViewDidLoad = NULL;
static IMP g_origViewWillAppear = NULL;

static void replaced_viewDidLoad(id self, SEL _cmd) {
    sbHookLog(@"[viewDidLoad] === CALLED === self=%@", NSStringFromClass([self class]));

    if (g_origViewDidLoad) {
        ((void (*)(id, SEL))g_origViewDidLoad)(self, _cmd);
    }

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.0 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        probeAllClasses();
        tryHookSwipeCellClasses();
    });
}

static void replaced_viewWillAppear(id self, SEL _cmd, BOOL animated) {
    sbHookLog(@"[viewWillAppear] === CALLED === self=%@", NSStringFromClass([self class]));

    if (g_origViewWillAppear) {
        ((void (*)(id, SEL, BOOL))g_origViewWillAppear)(self, _cmd, animated);
    }

    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.3 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        if (!g_swipeCellHooked) {
            tryHookSwipeCellClasses();
        }
    });
}

#pragma mark - Install

@implementation WPSessionBoxHook

+ (void)install {
    sbHookLog(@"[install] === START (SwipeCell Hook v2) ===");

    g_origIMPs = [NSMutableDictionary dictionary];

    Class vcClass = objc_getClass("NewMainFrameViewController");
    if (vcClass) {
        sbHookLog(@"[install] Found NewMainFrameViewController");

        SEL viewDidLoadSel = NSSelectorFromString(@"viewDidLoad");
        Method viewDidLoadMethod = class_getInstanceMethod(vcClass, viewDidLoadSel);
        if (viewDidLoadMethod) {
            g_origViewDidLoad = method_getImplementation(viewDidLoadMethod);
            method_setImplementation(viewDidLoadMethod, (IMP)replaced_viewDidLoad);
            sbHookLog(@"[install] ✓ Hooked viewDidLoad");
        }

        SEL viewWillAppearSel = NSSelectorFromString(@"viewWillAppear:");
        Method viewWillAppearMethod = class_getInstanceMethod(vcClass, viewWillAppearSel);
        if (viewWillAppearMethod) {
            g_origViewWillAppear = method_getImplementation(viewWillAppearMethod);
            method_setImplementation(viewWillAppearMethod, (IMP)replaced_viewWillAppear);
            sbHookLog(@"[install] ✓ Hooked viewWillAppear:");
        }

        SEL onMenuSel = NSSelectorFromString(@"onMenuItemsAppearInSessionCellData:");
        Method onMenuMethod = class_getInstanceMethod(vcClass, onMenuSel);
        if (onMenuMethod) {
            IMP origIMP = method_getImplementation(onMenuMethod);
            g_origIMPs[@"onMenuItemsAppearInSessionCellData:"] = [NSValue valueWithPointer:origIMP];
            method_setImplementation(onMenuMethod, (IMP)replaced_onMenuItemsAppear);
            sbHookLog(@"[install] ✓ Hooked onMenuItemsAppearInSessionCellData:");
        } else {
            sbHookLog(@"[install] ✗ onMenuItemsAppearInSessionCellData: not found");
        }

        SEL confirmSel = NSSelectorFromString(@"onMenuTransitionToConfirmState:sessionCellData:");
        Method confirmMethod = class_getInstanceMethod(vcClass, confirmSel);
        if (confirmMethod) {
            IMP origIMP = method_getImplementation(confirmMethod);
            g_origIMPs[@"onMenuTransitionToConfirmState:sessionCellData:"] = [NSValue valueWithPointer:origIMP];
            method_setImplementation(confirmMethod, (IMP)replaced_onMenuTransitionToConfirmState);
            sbHookLog(@"[install] ✓ Hooked onMenuTransitionToConfirmState:sessionCellData:");
        } else {
            sbHookLog(@"[install] ✗ onMenuTransitionToConfirmState:sessionCellData: not found");
        }
    } else {
        sbHookLog(@"[install] ✗ NewMainFrameViewController not found");
    }

    tryHookSwipeCellClasses();

    sbHookLog(@"[install] === COMPLETE ===");
}

@end
