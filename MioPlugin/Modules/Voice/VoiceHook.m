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

static const NSInteger kVoicePackEntryTag = 952701; // 附件面板入口按钮 tag

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

// Hook ④: CMessageMgr.SaveMesVoice:MsgWrap:（真实录音发送会经过，若本版本仍在用）
static IMP orig_SaveMesVoiceMsgWrap = NULL;

static void hook_SaveMesVoiceMsgWrap(id self, SEL _cmd, id path, id wrap) {
    WPLog(@"Voice", @"[真实流程] SaveMesVoice 进入 path=%@", path);
    MioDumpVoiceWrap(wrap, @"真实流程.SaveMes入口");
    ((void (*)(id, SEL, id, id))orig_SaveMesVoiceMsgWrap)(self, _cmd, path, wrap);
    WPLog(@"Voice", @"[真实流程] SaveMesVoice 返回 localID=%u", MioWrapLocalID(wrap));
    MioDumpVoiceWrap(wrap, @"真实流程.SaveMes出口");
}

// Hook ⑤: CMessageMgr.AddLocalMsg:MsgWrap:fixTime:NewMsgArriveNotify:（本地入库主路径）
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

// Hook ⑥: CMessageMgr.AddMsg:MsgWrap:（RedEnv 已挂一层，substrate 链式不冲突）
static IMP orig_AddMsgMsgWrap = NULL;

