#import "MusicShareProbe.h"
#import "../../Core/LogManager.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <substrate.h>

// 临时全量探针：一次挂载所有消息入口 + 元数据 setter + 黄白自有发送链，
// 实证黄白「音乐语音消息」(type=34) 的元数据字段归属。实证完成后整体移除。
//
// 覆盖面：
//   A. CMessageMgr 消息管道（红包含钩验证过命中的 5 个 + 本地/重发族 4 个）
//   B. CMessageWrap 的 setM_musicInfo: / setM_nsDataUrl: setter（谁在塞元数据）
//   C. 黄白自有类 HBHelperUtil/HBAutoSendTaskManager 的发送链（延迟重试挂载，
//      因黄白 dylib 可能晚于 Mio 加载；类是 class_addMethod 动态注入故静态查不到）

#pragma mark - 工具

static NSString *mspTrunc(id v, NSUInteger n) {
    if (!v) return nil;
    NSString *desc = [v description];
    if ((NSUInteger)desc.length > n) desc = [[desc substringToIndex:n] stringByAppendingString:@"…(截断)"];
    return desc;
}

// KVC 安全探测：字段存在则返回值描述，不存在返回 nil
static NSString *probeField(id wrap, NSString *name) {
    @try {
        id v = [wrap valueForKey:name];
        if (v == nil) return nil;
        if ([v isKindOfClass:[NSData class]]) return [NSString stringWithFormat:@"NSData(%luB)", (unsigned long)[v length]];
        return mspTrunc(v, 600);
    } @catch (NSException *e) {
        return nil;   // 字段不存在（KVC 未定义）
    }
}

static long long mspType(id wrap) {
    @try {
        if (![wrap respondsToSelector:NSSelectorFromString(@"m_uiMessageType")]) return -1;
        return (long long)((unsigned int (*)(id, SEL, ...))objc_msgSend)(wrap, NSSelectorFromString(@"m_uiMessageType"));
    } @catch (NSException *e) { return -1; }
}

// 两个位置参数里挑出 CMessageWrap（2 参钩子里 wrap 可能在第 1 或第 2 位）
static id mspPickWrap(id a, id b) {
    SEL t = NSSelectorFromString(@"m_uiMessageType");
    if (a && [(id)a respondsToSelector:t]) return a;
    if (b && [(id)b respondsToSelector:t]) return b;
    return nil;
}

static NSMutableSet<NSString *> *_mspDumpedClasses = nil;

// 核心取证：routine 消息一行带过（确认钩子活性），type=34/49 全量 dump
static void mspOnHit(NSString *via, id wrap) {
    if (!wrap) return;
    long long type = mspType(wrap);
    NSString *from = probeField(wrap, @"m_nsFromUsr") ?: @"?";
    NSString *to = probeField(wrap, @"m_nsToUsr") ?: @"?";

    if (type != 34 && type != 49) {
        WPLogDebug(@"MusicProbe", @"[hit] %@ type=%lld from=%@ to=%@", via, type, from, to);
        return;
    }

    WPLog(@"MusicProbe", @"======== [MusicProbe] %@ type=%lld from=%@ to=%@", via, type, from, to);
    WPLog(@"MusicProbe", @"  m_nsContent = %@", probeField(wrap, @"m_nsContent") ?: @"(nil)");
    WPLog(@"MusicProbe", @"  m_nsMsgSource = %@", probeField(wrap, @"m_nsMsgSource") ?: @"(nil)");
    WPLog(@"MusicProbe", @"  m_nsMsgId = %@  m_uiMesLocalID = %@", probeField(wrap, @"m_nsMsgId") ?: @"?", probeField(wrap, @"m_uiMesLocalID") ?: @"?");
    WPLog(@"MusicProbe", @"  m_nsDataUrl = %@", probeField(wrap, @"m_nsDataUrl") ?: @"(nil)");
    WPLog(@"MusicProbe", @"  —— 音乐字段族（黄白文档 §1.2 selector 群）——");
    NSArray *fields = @[@"musicInfo", @"m_musicInfo", @"musicDataUrl", @"musicAppid", @"musicShareItem",
                        @"musicUrlToSilk", @"mvSingerName", @"musicNewEditWeiBaID",
                        @"voiceLength", @"m_i64VoiceLength", @"m_bIsSender", @"m_nsRealChatName"];
    for (NSString *f in fields) {
        NSString *v = probeField(wrap, f);
        if (v) WPLog(@"MusicProbe", @"  %@ = %@", f, v);
    }
    // wrap 全部 ivar 名（每个类只打一次），确认模型真实字段集
    NSString *clsName = NSStringFromClass(object_getClass(wrap));
    if (!_mspDumpedClasses) _mspDumpedClasses = [NSMutableSet set];
    if (![_mspDumpedClasses containsObject:clsName]) {
        [_mspDumpedClasses addObject:clsName];
        unsigned int count = 0;
        Ivar *list = class_copyIvarList(object_getClass(wrap), &count);
        NSMutableString *names = [NSMutableString string];
        for (unsigned int i = 0; i < count; i++) {
            const char *n = ivar_getName(list[i]);
            if (n) [names appendFormat:@"%s ", n];
        }
        free(list);
        WPLog(@"MusicProbe", @"  [%@ ivars] %@", clsName, names);
    }
    WPLog(@"MusicProbe", @"======== end [%@]", via);
}

