#import "VoiceHook.h"
#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <substrate.h>
#import "VoiceConfig.h"
#import "WPVoicePackPickerVC.h"
#import "../SettingEntry/WPCommonUI.h"
#import "../../Core/LogManager.h"

// ═════════════════════════════════════════════════════════
// 工具：从视图层级 / VC 栈里找指定类名的 ViewController
// ═════════════════════════════════════════════════════════

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

// ═════════════════════════════════════════════════════════
// Hook ①: MMInputToolView 生命周期 — 长按加号入口（WCRefine 方案完整复刻）
//   手势直接挂到「加号按钮本体」（_attachmentButton ivar 直取 → 智能扫描兜底），
//   不再挂整个输入栏做触摸位置过滤。幂等安装器：view↔gesture 配对跟踪，
//   按钮实例变化自动换绑；开关关闭主动摘除手势；handler 内二次校验开关 +
//   one-shot 防重入 + 触觉反馈。
//   对齐 WCR反编译：FUN_008d1600(安装器) / FUN_008d3bd0(按钮解析) /
//   FUN_008cd918(WCRVPHandlePlusLongPress:) / FUN_008d6fe8(one-shot 复位)
// ═════════════════════════════════════════════════════════

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

// ═════════════════════════════════════════════════════════
// +install
// ═════════════════════════════════════════════════════════

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

+ (void)install {
    Class cls;

    // ① 长按加号手势驱动点（WCRefine 方案：MMInputToolView 生命周期驱动幂等安装器）
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
}

@end
