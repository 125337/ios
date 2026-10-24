#import "MsgTailHook.h"
#import "MsgTailConfig.h"
#import "../../Core/ServiceHelper.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/LogManager.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <substrate.h>

// 消息小尾巴 · 文本类型（黄白同款，实现依据：黄白助手反编译/消息小尾巴实现分析.md）
//
// 挂载点：CMessageMgr AddMsg:MsgWrap: —— 收发总管道（MsgMerge 94 号日志实证：自己发送
// 也走此管道；AsyncOnAddMsg 只有接收侧）。黄白在此入口做两件事（§4.1/4.2）：
//   1) 快捷指令：文本 == msgTailShortcut 且开关开 → 不调 orig（消息不出网）+ 翻转
//      enableMsgTail + toast「消息尾巴已启用/已关闭」（黄白 ★95% 确证行为）
//   2) 文本尾巴：enableMsgTail 开 → 改写 wrap 内容附加 msgTail（黄白 CFF 盲区推断
//      ★70%，但路线唯一：replacement 体内改 m_nsContent）
//
// 与黄白的差异（有意为之）：
//   - 黄白没做方向判定（它的挂载语境里 AddMsg 即外发），但我们的实证是收发总管道，
//     收到的消息也进管道 → 必须限定「自己发送」才拼尾巴/匹配指令，否则收到的消息
//     会被污染。判定：m_nsFromUsr == 自己 wxid（getSelfContact，发送链路已实证拿法）
//   - 只处理文本消息（m_uiMessageType==1），系统/图片等其他类型不碰
//   - 防重入 flag（黄白 quote.tail.sending 同款思路）：改内容调 orig 前置位，
//     防御 orig 内部同步再入管道导致无限叠加

static IMP g_orig_AddMsg = NULL;
static BOOL g_tailAppending = NO;

// 自身 wxid（懒取 + 缓存，KeywordAlert 同款）
static NSString *mtSelfWxid(void) {
    static NSString *cached = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        id selfContact = WXGetSelfContact();
        if (selfContact) cached = WXSafeStringGet(selfContact, @"m_nsUsrName") ?: @"";
    });
    return cached;
}

static NSString *mtStr(id obj, NSString *key) {
    if (!obj) return @"";
    @try { return WXSafeStringGet(obj, key) ?: @""; } @catch (id e) { return @""; }
}

static BOOL mtIsSelfSend(id wrap) {
    NSString *wxid = mtSelfWxid();
    if (wxid.length == 0) return NO;
    return [mtStr(wrap, @"m_nsFromUsr") isEqualToString:wxid];
}

static unsigned int mtMsgType(id wrap) {
    if (!wrap) return 0;
    @try {
        return ((unsigned int (*)(id, SEL, ...))objc_msgSend)(wrap, NSSelectorFromString(@"m_uiMessageType"));
    } @catch (id e) { return 0; }
}

// ===== 探针 v5（临时）：自己发送的消息 wrap 全属性 dump —— 抓微信 8.x 引用回复的
// 真实数据存放位置（黄白静态已定性「引用机制」，此处补定量：字段名+格式）。
// 用法：长按任意消息 -> 引用 -> 回复一句话 -> 把 [Probe] 日志发回。实测后移除。 =====
static void mtDumpWrap(id wrap) {
    if (!wrap) return;
    Class cls = [wrap class];
    unsigned int count = 0;
    objc_property_t *props = class_copyPropertyList(cls, &count);
    if (!props) return;
    NSMutableString *acc = [NSMutableString stringWithCapacity:1024];
    for (unsigned int i = 0; i < count; i++) {
        const char *pname = property_getName(props[i]);
        @try {
            id val = ((id (*)(id, SEL))objc_msgSend)(wrap, sel_registerName(pname));
            if ([val isKindOfClass:[NSString class]] && [(NSString *)val length] > 0) {
                NSString *sv = (NSString *)val;
                [acc appendFormat:@"%@=%@  ", pname,
                    sv.length > 600 ? [sv substringToIndex:600] : sv];
            } else if ([val isKindOfClass:[NSNumber class]]) {
                [acc appendFormat:@"%@=%@  ", pname, val];
            }
        } @catch (id e) { /* 跳过非字符串/异常 getter */ }
    }
    free(props);
    WPLog(@"MsgTail", @"[Probe] type=%u DUMP>>> %@", mtMsgType(wrap), acc);
}

static void repl_MsgTail_AddMsg(id self, SEL _cmd, id session, id wrap) {
    @try {
        // 探针 v5：先 dump 原始状态（尾巴附加前）
        if (wrap && !g_tailAppending && mtIsSelfSend(wrap)) {
            mtDumpWrap(wrap);
        }
        if (wrap && !g_tailAppending) {
            MsgTailConfig *cfg = [MsgTailConfig shared];
            NSString *content = mtStr(wrap, @"m_nsContent");
            BOOL selfSend = mtIsSelfSend(wrap);

            // ① 快捷指令：吞消息 + 翻转开关 + toast（黄白 §4.2 同款，不调 orig = 不出网）
            if (cfg.msgTailShortcutEnabled && cfg.msgTailShortcut.length > 0
                && selfSend && [content isEqualToString:cfg.msgTailShortcut]) {
                cfg.enableMsgTail = !cfg.enableMsgTail;
                [ConfigManager saveAll];
                WPShowToast(cfg.enableMsgTail ? @"消息尾巴已启用" : @"消息尾巴已关闭");
                WPLog(@"MsgTail", @"[Cmd] 指令命中，尾巴切换 -> %@", cfg.enableMsgTail ? @"启用" : @"关闭");
                return;
            }

            // ② 文本尾巴：原文后直接追加 msgTail（黄白 §4.4 推断路线）
            if (cfg.enableMsgTail && cfg.msgTail.length > 0
                && selfSend && content.length > 0 && mtMsgType(wrap) == 1
                && [content rangeOfString:cfg.msgTail].location == NSNotFound) {
                g_tailAppending = YES;
                NSString *nv = [content stringByAppendingString:cfg.msgTail];
                @try { [wrap setValue:nv forKey:@"m_nsContent"]; }
                @finally { g_tailAppending = NO; }
                WPLog(@"MsgTail", @"[Tail] 已附加尾巴（原长 %lu -> %lu）",
                      (unsigned long)content.length, (unsigned long)nv.length);
            }
        }
    } @catch (NSException *e) {
        g_tailAppending = NO;
        WPLog(@"MsgTail", @"[Hook] exception: %@", e.reason);
    }
    ((void (*)(id, SEL, id, id))g_orig_AddMsg)(self, _cmd, session, wrap);
}

@implementation MsgTailHook

+ (void)install {
    Class cls = objc_getClass("CMessageMgr");
    SEL sel = NSSelectorFromString(@"AddMsg:MsgWrap:");
    if (cls && [cls instancesRespondToSelector:sel]) {
        MSHookMessageEx(cls, sel, (IMP)repl_MsgTail_AddMsg, (IMP *)&g_orig_AddMsg);
        WPLog(@"MsgTail", @"[Hook] ✓ CMessageMgr AddMsg:MsgWrap: (收发总管道)");
    } else {
        WPLog(@"MsgTail", @"[Hook] ✗ CMessageMgr AddMsg:MsgWrap: not found");
    }
}

@end
