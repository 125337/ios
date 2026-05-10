#import "WPSessionBoxHook.h"
#import "../../Config/PluginConfig.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>

static NSMutableSet *g_hookedClasses = nil;
static NSMutableDictionary *g_origIMPs = nil;

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

static BOOL sb_anyFeatureEnabled(void) {
    PluginConfig *cfg = [PluginConfig shared];
    return cfg.quickPinEnabled || cfg.quickRemarkEnabled || cfg.quickMuteEnabled;
}

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
    const char *names[] = {"MMNewSessionMgr", "CConversationMgr", "CSessionMgr", "MMSessionMgr", "MainSessionMgr"};
    for (int i = 0; i < 5; i++) {
        Class cls = objc_getClass(names[i]);
        if (cls) { id svc = sb_getService(cls); if (svc) return svc; }
    }
    return nil;
}

static NSString *sb_userNameFromDataSource(id dataSource, NSIndexPath *indexPath) {
    if (!dataSource || !indexPath) return nil;
    @try {
        SEL sel1 = NSSelectorFromString(@"getSessionInfoAtIndexPath:");
        if ([dataSource respondsToSelector:sel1]) {
            id info = ((id (*)(id, SEL, id))objc_msgSend)(dataSource, sel1, indexPath);
            if (info) {
                SEL s = NSSelectorFromString(@"m_nsUserName");
                if ([info respondsToSelector:s]) {
                    id n = ((id (*)(id, SEL))objc_msgSend)(info, s);
                    if ([n isKindOfClass:[NSString class]] && [n length] > 0) return n;
                }
            }
        }
        SEL cdSel = NSSelectorFromString(@"getCellData:");
        if ([dataSource respondsToSelector:cdSel]) {
            id cd = ((id (*)(id, SEL, id))objc_msgSend)(dataSource, cdSel, indexPath);
            if (cd) {
                SEL siSel = NSSelectorFromString(@"m_sessionInfo");
                if ([cd respondsToSelector:siSel]) {
                    id si = ((id (*)(id, SEL))objc_msgSend)(cd, siSel);
                    if (si) {
                        SEL s = NSSelectorFromString(@"m_nsUserName");
                        if ([si respondsToSelector:s]) {
                            id n = ((id (*)(id, SEL))objc_msgSend)(si, s);
                            if ([n isKindOfClass:[NSString class]] && [n length] > 0) return n;
                        }
                    }
                }
                SEL innerSel = NSSelectorFromString(@"m_cellData");
                if ([cd respondsToSelector:innerSel]) {
                    id inner = ((id (*)(id, SEL))objc_msgSend)(cd, innerSel);
                    if (inner) {
                        SEL s = NSSelectorFromString(@"m_nsUserName");
                        if ([inner respondsToSelector:s]) {
                            id n = ((id (*)(id, SEL))objc_msgSend)(inner, s);
                            if ([n isKindOfClass:[NSString class]] && [n length] > 0) return n;
                        }
                    }
                }
            }
        }
        SEL sel2 = NSSelectorFromString(@"logicGetSessionAtIndexPath:");
        if ([dataSource respondsToSelector:sel2]) {
            id info = ((id (*)(id, SEL, id))objc_msgSend)(dataSource, sel2, indexPath);
            if (info) {
                SEL s = NSSelectorFromString(@"m_nsUserName");
                if ([info respondsToSelector:s]) {
                    id n = ((id (*)(id, SEL))objc_msgSend)(info, s);
                    if ([n isKindOfClass:[NSString class]] && [n length] > 0) return n;
                }
            }
        }
    } @catch (NSException *e) {}
    return nil;
}

static BOOL sb_isSessionTop(NSString *userName) {
    id mgr = sb_getContactMgr(); if (!mgr) return NO;
    SEL s = NSSelectorFromString(@"getContactByName:");
    if (![mgr respondsToSelector:s]) s = NSSelectorFromString(@"getContactByNameFromCache:");
    if (![mgr respondsToSelector:s]) return NO;
    id contact = ((id (*)(id, SEL, id))objc_msgSend)(mgr, s, userName);
    if (!contact) return NO;
    SEL ts = NSSelectorFromString(@"isContactSessionTop");
    if (![contact respondsToSelector:ts]) return NO;
    return ((BOOL (*)(id, SEL))objc_msgSend)(contact, ts);
}

