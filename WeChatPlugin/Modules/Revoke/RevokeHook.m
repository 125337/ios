#import "RevokeHook.h"
#import "RevokeHandler.h"
#import "../../Config/PluginConfig.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <stdarg.h>
#import "../../Core/LogManager.h"
#import <substrate.h>

static void hookLog(NSString *format, ...) {
    va_list args;
    va_start(args, format);
    NSString *content = [[NSString alloc] initWithFormat:format arguments:args];
    va_end(args);
    
    @try {
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folderPath = [paths.firstObject stringByAppendingPathComponent:@"WeChatPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folderPath withIntermediateDirectories:YES attributes:nil error:nil];
        NSString *filePath = [folderPath stringByAppendingPathComponent:@"revoke.log"];
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
    [content release];
}

// ============================================================
// 单 Hook 精简架构（参考微信优化 onNewSyncNotAddDBMessage）
// 原理：在同步通道掐断 sysmsg 入库 → 整个撤回链条失效
// ============================================================

static IMP orig_onNewSyncNotAddDBMessage = NULL;
static BOOL g_hookSyncVerified = NO;

static NSString *extractChatName(id obj) {
    if (!obj) return nil;
    SEL sel = NSSelectorFromString(@"nsChatName");
    if ([obj respondsToSelector:sel]) {
        @try {
            id name = ((id (*)(id, SEL))objc_msgSend)(obj, sel);
            if ([name isKindOfClass:[NSString class]]) return name;
        } @catch (NSException *e) {}
    }
    return nil;
}

// ★ 核心：唯一 Hook 点 (onNewSyncNotAddDBMessage)
// 检测 revokemsg → 解析 → 插入提示条 → return (阻断 sysmsg 入库)
static void replaced_onNewSyncNotAddDBMessage(id self, SEL _cmd, id arg1) {
    WPLog(@"Revoke", @"[WeChatPlugin][Revoke] onNewSyncNotAddDBMessage called, arg1=%@", arg1);
    
    if (![PluginConfig shared].preventRecall) {
        if (orig_onNewSyncNotAddDBMessage)
            ((void (*)(id, SEL, id))orig_onNewSyncNotAddDBMessage)(self, _cmd, arg1);
        return;
    }
    
    @try {
        Class CMessageWrapClass = objc_getClass("CMessageWrap");
        if (arg1 && CMessageWrapClass && [arg1 isKindOfClass:CMessageWrapClass]) {
            NSString *content = nil;
            SEL contentSel = NSSelectorFromString(@"m_nsContent");
            if ([arg1 respondsToSelector:contentSel]) {
                content = ((NSString *(*)(id, SEL))objc_msgSend)(arg1, contentSel);
            }
            
            if (content && [content containsString:@"<sysmsg type=\"revokemsg\">"]) {
                WPLog(@"Revoke", @"[WeChatPlugin][Revoke] detected revoke message in onNewSyncNotAddDBMessage");
                
                NSString *chatName = extractChatName(arg1);
                BOOL handled = [[RevokeHandler shared] handleRevoke:arg1 chatName:chatName];
                
                if (handled) {
                    WPLog(@"Revoke", @"[WeChatPlugin][Revoke] blocking original revoke - message preserved!");
                    return;  // ★ 阻断：sysmsg 不入库，整个撤回链条失效
                }
            }
        }
    } @catch (NSException *e) {
        WPLog(@"Revoke", @"[WeChatPlugin][Revoke] exception (onNewSyncNotAddDBMessage): %@", e);
    }
    
    // 非撤回消息或处理失败 → 透传原始
    if (orig_onNewSyncNotAddDBMessage)
        ((void (*)(id, SEL, id))orig_onNewSyncNotAddDBMessage)(self, _cmd, arg1);
}

@implementation RevokeHook

+ (void)install {
    WPLog(@"Revoke", @"[WeChatPlugin][RevokeHook] install start (single hook architecture)");
    
    Class msgMgrCls = objc_getClass("CMessageMgr");
    if (!msgMgrCls) {
        WPLog(@"Revoke", @"[WeChatPlugin][RevokeHook] ✗ CMessageMgr class not found!");
        return;
    }
    WPLog(@"Revoke", @"[WeChatPlugin][RevokeHook] CMessageMgr found: %@", msgMgrCls);
    
    MSHookMessageEx(msgMgrCls, @selector(onNewSyncNotAddDBMessage:), (IMP)replaced_onNewSyncNotAddDBMessage, &orig_onNewSyncNotAddDBMessage);
    g_hookSyncVerified = YES;
    WPLog(@"Revoke", @"[WeChatPlugin][RevokeHook] ✓ onNewSyncNotAddDBMessage: hooked ★ SINGLE HOOK (ref: WXOptimizer)");
    
    WPLog(@"Revoke", @"[WeChatPlugin][RevokeHook] install complete: %@", g_hookSyncVerified ? @"✓ 1/1" : @"✗ FAILED");
}

+ (BOOL)checkHookWithSeq:(int)seq {
    if (!g_hookSyncVerified) {
        WPLog(@"Revoke", @"[WeChatPlugin][RevokeHook][checkHook:%d] hook was never installed", seq);
        return NO;
    }
    
    Class cls = objc_getClass("CMessageMgr");
    if (!cls) {
        WPLog(@"Revoke", @"[WeChatPlugin][RevokeHook][checkHook:%d] ✗ CMessageMgr class gone", seq);
        return NO;
    }
    
    Method m = class_getInstanceMethod(cls, NSSelectorFromString(@"onNewSyncNotAddDBMessage:"));
    if (!m) {
        WPLog(@"Revoke", @"[WeChatPlugin][RevokeHook][checkHook:%d] ✗ method gone", seq);
        return NO;
    }
    
    IMP currentIMP = method_getImplementation(m);
    IMP ourIMP = (IMP)replaced_onNewSyncNotAddDBMessage;
    
    if (currentIMP != ourIMP) {
        WPLog(@"Revoke", @"[WeChatPlugin][RevokeHook][checkHook:%d] ✗ IMP changed! restoring...", seq);
        method_setImplementation(m, ourIMP);
        return NO;
    }
    
    WPLog(@"Revoke", @"[WeChatPlugin][RevokeHook][checkHook:%d] ✓ single hook OK", seq);
    return YES;
}

+ (BOOL)checkHook {
    return [self checkHookWithSeq:0];
}

@end