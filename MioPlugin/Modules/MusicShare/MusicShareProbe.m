#import "MusicShareProbe.h"
#import "../../Core/LogManager.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <substrate.h>

static void (*orig_msp_AddMsg)(id, SEL, id, id);

// KVC 安全探测：字段存在则返回值描述，不存在返回 nil
static NSString *probeField(id wrap, NSString *name) {
    @try {
        id v = [wrap valueForKey:name];
        if (v == nil) return nil;
        if ([v isKindOfClass:[NSData class]]) return [NSString stringWithFormat:@"NSData(%luB)", (unsigned long)[v length]];
        NSString *desc = [v description];
        if (desc.length > 600) desc = [[desc substringToIndex:600] stringByAppendingString:@"…(截断)"];
        return desc;
    } @catch (NSException *e) {
        return nil;   // 字段不存在（KVC 未定义）
    }
}

static void mspDumpWrap(id session, id wrap, NSString *via) {
    @try {
        id typeObj = [wrap valueForKey:@"m_uiMessageType"];
        long long msgType = [typeObj respondsToSelector:@selector(longLongValue)] ? [typeObj longLongValue] : -1;
        // 只 dump 语音(34) 和 appmsg(49)——黄白音乐卡必是其一
        if (msgType != 34 && msgType != 49) return;

        WPLog(@"MusicProbe", @"==== [MusicProbe] %@ type=%lld session=%@", via, msgType, [wrap valueForKey:@"m_nsToUsr"]);
        WPLog(@"MusicProbe", @"  m_nsContent = %@", probeField(wrap, @"m_nsContent"));
        WPLog(@"MusicProbe", @"  m_nsMsgSource = %@", probeField(wrap, @"m_nsMsgSource"));
        WPLog(@"MusicProbe", @"  —— 音乐字段族探测（黄白文档 §1.2 selector 群）——");
        NSArray *fields = @[@"musicInfo", @"musicDataUrl", @"musicAppid", @"musicShareItem",
                            @"musicUrlToSilk", @"mvSingerName", @"musicNewEditWeiBaID",
                            @"voiceLength", @"m_bIsSender"];
        for (NSString *f in fields) {
            NSString *v = probeField(wrap, f);
            if (v) WPLog(@"MusicProbe", @"  %@ = %@", f, v);
        }
        // wrap 全部 ivar 名打印一次（首条时），确认模型真实字段集
        static BOOL dumpedIvars = NO;
        if (!dumpedIvars) {
            dumpedIvars = YES;
            unsigned int count = 0;
            Class c = object_getClass(wrap);
            Ivar *list = class_copyIvarList(c, &count);
            NSMutableString *names = [NSMutableString string];
            for (unsigned int i = 0; i < count; i++) {
                const char *n = ivar_getName(list[i]);
                if (n) [names appendFormat:@"%s ", n];
            }
            free(list);
            WPLog(@"MusicProbe", @"  [wrap ivars] %@", names);
        }
        WPLog(@"MusicProbe", @"==== end");
    } @catch (NSException *e) {
        WPLog(@"MusicProbe", @"dump 异常: %@", e);
    }
}

static void repl_msp_AddMsg(id self, SEL _cmd, id session, id wrap) {
    orig_msp_AddMsg(self, _cmd, session, wrap);
    mspDumpWrap(session, wrap, @"AddMsg");
}

@implementation MusicShareProbe

+ (void)install {
    Class cls = objc_getClass("CMessageMgr");
    if (!cls) { WPLog(@"MusicProbe", @"CMessageMgr not found"); return; }
    SEL sel = NSSelectorFromString(@"AddMsg:MsgWrap:");
    if (![cls instancesRespondToSelector:sel]) { WPLog(@"MusicProbe", @"AddMsg:MsgWrap: missing"); return; }
    MSHookMessageEx(cls, sel, (IMP)repl_msp_AddMsg, (IMP *)&orig_msp_AddMsg);
    WPLog(@"MusicProbe", @"[+] AddMsg:MsgWrap: 探针已挂载——黄白发一首歌即可实证");
}

@end