static BOOL sb_isSessionMuted(NSString *userName) {
    id mgr = sb_getContactMgr(); if (!mgr) return NO;
    SEL s = NSSelectorFromString(@"getContactByName:");
    if (![mgr respondsToSelector:s]) s = NSSelectorFromString(@"getContactByNameFromCache:");
    if (![mgr respondsToSelector:s]) return NO;
    id contact = ((id (*)(id, SEL, id))objc_msgSend)(mgr, s, userName);
    if (!contact) return NO;
    SEL ns = NSSelectorFromString(@"isChatStatusNotifyOpen");
    if (![contact respondsToSelector:ns]) return NO;
    return !((BOOL (*)(id, SEL))objc_msgSend)(contact, ns);
}

static void sb_togglePin(NSString *userName, BOOL isTop) {
    id mgr = sb_getSessionMgr();
    if (!isTop) {
        if (mgr && [mgr respondsToSelector:NSSelectorFromString(@"TopSessionByName:")])
            ((void (*)(id, SEL, id))objc_msgSend)(mgr, NSSelectorFromString(@"TopSessionByName:"), userName);
    } else {
        if (mgr && [mgr respondsToSelector:NSSelectorFromString(@"UntopSessionByName:")])
            ((void (*)(id, SEL, id))objc_msgSend)(mgr, NSSelectorFromString(@"UntopSessionByName:"), userName);
    }
    if (mgr && [mgr respondsToSelector:NSSelectorFromString(@"resortSessions")])
        ((void (*)(id, SEL))objc_msgSend)(mgr, NSSelectorFromString(@"resortSessions"));
}

static void sb_toggleMute(NSString *userName, BOOL isMuted) {
    id mgr = sb_getContactMgr(); if (!mgr) return;
    NSInteger st = isMuted ? 1 : 0;
    if ([mgr respondsToSelector:NSSelectorFromString(@"ChangeNotifyStatus:withStatus:sync:")])
        ((void (*)(id, SEL, id, NSInteger, BOOL))objc_msgSend)(mgr, NSSelectorFromString(@"ChangeNotifyStatus:withStatus:sync:"), userName, st, YES);
}

static void sb_showEditRemark(NSString *userName) {
    id mgr = sb_getContactMgr(); if (!mgr) return;
    SEL s = NSSelectorFromString(@"getContactByName:");
    if (![mgr respondsToSelector:s]) s = NSSelectorFromString(@"getContactByNameFromCache:");
    if (![mgr respondsToSelector:s]) return;
    id contact = ((id (*)(id, SEL, id))objc_msgSend)(mgr, s, userName);
    if (!contact) return;
    NSString *cur = @"";
    if ([contact respondsToSelector:NSSelectorFromString(@"m_nsRemark")]) {
        id r = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsRemark"));
        if ([r isKindOfClass:[NSString class]]) cur = r;
    }
    NSString *nick = @"";
    if ([contact respondsToSelector:NSSelectorFromString(@"m_nsNickName")]) {
        id n = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsNickName"));
        if ([n isKindOfClass:[NSString class]]) nick = n;
    }
    dispatch_async(dispatch_get_main_queue(), ^{
        UIAlertController *alert = [UIAlertController
            alertControllerWithTitle:@"修改备注"
                            message:[NSString stringWithFormat:@"当前昵称: %@", nick]
                     preferredStyle:UIAlertControllerStyleAlert];
        [alert addTextFieldWithConfigurationHandler:^(UITextField *tf) {
            tf.text = cur; tf.placeholder = @"请输入备注名";
        }];
        __weak UIAlertController *wa = alert;
        [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *a) {
            NSString *nr = wa.textFields.firstObject.text ?: @"";
            if ([contact respondsToSelector:NSSelectorFromString(@"setM_nsRemark:")])
                ((void (*)(id, SEL, id))objc_msgSend)(contact, NSSelectorFromString(@"setM_nsRemark:"), nr);
            if ([mgr respondsToSelector:NSSelectorFromString(@"modifyDataItem:notify:")])
                ((void (*)(id, SEL, id, BOOL))objc_msgSend)(mgr, NSSelectorFromString(@"modifyDataItem:notify:"), contact, YES);
            id sm = sb_getSessionMgr();
            if (sm && [sm respondsToSelector:NSSelectorFromString(@"updateMainSessionList")])
                ((void (*)(id, SEL))objc_msgSend)(sm, NSSelectorFromString(@"updateMainSessionList"));
        }]];
        [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
        UIViewController *top = nil;
        for (UIWindow *w in [UIApplication sharedApplication].windows)
            if (w.isKeyWindow) { top = w.rootViewController; break; }
        while (top.presentedViewController) top = top.presentedViewController;
        if (top) [top presentViewController:alert animated:YES completion:nil];
    });
}

