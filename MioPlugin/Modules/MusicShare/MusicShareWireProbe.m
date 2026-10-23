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
    // 调用栈回溯：区分黄白/原生 UI/我们 的调用上下文
    @try {
        NSArray *bt = [NSThread callStackSymbols];
        NSMutableString *s = [NSMutableString string];
        NSUInteger n = MIN((NSUInteger)10, bt.count);
        for (NSUInteger i = 1; i < n; i++) {   // 跳过第 0 帧（本函数）
            NSString *line = bt[i];
            NSRange r = [line rangeOfString:@"0x" options:NSBackwardsSearch];
            NSString *tail = r.location != NSNotFound && line.length - r.location < 40
                ? [line substringFromIndex:r.location] : line;
            [s appendFormat:@"\n    #%lu %@", (unsigned long)i, tail];
        }
        WPLog(@"WireProbe", @"[BT] AddLocalMsg 调用栈:%@", s);
    } @catch (NSException *e) {}
    ((void (*)(id, SEL, id, id))orig_wp_AddLocalMsg)(self, _cmd, session, wrap);
    // 返回后补查：AddLocalMsg 是否给 localID 赋值（没赋=它只认预插入的行，我们缺的就是这步）
    WPLog(@"WireProbe", @"[SEQ] AddLocalMsg 返回后 localID=%@ svrID=%@", wpField(wrap, @"m_uiMesLocalID"), wpField(wrap, @"m_n64MesSvrID"));
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

// 旁路发送 + 发送器回调（AddLocalMsg 之后真正出网的嫌疑跳）
static IMP orig_wp_SendBypass = NULL;
static IMP orig_wp_SentBySender = NULL;
static IMP orig_wp_VoiceErr = NULL;

static void repl_wp_SendBypass(id self, SEL _cmd, id wrap) {
    WPLog(@"WireProbe", @"[SEQ] sendBypassMsg: type=%@ to=%@ localID=%@ content前60=%@",
          wpField(wrap, @"m_uiMessageType"), wpField(wrap, @"m_nsToUsr"),
          wpField(wrap, @"m_uiMesLocalID"),
          [wpField(wrap, @"m_nsContent") substringToIndex:MIN((NSUInteger)60, [(NSString *)wpField(wrap, @"m_nsContent") length])]);
    ((void (*)(id, SEL, id))orig_wp_SendBypass)(self, _cmd, wrap);
}

static void repl_wp_SentBySender(id self, SEL _cmd, id wrap) {
    WPLog(@"WireProbe", @"[VERDICT] OnMessageSentBySender type=%@ to=%@", wpField(wrap, @"m_uiMessageType"), wpField(wrap, @"m_nsToUsr"));
    ((void (*)(id, SEL, id))orig_wp_SentBySender)(self, _cmd, wrap);
}

static void repl_wp_VoiceErr(id self, SEL _cmd, id a, id wrap, long long errNo) {
    WPLog(@"WireProbe", @"[VERDICT] AsyncOnSendVoiceError err=%lld wrapType=%@", errNo, wpField(wrap, @"m_uiMessageType"));
    ((void (*)(id, SEL, id, id, long long))orig_wp_VoiceErr)(self, _cmd, a, wrap, errNo);
}

// 发送裁决回调：卡消息卡住时，这里会给出管线的判决和错误码
static IMP orig_wp_SendOK = NULL;
static IMP orig_wp_SendFail = NULL;
static IMP orig_wp_ErrBySender = NULL;

static void repl_wp_SendOK(id self, SEL _cmd, id wrap) {
    WPLog(@"WireProbe", @"[VERDICT] OnSendMessageSuccess type=%@ to=%@ title=%@",
          wpField(wrap, @"m_uiMessageType"), wpField(wrap, @"m_nsToUsr"), wpField(wrap, @"m_nsTitle"));
    ((void (*)(id, SEL, id))orig_wp_SendOK)(self, _cmd, wrap);
}

static void repl_wp_SendFail(id self, SEL _cmd, id wrap) {
    WPLog(@"WireProbe", @"[VERDICT] OnSendMessageFail type=%@ to=%@ title=%@ retCode=%@",
          wpField(wrap, @"m_uiMessageType"), wpField(wrap, @"m_nsToUsr"),
          wpField(wrap, @"m_nsTitle"), wpField(wrap, @"sendFailRetCode"));
    ((void (*)(id, SEL, id))orig_wp_SendFail)(self, _cmd, wrap);
}

static void repl_wp_ErrBySender(id self, SEL _cmd, id arg1, long long errno_) {
    WPLog(@"WireProbe", @"[VERDICT] OnErrorBySender err=%lld arg1=%@", errno_, arg1);
    ((void (*)(id, SEL, id, long long))orig_wp_ErrBySender)(self, _cmd, arg1, errno_);
}

// 数据库层预插入（黄白先把消息写进 DB 拿到行号，再走 AddLocalMsg 入队——钩这一层抓现行）
static IMP orig_wp_DBAddMsg = NULL;
static IMP orig_wp_DBAddMsgFixed = NULL;

static void repl_wp_DBAddMsg(id self, SEL _cmd, id a1, id a2) {
    id wrap = [a2 respondsToSelector:NSSelectorFromString(@"m_uiMessageType")] ? a2
            : ([a1 respondsToSelector:NSSelectorFromString(@"m_uiMessageType")] ? a1 : nil);
    WPLog(@"WireProbe", @"[DB] CMessageDB AddMsg:MsgWrap: a1=%@ a2wrapType=%@ localID=%@",
          [a1 isKindOfClass:[NSString class]] ? a1 : NSStringFromClass([a1 class]),
          wpField(wrap, @"m_uiMessageType"), wpField(wrap, @"m_uiMesLocalID"));
    ((void (*)(id, SEL, id, id))orig_wp_DBAddMsg)(self, _cmd, a1, a2);
    if (wrap) WPLog(@"WireProbe", @"[DB] 插入后 localID=%@", wpField(wrap, @"m_uiMesLocalID"));
}

