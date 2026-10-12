//
//  MsgMergeHook.m — 消息合并钩子
//  MRC 编译（与工程一致）
//
//  架构（对齐 BubbleBox 反编译证据 + 工程既有范式）：
//    ① BaseMsgContentViewController viewDidLoad/viewWillAppear: → 跟踪当前会话
//       （HideAvatarHook updateChatContext 同款：GetContact → m_nsUsrName）
//    ② CommonMessageCellView layoutInternal / updateNodeStatus → 按节点位置
//       应用合并渲染：头像显隐 / 群昵称显隐 / 气泡圆角连续化 / 手动间距近似
//
//  挂载点为 CommonMessageCellView 头文件实证方法（initWithViewModel:/
//  layoutInternal/updateNodeStatus 与 BubbleBox 反编译钩子点一致）。
//
//  v1 已知边界（如实声明）：
//    - 隐藏头像后不扩展气泡（BubbleBox 会重排内容），组内非首条会留头像位空白
//    - 手动间距为 cell 内气泡上移近似，真正的行间距需 hook 行高计算（后续版本）
//

#import "MsgMergeHook.h"
#import "MsgMergeConfig.h"
#import "MsgMergeEngine.h"
#import "../../Core/LogManager.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>

// ============================================================
// MARK: - Original IMPs
// ============================================================

static IMP orig_BaseMsgContentVC_viewDidLoad   = NULL;
static IMP orig_BaseMsgContentVC_viewWillAppear = NULL;
static IMP orig_CMCellView_layoutInternal       = NULL;
static IMP orig_CMCellView_updateNodeStatus     = NULL;

// ============================================================
// MARK: - 会话上下文
// ============================================================

static NSString *g_currentChatName = nil;   // 当前会话 talker（群聊=chatroom id，私聊=对端 id）

static void updateChatContext(id self) {
    @try {
        id contact = ((id (*)(id, SEL))objc_msgSend)(self, NSSelectorFromString(@"GetContact"));
        NSString *name = nil;
        @try { name = [contact valueForKey:@"m_nsUsrName"]; } @catch (NSException *ignored) {}
        if ([name isKindOfClass:[NSString class]] && name.length > 0) {
            if (![name isEqualToString:g_currentChatName]) {
                WPLog(@"MsgMerge", @"[Ctx] chat switch: %@ → %@", g_currentChatName, name);
#if __has_feature(objc_arc)
#else
                if (g_currentChatName) [g_currentChatName release];
#endif
                g_currentChatName = [name copy];
                [MsgMergeEngine clearCache];
            }
        }
    } @catch (NSException *e) {
        WPLog(@"MsgMerge", @"[Ctx] updateChatContext exception: %@", e.reason);
    }
}

static NSString *currentChatName(void) {
    return g_currentChatName;
}

// ============================================================
// MARK: - 视图安全访问
// ============================================================

static id safeCall(id obj, const char *selName) {
    if (!obj) return nil;
    @try {
        SEL sel = NSSelectorFromString(@(selName));
        if (![obj respondsToSelector:sel]) return nil;
        return ((id (*)(id, SEL))objc_msgSend)(obj, sel);
    } @catch (NSException *e) {
        return nil;
    }
}

static id safeKVC(id obj, NSString *key) {
    if (!obj) return nil;
    @try { return [obj valueForKey:key]; } @catch (NSException *e) { return nil; }
}

// ============================================================
// MARK: - 圆角连续化（associated 备份原值，可还原）
// ============================================================

static void *kMMOrigRadius   = &kMMOrigRadius;
static void *kMMOrigMasked   = &kMMOrigMasked;
static void *kMMTouched      = &kMMTouched;

