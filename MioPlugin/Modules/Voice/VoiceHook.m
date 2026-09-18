#import "VoiceHook.h"
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>
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

/// 读取 m_uiMesLocalID
static unsigned int MioWrapLocalID(id wrap) {
    if (!wrap) return 0;
    Ivar iv = class_getInstanceVariable(object_getClass(wrap), "m_uiMesLocalID");
    if (!iv) return 0;
    return *(unsigned int *)((__bridge void *)wrap + ivar_getOffset(iv));
}

/// 全量 dump 消息 wrap 的 ivar 值（一次消息一条，开销可忽略）
static void MioDumpVoiceWrap(id wrap, NSString *tag) {
    if (!wrap) return;
    @try {
        unsigned int count = 0;
        Class cls = object_getClass(wrap);
        Ivar *list = class_copyIvarList(cls, &count);
        NSMutableString *out = [NSMutableString string];
        const void *base = (__bridge void *)wrap;
        for (unsigned int i = 0; i < count; i++) {
            const char *nm = ivar_getName(list[i]);
            const char *enc = ivar_getTypeEncoding(list[i]);
            if (!nm || !enc) continue;
            ptrdiff_t off = ivar_getOffset(list[i]);
            NSString *piece = nil;
            if (enc[0] == '@') {
                id v = object_getIvar(wrap, list[i]);
                if ([v isKindOfClass:[NSString class]]) {
                    NSString *s = (NSString *)v;
                    if (s.length == 0) piece = @"\"\"";
                    else piece = [NSString stringWithFormat:@"\"%@\"(len=%lu)", s.length > 110 ? [s substringToIndex:110] : s, (unsigned long)s.length];
                } else if ([v isKindOfClass:[NSData class]]) {
                    piece = [NSString stringWithFormat:@"NSData(%lu字节)", (unsigned long)[v length]];
                } else if (v) {
                    piece = [NSString stringWithFormat:@"<%@>", NSStringFromClass(v.class)];
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
        free(list);
        WPLog(@"Voice", @"[%@] wrap(%u ivars):%@", tag, count, out);
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
        if (t == 34) MioDumpVoiceWrap(wrap, @"真实流程.AddLocal");
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
}

@end
