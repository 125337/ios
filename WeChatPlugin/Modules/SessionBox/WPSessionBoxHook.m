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
    const char *names[] = {"MMNewSessionMgr", "CConversationMgr", "CSessionMgr", "MMSessionMgr", "MainSessionMgr"};
    for (int i = 0; i < 5; i++) {
        Class cls = objc_getClass(names[i]);
        if (cls) { id svc = sb_getService(cls); if (svc) return svc; }
    }
    return nil;
}

#pragma mark - 获取 userName

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
    } @catch (NSException *e) {
        sbLog(@"[getUserName] exception: %@", e.reason);
    }
    return nil;
}

#pragma mark - 状态检查

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

#pragma mark - 操作函数

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

#pragma mark - 注入方法

static BOOL sb_injectSwipeMethods(Class targetClass, NSString *className) {
    if (!targetClass) return NO;
    NSString *name = NSStringFromClass(targetClass);
    if ([g_hookedClasses containsObject:name]) return NO;
    
    // --- leadingSwipeActions ---
    SEL leadingSel = NSSelectorFromString(@"tableView:leadingSwipeActionsConfigurationForRowAtIndexPath:");
    Method lm = class_getInstanceMethod(targetClass, leadingSel);
    if (lm) {
        IMP orig = method_getImplementation(lm);
        g_origIMPs[[name stringByAppendingString:@"_leadingSwipe"]] = [NSValue valueWithPointer:orig];
        method_setImplementation(lm, (IMP)sb_leadingSwipeActions);
        sbLog(@"[inject] ✓ hooked leadingSwipe on %@", name);
    } else {
        class_addMethod(targetClass, leadingSel, (IMP)sb_leadingSwipeActions, "@32@0:8@16@24");
        sbLog(@"[inject] ✓ added leadingSwipe to %@", name);
    }
    
    // --- canEditRow ---
    SEL canEditSel = NSSelectorFromString(@"tableView:canEditRowAtIndexPath:");
    Method cm = class_getInstanceMethod(targetClass, canEditSel);
    if (cm) {
        IMP orig = method_getImplementation(cm);
        g_origIMPs[[name stringByAppendingString:@"_canEditRow"]] = [NSValue valueWithPointer:orig];
        method_setImplementation(cm, (IMP)sb_canEditRow);
        sbLog(@"[inject] ✓ hooked canEditRow on %@", name);
    } else {
        class_addMethod(targetClass, canEditSel, (IMP)sb_canEditRow, "B32@0:8@16@24");
        sbLog(@"[inject] ✓ added canEditRow to %@", name);
    }
    
    // --- editingStyle ---
    SEL editStyleSel = NSSelectorFromString(@"tableView:editingStyleForRowAtIndexPath:");
    Method em = class_getInstanceMethod(targetClass, editStyleSel);
    if (em) {
        IMP orig = method_getImplementation(em);
        g_origIMPs[[name stringByAppendingString:@"_editingStyle"]] = [NSValue valueWithPointer:orig];
        method_setImplementation(em, (IMP)sb_editingStyle);
        sbLog(@"[inject] ✓ hooked editingStyle on %@", name);
    } else {
        class_addMethod(targetClass, editStyleSel, (IMP)sb_editingStyle, "q32@0:8@16@24");
        sbLog(@"[inject] ✓ added editingStyle to %@", name);
    }
    
    // --- gestureRecognizerShouldBegin: (拦截手势代理) ---
    SEL gsbSel = NSSelectorFromString(@"gestureRecognizerShouldBegin:");
    Method gsbm = class_getInstanceMethod(targetClass, gsbSel);
    if (gsbm) {
        IMP orig = method_getImplementation(gsbm);
        g_origIMPs[[name stringByAppendingString:@"_gestureShouldBegin"]] = [NSValue valueWithPointer:orig];
        method_setImplementation(gsbm, (IMP)sb_gestureShouldBegin);
        sbLog(@"[inject] ✓ hooked gestureRecognizerShouldBegin on %@", name);
    } else {
        class_addMethod(targetClass, gsbSel, (IMP)sb_gestureShouldBegin, "B@:@");
        sbLog(@"[inject] ✓ added gestureRecognizerShouldBegin to %@", name);
    }
    
    // --- gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer: ---
    SEL simSel = NSSelectorFromString(@"gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:");
    Method simm = class_getInstanceMethod(targetClass, simSel);
    if (simm) {
        IMP orig = method_getImplementation(simm);
        g_origIMPs[[name stringByAppendingString:@"_shouldSimultaneously"]] = [NSValue valueWithPointer:orig];
        method_setImplementation(simm, (IMP)sb_shouldSimultaneously);
        sbLog(@"[inject] ✓ hooked shouldRecognizeSimultaneously on %@", name);
    } else {
        class_addMethod(targetClass, simSel, (IMP)sb_shouldSimultaneously, "B@:@@");
        sbLog(@"[inject] ✓ added shouldRecognizeSimultaneously to %@", name);
    }
    
    [g_hookedClasses addObject:name];
    return YES;
}