static void repl_wp_DBAddMsgFixed(id self, SEL _cmd, id a1, id a2, BOOL fixTime) {
    id wrap = [a2 respondsToSelector:NSSelectorFromString(@"m_uiMessageType")] ? a2
            : ([a1 respondsToSelector:NSSelectorFromString(@"m_uiMessageType")] ? a1 : nil);
    WPLog(@"WireProbe", @"[DB] CMessageDB AddMsg:withTimeFixed:%d a1=%@ a2wrapType=%@ localID=%@",
          fixTime, [a1 isKindOfClass:[NSString class]] ? a1 : NSStringFromClass([a1 class]),
          wpField(wrap, @"m_uiMessageType"), wpField(wrap, @"m_uiMesLocalID"));
    ((void (*)(id, SEL, id, id, BOOL))orig_wp_DBAddMsgFixed)(self, _cmd, a1, a2, fixTime);
    if (wrap) WPLog(@"WireProbe", @"[DB] 插入后 localID=%@", wpField(wrap, @"m_uiMesLocalID"));
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
    // 发送裁决回调
    SEL sendOkSel = NSSelectorFromString(@"OnSendMessageSuccess:");
    if ([cls instancesRespondToSelector:sendOkSel])
        MSHookMessageEx(cls, sendOkSel, (IMP)repl_wp_SendOK, (IMP *)&orig_wp_SendOK);
    SEL sendFailSel = NSSelectorFromString(@"OnSendMessageFail:");
    if ([cls instancesRespondToSelector:sendFailSel])
        MSHookMessageEx(cls, sendFailSel, (IMP)repl_wp_SendFail, (IMP *)&orig_wp_SendFail);
    SEL errSenderSel = NSSelectorFromString(@"OnErrorBySender:ErrNo:");
    if ([cls instancesRespondToSelector:errSenderSel])
        MSHookMessageEx(cls, errSenderSel, (IMP)repl_wp_ErrBySender, (IMP *)&orig_wp_ErrBySender);
    // 旁路发送 + 发送器回调
    SEL bypassSel = NSSelectorFromString(@"sendBypassMsg:");
    if ([cls instancesRespondToSelector:bypassSel])
        MSHookMessageEx(cls, bypassSel, (IMP)repl_wp_SendBypass, (IMP *)&orig_wp_SendBypass);
    SEL bySenderSel = NSSelectorFromString(@"OnMessageSentBySender:");
    if ([cls instancesRespondToSelector:bySenderSel])
        MSHookMessageEx(cls, bySenderSel, (IMP)repl_wp_SentBySender, (IMP *)&orig_wp_SentBySender);
    SEL voiceErrSel = NSSelectorFromString(@"AsyncOnSendVoiceError:MsgWrap:ErroNO:");
    if ([cls instancesRespondToSelector:voiceErrSel])
        MSHookMessageEx(cls, voiceErrSel, (IMP)repl_wp_VoiceErr, (IMP *)&orig_wp_VoiceErr);
    // 数据库层预插入钩子（黄白: 先 CMessageDB 插入拿行号，再 AddLocalMsg 入队）
    Class dbCls = objc_getClass("CMessageDB");
    if (dbCls) {
        SEL dbAddSel = NSSelectorFromString(@"AddMsg:MsgWrap:");
        if ([dbCls instancesRespondToSelector:dbAddSel])
            MSHookMessageEx(dbCls, dbAddSel, (IMP)repl_wp_DBAddMsg, (IMP *)&orig_wp_DBAddMsg);
        SEL dbAddFixedSel = NSSelectorFromString(@"AddMsg:MsgWrap:withTimeFixed:");
        if ([dbCls instancesRespondToSelector:dbAddFixedSel])
            MSHookMessageEx(dbCls, dbAddFixedSel, (IMP)repl_wp_DBAddMsgFixed, (IMP *)&orig_wp_DBAddMsgFixed);
        WPLog(@"WireProbe", @"[+] CMessageDB 插入层钩子已挂载");
    }
    WPLog(@"WireProbe", @"[+] wire 探针已挂载（AddMsg/AddLocalMsg + Resend族/4参变体/SendMsgAsync 序列追踪）");

    // 方法菜单：把发送/localID 相关的候选接口全部列出来（找黄白预分配 localID 用的接口）
    NSArray *menuClasses = @[@"CMessageMgr", @"CMessageDB", @"CMessageWrap"];
    NSRegularExpression *pat = [NSRegularExpression regularExpressionWithPattern:@"(?i)(local|resend|send|sync|insert|newmsg|addmsg)"
                                                                        options:0 error:nil];
    for (NSString *cn in menuClasses) {
        Class c = objc_getClass(cn.UTF8String);
        if (!c) continue;
        unsigned int n = 0;
        Method *list = class_copyMethodList(c, &n);
        NSMutableString *out = [NSMutableString string];
        for (unsigned int i = 0; i < n; i++) {
            NSString *name = NSStringFromSelector(method_getName(list[i]));
            if ([pat firstMatchInString:name options:0 range:NSMakeRange(0, name.length)]) {
                [out appendFormat:@"%@ ", name];
            }
        }
        if (list) free(list);
        WPLog(@"WireProbe", @"[%@ 方法菜单] %@", cn, out);
    }
}

@end
