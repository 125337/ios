#import "MsgTailHook.h"
#import "MsgTailConfig.h"
#import "../../Core/ServiceHelper.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/LogManager.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <substrate.h>

// 消息小尾巴 · 文本类型（黄白同款，机制已全部探针实证，见 ServiceHelper.m WXSendTailMessage 注解）
//
// 挂载点：CMessageMgr AddMsg:MsgWrap: —— 收发总管道（MsgMerge 94 号日志实证：自己发送
// 也走此管道）。黄白在此入口做两件事（§4.1/4.2）：
//   1) 快捷指令：文本 == msgTailShortcut 且开关开 → 不调 orig（消息不出网）+ 翻转
//      enableMsgTail + toast（黄白 ★95% 确证行为）
//   2) 文本尾巴：ext 引用卡出网。204 日志 AddAppMsg 探针实证黄白真实组包状态：
//      不伪造被引用消息、不走 updateForReferMsg（官方"回复"流程渲染样式不对、displayname
//      联系人现算盖不掉），而是 type=49 + 纯文本 content + extendInfo 拆字段
//      （innerType=57 / sourceUsername=Displayname=尾巴 / referMessageSenderDisplayName=正文）
//      → 宿主 AddAppMsg 管道从 ext 自组引用卡 XML（详见 ServiceHelper.m 注解）
//
// 与黄白的差异（有意为之）：
//   - 黄白没做方向判定，但我们的实证是收发总管道 → 必须限定「自己发送」
//   - 只处理文本消息（m_uiMessageType==1），系统/图片等其他类型不碰
//   - 防重入 flag（黄白 quote.tail.sending 同款思路）：发送尾巴消息期间置位，
//     防御 AddAppMsg 内部同步再入 AddMsg 管道导致二次组包

static IMP g_orig_AddMsg = NULL;
static BOOL g_tailAppending = NO;
static IMP g_orig_AddAppMsg = NULL;

// DEBUG 探针（定案后删）：动态枚举对象全部属性逐个读值（黄白 app 尾巴组包状态对照用）
static NSString *mtPropsDump(id obj) {
    if (!obj) return @"(nil)";
    NSMutableString *out = [NSMutableString string];
    unsigned int count = 0;
    objc_property_t *props = class_copyPropertyList([obj class], &count);
    for (unsigned int i = 0; i < count; i++) {
        NSString *name = @(property_getName(props[i]));
        @try {
            id v = [obj valueForKey:name];
            NSString *d = v ? [v description] : @"(nil)";
            if (d.length > 150) d = [[d substringToIndex:150] stringByAppendingString:@"…"];
            [out appendFormat:@"\n  %@ = %@", name, d];
        } @catch (id e) {}
    }
    free(props);
    return out;
}

// DEBUG 探针（定案后删）：dump AddAppMsg 收到的 type=49 wrap 全量状态（黄白 vs 我们对照）
static void repl_MsgTail_AddAppMsg(id self, SEL _cmd, id session, id wrap, id data, unsigned int scene) {
    @try {
        if (wrap) {
            unsigned int t = ((unsigned int (*)(id, SEL, ...))objc_msgSend)(wrap, NSSelectorFromString(@"m_uiMessageType"));
            if (t == 49) {
                id ext = nil;
                @try { ext = [wrap valueForKey:@"m_extendInfoWithMsgType"]; } @catch (id e) {}
                WPLog(@"MsgTail", @"[ProbeApp] === ENTRY 会话=%@ scene=%u data=%@\n--- wrap 属性 ---%@\n--- ext 属性 ---%@",
                      [session isKindOfClass:[NSString class]] ? session : @"(nonstr)", scene,
                      data ? NSStringFromClass([data class]) : @"(nil)",
                      mtPropsDump(wrap), mtPropsDump(ext));
            }
        }
    } @catch (id e) {}
    ((void (*)(id, SEL, id, id, id, unsigned int))g_orig_AddAppMsg)(self, _cmd, session, wrap, data, scene);
    // orig 执行完：管道已从 ext 重建 XML，dump 终态 content（黄白最终出网形态）
    @try {
        if (wrap) {
            unsigned int t = ((unsigned int (*)(id, SEL, ...))objc_msgSend)(wrap, NSSelectorFromString(@"m_uiMessageType"));
            if (t == 49) {
                NSString *c = mtStr(wrap, @"m_nsContent");
                WPLog(@"MsgTail", @"[ProbeApp] === OUT content(%lu)= %@",
                      (unsigned long)c.length, c.length > 1500 ? [c substringToIndex:1500] : c);
            }
        }
    } @catch (id e) {}
}

static NSString *mtStr(id obj, NSString *key) {
    if (!obj) return @"";
    @try { return WXSafeStringGet(obj, key) ?: @""; } @catch (id e) { return @""; }
}

// 自身 wxid（懒取 + 缓存）：拿到非空值才缓存，取不到下次重试——
// 若用 dispatch_once 首次失败会永久缓存空值，尾巴静默失效
static NSString *mtSelfWxid(void) {
    static NSString *cached = nil;
    if (cached.length > 0) return cached;
    id selfContact = WXGetSelfContact();
    if (selfContact) {
        NSString *v = WXSafeStringGet(selfContact, @"m_nsUsrName");
        if (v.length > 0) cached = v;
    }
    return cached ?: @"";
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

            // ② 文本尾巴 = ext 引用卡（黄白 204 探针实证同款状态，见 ServiceHelper.m 注解）：
            //    type=49 + 纯文本 content + extendInfo 拆字段 → AddAppMsg，宿主管道自组引用卡 XML
            if (cfg.enableMsgTail && cfg.msgTail.length > 0
                && selfSend && content.length > 0 && mtMsgType(wrap) == 1) {
                g_tailAppending = YES;
                @try {
                    NSString *target = mtStr(wrap, @"m_nsToUsr");
                    if (target.length == 0 && [session isKindOfClass:[NSString class]]) target = session;
                    // 应用图标模式 → appmsg 应用卡片（WXSendAppIconTailMessage，复用 WXSendAppMessage 通道，
                    // appId=设置页点选的预设，空=函数内默认）；默认 → 引用卡形态（WXSendTailMessage）。
                    // 两形态共用 msgTail 内容
                    BOOL ok = cfg.enableAppTail
                        ? WXSendAppIconTailMessage(content, cfg.msgTail, cfg.appTailAppId, target)
                        : WXSendTailMessage(content, cfg.msgTail, target);
                    WPLog(@"MsgTail", @"[Tail] 尾巴消息%@（%@，正文 %lu 字 + 尾巴 %lu 字）",
                          ok ? @"已发送" : @"发送失败",
                          cfg.enableAppTail ? @"应用图标" : @"引用卡",
                          (unsigned long)content.length, (unsigned long)cfg.msgTail.length);
                    if (ok) return;   // 已改道出网，原始文本不再走 orig
                } @finally { g_tailAppending = NO; }
                // 发送失败则落到底部 orig：按原文发出（无尾巴但不丢消息）
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
    // DEBUG 探针（定案后删）：dump 所有 AddAppMsg type=49 wrap 全量属性，抓黄白 app 尾巴组包状态
    SEL appSel = NSSelectorFromString(@"AddAppMsg:MsgWrap:Data:Scene:");
    if (cls && [cls instancesRespondToSelector:appSel]) {
        MSHookMessageEx(cls, appSel, (IMP)repl_MsgTail_AddAppMsg, (IMP *)&g_orig_AddAppMsg);
        WPLog(@"MsgTail", @"[Hook] ✓ AddAppMsg DEBUG 探针已挂（type=49 全属性 dump）");
    }
}

@end