#pragma mark - 前向声明

static UISwipeActionsConfiguration *sb_leadingSwipeActions(id self, SEL _cmd, UITableView *tv, NSIndexPath *ip);
static BOOL sb_canEditRow(id self, SEL _cmd, UITableView *tv, NSIndexPath *ip);
static UITableViewCellEditingStyle sb_editingStyle(id self, SEL _cmd, UITableView *tv, NSIndexPath *ip);

#pragma mark - 注入方法 (leadingSwipe + canEditRow + editingStyle)

static BOOL sb_injectSwipeMethods(Class targetClass, NSString *className) {
    if (!targetClass) return NO;
    NSString *name = NSStringFromClass(targetClass);
    if ([g_hookedClasses containsObject:name]) return NO;
    
    SEL leadingSel = NSSelectorFromString(@"tableView:leadingSwipeActionsConfigurationForRowAtIndexPath:");
    Method lm = class_getInstanceMethod(targetClass, leadingSel);
    if (lm) {
        g_origIMPs[[name stringByAppendingString:@"_leadingSwipe"]] = [NSValue valueWithPointer:method_getImplementation(lm)];
        method_setImplementation(lm, (IMP)sb_leadingSwipeActions);
        sbLog(@"[inject] ✓ hooked leadingSwipe on %@", name);
    } else {
        class_addMethod(targetClass, leadingSel, (IMP)sb_leadingSwipeActions, "@32@0:8@16@24");
        sbLog(@"[inject] ✓ added leadingSwipe to %@", name);
    }
    
    SEL canEditSel = NSSelectorFromString(@"tableView:canEditRowAtIndexPath:");
    Method cm = class_getInstanceMethod(targetClass, canEditSel);
    if (cm) {
        g_origIMPs[[name stringByAppendingString:@"_canEditRow"]] = [NSValue valueWithPointer:method_getImplementation(cm)];
        method_setImplementation(cm, (IMP)sb_canEditRow);
        sbLog(@"[inject] ✓ hooked canEditRow on %@", name);
    } else {
        class_addMethod(targetClass, canEditSel, (IMP)sb_canEditRow, "B32@0:8@16@24");
        sbLog(@"[inject] ✓ added canEditRow to %@", name);
    }
    
    SEL editStyleSel = NSSelectorFromString(@"tableView:editingStyleForRowAtIndexPath:");
    Method em = class_getInstanceMethod(targetClass, editStyleSel);
    if (em) {
        g_origIMPs[[name stringByAppendingString:@"_editingStyle"]] = [NSValue valueWithPointer:method_getImplementation(em)];
        method_setImplementation(em, (IMP)sb_editingStyle);
        sbLog(@"[inject] ✓ hooked editingStyle on %@", name);
    } else {
        class_addMethod(targetClass, editStyleSel, (IMP)sb_editingStyle, "q32@0:8@16@24");
        sbLog(@"[inject] ✓ added editingStyle to %@", name);
    }
    
    [g_hookedClasses addObject:name];
    return YES;
}

