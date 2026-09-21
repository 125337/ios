#import "VoiceHook.h"
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <mach-o/dyld.h>
#import <substrate.h>
#import "VoiceConfig.h"
#import "VoicePackStore.h"
#import "WPVoicePackPickerVC.h"
#import "../SettingEntry/WPCommonUI.h"
#import "../../Core/ServiceHelper.h"
#import "../../Core/LogManager.h"

/// 改名确认弹窗（定义在 @implementation；供上方 C 函数 mioVoiceInclude_IMP 调用）
@interface VoiceHook (MioVoiceIncludePrivate)
+ (void)presentIncludeAlertWithData:(NSData *)data defaultName:(NSString *)defName;
@end

// ═══════════════════════════════════════════════════════
// 工具：从视图层级 / VC 栈里找指定类名的 ViewController
// ═══════════════════════════════════════════════════════

static UIViewController *FindVCOfClass(UIViewController *root, Class targetCls) {
    if (!root || !targetCls) return nil;
    // isKindOfClass 沿继承链匹配（聊天页实际实例类是 ChatRoomViewController 等子类）
    if ([root isKindOfClass:targetCls]) return root;
    for (UIViewController *child in root.childViewControllers) {
        UIViewController *hit = FindVCOfClass(child, targetCls);
        if (hit) return hit;
    }
    if ([root isKindOfClass:[UINavigationController class]]) {
        for (UIViewController *vc in [(UINavigationController *)root viewControllers]) {
            UIViewController *hit = FindVCOfClass(vc, targetCls);
            if (hit) return hit;
        }
    }
    if (root.presentedViewController) {
        return FindVCOfClass(root.presentedViewController, targetCls);
    }
    return nil;
}

static UIViewController *TopPresentedVC(UIViewController *root) {
    UIViewController *top = root;
    while (top.presentedViewController) top = top.presentedViewController;
    return top;
}

/// 从聊天页 VC 取当前会话名：优先 [self GetContact] → [contact m_nsUsrName]
/// （本版本微信验证可行，HideAvatar 同路径），兜底读 m_nsCurrentChatUserName ivar
static NSString *ChatNameFromChatVC(UIViewController *chatVC) {
    if (!chatVC) return nil;
    SEL getContact = NSSelectorFromString(@"GetContact");
    SEL getUsrName = NSSelectorFromString(@"m_nsUsrName");
    if ([chatVC respondsToSelector:getContact]) {
        @try {
            id contact = ((id (*)(id, SEL))objc_msgSend)(chatVC, getContact);
            if (contact && [contact respondsToSelector:getUsrName]) {
                id name = ((id (*)(id, SEL))objc_msgSend)(contact, getUsrName);
                if ([name isKindOfClass:[NSString class]] && [name length] > 0) return name;
            }
        } @catch (NSException *e) {
            WPLog(@"Voice", @"[ChatName] GetContact 异常: %@", e.reason);
        }
    }
    Ivar ivar = class_getInstanceVariable(chatVC.class, "m_nsCurrentChatUserName");
    if (!ivar) return nil;
    id val = object_getIvar(chatVC, ivar);
    return ([val isKindOfClass:[NSString class]] && [val length] > 0) ? val : nil;
}

/// 当前聊天会话名：从窗口里的聊天页（BaseMsgContentViewController 及其子类）读取
static NSString *CurrentChatUserName(void) {
    UIViewController *root = [[UIApplication sharedApplication].windows.firstObject rootViewController];
    UIViewController *chatVC = FindVCOfClass(root, objc_getClass("BaseMsgContentViewController"));
    return ChatNameFromChatVC(chatVC);
}

// ═══════════════════════════════════════════════════════
// 真实语音发送流程捕获（诊断）：hook 微信真实录音发送链路，
// 拿到真实 wrap 字段模板与调用顺序后照抄（log17 结论：猜接口不可行）
// ═══════════════════════════════════════════════════════

/// 打印当前线程调用栈 + WeChat 主二进制 ASLR slide
/// （栈帧地址 - slide = 二进制内偏移，可与方法 IMP 表对照定位"谁调了 AddMsg"）
static void MioLogCallStack(NSString *tag) {
    @try {
        intptr_t slide = (intptr_t)_dyld_get_image_vmaddr_slide(0);
        NSArray<NSString *> *frames = [NSThread callStackSymbols];
        WPLog(@"Voice", @"[%@] 栈 slide=%ld 帧数=%lu", tag, (long)slide, (unsigned long)frames.count);
        for (NSString *f in frames) WPLog(@"Voice", @"[%@] %@", tag, f);
    } @catch (NSException *e) {}
}

/// 读取 m_uiMesLocalID
static unsigned int MioWrapLocalID(id wrap) {
    if (!wrap) return 0;
    Ivar iv = class_getInstanceVariable(object_getClass(wrap), "m_uiMesLocalID");
    if (!iv) return 0;
    return *(unsigned int *)((__bridge void *)wrap + ivar_getOffset(iv));
}

// ═══════════════════════════════════════════════════════════════
// 语音上传管理器取证（run 2029）：UploadVoiceCDNMgr / MMNewUploadVoiceMgr
// 的 AddNewPart(12参, 上传任务登记入口) + ResendVoiceMsg + startSend
// 目的：抓 WCRefine 发送时的 AddNewPart 真实参数值，dylib 照抄调用
// ═══════════════════════════════════════════════════════════════

static IMP orig_UVM_AddNewPart = NULL;
// ★log43 教训：part 参数类型未证实前禁止 object_getClass/%@ 解引用（EXC_BAD_ACCESS
//   非 NSException，@try 拦不住）——全部按裸指针/整型打印，值模式判断类型
static void hook_UVM_AddNewPart(id self, SEL _cmd, id part, unsigned long localID, unsigned long long svrID,
                                unsigned long offset, unsigned long len, unsigned long voiceTime,
                                unsigned long createTime, unsigned long endFlag, unsigned long cancelFlag,
                                unsigned long voiceFormat, unsigned long forwardFlag, id msgSource) {
    WPLog(@"Voice", @"[Upload] AddNewPart mgr=%@ part=%p localID=%lu svrID=%llu offset=%lu len=%lu voiceTime=%lu createTime=%lu end=%lu cancel=%lu format=%lu fwd=%lu src=%p",
          NSStringFromClass(object_getClass(self)), part, localID, svrID, offset, len,
          voiceTime, createTime, endFlag, cancelFlag, voiceFormat, forwardFlag, msgSource);
    if (orig_UVM_AddNewPart)
        ((void (*)(id, SEL, id, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long,
                  unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, id))orig_UVM_AddNewPart)
            (self, _cmd, part, localID, svrID, offset, len, voiceTime, createTime, endFlag, cancelFlag,
             voiceFormat, forwardFlag, msgSource);
}

static IMP orig_UVM_Resend = NULL;
static void hook_UVM_Resend(id self, SEL _cmd, id chatName, id wrap) {
    @try {
        WPLog(@"Voice", @"[Upload] ResendVoiceMsg mgr=%@ chat=%@ localID=%u",
              NSStringFromClass(object_getClass(self)), chatName, MioWrapLocalID(wrap));
    } @catch (NSException *e) {}
    if (orig_UVM_Resend) ((void (*)(id, SEL, id, id))orig_UVM_Resend)(self, _cmd, chatName, wrap);
}

static IMP orig_UVM_StartSend = NULL;
static void hook_UVM_StartSend(id self, SEL _cmd) {
    @try { WPLog(@"Voice", @"[Upload] startSend mgr=%@", NSStringFromClass(object_getClass(self))); } @catch (NSException *e) {}
    if (orig_UVM_StartSend) ((void (*)(id, SEL))orig_UVM_StartSend)(self, _cmd);
}

