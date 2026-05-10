#import "ClearUnreadHook.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/HookEngine.h"
#import "../../Config/Constants.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>

static IMP orig_reloadMenuItems = NULL;
static IMP orig_clickMenu = NULL;

static void clearUnreadLog(NSString *content) {
    @try {
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folderPath = [paths.firstObject stringByAppendingPathComponent:@"WeChatPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folderPath withIntermediateDirectories:YES attributes:nil error:nil];
        NSString *filePath = [folderPath stringByAppendingPathComponent:@"clear_unread.log"];
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

static id getServiceViaCenter(id center, Class serviceClass) {
    if (!center) return nil;
    if (![center respondsToSelector:NSSelectorFromString(@"getService:")]) return nil;
    return ((id (*)(id, SEL, Class))objc_msgSend)(center, NSSelectorFromString(@"getService:"), serviceClass);
}

static id getService(Class serviceClass) {
    Class scClass = objc_getClass("MMServiceCenter");
    if (scClass) {
        if ([scClass respondsToSelector:NSSelectorFromString(@"defaultCenter")]) {
            id center = ((id (*)(id, SEL))objc_msgSend)(scClass, NSSelectorFromString(@"defaultCenter"));
            id svc = getServiceViaCenter(center, serviceClass);
            if (svc) return svc;
        }
    }

    Class ctxClass = objc_getClass("MMContext");
    if (ctxClass) {
        id activeCtx = nil;
        if ([ctxClass respondsToSelector:NSSelectorFromString(@"activeUserContext")]) {
            activeCtx = ((id (*)(id, SEL))objc_msgSend)(ctxClass, NSSelectorFromString(@"activeUserContext"));
        }
        if (!activeCtx && [ctxClass respondsToSelector:NSSelectorFromString(@"currentContext")]) {
            activeCtx = ((id (*)(id, SEL))objc_msgSend)(ctxClass, NSSelectorFromString(@"currentContext"));
        }
        if (!activeCtx && [ctxClass respondsToSelector:NSSelectorFromString(@"rootContext")]) {
            activeCtx = ((id (*)(id, SEL))objc_msgSend)(ctxClass, NSSelectorFromString(@"rootContext"));
        }
        if (activeCtx) {
            if ([activeCtx respondsToSelector:NSSelectorFromString(@"serviceCenter")]) {
                id center = ((id (*)(id, SEL))objc_msgSend)(activeCtx, NSSelectorFromString(@"serviceCenter"));
                id svc = getServiceViaCenter(center, serviceClass);
                if (svc) return svc;
            }
            if ([activeCtx respondsToSelector:NSSelectorFromString(@"getService:")]) {
                id svc = getServiceViaCenter(activeCtx, serviceClass);
                if (svc) return svc;
            }
        }
    }

    return nil;
}

static id findSessionMgr() {
    const char *classNames[] = {
        "MMNewSessionMgr",
        "CConversationMgr",
        "CSessionMgr",
        "MMSessionMgr",
        "MainSessionMgr",
        "SessionMgr",
        "ConversationMgr",
    };
    int count = sizeof(classNames) / sizeof(classNames[0]);

    for (int i = 0; i < count; i++) {
        Class cls = objc_getClass(classNames[i]);
        if (!cls) continue;
        id svc = getService(cls);
        if (svc) {
            clearUnreadLog([NSString stringWithFormat:@"[INFO] Found session mgr: %s -> %@", classNames[i], NSStringFromClass([svc class])]);
            return svc;
        }
    }

    Class ctxClass = objc_getClass("MMContext");
    if (ctxClass) {
        id activeCtx = nil;
        if ([ctxClass respondsToSelector:NSSelectorFromString(@"activeUserContext")]) {
            activeCtx = ((id (*)(id, SEL))objc_msgSend)(ctxClass, NSSelectorFromString(@"activeUserContext"));
        }
        if (activeCtx) {
            const char *propNames[] = {
                "newSessionMgr",
                "sessionManager",
                "m_newSessionMgr",
                "_newSessionMgr",
                "mainSessionMgr",
            };
            int propCount = sizeof(propNames) / sizeof(propNames[0]);
            for (int i = 0; i < propCount; i++) {
                SEL sel = NSSelectorFromString([NSString stringWithUTF8String:propNames[i]]);
                if ([activeCtx respondsToSelector:sel]) {
                    id mgr = ((id (*)(id, SEL))objc_msgSend)(activeCtx, sel);
                    if (mgr) {
                        clearUnreadLog([NSString stringWithFormat:@"[INFO] Found session mgr via MMContext.%s: %@", propNames[i], NSStringFromClass([mgr class])]);
                        return mgr;
                    }
                }
            }

            Ivar ivars[] = {
                class_getInstanceVariable([activeCtx class], "m_newSessionMgr"),
                class_getInstanceVariable([activeCtx class], "_newSessionMgr"),
                class_getInstanceVariable([activeCtx class], "newSessionMgr"),
                class_getInstanceVariable([activeCtx class], "sessionManager"),
            };
            int ivarCount = sizeof(ivars) / sizeof(ivars[0]);
            for (int i = 0; i < ivarCount; i++) {
                if (ivars[i]) {
                    id mgr = object_getIvar(activeCtx, ivars[i]);
                    if (mgr) {
                        clearUnreadLog([NSString stringWithFormat:@"[INFO] Found session mgr via MMContext ivar: %@", NSStringFromClass([mgr class])]);
                        return mgr;
                    }
                }
            }
        }
    }

    return nil;
}

static NSArray *getSessionList(id sessionMgr) {
    SEL selectors[] = {
        NSSelectorFromString(@"GetSessionInfoList"),
        NSSelectorFromString(@"m_arrConvList"),
        NSSelectorFromString(@"sessionList"),
        NSSelectorFromString(@"m_arrSession"),
        NSSelectorFromString(@"m_arrSessionInfo"),
        NSSelectorFromString(@"m_arrSessions"),
        NSSelectorFromString(@"m_normalSessions"),
        NSSelectorFromString(@"sessionDataList"),
    };
    int count = sizeof(selectors) / sizeof(selectors[0]);

    for (int i = 0; i < count; i++) {
        if ([sessionMgr respondsToSelector:selectors[i]]) {
            id result = ((id (*)(id, SEL))objc_msgSend)(sessionMgr, selectors[i]);
            if ([result isKindOfClass:[NSArray class]] && [(NSArray *)result count] > 0) {
                clearUnreadLog([NSString stringWithFormat:@"[INFO] Got session list via %@ (%lu items)", NSStringFromSelector(selectors[i]), (unsigned long)[(NSArray *)result count]]);
                return (NSArray *)result;
            } else if (result) {
                clearUnreadLog([NSString stringWithFormat:@"[INFO] %@ returned non-array or empty: %@", NSStringFromSelector(selectors[i]), NSStringFromClass([result class])]);
            }
        }
    }

    const char *ivarNames[] = {
        "m_arrConvList",
        "sessionList",
        "m_arrSession",
        "m_arrSessionInfo",
        "m_arrSessions",
        "m_normalSessions",
    };
    int ivarCount = sizeof(ivarNames) / sizeof(ivarNames[0]);
    for (int i = 0; i < ivarCount; i++) {
        Ivar listIvar = class_getInstanceVariable([sessionMgr class], ivarNames[i]);
        if (listIvar) {
            id result = object_getIvar(sessionMgr, listIvar);
            if ([result isKindOfClass:[NSArray class]] && [(NSArray *)result count] > 0) {
                clearUnreadLog([NSString stringWithFormat:@"[INFO] Got session list via Ivar %s (%lu items)", ivarNames[i], (unsigned long)[(NSArray *)result count]]);
                return (NSArray *)result;
            }
        }
    }

    unsigned int sessionCount = 0;
    if ([sessionMgr respondsToSelector:NSSelectorFromString(@"GetSessionCount")]) {
        sessionCount = ((unsigned int (*)(id, SEL))objc_msgSend)(sessionMgr, NSSelectorFromString(@"GetSessionCount"));
    } else if ([sessionMgr respondsToSelector:NSSelectorFromString(@"getSessionCount")]) {
        sessionCount = ((unsigned int (*)(id, SEL))objc_msgSend)(sessionMgr, NSSelectorFromString(@"getSessionCount"));
    }
    clearUnreadLog([NSString stringWithFormat:@"[INFO] Session count: %u", sessionCount]);

    if (sessionCount > 0 && [sessionMgr respondsToSelector:NSSelectorFromString(@"GetSessionAtIndex:")]) {
        NSMutableArray *sessions = [NSMutableArray array];
        for (unsigned int i = 0; i < sessionCount; i++) {
            id session = ((id (*)(id, SEL, unsigned int))objc_msgSend)(sessionMgr, NSSelectorFromString(@"GetSessionAtIndex:"), i);
            if (session) [sessions addObject:session];
        }
        if (sessions.count > 0) {
            clearUnreadLog([NSString stringWithFormat:@"[INFO] Got %lu sessions via GetSessionAtIndex:", (unsigned long)sessions.count]);
            return sessions;
        }
    }

    return nil;
}

static NSString *getSessionUserName(id session) {
    if ([session respondsToSelector:NSSelectorFromString(@"m_nsUserName")]) {
        return ((id (*)(id, SEL))objc_msgSend)(session, NSSelectorFromString(@"m_nsUserName"));
    }
    id contact = nil;
    if ([session respondsToSelector:NSSelectorFromString(@"m_contact")]) {
        contact = ((id (*)(id, SEL))objc_msgSend)(session, NSSelectorFromString(@"m_contact"));
    }
    if (contact && [contact respondsToSelector:NSSelectorFromString(@"m_nsUsrName")]) {
        return ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsUsrName"));
    }
    return nil;
}

static unsigned int getSessionUnreadCount(id session) {
    if ([session respondsToSelector:NSSelectorFromString(@"m_uUnReadCount")]) {
        return ((unsigned int (*)(id, SEL))objc_msgSend)(session, NSSelectorFromString(@"m_uUnReadCount"));
    }
    if ([session respondsToSelector:NSSelectorFromString(@"m_uiUnReadCount")]) {
        return ((unsigned int (*)(id, SEL))objc_msgSend)(session, NSSelectorFromString(@"m_uiUnReadCount"));
    }
    id contact = nil;
    if ([session respondsToSelector:NSSelectorFromString(@"m_contact")]) {
        contact = ((id (*)(id, SEL))objc_msgSend)(session, NSSelectorFromString(@"m_contact"));
    }
    if (contact) {
        if ([contact respondsToSelector:NSSelectorFromString(@"m_uUnReadCount")]) {
            return ((unsigned int (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_uUnReadCount"));
        }
        if ([contact respondsToSelector:NSSelectorFromString(@"m_uiUnReadCount")]) {
            return ((unsigned int (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_uiUnReadCount"));
        }
    }
    return 0;
}

static BOOL isSessionUnread(id session) {
    unsigned int unread = getSessionUnreadCount(session);
    if (unread > 0) return YES;
    if ([session respondsToSelector:NSSelectorFromString(@"m_bShowUnReadAsRedDot")]) {
        BOOL showRedDot = ((BOOL (*)(id, SEL))objc_msgSend)(session, NSSelectorFromString(@"m_bShowUnReadAsRedDot"));
        if (showRedDot) return YES;
    }
    return NO;
}

static void clearAllUnread() {
    clearUnreadLog(@"[INFO] clearAllUnread start");

    id sessionMgr = findSessionMgr();
    if (!sessionMgr) {
        clearUnreadLog(@"[ERR] No session manager found");
        return;
    }

    NSArray *sessionList = getSessionList(sessionMgr);
    if (!sessionList) {
        clearUnreadLog(@"[ERR] Cannot get session list");
        return;
    }

    id messageMgr = getService(objc_getClass("CMessageMgr"));
    if (!messageMgr) {
        clearUnreadLog(@"[ERR] No CMessageMgr");
        return;
    }

    @try {
        int cleared = 0;

        for (id session in sessionList) {
            if (!isSessionUnread(session)) continue;

            NSString *userName = getSessionUserName(session);
            if (!userName || userName.length == 0) continue;

            ((void (*)(id, SEL, id, id, id))objc_msgSend)(messageMgr, NSSelectorFromString(@"ClearUnRead:FromID:ToID:"), userName, nil, nil);
            cleared++;
        }

        if ([sessionMgr respondsToSelector:NSSelectorFromString(@"recountUnReadCount")]) {
            ((void (*)(id, SEL))objc_msgSend)(sessionMgr, NSSelectorFromString(@"recountUnReadCount"));
        }

        clearUnreadLog([NSString stringWithFormat:@"[INFO] cleared %d sessions", cleared]);
    } @catch (NSException *e) {
        clearUnreadLog([NSString stringWithFormat:@"[ERR] clearAllUnread exception: %@ - %@", e.name, e.reason]);
    }
}

static void replaced_clickMenu(id self, SEL _cmd, id menuItem) {
    @try {
        if ([menuItem isKindOfClass:[NSString class]]) {
            NSString *menuID = (NSString *)menuItem;
            clearUnreadLog([NSString stringWithFormat:@"[INFO] clickMenu: id=%@", menuID]);

            if ([menuID isEqualToString:@"99"]) {
                clearUnreadLog(@"[INFO] clickMenu: clearUnread tapped!");
                clearAllUnread();
            }
        } else {
            clearUnreadLog([NSString stringWithFormat:@"[INFO] clickMenu: unexpected type %@", NSStringFromClass([menuItem class])]);
        }
    } @catch (NSException *e) {
        clearUnreadLog([NSString stringWithFormat:@"[ERR] clickMenu exception: %@ - %@", e.name, e.reason]);
    }

    if (orig_clickMenu) ((void (*)(id, SEL, id))orig_clickMenu)(self, _cmd, menuItem);
}

static void replaced_reloadMenuItems(id self, SEL _cmd) {
    if (orig_reloadMenuItems) ((void (*)(id, SEL))orig_reloadMenuItems)(self, _cmd);

    if (![PluginConfig shared].clearUnreadEnabled) return;

    @try {
        Ivar dicIvar = class_getInstanceVariable([self class], "m_dicItems");
        Ivar dataIvar = class_getInstanceVariable([self class], "m_data");
        if (!dicIvar || !dataIvar) return;

        NSMutableDictionary *dicItems = object_getIvar(self, dicIvar);
        id menuData = object_getIvar(self, dataIvar);
        if (![dicItems isKindOfClass:[NSMutableDictionary class]]) return;
        if ([dicItems objectForKey:@"99"]) return;

        Class itemBtnDataClass = objc_getClass("RightTopMenuItemBtnData");
        if (!itemBtnDataClass) return;

        id clearItem = [[itemBtnDataClass alloc] init];
        if (!clearItem) return;

        ((void (*)(id, SEL, NSString *))objc_msgSend)(clearItem, NSSelectorFromString(@"setM_nsID:"), @"99");
        ((void (*)(id, SEL, NSString *))objc_msgSend)(clearItem, NSSelectorFromString(@"setM_nsTitleID:"), @"一键已读");
        ((void (*)(id, SEL, NSString *))objc_msgSend)(clearItem, NSSelectorFromString(@"setM_nsImageName:"), @"icons_filled_eyes_on");
        ((void (*)(id, SEL, unsigned long long))objc_msgSend)(clearItem, NSSelectorFromString(@"setM_actionType:"), 1);
        ((void (*)(id, SEL, NSString *))objc_msgSend)(clearItem, NSSelectorFromString(@"setM_nsActionName:"), @"WP_clearUnread");

        [dicItems setObject:clearItem forKey:@"99"];
        clearUnreadLog(@"[INFO] clearUnread item added to m_dicItems");

        if (menuData) {
            NSMutableArray *arrShowIDs = ((id (*)(id, SEL))objc_msgSend)(menuData, NSSelectorFromString(@"m_arrShowIDs"));
            if ([arrShowIDs isKindOfClass:[NSMutableArray class]] && ![arrShowIDs containsObject:@"99"]) {
                [arrShowIDs addObject:@"99"];
                clearUnreadLog(@"[INFO] added 99 to m_arrShowIDs");
            }
        }
    } @catch (NSException *e) {
        clearUnreadLog([NSString stringWithFormat:@"[ERR] reloadMenuItems exception: %@ - %@", e.name, e.reason]);
    }
}

@implementation ClearUnreadHook

+ (void)install {
    clearUnreadLog(@"[INFO] ClearUnreadHook install start");

    Class menuBtnClass = objc_getClass("NewMainFrameRightTopMenuBtn");
    if (menuBtnClass) {
        IMP orig1 = [HookEngine swizzleMethod:NSSelectorFromString(@"reloadMenuItems")
                                       inClass:menuBtnClass
                                       withIMP:(IMP)replaced_reloadMenuItems];
        if (orig1) {
            orig_reloadMenuItems = orig1;
            clearUnreadLog(@"[INFO] reloadMenuItems swizzled");
        }
    }

    Class menuDataClass = objc_getClass("RightTopMenuData");
    if (menuDataClass) {
        IMP orig2 = [HookEngine swizzleMethod:NSSelectorFromString(@"clickMenu:")
                                       inClass:menuDataClass
                                       withIMP:(IMP)replaced_clickMenu];
        if (orig2) {
            orig_clickMenu = orig2;
            clearUnreadLog(@"[INFO] clickMenu: swizzled on RightTopMenuData");
        } else {
            clearUnreadLog(@"[ERR] clickMenu: swizzle failed on RightTopMenuData");
        }
    } else {
        clearUnreadLog(@"[ERR] RightTopMenuData not found");
    }

    clearUnreadLog(@"[INFO] ClearUnreadHook install complete");
}

+ (void)clearUnreadTapped {
    clearAllUnread();
}

@end