static void markTouched(id cellView) {
    objc_setAssociatedObject(cellView, kMMTouched, @(YES), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

static BOOL isTouched(id cellView) {
    return [objc_getAssociatedObject(cellView, kMMTouched) boolValue];
}

/// 记录原始圆角（首次触碰时）
static void backupCornerIfNeeded(UIImageView *bg) {
    if (objc_getAssociatedObject(bg, kMMOrigRadius)) return;
    CGFloat r = bg.layer.cornerRadius;
    objc_setAssociatedObject(bg, kMMOrigRadius, @(r), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(bg, kMMOrigMasked, @(bg.layer.maskedCorners), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

/// 还原原始圆角
static void restoreCorner(UIImageView *bg) {
    if (!bg) return;
    NSNumber *r = objc_getAssociatedObject(bg, kMMOrigRadius);
    NSNumber *m = objc_getAssociatedObject(bg, kMMOrigMasked);
    if (r) bg.layer.cornerRadius = [r floatValue];
    if (m) bg.layer.maskedCorners = [m unsignedIntValue];
}

/// 按节点位置应用圆角连续化：
///   组首：下角收小（与下一条相连）；组中：四角收小；组尾：上角收小
///   半径取原半径的 1/3（原值 associated 备份）
static void applyCorner(UIImageView *bg, MOMergePosition pos) {
    if (![bg isKindOfClass:[UIImageView class]]) return;
    backupCornerIfNeeded(bg);
    NSNumber *origR = objc_getAssociatedObject(bg, kMMOrigRadius);
    CGFloat original = origR ? [origR floatValue] : bg.layer.cornerRadius;
    if (original <= 0) original = 8.0;
    CGFloat joinRadius = original / 3.0;

    CACornerMask all = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner
                     | kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
    CACornerMask top = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner;
    CACornerMask bottom = kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;

    switch (pos) {
        case MOMergePositionFirst:
            // 上角保持原半径，下角不圆（与下一条相连）
            bg.layer.cornerRadius = original;
            bg.layer.maskedCorners = top;
            break;
        case MOMergePositionMiddle:
            bg.layer.cornerRadius = joinRadius;
            bg.layer.maskedCorners = all;
            break;
        case MOMergePositionLast:
            // 下角保持原半径，上角不圆（与上一条相连）
            bg.layer.cornerRadius = original;
            bg.layer.maskedCorners = bottom;
            break;
        default:
            restoreCorner(bg);
            break;
    }
}

// ============================================================
// MARK: - 合并渲染应用
// ============================================================

static void applyMergeToCellView(id cellView) {
    @try {
        MsgMergeConfig *cfg = [MsgMergeConfig shared];

        // 功能关闭：还原此前触碰过的 cell，然后不干预
        if (!cfg.mmEnable) {
            if (isTouched(cellView)) {
                UIImageView *bg = safeCall(cellView, "getBgImageView");
                if ([bg isKindOfClass:[UIImageView class]]) restoreCorner(bg);
                id head = safeCall(cellView, "getHeadImageView");
                if ([head isKindOfClass:[UIView class]]) [(UIView *)head setHidden:NO];
                id name = safeCall(cellView, "getNameLabel");
                if ([name isKindOfClass:[UILabel class]]) [(UILabel *)name setHidden:NO];
                markTouched(cellView);  // 保持标记，防止重复还原开销（幂等）
            }
            return;
        }

        NSString *chat = currentChatName();
        if (chat.length == 0) return;   // 会话上下文未就绪

        id viewModel = safeKVC(cellView, @"viewModel");
        if (!viewModel) return;
        id wrap = safeKVC(viewModel, @"messageWrap");
        if (!wrap) return;

        MOMergePosition pos = [MsgMergeEngine positionForWrap:wrap chatName:chat];
        if (pos == MOMergePositionNone) return;   // 系统消息/不可合并：不干预

        BOOL isFirst = (pos == MOMergePositionFirst || pos == MOMergePositionSingle);
        BOOL isLast  = (pos == MOMergePositionLast  || pos == MOMergePositionSingle);
        BOOL inGroup = [chat hasSuffix:@"@chatroom"];

        markTouched(cellView);

        // ① 头像显隐（气泡设定=0 时尊重微信默认，不干预）
        if (cfg.mmAvatarPos == 1 || cfg.mmAvatarPos == 2) {
            BOOL showAvatar = (cfg.mmAvatarPos == 1) ? isFirst : isLast;
            id head = safeCall(cellView, "getHeadImageView");
            if ([head isKindOfClass:[UIView class]]) [(UIView *)head setHidden:!showAvatar];
        }

        // ② 群昵称：仅组首显示（私聊无昵称标签，操作无害）
        if (inGroup) {
            id name = safeCall(cellView, "getNameLabel");
            if ([name isKindOfClass:[UILabel class]]) [(UILabel *)name setHidden:!isFirst];
        }

        // ③ 气泡背景圆角连续化（独立消息还原原值）
        UIImageView *bg = safeCall(cellView, "getBgImageView");
        if ([bg isKindOfClass:[UIImageView class]]) {
            applyCorner(bg, pos);
        }

        // ④ 手动间距（v1 近似：非组首将气泡背景在 cell 内上移 spacing pt）
        if (cfg.mmSpacingMode == 1 && cfg.mmSpacing > 0 && !isFirst && [bg isKindOfClass:[UIImageView class]]) {
            CGRect f = bg.frame;
            f.origin.y -= cfg.mmSpacing;
            if (f.origin.y < 1) f.origin.y = 1;   // 防越界
            bg.frame = f;
        }
    } @catch (NSException *e) {
        WPLog(@"MsgMerge", @"[Apply] exception: %@", e.reason);
    }
}

// ============================================================
// MARK: - Hook 替换函数
// ============================================================

static void repl_BaseMsgContentVC_viewDidLoad(id self, SEL _cmd) {
    ((void (*)(id, SEL))orig_BaseMsgContentVC_viewDidLoad)(self, _cmd);
    updateChatContext(self);
}

static void repl_BaseMsgContentVC_viewWillAppear(id self, SEL _cmd, BOOL animated) {
    ((void (*)(id, SEL, BOOL))orig_BaseMsgContentVC_viewWillAppear)(self, _cmd, animated);
    updateChatContext(self);
}

static void repl_CMCellView_layoutInternal(id self, SEL _cmd) {
    ((void (*)(id, SEL))orig_CMCellView_layoutInternal)(self, _cmd);
    applyMergeToCellView(self);
}

static void repl_CMCellView_updateNodeStatus(id self, SEL _cmd) {
    ((void (*)(id, SEL))orig_CMCellView_updateNodeStatus)(self, _cmd);
    applyMergeToCellView(self);
}

// ============================================================
// MARK: - 安装
// ============================================================

@implementation MsgMergeHook

+ (void)install {
    WPLog(@"MsgMerge", @"MsgMergeHook install (消息合并 v1)");
    Class cls;

    // ① 会话上下文跟踪
    cls = objc_getClass("BaseMsgContentViewController");
    if (cls) {
        MSHookMessageEx(cls, @selector(viewDidLoad),
                        (IMP)repl_BaseMsgContentVC_viewDidLoad,
                        &orig_BaseMsgContentVC_viewDidLoad);
        MSHookMessageEx(cls, @selector(viewWillAppear:),
                        (IMP)repl_BaseMsgContentVC_viewWillAppear,
                        &orig_BaseMsgContentVC_viewWillAppear);
        WPLog(@"MsgMerge", @"[Hook] ✓ BaseMsgContentViewController viewDidLoad/viewWillAppear:");
    } else {
        WPLog(@"MsgMerge", @"[Hook] ✗ BaseMsgContentViewController not found");
    }

    // ② 消息 cell 布局钩子
    cls = objc_getClass("CommonMessageCellView");
    if (cls) {
        MSHookMessageEx(cls, @selector(layoutInternal),
                        (IMP)repl_CMCellView_layoutInternal,
                        &orig_CMCellView_layoutInternal);
        MSHookMessageEx(cls, @selector(updateNodeStatus),
                        (IMP)repl_CMCellView_updateNodeStatus,
                        &orig_CMCellView_updateNodeStatus);
        WPLog(@"MsgMerge", @"[Hook] ✓ CommonMessageCellView layoutInternal/updateNodeStatus");
    } else {
        WPLog(@"MsgMerge", @"[Hook] ✗ CommonMessageCellView not found");
    }

    WPLog(@"MsgMerge", @"MsgMergeHook install complete");
}

@end
