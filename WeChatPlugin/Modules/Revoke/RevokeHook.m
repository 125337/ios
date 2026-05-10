#import "RevokeHook.h"
#import "RevokeHandler.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/HookEngine.h"
#import "../../Config/Constants.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <stdarg.h>

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
}

static IMP orig_onRevokeMsg = NULL;
static IMP orig_onRevokeMsg_CMessageMgr = NULL;
static IMP orig_onNewSyncNotAddDBMessage = NULL;
static IMP orig_replaceRevokedMsg = NULL;
static IMP orig_deleteLocalProcessRevokeMsgWithToast = NULL;

static id extractMsgWrap(id obj) {
    if (!obj) return nil;
    Class CMessageWrapClass = objc_getClass("CMessageWrap");
    if (CMessageWrapClass && [obj isKindOfClass:CMessageWrapClass]) return obj;
    SEL sel = NSSelectorFromString(@"msgWrap");
    if ([obj respondsToSelector:sel]) {
        @try {
            id wrap = ((id (*)(id, SEL))objc_msgSend)(obj, sel);
            if (wrap && CMessageWrapClass && [wrap isKindOfClass:CMessageWrapClass]) return wrap;
        } @catch (NSException *e) {}
    }
    return nil;
}

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

static void replaced_onRevokeMsg(id self, SEL _cmd, id arg1) {
    hookLog(@"[WeChatPlugin][Revoke] onRevokeMsg called (MessageRevokeMgr)");
    
    if (![PluginConfig shared].preventRecall) {
        hookLog(@"[WeChatPlugin][Revoke] preventRecall is disabled, calling original");
        if (orig_onRevokeMsg) ((void (*)(id, SEL, id))orig_onRevokeMsg)(self, _cmd, arg1);
        return;
    }
    
    @try {
        id wrap = extractMsgWrap(arg1);
        NSString *chatName = extractChatName(arg1);
        hookLog(@"[WeChatPlugin][Revoke] processing revoke, chatName=%@", chatName);
        
        BOOL handled = [[RevokeHandler shared] handleRevoke:wrap chatName:chatName];
        hookLog(@"[WeChatPlugin][Revoke] handleRevoke result=%d", handled);
    } @catch (NSException *e) {
        hookLog(@"[WeChatPlugin][Revoke] exception: %@", e);
    }
    
    if (orig_onRevokeMsg) ((void (*)(id, SEL, id))orig_onRevokeMsg)(self, _cmd, arg1);
}

static void replaced_onRevokeMsg_CMessageMgr(id self, SEL _cmd, id arg1) {
    hookLog(@"[WeChatPlugin][Revoke] onRevokeMsg called (CMessageMgr)");
    
    if (![PluginConfig shared].preventRecall) {
        if (orig_onRevokeMsg_CMessageMgr) ((void (*)(id, SEL, id))orig_onRevokeMsg_CMessageMgr)(self, _cmd, arg1);
        return;
    }
    
    @try {
        id wrap = extractMsgWrap(arg1);
        NSString *chatName = extractChatName(arg1);
        hookLog(@"[WeChatPlugin][Revoke] processing revoke (CMessageMgr), chatName=%@", chatName);
        
        BOOL handled = [[RevokeHandler shared] handleRevoke:wrap chatName:chatName];
        hookLog(@"[WeChatPlugin][Revoke] handleRevoke result (CMessageMgr)=%d", handled);
    } @catch (NSException *e) {
        hookLog(@"[WeChatPlugin][Revoke] exception (CMessageMgr): %@", e);
    }
    
    if (orig_onRevokeMsg_CMessageMgr) ((void (*)(id, SEL, id))orig_onRevokeMsg_CMessageMgr)(self, _cmd, arg1);
}

static void replaced_onNewSyncNotAddDBMessage(id self, SEL _cmd, id arg1) {
    hookLog(@"[WeChatPlugin][Revoke] onNewSyncNotAddDBMessage called, arg1=%@", arg1);
    
    if (![PluginConfig shared].preventRecall) {
        if (orig_onNewSyncNotAddDBMessage) ((void (*)(id, SEL, id))orig_onNewSyncNotAddDBMessage)(self, _cmd, arg1);
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
            
            hookLog(@"[WeChatPlugin][Revoke] onNewSyncNotAddDBMessage content=%@", content);
            
            if (content && [content hasPrefix:@"<sysmsg type=\"revokemsg\">"]) {
                hookLog(@"[WeChatPlugin][Revoke] detected revoke message in onNewSyncNotAddDBMessage");
                
                NSString *chatName = extractChatName(arg1);
                BOOL handled = [[RevokeHandler shared] handleRevoke:arg1 chatName:chatName];
                hookLog(@"[WeChatPlugin][Revoke] handleRevoke result (onNewSyncNotAddDBMessage)=%d", handled);
                
                if (handled) {
                    hookLog(@"[WeChatPlugin][Revoke] blocking original revoke - message preserved!");
                    return;
                }
            }
        }
    } @catch (NSException *e) {
        hookLog(@"[WeChatPlugin][Revoke] exception (onNewSyncNotAddDBMessage): %@", e);
    }
    
    if (orig_onNewSyncNotAddDBMessage) ((void (*)(id, SEL, id))orig_onNewSyncNotAddDBMessage)(self, _cmd, arg1);
}

