#import "VoiceFeaturesHook.h"
#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <substrate.h>
#import "VoiceConfig.h"
#import "../SettingEntry/WPCommonUI.h"
#import "../../Core/LogManager.h"
#import "../../Core/ServiceHelper.h"

// ═══════════════════════════════════════════════════════════════
// 语音功能 Hook（2026-09-22，WCR 反编译逐条复刻，非猜测）
//  ① voiceFakeDuration     UploadVoiceWrap setM_uiVoiceTime:（发送端写假秒数；本版本 CMessageWrap 无 m_uiVoiceTime）
//  ② voiceAutoToText       VoiceMessageCellView init+onAppear → 翻译
//  ③ voiceDragProgress     VoiceMessageCellView 4 hook + pan 手势 + 浮层
//  ④ voiceAutoSpeed        canShowPlayRateButton + 点击入口 orig 后 0.3s 自动倍速 + 触感吞除
//                          （本版本无 onBeginPlayingMsg:autoPlayEnable:，点击入口为等价触发时机）
//  ⑤ voiceBackgroundPlay   4 个点击入口（onClick/responseUserClick）→ onMinimize 后台悬浮
//                          + MinimizeViewController onAbsorbFloatingViewTap（WCR FUN_01f55590）
//  ⑥ voiceCallPlay         WCAudioModuleMgr 3 hook（WCR WCRefineVoicePlayBypass 同款极简垫片）：
//                          canMix 类方法（冒号 selector）→YES、isAudioModuleInterrupt → NO，
//                          hook 体仅读配置开关：开=改写硬编码值 / 关=直通 orig。
//                          WCR 挂的 canSetActiveWithScene:groupName: 2 参版本版本不存在（run 2072
//                          实证 SKIP），其有效 hook 即这 3 个，同版本真机验证功能正常
//                          09-24 定论：仲裁 hook 体内禁止 AVAudioSession IPC/日志 IO/ObjC 重活——
//                          此前诊断版垫片在点小程序拉起音频会话的事务窗口 SEGV（A/B 实验实锤）
//  ⑦ voiceForward          ForwardMessageLogicController 3 hook + 原生长按菜单转发项
// 全部反射 + respondsToSelector 保护；开关关闭时直通 orig 零干预
// ═══════════════════════════════════════════════════════════════

static IMP orig_UVW_setVoiceTime = NULL;    // UploadVoiceWrap setM_uiVoiceTime:（① 假秒数）
static IMP orig_VMC_init = NULL;            // VoiceMessageCellView initWithMessageWrap:contact:chat:
static IMP orig_VMC_onAppear = NULL;        // onAppear
static IMP orig_VMC_didMoveToWindow = NULL; // didMoveToWindow
static IMP orig_VMC_layoutContentView = NULL; // layoutContentView
static IMP orig_VMC_onClick = NULL;         // ④⑤ onClick
static IMP orig_VMC_onClickArg = NULL;      // ④⑤ onClick:
static IMP orig_VMC_respClick = NULL;       // ④⑤ responseUserClick
static IMP orig_VMC_respClickArg = NULL;    // ④⑤ responseUserClick:
static IMP orig_VM_canShowRate = NULL;      // VoiceMessageViewModel canShowPlayRateButton
static IMP orig_UI_impact = NULL;           // UIImpactFeedbackGenerator impactOccurred
static IMP orig_UI_impactInt = NULL;        // impactOccurredWithIntensity:
static IMP orig_Min_absorbTap = NULL;       // MinimizeViewController onAbsorbFloatingViewTap
static IMP orig_WAM_mixList = NULL;         // 类方法 audioModule:canMixWithAudioList:
static IMP orig_WAM_mixModule = NULL;       // 类方法 audioList:canMixWithAudioModule:
static IMP orig_WAM_interrupt = NULL;       // isAudioModuleInterrupt:
static IMP orig_FMLC_forwardMsg = NULL;     // ForwardMessageLogicController forwardMessage:
static IMP orig_FMLC_msgToContact = NULL;   // ForwardMsg:ToContact:
static IMP orig_FMLC_listToContact = NULL;  // ForwardMsgList:ToContact:
static IMP orig_VMC_filteredMenu = NULL;    // VoiceMessageCellView filteredMenuItems:（⑦ 原生菜单）

static int g_autoRateGuard = 0;             // ④ 自动倍速点击期间吞触感
static int g_bgGuard = 0;                   // ⑤ onMinimize 触发期间防递归（WCR DAT_028e48c1）

// assoc keys（WCR 的 DAT_028ce0xx / DAT_028e3bxx 等价物）
static char kVFVMCInitFlag;      // ② init 已走过
static char kVFAutoTxDone;       // ② 去重
static char kVFPanGesture;       // ③ pan 手势缓存
static char kVFDurationCache;    // ③ 时长缓存 NSNumber
static char kVFDragging;         // ③ 拖动中
static char kVFHaptic;           // ③ 触感生成器
static char kVFOverlay;          // ③ 浮层 view
static char kVFStubFlag;         // ⑦ 替身 wrap 标记（WCR DAT_028ce018）
static char kVFRealWrapKey;      // ⑦ ForwardMessageLogicController → 真语音 wrap（WCR DAT_028ce013）
static char kVFMinTs;            // ⑤ 点击转后台防重时间戳 NSNumber（WCR DAT_028e48c2）

static VoiceFeaturesHook *g_vfInstance = nil;

static Class g_vmcCls = nil;
/// hook 沿继承链可能命中基类实现（甚至 UIView.didMoveToWindow）——
/// 非 VoiceMessageCellView 实例必须直通 orig
static BOOL VFIsVMC(id obj) {
    if (!g_vmcCls) g_vmcCls = objc_getClass("VoiceMessageCellView");
    return g_vmcCls && [obj isKindOfClass:g_vmcCls];
}

// ─────────── 通用安全工具 ───────────

static NSString *VFStr(id obj, SEL s) {
    if (!obj || !s || ![obj respondsToSelector:s]) return nil;
    @try {
        id v = ((id (*)(id, SEL))objc_msgSend)(obj, s);
        return [v isKindOfClass:[NSString class]] ? v : nil;
    } @catch (NSException *e) { return nil; }
}

static BOOL VFBool(id obj, SEL s, BOOL dflt) {
    if (!obj || !s || ![obj respondsToSelector:s]) return dflt;
    @try { return ((BOOL (*)(id, SEL))objc_msgSend)(obj, s) ? YES : NO; }
    @catch (NSException *e) { return dflt; }
}

static unsigned int VFUInt(id obj, SEL s, unsigned int dflt) {
    if (!obj || !s || ![obj respondsToSelector:s]) return dflt;
    @try { return ((unsigned int (*)(id, SEL))objc_msgSend)(obj, s); }
    @catch (NSException *e) { return dflt; }
}

static id VFValueKey(id obj, NSString *key) {
    if (!obj || ![obj respondsToSelector:@selector(valueForKey:)]) return nil;
    @try { return [obj valueForKey:key]; } @catch (NSException *e) { return nil; }
}

#define VF_SET_I(obj, SELNAME, VAL) do { \
    SEL s_ = NSSelectorFromString(SELNAME); \
    if ([obj respondsToSelector:s_]) ((void (*)(id, SEL, long long))objc_msgSend)(obj, s_, (long long)(VAL)); \
} while (0)

static NSString *VFSelfWxid(void) {
    static NSString *cached = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{ cached = VFStr(WXGetSelfContact(), @selector(m_nsUsrName)); });
    return cached;
}

static id VFService(Class cls) {
    if (!cls) return nil;
    // MMContext currentContext getService:（WCR 唯一路径，已实证）
    Class mmctx = objc_getClass("MMContext");
    if (!mmctx || ![mmctx respondsToSelector:@selector(currentContext)]) return nil;
    @try {
        id ctx = ((id (*)(id, SEL))objc_msgSend)(mmctx, @selector(currentContext));
        if (ctx && [ctx respondsToSelector:@selector(getService:)]) {
            return ((id (*)(id, SEL, Class))objc_msgSend)(ctx, @selector(getService:), cls);
        }
    } @catch (NSException *e) {}
    return nil;
}

/// 语音类型判定（WCR FUN_008b50d8：IsVoiceMsg 优先，m_uiMessageType==0x22 兜底）
static BOOL VFIsVoiceMsg(id wrap) {
    if (!wrap) return NO;
    SEL isVoice = NSSelectorFromString(@"IsVoiceMsg");
    if ([wrap respondsToSelector:isVoice]) return VFBool(wrap, isVoice, NO);
    return VFUInt(wrap, NSSelectorFromString(@"m_uiMessageType"), 0) == 0x22;
}

