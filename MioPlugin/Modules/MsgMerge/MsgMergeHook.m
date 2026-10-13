//
//  MsgMergeHook.m — 消息合并钩子
//  MRC 编译（与工程一致）
//
//  架构（对齐 BubbleBox 反编译证据 + 工程既有范式）：
//    ① BaseMsgContentViewController viewDidLoad/viewWillAppear: → 跟踪当前会话
//       与渲染数组 m_arrMessageNodeData
//    ② CommonMessageCellView layoutInternal / updateNodeStatus → 按节点位置
//       应用合并渲染：头像显隐 / 群昵称显隐 / 气泡圆角连续化
//    ③ BaseChatViewModel rowHeight（8.0.78 实证签名 d16@0:8，返回 double，滚动期间
//       270+ 次调用）→ 间距收拢生效点：组内非组尾（First/Middle）行高 -mmSpacing。
//       行高缩减规则：间隙(i,i+1) = 行i高 - 气泡i高（气泡贴 cell 顶），所以减"上方
//       那条"的行高即收拢其与下条的间隙；组尾行保持原生 → 组尾到组外间隙不变。
//       固定行高内平移内容必然守恒（探针 #11/#22/#23 实证），行高缩减是唯一正解；
//       delegate heightForRow 与 self-sizing 在 8.0.78 均零调用（探针 #13/#14/#17/#18）。
//
//  挂载点为 CommonMessageCellView 头文件实证方法（layoutInternal/updateNodeStatus
//  与 BubbleBox 反编译钩子点一致）。
//

#import "MsgMergeHook.h"
#import "MsgMergeConfig.h"
#import "MsgMergeEngine.h"
#import "../../Core/LogManager.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>
#import <math.h>

// ============================================================
// MARK: - Original IMPs
// ============================================================

static IMP orig_BaseMsgContentVC_viewDidLoad    = NULL;
static IMP orig_BaseMsgContentVC_viewWillAppear = NULL;
static IMP orig_BaseChatViewModel_rowHeight     = NULL;
static IMP orig_CMCellView_layoutInternal       = NULL;
static IMP orig_CMCellView_updateNodeStatus     = NULL;

// ============================================================
// MARK: - 会话上下文
// ============================================================

static NSString *g_currentChatName = nil;   // 当前会话 talker（群聊=chatroom id，私聊=对端 id）
static NSArray  *g_currentNodeArray = nil;  // 当前聊天 VC 的 m_arrMessageNodeData（行高钩子用，retain）

static id safeKVC(id obj, NSString *key);   // 定义见下文视图安全访问节

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
        // 渲染数组每次进出聊天都刷新（数组对象可能被整表重建）
        NSArray *arr = safeKVC(self, @"m_arrMessageNodeData");
        if (arr != g_currentNodeArray) {
#if __has_feature(objc_arc)
#else
            [arr retain];
            if (g_currentNodeArray) [g_currentNodeArray release];
#endif
            g_currentNodeArray = arr;
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
// MARK: - 行高钩子（间距收拢生效点）
// ============================================================

// 双算验证日志（渐进接管路线图 阶段1.4）：mmOwnLayout 下同一条消息首次计算时
// 输出公式值 vs 原生值，验证公式对采样外消息的误差（验收：|diff|≤2pt 比例 ≥98%）
static void wpRowHeightDualLog(id wrap, double formula, double native, NSInteger lines) {
    static NSMutableSet *seen;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{ seen = [NSMutableSet set]; });
    if ([seen count] > 4096) [seen removeAllObjects];
    id lidV = safeKVC(wrap, @"m_uiMesLocalID");
    if (![lidV respondsToSelector:@selector(longLongValue)]) return;
    long long lid = [lidV longLongValue];
    if (lid <= 0 || [seen containsObject:@(lid)]) return;
    [seen addObject:@(lid)];
    double d = formula - native;
    if (fabs(d) > 2.0) {
        // 超差行附带行数与内容头部，便于定位坏例（emoji/@提及/引用等特殊内容）
        NSString *content = safeKVC(wrap, @"m_nsContent");
        if (![content isKindOfClass:[NSString class]]) content = @"";
        NSString *head = [content length] > 24 ? [content substringToIndex:24] : content;
        head = [head stringByReplacingOccurrencesOfString:@"\n" withString:@"⏎"];
        WPLog(@"MsgMerge", @"[Own] lid=%lld L=%ld 公式=%.0f 原生=%.0f diff=%+.0f ←超差 内容<%@>",
              lid, (long)lines, formula, native, d, head);
    } else {
        WPLog(@"MsgMerge", @"[Own] lid=%lld L=%ld 公式=%.0f 原生=%.0f diff=%+.0f",
              lid, (long)lines, formula, native, d);
    }
}

