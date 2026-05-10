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
static IMP orig_PostInsertParsedXmlSysMsg = NULL;

static BOOL g_hookPostInsertVerified = NO;
static BOOL g_hookOnRevokeVerified = NO;
static BOOL g_hookOnRevokeMgrVerified = NO;
static BOOL g_hookReplaceVerified = NO;
static BOOL g_hookDeleteVerified = NO;

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

static id getService(Class serviceClass) {
    Class MMServiceCenterClass = objc_getClass("MMServiceCenter");
    if (!MMServiceCenterClass) return nil;
    SEL dcSel = NSSelectorFromString(@"defaultCenter");
    if (![MMServiceCenterClass respondsToSelector:dcSel]) return nil;
    id center = ((id (*)(id, SEL))objc_msgSend)(MMServiceCenterClass, dcSel);
    if (!center) return nil;
    SEL gsSel = NSSelectorFromString(@"getService:");
    if (![center respondsToSelector:gsSel]) return nil;
    return ((id (*)(id, SEL, Class))objc_msgSend)(center, gsSel, serviceClass);
}

static void proactiveDeleteRevokeSysMsg(NSString *session, long long n64SvrID) {
    if (!session.length || n64SvrID <= 0) return;
    @try {
        id messageMgr = getService(objc_getClass("CMessageMgr"));
        if (!messageMgr) return;
        
        SEL getMsgSel = NSSelectorFromString(@"GetMsg:n64SvrID:");
        if (![messageMgr respondsToSelector:getMsgSel]) return;
        
        id sysMsgWrap = ((id (*)(id, SEL, id, long long))objc_msgSend)(messageMgr, getMsgSel, session, n64SvrID);
        if (!sysMsgWrap) return;
        
        SEL localIdSel = NSSelectorFromString(@"m_uiMesLocalID");
        if (![sysMsgWrap respondsToSelector:localIdSel]) return;
        unsigned int localId = ((unsigned int (*)(id, SEL))objc_msgSend)(sysMsgWrap, localIdSel);
        if (localId == 0) return;
        
        NSArray *msgList = @[@(localId)];
        
        SEL delMsgSel = NSSelectorFromString(@"DelMsg:MsgList:");
        if ([messageMgr respondsToSelector:delMsgSel]) {
            ((void (*)(id, SEL, id, id))objc_msgSend)(messageMgr, delMsgSel, session, msgList);
            hookLog(@"[WeChatPlugin][Revoke] proactively deleted revoke sysMsg, localId=%u", localId);
            return;
        }
        
        SEL delMsgDelAllSel = NSSelectorFromString(@"DelMsg:MsgList:DelAll:");
        if ([messageMgr respondsToSelector:delMsgDelAllSel]) {
            ((void (*)(id, SEL, id, id, BOOL))objc_msgSend)(messageMgr, delMsgDelAllSel, session, msgList, NO);
            hookLog(@"[WeChatPlugin][Revoke] proactively deleted revoke sysMsg (DelAll), localId=%u", localId);
        }
    } @catch (NSException *e) {
        hookLog(@"[WeChatPlugin][Revoke] proactiveDeleteRevokeSysMsg exception: %@", e);
    }
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

static void replaced_PostInsertParsedXmlSysMsg(id self, SEL _cmd, id parsedXml, id chatName) {
    hookLog(@"[WeChatPlugin][Revoke] PostInsertParsedXmlSysMsg called, chatName=%@", chatName);
    
    if (![PluginConfig shared].preventRecall) {
        if (orig_PostInsertParsedXmlSysMsg)
            ((void (*)(id, SEL, id, id))orig_PostInsertParsedXmlSysMsg)(self, _cmd, parsedXml, chatName);
        return;
    }
    
    @try {
        NSString *xmlStr = [parsedXml isKindOfClass:[NSString class]] ? parsedXml : nil;
        NSString *cName = [chatName isKindOfClass:[NSString class]] ? chatName : nil;
        
        if (xmlStr && [xmlStr rangeOfString:@"<revokemsg>"].location != NSNotFound) {
            hookLog(@"[WeChatPlugin][Revoke] *** detected revoke at PostInsertParsedXmlSysMsg (EARLIEST HOOK) *** blocking original flow");
            
            BOOL handled = [[RevokeHandler shared] handleRevokeFromXmlSysMsg:xmlStr chatName:cName];
            if (handled) {
                hookLog(@"[WeChatPlugin][Revoke] revoke BLOCKED at PostInsertParsedXmlSysMsg - message preserved!");
                return;
            }
        }
    } @catch (NSException *e) {
        hookLog(@"[WeChatPlugin][Revoke] PostInsertParsedXmlSysMsg exception: %@", e);
    }
    
    if (orig_PostInsertParsedXmlSysMsg)
        ((void (*)(id, SEL, id, id))orig_PostInsertParsedXmlSysMsg)(self, _cmd, parsedXml, chatName);
}

@implementation RevokeHook

+ (void)install {
    hookLog(@"[WeChatPlugin][RevokeHook] install start");
    
    Class msgMgrCls = objc_getClass("CMessageMgr");
    if (!msgMgrCls) {
        hookLog(@"[WeChatPlugin][RevokeHook] CMessageMgr class not found!");
    } else {
        hookLog(@"[WeChatPlugin][RevokeHook] CMessageMgr found: %@", msgMgrCls);
        
        IMP imp1 = [HookEngine swizzleMethod:NSSelectorFromString(@"onRevokeMsg:") inClass:msgMgrCls withIMP:(IMP)replaced_onRevokeMsg_CMessageMgr];
        if (imp1) {
            orig_onRevokeMsg_CMessageMgr = imp1;
            hookLog(@"[WeChatPlugin][RevokeHook] ✓ onRevokeMsg: hooked (CMessageMgr)");
        } else {
            hookLog(@"[WeChatPlugin][RevokeHook] ✗ onRevokeMsg: hook failed (CMessageMgr) — optional, MessageRevokeMgr will handle");
        }
        
        IMP imp2 = [HookEngine swizzleMethod:NSSelectorFromString(@"onNewSyncNotAddDBMessage:") inClass:msgMgrCls withIMP:(IMP)replaced_onNewSyncNotAddDBMessage];
        if (imp2) {
            orig_onNewSyncNotAddDBMessage = imp2;
            hookLog(@"[WeChatPlugin][RevokeHook] ✓ onNewSyncNotAddDBMessage: hooked (CMessageMgr)");
        } else {
            hookLog(@"[WeChatPlugin][RevokeHook] ✗ onNewSyncNotAddDBMessage: hook failed (CMessageMgr)");
        }
        
        IMP imp3 = [HookEngine swizzleMethod:NSSelectorFromString(@"PostInsertParsedXmlSysMsg:ChatName:") inClass:msgMgrCls withIMP:(IMP)replaced_PostInsertParsedXmlSysMsg];
        if (imp3) {
            orig_PostInsertParsedXmlSysMsg = imp3;
            hookLog(@"[WeChatPlugin][RevokeHook] ✓ PostInsertParsedXmlSysMsg:ChatName: hooked (CMessageMgr) ★ EARLIEST HOOK");
        } else {
            hookLog(@"[WeChatPlugin][RevokeHook] ✗ PostInsertParsedXmlSysMsg:ChatName: hook failed (method may not exist in this WeChat version)");
        }
    }
    
    Class revokeCls = objc_getClass("MessageRevokeMgr");
    if (!revokeCls) {
        hookLog(@"[WeChatPlugin][RevokeHook] MessageRevokeMgr class not found!");
    } else {
        hookLog(@"[WeChatPlugin][RevokeHook] MessageRevokeMgr found: %@", revokeCls);
        
        IMP imp4 = [HookEngine swizzleMethod:NSSelectorFromString(@"onRevokeMsg:") inClass:revokeCls withIMP:(IMP)replaced_onRevokeMsg];
        if (imp4) {
            orig_onRevokeMsg = imp4;
            hookLog(@"[WeChatPlugin][RevokeHook] ✓ onRevokeMsg: hooked (MessageRevokeMgr)");
        } else {
            hookLog(@"[WeChatPlugin][RevokeHook] ✗ onRevokeMsg: hook failed (MessageRevokeMgr)");
        }
        
        IMP imp5 = [HookEngine swizzleMethod:NSSelectorFromString(@"replaceRevokedMsg:") inClass:revokeCls withIMP:(IMP)replaced_replaceRevokedMsg];
        if (imp5) {
            orig_replaceRevokedMsg = imp5;
            hookLog(@"[WeChatPlugin][RevokeHook] ✓ replaceRevokedMsg: hooked");
        } else {
            hookLog(@"[WeChatPlugin][RevokeHook] ✗ replaceRevokedMsg: hook failed");
        }
        
        IMP imp6 = [HookEngine swizzleMethod:NSSelectorFromString(@"deleteLocalProcessRevokeMsgWithToast:") inClass:revokeCls withIMP:(IMP)replaced_deleteLocalProcessRevokeMsgWithToast];
        if (imp6) {
            orig_deleteLocalProcessRevokeMsgWithToast = imp6;
            hookLog(@"[WeChatPlugin][RevokeHook] ✓ deleteLocalProcessRevokeMsgWithToast: hooked");
        } else {
            hookLog(@"[WeChatPlugin][RevokeHook] ✗ deleteLocalProcessRevokeMsgWithToast: hook failed");
        }
    }
    
    [self markHookVerified];
    hookLog(@"[WeChatPlugin][RevokeHook] install complete");
}

+ (void)markHookVerified {
    g_hookPostInsertVerified = (orig_PostInsertParsedXmlSysMsg != NULL);
    g_hookOnRevokeVerified = (orig_onRevokeMsg_CMessageMgr != NULL);
    g_hookOnRevokeMgrVerified = (orig_onRevokeMsg != NULL);
    g_hookReplaceVerified = (orig_replaceRevokedMsg != NULL);
    g_hookDeleteVerified = (orig_deleteLocalProcessRevokeMsgWithToast != NULL);
    
    NSInteger successCount = (orig_PostInsertParsedXmlSysMsg != NULL)
                           + (orig_onRevokeMsg != NULL)
                           + (orig_onNewSyncNotAddDBMessage != NULL)
                           + (orig_replaceRevokedMsg != NULL)
                           + (orig_deleteLocalProcessRevokeMsgWithToast != NULL);
    hookLog(@"[WeChatPlugin][RevokeHook] hooks summary: %ld/5 core hooks installed", (long)successCount);
}

+ (BOOL)checkHookWithSeq:(int)seq {
    BOOL allOK = YES;
    
    if (g_hookPostInsertVerified && orig_PostInsertParsedXmlSysMsg) {
        Class cls = objc_getClass("CMessageMgr");
        if (cls) {
            Method m = class_getInstanceMethod(cls, NSSelectorFromString(@"PostInsertParsedXmlSysMsg:ChatName:"));
            if (m) {
                IMP currentIMP = method_getImplementation(m);
                IMP ourIMP = (IMP)replaced_PostInsertParsedXmlSysMsg;
                if (currentIMP != ourIMP) {
                    hookLog(@"[WeChatPlugin][RevokeHook][checkHook:%d] ✗ PostInsertParsedXmlSysMsg IMP changed! restoring...", seq);
                    method_setImplementation(m, ourIMP);
                    allOK = NO;
                }
            }
        }
    }
    
    if (g_hookOnRevokeVerified && orig_onRevokeMsg_CMessageMgr) {
        Class cls = objc_getClass("CMessageMgr");
        if (cls) {
            Method m = class_getInstanceMethod(cls, NSSelectorFromString(@"onRevokeMsg:"));
            if (m && method_getImplementation(m) != (IMP)replaced_onRevokeMsg_CMessageMgr) {
                hookLog(@"[WeChatPlugin][RevokeHook][checkHook:%d] ✗ onRevokeMsg (CMessageMgr) IMP changed! restoring...", seq);
                method_setImplementation(m, (IMP)replaced_onRevokeMsg_CMessageMgr);
                allOK = NO;
            }
        }
    }
    
    if (g_hookOnRevokeMgrVerified && orig_onRevokeMsg) {
        Class cls = objc_getClass("MessageRevokeMgr");
        if (cls) {
            Method m = class_getInstanceMethod(cls, NSSelectorFromString(@"onRevokeMsg:"));
            if (m && method_getImplementation(m) != (IMP)replaced_onRevokeMsg) {
                hookLog(@"[WeChatPlugin][RevokeHook][checkHook:%d] ✗ onRevokeMsg (MessageRevokeMgr) IMP changed! restoring...", seq);
                method_setImplementation(m, (IMP)replaced_onRevokeMsg);
                allOK = NO;
            }
        }
    }
    
    if (g_hookReplaceVerified && orig_replaceRevokedMsg) {
        Class cls = objc_getClass("MessageRevokeMgr");
        if (cls) {
            Method m = class_getInstanceMethod(cls, NSSelectorFromString(@"replaceRevokedMsg:"));
            if (m && method_getImplementation(m) != (IMP)replaced_replaceRevokedMsg) {
                hookLog(@"[WeChatPlugin][RevokeHook][checkHook:%d] ✗ replaceRevokedMsg IMP changed! restoring...", seq);
                method_setImplementation(m, (IMP)replaced_replaceRevokedMsg);
                allOK = NO;
            }
        }
    }
    
    if (g_hookDeleteVerified && orig_deleteLocalProcessRevokeMsgWithToast) {
        Class cls = objc_getClass("MessageRevokeMgr");
        if (cls) {
            Method m = class_getInstanceMethod(cls, NSSelectorFromString(@"deleteLocalProcessRevokeMsgWithToast:"));
            if (m && method_getImplementation(m) != (IMP)replaced_deleteLocalProcessRevokeMsgWithToast) {
                hookLog(@"[WeChatPlugin][RevokeHook][checkHook:%d] ✗ deleteLocalProcessRevokeMsgWithToast IMP changed! restoring...", seq);
                method_setImplementation(m, (IMP)replaced_deleteLocalProcessRevokeMsgWithToast);
                allOK = NO;
            }
        }
    }
    
    if (allOK) {
        hookLog(@"[WeChatPlugin][RevokeHook][checkHook:%d] ✓ all hooks verified OK", seq);
    }
    return allOK;
}

+ (BOOL)checkHook {
    return [self checkHookWithSeq:0];
}

@end