static void hook_AddMsgMsgWrap(id self, SEL _cmd, id chatName, id wrap) {
    @try {
        unsigned int t = 0;
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
}

// ═══════════════════════════════════════════════════════
// Hook ①: SelectAttachmentView.layoutSubviews — 附件面板末尾加「语音包」入口
// ═══════════════════════════════════════════════════════

static IMP orig_SelectAttachmentView_layoutSubviews = NULL;

static void hook_SelectAttachmentView_layoutSubviews(id self, SEL _cmd) {
    ((void (*)(id, SEL))orig_SelectAttachmentView_layoutSubviews)(self, _cmd);
    @try {
        VoiceConfig *cfg = [VoiceConfig shared];
        if (!cfg.voicePackEnabled || !cfg.voicePackAttachmentEnabled) return;

        Ivar ivar = class_getInstanceVariable([self class], "_scrollView");
        if (!ivar) return;
        UIScrollView *sv = object_getIvar(self, ivar);
        if (!sv) return;

        // 已存在则跳过
        if ([sv viewWithTag:kVoicePackEntryTag]) return;

        // 找最后一个按钮作为布局基准
        UIButton *last = nil;
        CGFloat maxX = 0;
        for (UIView *v in sv.subviews) {
            if ([v isKindOfClass:[UIButton class]] && v.tag != kVoicePackEntryTag) {
                if (CGRectGetMaxX(v.frame) > maxX) { maxX = CGRectGetMaxX(v.frame); last = (UIButton *)v; }
            }
        }
        if (!last) return;

        CGFloat w = last.frame.size.width;
        CGFloat h = last.frame.size.height;
        CGFloat x = CGRectGetMaxX(last.frame) + 8;
        CGFloat y = last.frame.origin.y;
        if (x + w > sv.bounds.size.width) { // 换行
            x = last.frame.origin.x;
            y = CGRectGetMaxY(last.frame) + 12;
        }

        UIButton *btn = [UIButton buttonWithType:UIButtonTypeSystem];
        btn.tag = kVoicePackEntryTag;
        btn.frame = CGRectMake(x, y, w, h);
        btn.backgroundColor = [UIColor colorWithWhite:0.94 alpha:1.0];
        btn.layer.cornerRadius = 8;
        btn.layer.masksToBounds = YES;
        btn.layer.borderWidth = 1.0 / [UIScreen mainScreen].scale;
        btn.layer.borderColor = [UIColor colorWithWhite:0.82 alpha:1.0].CGColor;
        btn.titleLabel.font = [UIFont systemFontOfSize:12];
        btn.titleLabel.lineBreakMode = NSLineBreakByCharWrapping;
        [btn setTitle:@"语音包" forState:UIControlStateNormal];
        [btn setTitleColor:[UIColor colorWithWhite:0.35 alpha:1.0] forState:UIControlStateNormal];
        [btn addTarget:[VoiceHook class] action:@selector(attachEntryTapped:) forControlEvents:UIControlEventTouchUpInside];
        [sv addSubview:btn];
        WPLog(@"Voice", @"[Attach] 附件面板语音包入口已添加");
    } @catch (NSException *e) {
        WPLog(@"Voice", @"[Attach] 入口添加异常: %@", e.reason);
    }
}

// ═══════════════════════════════════════════════════════
// Hook ②: CMessageMgr.AsyncOnAddMsg:MsgWrap: — 自动纳入收到的语音
// ═══════════════════════════════════════════════════════

static IMP orig_AsyncOnAddMsgMsgWrap = NULL;

static void hook_AsyncOnAddMsgMsgWrap(id self, SEL _cmd, id msg, id wrap) {
    ((void (*)(id, SEL, id, id))orig_AsyncOnAddMsgMsgWrap)(self, _cmd, msg, wrap);
    @try {
        VoiceConfig *cfg = [VoiceConfig shared];
        if (!cfg.voicePackEnabled || !cfg.voicePackAutoIncludeEnabled) return;
        if (!wrap || !msg) return;

        unsigned int msgType = 0;
        if ([wrap respondsToSelector:NSSelectorFromString(@"m_uiMessageType")]) {
            msgType = ((unsigned int (*)(id, SEL, ...))objc_msgSend)(wrap, NSSelectorFromString(@"m_uiMessageType"));
        }
        if (msgType != 34) return; // 仅语音消息

        NSString *fromUsr = [wrap valueForKey:@"m_nsFromUsr"];
        NSString *selfUsr = WXSafeStringGet(WXGetSelfContact(), @"m_nsUsrName");
        BOOL selfSent = (selfUsr.length > 0 && [fromUsr isEqualToString:selfUsr]);

        // 诊断：记录真实语音消息（含自己录制的）的 buffer 头部与 XML，用于对齐发送构造格式
        @try {
            NSData *realBuf = [VoicePackStore voiceDataFromWrap:wrap];
            NSMutableString *hx = [NSMutableString string];
            const uint8_t *rb = realBuf.bytes;
            for (NSUInteger i = 0; i < 8 && i < realBuf.length; i++) [hx appendFormat:@"%02X ", rb[i]];
            NSString *xml = [wrap valueForKey:@"m_nsContent"] ?: @"";
            WPLog(@"Voice", @"[真实语音] self=%d buf=%lu字节 头=[%@] XML=%@",
                  selfSent, (unsigned long)realBuf.length, hx,
                  xml.length > 220 ? [xml substringToIndex:220] : xml);
        } @catch (NSException *e) {}

        if (selfSent) {
            MioDumpVoiceWrap(wrap, @"真实语音.self全字段"); // 自己录的真实语音：全量 dump 字段模板
            return;
        }

        NSData *imgBuf = [VoicePackStore voiceDataFromWrap:wrap];
        if (imgBuf.length == 0) return;

        NSString *chatName = ([msg isKindOfClass:[NSString class]] && [msg length] > 0) ? msg : fromUsr;
        if (chatName.length == 0) return;

        // 聊天纳入/<会话>/<时间戳>.silk
        NSString *dir = [[VoicePackStore chatIncludeDirectory] stringByAppendingPathComponent:chatName];
        [[NSFileManager defaultManager] createDirectoryAtPath:dir withIntermediateDirectories:YES attributes:nil error:nil];
        NSString *fileName = [NSString stringWithFormat:@"%lld.silk", (long long)([[NSDate date] timeIntervalSince1970] * 1000)];
        NSString *abs = [dir stringByAppendingPathComponent:fileName];
        if (![imgBuf writeToFile:abs atomically:YES]) {
            WPLog(@"Voice", @"[Include] 写入失败: %@", abs);
            return;
        }

        // 时长：解析消息 XML 的 voicelength（毫秒）
        NSString *content = [wrap valueForKey:@"m_nsContent"];
        // 诊断：记录真实语音消息的 XML 样本（截断），用于对齐发送构造格式
        if (content.length > 0) {
            WPLog(@"Voice", @"[Include] 真实语音XML: %@", content.length > 260 ? [content substringToIndex:260] : content);
        }
        NSString *rel = [VoicePackStore relPathForAbsPath:abs];
        long long ms = 0;
        if (content.length > 0) {
            NSRange head = [content rangeOfString:@"voicelength=\""];
            if (head.location != NSNotFound) {
                NSUInteger start = NSMaxRange(head);
                NSUInteger end = [content rangeOfString:@"\"" options:0 range:NSMakeRange(start, content.length - start)].location;
                if (end != NSNotFound && end > start) {
                    ms = [[content substringWithRange:NSMakeRange(start, end - start)] longLongValue];
                }
            }
        }
        if (ms > 0 && rel) [VoicePackStore setDurationMs:ms forRelPath:rel];
        WPLog(@"Voice", @"[Include] 已纳入语音: %@ (%.1fKB, %lldms)", rel ?: fileName, imgBuf.length / 1024.0, ms);
    } @catch (NSException *e) {
        WPLog(@"Voice", @"[Include] 纳入异常: %@", e.reason);
    }
}

// ═══════════════════════════════════════════════════════
// Hook ③: BaseMsgContentViewController.viewWillLayoutSubviews
//   — 探测聊天输入栏并挂「长按加号」手势（零布局改动）
// ═══════════════════════════════════════════════════════

static IMP orig_BMCC_viewWillLayoutSubviews = NULL;
static char kPlusLongPressAttachedKey;

/// 递归查找类名含 InputTool 的输入栏视图（微信各版本输入栏基类命名）
static UIView *FindInputToolView(UIView *root) {
    if (!root) return nil;
    NSString *clsName = NSStringFromClass(root.class);
    if ([clsName rangeOfString:@"InputTool" options:NSCaseInsensitiveSearch].location != NSNotFound
        && [root isKindOfClass:[UIView class]]) {
        return root;
    }
    for (UIView *sub in root.subviews) {
        UIView *hit = FindInputToolView(sub);
        if (hit) return hit;
    }
    return nil;
}

/// 沿响应链向上找宿主 ViewController
static UIViewController *HostVCForView(UIView *view) {
    UIResponder *r = view;
    while (r) {
        r = r.nextResponder;
        if ([r isKindOfClass:[UIViewController class]]) return (UIViewController *)r;
    }
    return nil;
}

/// 递归收集（含深层）未隐藏的按钮，返回 minX 最大者（输入栏最右侧 = 加号）
static UIButton *RightmostButton(UIView *root, UIView *container) {
    UIButton *best = nil;
    CGFloat bestX = -CGFLOAT_MAX;
    NSMutableArray<UIView *> *stack = [NSMutableArray arrayWithObject:root];
    while (stack.count > 0) {
        UIView *v = stack.lastObject;
        [stack removeLastObject];
        if ([v isKindOfClass:[UIButton class]] && !v.hidden && v.alpha > 0.01) {
            CGRect f = [container convertRect:v.bounds fromView:v];
            if (f.origin.x > bestX) { bestX = f.origin.x; best = (UIButton *)v; }
        }
        for (UIView *sub in v.subviews) [stack addObject:sub];
    }
    return best;
}

static void AttachPlusLongPressIfNeeded(UIView *chatRoot) {
    VoiceConfig *cfg = [VoiceConfig shared];
    if (!cfg.voicePackEnabled || !cfg.voicePackPlusLongPressEnabled) return;
    UIView *tool = FindInputToolView(chatRoot);
    if (!tool) return;
    if (objc_getAssociatedObject(tool, &kPlusLongPressAttachedKey)) return; // 已挂过（含输入栏重建后新实例）

    UILongPressGestureRecognizer *lp = [[UILongPressGestureRecognizer alloc]
        initWithTarget:[VoiceHook class] action:@selector(plusLongPressed:)];
    lp.minimumPressDuration = 0.5;
    lp.cancelsTouchesInView = NO; // 不干扰加号短按与输入栏其它手势
    objc_setAssociatedObject(tool, &kPlusLongPressAttachedKey, lp, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [tool addGestureRecognizer:lp];
    WPLog(@"Voice", @"[PlusLP] 长按手势已挂到输入栏: %@", NSStringFromClass(tool.class));
}

static void hook_BMCC_viewWillLayoutSubviews(id self, SEL _cmd) {
    ((void (*)(id, SEL))orig_BMCC_viewWillLayoutSubviews)(self, _cmd);
    @try {
        UIView *rootView = ((UIView *(*)(id, SEL))objc_msgSend)(self, @selector(view));
        if (rootView) AttachPlusLongPressIfNeeded(rootView);
    } @catch (NSException *e) {
        // 布局高频路径，吞掉异常避免影响聊天页
    }
}

// ═══════════════════════════════════════════════════════
// +install
// ═══════════════════════════════════════════════════════

@implementation VoiceHook

+ (void)attachEntryTapped:(UIButton *)sender {
    NSString *chat = CurrentChatUserName();
    if (chat.length == 0) {
        WPShowToast(@"未识别到当前会话");
        return;
    }
    UIViewController *root = [[UIApplication sharedApplication].windows.firstObject rootViewController];
    UIViewController *top = TopPresentedVC(root);
    UINavigationController *nav = nil;
    if ([top isKindOfClass:[UINavigationController class]]) {
        nav = (UINavigationController *)top;
    } else if (top.navigationController) {
        nav = top.navigationController;
    }
    WPVoicePackPickerVC *picker = [[WPVoicePackPickerVC alloc] initWithChatName:chat];
    if (nav) {
        [nav pushViewController:picker animated:YES];
    } else {
        UINavigationController *wrap = [[UINavigationController alloc] initWithRootViewController:picker];
        [top presentViewController:wrap animated:YES completion:nil];
    }
    WPLog(@"Voice", @"[Attach] 打开语音包选择页: %@", chat);
}

+ (void)plusLongPressed:(UILongPressGestureRecognizer *)gr {
    if (gr.state != UIGestureRecognizerStateBegan) return;
    @try {
        UIView *tool = gr.view;
        if (!tool) return;

        // 触摸点必须落在输入栏最右侧按钮（加号）附近
        UIButton *plus = RightmostButton(tool, tool);
        if (!plus) return;
        CGPoint loc = [gr locationInView:tool];
        CGRect zone = [tool convertRect:plus.bounds fromView:plus];
        if (!CGRectContainsPoint(CGRectInset(zone, -10, -10), loc)) return;

        // 宿主聊天页 → 当前会话名（isKindOfClass 沿继承链判断，实例类可能是 ChatRoomViewController 等子类）
        UIViewController *host = HostVCForView(tool);
        NSString *chat = nil;
        Class bmccCls = objc_getClass("BaseMsgContentViewController");
        if (host && bmccCls && [host isKindOfClass:bmccCls]) {
            chat = ChatNameFromChatVC(host);
        }
        if (chat.length == 0) chat = CurrentChatUserName();
        if (chat.length == 0) {
            SEL getContact = NSSelectorFromString(@"GetContact");
            WPLog(@"Voice", @"[PlusLP] 会话识别失败: host=%@, GetContact=%d",
                  host ? NSStringFromClass(host.class) : @"nil",
                  host ? [host respondsToSelector:getContact] : NO);
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

    // ① 附件面板入口
    cls = objc_getClass("SelectAttachmentView");
    if (cls) {
        MSHookMessageEx(cls, sel_registerName("layoutSubviews"),
                        (IMP)hook_SelectAttachmentView_layoutSubviews,
                        (IMP *)&orig_SelectAttachmentView_layoutSubviews);
        WPLog(@"Voice", @"[+] SelectAttachmentView layoutSubviews hooked");
    } else {
        WPLog(@"Voice", @"[-] SelectAttachmentView not found");
    }

    // ② 自动纳入语音 + ④⑤⑥ 真实发送流程捕获
    cls = objc_getClass("CMessageMgr");
    if (cls) {
        MSHookMessageEx(cls, @selector(AsyncOnAddMsg:MsgWrap:),
                        (IMP)hook_AsyncOnAddMsgMsgWrap,
                        (IMP *)&orig_AsyncOnAddMsgMsgWrap);
        WPLog(@"Voice", @"[+] CMessageMgr AsyncOnAddMsg:MsgWrap: hooked");

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
    } else {
        WPLog(@"Voice", @"[-] CMessageMgr not found");
    }

    // ③ 长按加号入口
    cls = objc_getClass("BaseMsgContentViewController");
    if (cls) {
        MSHookMessageEx(cls, @selector(viewWillLayoutSubviews),
                        (IMP)hook_BMCC_viewWillLayoutSubviews,
                        (IMP *)&orig_BMCC_viewWillLayoutSubviews);
        WPLog(@"Voice", @"[+] BaseMsgContentViewController viewWillLayoutSubviews hooked");
    } else {
        WPLog(@"Voice", @"[-] BaseMsgContentViewController not found");
    }

    // ⑦ 取证探针（已停用：log25/27 启动即崩，两版探针唯一共同变量是 FileProbe
    //   hook 的 NSData/NSFileManager 高频方法——二分定位中，先全部不装）
    // MioInstallFileProbe();
    // MioInstallSendProbe();
}

@end