// -[BaseChatViewModel rowHeight]（8.0.78 实证签名 d16@0:8，返回 double）：
// 全部消息/时间 viewModel 均继承此实现（探针快查单一 IMP，无子类重写），
// 滚动期间 270+ 次调用（探针 #26）——这是聊天行高的真实来源。
// delegate heightForRow、self-sizing、updateContentViewHeight: 均零调用（探针 #13/#14/#17/#18/#25）。
// 双路径：
//   替换式（mmOwnLayout，阶段1实验开关）：type==1 文本行高走自算公式，不再依赖原实现
//   包裹式（现有行为）：原实现返回值上对组内非组尾（First/Middle）-mmSpacing（下限 24 防裁切）
static double repl_BaseChatViewModel_rowHeight(id self, SEL _cmd) {
    double h = ((double (*)(id, SEL))orig_BaseChatViewModel_rowHeight)(self, _cmd);
    @try {
        MsgMergeConfig *cfg = [MsgMergeConfig shared];
        if (cfg.mmEnable && cfg.mmOwnLayout) {
            id wrap = safeKVC(self, @"messageWrap");
            id typeVal = wrap ? safeKVC(wrap, @"m_uiMessageType") : nil;
            if (wrap && [typeVal respondsToSelector:@selector(longLongValue)] &&
                [typeVal longLongValue] == 1) {
                double f = (double)[MsgMergeEngine textRowHeightForWrap:wrap];
                wpRowHeightDualLog(wrap, f, h, [MsgMergeEngine textLineCountForWrap:wrap]);
                NSString *chat = chatNameOfWrap(wrap);
                if (chat.length == 0) chat = currentChatName();
                MOMergePosition pos = [MsgMergeEngine positionForWrap:wrap
                                                             chatName:chat
                                                            nodeArray:g_currentNodeArray];
                if (pos == MOMergePositionFirst || pos == MOMergePositionMiddle) {
                    f -= (double)cfg.mmSpacing;
                }
                return f > 24.0 ? f : 24.0;
            }
        }
        if (cfg.mmEnable && cfg.mmSpacingMode == 1 && cfg.mmSpacing > 0) {
            id wrap = safeKVC(self, @"messageWrap");
            if (wrap) {
                NSString *chat = chatNameOfWrap(wrap);
                if (chat.length == 0) chat = currentChatName();
                if (chat.length > 0) {
                    MOMergePosition pos = [MsgMergeEngine positionForWrap:wrap
                                                                 chatName:chat
                                                                nodeArray:g_currentNodeArray];
                    if (pos == MOMergePositionFirst || pos == MOMergePositionMiddle) {
                        double v = h - (double)cfg.mmSpacing;
                        if (v >= 24.0) return v;   // 下限 24 防裁切（内容顶对齐，缩减只吃底部空白）
                    }
                }
            }
        }
    } @catch (NSException *e) {
        WPLog(@"MsgMerge", @"[H] rowHeight exception: %@", e.reason);
    }
    return h;
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

    // ③ 行高钩子（间距收拢真正生效点；8.0.78 真实行高来源，探针 #26 实证）
    cls = objc_getClass("BaseChatViewModel");
    if (cls && [cls instancesRespondToSelector:NSSelectorFromString(@"rowHeight")]) {
        MSHookMessageEx(cls, NSSelectorFromString(@"rowHeight"),
                        (IMP)repl_BaseChatViewModel_rowHeight,
                        &orig_BaseChatViewModel_rowHeight);
        WPLog(@"MsgMerge", @"[Hook] ✓ BaseChatViewModel rowHeight");
    } else {
        WPLog(@"MsgMerge", @"[Hook] ✗ BaseChatViewModel rowHeight not found");
    }

    WPLog(@"MsgMerge", @"MsgMergeHook install complete");
}

@end