#pragma mark - canEditRowAtIndexPath:

static BOOL sb_canEditRow(id self, SEL _cmd, UITableView *tv, NSIndexPath *ip) {
    if (sb_anyFeatureEnabled()) {
        NSString *un = sb_userNameFromDataSource(self, ip);
        if (un.length > 0) return YES;
    }
    NSString *key = [NSStringFromClass([self class]) stringByAppendingString:@"_canEditRow"];
    NSValue *v = g_origIMPs[key];
    if (v) return ((BOOL (*)(id, SEL, id, id))[v pointerValue])(self, _cmd, tv, ip);
    return NO;
}

#pragma mark - editingStyleForRowAtIndexPath:

static UITableViewCellEditingStyle sb_editingStyle(id self, SEL _cmd, UITableView *tv, NSIndexPath *ip) {
    NSString *key = [NSStringFromClass([self class]) stringByAppendingString:@"_editingStyle"];
    NSValue *v = g_origIMPs[key];
    UITableViewCellEditingStyle orig = UITableViewCellEditingStyleNone;
    if (v) orig = ((UITableViewCellEditingStyle (*)(id, SEL, id, id))[v pointerValue])(self, _cmd, tv, ip);
    if (sb_anyFeatureEnabled() && orig == UITableViewCellEditingStyleNone) {
        NSString *un = sb_userNameFromDataSource(self, ip);
        if (un.length > 0) return UITableViewCellEditingStyleDelete;
    }
    return orig;
}

#pragma mark - leadingSwipeActionsConfigurationForRowAtIndexPath:

static UISwipeActionsConfiguration *sb_leadingSwipeActions(id self, SEL _cmd, UITableView *tv, NSIndexPath *ip) {
    NSMutableArray<UIContextualAction *> *actions = [NSMutableArray array];
    NSString *un = sb_userNameFromDataSource(self, ip);
    if (un.length > 0) {
        PluginConfig *cfg = [PluginConfig shared];
        if (cfg.quickPinEnabled) {
            BOOL top = sb_isSessionTop(un);
            UIContextualAction *a = [UIContextualAction contextualActionWithStyle:UIContextualActionStyleNormal title:top?@"取消置顶":@"置顶" handler:^(UIContextualAction *act, UIView *sv, void (^done)(BOOL)) { sb_togglePin(un, top); done(YES); }];
            a.backgroundColor = [UIColor colorWithRed:0.0 green:0.48 blue:1.0 alpha:1.0];
            [actions addObject:a];
        }
        if (cfg.quickRemarkEnabled) {
            UIContextualAction *a = [UIContextualAction contextualActionWithStyle:UIContextualActionStyleNormal title:@"备注" handler:^(UIContextualAction *act, UIView *sv, void (^done)(BOOL)) { sb_showEditRemark(un); done(YES); }];
            a.backgroundColor = [UIColor colorWithRed:1.0 green:0.58 blue:0.0 alpha:1.0];
            [actions addObject:a];
        }
        if (cfg.quickMuteEnabled) {
            BOOL muted = sb_isSessionMuted(un);
            UIContextualAction *a = [UIContextualAction contextualActionWithStyle:UIContextualActionStyleNormal title:muted?@"取消免打扰":@"免打扰" handler:^(UIContextualAction *act, UIView *sv, void (^done)(BOOL)) { sb_toggleMute(un, muted); done(YES); }];
            a.backgroundColor = [UIColor colorWithRed:0.55 green:0.0 blue:0.85 alpha:1.0];
            [actions addObject:a];
        }
    }
    if (actions.count > 0) {
        UISwipeActionsConfiguration *c = [UISwipeActionsConfiguration configurationWithActions:actions];
        c.performsFirstActionWithFullSwipe = NO;
        return c;
    }
    return nil;
}

#pragma mark - Hook setDataSource: / setDelegate:

static void (*orig_setDataSource)(id, SEL, id) = NULL;
static void replaced_setDataSource(id self, SEL _cmd, id ds) {
    if (orig_setDataSource) orig_setDataSource(self, _cmd, ds);
    if (ds) sb_injectSwipeMethods(object_getClass(ds), nil);
}

static void (*orig_setDelegate)(id, SEL, id) = NULL;
static void replaced_setDelegate(id self, SEL _cmd, id dg) {
    if (orig_setDelegate) orig_setDelegate(self, _cmd, dg);
    if (dg) sb_injectSwipeMethods(object_getClass(dg), nil);
}

#pragma mark - Hook setAllowsMultipleSelection:

static void (*orig_setAllowsMultipleSelection)(id, SEL, BOOL) = NULL;
static void replaced_setAllowsMultipleSelection(id self, SEL _cmd, BOOL allows) {
    if (sb_anyFeatureEnabled()) {
        if (orig_setAllowsMultipleSelection) orig_setAllowsMultipleSelection(self, _cmd, NO);
        return;
    }
    if (orig_setAllowsMultipleSelection) orig_setAllowsMultipleSelection(self, _cmd, allows);
}

#pragma mark - Hook settingSessionGesture: / setMIsSessionGesture:

static void (*orig_settingSessionGesture)(id, SEL) = NULL;

static void replaced_settingSessionGesture(id self, SEL _cmd) {
    sbLog(@"[settingSessionGesture] called");
    if (orig_settingSessionGesture) orig_settingSessionGesture(self, _cmd);
}

static void (*orig_setMIsSessionGesture)(id, SEL, BOOL) = NULL;

static void replaced_setMIsSessionGesture(id self, SEL _cmd, BOOL val) {
    sbLog(@"[setMIsSessionGesture] val=%d before=%d", val,
          ((BOOL (*)(id, SEL))objc_msgSend)(self, NSSelectorFromString(@"mIsSessionGesture")));
    if (orig_setMIsSessionGesture) orig_setMIsSessionGesture(self, _cmd, val);
}

#pragma mark - Hook addGestureRecognizer: on UITableView

static void (*orig_tableView_addGesture)(id, SEL, id) = NULL;

static void replaced_tableView_addGesture(id self, SEL _cmd, id gesture) {
    Class grc = object_getClass(gesture);
    sbLog(@"[addGesture] tv=%@ class=%@", NSStringFromClass([self class]), NSStringFromClass(grc));
    if (orig_tableView_addGesture) orig_tableView_addGesture(self, _cmd, gesture);
}

#pragma mark - Hook viewWillAppear: on NewMainFrameViewController

static void (*orig_viewWillAppear)(id, SEL, BOOL) = NULL;

static void replaced_viewWillAppear(id self, SEL _cmd, BOOL animated) {
    if (orig_viewWillAppear) orig_viewWillAppear(self, _cmd, animated);
    
    if (!sb_anyFeatureEnabled()) return;
    
    sbLog(@"[viewWillAppear] mIsSessionGesture=%d",
          ((BOOL (*)(id, SEL))objc_msgSend)(self, NSSelectorFromString(@"mIsSessionGesture")));
    
    SEL settingSel = NSSelectorFromString(@"settingSessionGesture:");
    if ([self respondsToSelector:settingSel]) {
        ((void (*)(id, SEL))objc_msgSend)(self, settingSel);
        sbLog(@"[viewWillAppear] ✓ called settingSessionGesture:");
    } else {
        sbLog(@"[viewWillAppear] ⚠ settingSessionGesture: not found, trying setMIsSessionGesture:");
        SEL setter = NSSelectorFromString(@"setMIsSessionGesture:");
        if ([self respondsToSelector:setter]) {
            ((void (*)(id, SEL, BOOL))objc_msgSend)(self, setter, YES);
            sbLog(@"[viewWillAppear] ✓ called setMIsSessionGesture:YES");
        }
    }
    
    UITableView *tv = nil;
    SEL viewSel = NSSelectorFromString(@"tableView");
    if ([self respondsToSelector:viewSel]) tv = ((id (*)(id, SEL))objc_msgSend)(self, viewSel);
    if (!tv || ![tv isKindOfClass:[UITableView class]]) {
        for (UIView *sv in ((UIView *)((id (*)(id, SEL))objc_msgSend)(self, @selector(view))).subviews) {
            if ([sv isKindOfClass:[UITableView class]]) { tv = (UITableView *)sv; break; }
        }
    }
    if (!tv) return;
    
    tv.panGestureRecognizer.enabled = YES;
    tv.allowsMultipleSelectionDuringEditing = NO;
    
    sbLog(@"[viewWillAppear] tv=%@ panEnabled=%d multiSel=%d gestures=%lu",
          NSStringFromClass([tv class]), tv.panGestureRecognizer.isEnabled,
          tv.allowsMultipleSelectionDuringEditing, (unsigned long)tv.gestureRecognizers.count);
}