// ★保存活的 UploadVoiceCDNMgr 实例（TimerCheckUpload 每 2 秒跑，微信启动即有）
//   它不是 MMServiceCenter 注册 service，getService 拿不到（log44 实锤），只能这样捕获
static id g_uploadCDNMgr = nil;
static IMP orig_UVM_TimerCheck = NULL;
static void hook_UVM_TimerCheck(id self, SEL _cmd) {
    if (!g_uploadCDNMgr) {
        g_uploadCDNMgr = self;
        WPLog(@"Voice", @"[Upload] 已捕获 UploadVoiceCDNMgr 活实例 %p", self);
    }
    if (orig_UVM_TimerCheck) ((void (*)(id, SEL))orig_UVM_TimerCheck)(self, _cmd);
}

/// 供 VoicePackStore 发送侧获取活的上传管理器实例
id MioGetUploadVoiceCDNMgr(void) { return g_uploadCDNMgr; }

// ═══════════════════════════════════════════════════════
// Audio 目录时间线（零 hook 风险：主动枚举，不 hook 任何文件 API）
// 真实语音的音频文件在 AddMsg 前已由录音线程写好，AddMsg 后微信必然
// 做了"改名/复制为 localID.aud"的动作——定时枚举目录抓这个模式
// ═══════════════════════════════════════════════════════

static void MioProbeAudioDir(NSString *tag, NSString *dir) {
    @try {
        NSArray<NSString *> *names = [[NSFileManager defaultManager] contentsOfDirectoryAtPath:dir error:nil];
        NSMutableString *out = [NSMutableString string];
        for (NSString *n in names) {
            if ([n hasPrefix:@"."]) continue;
            NSDictionary *a = [[NSFileManager defaultManager] attributesOfItemAtPath:[dir stringByAppendingPathComponent:n] error:nil];
            [out appendFormat:@"\n  %@ (%llu字节)", n, (unsigned long long)(a.fileSize ?: 0)];
        }
        WPLog(@"Voice", @"[%@] %@:%@", tag, dir.lastPathComponent, out);
    } @catch (NSException *e) {}
}

/// AddMsg 返回后调用（此时 localID 已回填）：立即枚举 + 后台 0.5~7s 定时枚举
static void MioScheduleAudioTimeline(id wrap) {
    @try {
        unsigned int localID = MioWrapLocalID(wrap);
        if (localID == 0) { WPLog(@"Voice", @"[FileTL] localID=0 跳过"); return; }
        Class wrapCls = object_getClass(wrap);
        SEL sel = NSSelectorFromString(@"getPathOfAudio:");
        if (![wrapCls respondsToSelector:sel]) {
            WPLog(@"Voice", @"[FileTL] +getPathOfAudio: 不可用, localID=%u", localID);
            return;
        }
        NSString *path = ((id (*)(id, SEL, id))objc_msgSend)(wrapCls, sel, wrap);
        if (![path isKindOfClass:[NSString class]] || path.length == 0) return;
        NSString *dir = [path stringByDeletingLastPathComponent];
        WPLog(@"Voice", @"[FileTL] localID=%u 正式路径=%@", localID, path);
        MioProbeAudioDir(@"FileTL.t0", dir);
        dispatch_async(dispatch_get_global_queue(QOS_CLASS_UTILITY, 0), ^{
            const double marks[] = {0.5, 1.0, 2.0, 4.0, 7.0};
            double prev = 0;
            for (int i = 0; i < 5; i++) {
                [NSThread sleepForTimeInterval:marks[i] - prev];
                prev = marks[i];
                MioProbeAudioDir([NSString stringWithFormat:@"FileTL.t%.1fs", marks[i]], dir);
            }
        });
    } @catch (NSException *e) {
        WPLog(@"Voice", @"[FileTL] 异常: %@", e.reason);
    }
}

/// 把对象全部 ivar 值追加到 out（对象类型打印内容/长度，整型按编码定长读）
static unsigned int MioDumpIvarsInto(id obj, NSMutableString *out) {
    unsigned int count = 0;
    Class cls = object_getClass(obj);
    Ivar *list = class_copyIvarList(cls, &count);
    const void *base = (__bridge void *)obj;
    for (unsigned int i = 0; i < count; i++) {
        const char *nm = ivar_getName(list[i]);
        const char *enc = ivar_getTypeEncoding(list[i]);
        if (!nm || !enc) continue;
        ptrdiff_t off = ivar_getOffset(list[i]);
        NSString *piece = nil;
        if (enc[0] == '@') {
            id v = object_getIvar(obj, list[i]);
            if ([v isKindOfClass:[NSString class]]) {
                NSString *s = (NSString *)v;
                if (s.length == 0) piece = @"\"\"";
                else piece = [NSString stringWithFormat:@"\"%@\"(len=%lu)", s.length > 110 ? [s substringToIndex:110] : s, (unsigned long)s.length];
            } else if ([v isKindOfClass:[NSData class]]) {
                piece = [NSString stringWithFormat:@"NSData(%lu字节)", (unsigned long)[v length]];
            } else if (v) {
                piece = [NSString stringWithFormat:@"<%@>", NSStringFromClass(object_getClass(v))];
            }
        } else if (strchr("cBsSiIlLqQB", enc[0])) {
            long long iv = 0;
            switch (enc[0]) {
                case 'c': case 'B': iv = *(signed char *)(base + off); break;
                case 's': iv = *(short *)(base + off); break;
                case 'S': iv = *(unsigned short *)(base + off); break;
                case 'i': iv = *(int *)(base + off); break;
                case 'I': iv = *(unsigned int *)(base + off); break;
                case 'l': case 'q': iv = *(long long *)(base + off); break;
                case 'L': case 'Q': iv = (long long)(*(unsigned long long *)(base + off)); break;
                default: break;
            }
            piece = [NSString stringWithFormat:@"%lld", iv];
        }
        if (piece) [out appendFormat:@"\n  %@ = %@", @(nm), piece];
    }
    if (list) free(list);
    return count;
}

/// 全量 dump 消息 wrap 的 ivar 值（一次消息一条，开销可忽略）；递归 dump 语音扩展对象
static void MioDumpVoiceWrap(id wrap, NSString *tag) {
    if (!wrap) return;
    @try {
        NSMutableString *out = [NSMutableString string];
        unsigned int count = MioDumpIvarsInto(wrap, out);
        WPLog(@"Voice", @"[%@] wrap<%@>(%u ivars):%@", tag, NSStringFromClass(object_getClass(wrap)), count, out);
        // 语音类型扩展对象（本版本语音数据真实载体）
        Ivar extIv = class_getInstanceVariable(object_getClass(wrap), "m_extendInfoWithMsgType");
        if (extIv) {
            id ext = object_getIvar(wrap, extIv);
            if (ext) {
                NSMutableString *eo = [NSMutableString string];
                unsigned int ecnt = MioDumpIvarsInto(ext, eo);
                WPLog(@"Voice", @"[%@] 扩展<%@>(%u ivars):%@", tag, NSStringFromClass(object_getClass(ext)), ecnt, eo);
            } else {
                WPLog(@"Voice", @"[%@] 扩展=nil", tag);
            }
        }
    } @catch (NSException *e) {
        WPLog(@"Voice", @"[%@] dump异常: %@", tag, e.reason);
    }
}

// Hook ③: CMessageMgr.SaveMesVoice:MsgWrap:（真实录音发送会经过，若本版本仍在用）
static IMP orig_SaveMesVoiceMsgWrap = NULL;

static void hook_SaveMesVoiceMsgWrap(id self, SEL _cmd, id path, id wrap) {
    WPLog(@"Voice", @"[真实流程] SaveMesVoice 进入 path=%@", path);
    MioDumpVoiceWrap(wrap, @"真实流程.SaveMes入口");
    ((void (*)(id, SEL, id, id))orig_SaveMesVoiceMsgWrap)(self, _cmd, path, wrap);
    WPLog(@"Voice", @"[真实流程] SaveMesVoice 返回 localID=%u", MioWrapLocalID(wrap));
    MioDumpVoiceWrap(wrap, @"真实流程.SaveMes出口");
}

// Hook ④: CMessageMgr.AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:（本地入库主路径）
static IMP orig_AddLocalMsg6 = NULL;

