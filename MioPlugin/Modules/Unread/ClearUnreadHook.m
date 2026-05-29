#import "ClearUnreadHook.h"
#import "../../Config/PluginConfig.h"
#import "../../Config/Constants.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>
#import "../../Core/LogManager.h"
#import "../../Core/ServiceHelper.h"
#import <substrate.h>

static IMP orig_reloadMenuItems = NULL;
static IMP orig_clickMenu = NULL;

static id findSessionMgr() {
    // 运行时日志已确认 MMNewSessionMgr 命中，CConversationMgr 作为兼容保留
    const char *classNames[] = {"MMNewSessionMgr", "CConversationMgr"};
    for (int i = 0; i < 2; i++) {
        Class cls = objc_getClass(classNames[i]);
        if (!cls) continue;
        id svc = WXGetService(cls);
        if (svc) {
            WPLog(@"ClearUnread", @"[INFO] Found session mgr: %s -> %@", classNames[i], NSStringFromClass([svc class]));
            return svc;
        }
    }
    return nil;
}

static NSArray *getSessionList(id sessionMgr) {
    // 运行时日志已确认 GetSessionInfoList 命中
    SEL sel = NSSelectorFromString(@"GetSessionInfoList");
    if ([sessionMgr respondsToSelector:sel]) {
        id result = ((id (*)(id, SEL))objc_msgSend)(sessionMgr, sel);
        if ([result isKindOfClass:[NSArray class]]) {
            WPLog(@"ClearUnread", @"[INFO] Got session list via GetSessionInfoList (%lu items)", (unsigned long)[(NSArray *)result count]);
            return (NSArray *)result;
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
    WPLog(@"ClearUnread",@"[INFO] clearAllUnread start");

    id sessionMgr = findSessionMgr();
    if (!sessionMgr) {
        WPLog(@"ClearUnread",@"[ERR] No session manager found");
        return;
    }

    NSArray *sessionList = getSessionList(sessionMgr);
    if (!sessionList) {
        WPLog(@"ClearUnread",@"[ERR] Cannot get session list");
        return;
    }

    id messageMgr = WXGetService(objc_getClass("CMessageMgr"));
    if (!messageMgr) {
        WPLog(@"ClearUnread",@"[ERR] No CMessageMgr");
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

        WPLog(@"ClearUnread", @"[INFO] cleared %d sessions", cleared);
    } @catch (NSException *e) {
        WPLog(@"ClearUnread", @"[ERR] clearAllUnread exception: %@ - %@", e.name, e.reason);
    }
}

static void replaced_clickMenu(id self, SEL _cmd, id menuItem) {
    @try {
        if ([menuItem isKindOfClass:[NSString class]]) {
            NSString *menuID = (NSString *)menuItem;
            WPLog(@"ClearUnread", @"[INFO] clickMenu: id=%@", menuID);

            if ([menuID isEqualToString:@"99"]) {
                WPLog(@"ClearUnread",@"[INFO] clickMenu: clearUnread tapped!");
                clearAllUnread();
            }
        } else {
            WPLog(@"ClearUnread", @"[INFO] clickMenu: unexpected type %@", NSStringFromClass([menuItem class]));
        }
    } @catch (NSException *e) {
        WPLog(@"ClearUnread", @"[ERR] clickMenu exception: %@ - %@", e.name, e.reason);
    }

    if (orig_clickMenu) ((void (*)(id, SEL, id))orig_clickMenu)(self, _cmd, menuItem);
}

static void replaced_reloadMenuItems(id self, SEL _cmd) {
    if (orig_reloadMenuItems) ((void (*)(id, SEL))orig_reloadMenuItems)(self, _cmd);

    if (![[NSUserDefaults standardUserDefaults] boolForKey:@"Mio_ClearUnreadEnabled"]) return;

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
        WPLog(@"ClearUnread",@"[INFO] clearUnread item added to m_dicItems");

        if (menuData) {
            NSMutableArray *arrShowIDs = ((id (*)(id, SEL))objc_msgSend)(menuData, NSSelectorFromString(@"m_arrShowIDs"));
            if ([arrShowIDs isKindOfClass:[NSMutableArray class]] && ![arrShowIDs containsObject:@"99"]) {
                [arrShowIDs addObject:@"99"];
                WPLog(@"ClearUnread",@"[INFO] added 99 to m_arrShowIDs");
            }
        }
    } @catch (NSException *e) {
        WPLog(@"ClearUnread", @"[ERR] reloadMenuItems exception: %@ - %@", e.name, e.reason);
    }
}

@implementation ClearUnreadHook

+ (void)install {
    WPLog(@"ClearUnread",@"[INFO] ClearUnreadHook install start");

    Class menuBtnClass = objc_getClass("NewMainFrameRightTopMenuBtn");
    if (menuBtnClass) {
        MSHookMessageEx(menuBtnClass, @selector(reloadMenuItems), (IMP)replaced_reloadMenuItems, &orig_reloadMenuItems);
        WPLog(@"ClearUnread",@"[INFO] reloadMenuItems hooked");
    }

    Class menuDataClass = objc_getClass("RightTopMenuData");
    if (menuDataClass) {
        MSHookMessageEx(menuDataClass, @selector(clickMenu:), (IMP)replaced_clickMenu, &orig_clickMenu);
        WPLog(@"ClearUnread",@"[INFO] clickMenu: hooked on RightTopMenuData");
    } else {
        WPLog(@"ClearUnread",@"[ERR] RightTopMenuData not found");
    }

    WPLog(@"ClearUnread",@"[INFO] ClearUnreadHook install complete");
}

+ (void)clearUnreadTapped {
    clearAllUnread();
}

@end