static unsigned int VFMsgType(id wrap) {
    return VFUInt(wrap, NSSelectorFromString(@"m_uiMessageType"), 0);
}

/// SILK 帧时长解析（WCR CalcSilkMs）：帧数 * 20ms
static unsigned int VFCalcSilkMs(NSData *data) {
    if (data.length < 10) return 0;
    const unsigned char *b = (const unsigned char *)data.bytes;
    NSUInteger len = data.length;
    NSUInteger off = 0;
    if (b[0] == 0x02 && memcmp(b + 1, "#!SILK_V3", 9) == 0) off = 10;
    else if (memcmp(b, "#!SILK_V3", 9) == 0) off = 9;
    else return 0;
    if (off >= len) return 0;
    unsigned long frames = 0;
    NSUInteger p = off;
    while (p + 2 <= len) {
        unsigned int frameLen = (unsigned int)b[p] | ((unsigned int)b[p + 1] << 8);
        if (frameLen == 0xFFFF) break;                       // 无 0x02 前缀的 EOF 标记
        if (frameLen == 0 || frameLen > 0x1000) break;
        if (p + 2 + frameLen > len) break;                   // 越界
        frames++;
        p += 2 + frameLen;
        if (frames >= 100000) break;
    }
    return (unsigned int)(frames * 20);
}

// ─────────── 语音数据/时长（WCR FUN_008b6dec / FUN_008b792c / FUN_008b80a8 精读复刻） ───────────