static void hook_AddLocalMsg6(id self, SEL _cmd, id chatName, id wrap, long long fixTime, long long notify) {
    @try {
        unsigned int t = 0;
        if ([wrap respondsToSelector:NSSelectorFromString(@"m_uiMessageType")]) {
            t = ((unsigned int (*)(id, SEL, ...))objc_msgSend)(wrap, NSSelectorFromString(@"m_uiMessageType"));
        }
        NSString *from = [wrap valueForKey:@"m_nsFromUsr"] ?: @"";
        WPLog(@"Voice", @"[真实流程] AddLocalMsg type=%u from=%@ chat=%@ fixTime=%lld notify=%lld", t, from, chatName, fixTime, notify);
        if (t == 34) {
            MioDumpVoiceWrap(wrap, @"真实流程.AddLocal");
            MioLogCallStack(@"真实流程.AddLocal栈"); // 上溯调用者=微信真实发送入口
        }
    } @catch (NSException *e) {}
    ((void (*)(id, SEL, id, id, long long, long long))orig_AddLocalMsg6)(self, _cmd, chatName, wrap, fixTime, notify);
}

// Hook ⑤: CMessageMgr.AddMsg:MsgWrap:（RedEnv 已挂一层，substrate 链式不冲突）
// ─── 语音管线取证（run 2023）：FileTL 实锤"边录边写"模型——AddMsg 是录音开始调用，
//     松手后的"完成信号"才是上传队列启动开关。此组 hook 抓真实录音的完成调用序列 ───
static void MioLogVoiceBrief(NSString *tag, id chatName, id wrap) {
    @try {
        if (!wrap) { WPLog(@"Voice", @"[%@] wrap=nil chat=%@", tag, chatName); return; }
        id ext = nil;
        Ivar hostIvar = class_getInstanceVariable(object_getClass(wrap), "m_extendInfoWithMsgType");
        if (hostIvar) ext = object_getIvar(wrap, hostIvar);
        id extEnd = ext ? [ext valueForKey:@"m_uiVoiceEndFlag"] : nil;
        id extLen = ext ? [ext valueForKey:@"m_uiVoiceTime"] : nil;
        id extData = ext ? [ext valueForKey:@"m_dtVoice"] : nil;
        WPLog(@"Voice", @"[%@] chat=%@ localID=%@ status=%@ dl=%@ XML=%@ | 扩展: End=%@ VTime=%@ dt=%@",
              tag, chatName,
              [wrap valueForKey:@"m_uiMesLocalID"], [wrap valueForKey:@"m_uiStatus"],
              [wrap valueForKey:@"m_uiDownloadStatus"], [wrap valueForKey:@"m_nsContent"],
              extEnd, extLen,
              extData ? [NSString stringWithFormat:@"%lu字节", (unsigned long)[(NSData *)extData length]] : @"nil");
    } @catch (NSException *e) {
        WPLog(@"Voice", @"[%@] 摘要异常: %@", tag, e.reason);
    }
}

static IMP orig_UpdateVoiceMessage = NULL;
static void hook_UpdateVoiceMessage(id self, SEL _cmd, id chatName, id wrap) {
    @try { MioLogVoiceBrief(@"取证.UpdateVoiceMessage", chatName, wrap); } @catch (NSException *e) {}
    ((void (*)(id, SEL, id, id))orig_UpdateVoiceMessage)(self, _cmd, chatName, wrap);
}

static IMP orig_UpdateVoiceMessageFT = NULL;
static void hook_UpdateVoiceMessageFT(id self, SEL _cmd, id chatName, id wrap, long long fixTime) {
    @try { MioLogVoiceBrief(@"取证.UpdateVoiceMessageFT", chatName, wrap); } @catch (NSException *e) {}
    ((void (*)(id, SEL, id, id, long long))orig_UpdateVoiceMessageFT)(self, _cmd, chatName, wrap, fixTime);
}

static IMP orig_UpdateVoiceStatus = NULL;
static void hook_UpdateVoiceStatus(id self, SEL _cmd, id chatName, long long localID, long long dl) {
    @try { WPLog(@"Voice", @"[取证.UpdateVoiceStatus] chat=%@ localID=%lld dl=%lld", chatName, localID, dl); } @catch (NSException *e) {}
    ((void (*)(id, SEL, id, long long, long long))orig_UpdateVoiceStatus)(self, _cmd, chatName, localID, dl);
}

static IMP orig_StopUploadRecordMsg = NULL;
static void hook_StopUploadRecordMsg(id self, SEL _cmd, id chatName) {
    @try { WPLog(@"Voice", @"[取证.StopUploadRecordMsg] chat=%@", chatName); } @catch (NSException *e) {}
    ((void (*)(id, SEL, id))orig_StopUploadRecordMsg)(self, _cmd, chatName);
}

static IMP orig_StopUploadRecordMsgByUser = NULL;
static void hook_StopUploadRecordMsgByUser(id self, SEL _cmd, id chatName) {
    @try { WPLog(@"Voice", @"[取证.StopUploadRecordMsgByUser] chat=%@", chatName); } @catch (NSException *e) {}
    ((void (*)(id, SEL, id))orig_StopUploadRecordMsgByUser)(self, _cmd, chatName);
}

// 发送结果回调取证（run 2034）：★参数类型未证实，全部 %p 零解引用
// （%@/[arg class] 对非对象参数 = EXC_BAD_ACCESS，AddNewPart hook 同款教训；
//   这些回调在 ResendVoiceMsg 启动上传后被调，崩溃栈 read@0x4 与之吻合）
static IMP orig_OnSendMessageSuccess = NULL;
static void hook_OnSendMessageSuccess(id self, SEL _cmd, id arg) {
    WPLog(@"Voice", @"[Upload] OnSendMessageSuccess mgr=%@ arg=%p", NSStringFromClass(object_getClass(self)), arg);
    if (orig_OnSendMessageSuccess) ((void (*)(id, SEL, id))orig_OnSendMessageSuccess)(self, _cmd, arg);
}

static IMP orig_OnSendMessageFail = NULL;
static void hook_OnSendMessageFail(id self, SEL _cmd, id arg) {
    WPLog(@"Voice", @"[Upload] OnSendMessageFail mgr=%@ arg=%p", NSStringFromClass(object_getClass(self)), arg);
    if (orig_OnSendMessageFail) ((void (*)(id, SEL, id))orig_OnSendMessageFail)(self, _cmd, arg);
}

static IMP orig_OnErrorBySender = NULL;
static void hook_OnErrorBySender(id self, SEL _cmd, id arg, long long errNo) {
    WPLog(@"Voice", @"[Upload] OnErrorBySender mgr=%@ arg=%p errNo=%lld", NSStringFromClass(object_getClass(self)), arg, errNo);
    if (orig_OnErrorBySender) ((void (*)(id, SEL, id, long long))orig_OnErrorBySender)(self, _cmd, arg, errNo);
}

static IMP orig_IsRecordMsgUploading = NULL;
static BOOL hook_IsRecordMsgUploading(id self, SEL _cmd, id arg) {
    BOOL r = orig_IsRecordMsgUploading ? ((BOOL (*)(id, SEL, id))orig_IsRecordMsgUploading)(self, _cmd, arg) : NO;
    WPLog(@"Voice", @"[Upload] IsRecordMsgUploading mgr=%@ arg=%p → %d", NSStringFromClass(object_getClass(self)), arg, r);
    return r;
}

static IMP orig_AddMsgMsgWrap = NULL;

static void hook_AddMsgMsgWrap(id self, SEL _cmd, id chatName, id wrap) {
    unsigned int t = 0;
    @try {
        if ([wrap respondsToSelector:NSSelectorFromString(@"m_uiMessageType")]) {
            t = ((unsigned int (*)(id, SEL, ...))objc_msgSend)(wrap, NSSelectorFromString(@"m_uiMessageType"));
        }
        if (t == 34) {
            WPLog(@"Voice", @"[真实流程] AddMsg chat=%@", chatName);
            MioDumpVoiceWrap(wrap, @"真实流程.AddMsg");
            MioLogCallStack(@"真实流程.AddMsg栈"); // 上溯调用者=微信真实发送入口
        }
    } @catch (NSException *e) {}
    ((void (*)(id, SEL, id, id))orig_AddMsgMsgWrap)(self, _cmd, chatName, wrap);
    if (t == 34) MioScheduleAudioTimeline(wrap); // orig 后 localID 已回填，抓文件改名模式
}