#pragma mark - A. CMessageMgr 消息管道（共享 repl，按 _cmd 查各自 orig）

static NSMutableDictionary<NSString *, NSValue *> *_mspOrigs = nil;
static void mspSaveOrig(SEL sel, IMP imp) {
    if (!_mspOrigs) _mspOrigs = [NSMutableDictionary dictionary];
    _mspOrigs[NSStringFromSelector(sel)] = [NSValue valueWithPointer:imp];
}
static IMP mspOrigFor(SEL sel) {
    return (IMP)[[_mspOrigs objectForKey:NSStringFromSelector(sel)] pointerValue];
}

// 1 参：onNewSyncAddMessage: / onNewSyncNotAddDBMessage:
static void mspRepl1(id self, SEL _cmd, id a1) {
    ((void (*)(id, SEL, id))mspOrigFor(_cmd))(self, _cmd, a1);
    mspOnHit(NSStringFromSelector(_cmd), a1);
}
// 2 参：AddMsg:MsgWrap: / AsyncOnAddMsg:MsgWrap: / AddLocalMsg:MsgWrap: / AddRecordMsg:MsgWrap:
//       ResendMsg:MsgWrap: / ResendVoiceMsg: / addMessageLibWithWrap:withVC:(:WithVC:)
static void mspRepl2(id self, SEL _cmd, id a1, id a2) {
    ((void (*)(id, SEL, id, id))mspOrigFor(_cmd))(self, _cmd, a1, a2);
    mspOnHit(NSStringFromSelector(_cmd), mspPickWrap(a1, a2));
}
// 4 参：AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:（后两参按寄存器原样透传）
static void mspRepl4(id self, SEL _cmd, id a1, id a2, id a3, id a4) {
    ((void (*)(id, SEL, id, id, id, id))mspOrigFor(_cmd))(self, _cmd, a1, a2, a3, a4);
    mspOnHit(NSStringFromSelector(_cmd), mspPickWrap(a1, a2));
}

static void mspHookMgr(NSString *selName, void *repl) {
    Class cls = objc_getClass("CMessageMgr");
    SEL sel = NSSelectorFromString(selName);
    if (!cls || ![cls instancesRespondToSelector:sel]) {
        WPLog(@"MusicProbe", @"[-] %@ 不存在，跳过", selName);
        return;
    }
    IMP orig = NULL;
    MSHookMessageEx(cls, sel, (IMP)repl, &orig);
    mspSaveOrig(sel, orig);
    WPLog(@"MusicProbe", @"[+] %@ 已挂载", selName);
}

#pragma mark - B. CMessageWrap 元数据 setter

static void (*msp_o_setMusicInfo)(id, SEL, id);
static void (*msp_o_setDataUrl)(id, SEL, id);

static void mspRepl_setMusicInfo(id self, SEL _cmd, id v) {
    msp_o_setMusicInfo(self, _cmd, v);
    WPLog(@"MusicProbe", @"[setM_musicInfo] type=%lld value=%@", mspType(self), mspTrunc(v, 600) ?: @"(nil)");
}
static void mspRepl_setDataUrl(id self, SEL _cmd, id v) {
    msp_o_setDataUrl(self, _cmd, v);
    WPLog(@"MusicProbe", @"[setM_nsDataUrl] type=%lld value=%@", mspType(self), mspTrunc(v, 600) ?: @"(nil)");
}

static void mspHookWrapSetter(NSString *selName, void *repl, IMP *orig) {
    Class cls = objc_getClass("CMessageWrap");
    SEL sel = NSSelectorFromString(selName);
    if (!cls || ![cls instancesRespondToSelector:sel]) {
        WPLog(@"MusicProbe", @"[-] CMessageWrap %@ 不存在，跳过", selName);
        return;
    }
    MSHookMessageEx(cls, sel, (IMP)repl, orig);
    WPLog(@"MusicProbe", @"[+] CMessageWrap %@ 已挂载", selName);
}

#pragma mark - C. 黄白自有发送链（延迟重试挂载）