/// 轻量 sanitize（WCR FUN_008b7d64 等价：去首尾空白/换行）
static NSString *VFCleanPath(NSString *p) {
    if (p.length == 0) return p;
    return [p stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
}

/// getVoicePath 候选展开（WCR FUN_008b80a8）：原路径优先；无扩展名时追加 aud/amr/silk/spx/opus
static NSArray<NSString *> *VFVoicePathCandidates(NSString *rawPath) {
    NSString *p = VFCleanPath(rawPath);
    if (p.length == 0) return @[];
    NSMutableArray<NSString *> *cands = [NSMutableArray arrayWithObject:p];
    if ([p pathExtension].length == 0) {
        for (NSString *ext in @[@"aud", @"amr", @"silk", @"spx", @"opus"]) {
            [cands addObject:[p stringByAppendingPathExtension:ext]];
        }
    }
    return cands;
}

/// 解析语音文件真实路径（WCR FUN_008b792c + FUN_008b6dec fallback）：
/// ① getVoicePath 候选逐个验证（存在且非目录）；② 全部未命中 → GetPathOfMesAudio(GetChatName, m_uiMesLocalID, GetDocPath)
/// （已播放语音的真实落盘 = <Doc>/<chatName>/<localID>.aud，getVoicePath 可能为空或指向不存在路径）
static NSString *VFResolveVoicePath(id wrap) {
    if (!wrap) return nil;
    NSFileManager *fm = [NSFileManager defaultManager];
    SEL gp = NSSelectorFromString(@"getVoicePath");
    if ([wrap respondsToSelector:gp]) {
        for (NSString *cand in VFVoicePathCandidates(VFStr(wrap, gp))) {
            BOOL isDir = NO;
            if ([fm fileExistsAtPath:cand isDirectory:&isDir] && !isDir) return cand;
        }
    }
    SEL chatNameSel = NSSelectorFromString(@"GetChatName");
    SEL localIdSel = NSSelectorFromString(@"m_uiMesLocalID");
    if (![wrap respondsToSelector:chatNameSel] || ![wrap respondsToSelector:localIdSel]) return nil;
    Class cu = objc_getClass("CUtility");
    SEL getPath = NSSelectorFromString(@"GetPathOfMesAudio:LocalID:DocPath:");
    SEL getDoc = NSSelectorFromString(@"GetDocPath");
    if (!cu || ![cu respondsToSelector:getPath] || ![cu respondsToSelector:getDoc]) return nil;
    NSString *chatName = VFCleanPath(VFStr(wrap, chatNameSel));
    unsigned int lid = VFUInt(wrap, localIdSel, 0);
    if (chatName.length == 0 || lid == 0) return nil;
    NSString *doc = ((id (*)(id, SEL))objc_msgSend)(cu, getDoc);
    NSString *p2 = VFCleanPath(((id (*)(id, SEL, id, unsigned int, id))objc_msgSend)(cu, getPath, chatName, lid, doc));
    if (p2.length == 0) return nil;
    BOOL isDir2 = NO;
    if ([fm fileExistsAtPath:p2 isDirectory:&isDir2] && !isDir2) return p2;
    return nil;
}

/// wrap 的语音数据（WCR FUN_008b6dec）：m_dtVoice 优先 → 解析路径读文件（未播放的收到语音两处都空 → nil）
static NSData *VFVoiceData(id wrap) {
    if (!wrap) return nil;
    id dt = VFValueKey(wrap, @"m_dtVoice");
    if ([dt isKindOfClass:[NSData class]] && [(NSData *)dt length] > 0) return dt;
    NSString *path = VFResolveVoicePath(wrap);
    if (path.length > 0) {
        // CI clang 无 dataWithContentsOfFile:options:length:error: 重载 → 整文件读（语音文件小）
        NSData *d = [NSData dataWithContentsOfFile:path options:0 error:nil];
        if (d.length == 0) d = [NSData dataWithContentsOfFile:path];
        if (d.length > 0) return d;
    }
    return nil;
}

/// 语音真实时长 ms：解析路径文件 SILK → m_dtVoice SILK → m_uiVoiceTime
static unsigned int VFRealDurationMS(id wrap) {
    if (!wrap) return 0;
    NSString *path = VFResolveVoicePath(wrap);
    if (path.length > 0) {
        NSData *d = [NSData dataWithContentsOfFile:path options:0 error:nil];
        unsigned int ms = VFCalcSilkMs(d);
        if (ms > 0) return ms;
    }
    id dt = VFValueKey(wrap, @"m_dtVoice");
    if ([dt isKindOfClass:[NSData class]]) {
        unsigned int ms = VFCalcSilkMs(dt);
        if (ms > 0) return ms;
    }
    return VFUInt(wrap, NSSelectorFromString(@"m_uiVoiceTime"), 0);
}

// ═══════════════════════════════════════════════════════════════
// ⑦ 语音转发：真实发送（WCR _WCRefineSendVoiceDataToChat = FUN_008c1298）
//    AddLocalMsg → 写音频文件 → SaveMesVoice → AudioSender ResendVoiceMsg
// ═══════════════════════════════════════════════════════════════

static BOOL VFSendVoiceDataToChat(NSData *data, unsigned int ms, NSString *chatName) {
    if (data.length == 0 || chatName.length == 0) return NO;
    NSString *wxid = VFSelfWxid();
    if (wxid.length == 0) { WPLog(@"VoiceFeat", @"[Fwd] 无 wxid"); return NO; }

    Class wrapCls = objc_getClass("CMessageWrap");
    if (!wrapCls) return NO;
    id wrap = nil;
    SEL init2 = NSSelectorFromString(@"initWithMsgType:nsFromUsr:");
    SEL init1 = NSSelectorFromString(@"initWithMsgType:");
    id allocd = ((id (*)(id, SEL))objc_msgSend)(wrapCls, @selector(alloc));
    if ([wrapCls instancesRespondToSelector:init2]) {
        wrap = ((id (*)(id, SEL, unsigned int, id))objc_msgSend)(allocd, init2, 0x22, wxid);
    } else if ([wrapCls instancesRespondToSelector:init1]) {
        wrap = ((id (*)(id, SEL, unsigned int))objc_msgSend)(allocd, init1, 0x22);
    }
    if (!wrap) { WPLog(@"VoiceFeat", @"[Fwd] CMessageWrap 合成失败"); return NO; }

    if (ms == 0) ms = 1000;
    if (ms > 60000) ms = 60000;

    VF_SET_I(wrap, @"setM_uiMessageType:", 0x22);
    SEL setFrom = NSSelectorFromString(@"setM_nsFromUsr:");
    if ([wrap respondsToSelector:setFrom]) ((void (*)(id, SEL, id))objc_msgSend)(wrap, setFrom, wxid);
    SEL setTo = NSSelectorFromString(@"setM_nsToUsr:");
    if ([wrap respondsToSelector:setTo]) ((void (*)(id, SEL, id))objc_msgSend)(wrap, setTo, chatName);

    unsigned int ct = 0;
    id msgMgr = VFService(objc_getClass("CMessageMgr"));
    SEL genTime = NSSelectorFromString(@"GenSendMsgTimeWithChatName:");
    if (msgMgr && [msgMgr respondsToSelector:genTime]) {
        @try { ct = ((unsigned int (*)(id, SEL, id))objc_msgSend)(msgMgr, genTime, chatName); } @catch (NSException *e) {}
    }
    if (ct == 0) ct = (unsigned int)[[NSDate date] timeIntervalSince1970];

    VF_SET_I(wrap, @"setM_uiCreateTime:", ct);
    VF_SET_I(wrap, @"setM_uiStatus:", 1);
    VF_SET_I(wrap, @"setM_uiDownloadStatus:", 9);   // 转发真实发送用 9（WCR FUN_008c1298）
    VF_SET_I(wrap, @"setM_bForward:", 1);
    VF_SET_I(wrap, @"setM_uiVoiceTime:", ms);
    VF_SET_I(wrap, @"setM_uiVoiceFormat:", 4);
    VF_SET_I(wrap, @"setM_uiVoiceEndFlag:", 1);
    VF_SET_I(wrap, @"setM_uiVoiceCancelFlag:", 0);
    VF_SET_I(wrap, @"setM_uiVoiceForwardFlag:", 1);
    SEL setDt = NSSelectorFromString(@"setM_dtVoice:");
    if ([wrap respondsToSelector:setDt]) ((void (*)(id, SEL, id))objc_msgSend)(wrap, setDt, data);

    NSString *xml = [NSString stringWithFormat:@"<msg><voicemsg voicelength=\"%u\" voiceformat=\"4\" forwardflag=\"0\" /></msg>", ms];
    SEL setContent = NSSelectorFromString(@"setM_nsContent:");
    if ([wrap respondsToSelector:setContent]) ((void (*)(id, SEL, id))objc_msgSend)(wrap, setContent, xml);

    id audioSender = VFService(objc_getClass("AudioSender"));
    SEL addLocal = NSSelectorFromString(@"AddLocalMsg:MsgWrap:");
    SEL resend = NSSelectorFromString(@"ResendVoiceMsg:MsgWrap:");
    if (!msgMgr || ![msgMgr respondsToSelector:addLocal] || !audioSender || ![audioSender respondsToSelector:resend]) {
        WPLog(@"VoiceFeat", @"[Fwd] CMessageMgr/AudioSender 不可用");
        return NO;
    }

    @try {
        ((void (*)(id, SEL, id, id))objc_msgSend)(msgMgr, addLocal, chatName, wrap);

        unsigned int lid = VFUInt(wrap, NSSelectorFromString(@"m_uiMesLocalID"), 0);
        NSString *path = nil;
        id cUtility = objc_getClass("CUtility");
        SEL getPath = NSSelectorFromString(@"GetPathOfMesAudio:LocalID:DocPath:");
        SEL getDoc = NSSelectorFromString(@"GetDocPath");
        if (cUtility && [cUtility respondsToSelector:getPath] && [cUtility respondsToSelector:getDoc]) {
            NSString *doc = ((id (*)(id, SEL))objc_msgSend)(cUtility, getDoc);
            path = ((id (*)(id, SEL, id, unsigned int, id))objc_msgSend)(cUtility, getPath, chatName, lid, doc);
        }
        if (path.length == 0 && audioSender) {
            SEL afn = NSSelectorFromString(@"getAudioFileName:LocalID:");
            if ([audioSender respondsToSelector:afn]) {
                path = ((id (*)(id, SEL, id, unsigned int))objc_msgSend)(audioSender, afn, chatName, lid);
            }
        }
        if (path.length == 0) path = VFStr(wrap, NSSelectorFromString(@"getVoicePath"));
        if (path.length == 0) { WPLog(@"VoiceFeat", @"[Fwd] 音频路径为空"); return NO; }

        NSError *mkErr = nil;
        [[NSFileManager defaultManager] createDirectoryAtPath:[path stringByDeletingLastPathComponent]
                                  withIntermediateDirectories:YES attributes:nil error:&mkErr];
        if (![data writeToFile:path atomically:YES] ||
            ![[NSFileManager defaultManager] fileExistsAtPath:path]) {
            WPLog(@"VoiceFeat", @"[Fwd] 音频写入失败 path=%@", path);
            return NO;
        }
        SEL setPath = NSSelectorFromString(@"setM_nsVoicePath:");
        if ([wrap respondsToSelector:setPath]) ((void (*)(id, SEL, id))objc_msgSend)(wrap, setPath, path);

        SEL save = NSSelectorFromString(@"SaveMesVoice:MsgWrap:");
        if ([msgMgr respondsToSelector:save]) {
            ((void (*)(id, SEL, id, id))objc_msgSend)(msgMgr, save, chatName, wrap);
        }
        ((void (*)(id, SEL, id, id))objc_msgSend)(audioSender, resend, chatName, wrap);
        WPLog(@"VoiceFeat", @"[Fwd] 已发送语音到 %@ (%ums, %lu字节)", chatName, ms, (unsigned long)data.length);
        return YES;
    } @catch (NSException *e) {
        WPLog(@"VoiceFeat", @"[Fwd] 发送异常: %@", e.reason);
        return NO;
    }
}

// ═══════════════════════════════════════════════════════════════
// ⑦ 转发 hook（WCR FUN_008b0408 / FUN_008b107c / FUN_008b1b3c）
// ═══════════════════════════════════════════════════════════════

/// 替身判定（WCR FUN_008c32a0）
static BOOL VFIsStubWrap(id wrap) {
    if (!wrap) return NO;
    id v = objc_getAssociatedObject(wrap, &kVFStubFlag);
    return [v isKindOfClass:[NSNumber class]] && [(NSNumber *)v boolValue];
}

/// 联系人 → 会话名（元素可能是 CContact 对象，也可能直接是 wxid 字符串）
static NSString *VFContactName(id contact) {
    if (!contact) return nil;
    if ([contact isKindOfClass:[NSString class]] && [(NSString *)contact length] > 0) return contact;
    NSString *n = VFStr(contact, NSSelectorFromString(@"m_nsUsrName"));
    if (n.length == 0) n = VFStr(contact, NSSelectorFromString(@"m_nsUserName"));
    return n;
}

/// 合成替身 wrap（WCR FUN_008bcaa4：msgType=1 文本、nsContent=" "、assoc 标记）
static id VFMakeStubWrap(id realWrap) {
    Class wrapCls = objc_getClass("CMessageWrap");
    if (!wrapCls || ![wrapCls instancesRespondToSelector:NSSelectorFromString(@"initWithMsgType:")]) return nil;
    id allocd = ((id (*)(id, SEL))objc_msgSend)(wrapCls, @selector(alloc));
    id stub = ((id (*)(id, SEL, unsigned int))objc_msgSend)(allocd, NSSelectorFromString(@"initWithMsgType:"), 1);
    if (!stub) return nil;
    NSString *from = VFStr(realWrap, NSSelectorFromString(@"m_nsFromUsr"));
    NSString *to = VFStr(realWrap, NSSelectorFromString(@"m_nsToUsr"));
    SEL setFrom = NSSelectorFromString(@"setM_nsFromUsr:");
    SEL setTo = NSSelectorFromString(@"setM_nsToUsr:");
    if (from && [stub respondsToSelector:setFrom]) ((void (*)(id, SEL, id))objc_msgSend)(stub, setFrom, from);
    if (to && [stub respondsToSelector:setTo]) ((void (*)(id, SEL, id))objc_msgSend)(stub, setTo, to);
    SEL setContent = NSSelectorFromString(@"setM_nsContent:");
    if ([stub respondsToSelector:setContent]) ((void (*)(id, SEL, id))objc_msgSend)(stub, setContent, @" ");
    objc_setAssociatedObject(stub, &kVFStubFlag, @YES, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return stub;
}

/// forwardMessage: hook（WCR FUN_008b0408）：语音 wrap → 存真 wrap + 替身给 orig
static void hook_FMLC_forwardMsg(id self, SEL _cmd, id wrap) {
    @try {
        if (wrap && VFIsVoiceMsg(wrap) && !VFIsStubWrap(wrap)) {
            objc_setAssociatedObject(self, &kVFRealWrapKey, wrap, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            id stub = VFMakeStubWrap(wrap);
            if (stub) {
                WPLog(@"VoiceFeat", @"[Fwd] forwardMessage: 语音 → 替身转发, 真实语音待联系人确认后直发");
                if (orig_FMLC_forwardMsg) ((void (*)(id, SEL, id))orig_FMLC_forwardMsg)(self, _cmd, stub);
                return;
            }
        }
    } @catch (NSException *e) { WPLog(@"VoiceFeat", @"[Fwd] forwardMessage: 异常 %@", e.reason); }
    if (orig_FMLC_forwardMsg) ((void (*)(id, SEL, id))orig_FMLC_forwardMsg)(self, _cmd, wrap);
}

/// ForwardMsg:ToContact: hook（WCR FUN_008b107c）：替身 → 真发语音，成功吞 orig
static void hook_FMLC_msgToContact(id self, SEL _cmd, id wrap, id contact) {
    @try {
        NSString *chatName = VFContactName(contact);
        if (chatName.length && VFIsStubWrap(wrap)) {
            id realWrap = objc_getAssociatedObject(self, &kVFRealWrapKey);
            if (realWrap) {
                NSData *data = VFVoiceData(realWrap);
                unsigned int ms = VFRealDurationMS(realWrap);
                if (data && VFSendVoiceDataToChat(data, ms, chatName)) {
                    objc_setAssociatedObject(self, &kVFRealWrapKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                    SEL done = NSSelectorFromString(@"onForwardMessageSend");
                    if ([self respondsToSelector:done]) ((void (*)(id, SEL))objc_msgSend)(self, done);
                    return; // 吞 orig，替身文本不发出
                }
                // 真发失败 → 落到 orig 兜底（WCR 同款：失败转发替身占位）
                objc_setAssociatedObject(self, &kVFRealWrapKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            } else {
                return; // 已处理过（sentFlag 场景，WCR 吞掉重复调用）
            }
        }
    } @catch (NSException *e) { WPLog(@"VoiceFeat", @"[Fwd] ForwardMsg 异常 %@", e.reason); }
    if (orig_FMLC_msgToContact) ((void (*)(id, SEL, id, id))orig_FMLC_msgToContact)(self, _cmd, wrap, contact);
}

/// ForwardMsgList:ToContact: hook（WCR FUN_008b1b3c）：列表替身 → 逐联系人直发
static void hook_FMLC_listToContact(id self, SEL _cmd, id msgList, id contactList) {
    @try {
        if ([msgList isKindOfClass:[NSArray class]] && [contactList isKindOfClass:[NSArray class]]) {
            // 无替身 → 与原转发零差异，直通（不重建容器）
            BOOL hasStub = NO;
            for (id w in (NSArray *)msgList) { if (VFIsStubWrap(w)) { hasStub = YES; break; } }
            if (!hasStub) {
                if (orig_FMLC_listToContact) ((void (*)(id, SEL, id, id))orig_FMLC_listToContact)(self, _cmd, msgList, contactList);
                return;
            }
            id realWrap = objc_getAssociatedObject(self, &kVFRealWrapKey);
            NSMutableArray *remaining = [NSMutableArray array];
            for (id wrap in (NSArray *)msgList) {
                if (VFIsStubWrap(wrap)) continue; // 替身不进 orig 列表（真发失败也不发替身，WCR 剔除语义）
                [remaining addObject:wrap];
            }
            if (realWrap) {
                NSData *data = VFVoiceData(realWrap);
                unsigned int ms = VFRealDurationMS(realWrap);
                BOOL allOK = (data != nil);
                if (data) {
                    for (id contact in (NSArray *)contactList) {
                        NSString *chatName = VFContactName(contact);
                        if (!chatName.length || !VFSendVoiceDataToChat(data, ms, chatName)) { allOK = NO; break; }
                    }
                }
                objc_setAssociatedObject(self, &kVFRealWrapKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                if (allOK) {
                    SEL done = NSSelectorFromString(@"onForwardMessageSend");
                    if ([self respondsToSelector:done]) ((void (*)(id, SEL))objc_msgSend)(self, done);
                    if (remaining.count == 0) return; // 全部成功且无非语音 → 吞 orig
                }
            } else if (remaining.count == 0) {
                return; // 已处理过（重复调用）→ 吞掉，避免空格文本发出
            }
            if (remaining.count > 0) {
                if (orig_FMLC_listToContact) ((void (*)(id, SEL, id, id))orig_FMLC_listToContact)(self, _cmd, remaining, contactList);
            }
            return;
        }
    } @catch (NSException *e) { WPLog(@"VoiceFeat", @"[Fwd] ForwardMsgList 异常 %@", e.reason); }
    if (orig_FMLC_listToContact) ((void (*)(id, SEL, id, id))orig_FMLC_listToContact)(self, _cmd, msgList, contactList);
}

// ═══════════════════════════════════════════════════════════════
// ⑦ 转发入口：语音气泡长按 → actionSheet（WCR FUN_008b6378 同流程）
// ═══════════════════════════════════════════════════════════════

static id VFCellWrap(UIView *cell) {
    id vm = VFValueKey(cell, @"viewModel");
    id wrap = nil;
    SEL mw = NSSelectorFromString(@"messageWrap");
    if (vm && [vm respondsToSelector:mw]) wrap = ((id (*)(id, SEL))objc_msgSend)(vm, mw);
    if (!wrap) {
        SEL gmw = NSSelectorFromString(@"getMediaWrap");
        if ([cell respondsToSelector:gmw]) wrap = ((id (*)(id, SEL))objc_msgSend)(cell, gmw);
    }
    return wrap;
}

/// 取 cell responder 链上第一个 UIViewController（WCR FUN_008b6c68 同款 = 聊天页）
/// 菜单弹出瞬间全局 topVC 是菜单宿主，从它 present 会被吞；WCR 就是从 cell 链取聊天页
static UIViewController *VFVCFromResponderChain(UIView *view) {
    UIResponder *r = view.nextResponder;
    while (r) {
        if ([r isKindOfClass:[UIViewController class]]) return (UIViewController *)r;
        r = r.nextResponder;
    }
    return nil;
}

static void VFStartForwardFromCell(UIView *cell) {
    @try {
        if (![VoiceConfig shared].voiceForwardEnabled) return;
        id wrap = VFCellWrap(cell);
        if (!wrap) {
            WPLog(@"VoiceFeat", @"[Fwd] 菜单转发中止：cell 取不到 wrap (cell=%@)", NSStringFromClass([cell class]));
            return;
        }
        if (!VFIsVoiceMsg(wrap)) {
            WPLog(@"VoiceFeat", @"[Fwd] 菜单转发中止：非语音消息 type=%u", VFMsgType(wrap));
            return;
        }
        NSData *data = VFVoiceData(wrap);
        if (!data) {
            WPLog(@"VoiceFeat", @"[Fwd] 语音数据为空 resolvedPath=%@ localID=%u dt=%@",
                  VFResolveVoicePath(wrap), VFUInt(wrap, NSSelectorFromString(@"m_uiMesLocalID"), 0),
                  VFValueKey(wrap, @"m_dtVoice"));
            WPShowToast(@"语音数据不存在，请先播放语音后再转发");
            return;
        }
        Class fmgCls = NSClassFromString(@"ForwardMessageMgr");
        id svc = VFService(fmgCls);
        SEL fwd = NSSelectorFromString(@"forwardMessage:fromViewController:");
        UIViewController *topVC = VFVCFromResponderChain(cell);
        WPLog(@"VoiceFeat", @"[Fwd] fromVC=%@", NSStringFromClass([topVC class]));
        if (!svc || !fmgCls || ![svc respondsToSelector:fwd] || !topVC) {
            WPShowToast(@"当前微信版本不支持语音转发");
            return;
        }
        WPLog(@"VoiceFeat", @"[Fwd] 发起官方转发 ms=%u data=%lu字节", VFRealDurationMS(wrap), (unsigned long)data.length);
        ((void (*)(id, SEL, id, id))objc_msgSend)(svc, fwd, wrap, topVC);
    } @catch (NSException *e) {
        WPLog(@"VoiceFeat", @"[Fwd] 入口异常: %@", e.reason);
        WPShowToast(@"语音转发失败");
    }
}

// ═══════════════════════════════════════════════════════════════
// ⑦ 原生长按菜单追加「转发」（WCR FUN_008ad5e0 实锤：MSHookMessageEx
//    VoiceMessageCellView filteredMenuItems:；同小丑 JokerHook 的 MMMenuItem 模式）
// ═══════════════════════════════════════════════════════════════

/// 菜单项 action：注册到 VoiceMessageCellView 的 vfMenuForward:（self = cellView，sender 由菜单传入）
/// 对齐 WCR FUN_008adfc0：带冒号 SEL + 三参 IMP（types v@:@）
static void vfMenuForwardAction_IMP(id self, SEL _cmd, id sender) {
    WPLog(@"VoiceFeat", @"[Fwd] 菜单点击 self=%@ sender=%@",
          NSStringFromClass([(id)self class]), sender ? NSStringFromClass([sender class]) : @"nil");
    if ([self isKindOfClass:[UIView class]]) VFStartForwardFromCell((UIView *)self);
    else WPLog(@"VoiceFeat", @"[Fwd] 菜单点击 self 非 UIView，忽略");
}

/// 去重（WCR FUN_008b526c 等价）：菜单里已有「转发/Forward」标题的项则不追加
static BOOL VFMenuHasForwardItem(NSArray *items) {
    SEL ts = NSSelectorFromString(@"title");
    for (id it in items) {
        if (![it respondsToSelector:ts]) continue;
        NSString *t = nil;
        @try { t = ((id (*)(id, SEL))objc_msgSend)(it, ts); } @catch (NSException *e) {}
        if ([t isKindOfClass:[NSString class]] &&
            ([t containsString:@"转发"] || [t containsString:@"Forward"])) return YES;
    }
    return NO;
}

static id hook_VMC_filteredMenu(id self, SEL _cmd, id filterArg) {
    id items = orig_VMC_filteredMenu
        ? ((id (*)(id, SEL, id))orig_VMC_filteredMenu)(self, _cmd, filterArg)
        : filterArg;
    @try {
        if (![VoiceConfig shared].voiceForwardEnabled) return items;
        if (!VFIsVMC(self)) return items;
        id wrap = VFCellWrap(self);
        if (!wrap || !VFIsVoiceMsg(wrap)) return items;   // WCR FUN_008b4eac + FUN_008b50d8
        if (![items isKindOfClass:[NSArray class]]) items = @[];
        if (VFMenuHasForwardItem(items)) return items;    // WCR FUN_008b526c
        Class mmItemCls = objc_getClass("MMMenuItem");
        SEL initSel = NSSelectorFromString(@"initWithTitle:svgName:action:");
        if (!mmItemCls || ![mmItemCls instancesRespondToSelector:initSel]) return items;
        NSString *icon = [NSString stringWithUTF8String:"share_filled"];  // WCR 图标名
        id mmItem = ((id (*)(id, SEL, id, id, SEL))objc_msgSend)(
            [mmItemCls alloc], initSel, @"转发", icon, NSSelectorFromString(@"vfMenuForward:"));
        if (!mmItem) return items;
        NSMutableArray *newItems = [items mutableCopy];
        [newItems addObject:mmItem];
        return newItems;
    } @catch (NSException *e) {
        WPLog(@"VoiceFeat", @"[Fwd] 菜单 hook 异常: %@", e.reason);
        return items;
    }
}

// ═══════════════════════════════════════════════════════════════
// ③ 进度拖动：浮层 + 手势 + 播放跳转（WCR VoiceMessageCellView 4 hook 体系）
// ═══════════════════════════════════════════════════════════════

static NSString *VFFmtMS(unsigned int ms) {
    unsigned int s = ms / 1000;
    return [NSString stringWithFormat:@"%u:%02u", s / 60, s % 60];
}

static UIView *VFVoiceBar(UIView *cell) {
    SEL bg = NSSelectorFromString(@"getBgImageView");
    if (![cell respondsToSelector:bg]) return nil;
    @try {
        id bar = ((id (*)(id, SEL))objc_msgSend)(cell, bg);
        if (![bar isKindOfClass:[UIView class]]) return nil;
        UIView *barView = bar;
        if (!barView.superview || barView.hidden || barView.alpha < 0.01) return nil;
        return barView;
    } @catch (NSException *e) { return nil; }
}

static UIView *VFOverlay(UIView *cell) { return objc_getAssociatedObject(cell, &kVFOverlay); }

static void VFOverlayShow(UIView *cell, unsigned int cur, unsigned int tot, BOOL anim) {
    UIView *bar = VFVoiceBar(cell);
    if (!bar) return;
    UIView *ov = VFOverlay(cell);
    if (!ov) {
        ov = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 130, 30)];
        ov.backgroundColor = [UIColor colorWithWhite:0 alpha:0.82];
        ov.layer.cornerRadius = 8;
        ov.userInteractionEnabled = NO;
        UILabel *lb = [[UILabel alloc] initWithFrame:ov.bounds];
        lb.tag = 0x4D564631;
        lb.textColor = UIColor.whiteColor;
        lb.font = [UIFont systemFontOfSize:13 weight:UIFontWeightMedium];
        lb.textAlignment = NSTextAlignmentCenter;
        lb.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
        [ov addSubview:lb];
        objc_setAssociatedObject(cell, &kVFOverlay, ov, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    CGRect barRect = [bar convertRect:bar.bounds toView:cell];
    CGFloat w = 130;
    CGFloat x = CGRectGetMidX(barRect) - w / 2;
    CGFloat y = CGRectGetMinY(barRect) - 42;
    if (y < 4) y = CGRectGetMaxY(barRect) + 12;
    ov.frame = CGRectMake(x, y, w, 30);
    UILabel *lb = [ov viewWithTag:0x4D564631];
    lb.text = [NSString stringWithFormat:@"%@ / %@", VFFmtMS(cur), VFFmtMS(tot)];
    if (!ov.superview) [cell addSubview:ov];
    [cell bringSubviewToFront:ov];
    if (ov.alpha < 0.95) {
        if (anim) {
            ov.alpha = 0;
            [UIView animateWithDuration:0.15 animations:^{ ov.alpha = 1; }];
        } else {
            ov.alpha = 1;
        }
    }
}

static void VFOverlayUpdate(UIView *cell, unsigned int cur, unsigned int tot, BOOL anim) {
    UIView *ov = VFOverlay(cell);
    if (!ov) { VFOverlayShow(cell, cur, tot, anim); return; }
    UILabel *lb = [ov viewWithTag:0x4D564631];
    lb.text = [NSString stringWithFormat:@"%@ / %@", VFFmtMS(cur), VFFmtMS(tot)];
}

static void VFOverlayHide(UIView *cell) {
    objc_setAssociatedObject(cell, &kVFDragging, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    UIView *ov = VFOverlay(cell);
    if (!ov) return;
    objc_setAssociatedObject(cell, &kVFOverlay, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [UIView animateWithDuration:0.2 animations:^{ ov.alpha = 0; }
                     completion:^(BOOL finished) { [ov removeFromSuperview]; }];
}

static void VFSetupPan(UIView *cell) {
    if (![VoiceConfig shared].voiceDragProgressEnabled) {
        UIPanGestureRecognizer *g = objc_getAssociatedObject(cell, &kVFPanGesture);
        if (g) g.enabled = NO;
        VFOverlayHide(cell);
        return;
    }
    UIPanGestureRecognizer *g = objc_getAssociatedObject(cell, &kVFPanGesture);
    if (!g) {
        g = [[UIPanGestureRecognizer alloc] initWithTarget:g_vfInstance action:@selector(vfpsHandlePan:)];
        g.maximumNumberOfTouches = 1;
        g.minimumNumberOfTouches = 1;
        g.cancelsTouchesInView = YES;
        g.delaysTouchesBegan = NO;
        g.delaysTouchesEnded = NO;
        g.delegate = g_vfInstance;
        objc_setAssociatedObject(cell, &kVFPanGesture, g, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        [cell addGestureRecognizer:g];
    }
    g.enabled = (cell.window != nil);
}

/// 播放跳转（WCR _WCRVoiceProgressSeekPlayFromTime）：BeginPlaying:fromTime:（fromTime 为 int 毫秒）
static BOOL VFPlayFromTime(UIView *cell, unsigned int ms) {
    id wrap = VFCellWrap(cell);
    if (!wrap) return NO;
    unsigned int real = VFRealDurationMS(wrap);
    if (real > 200 && real < (unsigned long long)ms + 200) ms = real - 200;
    id target = nil;
    SEL gvc = NSSelectorFromString(@"getViewController");
    if ([cell respondsToSelector:gvc]) {
        @try { target = ((id (*)(id, SEL))objc_msgSend)(cell, gvc); } @catch (NSException *e) {}
    }
    if (!target) target = VFValueKey(cell, @"m_delegate");
    SEL begin = NSSelectorFromString(@"BeginPlaying:fromTime:");
    if (!target || ![target respondsToSelector:begin]) return NO;
    SEL check = NSSelectorFromString(@"checkVoiceState:");
    if ([cell respondsToSelector:check]) {
        @try { ((void (*)(id, SEL, long long))objc_msgSend)(cell, check, 0); } @catch (NSException *e) {}
    }
    @try {
        ((void (*)(id, SEL, id, unsigned int))objc_msgSend)(target, begin, wrap, ms);
        WPLog(@"VoiceFeat", @"[VPS] 跳转播放 ms=%u", ms);
        return YES;
    } @catch (NSException *e) {
        WPLog(@"VoiceFeat", @"[VPS] 跳转异常: %@", e.reason);
        return NO;
    }
}

// ═══════════════════════════════════════════════════════════════
// ② 自动转文字（WCR VoiceMessageCellView init+onAppear hook）
// ═══════════════════════════════════════════════════════════════

static void VFTryAutoTranslate(UIView *cellView) {
    @try {
        VoiceConfig *cfg = [VoiceConfig shared];
        if (!cfg.voiceAutoToTextEnabled) return;
        if (objc_getAssociatedObject(cellView, &kVFAutoTxDone)) return;
        id wrap = VFCellWrap(cellView);
        if (!wrap) return;
        // 收到的语音才自动转（WCR: isSenderFromMsgWrap 为假）
        BOOL isSender = NO;
        SEL isSnd = NSSelectorFromString(@"isSenderFromMsgWrap");
        if ([wrap respondsToSelector:isSnd]) isSender = VFBool(wrap, isSnd, NO);
        else {
            NSString *from = VFStr(wrap, NSSelectorFromString(@"m_nsFromUsr"));
            isSender = from && [from isEqualToString:VFSelfWxid()];
        }
        if (isSender) return;
        if (!VFIsVoiceMsg(wrap) && VFMsgType(wrap) != 0x22) return;
        // 未播放的收到语音无数据 → 跳过（WCR 同款限制）
        if (!VFVoiceData(wrap)) return;
        id vm = VFValueKey(cellView, @"viewModel");
        if (!vm) return;
        // 已有结果 / 翻译中 → 跳过
        if (VFBool(vm, NSSelectorFromString(@"hasLocalTranslateResult"), NO)) return;
        if (VFBool(vm, NSSelectorFromString(@"isTranslateEnd"), YES)) return;
        if (VFBool(vm, NSSelectorFromString(@"canShowTranslateLoadingView"), NO)) return;
        objc_setAssociatedObject(cellView, &kVFAutoTxDone, @YES, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        __weak UIView *weakCell = cellView;
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.3 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            UIView *strongCell = weakCell;
            if (!strongCell || strongCell.window == nil) return;
            SEL onTrans = NSSelectorFromString(@"onVoiceTrans:");
            if ([strongCell respondsToSelector:onTrans]) {
                ((void (*)(id, SEL, BOOL))objc_msgSend)(strongCell, onTrans, NO);
            } else {
                SEL tv = NSSelectorFromString(@"translateVoice");
                id vm2 = VFValueKey(strongCell, @"viewModel");
                if (vm2 && [vm2 respondsToSelector:tv]) ((void (*)(id, SEL))objc_msgSend)(vm2, tv);
            }
            WPLog(@"VoiceFeat", @"[AutoTX] 已触发转文字");
        });
    } @catch (NSException *e) {
        WPLog(@"VoiceFeat", @"[AutoTX] 异常: %@", e.reason);
    }
}

// ═══════════════════════════════════════════════════════════════
// hook 函数
// ═══════════════════════════════════════════════════════════════

// ── ① 假秒数（WCR FUN_008f2e74/008f4084：挂在 UploadVoiceWrap setM_uiVoiceTime:，发送端写入）──
// 微信端语音秒数上限 60（WCR 同样被 60 封顶），故配置上限 60
static unsigned int VFFakeVoiceMs(unsigned int ms) {
    NSInteger sec = [VoiceConfig shared].voiceFakeDuration;
    if (sec <= 0) return ms > 60000 ? 60000 : ms;   // 开关关：WCR 仍 clamp 到 60000
    if (sec < 1) sec = 1;
    if (sec > 60) sec = 60;
    return (unsigned int)(sec * 1000);
}

static void hook_UVW_setVoiceTime_(id self, SEL _cmd, unsigned int ms) {
    unsigned int v = VFFakeVoiceMs(ms);
    if (orig_UVW_setVoiceTime) ((void (*)(id, SEL, unsigned int))orig_UVW_setVoiceTime)(self, _cmd, v);
}

// ── ② VoiceMessageCellView init / onAppear ──
static id hook_VMC_init(id self, SEL _cmd, id wrap, id contact, id chat) {
    id r = orig_VMC_init ? ((id (*)(id, SEL, id, id, id))orig_VMC_init)(self, _cmd, wrap, contact, chat) : self;
    if (VFIsVMC(self)) objc_setAssociatedObject(self, &kVFVMCInitFlag, @YES, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return r;
}

static void hook_VMC_onAppear(id self, SEL _cmd) {
    if (orig_VMC_onAppear) ((void (*)(id, SEL))orig_VMC_onAppear)(self, _cmd);
    if (VFIsVMC(self)) VFTryAutoTranslate(self);
}

// ── ③ VoiceMessageCellView 生命周期 ──
static void hook_VMC_didMoveToWindow(id self, SEL _cmd) {
    if (orig_VMC_didMoveToWindow) ((void (*)(id, SEL))orig_VMC_didMoveToWindow)(self, _cmd);
    if (!VFIsVMC(self)) return; // 可能沿链 hook 到基类/UIView，非语音 cell 直通
    @try {
        UIView *cell = self;
        if (cell.window == nil) { VFOverlayHide(cell); return; }
        VFSetupPan(cell);
    } @catch (NSException *e) {}
}

static void hook_VMC_layoutContentView(id self, SEL _cmd) {
    if (orig_VMC_layoutContentView) ((void (*)(id, SEL))orig_VMC_layoutContentView)(self, _cmd);
    if (!VFIsVMC(self)) return;
    @try {
        UIView *cell = self;
        if (cell.window == nil) return;
        VFSetupPan(cell);
    } @catch (NSException *e) {}
}

static void VFMaybeAutoRate(UIView *cell) {
    if (![VoiceConfig shared].voiceAutoSpeedEnabled) return;
    __weak UIView *weakCell = cell;
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.3 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        UIView *strongCell = weakCell;
        if (!strongCell || strongCell.window == nil) return;
        id vm = VFValueKey(strongCell, @"viewModel");
        SEL rate = NSSelectorFromString(@"onClickPlayRate");
        if (!vm || ![vm respondsToSelector:rate]) return;
        g_autoRateGuard = 1;
        @try { ((void (*)(id, SEL))objc_msgSend)(vm, rate); } @catch (NSException *e) {}
        g_autoRateGuard = 0;
        id btn = VFValueKey(strongCell, @"m_playRateButton");
        SEL setTitle = NSSelectorFromString(@"setTitle:forState:");
        SEL titleSel = NSSelectorFromString(@"playRateTitle");
        if ([btn respondsToSelector:setTitle]) {
            id title = [vm respondsToSelector:titleSel] ? ((id (*)(id, SEL))objc_msgSend)(vm, titleSel) : nil;
            if ([title isKindOfClass:[NSString class]]) {
                ((void (*)(id, SEL, id, unsigned long))objc_msgSend)(btn, setTitle, title, (unsigned long)UIControlStateNormal);
            }
        }
        WPLog(@"VoiceFeat", @"[Rate] 已触发自动倍速");
    });
}

// ── ⑤ 点击转后台（WCR FUN_01f55590：返回 YES 吞掉 orig 点击，转 onMinimize 悬浮播放）──
static BOOL VFClickToMinimize(id cell) {
    if (![VoiceConfig shared].voiceBackgroundPlayEnabled) return NO;
    if (g_bgGuard) return NO;                       // 我们触发的 onMinimize 内部再进点击 → 放行
    if (!VFIsVMC(cell)) return NO;
    // WCR 极性（FUN_01f56270 返回 isPlaying；FUN_01f55590 中 R==0→minimize、R!=0→orig）：
    // 未播放 → 转后台悬浮播放；正在播放 → 放行（正常暂停）。vm 缺失时 WCR 同样走 minimize。
    id vm = VFValueKey(cell, @"viewModel");
    SEL isPlaying = NSSelectorFromString(@"isPlaying");
    if (vm && [vm respondsToSelector:isPlaying] && VFBool(vm, isPlaying, NO)) return NO;
    SEL minimize = NSSelectorFromString(@"onMinimize");
    if (![cell respondsToSelector:minimize]) {
        WPLog(@"VoiceFeat", @"[BgPlay] cell 无 onMinimize，放行");
        return NO;
    }
    // 0.35s 防重（WCR assoc NSNumber 时间戳）；窗口内吞掉点击但不重复触发
    NSDate *now = [NSDate date];
    NSNumber *last = objc_getAssociatedObject(cell, &kVFMinTs);
    if (last && now.timeIntervalSinceReferenceDate - last.doubleValue < 0.35) return YES;
    objc_setAssociatedObject(cell, &kVFMinTs, @(now.timeIntervalSinceReferenceDate), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    g_bgGuard = 1;
    @try { ((void (*)(id, SEL))objc_msgSend)(cell, minimize); }
    @catch (NSException *e) { WPLog(@"VoiceFeat", @"[BgPlay] onMinimize 异常 %@", e.reason); }
    g_bgGuard = 0;
    WPLog(@"VoiceFeat", @"[BgPlay] 点击→onMinimize 后台播放");
    return YES;
}

// ── ④⑤ 点击入口（WCR hookVoiceClickEntriesInClass: 挂 4 个；未吞时 orig 后触发自动倍速）──
static void VFClickCommon(id self, SEL _cmd, IMP orig, BOOL isVMC) {
    if (!VFClickToMinimize(self)) {
        if (orig) ((void (*)(id, SEL))orig)(self, _cmd);
        if (isVMC) {
            @try { VFOverlayHide(self); VFMaybeAutoRate(self); } @catch (NSException *e) {}
        }
    }
}

static void hook_VMC_onClick_(id self, SEL _cmd) {
    VFClickCommon(self, _cmd, orig_VMC_onClick, VFIsVMC(self));
}

static void hook_VMC_onClickArg_(id self, SEL _cmd, id arg) {
    if (!VFClickToMinimize(self)) {
        if (orig_VMC_onClickArg) ((void (*)(id, SEL, id))orig_VMC_onClickArg)(self, _cmd, arg);
        if (VFIsVMC(self)) {
            @try { VFOverlayHide(self); VFMaybeAutoRate(self); } @catch (NSException *e) {}
        }
    }
}

static void hook_VMC_respClick_(id self, SEL _cmd) {
    VFClickCommon(self, _cmd, orig_VMC_respClick, VFIsVMC(self));
}

static void hook_VMC_respClickArg_(id self, SEL _cmd, id arg) {
    if (!VFClickToMinimize(self)) {
        if (orig_VMC_respClickArg) ((void (*)(id, SEL, id))orig_VMC_respClickArg)(self, _cmd, arg);
        if (VFIsVMC(self)) {
            @try { VFOverlayHide(self); VFMaybeAutoRate(self); } @catch (NSException *e) {}
        }
    }
}

// ── ④ canShowPlayRateButton ──
static BOOL hook_VM_canShowRate(id self, SEL _cmd) {
    BOOL v = orig_VM_canShowRate ? ((BOOL (*)(id, SEL))orig_VM_canShowRate)(self, _cmd) : NO;
    if (!v && [VoiceConfig shared].voiceAutoSpeedEnabled) return YES;
    return v;
}

// ── ④ 触感吞除 ──
static void hook_UI_impact(id self, SEL _cmd) {
    if (g_autoRateGuard) return;
    if (orig_UI_impact) ((void (*)(id, SEL))orig_UI_impact)(self, _cmd);
}

static void hook_UI_impactInt(id self, SEL _cmd, double intensity) {
    if (g_autoRateGuard) return;
    if (orig_UI_impactInt) ((void (*)(id, SEL, double))orig_UI_impactInt)(self, _cmd, intensity);
}

// ── ⑤ 背景播放 ──
static void hook_Min_absorbTap(id self, SEL _cmd) {
    @try {
        if ([VoiceConfig shared].voiceBackgroundPlayEnabled) {
            id svc = VFService(objc_getClass("MsgPlayingFacade"));
            SEL showing = NSSelectorFromString(@"isShowingMinimizeView");
            if (svc && [svc respondsToSelector:showing] && VFBool(svc, showing, NO)) {
                SEL close = NSSelectorFromString(@"onCloseMinimizeView");
                if ([svc respondsToSelector:close]) ((void (*)(id, SEL))objc_msgSend)(svc, close);
                SEL hide = NSSelectorFromString(@"hideMinimizeView");
                if ([svc respondsToSelector:hide]) ((void (*)(id, SEL))objc_msgSend)(svc, hide);
                WPLog(@"VoiceFeat", @"[BgPlay] 关闭浮窗，语音继续播放");
                return; // 吞 orig：不执行默认的暂停/回收
            }
        }
    } @catch (NSException *e) { WPLog(@"VoiceFeat", @"[BgPlay] 异常 %@", e.reason); }
    if (orig_Min_absorbTap) ((void (*)(id, SEL))orig_Min_absorbTap)(self, _cmd);
}

// ═══ 通话播语音仲裁 hook（WCR WCRefineVoicePlayBypass 同款极简垫片）═══
// WCR 反编译实证（FUN_01f9fe60/FUN_01f9fff4/FUN_01fa01fc）：hook 体仅
// 「读配置开关 → 开=返回硬编码值 / 关=直通 orig」，零 AVAudioSession IPC、
// 零日志 IO、零 ObjC 重活、零 @try。此前 Mio 诊断版垫片（AVAudioSession
// category 查询 + WPLog 全量落盘 + depth 计数 + VFIsWAM）在点小程序拉起
// WebKit 音频会话的事务窗口内 SEGV——仲裁问询路径上禁止任何多余动作
//（09-24 A/B 实验实锤，停用即不闪退）。
// WCR 还挂 canSetActiveWithScene:groupName:（本版本不存在，run 2072 实证
// SKIP），其有效 hook 即以下 3 个，同版本真机验证功能正常。
// ⚠️ 开关开启时全天候放行（WCR 同语义）；WCR 的配套会话管理
//（ensureAudioPlaying：Playback+mixWithOthers/silentPlayer/yieldedFor*）
// 未复刻——通话播语音体验异常再补。

static BOOL hook_WAM_mixList(id self, SEL _cmd, id list) {
    if ([VoiceConfig shared].voiceCallPlayEnabled) return YES;   // WCR FUN_01fa01fc
    return orig_WAM_mixList ? ((BOOL (*)(id, SEL, id))orig_WAM_mixList)(self, _cmd, list) : NO;
}

static BOOL hook_WAM_mixModule(id self, SEL _cmd, id module) {
    if ([VoiceConfig shared].voiceCallPlayEnabled) return YES;
    return orig_WAM_mixModule ? ((BOOL (*)(id, SEL, id))orig_WAM_mixModule)(self, _cmd, module) : NO;
}

static BOOL hook_WAM_interrupt(id self, SEL _cmd, id arg) {
    if ([VoiceConfig shared].voiceCallPlayEnabled) return NO;    // 不中断（WCR FUN_01f9fff4）
    return orig_WAM_interrupt ? ((BOOL (*)(id, SEL, id))orig_WAM_interrupt)(self, _cmd, arg) : YES;
}

// ═══════════════════════════════════════════════════════════════
// @interface 实现：手势 delegate + pan/长按 handler
// ═══════════════════════════════════════════════════════════════

@interface VoiceFeaturesHook () <UIGestureRecognizerDelegate>
- (void)vfpsHandlePan:(UIPanGestureRecognizer *)gr;
@end

@implementation VoiceFeaturesHook

+ (void)load {
    g_vfInstance = [[self alloc] init];
}

+ (void)install {
    WPLog(@"VoiceFeat", @"install 开始");
    [self hookVoiceCell];
    [self hookUploadVoiceTime];
    [self hookFeedback];
    [self hookMinimize];
    [self hookAudioModule];
    [self hookForwardLogic];
    WPLog(@"VoiceFeat", @"install 完成");
}

/// hook 安装 helper：实例方法（orig IMP 自动回填）
#define VF_HOOK(clsObj, selName, hookFn, origPtr) do { \
    SEL s_ = selName ? NSSelectorFromString(@(selName)) : NULL; \
    Method m_ = (clsObj && s_) ? class_getInstanceMethod(clsObj, s_) : NULL; \
    if (m_) { \
        MSHookMessageEx(clsObj, s_, (IMP)hookFn, &origPtr); \
        WPLog(@"VoiceFeat", @"hook OK: %s", selName); \
    } else { \
        WPLog(@"VoiceFeat", @"hook SKIP(无方法): %s", selName); \
    } \
} while (0)

/// hook 安装 helper：类方法（metaclass）
#define VF_HOOK_META(clsObj, selName, hookFn, origPtr) do { \
    SEL s_ = selName ? NSSelectorFromString(@(selName)) : NULL; \
    Class meta_ = (clsObj && s_) ? object_getClass(clsObj) : nil; \
    Method m_ = meta_ ? class_getInstanceMethod(meta_, s_) : NULL; \
    if (m_) { \
        MSHookMessageEx(meta_, s_, (IMP)hookFn, &origPtr); \
        WPLog(@"VoiceFeat", @"hook OK(类方法): %s", selName); \
    } else { \
        WPLog(@"VoiceFeat", @"hook SKIP(无类方法): %s", selName); \
    } \
} while (0)

+ (void)hookVoiceCell {
    Class cellCls = objc_getClass("VoiceMessageCellView");
    if (!cellCls) { WPLog(@"VoiceFeat", @"VoiceMessageCellView 不存在，跳过语音 cell hooks"); return; }
    // ② init + onAppear
    VF_HOOK(cellCls, "initWithMessageWrap:contact:chat:", hook_VMC_init, orig_VMC_init);
    VF_HOOK(cellCls, "onAppear", hook_VMC_onAppear, orig_VMC_onAppear);
    // ③ 生命周期 + ⑦ 长按挂载
    VF_HOOK(cellCls, "didMoveToWindow", hook_VMC_didMoveToWindow, orig_VMC_didMoveToWindow);
    VF_HOOK(cellCls, "layoutContentView", hook_VMC_layoutContentView, orig_VMC_layoutContentView);
    // ④⑤ 点击入口（WCR hookVoiceClickEntriesInClass: 同款 4 个，逐个存在性检查）
    VF_HOOK(cellCls, "onClick", hook_VMC_onClick_, orig_VMC_onClick);
    VF_HOOK(cellCls, "onClick:", hook_VMC_onClickArg_, orig_VMC_onClickArg);
    VF_HOOK(cellCls, "responseUserClick", hook_VMC_respClick_, orig_VMC_respClick);
    VF_HOOK(cellCls, "responseUserClick:", hook_VMC_respClickArg_, orig_VMC_respClickArg);
    // ④ 倍速按钮显示
    Class vmCls = objc_getClass("VoiceMessageViewModel");
    if (vmCls) VF_HOOK(vmCls, "canShowPlayRateButton", hook_VM_canShowRate, orig_VM_canShowRate);
    // ⑦ 原生长按菜单追加「转发」（WCR 挂载点 filteredMenuItems:，已实证）
    SEL fmi = NSSelectorFromString(@"filteredMenuItems:");
    Method fm = class_getInstanceMethod(cellCls, fmi);
    if (fm) {
        MSHookMessageEx(cellCls, fmi, (IMP)hook_VMC_filteredMenu, &orig_VMC_filteredMenu);
        WPLog(@"VoiceFeat", @"hook OK: filteredMenuItems: (转发菜单项)");
        SEL act = NSSelectorFromString(@"vfMenuForward:");
        if (![cellCls instancesRespondToSelector:act]) {
            class_addMethod(cellCls, act, (IMP)vfMenuForwardAction_IMP, "v@:@");
        }
    } else {
        WPLog(@"VoiceFeat", @"hook SKIP: 语音 cell 无 filteredMenuItems:");
    }
}

+ (void)hookUploadVoiceTime {
    // ① 假秒数：本版本 CMessageWrap 无 m_uiVoiceTime（SKIP 实证），WCR 实际挂在发送端 UploadVoiceWrap
    Class uvw = objc_getClass("UploadVoiceWrap");
    if (!uvw) { WPLog(@"VoiceFeat", @"UploadVoiceWrap 不存在，跳过假秒数 hook"); return; }
    VF_HOOK(uvw, "setM_uiVoiceTime:", hook_UVW_setVoiceTime_, orig_UVW_setVoiceTime);
}

+ (void)hookFeedback {
    Class fbCls = objc_getClass("UIImpactFeedbackGenerator");
    if (!fbCls) return;
    VF_HOOK(fbCls, "impactOccurred", hook_UI_impact, orig_UI_impact);
    VF_HOOK(fbCls, "impactOccurredWithIntensity:", hook_UI_impactInt, orig_UI_impactInt);
}

+ (void)hookMinimize {
    Class minCls = objc_getClass("MinimizeViewController");
    if (!minCls) { WPLog(@"VoiceFeat", @"MinimizeViewController 不存在，跳过背景播放 hook"); return; }
    VF_HOOK(minCls, "onAbsorbFloatingViewTap", hook_Min_absorbTap, orig_Min_absorbTap);
}

+ (void)hookAudioModule {
    // WCR WCRefineVoicePlayBypass::hookWCAudioModuleMgr 同款（反编译 hookWCAudioModuleMgr.c）：
    // canSetActiveWithScene:groupName:（本版本不存在，SKIP）+ 2 canMix 类方法 + isAudioModuleInterrupt:
    // 这里只挂本版本真实存在的 3 个；hook 体为 WCR 同款极简垫片（见上方注释）
    Class wam = objc_getClass("WCAudioModuleMgr");
    if (!wam) { WPLog(@"VoiceFeat", @"WCAudioModuleMgr 不存在，跳过通话播放 hooks"); return; }
    VF_HOOK_META(wam, "audioModule:canMixWithAudioList:", hook_WAM_mixList, orig_WAM_mixList);
    VF_HOOK_META(wam, "audioList:canMixWithAudioModule:", hook_WAM_mixModule, orig_WAM_mixModule);
    VF_HOOK(wam, "isAudioModuleInterrupt:", hook_WAM_interrupt, orig_WAM_interrupt);
    WPLog(@"VoiceFeat", @"[CallPlay] WCR 同款仲裁 hook 挂载完成（3 hook，极简垫片）");
}

+ (void)hookForwardLogic {
    Class fmlc = objc_getClass("ForwardMessageLogicController");
    if (!fmlc) { WPLog(@"VoiceFeat", @"ForwardMessageLogicController 不存在，跳过转发 hooks"); return; }
    VF_HOOK(fmlc, "forwardMessage:", hook_FMLC_forwardMsg, orig_FMLC_forwardMsg);
    VF_HOOK(fmlc, "ForwardMsg:ToContact:", hook_FMLC_msgToContact, orig_FMLC_msgToContact);
    VF_HOOK(fmlc, "ForwardMsgList:ToContact:", hook_FMLC_listToContact, orig_FMLC_listToContact);
}

#pragma mark - 手势 delegate + handlers

- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer *)gr {
    if (![gr isKindOfClass:[UIPanGestureRecognizer class]]) return NO;
    if (![VoiceConfig shared].voiceDragProgressEnabled) return NO;
    UIView *cell = gr.view;
    if (!cell) return NO;
    UIView *bar = VFVoiceBar(cell);
    if (!bar) return NO;
    CGPoint p = [gr locationInView:cell];
    CGRect r = [bar convertRect:bar.bounds toView:cell];
    r = CGRectInset(r, -6, -10);
    return CGRectContainsPoint(r, p);
}

- (void)vfpsHandlePan:(UIPanGestureRecognizer *)gr {
    UIView *cell = gr.view;
    if (!cell) return;
    if (![VoiceConfig shared].voiceDragProgressEnabled) return;
    UIView *bar = VFVoiceBar(cell);
    if (!bar) return;
    NSNumber *cached = objc_getAssociatedObject(cell, &kVFDurationCache);
    unsigned int dur = cached ? (unsigned int)cached.unsignedIntValue : VFRealDurationMS(VFCellWrap(cell));
    if (dur == 0) return;
    objc_setAssociatedObject(cell, &kVFDurationCache, @(dur), OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    CGPoint loc = [gr locationInView:bar];
    CGFloat w = MAX(CGRectGetWidth(bar.bounds), 1);
    CGFloat ratio = loc.x / w;
    if (ratio < 0) ratio = 0;
    if (ratio > 1) ratio = 1;
    unsigned int target = (unsigned int)(ratio * dur);

    switch (gr.state) {
        case UIGestureRecognizerStateBegan: {
            objc_setAssociatedObject(cell, &kVFDragging, @YES, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            UIImpactFeedbackGenerator *haptic = objc_getAssociatedObject(cell, &kVFHaptic);
            if (!haptic) {
                haptic = [[UIImpactFeedbackGenerator alloc] initWithStyle:UIImpactFeedbackStyleLight];
                objc_setAssociatedObject(cell, &kVFHaptic, haptic, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            }
            [haptic impactOccurred];
            VFOverlayShow(cell, target, dur, YES);
            break;
        }
        case UIGestureRecognizerStateChanged: {
            VFOverlayUpdate(cell, target, dur, NO);
            break;
        }
        case UIGestureRecognizerStateEnded: {
            objc_setAssociatedObject(cell, &kVFDragging, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            VFOverlayUpdate(cell, target, dur, NO);
            if (VFPlayFromTime(cell, target)) {
                __weak UIView *weakCell = cell;
                dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.8 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                    UIView *strongCell = weakCell;
                    if (strongCell && !objc_getAssociatedObject(strongCell, &kVFDragging)) VFOverlayHide(strongCell);
                });
            } else {
                VFOverlayHide(cell);
            }
            break;
        }
        default: {
            VFOverlayHide(cell);
            break;
        }
    }
}

@end