// ═══════════════════════════════════════════════════════
// Hook ①: 长按语音消息 → 菜单项「纳入语音包」（小丑按钮同款机制）
//   照抄 JokerHook：hook VoiceMessageCellView 的 operationMenuItems 追加
//   MMMenuItem（initWithTitle:svgName:action:，action 为 class_addMethod 注册到
//   cell 类的方法）；handler 里 m_viewModel → m_messageWrap 取 wrap（Joker
//   验证过的本版本链路）→ type=34 门 → haptic → 数据提取（wrap buffer 优先，
//   落盘文件兜底对齐 WCR FUN_008da2c4/FUN_008db4b4）→ 改名确认弹窗（对齐
//   presentVoiceIncludeFlowFrom：默认名预填，最长 80 字符）→ importVoiceData
//   保存（根目录 / 重名去重 / 补 .silk / atomic 写）
// ═══════════════════════════════════════════════════════

static IMP orig_VoiceCell_operationMenuItems = NULL;

/// 开关检查：总开关 && 长按纳入开关
static BOOL MioVPIncludeLongPressActive(void) {
    VoiceConfig *cfg = [VoiceConfig shared];
    return cfg.voicePackEnabled && cfg.voicePackIncludeLongPressEnabled;
}

/// 消息类型（无法确定返回 0）
static unsigned int MioWrapMessageTypeOf(id wrap) {
    if (!wrap) return 0;
    if ([wrap respondsToSelector:NSSelectorFromString(@"m_uiMessageType")]) {
        return ((unsigned int (*)(id, SEL, ...))objc_msgSend)(wrap, NSSelectorFromString(@"m_uiMessageType"));
    }
    return 0;
}

/// 读指定名字的对象 ivar（不存在返回 nil；仅用于命名明确的对象字段）
static id MioVPIvarObjectValue(id obj, const char *name) {
    Ivar iv = class_getInstanceVariable(object_getClass(obj), name);
    if (!iv) return nil;
    return object_getIvar(obj, iv);
}

/// wrap 提取：m_viewModel → m_messageWrap 为 Joker 验证过的本版本链路；
/// 选择器/ivar 兜底对齐 WCR FUN_008d80cc
static id MioVPWrapFromCellView(id cellView) {
    if (!cellView) return nil;
    id wrap = nil;
    id vm = nil;
    @try { vm = [cellView valueForKey:@"m_viewModel"]; } @catch (NSException *e) {}
    if (vm) {
        @try { wrap = [vm valueForKey:@"m_messageWrap"]; } @catch (NSException *e) {}
        if (!wrap && [vm respondsToSelector:@selector(messageWrap)]) {
            wrap = ((id (*)(id, SEL))objc_msgSend)(vm, @selector(messageWrap));
        }
        if (!wrap && [vm respondsToSelector:@selector(msgWrap)]) {
            wrap = ((id (*)(id, SEL))objc_msgSend)(vm, @selector(msgWrap));
        }
        if (!wrap) wrap = MioVPIvarObjectValue(vm, "m_msgWrap");
    }
    if (!wrap) @try { wrap = [cellView valueForKey:@"m_messageWrap"]; } @catch (NSException *e) {}
    if (!wrap) wrap = MioVPIvarObjectValue(cellView, "m_msgWrap");
    if ([wrap isKindOfClass:objc_getClass("CMessageWrap")]) return wrap;
    return nil;
}

/// 落盘文件兜底（对齐 WCR FUN_008db4b4）：getVoicePath → m_nsVoicePath →
/// m_nsMsgDataPath → m_nsFilePath，取第一个存在的文件
static NSData *MioVPVoiceFileDataFromWrap(id wrap) {
    @try {
        SEL gv = NSSelectorFromString(@"getVoicePath");
        if ([wrap respondsToSelector:gv]) {
            NSString *p = ((NSString *(*)(id, SEL))objc_msgSend)(wrap, gv);
            if ([p isKindOfClass:[NSString class]] && p.length > 0 &&
                [[NSFileManager defaultManager] fileExistsAtPath:p]) {
                return [NSData dataWithContentsOfFile:p];
            }
        }
        for (NSString *key in @[@"m_nsVoicePath", @"m_nsMsgDataPath", @"m_nsFilePath"]) {
            NSString *p = [wrap valueForKey:key];
            if ([p isKindOfClass:[NSString class]] && p.length > 0 &&
                [[NSFileManager defaultManager] fileExistsAtPath:p]) {
                return [NSData dataWithContentsOfFile:p];
            }
        }
    } @catch (NSException *e) {}
    return nil;
}

/// 默认名时间戳（对齐 WCR FUN_008dc7f8：yyyyMMdd_HHmmss）
static NSString *MioVoiceTimestampName(void) {
    NSDateFormatter *f = [[NSDateFormatter alloc] init];
    f.dateFormat = @"yyyyMMdd_HHmmss";
    NSString *s = [f stringFromDate:[NSDate date]];
    return s.length > 0 ? s : [NSString stringWithFormat:@"%lld", (long long)[[NSDate date] timeIntervalSince1970]];
}

// 菜单 hook：VoiceMessageCellView.operationMenuItems 追加「纳入语音包」
static id hooked_VoiceCell_operationMenuItems(id self, SEL _cmd) {
    NSMutableArray *items = nil;
    if (orig_VoiceCell_operationMenuItems) {
        items = ((id(*)(id, SEL))orig_VoiceCell_operationMenuItems)(self, _cmd);
    }
    if (!items) items = [NSMutableArray array];
    if (!MioVPIncludeLongPressActive()) return items;

    NSMutableArray *newItems = [items mutableCopy];
    Class mmItemClass = objc_getClass("MMMenuItem");
    if (mmItemClass) {
        @try {
            // 照抄 JokerHook / WCR：initWithTitle:svgName:action:，action 参数是 SEL
            SEL initSel = NSSelectorFromString(@"initWithTitle:svgName:action:");
            if (![mmItemClass instancesRespondToSelector:initSel]) {
                WPLog(@"Voice", @"[IncludeLP] ⚠️ MMMenuItem initWithTitle:svgName:action: not found");
            } else {
                SEL actionSEL = sel_registerName("mioVoiceInclude");
                NSString *iconName = [NSString stringWithUTF8String:"expression"];
                id mmItem = ((id(*)(id, SEL, id, id, SEL))objc_msgSend)(
                    [mmItemClass alloc], initSel, @"纳入语音包", iconName, actionSEL);
                if (mmItem) {
                    [newItems addObject:mmItem];
                    WPLog(@"Voice", @"[IncludeLP] ✅ MMMenuItem: 纳入语音包");
                }
            }
        } @catch (NSException *e) {
            WPLog(@"Voice", @"[IncludeLP] ❌ MMMenuItem create: %@", e);
        }
    }
    return newItems;
}

// 菜单 action（注册到 VoiceMessageCellView，self = 语音 cell 视图；
// 对齐 WCR FUN_008d9bc0：haptic → 配置门 → wrap → 数据 → 弹窗）
static void mioVoiceInclude_IMP(id self, SEL _cmd) {
    @try {
        id wrap = MioVPWrapFromCellView(self);
        unsigned int t = MioWrapMessageTypeOf(wrap);
        if (t != 34) {
            WPLog(@"Voice", @"[IncludeLP] 非语音消息 type=%u，忽略", t);
            return;
        }

        // 触觉反馈（对齐 WCR FUN_008d9bc0 首步 triggerHapticFeedback）
        UIImpactFeedbackGenerator *haptic =
            [[UIImpactFeedbackGenerator alloc] initWithStyle:UIImpactFeedbackStyleMedium];
        [haptic impactOccurred];

        // 数据提取（对齐 FUN_008da2c4：wrap buffer 优先 → 落盘文件兜底）
        NSData *data = [VoicePackStore voiceDataFromWrap:wrap];
        if (data.length == 0) data = MioVPVoiceFileDataFromWrap(wrap);
        if (data.length == 0) {
            WPLog(@"Voice", @"[IncludeLP] 语音数据为空（可能未下载）localID=%u", MioWrapLocalID(wrap));
            WPShowToast(@"语音未下载，暂不能纳入");
            return;
        }

        NSString *defName = [NSString stringWithFormat:@"语音_%@", MioVoiceTimestampName()];
        WPLog(@"Voice", @"[IncludeLP] 触发纳入弹窗 (%lu 字节)", (unsigned long)data.length);
        [VoiceHook presentIncludeAlertWithData:data defaultName:defName];
    } @catch (NSException *e) {
        WPLog(@"Voice", @"[IncludeLP] 异常: %@", e.reason);
    }
}

