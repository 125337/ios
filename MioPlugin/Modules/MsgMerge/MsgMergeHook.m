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
//  v2 间距架构（探针 #13/#14/#17/#18 实证定论）：
//    8.0.78 聊天表既不走 delegate heightForRowAtIndexPath（IMP 被换也零调用），
//    也不走 self-sizing（ChatTableViewCell 未重写且基类零调用），行高由微信固定。
//    因此间距收拢全部落在 cell 内部布局层：原生 layoutInternal 跑完后按合并模型
//    上移非组首气泡（基准缓存+失效检测绝对定位，防 native 不每轮重置 frame 的漂移），
//    与 UITableView 委托无关。
//
//  已知边界（如实声明）：
//    - 隐藏头像后不扩展气泡（BubbleBox 会重排内容），组内非首条会留头像位空白
//    - 上移量封顶 = 上一条可见 cell 的气泡底空白（测不到时 16pt），防压到上一条气泡
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
// MARK: - 聊天 VC 渲染数组获取
// ============================================================

/// 从 cellView 沿 responder 链找 BaseMsgContentViewController（8.0.78 实证其持有
/// m_arrMessageNodeData 渲染数组；CMessageMgr 无单例访问器，查库方案不可用）
static id findMsgContentVC(id view) {
    id cur = view;
    for (int hop = 0; hop < 24 && cur; hop++) {
        id rr = cur;
        for (int j = 0; j < 12 && rr; j++) {
            Class baseCls = objc_getClass("BaseMsgContentViewController");
            if (baseCls && [rr isKindOfClass:baseCls]) return rr;
            rr = safeCall(rr, "nextResponder");
        }
        cur = safeCall(cur, "superview");
    }
    return nil;
}

/// 取聊天 VC 的消息渲染数组（消息表数据源，元素为消息 viewModel）
static NSArray *msgNodeArrayOfCellView(id cellView) {
    id vc = findMsgContentVC(cellView);
    if (!vc) return nil;
    return safeKVC(vc, @"m_arrMessageNodeData");
}

/// 会话名从 wrap 推导（GetContact 跟踪链路在 8.0.60 上不可靠）
static NSString *chatNameOfWrap(id wrap) {
    NSString *fromS = safeKVC(wrap, @"m_nsFromUsr");
    NSString *toS = safeKVC(wrap, @"m_nsToUsr");
    if ([toS isKindOfClass:[NSString class]] && [toS hasSuffix:@"@chatroom"]) return toS;
    if ([fromS isKindOfClass:[NSString class]] && [fromS hasSuffix:@"@chatroom"]) return fromS;
    if ([toS isKindOfClass:[NSString class]] && toS.length > 0) return toS;
    if ([fromS isKindOfClass:[NSString class]] && fromS.length > 0) return fromS;
    return nil;
}

// ============================================================
// MARK: - 间距收拢（cell 层 y 位移，基准缓存+失效检测）
// ============================================================

static void *kMMBgBaseFrame = &kMMBgBaseFrame;
static void *kMMBgDelta     = &kMMBgDelta;
static void *kMMClipBackup  = &kMMClipBackup;

static BOOL rectClose(CGRect a, CGRect b) {
    return fabs(a.origin.x - b.origin.x) < 0.5
        && fabs(a.origin.y - b.origin.y) < 0.5
        && fabs(a.size.width  - b.size.width)  < 0.5
        && fabs(a.size.height - b.size.height) < 0.5;
}

static CGRect shiftedUp(CGRect base, CGFloat delta) {
    return CGRectMake(base.origin.x, base.origin.y - delta, base.size.width, base.size.height);
}

