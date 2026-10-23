#import "MusicShareWireProbe.h"
#import "../../Core/LogManager.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <substrate.h>

static IMP orig_wp_AddMsg = NULL;
static IMP orig_wp_AddLocalMsg = NULL;

// 安全读字段（不存在/异常返回 nil）
static id wpField(id wrap, NSString *name) {
    @try {
        if (![wrap respondsToSelector:NSSelectorFromString(name)]) return nil;
        return ((id (*)(id, SEL, ...))objc_msgSend)(wrap, NSSelectorFromString(name));
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
        WPLog(@"WireProbe", @"  msgSource=%@ dataUrl=%@ musicInfo=%@ realChatUsr=%@",
              wpField(wrap, @"m_nsMsgSource"), wpField(wrap, @"m_nsDataUrl"),
              wpField(wrap, @"m_musicInfo"), wpField(wrap, @"m_nsRealChatUsr"));
        id content = wpField(wrap, @"m_nsContent");
        NSString *preview = [content isKindOfClass:[NSString class]] ? content : nil;
        WPLog(@"WireProbe", @"  content(%lu)= %@",
              (unsigned long)preview.length,
              preview.length > 120 ? [[preview substringToIndex:120] stringByAppendingString:@"…"] : preview);
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

@implementation MusicShareWireProbe

+ (void)install {
    Class cls = objc_getClass("CMessageMgr");
    if (!cls) { WPLog(@"WireProbe", @"CMessageMgr not found"); return; }
    MSHookMessageEx(cls, NSSelectorFromString(@"AddMsg:MsgWrap:"),
                    (IMP)repl_wp_AddMsg, (IMP *)&orig_wp_AddMsg);
    MSHookMessageEx(cls, NSSelectorFromString(@"AddLocalMsg:MsgWrap:"),
                    (IMP)repl_wp_AddLocalMsg, (IMP *)&orig_wp_AddLocalMsg);
    WPLog(@"WireProbe", @"[+] wire 探针已挂载（AddMsg + AddLocalMsg, type=34/49）");
}

@end