// ═══════════════════════════════════════════════════════
// Hook ②: MMInputToolView 生命周期 — 长按加号入口（WCRefine 方案完整复刻）
//   手势直接挂到「加号按钮本体」（_attachmentButton ivar 直取 → 智能扫描兜底），
//   不再挂整个输入栏做触摸位置过滤。幂等安装器：view↔gesture 配对跟踪，
//   按钮实例变化自动换绑；开关关闭主动摘除手势；handler 内二次校验开关 +
//   one-shot 防重入 + 触觉反馈。
//   对齐 WCR反编译：FUN_008d1600(安装器) / FUN_008d3bd0(按钮解析) /
//   FUN_008cd918(WCRVPHandlePlusLongPress:) / FUN_008d6fe8(one-shot 复位)
// ═══════════════════════════════════════════════════════

static IMP orig_ITV_layoutSubviews = NULL;
static IMP orig_ITV_didMoveToWindow = NULL;
static char kMioVPBtnGestureKey;   // 加号按钮 → 已挂的长按手势（配对跟踪）
static char kMioVPCurPlusBtnKey;   // 输入栏 → 当前绑定的加号按钮实例
static char kMioVPOneShotKey;      // 加号按钮 → one-shot 防重入标记

/// 沿响应链向上找宿主 ViewController
static UIViewController *HostVCForView(UIView *view) {
    UIResponder *r = view;
    while (r) {
        r = r.nextResponder;
        if ([r isKindOfClass:[UIViewController class]]) return (UIViewController *)r;
    }
    return nil;
}

/// 开关检查（对齐 WCR FUN_008d402c：总开关 && 长按开关）
static BOOL MioVPPlusLongPressActive(void) {
    VoiceConfig *cfg = [VoiceConfig shared];
    return cfg.voicePackEnabled && cfg.voicePackPlusLongPressEnabled;
}

/// 按钮可用性（对齐 WCR FUN_008d48e4）：可见、alpha 达标、尺寸 ≥1pt
static BOOL MioVPButtonUsable(UIView *v) {
    if (![v isKindOfClass:[UIView class]]) return NO;
    if (v.hidden || v.alpha < 0.01) return NO;
    CGSize s = v.bounds.size;
    return s.width >= 1.0 && s.height >= 1.0;
}

/// 智能扫描兜底（对齐 WCR FUN_008d410c）：输入栏内最右侧、尺寸 24~44pt 的可交互控件
static UIControl *MioVPScanPlusCandidate(UIView *root) {
    UIControl *best = nil;
    CGFloat bestMaxX = -CGFLOAT_MAX;
    NSMutableArray<UIView *> *stack = [NSMutableArray arrayWithObject:root];
    while (stack.count > 0) {
        UIView *v = stack.lastObject;
        [stack removeLastObject];
        if ([v isKindOfClass:[UIControl class]] && MioVPButtonUsable(v) && v.userInteractionEnabled) {
            CGFloat mn = MIN(v.bounds.size.width, v.bounds.size.height);
            if (mn >= 24.0 && mn <= 44.0) {
                CGRect f = [root convertRect:v.bounds fromView:v];
                CGFloat mx = CGRectGetMaxX(f);
                if (mx > bestMaxX) { bestMaxX = mx; best = (UIControl *)v; }
            }
        }
        for (UIView *sub in v.subviews) [stack addObject:sub];
    }
    return best;
}

/// 加号按钮解析（对齐 WCR FUN_008d3bd0）：ivar 直取（精确）优先，智能扫描兜底
static UIView *MioVPResolvePlusButton(UIView *toolView) {
    static BOOL loggedFail = NO;
    // ① ivar 直取 _attachmentButton（对齐 WCR FUN_008ceaa4，零异常查法）
    UIView *attach = nil;
    Ivar iv = class_getInstanceVariable(object_getClass(toolView), "_attachmentButton");
    if (iv) {
        id v = object_getIvar(toolView, iv);
        if ([v isKindOfClass:[UIView class]]) attach = v;
    }

    // ② 智能扫描（右最侧 24~44pt 控件）
    UIControl *scanned = MioVPScanPlusCandidate(toolView);

    if (attach && MioVPButtonUsable(attach) && attach.userInteractionEnabled) {
        loggedFail = NO;
        return attach;
    }
    if (scanned && MioVPButtonUsable(scanned) && scanned.userInteractionEnabled) {
        loggedFail = NO;
        return scanned;
    }
    if (!loggedFail) {
        loggedFail = YES; // 只打一次，避免 layoutSubviews 高频刷屏
        WPLog(@"Voice", @"[PlusLP] 加号按钮解析失败: ivar=%@ scan=%@", attach, scanned);
    }
    return (scanned ?: attach);
}