static void replaced_replaceRevokedMsg(id self, SEL _cmd, id arg1) {
    if (![PluginConfig shared].preventRecall) {
        if (orig_replaceRevokedMsg) ((void (*)(id, SEL, id))orig_replaceRevokedMsg)(self, _cmd, arg1);
        return;
    }
    @try {
        id wrap = extractMsgWrap(arg1);
        if (wrap && ![[RevokeHandler shared] isSelfRevoke:wrap]) return;
    } @catch (NSException *e) {}
    if (orig_replaceRevokedMsg) ((void (*)(id, SEL, id))orig_replaceRevokedMsg)(self, _cmd, arg1);
}

static void replaced_deleteLocalProcessRevokeMsgWithToast(id self, SEL _cmd, id arg1) {
    if (![PluginConfig shared].preventRecall) {
        if (orig_deleteLocalProcessRevokeMsgWithToast) ((void (*)(id, SEL, id))orig_deleteLocalProcessRevokeMsgWithToast)(self, _cmd, arg1);
        return;
    }
    @try {
        id wrap = extractMsgWrap(arg1);
        if (wrap && ![[RevokeHandler shared] isSelfRevoke:wrap]) return;
    } @catch (NSException *e) {}
    if (orig_deleteLocalProcessRevokeMsgWithToast) ((void (*)(id, SEL, id))orig_deleteLocalProcessRevokeMsgWithToast)(self, _cmd, arg1);
}

@implementation RevokeHook

+ (void)install {
    hookLog(@"[WeChatPlugin][RevokeHook] install start");
    
    Class cls = objc_getClass("MessageRevokeMgr");
    if (!cls) {
        hookLog(@"[WeChatPlugin][RevokeHook] MessageRevokeMgr class not found!");
    } else {
        hookLog(@"[WeChatPlugin][RevokeHook] MessageRevokeMgr found: %@", cls);

        IMP imp1 = [HookEngine swizzleMethod:NSSelectorFromString(@"onRevokeMsg:") inClass:cls withIMP:(IMP)replaced_onRevokeMsg];
        if (imp1) {
            orig_onRevokeMsg = imp1;
            hookLog(@"[WeChatPlugin][RevokeHook] ✓ onRevokeMsg: hooked (MessageRevokeMgr)");
        } else {
            hookLog(@"[WeChatPlugin][RevokeHook] ✗ onRevokeMsg: hook failed (MessageRevokeMgr)");
        }

        IMP imp2 = [HookEngine swizzleMethod:NSSelectorFromString(@"replaceRevokedMsg:") inClass:cls withIMP:(IMP)replaced_replaceRevokedMsg];
        if (imp2) {
            orig_replaceRevokedMsg = imp2;
            hookLog(@"[WeChatPlugin][RevokeHook] ✓ replaceRevokedMsg: hooked");
        } else {
            hookLog(@"[WeChatPlugin][RevokeHook] ✗ replaceRevokedMsg: hook failed");
        }

        IMP imp3 = [HookEngine swizzleMethod:NSSelectorFromString(@"deleteLocalProcessRevokeMsgWithToast:") inClass:cls withIMP:(IMP)replaced_deleteLocalProcessRevokeMsgWithToast];
        if (imp3) {
            orig_deleteLocalProcessRevokeMsgWithToast = imp3;
            hookLog(@"[WeChatPlugin][RevokeHook] ✓ deleteLocalProcessRevokeMsgWithToast: hooked");
        } else {
            hookLog(@"[WeChatPlugin][RevokeHook] ✗ deleteLocalProcessRevokeMsgWithToast: hook failed");
        }
    }
    
    Class cmsgCls = objc_getClass("CMessageMgr");
    if (cmsgCls) {
        hookLog(@"[WeChatPlugin][RevokeHook] CMessageMgr found: %@", cmsgCls);
        IMP imp4 = [HookEngine swizzleMethod:NSSelectorFromString(@"onRevokeMsg:") inClass:cmsgCls withIMP:(IMP)replaced_onRevokeMsg_CMessageMgr];
        if (imp4) {
            orig_onRevokeMsg_CMessageMgr = imp4;
            hookLog(@"[WeChatPlugin][RevokeHook] ✓ onRevokeMsg: hooked (CMessageMgr)");
        } else {
            hookLog(@"[WeChatPlugin][RevokeHook] ✗ onRevokeMsg: hook failed (CMessageMgr)");
        }
        
        IMP imp5 = [HookEngine swizzleMethod:NSSelectorFromString(@"onNewSyncNotAddDBMessage:") inClass:cmsgCls withIMP:(IMP)replaced_onNewSyncNotAddDBMessage];
        if (imp5) {
            orig_onNewSyncNotAddDBMessage = imp5;
            hookLog(@"[WeChatPlugin][RevokeHook] ✓ onNewSyncNotAddDBMessage: hooked (CMessageMgr)");
        } else {
            hookLog(@"[WeChatPlugin][RevokeHook] ✗ onNewSyncNotAddDBMessage: hook failed (CMessageMgr)");
        }
    } else {
        hookLog(@"[WeChatPlugin][RevokeHook] CMessageMgr class not found!");
    }
    
    hookLog(@"[WeChatPlugin][RevokeHook] install complete");
}

@end
