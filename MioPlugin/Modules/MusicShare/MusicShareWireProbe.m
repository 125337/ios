#import "MusicShareWireProbe.h"
#import "../../Core/LogManager.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <substrate.h>

static IMP orig_wp_AddMsg = NULL;
static IMP orig_wp_AddLocalMsg = NULL;

// 安全读字段：必须走 KVC（valueForKey 自动装箱 BOOL/uint 等原始类型；
// 直接 objc_msgSend 调原始类型 getter 返回野指针，%@ 格式化必崩——旧探针踩过的坑）
static id wpField(id wrap, NSString *name) {
    @try {
        return [wrap valueForKey:name];
    } @catch (NSException *e) { return nil; }
}

static void wpDump(id session, id wrap, NSString *via) {
    @try {
        if (!wrap) return;
        id typeObj = wpField(wrap, @"m_uiMessageType");
        long long t = [typeObj respondsToSelector:@selector(longLongValue)] ? [typeObj longLongValue] : -1;
        if (t != 49 && t != 34) return;  // 只关注卡片/语音
        WPLog(@"WireProbe", @"[%@] type=%lld session=%@", via, t, session);
        WPLog(@"WireProbe", @"  from=%@ to=%@ sender=%@ status=%@ flag=%@",
              wpField(wrap, @"m_nsFromUsr"), wpField(wrap, @"m_nsToUsr"),
              wpField(wrap, @"m_bIsSender"), wpField(wrap, @"m_uiStatus"), wpField(wrap, @"m_uiMsgFlag"));
        WPLog(@"WireProbe", @"  msgSource=%@ dataUrl=%@ musicInfo=%@ realChatUsr=%@ createTime=%@ localID=%@ svrID=%@",
              wpField(wrap, @"m_nsMsgSource"), wpField(wrap, @"m_nsDataUrl"),
              wpField(wrap, @"m_musicInfo"), wpField(wrap, @"m_nsRealChatUsr"),
              wpField(wrap, @"m_uiCreateTime"), wpField(wrap, @"m_uiMesLocalID"),
              wpField(wrap, @"m_n64MesSvrID"));

        // wrap 全部 ivar 值（原生听一听抓包：一次抓全，和我们的发送逐值对比）
        unsigned int count = 0;
        Class c = object_getClass(wrap);
        Ivar *list = class_copyIvarList(c, &count);
        NSMutableString *all = [NSMutableString string];
        for (unsigned int i = 0; i < count; i++) {
            NSString *name = @(ivar_getName(list[i]));
            if (!name) continue;
            id v = nil;
            @try { v = [wrap valueForKey:name]; } @catch (NSException *e) {}
            if (v == nil) continue;
            NSString *desc = [v description];
            if (desc.length > 80) desc = [[desc substringToIndex:80] stringByAppendingString:@"…"];
            [all appendFormat:@"\n    %@ = %@", name, desc];
        }
        free(list);
        WPLog(@"WireProbe", @"  [all ivars]%@", all);

        // content 全文（分块，原生 XML 模板是本次抓包核心）
        id contentObj = wpField(wrap, @"m_nsContent");
        NSString *content = [contentObj isKindOfClass:[NSString class]] ? contentObj : nil;
        WPLog(@"WireProbe", @"  content(%lu)全文:", (unsigned long)content.length);
        for (NSUInteger off = 0; off < content.length; off += 600) {
            NSUInteger len = MIN((NSUInteger)600, content.length - off);
            WPLog(@"WireProbe", @"  [C%lu/%lu] %@", (unsigned long)(off / 600 + 1),
                  (unsigned long)((content.length + 599) / 600), [content substringWithRange:NSMakeRange(off, len)]);
        }
    } @catch (NSException *e) {
        WPLog(@"WireProbe", @"dump异常: %@", e);
    }
}

static void repl_wp_AddMsg(id self, SEL _cmd, id session, id wrap) {
    wpDump(session, wrap, @"AddMsg");
    ((void (*)(id, SEL, id, id))orig_wp_AddMsg)(self, _cmd, session, wrap);
}

static void repl_wp_AddLocalMsg(id self, SEL _cmd, id session, id wrap) {
    wpDump(session, wrap, @"AddLocalMsg");
    ((void (*)(id, SEL, id, id))orig_wp_AddLocalMsg)(self, _cmd, session, wrap);
}