/// 幂等安装器（对齐 WCR FUN_008d1600）：确保长按手势挂在当前加号按钮上
static void MioVPEnsurePlusLongPress(UIView *toolView) {
    if (!toolView) return;

    UIView *btn = MioVPResolvePlusButton(toolView);
    UIView *prev = objc_getAssociatedObject(toolView, &kMioVPCurPlusBtnKey);

    // 按钮实例变化：摘除旧手势（对齐 WCR 换绑逻辑）
    if (prev && prev != btn) {
        UILongPressGestureRecognizer *oldG = objc_getAssociatedObject(prev, &kMioVPBtnGestureKey);
        if ([oldG isKindOfClass:[UILongPressGestureRecognizer class]]) {
            [prev removeGestureRecognizer:oldG];
        }
        objc_setAssociatedObject(prev, &kMioVPBtnGestureKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(toolView, &kMioVPCurPlusBtnKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        WPLog(@"Voice", @"[PlusLP] 加号按钮实例变化，手势换绑: %@ → %@",
              NSStringFromClass(prev.class), btn ? NSStringFromClass(btn.class) : @"nil");
    }

    UILongPressGestureRecognizer *g = btn ? objc_getAssociatedObject(btn, &kMioVPBtnGestureKey) : nil;

    if (!MioVPPlusLongPressActive()) {
        // 开关关闭：主动摘除（对齐 WCR 关闭路径）
        if ([g isKindOfClass:[UILongPressGestureRecognizer class]]) {
            [btn removeGestureRecognizer:g];
            objc_setAssociatedObject(btn, &kMioVPBtnGestureKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            objc_setAssociatedObject(toolView, &kMioVPCurPlusBtnKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        }
        return;
    }

    if (!btn) return;

    if (![g isKindOfClass:[UILongPressGestureRecognizer class]]) {
        g = [[UILongPressGestureRecognizer alloc] initWithTarget:[VoiceHook class]
                                                          action:@selector(vpPlusLongPressed:)];
        g.minimumPressDuration = 0.5;
        g.cancelsTouchesInView = NO; // 不干扰加号短按
        objc_setAssociatedObject(btn, &kMioVPBtnGestureKey, g, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        [btn addGestureRecognizer:g];
        WPLog(@"Voice", @"[PlusLP] 长按手势已挂到加号按钮本体: %@ / 按钮 %@",
              NSStringFromClass(toolView.class), NSStringFromClass(btn.class));
    }
    g.enabled = YES; // 每次 pass 复活（对齐 WCR setEnabled:YES）
    objc_setAssociatedObject(toolView, &kMioVPCurPlusBtnKey, btn, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

// 驱动点 1：layoutSubviews（对齐 WCR FUN_008cd3f8）
static void hook_ITV_layoutSubviews(id self, SEL _cmd) {
    ((void (*)(id, SEL))orig_ITV_layoutSubviews)(self, _cmd);
    @try {
        if ([self isKindOfClass:[UIView class]]) MioVPEnsurePlusLongPress((UIView *)self);
    } @catch (NSException *e) {}
}

// 驱动点 2：didMoveToWindow（对齐 WCR FUN_008cd48c：window 非空才装）
static void hook_ITV_didMoveToWindow(id self, SEL _cmd) {
    ((void (*)(id, SEL))orig_ITV_didMoveToWindow)(self, _cmd);
    @try {
        if ([self isKindOfClass:[UIView class]] && ((UIView *)self).window) {
            MioVPEnsurePlusLongPress((UIView *)self);
        }
    } @catch (NSException *e) {}
}

// ═══════════════════════════════════════════════════════
// +install
// ═══════════════════════════════════════════════════════

@implementation VoiceHook

/// 手势处理器（对齐 WCR FUN_008cd918 WCRVPHandlePlusLongPress:）
/// 手势挂在加号按钮本体上，无需再做触摸位置过滤
+ (void)vpPlusLongPressed:(UILongPressGestureRecognizer *)gr {
    if (gr.state != UIGestureRecognizerStateBegan) return;
    @try {
        if (!MioVPPlusLongPressActive()) return; // handler 内二次校验（对齐 WCR）

        UIView *btn = gr.view;
        if (!btn) return;

        // one-shot 防重入 + 0.5s 自动复位（对齐 WCR FUN_008cd918 / FUN_008d6fe8）
        NSNumber *fired = objc_getAssociatedObject(btn, &kMioVPOneShotKey);
        if (fired.boolValue) return;
        objc_setAssociatedObject(btn, &kMioVPOneShotKey, @YES, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.5 * NSEC_PER_SEC)),
                       dispatch_get_main_queue(), ^{
            objc_setAssociatedObject(btn, &kMioVPOneShotKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        });

        // 触觉反馈（对齐 WCR FUN_008cef6c：UIImpactFeedbackGenerator）
        UIImpactFeedbackGenerator *haptic =
            [[UIImpactFeedbackGenerator alloc] initWithStyle:UIImpactFeedbackStyleMedium];
        [haptic impactOccurred];

        // 会话名：宿主聊天页 GetContact（本版本已验证路径）→ 全局窗口兜底
        UIViewController *host = HostVCForView(btn);
        NSString *chat = nil;
        Class bmccCls = objc_getClass("BaseMsgContentViewController");
        if (host && bmccCls && [host isKindOfClass:bmccCls]) {
            chat = ChatNameFromChatVC(host);
        }
        if (chat.length == 0) chat = CurrentChatUserName();
        if (chat.length == 0) {
            WPLog(@"Voice", @"[PlusLP] 会话识别失败: host=%@",
                  host ? NSStringFromClass(host.class) : @"nil");
            WPShowToast(@"未识别到当前会话");
            return;
        }

        WPVoicePackPickerVC *picker = [[WPVoicePackPickerVC alloc] initWithChatName:chat];
        UINavigationController *nav = host.navigationController;
        if (nav) {
            [nav pushViewController:picker animated:YES];
        } else {
            UIViewController *top = TopPresentedVC([[UIApplication sharedApplication].windows.firstObject rootViewController]);
            UINavigationController *wrap = [[UINavigationController alloc] initWithRootViewController:picker];
            [top presentViewController:wrap animated:YES completion:nil];
        }
        WPLog(@"Voice", @"[PlusLP] 长按加号打开语音包: %@", chat);
    } @catch (NSException *e) {
        WPLog(@"Voice", @"[PlusLP] 异常: %@", e.reason);
    }
}

// 改名确认弹窗（对齐 WCR presentVoiceIncludeFlowFrom → FUN_01f6d9ac：
// 默认名预填、最长 80 字符、取消/纳入）
+ (void)presentIncludeAlertWithData:(NSData *)data defaultName:(NSString *)defName {
    UIViewController *top = TopPresentedVC(
        [[UIApplication sharedApplication].windows.firstObject rootViewController]);
    if (!top) return;
    UIAlertController *alert =
        [UIAlertController alertControllerWithTitle:@"纳入语音包"
                                            message:@"保存到语音包根目录，可在「语音包管理」整理"
                                     preferredStyle:UIAlertControllerStyleAlert];
    [alert addTextFieldWithConfigurationHandler:^(UITextField *tf) {
        tf.text = defName;
        tf.placeholder = @"语音名称";
    }];
    [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    [alert addAction:[UIAlertAction actionWithTitle:@"纳入" style:UIAlertActionStyleDefault
                                            handler:^(UIAlertAction *a) {
        NSString *name = alert.textFields.firstObject.text ?: @"";
        name = [name stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (name.length == 0) name = @"voice_silk"; // 对齐 WCR 默认名
        if (name.length > 80) name = [name substringToIndex:80]; // 对齐 WCR maxLen 0x50
        NSString *rel = [VoicePackStore importVoiceData:data preferredName:name error:nil];
        if (rel.length > 0) {
            UIImpactFeedbackGenerator *haptic =
                [[UIImpactFeedbackGenerator alloc] initWithStyle:UIImpactFeedbackStyleMedium];
            [haptic impactOccurred]; // 成功触觉（对齐 WCR FUN_008db144）
            WPShowToast([NSString stringWithFormat:@"已纳入: %@", rel.lastPathComponent]);
        } else {
            WPShowToast(@"纳入失败（写入文件出错）");
        }
    }]];
    [top presentViewController:alert animated:YES completion:nil];
}

// ═══════════════════════════════════════════════════════
// 取证探针 A（精简手写版）：6 个发送链方法，只打日志
// （批量版按"参数个数分类"生成签名不匹配的替换函数 → 参数转发寄存器垃圾被当对象 → SEGV，
//   加上 DB 僵尸语音消息每次启动触发重发扫描 → 崩溃循环（log25 根因），整个机制已废弃。
//   ObjC 没有"任意签名通用转发"的安全捷径，探针只取证，全部手写签名。
//   三段式：先调原实现 → @try 打一行日志（只打 sel 名，不格式化参数）→ 返回原实现结果）
// ═══════════════════════════════════════════════════════

static id (*g_origResendMsg)(id, SEL, id, id);
static id probe_ResendMsg(id self, SEL _cmd, id a1, id a2) {
    id r = g_origResendMsg(self, _cmd, a1, a2);
    @try { WPLog(@"Voice", @"[SendProbe] ▶ ResendMsg:MsgWrap:"); } @catch (NSException *e) {}
    return r;
}

static id (*g_origSendMsg)(id, SEL, id, id);
static id probe_SendMsg(id self, SEL _cmd, id a1, id a2) {
    id r = g_origSendMsg(self, _cmd, a1, a2);
    @try { WPLog(@"Voice", @"[SendProbe] ▶ sendMsg:toContactUsrName:"); } @catch (NSException *e) {}
    return r;
}

static id (*g_origSendSuccess)(id, SEL, id);
static id probe_SendSuccess(id self, SEL _cmd, id a1) {
    id r = g_origSendSuccess(self, _cmd, a1);
    @try { WPLog(@"Voice", @"[SendProbe] ▶ OnSendMessageSuccess:"); } @catch (NSException *e) {}
    return r;
}

static id (*g_origSendFail)(id, SEL, id);
static id probe_SendFail(id self, SEL _cmd, id a1) {
    id r = g_origSendFail(self, _cmd, a1);
    @try { WPLog(@"Voice", @"[SendProbe] ▶ OnSendMessageFail:"); } @catch (NSException *e) {}
    return r;
}

static id (*g_origSentBySender)(id, SEL, id);
static id probe_SentBySender(id self, SEL _cmd, id a1) {
    id r = g_origSentBySender(self, _cmd, a1);
    @try { WPLog(@"Voice", @"[SendProbe] ▶ OnMessageSentBySender:"); } @catch (NSException *e) {}
    return r;
}

static id (*g_origResendAll)(id, SEL);
static id probe_ResendAll(id self, SEL _cmd) {
    WPLog(@"Voice", @"[SendProbe] ▶ reSendAllMsgFromNotificationDone (启动重发扫描)"); // 先打日志：orig 可能耗时长
    id r = g_origResendAll(self, _cmd);
    return r;
}

static void MioInstallSendProbe(void) {
    Class cls = objc_getClass("CMessageMgr");
    if (!cls) { WPLog(@"Voice", @"[SendProbe] CMessageMgr not found"); return; }
    struct ProbeEntry { const char *name; void *hook; IMP *orig; };
    struct ProbeEntry probes[] = {
        {"ResendMsg:MsgWrap:", (void *)probe_ResendMsg, (IMP *)&g_origResendMsg},
        {"sendMsg:toContactUsrName:", (void *)probe_SendMsg, (IMP *)&g_origSendMsg},
        {"OnSendMessageSuccess:", (void *)probe_SendSuccess, (IMP *)&g_origSendSuccess},
        {"OnSendMessageFail:", (void *)probe_SendFail, (IMP *)&g_origSendFail},
        {"OnMessageSentBySender:", (void *)probe_SentBySender, (IMP *)&g_origSentBySender},
        {"reSendAllMsgFromNotificationDone", (void *)probe_ResendAll, (IMP *)&g_origResendAll},
    };
    int ok = 0;
    for (NSUInteger i = 0; i < sizeof(probes) / sizeof(probes[0]); i++) {
        SEL sel = NSSelectorFromString(@(probes[i].name));
        if (!class_getInstanceMethod(cls, sel)) {
            WPLog(@"Voice", @"[SendProbe] [-] %@ 不存在，跳过", @(probes[i].name));
            continue;
        }
        MSHookMessageEx(cls, sel, (IMP)probes[i].hook, probes[i].orig);
        WPLog(@"Voice", @"[SendProbe] [+] %@ hooked (只打日志)", @(probes[i].name));
        ok++;
    }
    WPLog(@"Voice", @"[SendProbe] 手写探针安装完成: %d/6（录真实语音后看 ▶ 序列，AddMsg 之后第一个▶即踢队列动作）", ok);
}

// ═══════════════════════════════════════════════════════
// 取证探针 B：语音文件时间线（AddMsg 前文件叫什么、谁改成 <localID>.aud）
// ═══════════════════════════════════════════════════════

static BOOL (*g_origFMMove)(id, SEL, id, id, id);
static BOOL probe_FMMove(id self, SEL _cmd, id src, id dst, id err) {
    if ([src isKindOfClass:[NSString class]] && ([src containsString:@"/Audio/"] || [dst containsString:@"/Audio/"])) {
        WPLog(@"Voice", @"[FileProbe] move: %@ → %@", src, dst);
    }
    return g_origFMMove(self, _cmd, src, dst, err);
}

static BOOL (*g_origFMCreate)(id, SEL, id, id, id);
static BOOL probe_FMCreate(id self, SEL _cmd, id path, id data, id attrs) {
    if ([path isKindOfClass:[NSString class]] && [path containsString:@"/Audio/"]) {
        WPLog(@"Voice", @"[FileProbe] create: %@ 数据=%lu字节", path,
              [data isKindOfClass:[NSData class]] ? (unsigned long)[(NSData *)data length] : 0);
    }
    return g_origFMCreate(self, _cmd, path, data, attrs);
}

static BOOL (*g_origFMCopy)(id, SEL, id, id, id);
static BOOL probe_FMCopy(id self, SEL _cmd, id src, id dst, id err) {
    if ([src isKindOfClass:[NSString class]] && ([src containsString:@"/Audio/"] || [dst containsString:@"/Audio/"])) {
        WPLog(@"Voice", @"[FileProbe] copy: %@ → %@", src, dst);
    }
    return g_origFMCopy(self, _cmd, src, dst, err);
}

static BOOL (*g_origDataWrite)(id, SEL, id, unsigned long, id);
static BOOL probe_DataWrite(id self, SEL _cmd, id path, unsigned long opt, id err) {
    if ([path isKindOfClass:[NSString class]] && [path containsString:@"/Audio/"]) {
        WPLog(@"Voice", @"[FileProbe] dataWrite: %@ 数据=%lu字节", path, (unsigned long)[(NSData *)self length]);
    }
    return g_origDataWrite(self, _cmd, path, opt, err);
}

static void MioInstallFileProbe(void) {
    @try {
        Class fm = objc_getClass("NSFileManager");
        if (fm) {
            MSHookMessageEx(fm, @selector(moveItemAtPath:toPath:error:), (IMP)probe_FMMove, (IMP *)&g_origFMMove);
            MSHookMessageEx(fm, @selector(createFileAtPath:contents:attributes:), (IMP)probe_FMCreate, (IMP *)&g_origFMCreate);
            MSHookMessageEx(fm, @selector(copyItemAtPath:toPath:error:), (IMP)probe_FMCopy, (IMP *)&g_origFMCopy);
        }
        Class dataCls = objc_getClass("NSData");
        if (dataCls) {
            MSHookMessageEx(dataCls, @selector(writeToFile:options:error:), (IMP)probe_DataWrite, (IMP *)&g_origDataWrite);
        }
        WPLog(@"Voice", @"[FileProbe] 文件时间线探针安装完成 (move/create/copy/dataWrite, 过滤/Audio/)");
    } @catch (NSException *e) {
        WPLog(@"Voice", @"[FileProbe] 安装异常: %@", e.reason);
    }
}

+ (void)install {
    Class cls;

    // ③④⑤ 真实发送流程捕获（① 长按语音纳入是菜单项方案、② 长按加号是手势方案，
    //   均不走 MSHook CMessageMgr 路径）
    // ★run 2035：取证 hook 全部受 NSUserDefaults MioPlugin_Voice_ForensicsHooks 控制
    //  （默认关=干净模式）——崩溃二分法：干净模式还崩=崩在功能路径，再逐组开回
    BOOL forensics = [[NSUserDefaults standardUserDefaults] boolForKey:@"MioPlugin_Voice_ForensicsHooks"];
    WPLog(@"Voice", @"[+] 语音取证 hook 开关: %@", forensics ? @"开" : @"关（干净模式）");
    cls = objc_getClass("CMessageMgr");
    if (cls) {
        if (forensics) {
        MSHookMessageEx(cls, NSSelectorFromString(@"SaveMesVoice:MsgWrap:"),
                        (IMP)hook_SaveMesVoiceMsgWrap,
                        (IMP *)&orig_SaveMesVoiceMsgWrap);
        WPLog(@"Voice", @"[+] CMessageMgr SaveMesVoice:MsgWrap: hooked (真实流程捕获)");

        MSHookMessageEx(cls, NSSelectorFromString(@"AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:"),
                        (IMP)hook_AddLocalMsg6,
                        (IMP *)&orig_AddLocalMsg6);
        WPLog(@"Voice", @"[+] CMessageMgr AddLocalMsg(6参) hooked (真实流程捕获)");

        MSHookMessageEx(cls, NSSelectorFromString(@"AddMsg:MsgWrap:"),
                        (IMP)hook_AddMsgMsgWrap,
                        (IMP *)&orig_AddMsgMsgWrap);
        WPLog(@"Voice", @"[+] CMessageMgr AddMsg:MsgWrap: hooked (真实流程捕获)");

        // 语音管线取证 hook（run 2023）：抓真实录音"松手完成"的调用序列
        SEL uvSel = NSSelectorFromString(@"UpdateVoiceMessage:MsgWrap:");
        if (class_getInstanceMethod(cls, uvSel)) {
            MSHookMessageEx(cls, uvSel, (IMP)hook_UpdateVoiceMessage, (IMP *)&orig_UpdateVoiceMessage);
            WPLog(@"Voice", @"[+] UpdateVoiceMessage:MsgWrap: hooked (语音取证)");
        }
        SEL uvftSel = NSSelectorFromString(@"UpdateVoiceMessage:MsgWrap:fixTime:");
        if (class_getInstanceMethod(cls, uvftSel)) {
            MSHookMessageEx(cls, uvftSel, (IMP)hook_UpdateVoiceMessageFT, (IMP *)&orig_UpdateVoiceMessageFT);
            WPLog(@"Voice", @"[+] UpdateVoiceMessage:MsgWrap:fixTime: hooked (语音取证)");
        }
        SEL uvsSel = NSSelectorFromString(@"UpdateVoiceStatus:LocalID:DownloadStatus:");
        if (class_getInstanceMethod(cls, uvsSel)) {
            MSHookMessageEx(cls, uvsSel, (IMP)hook_UpdateVoiceStatus, (IMP *)&orig_UpdateVoiceStatus);
            WPLog(@"Voice", @"[+] UpdateVoiceStatus:LocalID:DownloadStatus: hooked (语音取证)");
        }
        SEL surSel = NSSelectorFromString(@"StopUploadRecordMsg:");
        if (class_getInstanceMethod(cls, surSel)) {
            MSHookMessageEx(cls, surSel, (IMP)hook_StopUploadRecordMsg, (IMP *)&orig_StopUploadRecordMsg);
            WPLog(@"Voice", @"[+] StopUploadRecordMsg: hooked (语音取证)");
        }
        SEL suruSel = NSSelectorFromString(@"StopUploadRecordMsgByUsername:");
        if (class_getInstanceMethod(cls, suruSel)) {
            MSHookMessageEx(cls, suruSel, (IMP)hook_StopUploadRecordMsgByUser, (IMP *)&orig_StopUploadRecordMsgByUser);
            WPLog(@"Voice", @"[+] StopUploadRecordMsgByUsername: hooked (语音取证)");
        }
        // 发送结果回调取证（run 2034）
        SEL osSuccSel = NSSelectorFromString(@"OnSendMessageSuccess:");
        if (class_getInstanceMethod(cls, osSuccSel)) {
            MSHookMessageEx(cls, osSuccSel, (IMP)hook_OnSendMessageSuccess, (IMP *)&orig_OnSendMessageSuccess);
            WPLog(@"Voice", @"[+] OnSendMessageSuccess: hooked (语音取证)");
        }
        SEL osFailSel = NSSelectorFromString(@"OnSendMessageFail:");
        if (class_getInstanceMethod(cls, osFailSel)) {
            MSHookMessageEx(cls, osFailSel, (IMP)hook_OnSendMessageFail, (IMP *)&orig_OnSendMessageFail);
            WPLog(@"Voice", @"[+] OnSendMessageFail: hooked (语音取证)");
        }
        SEL oerrSel = NSSelectorFromString(@"OnErrorBySender:ErrNo:");
        if (class_getInstanceMethod(cls, oerrSel)) {
            MSHookMessageEx(cls, oerrSel, (IMP)hook_OnErrorBySender, (IMP *)&orig_OnErrorBySender);
            WPLog(@"Voice", @"[+] OnErrorBySender:ErrNo: hooked (语音取证)");
        }
        SEL isUpSel = NSSelectorFromString(@"IsRecordMsgUploading:");
        if (class_getInstanceMethod(cls, isUpSel)) {
            MSHookMessageEx(cls, isUpSel, (IMP)hook_IsRecordMsgUploading, (IMP *)&orig_IsRecordMsgUploading);
            WPLog(@"Voice", @"[+] IsRecordMsgUploading: hooked (语音取证)");
        }
        } // end forensics

        // 语音上传管理器取证（run 2035）：受 forensics 开关控制
        NSArray *upMgrNames = @[@"UploadVoiceCDNMgr", @"MMNewUploadVoiceMgr"];
        for (NSString *mn in upMgrNames) {
            Class uc = objc_getClass(mn.UTF8String);
            if (!uc) { WPLog(@"Voice", @"[-] %@ 不存在", mn); continue; }
            if (forensics) {
                SEL rvmSel = NSSelectorFromString(@"ResendVoiceMsg:MsgWrap:");
                if (class_getInstanceMethod(uc, rvmSel)) {
                    MSHookMessageEx(uc, rvmSel, (IMP)hook_UVM_Resend, (IMP *)&orig_UVM_Resend);
                    WPLog(@"Voice", @"[+] %@ ResendVoiceMsg hooked (上传取证)", mn);
                }
                SEL ssSel = NSSelectorFromString(@"startSend");
                if (class_getInstanceMethod(uc, ssSel)) {
                    MSHookMessageEx(uc, ssSel, (IMP)hook_UVM_StartSend, (IMP *)&orig_UVM_StartSend);
                    WPLog(@"Voice", @"[+] %@ startSend hooked (上传取证)", mn);
                }
            }
            // TimerCheckUpload：活实例捕获（功能必需，不受开关控制）
            SEL tcSel = NSSelectorFromString(@"TimerCheckUpload");
            if ([mn isEqualToString:@"UploadVoiceCDNMgr"] && class_getInstanceMethod(uc, tcSel)) {
                MSHookMessageEx(uc, tcSel, (IMP)hook_UVM_TimerCheck, (IMP *)&orig_UVM_TimerCheck);
                WPLog(@"Voice", @"[+] %@ TimerCheckUpload hooked (活实例捕获)", mn);
            }
        }
    } else {
        WPLog(@"Voice", @"[-] CMessageMgr not found");
    }

    // ① 长按语音消息纳入（小丑按钮同款机制：VoiceMessageCellView.operationMenuItems
    //   追加 MMMenuItem，action 注册到 cell 类上）
    Class voiceCellCls = objc_getClass("VoiceMessageCellView");
    if (voiceCellCls) {
        SEL mioSel = NSSelectorFromString(@"mioVoiceInclude");
        if (!class_addMethod(voiceCellCls, mioSel, (IMP)mioVoiceInclude_IMP, "v@:")) {
            Method m = class_getInstanceMethod(voiceCellCls, mioSel);
            if (m) method_setImplementation(m, (IMP)mioVoiceInclude_IMP);
        }
        SEL menuSel = NSSelectorFromString(@"operationMenuItems");
        Method existingMenu = class_getInstanceMethod(voiceCellCls, menuSel);
        if (existingMenu) {
            orig_VoiceCell_operationMenuItems = method_getImplementation(existingMenu);
            method_setImplementation(existingMenu, (IMP)hooked_VoiceCell_operationMenuItems);
            WPLog(@"Voice", @"[+] VoiceMessageCellView operationMenuItems hooked (纳入语音包菜单项)");
        } else {
            WPLog(@"Voice", @"[-] VoiceMessageCellView operationMenuItems 不存在");
        }
    } else {
        WPLog(@"Voice", @"[-] VoiceMessageCellView not found");
    }

    // ② 长按加号手势驱动点（WCRefine 方案：MMInputToolView 生命周期驱动幂等安装器）
    cls = objc_getClass("MMInputToolView");
    if (cls) {
        SEL lsSel = @selector(layoutSubviews);
        if (class_getInstanceMethod(cls, lsSel)) {
            MSHookMessageEx(cls, lsSel,
                            (IMP)hook_ITV_layoutSubviews,
                            (IMP *)&orig_ITV_layoutSubviews);
            WPLog(@"Voice", @"[+] MMInputToolView layoutSubviews hooked (加号长按安装器)");
        } else {
            WPLog(@"Voice", @"[-] MMInputToolView layoutSubviews 不存在");
        }
        SEL dmwSel = @selector(didMoveToWindow);
        if (class_getInstanceMethod(cls, dmwSel)) {
            MSHookMessageEx(cls, dmwSel,
                            (IMP)hook_ITV_didMoveToWindow,
                            (IMP *)&orig_ITV_didMoveToWindow);
            WPLog(@"Voice", @"[+] MMInputToolView didMoveToWindow hooked (加号长按安装器)");
        } else {
            WPLog(@"Voice", @"[-] MMInputToolView didMoveToWindow 不存在");
        }
    } else {
        WPLog(@"Voice", @"[-] MMInputToolView not found");
    }

    // ⑦ 取证探针（已停用：log25/27 启动即崩，两版探针唯一共同变量是 FileProbe
    //   hook 的 NSData/NSFileManager 高频方法——二分定位中，先全部不装）
    // MioInstallFileProbe();
    // MioInstallSendProbe();
}

@end