// sendSourceWrap:toUsername:error: (wrap, username, NSError**)
static void (*msp_o_sendSourceWrap)(id, SEL, id, id, id);
static void mspRepl_sendSourceWrap(id self, SEL _cmd, id wrap, id toUser, id err) {
    WPLog(@"MusicProbe", @"[HB sendSourceWrap:toUsername:error:] wrap=%@ toUser=%@",
          mspTrunc(wrap, 400) ?: @"(nil)", mspTrunc(toUser, 120) ?: @"(nil)");
    msp_o_sendSourceWrap(self, _cmd, wrap, toUser, err);
}
// voiceDataForSourceWrap: (wrap) -> id
static id (*msp_o_voiceData)(id, SEL, id);
static id mspRepl_voiceData(id self, SEL _cmd, id wrap) {
    id r = msp_o_voiceData(self, _cmd, wrap);
    WPLog(@"MusicProbe", @"[HB voiceDataForSourceWrap:] wrap=%@ -> ret=%@",
          mspTrunc(wrap, 400) ?: @"(nil)", mspTrunc(r, 400) ?: @"(nil)");
    return r;
}
// sendGetMusicSilk:toUrl:delegate: (id, id, id)
static void (*msp_o_getSilk)(id, SEL, id, id, id);
static void mspRepl_getSilk(id self, SEL _cmd, id a, id b, id c) {
    WPLog(@"MusicProbe", @"[HB sendGetMusicSilk:toUrl:delegate:] a=%@ b=%@ c=%@",
          mspTrunc(a, 400) ?: @"(nil)", mspTrunc(b, 200) ?: @"(nil)", mspTrunc(c, 120) ?: @"(nil)");
    msp_o_getSilk(self, _cmd, a, b, c);
}

static void mspInstallHBHooks(void) {
    NSArray *hbSelectors = @[@"sendSourceWrap:toUsername:error:",
                             @"voiceDataForSourceWrap:",
                             @"sendGetMusicSilk:toUrl:delegate:"];
    NSArray *hbClasses = @[@"HBHelperUtil", @"HBAutoSendTaskManager"];
    BOOL allHooked = YES;
    for (NSString *clsName in hbClasses) {
        Class cls = objc_getClass(clsName.UTF8String);
        if (!cls) continue;
        for (NSString *selName in hbSelectors) {
            SEL sel = NSSelectorFromString(selName);
            if (![cls instancesRespondToSelector:sel]) continue;
            if ([_mspOrigs objectForKey:selName]) continue;   // 已挂载，重试时跳过
            IMP orig = NULL;
            void *repl = [selName isEqualToString:@"voiceDataForSourceWrap:"]
                ? (void *)mspRepl_voiceData
                : ([selName isEqualToString:@"sendGetMusicSilk:toUrl:delegate:"]
                    ? (void *)mspRepl_getSilk
                    : (void *)mspRepl_sendSourceWrap);
            MSHookMessageEx(cls, sel, (IMP)repl, &orig);
            mspSaveOrig(sel, orig);
            WPLog(@"MusicProbe", @"[+] %@ %@ 已挂载", clsName, selName);
        }
    }
    for (NSString *selName in hbSelectors) {
        if (![_mspOrigs objectForKey:selName]) allHooked = NO;
    }
    if (allHooked) {
        WPLog(@"MusicProbe", @"[✓] 黄白发送链 3 钩全部就位");
    } else {
        WPLogDebug(@"MusicProbe", @"[waiting] 黄白发送链未全部就位，稍后重试");
    }
}

#pragma mark - 安装

@implementation MusicShareProbe

+ (void)install {
    WPLog(@"MusicProbe", @"======== MusicShareProbe 全量探针安装开始 ========");

    // A. CMessageMgr 消息管道
    mspHookMgr(@"onNewSyncAddMessage:", (void *)mspRepl1);
    mspHookMgr(@"onNewSyncNotAddDBMessage:", (void *)mspRepl1);
    mspHookMgr(@"AddMsg:MsgWrap:", (void *)mspRepl2);
    mspHookMgr(@"AsyncOnAddMsg:MsgWrap:", (void *)mspRepl2);
    mspHookMgr(@"AddLocalMsg:MsgWrap:", (void *)mspRepl2);
    mspHookMgr(@"AddRecordMsg:MsgWrap:", (void *)mspRepl2);
    mspHookMgr(@"ResendMsg:MsgWrap:", (void *)mspRepl2);
    mspHookMgr(@"ResendVoiceMsg:", (void *)mspRepl2);
    mspHookMgr(@"addMessageLibWithWrap:withVC:", (void *)mspRepl2);
    mspHookMgr(@"addMessageLibWithWrap:WithVC:", (void *)mspRepl2);
    mspHookMgr(@"AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:", (void *)mspRepl4);

    // B. CMessageWrap 元数据 setter
    mspHookWrapSetter(@"setM_musicInfo:", (void *)mspRepl_setMusicInfo, (IMP *)&msp_o_setMusicInfo);
    mspHookWrapSetter(@"setM_nsDataUrl:", (void *)mspRepl_setDataUrl, (IMP *)&msp_o_setDataUrl);

    // C. 黄白发送链：延迟重试（0s/5s/15s/30s），黄白 dylib 可能晚于 Mio 加载
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, 0), dispatch_get_main_queue(), ^{
        mspInstallHBHooks();
    });
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        mspInstallHBHooks();
    });
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(15 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        mspInstallHBHooks();
    });
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(30 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        mspInstallHBHooks();
        WPLog(@"MusicProbe", @"======== MusicShareProbe 全量探针安装完成（黄白发一首歌即可实证） ========");
    });
}

@end