// ===== 后续链路探针：AddLocalMsg 只是入库，真正触发网络发送的后续调用才是黄白能发出去的关键 =====
static IMP orig_wp_ResendMsg = NULL;
static IMP orig_wp_ResendVoiceMsg = NULL;
static IMP orig_wp_AddLocalMsg4 = NULL;
static IMP orig_wp_SendMsgAsync = NULL;

static void wpSeq(NSString *via, id arg1, id wrap) {
    @try {
        if (!wrap) { WPLog(@"WireProbe", @"[SEQ] %@ arg1=%@ wrap=nil", via, arg1); return; }
        id typeObj = wpField(wrap, @"m_uiMessageType");
        long long t = [typeObj respondsToSelector:@selector(longLongValue)] ? [typeObj longLongValue] : -1;
        id to = wpField(wrap, @"m_nsToUsr");
        WPLog(@"WireProbe", @"[SEQ] %@ type=%lld to=%@ title=%@ localID=%@", via, t, to,
              wpField(wrap, @"m_nsTitle"), wpField(wrap, @"m_uiMesLocalID"));
    } @catch (NSException *e) {}
}

static void repl_wp_ResendMsg(id self, SEL _cmd, id session, id wrap) {
    wpSeq(@"ResendMsg", session, wrap);
    ((void (*)(id, SEL, id, id))orig_wp_ResendMsg)(self, _cmd, session, wrap);
}

static void repl_wp_ResendVoiceMsg(id self, SEL _cmd, id session, id wrap) {
    wpSeq(@"ResendVoiceMsg", session, wrap);
    ((void (*)(id, SEL, id, id))orig_wp_ResendVoiceMsg)(self, _cmd, session, wrap);
}

static void repl_wp_AddLocalMsg4(id self, SEL _cmd, id session, id wrap, BOOL fixTime, BOOL notify) {
    wpSeq(@"AddLocalMsg4arg", session, wrap);
    ((void (*)(id, SEL, id, id, BOOL, BOOL))orig_wp_AddLocalMsg4)(self, _cmd, session, wrap, fixTime, notify);
}

static void repl_wp_SendMsgAsync(id self, SEL _cmd) {
    WPLog(@"WireProbe", @"[SEQ] SendMsgAsync");
    ((void (*)(id, SEL))orig_wp_SendMsgAsync)(self, _cmd);
}

@implementation MusicShareWireProbe

+ (void)install {
    Class cls = objc_getClass("CMessageMgr");
    if (!cls) { WPLog(@"WireProbe", @"CMessageMgr not found"); return; }
    MSHookMessageEx(cls, NSSelectorFromString(@"AddMsg:MsgWrap:"),
                    (IMP)repl_wp_AddMsg, (IMP *)&orig_wp_AddMsg);
    MSHookMessageEx(cls, NSSelectorFromString(@"AddLocalMsg:MsgWrap:"),
                    (IMP)repl_wp_AddLocalMsg, (IMP *)&orig_wp_AddLocalMsg);
    // 后续链路（黄白 AddLocalMsg 之后还有哪些调用，决定我们能不能复刻整条序列）
    SEL resendMsgSel = NSSelectorFromString(@"ResendMsg:MsgWrap:");
    if ([cls instancesRespondToSelector:resendMsgSel])
        MSHookMessageEx(cls, resendMsgSel, (IMP)repl_wp_ResendMsg, (IMP *)&orig_wp_ResendMsg);
    SEL resendVoiceSel = NSSelectorFromString(@"ResendVoiceMsg:");
    if ([cls instancesRespondToSelector:resendVoiceSel])
        MSHookMessageEx(cls, resendVoiceSel, (IMP)repl_wp_ResendVoiceMsg, (IMP *)&orig_wp_ResendVoiceMsg);
    SEL addLocal4Sel = NSSelectorFromString(@"AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:");
    if ([cls instancesRespondToSelector:addLocal4Sel])
        MSHookMessageEx(cls, addLocal4Sel, (IMP)repl_wp_AddLocalMsg4, (IMP *)&orig_wp_AddLocalMsg4);
    SEL sendAsyncSel = NSSelectorFromString(@"SendMsgAsync");
    if ([cls instancesRespondToSelector:sendAsyncSel])
        MSHookMessageEx(cls, sendAsyncSel, (IMP)repl_wp_SendMsgAsync, (IMP *)&orig_wp_SendMsgAsync);
    WPLog(@"WireProbe", @"[+] wire 探针已挂载（AddMsg/AddLocalMsg + Resend族/4参变体/SendMsgAsync 序列追踪）");
}

@end
