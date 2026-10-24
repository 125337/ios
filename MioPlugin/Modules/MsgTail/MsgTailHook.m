#import "MsgTailHook.h"
#import "MsgTailConfig.h"
#import "../../Core/ServiceHelper.h"
#import "../../Core/ConfigManager.h"
#import "../../Core/LogManager.h"
#import "../../Modules/SettingEntry/WPCommonUI.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <substrate.h>

// 消息小尾巴 · 文本类型（黄白同款，机制已全部静态实证，见 ServiceHelper.m WXSendReferMessage 注解）
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
//   - 防重入 flag（黄白 quote.tail.sending 同款思路）：发送伪引用期间置位，
//     防御 AddAppMsg 内部同步再入 AddMsg 管道导致二次组包

static IMP g_orig_AddMsg = NULL;
static BOOL g_tailAppending = NO;
static IMP g_orig_AddAppMsg = NULL;

// wrap 可用字段安全读取（仅调试探针用）
static id mtVal(id obj, NSString *key) {
    if (!obj) return nil;
    @try { return [obj valueForKey:key]; } @catch (id e) { return nil; }
}

static NSString *mtDesc1(id v) {
    if (!v) return @"nil";
    NSString *d = [v description];
    return d.length > 200 ? [d substringToIndex:200] : d;
}

static NSString *mtStr(id obj, NSString *key) {
    if (!obj) return @"";
    @try { return WXSafeStringGet(obj, key) ?: @""; } @catch (id e) { return @""; }
}

// DEBUG 探针：dump AddAppMsg 收到的 wrap 全量状态（黄白尾巴 vs 我们的，对照差异用，定案后删）
static void repl_MsgTail_AddAppMsg(id self, SEL _cmd, id session, id wrap, id data, unsigned int scene) {
    @try {
        if (wrap) {
            id ext = mtVal(wrap, @"m_extendInfoWithMsgType");
            id referWrap = mtVal(wrap, @"referingMessageWrap");
            WPLog(@"MsgTail", @"[ProbeAddAppMsg] === 会话=%@ scene=%u type=%@ innerType(wrap)=%@ innerType(ext)=%@",
                  mtDesc1(session), scene,
                  mtDesc1(mtVal(wrap, @"m_uiMessageType")),
                  mtDesc1(mtVal(wrap, @"m_uiAppMsgInnerType")),
                  ext ? mtDesc1(mtVal(ext, @"m_uiAppMsgInnerType")) : @"ext:nil");
            WPLog(@"MsgTail", @"[ProbeAddAppMsg] fromUsr=%@ toUsr=%@ svrid=%@ status=%@ imgStatus=%@ createTime=%@",
                  mtDesc1(mtVal(wrap, @"m_nsFromUsr")), mtDesc1(mtVal(wrap, @"m_nsToUsr")),
                  mtDesc1(mtVal(wrap, @"m_n64MesSvrID")), mtDesc1(mtVal(wrap, @"m_uiStatus")),
                  mtDesc1(mtVal(wrap, @"m_uiImgStatus")), mtDesc1(mtVal(wrap, @"m_uiCreateTime")));
            NSString *content = mtStr(wrap, @"m_nsContent");
            WPLog(@"MsgTail", @"[ProbeAddAppMsg] content(%lu)= %@",
                  (unsigned long)content.length, content.length > 1200 ? [content substringToIndex:1200] : content);
            WPLog(@"MsgTail", @"[ProbeAddAppMsg] msgSource=%@ title=%@ desc=%@",
                  mtDesc1(mtVal(wrap, @"m_nsMsgSource")), mtDesc1(mtVal(wrap, @"m_nsTitle")),
                  mtDesc1(mtVal(wrap, @"m_nsDesc")));
            if (ext) {
                WPLog(@"MsgTail", @"[ProbeAddAppMsg] ext.refUsr=%@ ext.refDisp=%@ ext.srcUsr=%@ ext.srcDisp=%@ referFromScene=%@ originSvrId=%@ realChatUsr=%@",
                      mtDesc1(mtVal(ext, @"referMessageSenderUsrname")),
                      mtDesc1(mtVal(ext, @"referMessageSenderDisplayName")),
                      mtDesc1(mtVal(ext, @"m_nsSourceUsername")),
                      mtDesc1(mtVal(ext, @"m_nsSourceDisplayname")),
                      mtDesc1(mtVal(ext, @"m_referFromScene")),
                      mtDesc1(mtVal(ext, @"m_uiOriginMsgSvrId")),
                      mtDesc1(mtVal(ext, @"m_nsRealChatUsr")));
            }
            if (referWrap) {
                WPLog(@"MsgTail", @"[ProbeAddAppMsg] referWrap: type=%@ content=%@ fromUsr=%@ toUsr=%@ realChatUsr=%@ svrid=%@ dispName=%@ createTime=%@",
                      mtDesc1(mtVal(referWrap, @"m_uiMessageType")),
                      mtDesc1(mtVal(referWrap, @"m_nsContent")),
                      mtDesc1(mtVal(referWrap, @"m_nsFromUsr")),
                      mtDesc1(mtVal(referWrap, @"m_nsToUsr")),
                      mtDesc1(mtVal(referWrap, @"m_nsRealChatUsr")),
                      mtDesc1(mtVal(referWrap, @"m_n64MesSvrID")),
                      mtDesc1(mtVal(referWrap, @"m_nsDisplayName")),
                      mtDesc1(mtVal(referWrap, @"m_uiCreateTime")));
            } else {
                WPLog(@"MsgTail", @"[ProbeAddAppMsg] referingMessageWrap = nil");
            }
            WPLog(@"MsgTail", @"[ProbeAddAppMsg] === end");
        }
    } @catch (id e) {}
    ((void (*)(id, SEL, id, id, id, unsigned int))g_orig_AddAppMsg)(self, _cmd, session, wrap, data, scene);
}


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
                    BOOL ok = WXSendTailMessage(content, cfg.msgTail, target);
                    WPLog(@"MsgTail", @"[Tail] 尾巴消息%@（正文 %lu 字 + 尾巴 %lu 字）",
                          ok ? @"已发送" : @"发送失败",
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
    // DEBUG 探针（定案后删）：dump 所有 AddAppMsg wrap，对照黄白尾巴 vs 我们的组包状态
    SEL appSel = NSSelectorFromString(@"AddAppMsg:MsgWrap:Data:Scene:");
    if (cls && [cls instancesRespondToSelector:appSel]) {
        MSHookMessageEx(cls, appSel, (IMP)repl_MsgTail_AddAppMsg, (IMP *)&g_orig_AddAppMsg);
        WPLog(@"MsgTail", @"[Hook] ✓ AddAppMsg DEBUG 探针已挂");
    }
}

@end