#pragma mark - 安装

@implementation WPSessionBoxHook

+ (void)install {
    g_hookedClasses = [NSMutableSet set];
    g_origIMPs = [NSMutableDictionary dictionary];
    
    sbLog(@"[install] === START (v8: settingSessionGesture + addGesture hook) ===");
    
    Method setDS = class_getInstanceMethod([UITableView class], @selector(setDataSource:));
    if (setDS) { orig_setDataSource = (void (*)(id, SEL, id))method_getImplementation(setDS); method_setImplementation(setDS, (IMP)replaced_setDataSource); }
    
    Method setDL = class_getInstanceMethod([UITableView class], @selector(setDelegate:));
    if (setDL) { orig_setDelegate = (void (*)(id, SEL, id))method_getImplementation(setDL); method_setImplementation(setDL, (IMP)replaced_setDelegate); }
    
    Method setAMS = class_getInstanceMethod([UITableView class], @selector(setAllowsMultipleSelection:));
    if (setAMS) { orig_setAllowsMultipleSelection = (void (*)(id, SEL, BOOL))method_getImplementation(setAMS); method_setImplementation(setAMS, (IMP)replaced_setAllowsMultipleSelection); }
    
    Method addGR = class_getInstanceMethod([UITableView class], @selector(addGestureRecognizer:));
    if (addGR) {
        orig_tableView_addGesture = (void (*)(id, SEL, id))method_getImplementation(addGR);
        method_setImplementation(addGR, (IMP)replaced_tableView_addGesture);
        sbLog(@"[install] ✓ hooked addGestureRecognizer: on UITableView");
    }
    
    Class nmvc = objc_getClass("NewMainFrameViewController");
    if (nmvc) {
        Method vwa = class_getInstanceMethod(nmvc, @selector(viewWillAppear:));
        if (vwa) { orig_viewWillAppear = (void (*)(id, SEL, BOOL))method_getImplementation(vwa); method_setImplementation(vwa, (IMP)replaced_viewWillAppear); }
        
        Method ssg = class_getInstanceMethod(nmvc, NSSelectorFromString(@"settingSessionGesture:"));
        if (ssg) {
            orig_settingSessionGesture = (void (*)(id, SEL))method_getImplementation(ssg);
            method_setImplementation(ssg, (IMP)replaced_settingSessionGesture);
            sbLog(@"[install] ✓ hooked settingSessionGesture:");
        } else {
            sbLog(@"[install] ⚠ settingSessionGesture: not found on NewMainFrameViewController");
        }
        
        Method smsg = class_getInstanceMethod(nmvc, NSSelectorFromString(@"setMIsSessionGesture:"));
        if (smsg) {
            orig_setMIsSessionGesture = (void (*)(id, SEL, BOOL))method_getImplementation(smsg);
            method_setImplementation(smsg, (IMP)replaced_setMIsSessionGesture);
            sbLog(@"[install] ✓ hooked setMIsSessionGesture:");
        } else {
            sbLog(@"[install] ⚠ setMIsSessionGesture: not found on NewMainFrameViewController");
        }
    }
    
    sbLog(@"[install] === COMPLETE ===");
}

@end