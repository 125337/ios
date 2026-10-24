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

// XML 文本转义（正文/尾巴进 <title>/<content> 用）
static NSString *mtEsc(NSString *s) {
    if (!s) return @"";
    NSString *r = [s stringByReplacingOccurrencesOfString:@"&" withString:@"&amp;"];
    r = [r stringByReplacingOccurrencesOfString:@"<" withString:@"&lt;"];
    r = [r stringByReplacingOccurrencesOfString:@">" withString:@"&gt;"];
    return r;
}

static void repl_MsgTail_AddMsg(id self, SEL _cmd, id session, id wrap) {
    @try {
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

            // ② 文本尾巴 = 伪引用（探针 199 实证的微信 8.x 引用结构，黄白同款机制）：
            //    type=1 文本 → type=49 appmsg(type=57)，正文进 <title>，
            //    尾巴进 <refermsg><content> → 微信原生渲染成「气泡正文 + 下方灰字尾巴」
            if (cfg.enableMsgTail && cfg.msgTail.length > 0
                && selfSend && content.length > 0 && mtMsgType(wrap) == 1) {
                g_tailAppending = YES;
                NSString *fromUsr = mtStr(wrap, @"m_nsFromUsr");
                NSString *toUsr = mtStr(wrap, @"m_nsToUsr");
                // appid="" 后双空格照抄真引用抓包原样
                NSString *xml = [NSString stringWithFormat:
                    @"<msg><appmsg appid=\"\"  sdkver=\"0\"><title>%@</title>"
                    @"<type>57</type>"
                    @"<appattach><cdnthumbaeskey></cdnthumbaeskey><aeskey></aeskey></appattach>"
                    @"<refermsg><type>1</type><svrid>0</svrid>"
                    @"<fromusr>%@</fromusr><chatusr>%@</chatusr><displayname></displayname>"
                    @"<content>%@</content><createtime>%ld</createtime>"
                    @"</refermsg></appmsg></msg>",
                    mtEsc(content), mtEsc(fromUsr), mtEsc(toUsr),
                    mtEsc(cfg.msgTail), (long)time(NULL)];
                @try {
                    [wrap setValue:xml forKey:@"m_nsContent"];
                } @catch (id e) {
                    g_tailAppending = NO;
                    return;  // content 都写不进去，按原文发，不碰 type
                }
                // type 必须后改且失败必须回滚 content——200 教训：m_nsTitle 赋值炸在
                // content/type 之间，导致「XML content + type=1 纯文本出网」事故
                BOOL transformed = NO;
                @try {
                    [wrap setValue:@49 forKey:@"m_uiMessageType"];
                    transformed = YES;
                    WPLog(@"MsgTail", @"[Tail] 伪引用构造完成（正文 %lu 字 + 尾巴 %lu 字）",
                          (unsigned long)content.length, (unsigned long)cfg.msgTail.length);
                } @catch (id e) {
                    [wrap setValue:content forKey:@"m_nsContent"];  // 回滚，保底不漏 XML
                    WPLog(@"MsgTail", @"[Hook] type 改造失败已回滚: %@", e);
                } @finally { g_tailAppending = NO; }

                if (transformed) {
                    // type=49 的 appmsg 出网必须走 AddAppMsg（202 实测：改造后仍走
                    // orig AddMsg 文本管道 → 本机渲染正常但对面永远收不到）
                    SEL appMsgSel = NSSelectorFromString(@"AddAppMsg:MsgWrap:Data:Scene:");
                    if ([self respondsToSelector:appMsgSel]) {
                        ((void (*)(id, SEL, id, id, id, int))objc_msgSend)
                            (self, appMsgSel, session, wrap, nil, 2);   // Data=nil Scene=2（音乐卡实证组合）
                        WPLog(@"MsgTail", @"[Tail] 已改走 AddAppMsg 出网");
                        return;
                    }
                    WPLog(@"MsgTail", @"[Hook] AddAppMsg:MsgWrap:Data:Scene: 不存在，回退 orig");
                }
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