#pragma mark - 手势代理方法

static BOOL sb_gestureShouldBegin(id self, SEL _cmd, UIGestureRecognizer *gesture) {
    PluginConfig *cfg = [PluginConfig shared];
    BOOL fe = cfg.quickPinEnabled || cfg.quickRemarkEnabled || cfg.quickMuteEnabled;
    
    NSString *key = [NSStringFromClass([self class]) stringByAppendingString:@"_gestureShouldBegin"];
    NSValue *v = g_origIMPs[key];
    BOOL orig = YES;
    if (v) {
        IMP o = [v pointerValue];
        orig = ((BOOL (*)(id, SEL, id))o)(self, _cmd, gesture);
    }
    
    if (fe) {
        sbLog(@"[gestureShouldBegin] class=%@ orig=%d → YES", NSStringFromClass([self class]), orig);
        return YES;
    }
    
    sbLog(@"[gestureShouldBegin] class=%@ orig=%d (features off)", NSStringFromClass([self class]), orig);
    return orig;
}

static BOOL sb_shouldSimultaneously(id self, SEL _cmd, UIGestureRecognizer *a, UIGestureRecognizer *b) {
    NSString *key = [NSStringFromClass([self class]) stringByAppendingString:@"_shouldSimultaneously"];
    NSValue *v = g_origIMPs[key];
    if (v) {
        IMP o = [v pointerValue];
        BOOL orig = ((BOOL (*)(id, SEL, id, id))o)(self, _cmd, a, b);
        sbLog(@"[simultaneously] class=%@ orig=%d", NSStringFromClass([self class]), orig);
        return orig;
    }
    return YES;
}

#pragma mark - canEditRowAtIndexPath:

static BOOL sb_canEditRow(id self, SEL _cmd, UITableView *tv, NSIndexPath *ip) {
    PluginConfig *cfg = [PluginConfig shared];
    BOOL fe = cfg.quickPinEnabled || cfg.quickRemarkEnabled || cfg.quickMuteEnabled;
    
    if (fe) {
        NSString *un = sb_userNameFromDataSource(self, ip);
        if (un.length > 0) {
            sbLog(@"[canEdit] %@-%@ => YES (%@)", @(ip.section), @(ip.row), un);
            return YES;
        }
    }
    
    sbLog(@"[canEdit] %@-%@ => NO (class=%@ fe=%d)", @(ip.section), @(ip.row), NSStringFromClass([self class]), fe);
    
    NSString *key = [NSStringFromClass([self class]) stringByAppendingString:@"_canEditRow"];
    NSValue *v = g_origIMPs[key];
    if (v) {
        IMP orig = [v pointerValue];
        return ((BOOL (*)(id, SEL, id, id))orig)(self, _cmd, tv, ip);
    }
    return NO;
}

#pragma mark - editingStyleForRowAtIndexPath:

static UITableViewCellEditingStyle sb_editingStyle(id self, SEL _cmd, UITableView *tv, NSIndexPath *ip) {
    PluginConfig *cfg = [PluginConfig shared];
    BOOL fe = cfg.quickPinEnabled || cfg.quickRemarkEnabled || cfg.quickMuteEnabled;
    
    NSString *key = [NSStringFromClass([self class]) stringByAppendingString:@"_editingStyle"];
    NSValue *v = g_origIMPs[key];
    UITableViewCellEditingStyle orig = UITableViewCellEditingStyleNone;
    if (v) {
        IMP o = [v pointerValue];
        orig = ((UITableViewCellEditingStyle (*)(id, SEL, id, id))o)(self, _cmd, tv, ip);
    }
    
    if (fe && orig == UITableViewCellEditingStyleNone) {
        NSString *un = sb_userNameFromDataSource(self, ip);
        if (un.length > 0) {
            sbLog(@"[editStyle] %@-%@ override .none → .delete (%@)", @(ip.section), @(ip.row), un);
            return UITableViewCellEditingStyleDelete;
        }
    }
    
    sbLog(@"[editStyle] %@-%@ orig=%ld (class=%@)", @(ip.section), @(ip.row), (long)orig, NSStringFromClass([self class]));
    return orig;
}

#pragma mark - leadingSwipeActionsConfigurationForRowAtIndexPath:

static UISwipeActionsConfiguration *sb_leadingSwipeActions(id self, SEL _cmd, UITableView *tv, NSIndexPath *ip) {
    NSString *key = [NSStringFromClass([self class]) stringByAppendingString:@"_leadingSwipe"];
    NSValue *v = g_origIMPs[key];
    
    NSMutableArray<UIContextualAction *> *actions = [NSMutableArray array];
    NSString *un = sb_userNameFromDataSource(self, ip);
    
    if (un.length > 0) {
        PluginConfig *cfg = [PluginConfig shared];
        
        if (cfg.quickPinEnabled) {
            BOOL top = sb_isSessionTop(un);
            UIContextualAction *a = [UIContextualAction
                contextualActionWithStyle:UIContextualActionStyleNormal
                                   title:top ? @"取消置顶" : @"置顶"
                                 handler:^(UIContextualAction *act, UIView *sv, void (^done)(BOOL)) {
                sbLog(@"[Action] togglePin: %@", un);
                sb_togglePin(un, top);
                done(YES);
            }];
            a.backgroundColor = [UIColor colorWithRed:0.0 green:0.48 blue:1.0 alpha:1.0];
            [actions addObject:a];
        }
        
        if (cfg.quickRemarkEnabled) {
            UIContextualAction *a = [UIContextualAction
                contextualActionWithStyle:UIContextualActionStyleNormal
                                   title:@"备注"
                                 handler:^(UIContextualAction *act, UIView *sv, void (^done)(BOOL)) {
                sbLog(@"[Action] showEditRemark: %@", un);
                sb_showEditRemark(un);
                done(YES);
            }];
            a.backgroundColor = [UIColor colorWithRed:1.0 green:0.58 blue:0.0 alpha:1.0];
            [actions addObject:a];
        }
        
        if (cfg.quickMuteEnabled) {
            BOOL muted = sb_isSessionMuted(un);
            UIContextualAction *a = [UIContextualAction
                contextualActionWithStyle:UIContextualActionStyleNormal
                                   title:muted ? @"取消免打扰" : @"免打扰"
                                 handler:^(UIContextualAction *act, UIView *sv, void (^done)(BOOL)) {
                sbLog(@"[Action] toggleMute: %@", un);
                sb_toggleMute(un, muted);
                done(YES);
            }];
            a.backgroundColor = [UIColor colorWithRed:0.55 green:0.0 blue:0.85 alpha:1.0];
            [actions addObject:a];
        }
    }
    
    sbLog(@"[leadingSwipe] %@-%@ un=%@ actions=%lu (class=%@)",
          @(ip.section), @(ip.row), un ?: @"nil", (unsigned long)actions.count,
          NSStringFromClass([self class]));
    
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
    if (!ds) return;
    
    Class dc = object_getClass(ds);
    NSString *name = NSStringFromClass(dc);
    sbLog(@"[setDataSource] %@", name);
    
    BOOL ok = sb_injectSwipeMethods(dc, name);
    sbLog(@"[setDataSource] inject=%d for %@", ok, name);
}

static void (*orig_setDelegate)(id, SEL, id) = NULL;

static void replaced_setDelegate(id self, SEL _cmd, id dg) {
    if (orig_setDelegate) orig_setDelegate(self, _cmd, dg);
    if (!dg) return;
    
    Class dc = object_getClass(dg);
    NSString *name = NSStringFromClass(dc);
    sbLog(@"[setDelegate] %@", name);
    
    BOOL ok = sb_injectSwipeMethods(dc, name);
    sbLog(@"[setDelegate] inject=%d for %@", ok, name);
}

#pragma mark - 安装

@implementation WPSessionBoxHook

+ (void)install {
    g_hookedClasses = [NSMutableSet set];
    g_origIMPs = [NSMutableDictionary dictionary];
    
    sbLog(@"[install] === START (setDS+setDL+gestureDelegate) ===");
    
    Method setDS = class_getInstanceMethod([UITableView class], @selector(setDataSource:));
    if (setDS) {
        orig_setDataSource = (void (*)(id, SEL, id))method_getImplementation(setDS);
        method_setImplementation(setDS, (IMP)replaced_setDataSource);
        sbLog(@"[install] ✓ hooked setDataSource:");
    }
    
    Method setDL = class_getInstanceMethod([UITableView class], @selector(setDelegate:));
    if (setDL) {
        orig_setDelegate = (void (*)(id, SEL, id))method_getImplementation(setDL);
        method_setImplementation(setDL, (IMP)replaced_setDelegate);
        sbLog(@"[install] ✓ hooked setDelegate:");
    }
    
    sbLog(@"[install] === COMPLETE ===");
}

@end