/// 还原视图位移：当前仍是我们的位移态且原生未重置时还原自然值，随后清标记
static void resetViewShift(UIView *v) {
    NSValue *baseV = objc_getAssociatedObject(v, kMMBgBaseFrame);
    if (!baseV) return;
    CGRect base = [baseV CGRectValue];
    NSNumber *deltaV = objc_getAssociatedObject(v, kMMBgDelta);
    CGFloat oldDelta = deltaV ? [deltaV doubleValue] : 0;
    if (oldDelta > 0 && rectClose(v.frame, shiftedUp(base, oldDelta))) {
        v.frame = base;
    }
    objc_setAssociatedObject(v, kMMBgBaseFrame, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(v, kMMBgDelta, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

/// 绝对定位位移（XOS FUN_00192580 同款基准缓存+失效检测）：
///   原生每轮重置 frame → 以基准+delta 覆写；原生不重置 → 幂等；
///   原生改了自然值（复用/重排）→ 重置基准再覆写
/// 同一位移必须同时作用于气泡 bg 与内容容器（getContentView，文字在其内），
/// 二者一起动才不会错位
static void applyViewShift(UIView *v, CGFloat delta) {
    if (delta <= 0) { resetViewShift(v); return; }
    NSValue *baseV = objc_getAssociatedObject(v, kMMBgBaseFrame);
    NSNumber *deltaV = objc_getAssociatedObject(v, kMMBgDelta);
    CGFloat oldDelta = deltaV ? [deltaV doubleValue] : 0;
    CGRect base;
    if (!baseV) {
        base = v.frame;   // 首触：原生刚布局完，即自然值
    } else {
        base = [baseV CGRectValue];
        if (!rectClose(v.frame, base) && !rectClose(v.frame, shiftedUp(base, oldDelta))) {
            base = v.frame;   // 原生改了自然值：重置基准
        }
    }
    objc_setAssociatedObject(v, kMMBgBaseFrame, [NSValue valueWithCGRect:base], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(v, kMMBgDelta, @(delta), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    CGRect target = shiftedUp(base, delta);
    if (!rectClose(v.frame, target)) v.frame = target;
}

/// 负 y 位移会越出 cell 边界，放开 cellView 及其宿主 cell 的裁剪（备份原值可还原）
static void applyNoClip(id view) {
    if (![view isKindOfClass:[UIView class]]) return;
    UIView *v = view;
    if (!objc_getAssociatedObject(v, kMMClipBackup)) {
        objc_setAssociatedObject(v, kMMClipBackup, @(v.clipsToBounds), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    v.clipsToBounds = NO;
}

static void restoreNoClip(id view) {
    if (![view isKindOfClass:[UIView class]]) return;
    UIView *v = view;
    NSNumber *backup = objc_getAssociatedObject(v, kMMClipBackup);
    if (backup) {
        v.clipsToBounds = [backup boolValue];
        objc_setAssociatedObject(v, kMMClipBackup, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
}

/// 上一条可见 cell 的「气泡底 → cell 底」空白（上移封顶，防压到上一条气泡）
static CGFloat prevCellBottomGap(id cellView) {
    @try {
        id cur = cellView;
        id cell = nil;
        for (int i = 0; i < 6 && cur; i++) {
            if ([cur isKindOfClass:[UITableViewCell class]]) { cell = cur; break; }
            cur = safeCall(cur, "superview");
        }
        id table = nil;
        if (cell) {
            id p = safeCall(cell, "superview");
            for (int i = 0; i < 6 && p; i++) {
                if ([p isKindOfClass:[UITableView class]]) { table = p; break; }
                p = safeCall(p, "superview");
            }
        }
        if (!cell || !table) return 16.0;
        NSArray *visible = safeCall(table, "visibleCells");
        NSUInteger idx = [visible indexOfObjectIdenticalTo:cell];
        if (idx == NSNotFound || idx == 0) return 16.0;
        UITableViewCell *prev = [visible objectAtIndex:idx - 1];
        id prevCellView = safeCall(prev, "cellView");
        UIImageView *prevBg = safeCall(prevCellView, "getBgImageView");
        if (![prevBg isKindOfClass:[UIImageView class]]) return 16.0;
        CGRect bgInCell = [prevBg convertRect:prevBg.bounds toView:prev];
        CGFloat gap = prev.bounds.size.height - CGRectGetMaxY(bgInCell);
        if (gap < 0 || gap > 40) return 16.0;   // 异常值兜底
        return gap;
    } @catch (NSException *e) {
        return 16.0;
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
                id contentView = safeCall(cellView, "getContentView");
                if ([bg isKindOfClass:[UIImageView class]]) {
                    restoreCorner(bg);
                    resetViewShift(bg);
                }
                if ([contentView isKindOfClass:[UIView class]]) resetViewShift(contentView);
                id head = safeCall(cellView, "getHeadImageView");
                if ([head isKindOfClass:[UIView class]]) [(UIView *)head setHidden:NO];
                id name = safeCall(cellView, "getNameLabel");
                if ([name isKindOfClass:[UILabel class]]) [(UILabel *)name setHidden:NO];
                restoreNoClip(cellView);
                restoreNoClip(safeCall(cellView, "superview"));
                markTouched(cellView);  // 保持标记，防止重复还原开销（幂等）
            }
            return;
        }

        id viewModel = safeKVC(cellView, @"viewModel");
        if (!viewModel) { WPLog(@"MsgMerge", @"[Apply] viewModel nil"); return; }
        id wrap = safeKVC(viewModel, @"messageWrap");
        if (!wrap) { WPLog(@"MsgMerge", @"[Apply] wrap nil"); return; }

        NSString *chat = chatNameOfWrap(wrap) ?: currentChatName();
        if (chat.length == 0) { WPLog(@"MsgMerge", @"[Apply] 会话名为空"); return; }

        NSArray *nodes = msgNodeArrayOfCellView(cellView);
        if (!nodes) {
            static NSTimeInterval lastVCFailLog = 0;
            NSTimeInterval now = [[NSDate date] timeIntervalSince1970];
            if (now - lastVCFailLog > 10) {
                lastVCFailLog = now;
                WPLog(@"MsgMerge", @"[Apply] 未找到聊天 VC 或渲染数组（页面=%s）", object_getClassName(cellView));
            }
        }
        MOMergePosition pos = [MsgMergeEngine positionForWrap:wrap chatName:chat nodeArray:nodes];
        if (pos == MOMergePositionNone) { WPLog(@"MsgMerge", @"[Apply] pos=None（类型不可合并/开关）"); return; }   // 系统消息/不可合并：不干预

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

        // ④ 间距收拢（cell 层，见文件头 v2 架构说明）：
        //    非组首气泡上移，吃掉与上一条同组消息的视觉空隙；
        //    上移量封顶 = 上一条 cell 的气泡底空白，防压到上一条气泡；
        //    bg 与内容容器（getContentView，文字在其内）同移防错位
        id contentView = safeCall(cellView, "getContentView");
        if (cfg.mmSpacingMode == 1 && cfg.mmSpacing > 0
            && (pos == MOMergePositionMiddle || pos == MOMergePositionLast)) {
            CGFloat cap = prevCellBottomGap(cellView);
            CGFloat delta = MIN(cfg.mmSpacing, cap);
            if (bg && delta > 0.5) {
                applyNoClip(cellView);
                applyNoClip(safeCall(cellView, "superview"));
                applyViewShift(bg, delta);
                if ([contentView isKindOfClass:[UIView class]]) applyViewShift(contentView, delta);
            } else if (bg) {
                applyViewShift(bg, 0);
                if ([contentView isKindOfClass:[UIView class]]) applyViewShift(contentView, 0);
            }
        } else if (bg) {
            applyViewShift(bg, 0);   // 组首/独立/间距关闭：还原
            if ([contentView isKindOfClass:[UIView class]]) applyViewShift(contentView, 0);
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
