//
//  MsgMergeHook.m — 消息合并钩子
//  MRC 编译（与工程一致）
//
//  架构（对齐 BubbleBox 反编译证据 + 工程既有范式）：
//    ⓪ 数据预写（BubbleBox 同构核心）：BBMergeModel 重建后 apply 阶段把分组
//       位置用关联对象写到每个消息 viewModel 上（对齐 BubbleBox 的
//       setB_isFirstMessage 预写模式）；rowHeight/昵称判定/渲染/昵称断供钩子
//       一律 posFromVM O(1) 读标志——零查询、零数组交叉引用、零读路径重建，
//       旧「查询期失效检测 + 保鲜重查」补丁链已整体删除。
//    ① BaseMsgContentViewController viewDidLoad/viewWillAppear: → 跟踪当前会话
//       与渲染数组 m_arrMessageNodeData（上下文变化即触发重建+预写）
//    ② CommonMessageCellView layoutInternal / updateNodeStatus → 按节点位置
//       应用合并渲染：头像显隐 / 群昵称显隐 / 气泡圆角连续化
//       （⑤ 阶段2 布局接管：白名单类型（文本1+媒体 3/34/43/49/62）&& mmOwnLayout 时
//         头像/气泡容器/昵称横向自摆，
//         原生几何模型与失效检测见 applyOwnLayout 注释）
//    ③ BaseChatViewModel rowHeight（8.0.78 实证签名 d16@0:8，返回 double，滚动期间
//       270+ 次调用）→ 行高包裹式生效点。探针 #32 实证原生长文本消息是多 cell 切片
//       渲染（同 wrap 多 viewModel，原生无缝拼成一条大气泡），替换式公式会撕开切片
//       接缝（判死），行高主体永远用 orig，只做两类补偿：
//         a) 间距收拢：只减"组内非组尾消息的最后一片" -mmSpacing（片间不能减，会
//            撕开接缝；组尾保持原生 → 组尾到组外间隙不变）
//         b) 昵称补偿（仅组首）：昵称断供后组内非首条原生行高已自动不含昵称区，
//            组首（昵称仍显示）减实测昵称块维持组内几何统一
//    delegate heightForRow 与 self-sizing 在 8.0.78 均零调用（探针 #13/#14/#17/#18）。
//    ④ CommonMessageViewModel isShowChatRoomDisplayName → 昵称判定接管（实验开关
//       mmNickJudgeTakeover）：组内非首条返 NO，微信原生按无昵称测量+布局自动回收
//       昵称区（65→54 型）。判定读预写标志（posFromVM），与测量同链路同刻，
//       首测即正确无固化。接管开启后 rowHeight 仅组首减昵称补偿 N。
//
//  挂载点为 CommonMessageCellView 头文件实证方法（layoutInternal/updateNodeStatus
//  与 BubbleBox 反编译钩子点一致）。
//

#import "MsgMergeHook.h"
#import "MsgMergeConfig.h"
#import "MsgMergeEngine.h"
#import "BBMergeModel.h"
#import "../../Core/LogManager.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <dlfcn.h>
#import <stdlib.h>
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
static __weak UIViewController *g_curChatVC = nil;   // 当前聊天 VC（新消息入库联动重排用）

static id safeKVC(id obj, NSString *key);   // 定义见下文视图安全访问节
static void rebuildAndApplyFromContext(void);   // 定义见下文数据源保鲜节（前向声明）

static void updateChatContext(id self) {
    g_curChatVC = self;
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
                [[BBMergeModel shared] clear];   // 防跨会话残留（模型自身也按数组身份失效）
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
        // 上下文变化即重建+预写（BubbleBox 同构：标志先于测量就位）
        rebuildAndApplyFromContext();
    } @catch (NSException *e) {
        WPLog(@"MsgMerge", @"[Ctx] updateChatContext exception: %@", e.reason);
    }
}

static NSString *currentChatName(void) {
    return g_currentChatName;
}

// ------------------------------------------------------------
// 测量缓存清洗（BubbleBox revision/resetLayoutCache 同源思路，兜底用）：
// 判定钩 v3 查模型后首测即正确、无固化可言；本函数仅洗掉「旧开关状态/上一
// 会话」遗留的固化行高值（m_cachedHeight），viewWillAppear 时调用。
// 旧版 5ms 轮询窗口（stable→reset）已删：轮询在主队列上被测量/布局工作推迟，
// stable 信号 65.4ms 落在首帧 67ms 前 1.6ms，重测与首帧渲染交错 = 跳变（74 号
// 日志实证）；源头修好后窗口轮询无存在必要。
// ------------------------------------------------------------
static void resetAllMeasureCaches(void) {
    @try {
        UIViewController *vc = g_curChatVC;
        if (!vc) return;
        NSArray *arr = safeKVC(vc, @"m_arrMessageNodeData");
        if (![arr isKindOfClass:[NSArray class]] || arr.count == 0) return;
        SEL selReset = NSSelectorFromString(@"resetLayoutCache");
        NSUInteger n = 0;
        for (id vm in arr) {
            if (!vm || ![vm respondsToSelector:selReset]) continue;
            ((void (*)(id, SEL))objc_msgSend)(vm, selReset);
            n++;
        }
        WPLog(@"MsgMerge", @"[NJW] resetLayoutCache done, vm=%lu", (unsigned long)n);
    } @catch (NSException *e) {
        WPLog(@"MsgMerge", @"[NJW] reset exception: %@", e.reason);
    }
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
// MARK: - 阶段2/3 布局接管（白名单类型三 frame 横向自摆）
// ============================================================
// 原生模型（视图调试器 8.0.78 实测，cell 坐标，TextMessageCellView 即 cellView）：
//   头像 MMHeadImageView 46×46 y=2 距屏边 9：自发 x=W−55 / 收方 x=9
//   气泡容器：有 bg 的类型 = getBgImageView.superview；无 bg 的（图片3/视频43/表情47）
//   = getContentView 返回值（探针全类型实证与 bg.superview 同一视图，精准命中）
//     自发右缘 W−64 / 收方 x=64；y=5（无昵称）/ 16（群收昵称开）——纵向原生已对，不碰
//     （固定行高内挪 y 必守恒，项目定论；间距收拢走 rowHeight 钩子）
//   气泡图 YYAsyncImageView 与内容 RichTextView（getRichTextView，ivar m_richTextView）
//   均为容器子视图，随容器走；尺寸保持原生测量（宽=文字宽+24，inset 左右12/上10/下10）
// 自摆范围：仅横向 x。位置输入 = mmAvatarOffset（头像，±60 钳位）+ mmWholeOffset
//   （整列含昵称，±20 钳位），正=向屏幕边缘，收发镜像（按原生头像 x>W/2 判侧，不查联系人）。
// 失效检测（项目定论）：首过缓存原生基准帧；当前值 ≠ 基准+上轮 delta → 原生已重摆
//   （cell 复用/重布局），以当前值为新基准——裸相对位移在 native 不重置 frame 的视图上
//   逐轮累加会把头像推出屏外（9→270 实证）。开关关闭 = delta 归零，同机制自动还原。
static void *kOLBaseHeadF = &kOLBaseHeadF;
static void *kOLBaseBubF  = &kOLBaseBubF;
static void *kOLBaseNameX = &kOLBaseNameX;
static void *kOLLastDH    = &kOLLastDH;
static void *kOLLastDC    = &kOLLastDC;
static void *kOLLastDN    = &kOLLastDN;

static double olClamp(double v, double lim) {
    return v > lim ? lim : (v < -lim ? -lim : v);
}

/// 阶段3 类型白名单：纳入布局接管的类型。媒体四类与表情均为 CommonMessageCellView
/// 同构结构（头像 46×46 y=2、容器与气泡列对齐：自发右缘 W−64/收方 x=64）；
/// 表情47 旧"无头像居中异构"结论系视图调试器误读（自发表情容器 x=197 只是
/// 132 宽右缘对齐 W−64=329 的巧合），探针实证有头像有昵称有容器，仅无 bg 走回退。
static BOOL olTypeEnabled(long long t) {
    return t == 1 || t == 3 || t == 34 || t == 43 || t == 47 || t == 49 || t == 62;
}

static int g_olLogCnt = 0;   // 诊断日志帽（防滚动刷屏）

static void applyOwnLayout(id cellView, BOOL active) {
    UIView *head = safeCall(cellView, "getHeadImageView");
    UIImageView *bg = safeCall(cellView, "getBgImageView");
    // 容器发现（探针 #getContentView 全类型实证）：有气泡 bg 的类型（文本/语音/App/文件）
    // 容器 = bg.superview；无 bg 的类型（图片3/视频43/表情47，内容本身即气泡）容器 =
    // getContentView 返回值——与 bg.superview 同一视图（自发右缘 W−64/收方 x=64），
    // 精准命中，无需启发式
    UIView *cont = [bg isKindOfClass:[UIImageView class]] ? (UIView *)bg.superview : nil;
    if (![cont isKindOfClass:[UIView class]]) {
        cont = safeCall(cellView, "getContentView");
    }
    if (![head isKindOfClass:[UIView class]] || ![cont isKindOfClass:[UIView class]]) return;

    // 首过建基准（此刻原生 layoutInternal 刚跑完，frame 为原生值）
    NSValue *bHeadV = objc_getAssociatedObject(cellView, kOLBaseHeadF);
    if (!bHeadV) {
        bHeadV = [NSValue valueWithCGRect:head.frame];
        objc_setAssociatedObject(cellView, kOLBaseHeadF, bHeadV, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(cellView, kOLBaseBubF, [NSValue valueWithCGRect:cont.frame], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(cellView, kOLLastDH, @(0), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(cellView, kOLLastDC, @(0), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        if (g_olLogCnt < 20) {
            g_olLogCnt++;
            MsgMergeConfig *dbg = [MsgMergeConfig shared];
            WPLog(@"MsgMerge", @"[OL] 首过 active=%d own=%d av=%.1f wo=%.1f head=(%.0f,%.0f,%0.f)",
                  active, dbg.mmOwnLayout, dbg.mmAvatarOffset, dbg.mmWholeOffset,
                  head.frame.origin.x, head.frame.origin.y, head.frame.size.width);
        }
    }
    CGRect bHead = [bHeadV CGRectValue];
    CGRect bBub  = [(NSValue *)objc_getAssociatedObject(cellView, kOLBaseBubF) CGRectValue];
    double lastDH = [(NSNumber *)objc_getAssociatedObject(cellView, kOLLastDH) doubleValue];
    double lastDC = [(NSNumber *)objc_getAssociatedObject(cellView, kOLLastDC) doubleValue];

    // 失效检测：位置或尺寸偏离 基准+上轮delta → 原生已重摆（复用/重布局），重置基准
    if (fabs(head.frame.origin.x - (bHead.origin.x + lastDH)) > 0.5 ||
        fabs(head.frame.origin.y - bHead.origin.y) > 0.5 ||
        fabs(head.frame.size.width - bHead.size.width) > 0.5 ||
        fabs(cont.frame.origin.x - (bBub.origin.x + lastDC)) > 0.5 ||
        fabs(cont.frame.origin.y - bBub.origin.y) > 0.5 ||
        fabs(cont.frame.size.width - bBub.size.width) > 0.5) {
        bHead = head.frame;
        bBub = cont.frame;
        lastDH = 0;
        lastDC = 0;
        objc_setAssociatedObject(cellView, kOLBaseHeadF, [NSValue valueWithCGRect:bHead], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(cellView, kOLBaseBubF, [NSValue valueWithCGRect:bBub], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }

    // 昵称 label 整列跟随（隐藏态 frame 仍有效，同样基准+失效检测）
    __block UILabel *lb = nil;
    double baseNameX = 0, lastDN = 0;
    if ([safeCall(cellView, "getNameLabel") isKindOfClass:[UILabel class]]) {
        lb = safeCall(cellView, "getNameLabel");
        NSNumber *bnx = objc_getAssociatedObject(cellView, kOLBaseNameX);
        if (!bnx) {
            bnx = @(lb.frame.origin.x);
            objc_setAssociatedObject(cellView, kOLBaseNameX, bnx, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            objc_setAssociatedObject(cellView, kOLLastDN, @(0), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        }
        baseNameX = [bnx doubleValue];
        lastDN = [(NSNumber *)objc_getAssociatedObject(cellView, kOLLastDN) doubleValue];
        if (fabs(lb.frame.origin.x - (baseNameX + lastDN)) > 0.5) {
            baseNameX = lb.frame.origin.x;
            lastDN = 0;
            objc_setAssociatedObject(cellView, kOLBaseNameX, @(baseNameX), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        }
    }

    double newDH = 0, newDC = 0;
    if (active) {
        CGFloat W = ((UIView *)cellView).bounds.size.width;
        BOOL isSender = bHead.origin.x > W * 0.5;
        double sign = isSender ? 1.0 : -1.0;
        MsgMergeConfig *cfg = [MsgMergeConfig shared];
        newDH = sign * (olClamp(cfg.mmAvatarOffset, 60) + olClamp(cfg.mmWholeOffset, 20));
        newDC = sign * olClamp(cfg.mmWholeOffset, 20);
    }

    if (fabs(newDH - lastDH) > 0.01) {
        CGRect f = bHead;
        f.origin.x += newDH;
        head.frame = f;
        objc_setAssociatedObject(cellView, kOLLastDH, @(newDH), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        if (g_olLogCnt < 40) {
            g_olLogCnt++;
            WPLog(@"MsgMerge", @"[OL] 应用 head.dx=%.1f → x=%.0f", newDH, f.origin.x);
        }
    }
    if (fabs(newDC - lastDC) > 0.01) {
        CGRect f = bBub;
        f.origin.x += newDC;
        cont.frame = f;
        objc_setAssociatedObject(cellView, kOLLastDC, @(newDC), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        if (lb && fabs(newDC - lastDN) > 0.01) {
            CGRect nf = lb.frame;
            nf.origin.x = baseNameX + newDC;
            lb.frame = nf;
            objc_setAssociatedObject(cellView, kOLLastDN, @(newDC), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        }
        if (g_olLogCnt < 40) {
            g_olLogCnt++;
            WPLog(@"MsgMerge", @"[OL] 应用 col.dx=%.1f → bub.x=%.0f", newDC, f.origin.x);
        }
    }
}

// ============================================================
// MARK: - 会话名推导
// ============================================================

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
// MARK: - 昵称区补偿量（布局时直读，消灭推断链）
// ============================================================
//
// 旧两桶差值方案（收/发短文本原生行高众数相减）已删：自发桶混入跨会话样本
// （56/53 并存，同会话真值 54），两个带误差的估计相减误差叠加（实测 N 偏 1~2pt）。
//
// 新方案：cell 布局时（applyMergeToCellView ② 群昵称块）直读微信摆好的真实
// frame —— 昵称区 = 收方行 bgTopInCell（昵称开=16 / 关=5，diag33 表坐标实证）
// − 无昵称基准 g_plainBgY（自发行上报校准，恒 5），持久化于 Engine（kNickBlockKey），
// rowHeight 消费。
// 【diag34 实证坑位】bg 自身 frame.origin.y 恒 0（钉在宿主顶），16/5 的差挂在
// bg→cell 的中间容器上 —— 不能直接读 bg.frame.origin.y，必须逐层累加折算到
// cell 坐标（bgTopWithinCell）。也不能用 label 高度判昵称开关（两种状态都是 14，
// 微信用 setHidden 不改 frame，那条分支恒走不到）。
// 换行高/字体缩放自动跟随（读的就是目标量本身，无推断链）。

static double g_plainBgY = 5.0;   // 无昵称区行的 bgTopInCell 基准（自发行上报校准）

/// bg 顶边折算到所属 UITableViewCell 坐标的 y（diag34 实证 bg.frame.origin.y 恒 0，
/// 昵称区偏移挂在 bg→cell 的中间容器上，逐层累加到 cell 坐标才对）。
/// 找不到 cell 归属时返回 0（正常布局 bgTopInCell ≥ 5，0 即失败信号）。
static CGFloat bgTopWithinCell(UIImageView *bg) {
    if (!bg) return 0;
    CGFloat y = bg.frame.origin.y;
    UIView *v = bg.superview;
    while (v && ![v isKindOfClass:[UITableViewCell class]]) {
        y += v.frame.origin.y;
        v = v.superview;
    }
    return (v && [v isKindOfClass:[UITableViewCell class]]) ? y : 0;
}

// ---- N 变化触发行高重算 ----
// 布局时上报的新 N 落盘后，表格已按旧持久值算完行高，之后无人触发重算 →
// 昵称开关切换后间隙错误（实证：N=11 上报但行高仍按 0 算，收方组间隙 24≠13）。
// 检测 rowHeight 消费值 [Engine nicknameBlockHeight] 与上次已应用值的变化 →
// 异步 reloadData 当前聊天表。值收敛后同值不再触发，无循环。
static __weak UITableView *g_mmChatTable = nil;
static double s_lastAppliedN = -1.0;   // -1 = 未登记（首次仅建基线不触发）

// ============================================================
// MARK: - 行高钩子（切片感知包裹式生效点）
// ============================================================

// -[BaseChatViewModel rowHeight]（8.0.78 实证签名 d16@0:8，返回 double）：
// 全部消息/时间 viewModel 均继承此实现（探针快查单一 IMP，无子类重写），
// 滚动期间 270+ 次调用（探针 #26）——这是聊天行高的真实来源。
// delegate heightForRow、self-sizing、updateContentViewHeight: 均零调用（探针 #13/#14/#17/#18/#25）。
// 包裹式（探针 #32 判死替换式）：行高主体永远用 orig，只做两类补偿——
//   a) 间距收拢：非组尾消息的整条/末片 -mmSpacing（间隙(i,i+1)=行i高-气泡i高，
//      气泡贴 cell 顶，减"上方那条"的末片即收拢其与下条的间隙）
//   b) 昵称补偿（仅组首）：昵称断供（getNameLabel 返 nil）后 Middle/Last 原生
//      rowHeight 已自动不含昵称区（65→54 实证），仅组首（昵称仍显示、原生 65）
//      需继续减实测昵称块维持组内几何统一
//
// 【探针 #34 实证】长文本切片的角色由 vm 自身 ivar `_splitPosition`（Q 类型）提供：
//   0=整条未切片 / 1=首片 / 2=中片 / 3=末片。
//   实证：10 行消息拆 3 片（行高 95/80/62，共享同 wrap），三片 split=1/2/3、
//   _startHeight=0/80/160 递进；未切片消息恒 0（MioPlugin(63).log 16 条全 0）。
//   中片行高=内容高（接缝 0 空隙），末片才含底部空白（62=50+12），故只有
//   split∈{0,3} 的行高里才有可安全吃掉的消息间空隙。
//   节点数组一条消息只有 1 个节点（切片是表格内部展开的），不能从数组推切片结构——
//   旧 run 扫描方案 sliceCount 恒 1，兜底 sliceIndex=0 使 0==count-1 对每个切片
//   vm 都成立，全部被减导致切片接缝撕开（4/5、8/9 行间距变负，用户实证）。
static unsigned long long vmSplitPosition(id vm) {
    static Ivar iv = nil;
    if (!iv) iv = class_getInstanceVariable(object_getClass(vm), "_splitPosition");
    if (!iv) return 0;
    return *(unsigned long long *)((char *)(__bridge void *)vm + ivar_getOffset(iv));
}

// 切片角色日志（首见即记，按 vm 指针判重）：验证 _splitPosition 枚举语义，
// 重点观察 2 片消息的末片是 2 还是 3（决定间距条件 split==3 是否完备）
static void splitPosLog(id vm, id wrap) {
    static NSMutableDictionary *seen;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{ seen = [NSMutableDictionary dictionary]; });
    if ([seen count] > 4096) [seen removeAllObjects];
    NSString *key = [NSString stringWithFormat:@"%p", vm];
    if (seen[key]) return;
    seen[key] = @YES;
    id lidV = safeKVC(wrap, @"m_uiMesLocalID");
    WPLog(@"MsgMerge", @"[Split] vm=%@ lid=%@ split=%llu",
          key, [lidV respondsToSelector:@selector(description)] ? lidV : @"?",
          vmSplitPosition(vm));
}

// [NJH] 行高全流程取证日志（按「vm 指针 + 行内容」去重）：rowHeight 高频
//（滚动期 270+ 次/秒），去重后首测/值变化必打、稳态零噪音——每个 return 出口
// 都打，日志序即判定全流程。帽 800 防极端场景爆量。
static NSMutableDictionary *g_njLogSeen = nil;
static void njLogKeyed(id vm, NSString *line) {
    if (!g_njLogSeen) {
        static dispatch_once_t once;
        dispatch_once(&once, ^{ g_njLogSeen = [NSMutableDictionary dictionary]; });
    }
    if (g_njLogSeen.count > 800) return;
    NSString *vk = [NSString stringWithFormat:@"%p", vm];
    NSString *prev = g_njLogSeen[vk];
    if (prev && [prev isEqualToString:line]) return;
    g_njLogSeen[vk] = line;
    WPLog(@"MsgMerge", @"%@", line);
}

// rowHeight 垫片日志行前缀（lid 从 wrap 的 KVC 对象取，nil 显 ?）
static NSString *njLidOf(id wrap) {
    id v = safeKVC(wrap, @"m_uiMesLocalID");
    return [v respondsToSelector:@selector(stringValue)] ? [v stringValue] : @"?";
}

// —— 数据源保鲜 + 读侧标志（BubbleBox 同构读路径）——
// 读路径唯一合法动作：标志读不到 → 限频触发一次「重读数组 + rebuild + apply」，
// 然后重读标志。重建本体在 BBMergeModel（幂等守卫，同输入 O(1)），读侧不做任何
// 邻接判定——判定钩与行高钩引用不同数组对象致失效检测恒真、每次查询全量重建
// 卡死主线程的教训，就是靠「读侧只读标志」根治的。
// m_arrMessageNodeData 是原地 append 的可变数组：滚动加载历史后指针不变、count
// 增长，g_currentNodeArray 始终指向同一可变数组，重读 .count/元素即拿到最新状态。
static double g_lastArrCheck = 0;      // 上次保鲜触发时间戳（0.5s 限频）

/// 事件驱动重建+预写的统一入口（切会话/进聊天/新消息确认追加/读侧保鲜都走这里）
static void rebuildAndApplyFromContext(void) {
    UIViewController *vc = g_curChatVC;
    if (!vc) return;
    NSArray *arr = safeKVC(vc, @"m_arrMessageNodeData");
    if (![arr isKindOfClass:[NSArray class]] || arr.count == 0) return;
#if __has_feature(objc_arc)
    g_currentNodeArray = arr;
#else
    [arr retain];
    [g_currentNodeArray release];
    g_currentNodeArray = arr;
#endif
    NSString *chat = currentChatName();
    if (chat.length > 0) {
        [[BBMergeModel shared] rebuildAndApplyWithNodeArray:arr chatName:chat];
    }
}

/// 读侧限频保鲜：新载入消息/空数组期的标志缺席由此自愈，0.5s 一次封顶
static void refreshModelNow(void) {
    double now = [NSDate timeIntervalSinceReferenceDate];
    if (now - g_lastArrCheck < 0.5) return;
    g_lastArrCheck = now;
    rebuildAndApplyFromContext();
}

/// 读侧标志统一入口（rowHeight/昵称判定/渲染/昵称断供四钩子走这里）：
/// 纯 O(1) 关联对象读；标志缺席 → 限频保鲜一次再读；配置指纹变化 → 立即
/// 重建+预写（与旧查询期重建同语义，最多一次，重建后指纹守卫归零）。
static MOMergePosition flagsPos(id vm) {
    BBMergeModel *m = [BBMergeModel shared];
    MOMergePosition pos = [BBMergeModel posFromVM:vm];
    if (pos != MOMergePositionNone && ![m configFingerprintChanged]) return pos;
    if ([m configFingerprintChanged]) {
        rebuildAndApplyFromContext();
    } else {
        refreshModelNow();
    }
    return [BBMergeModel posFromVM:vm];
}

static double repl_BaseChatViewModel_rowHeight(id self, SEL _cmd) {
    double h = ((double (*)(id, SEL))orig_BaseChatViewModel_rowHeight)(self, _cmd);
    @try {
        MsgMergeConfig *cfg = [MsgMergeConfig shared];
        if (!cfg.mmEnable) return h;
        id wrap = safeKVC(self, @"messageWrap");
        if (!wrap) return h;   // 时间节点等无 wrap
        NSString *chat = chatNameOfWrap(wrap);
        if (chat.length == 0) chat = currentChatName();
        if (chat.length == 0) {
            njLogKeyed(self, [NSString stringWithFormat:
                @"[NJH] lid=%@ pos=? h_orig=%.1f -> passthrough(no-chat)",
                njLidOf(wrap), h]);
            return h;
        }

        MOMergePosition pos = flagsPos(self);
        if (pos == MOMergePositionNone) {
            njLogKeyed(self, [NSString stringWithFormat:
                @"[NJH] lid=%@ pos=None h_orig=%.1f -> passthrough(组外/标志缺席)",
                njLidOf(wrap), h]);
            return h;
        }

        BOOL isMsgTail = (pos == MOMergePositionLast  || pos == MOMergePositionSingle);
        unsigned long long split = vmSplitPosition(self);   // 0=整条 1=首片 2=中片 3=末片
        splitPosLog(self, wrap);

        // 末片门控（统一前置闸）：首片/中片是无缝泡体——原生切片气泡底=片边界、
        // 续片 bgTop=0 贴顶无让位，任何行高缩减都让泡体溢出压进下一片（diag33
        // 实锤 lid=10449 同气泡自叠文字重叠）。所有补偿只允许落在整条/末片上；
        // 未来新增补偿一律写在本门之后，禁止自带 split 条件绕过。
        if (split != 0 && split != 3) {
            njLogKeyed(self, [NSString stringWithFormat:
                @"[NJH] lid=%@ pos=%lu sp=%llu h_orig=%.1f -> gated(首/中片无缝,禁一切补偿)",
                njLidOf(wrap), (unsigned long)pos, split, h]);
            return h;
        }

        double reduce = 0;
        // a) 组内间隙收拢：非组尾消息减间距（整条/末片的 split 限制由门控保证）
        if (!isMsgTail && cfg.mmSpacingMode == 1 && cfg.mmSpacing > 0) {
            reduce += (double)cfg.mmSpacing;
        }
        // b) 昵称补偿（组首+组中，仅整条消息）：[CELL] 探针实证（451245 批次）收方组
        //    所有行原生均按昵称布局渲染（行内 bgTop=16、原生行高 65），昵称文本仅
        //    组首绘制但空间每行都预留。组内间隙 = 上行行高 − 气泡高（bgTop 组内统
        //    一），组首 65−N−sp=42（间隙 5pt ✓）而组中 65−sp=53（间隙 16pt ✗）即为
        //    不均根因。组中同样减 N；Last 保持原生（65）保住组尾到组外的原生间隙；
        //    Single 昵称可见不参与合并，不减。
        //    【接管开启时】Middle/Last 的昵称区已由判定钩 v3 回收（原生 54 型），
        //    组首也不减 N——组首气泡（bgTop=16）下溢的 11~12pt 原设计是填充下一行
        //    顶部的昵称残留孔，接管后组中 bgTop=5 孔已不存在，再减 N 会让下溢直接
        //    压住下一条气泡（截图实证：组首与第 2 条连体无缝、其余均匀）。接管后
        //    组内间隙统一 = (行高−bgTop−气泡)+下行bgTop：组首 65−sp 下溢 1 填 5 空
        //    → 4pt；组中 54−sp → 4pt，全程一致。
        //    【diag33 实锤（lid=10449，两片切片）】N 不能随门控放宽到末片：整条消息
        //    气泡底=行高−12（底部有 12pt 原生空隙），减 N+间距后溢出恒 11 < 下一行
        //    让位 16 → 间隙 5 安全；末片 bg 恒占满整片（底隙在拉伸图内部、外部空隙
        //    为 0），行高预算只有间距 12pt 的安全余量，再减 N 的 11pt 必压到可见泡
        //    体（重叠/裁字），且间隙被 bg 占满恒等式锁死 16 不变——零收益纯风险。
        //    故 N 仅减整条（split==0）；切片消息首片保持原生无缝，与组内下一条的
        //    间隙比单行组大 ~11pt，四约束（不裁字/不叠字/不变形/不藏昵称）下的最优。
        double nickReduce = 0;
        if (cfg.mmNickJudgeTakeover) {
            // 接管开启·昵称回收差补齐（间歇性根治，MioPlugin(82) 双波铁证）：
            // 微信首测（布局前）不走判定钩（[NJD] 零 miss 日志 = 首测根本没调它）
            // → 65 型（含昵称 11pt）固化；判定生效后的重测（54 型）非每次发生 →
            // 渲染随机落在两波值（同 lid 两波 h_orig：160→149 / 88→77，恒差 11），
            // 落第一波 = 组内大间隙，落第二波 = 正常，即"有时正常有时不正常"。
            // 行高侧主动对齐回收态：Middle/Last（布局层昵称已被判定钩回收，bgTop
            // 16→5）且 h_orig 为含昵称型（≥60 阈值；漂移带宽 62~68 vs 回收 51~57，
            // 恒稳）且整条（split==0，昵称区只在整条/首片行高里，切片末片无昵称区）
            // → 减昵称块，返回值与"判定已生效的重测值"严格相等，两波合流。
            if (split == 0 &&
                (pos == MOMergePositionMiddle || pos == MOMergePositionLast) &&
                h >= 60.0) {
                nickReduce = [MsgMergeEngine nicknameBlockHeight];
            }
        } else if ((pos == MOMergePositionFirst || pos == MOMergePositionMiddle) &&
                   split == 0 && [chat hasSuffix:@"@chatroom"]) {
            NSString *from = safeKVC(wrap, @"m_nsFromUsr");
            if ([from isKindOfClass:[NSString class]] && [from hasSuffix:@"@chatroom"]) {
                // 接管关闭：老 N 补偿路径，First/Middle 全减（下溢填昵称孔）
                nickReduce = [MsgMergeEngine nicknameBlockHeight];
            }
        }
        double final = h - reduce - nickReduce;
        if (final < 24.0) final = 24.0;   // 下限 24 防裁切（内容顶对齐，缩减只吃底部空白）
        // [NJH] 统一出口：测量行高与补偿明细一行列齐（与 [CELL] 渲染几何互证）
        njLogKeyed(self, [NSString stringWithFormat:
            @"[NJH] lid=%@ pos=%lu sp=%llu h_orig=%.1f spR=%.1f nkR=%.1f take=%d final=%.1f",
            njLidOf(wrap), (unsigned long)pos, split, h,
            reduce, nickReduce, cfg.mmNickJudgeTakeover ? 1 : 0, final]);
        if (final >= h) return h;
        return final;
    } @catch (NSException *e) {
        WPLog(@"MsgMerge", @"[H] rowHeight exception: %@", e.reason);
    }
    return h;
}

// ------------------------------------------------------------
// 昵称判定接管（实验，mmNickJudgeTakeover，XOS 同款挂点）：
//   -[CommonMessageViewModel isShowChatRoomDisplayName]（B16@0:8，8.0.78 实存，
//   TextMessage/VoiceMessage 等全部消息 viewModel 共用同一 IMP，单一挂点全覆盖）。
// 组内非首条返 NO → 微信原生按「无昵称行」测量+布局：bgTop 16→5、行高自动回收
// 昵称区（65→54）、切片泡体随 bgTop 上移零溢出（XOS 态几何取证实证）。
//
// v4（BubbleBox 同构数据预写）：判定只读预写标志（posFromVM O(1)），不引用
// 节点数组、不查模型。标志由 BBMergeModel 重建+预写（rebuildAndApply）在
// 事件触发点先行就位；首测（viewDidLoad+9~20ms）必经 rowHeight（行高唯一源，
// 探针 #25/#26），而 updateChatContext（viewDidLoad 链路）已先完成预写 →
// 首测即 54 型，无固化。标志缺席时读侧限频保鲜自愈（flagsPos）。
//   v1（46332c2f）读 g_currentNodeArray 缓存：旧数组竞态，恒 miss 固化。
//   v2（cd7ee314）现场邻接 indexOfObjectIdenticalTo:self：依赖「数组元素==vm
//   本体」，元素实为节点包装对象（wrapOfNode 实证 node 有 .viewModel 层）时恒
//   miss → 判定全程 orig → 65 型固化 + [NJ] 无一条 54 型（74 号日志实证），已删。
//   v3 查 BBMergeModel + 查询内失效检测：双钩子数组引用失配时每次查询全量
//   重建（卡死主线程，幂等守卫只是补丁），已随预写架构整体删除。
// 安装前 dladdr 查 IMP 归属：被其他 dylib（XOS）占用则让位不挂（防互递归）。
// ------------------------------------------------------------
static IMP orig_CMVM_isShowChatRoomDisplayName = NULL;

// 重写类补挂表（77 号日志实证：单点挂 Common 漏媒体重写类 → 判定钩不被调 →
// 媒体消息行高固化 65 型昵称洞，同批文本 54 型生效、媒体 65 型漏挂——按类型分裂）。
// 垫片按 isa 指针直查（热路径禁 NSStringFromClass/字典分配，边框缓存 memcmp 同款教训）。
static Class g_nickCls[32];
static IMP   g_nickOrig[32];
static int   g_nickClsCount = 0;

static IMP nickOrigForClass(Class c) {
    for (int i = 0; i < g_nickClsCount; i++) {
        if (g_nickCls[i] == c) return g_nickOrig[i];
    }
    return NULL;
}

static BOOL repl_CMVM_isShowChatRoomDisplayName(id self, SEL _cmd) {
    static BOOL s_inJudge = NO;   // 重入守卫：垫片内再进入直接走原生（防任何递归风暴）
    IMP o = nickOrigForClass(object_getClass(self));
    if (!o) o = orig_CMVM_isShowChatRoomDisplayName;
    if (!o) return NO;
    BOOL origVal = ((BOOL (*)(id, SEL))o)(self, _cmd);
    if (s_inJudge) return origVal;
    @try {
        MsgMergeConfig *cfg = [MsgMergeConfig shared];
        if (!cfg.mmEnable || !cfg.mmNickJudgeTakeover) return origVal;
        if (!origVal) return origVal;   // 原生不显示，无需翻转
        // 非聊天页上下文（上会话残留测量）不干预——防跨会话 localID 误判
        if (!g_curChatVC) return origVal;
        id wrap = safeKVC(self, @"messageWrap");
        if (!wrap) return origVal;
        NSString *chat = chatNameOfWrap(wrap);
        if (chat.length == 0) chat = currentChatName();
        if (!(chat && [chat hasSuffix:@"@chatroom"])) {
            njLogKeyed(self, [NSString stringWithFormat:
                @"[NJD] lid=%@ miss=not-room -> orig", njLidOf(wrap)]);
            return origVal;
        }
        s_inJudge = YES;
        MOMergePosition pos = flagsPos(self);
        s_inJudge = NO;
        // 组内非首条（Middle/Last）返 NO → 原生按无昵称测量+布局自动回收昵称区
        if (pos == MOMergePositionMiddle || pos == MOMergePositionLast) {
            njLogKeyed(self, [NSString stringWithFormat:
                @"[NJD] lid=%@ pos=%lu -> NO(回收昵称)", njLidOf(wrap), (unsigned long)pos]);
            return NO;
        }
        njLogKeyed(self, [NSString stringWithFormat:
            @"[NJD] lid=%@ pos=%lu -> orig(组首/独立保持昵称)", njLidOf(wrap), (unsigned long)pos]);
        return origVal;
    } @catch (NSException *e) {
        s_inJudge = NO;
        WPLog(@"MsgMerge", @"[NJ] isShowChatRoomDisplayName exception: %@", e.reason);
        return origVal;
    }
}

// ------------------------------------------------------------
// 新消息入库联动：CMessageMgr AsyncOnAddMsg:MsgWrap:（v@:@@ 全对象签名，
// id 垫片安全，bc065e6 定论；AutoTransfer/RedEnvelop 同款挂法，链式共存）。
// 新消息插入改变节点邻接结构（新 lid 入组/组尾变组中），旧渲染数组与位置
// 缓存全部失效——不刷新则新消息按 Single 渲染（原生大间隙），重进会话才
// 恢复（实证）。同步刷新 nodeArray 引用；重排走等节点追加的轮询（见下），
// 因为我们过早 reloadData 会用"缺新节点的旧数组"算位置（探针实证竞争）。
// ------------------------------------------------------------
static IMP orig_CMMsgMgr_AsyncOnAddMsg = NULL;
static BOOL s_mergeRelayoutPending = NO;   // 重排进行中（防连发消息重复排队）

static void mergeFindTable(UIView *v, int depth, UITableView **out) {
    if (!v || *out || depth > 6) return;
    if ([v isKindOfClass:[UITableView class]]) { *out = (UITableView *)v; return; }
    for (UIView *sub in v.subviews) mergeFindTable(sub, depth + 1, out);
}

static void mergeDoReload(void) {
    s_mergeRelayoutPending = NO;
    // 独立模型重建+预写（本方案核心）：轮询已确认节点追加，此刻 rebuild 的
    // entries 即含新消息的正确邻接，apply 同刻把标志写到新消息 vm 上——微信
    // 随后 reload 全量重询行高时标志已就位，首测即正确。
    //
    // 绝不参与表格变更（frida_voice_crash.js 三轮实证，25b8c0d5 门闸仍炸）：
    // begin/endUpdates 撞进微信语音管线（reloadData 多连发、数据源计数后台
    // 抖动）时，endUpdates 对比"begin 时内部快照 vs end 时重读数据源"必抛
    // Invalid Number Of Sections，坏状态连锁=新行建不出来+退页闪退；事前任何
    // 一致性检查都赌不过竞态。而环形缓冲实证微信对聊天表行变更全部走
    // reloadData（零 insertRows），每次收发消息它自己都会全量重询行高，配合
    // 预写标志几何必然正确——本函数只需重建+预写，表格一个字都不碰。
    rebuildAndApplyFromContext();
}

static void mergeRetryRelayout(NSInteger count0, NSInteger attempt);

static void mergeScheduleRelayout(void) {
    if (s_mergeRelayoutPending) return;
    s_mergeRelayoutPending = YES;
    NSInteger count0 = g_currentNodeArray ? (NSInteger)g_currentNodeArray.count : -1;
    mergeRetryRelayout(count0, 0);
}

// 等微信把新消息节点追加进 m_arrMessageNodeData（探针实证追加发生在
// AsyncOnAddMsg 返回后 ~30ms 内的某个 runloop，早于它重建必用旧数组），
// 30ms 轮询节点计数，增长（新消息 +1，跨时间行 +2）即重建+预写；12 次未变
// 兜底重建。全程主线程（AJ 回调与计数读取同队列，无竞态）。
// 注意：这里只重建+预写，不触发表格——微信自己 reload 时全量重询行高（探针
// 实证聊天表行变更全部走 reloadData），标志已就位，几何必然正确。
static void mergeRetryRelayout(NSInteger count0, NSInteger attempt) {
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.03 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        NSInteger now = g_currentNodeArray ? (NSInteger)g_currentNodeArray.count : -1;
        if (now > count0 || attempt >= 12) {
            mergeDoReload();
        } else {
            mergeRetryRelayout(count0, attempt + 1);
        }
    });
}

static void repl_CMMsgMgr_AsyncOnAddMsg(id self, SEL _cmd, id session, id wrap) {
    ((void (*)(id, SEL, id, id))orig_CMMsgMgr_AsyncOnAddMsg)(self, _cmd, session, wrap);
    @try {
        MsgMergeConfig *cfg = [MsgMergeConfig shared];
        if (!cfg.mmEnable) return;
        if (![session isKindOfClass:[NSString class]]) return;
        if (![(NSString *)session isEqualToString:g_currentChatName]) return;   // 只管当前打开的会话
        if (g_curChatVC) updateChatContext(g_curChatVC);   // 刷新 g_currentNodeArray（含切会话自检）
        // 此刻节点大概率未追加（~30ms 后才进数组）：期间微信建行查询落模型
        // miss → None 原生渲染；轮询确认追加后 mergeDoReload 主动重建模型，
        // 微信自己的 reload 布局 pass 全量重询行高即得正确几何（本函数绝不
        // 触发表格变更，见 mergeDoReload 注释）
        // 模型只在重建时计算判定，不存在"中间态判定被写回"的毒缓存问题
        mergeScheduleRelayout();
    } @catch (NSException *e) {
        WPLog(@"MsgMerge", @"[Ctx] AsyncOnAddMsg exception: %@", e.reason);
    }
}

// ------------------------------------------------------------
// 建表期判定固化兜底：历史行的 rowHeight 只在建表期被问一次，若模型首次
// 重建时渲染数组尚未就绪（刚进聊天数组未加载完，实证常态），错判定固化——
// UITableView 不会对已建好的行重询 rowHeight，而模型按数组身份/指纹判失效，
// 之后条件不变不再重建（旧 TTL 架构靠微信加载完刷表重询自愈，独立模型堵死
// 了该路径）。didAppear 落定后延迟主动重建 + begin/endUpdates 强制全表重询，
// 行高无差异时无动画。
// 注意 begin/endUpdates 只允许出现在这里（进会话静默窗口，微信建表管线已
// 消费完，三轮探针实证 crash 类只发生在消息到达时刻的语音管线期间）；
// mergeDoReload（消息路径）绝不碰表格。
// ------------------------------------------------------------
static IMP orig_BaseMsgContentVC_viewDidAppear = NULL;

static void repl_BaseMsgContentVC_viewDidAppear(id self, SEL _cmd, BOOL animated) {
    ((void (*)(id, SEL, BOOL))orig_BaseMsgContentVC_viewDidAppear)(self, _cmd, animated);
    @try {
        MsgMergeConfig *cfg = [MsgMergeConfig shared];
        if (!cfg.mmEnable) return;
        if (self != g_curChatVC) return;
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.2 * NSEC_PER_SEC)),
                       dispatch_get_main_queue(), ^{
            if (g_curChatVC != self) return;   // 已切走
            updateChatContext(self);           // 刷新数组引用（重建输入取落定后的表）
            mergeDoReload();                   // 重建模型（不碰表格）
            UITableView *tbl = nil;            // 静默窗口强制全表重询行高
            UIViewController *vcSelf = self;
            mergeFindTable(vcSelf.view, 0, &tbl);
            if (!tbl) return;
            @try {
                [tbl layoutIfNeeded];
                [tbl beginUpdates];
                [tbl endUpdates];
            } @catch (NSException *e) {
                WPLog(@"MsgMerge", @"[Ctx] appear begin/end clash: %@", e.reason);
            }
        });
    } @catch (NSException *e) {
        WPLog(@"MsgMerge", @"[Ctx] viewDidAppear exception: %@", e.reason);
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
            applyOwnLayout(cellView, NO);   // 布局接管残留还原（delta 归零路径，无缓存则幂等空转）
            return;
        }

        id viewModel = safeKVC(cellView, @"viewModel");
        if (!viewModel) { WPLog(@"MsgMerge", @"[Apply] viewModel nil"); return; }
        id wrap = safeKVC(viewModel, @"messageWrap");
        if (!wrap) { WPLog(@"MsgMerge", @"[Apply] wrap nil"); return; }

        NSString *chat = chatNameOfWrap(wrap) ?: currentChatName();
        if (chat.length == 0) { WPLog(@"MsgMerge", @"[Apply] 会话名为空"); return; }

        // ⑤ 布局接管（阶段2/3）：白名单类型（文本+媒体四类）横向自摆。
        //    必须在 pos=None 早退之前——mmSepMedia 开启时媒体消息充当分隔符
        //    （标志为 None），早退会饿死媒体自摆（实证：图片/视频偏移无效）。
        //    自摆只依赖 wrap 类型与原生基准帧，不依赖合并位置。
        long long msgType = [(NSNumber *)safeKVC(wrap, @"m_uiMessageType") longLongValue];
        applyOwnLayout(cellView, olTypeEnabled(msgType) && cfg.mmOwnLayout);

        MOMergePosition pos = flagsPos(viewModel);
        if (pos == MOMergePositionNone) return;   // 组外/标志缺席：不干预渲染

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

        // ② 群昵称：仅组首显示（私聊无昵称标签，操作无害）。
        //    同时直测昵称区（微信摆好的原生 frame，先于任何修改）：
        //    群收行（from=@chatroom 结尾）：N = bgTopInCell − g_plainBgY
        //      （昵称开 16−5=11 / 关 5−5=0，diag33 表坐标实证）；
        //    自发行（from=wxid）：无昵称区，bgTopInCell 恒为基准 → 校准 g_plainBgY。
        //    bg.frame.origin.y 恒 0（diag34），必须用 bgTopWithinCell 折算。
        if (inGroup) {
            id name = safeCall(cellView, "getNameLabel");
            if ([name isKindOfClass:[UILabel class]]) {
                UILabel *lb = (UILabel *)name;
                NSString *from = safeKVC(wrap, @"m_nsFromUsr");
                if ([from isKindOfClass:[NSString class]] && from.length > 0) {
                    UIImageView *bgV = safeCall(cellView, "getBgImageView");
                    if ([bgV isKindOfClass:[UIImageView class]]) {
                        CGFloat bgTop = bgTopWithinCell(bgV);
                        if (bgTop > 0) {
                            if ([from hasSuffix:@"@chatroom"]) {
                                [MsgMergeEngine reportNicknameBlock:bgTop - g_plainBgY];
                            } else {
                                g_plainBgY = bgTop;   // 自发行：无昵称区，校准基准
                            }
                        }
                    }
                }
                lb.hidden = !isFirst;
            }
        }

        // ③ 气泡背景圆角连续化（独立消息还原原值）
        UIImageView *bg = safeCall(cellView, "getBgImageView");
        if ([bg isKindOfClass:[UIImageView class]]) {
            applyCorner(bg, pos);
        }

        // ④ N 变化触发行高重算（见 g_mmChatTable 处说明）
        double nNow = [MsgMergeEngine nicknameBlockHeight];
        if (s_lastAppliedN < 0) {
            s_lastAppliedN = nNow;   // 首次仅登记基线
        } else if (fabs(nNow - s_lastAppliedN) > 0.5) {
            s_lastAppliedN = nNow;
            UITableView *tbl = nil;
            id cur = cellView;
            for (int hop = 0; hop < 8 && cur; hop++) {
                if ([cur isKindOfClass:[UITableView class]]) { tbl = cur; break; }
                cur = safeCall(cur, "superview");
            }
            if (tbl) {
                g_mmChatTable = tbl;
                UITableView *t = tbl;
                dispatch_async(dispatch_get_main_queue(), ^{
                    [t reloadData];
                });
                WPLog(@"MsgMerge", @"[Nick] N→%.0f 变化，触发行高重算", nNow);
            }
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
    // 定位锚点：本日志出现 = 聊天页 viewDidLoad 垫片完整跑完（卡死判别用：
    // 停在本行之前 = 卡在微信自身 viewDidLoad；之后无 [Model] = 卡在测量链）
    WPLog(@"MsgMerge", @"[Ctx] chatVC viewDidLoad done");
}

static void repl_BaseMsgContentVC_viewWillAppear(id self, SEL _cmd, BOOL animated) {
    ((void (*)(id, SEL, BOOL))orig_BaseMsgContentVC_viewWillAppear)(self, _cmd, animated);
    updateChatContext(self);
    // 接管开启时洗掉旧开关状态/上一会话遗留的固化行高值，保证首测前缓存干净
    //（首测判定走 v3 查模型，正确性由模型保证；这里只负责清旧值）
    MsgMergeConfig *cfg = [MsgMergeConfig shared];
    if (cfg.mmEnable && cfg.mmNickJudgeTakeover) resetAllMeasureCaches();
}

// [CELL] 渲染几何真值：cellView 高（=最终行高）+ bg 折算到 cellView 坐标的
// top/bottom——间隙真值 = 时间序相邻两行的「下一行 bgTop − 本行 bgBot」。
// 与 [NJH] 测量行高互证：h_orig 65 但渲染 rowH=54 = 判定回收触发了重测（正常）；
// 测量 54 渲染 rowH=65 = 布局层未跟进（异常）。按「vm+行内容」去重，稳态静默。
static void cellGeomLog(id cellView) {
    MsgMergeConfig *cfg = [MsgMergeConfig shared];
    if (!cfg.mmEnable) return;
    @try {
        UIImageView *bg = safeCall(cellView, "getBgImageView");
        if (![bg isKindOfClass:[UIImageView class]]) return;
        id vm = safeKVC(cellView, @"viewModel");
        id wrap = vm ? safeKVC(vm, @"messageWrap") : nil;
        if (!wrap) return;
        double rowH = ((UIView *)cellView).frame.size.height;
        double bgTop = 0;
        for (UIView *v = bg; v && v != cellView; v = v.superview) {
            bgTop += v.frame.origin.y;
        }
        double bgH = bg.frame.size.height;
        njLogKeyed(cellView, [NSString stringWithFormat:
            @"[CELL] lid=%@ rowH=%.1f bgTop=%.1f bgH=%.1f bgBot=%.1f",
            njLidOf(wrap), rowH, bgTop, bgH, bgTop + bgH]);
    } @catch (NSException *e) {
        WPLog(@"MsgMerge", @"[CELL] exception: %@", e.reason);
    }
}

static void repl_CMCellView_layoutInternal(id self, SEL _cmd) {
    ((void (*)(id, SEL))orig_CMCellView_layoutInternal)(self, _cmd);
    applyMergeToCellView(self);
    cellGeomLog(self);
}

static void repl_CMCellView_updateNodeStatus(id self, SEL _cmd) {
    ((void (*)(id, SEL))orig_CMCellView_updateNodeStatus)(self, _cmd);
    applyMergeToCellView(self);
}

// ------------------------------------------------------------
// 昵称断供（根治）：组内非首条（Middle/Last）让 getNameLabel 返回 nil，
// 原生布局走无昵称分支（气泡贴顶，昵称区从源头消失，无 11pt 残空）。
// 依据：写入链 backtrace 实证 layoutInternal → 昵称区处理 → getNameLabel →
// MMCPLabel setText:，每轮布局重写——断供 label 即断整链；nil 对 ObjC 全链安全。
// 数据源实证（NickDS 三层 ivar 全扫）：昵称不缓存于 view/VM/wrap，原生布局期
// 按 wrap.m_nsRealChatUsr 现查联系人库——断 label 是唯一单点。
// 残留防护：断供后原生无昵称分支不再触碰 label 实例，复用 cell 的 label 会
// 残留旧文本/可见态——断供时顺手 setHidden:YES（带标记），其余路径对称还原。
// ------------------------------------------------------------
static void *kNLHiddenByUs = &kNLHiddenByUs;
static IMP orig_CMCellView_getNameLabel = NULL;

static id repl_CMCellView_getNameLabel(id self, SEL _cmd) {
    id label = ((id (*)(id, SEL))orig_CMCellView_getNameLabel)(self, _cmd);
    @try {
        MsgMergeConfig *cfg = [MsgMergeConfig shared];
        UILabel *lb = [label isKindOfClass:[UILabel class]] ? (UILabel *)label : nil;
        BOOL cut = NO;
        if (cfg.mmEnable) {
            // wrap 取法：cellView 无 messageWrap ivar，走 viewModel.messageWrap（与 applyMerge 同链）
            id viewModel = safeKVC(self, @"viewModel");
            id wrap = safeKVC(viewModel, @"messageWrap");
            if (wrap) {
                NSString *chat = chatNameOfWrap(wrap) ?: currentChatName();
                if (chat.length > 0) {
                    MOMergePosition pos = flagsPos(viewModel);
                    cut = (pos == MOMergePositionMiddle || pos == MOMergePositionLast);
                }
            }
        }
        if (cut) {
            if (lb && !lb.hidden) {
                lb.hidden = YES;
                objc_setAssociatedObject(lb, kNLHiddenByUs, @(YES), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            }
            return nil;   // 断供：原生布局走无昵称分支
        }
        if (lb && [objc_getAssociatedObject(lb, kNLHiddenByUs) boolValue]) {
            lb.hidden = NO;   // 对称还原（pos 变 First/None、开关关闭等路径）
            objc_setAssociatedObject(lb, kNLHiddenByUs, @(NO), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        }
    } @catch (NSException *e) {
        WPLog(@"MsgMerge", @"[N] getNameLabel exception: %@", e.reason);
    }
    return label;
}

// ------------------------------------------------------------
// 阶段3：媒体子类 layoutInternal 判重补挂（XOS FUN_00192294 同架构）
// 子类重写 layoutInternal 时基类钩子拦不到（垫片不会被调），必须逐子类补挂；
// class_getInstanceMethod 子类与基类返回同一 Method = 未重写，跳过（防对同一
// Method 二次挂钩）。垫片与基类同构：orig 先跑，再走 applyMergeToCellView
// （内部幂等：associated 备份/基准失效检测，子类调 super 链路重复进入无害）。
// ------------------------------------------------------------
static IMP orig_VoiceCellView_layoutInternal   = NULL;
static IMP orig_VideoCellView_layoutInternal   = NULL;
static IMP orig_ImageCellView_layoutInternal   = NULL;
static IMP orig_AppFileCellView_layoutInternal = NULL;

static void repl_VoiceCellView_layoutInternal(id self, SEL _cmd) {
    ((void (*)(id, SEL))orig_VoiceCellView_layoutInternal)(self, _cmd);
    applyMergeToCellView(self);
}

static void repl_VideoCellView_layoutInternal(id self, SEL _cmd) {
    ((void (*)(id, SEL))orig_VideoCellView_layoutInternal)(self, _cmd);
    applyMergeToCellView(self);
}

static void repl_ImageCellView_layoutInternal(id self, SEL _cmd) {
    ((void (*)(id, SEL))orig_ImageCellView_layoutInternal)(self, _cmd);
    applyMergeToCellView(self);
}

static void repl_AppFileCellView_layoutInternal(id self, SEL _cmd) {
    ((void (*)(id, SEL))orig_AppFileCellView_layoutInternal)(self, _cmd);
    applyMergeToCellView(self);
}

static void installMediaLayoutInternalHooks(void) {
    struct MediaHook { const char *name; IMP *orig; IMP repl; } hooks[] = {
        { "VoiceMessageCellView",   &orig_VoiceCellView_layoutInternal,   (IMP)repl_VoiceCellView_layoutInternal   },
        { "VideoMessageCellView",   &orig_VideoCellView_layoutInternal,   (IMP)repl_VideoCellView_layoutInternal   },
        { "ImageMessageCellView",   &orig_ImageCellView_layoutInternal,   (IMP)repl_ImageCellView_layoutInternal   },
        { "AppFileMessageCellView", &orig_AppFileCellView_layoutInternal, (IMP)repl_AppFileCellView_layoutInternal },
    };
    Class base = objc_getClass("CommonMessageCellView");
    Method baseM = base ? class_getInstanceMethod(base, @selector(layoutInternal)) : NULL;
    for (NSUInteger i = 0; i < sizeof(hooks) / sizeof(hooks[0]); i++) {
        NSString *name = @(hooks[i].name);
        Class c = objc_getClass(hooks[i].name);
        if (!c) { WPLog(@"MsgMerge", @"[Hook] ✗ %@ not found，跳过补挂", name); continue; }
        Method m = class_getInstanceMethod(c, @selector(layoutInternal));
        if (!m) { WPLog(@"MsgMerge", @"[Hook] ✗ %@ 无 layoutInternal，跳过补挂", name); continue; }
        if (baseM && method_getImplementation(m) == method_getImplementation(baseM)) {
            WPLog(@"MsgMerge", @"[Hook] = %@ layoutInternal 未重写（基类钩子已覆盖），跳过", name);
            continue;
        }
        MSHookMessageEx(c, @selector(layoutInternal), hooks[i].repl, hooks[i].orig);
        WPLog(@"MsgMerge", @"[Hook] ✓ %@ layoutInternal 补挂（子类重写）", name);
    }
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
        if ([cls instancesRespondToSelector:NSSelectorFromString(@"viewDidAppear:")]) {
            MSHookMessageEx(cls, NSSelectorFromString(@"viewDidAppear:"),
                            (IMP)repl_BaseMsgContentVC_viewDidAppear,
                            &orig_BaseMsgContentVC_viewDidAppear);
            WPLog(@"MsgMerge", @"[Hook] ✓ BaseMsgContentViewController viewDidAppear:");
        }
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
        MSHookMessageEx(cls, NSSelectorFromString(@"getNameLabel"),
                        (IMP)repl_CMCellView_getNameLabel,
                        &orig_CMCellView_getNameLabel);
        WPLog(@"MsgMerge", @"[Hook] ✓ CommonMessageCellView layoutInternal/updateNodeStatus/getNameLabel");
    } else {
        WPLog(@"MsgMerge", @"[Hook] ✗ CommonMessageCellView not found");
    }

    // ②b 阶段3：媒体子类 layoutInternal 判重补挂
    installMediaLayoutInternalHooks();

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

    // ③b 昵称判定接管钩子（实验开关 mmNickJudgeTakeover，XOS 同款挂点）。
    //     挂载策略 = 全类扫描判重补挂 + 根类单点（探针 #25 消息 cell 同款架构）：
    //     单点挂 CommonMessageViewModel 只覆盖继承实现；部分媒体类重写了
    //     isShowChatRoomDisplayName 自带 IMP，单点漏挂 → 判定钩不被调 → 媒体消息
    //     昵称区不回收（77 号日志实证：同批 pos=3 文本 54 型生效、媒体 65 型漏挂）。
    //     先扫描补挂（此时各类 IMP 仍原始，可判重），再挂根类覆盖继承实现。
    //     每处安装前 dladdr 查 IMP 归属，被其他 dylib（如 XOS）占用则让位。
    {
        SEL selNick = NSSelectorFromString(@"isShowChatRoomDisplayName");
        Class baseCls = objc_getClass("CommonMessageViewModel");
        if (baseCls && [baseCls instancesRespondToSelector:selNick]) {
            IMP baseIMP = NULL;
            Method bm = class_getInstanceMethod(baseCls, selNick);
            baseIMP = bm ? method_getImplementation(bm) : NULL;
            unsigned int n = 0;
            Class *classes = objc_copyClassList(&n);
            Dl_info info;
            for (unsigned int i = 0; classes && i < n; i++) {
                Class c = classes[i];
                if (c == baseCls) continue;
                BOOL derived = NO;
                for (Class p = class_getSuperclass(c); p; p = class_getSuperclass(p)) {
                    if (p == baseCls) { derived = YES; break; }
                }
                if (!derived) continue;
                Method m = class_getInstanceMethod(c, selNick);
                IMP cur = m ? method_getImplementation(m) : NULL;
                if (!cur || cur == baseIMP) continue;   // 继承实现，根类单点覆盖
                BOOL foreign = dladdr((void *)cur, &info) && info.dli_fname &&
                               strstr(info.dli_fname, ".dylib") &&
                               !strstr(info.dli_fname, "WeChat") && !strstr(info.dli_fname, "Mio");
                if (foreign) {
                    WPLog(@"MsgMerge", @"[Hook] ⊘ %s isShowChatRoomDisplayName 归属 %s，让位",
                          class_getName(c), info.dli_fname);
                    continue;
                }
                if (g_nickClsCount >= 32) break;
                IMP orig = NULL;
                MSHookMessageEx(c, selNick, (IMP)repl_CMVM_isShowChatRoomDisplayName, &orig);
                g_nickCls[g_nickClsCount] = c;
                g_nickOrig[g_nickClsCount] = orig;
                g_nickClsCount++;
                WPLog(@"MsgMerge", @"[Hook] ✓ %s isShowChatRoomDisplayName（重写类补挂）", class_getName(c));
            }
            if (classes) free(classes);
            // 根类单点（继承实现全覆盖）
            Method m = class_getInstanceMethod(baseCls, selNick);
            IMP cur = m ? method_getImplementation(m) : NULL;
            BOOL foreign = cur && dladdr((void *)cur, &info) && info.dli_fname &&
                           strstr(info.dli_fname, ".dylib") &&
                           !strstr(info.dli_fname, "WeChat") && !strstr(info.dli_fname, "Mio");
            if (foreign) {
                WPLog(@"MsgMerge", @"[Hook] ⊘ CommonMessageViewModel isShowChatRoomDisplayName 归属 %s，让位不挂", info.dli_fname);
            } else {
                MSHookMessageEx(baseCls, selNick, (IMP)repl_CMVM_isShowChatRoomDisplayName,
                                &orig_CMVM_isShowChatRoomDisplayName);
                WPLog(@"MsgMerge", @"[Hook] ✓ CommonMessageViewModel isShowChatRoomDisplayName");
            }
        } else {
            WPLog(@"MsgMerge", @"[Hook] ✗ CommonMessageViewModel isShowChatRoomDisplayName not found");
        }
    }

    // ④ 新消息入库联动（新 lid 入组/邻接变化 → 刷数组+清缓存+重排）
    cls = objc_getClass("CMessageMgr");
    if (cls && [cls instancesRespondToSelector:NSSelectorFromString(@"AsyncOnAddMsg:MsgWrap:")]) {
        MSHookMessageEx(cls, NSSelectorFromString(@"AsyncOnAddMsg:MsgWrap:"),
                        (IMP)repl_CMMsgMgr_AsyncOnAddMsg,
                        &orig_CMMsgMgr_AsyncOnAddMsg);
        WPLog(@"MsgMerge", @"[Hook] ✓ CMessageMgr AsyncOnAddMsg:MsgWrap:");
    } else {
        WPLog(@"MsgMerge", @"[Hook] ✗ CMessageMgr AsyncOnAddMsg not found");
    }

    // ⑤ 测量链探针（临时实证，验证后删除）：确认 rowHeight 链是否走 measure:/contentTextSize
    static void installMeasureChainProbe(void);   // 实现见文件尾（@end 后）
    installMeasureChainProbe();

    WPLog(@"MsgMerge", @"MsgMergeHook install complete");
}

@end

// ============================================================
// MARK: - 测量链探针（临时实证代码，验证后整体删除）
// 目的：实证 8.0.78 行高链是否走 CommonMessageViewModel measure: /
//       TextMessageViewModel contentTextSize，调用时机与 [NJH] rowHeight 对账。
// 透传定式：返回 16 字节 struct（x0/x1 寄存器无损透传，CGSize/id 皆兼容）；
//       参数一律 void*（ARC 垫片不 retain，类型无关）。
// ============================================================
typedef struct { unsigned long long x0, x1; } MSPPair;

static MSPPair (*orig_MSP_measure)(void *, SEL, void *);
static MSPPair (*orig_MSP_cts)(void *, SEL);
static Class g_mspCls[16];
static MSPPair (*g_mspOrig[16])(void *, SEL, void *);
static NSInteger g_mspCount = 0;

static long long mspLidOf(void *vm) {
    @try {
        id wrap = [(id)vm valueForKey:@"messageWrap"];
        id v = [wrap valueForKey:@"m_uiMesLocalID"];
        return [v respondsToSelector:@selector(longLongValue)] ? [v longLongValue] : 0;
    } @catch (NSException *e) { return 0; }
}

static MSPPair repl_MSP_measure(void *self, SEL _cmd, void *arg) {
    MSPPair (*o)(void *, SEL, void *) = orig_MSP_measure;
    for (NSInteger i = 0; i < g_mspCount; i++) {
        if (g_mspCls[i] == object_getClass(self)) { o = g_mspOrig[i]; break; }
    }
    MSPPair r = o(self, _cmd, arg);
    WPLog(@"MsgMerge", @"[MSP] measure cls=%s lid=%lld ret=%llx,%llx arg=%p",
          object_getClassName(self), mspLidOf(self), r.x0, r.x1, arg);
    return r;
}

static MSPPair repl_MSP_cts(void *self, SEL _cmd) {
    MSPPair r = orig_MSP_cts(self, _cmd);
    WPLog(@"MsgMerge", @"[MSP] cts cls=%s lid=%lld ret=%llx,%llx",
          object_getClassName(self), mspLidOf(self), r.x0, r.x1);
    return r;
}

static void installMeasureChainProbe(void) {
    SEL selM = NSSelectorFromString(@"measure:");
    Class baseCls = objc_getClass("CommonMessageViewModel");
    if (baseCls && [baseCls instancesRespondToSelector:selM]) {
        Method bm = class_getInstanceMethod(baseCls, selM);
        WPLog(@"MsgMerge", @"[MSP] enc CommonMessageViewModel measure: %s",
              bm ? method_getTypeEncoding(bm) : "nil");
        IMP baseIMP = bm ? method_getImplementation(bm) : NULL;
        unsigned int n = 0;
        Class *classes = objc_copyClassList(&n);
        for (unsigned int i = 0; classes && i < n; i++) {
            Class c = classes[i];
            if (c == baseCls) continue;
            BOOL derived = NO;
            for (Class p = class_getSuperclass(c); p; p = class_getSuperclass(p))
                if (p == baseCls) { derived = YES; break; }
            if (!derived) continue;
            Method m = class_getInstanceMethod(c, selM);
            IMP cur = m ? method_getImplementation(m) : NULL;
            if (!cur || cur == baseIMP) continue;   // 继承实现跳过，根类单点覆盖
            if (g_mspCount >= 16) break;
            MSPPair (*o)(void *, SEL, void *) = NULL;
            MSHookMessageEx(c, selM, (IMP)repl_MSP_measure, (IMP *)&o);
            g_mspCls[g_mspCount] = c;
            g_mspOrig[g_mspCount] = o;
            g_mspCount++;
            WPLog(@"MsgMerge", @"[MSP] hook 重写类 %s measure:", class_getName(c));
        }
        if (classes) free(classes);
        MSHookMessageEx(baseCls, selM, (IMP)repl_MSP_measure, (IMP *)&orig_MSP_measure);
        WPLog(@"MsgMerge", @"[MSP] hook CommonMessageViewModel measure:");
    } else {
        WPLog(@"MsgMerge", @"[MSP] ✗ CommonMessageViewModel measure: not found");
    }

    SEL selC = NSSelectorFromString(@"contentTextSize");
    Class tcls = objc_getClass("TextMessageViewModel");
    if (tcls && [tcls instancesRespondToSelector:selC]) {
        Method tm = class_getInstanceMethod(tcls, selC);
        WPLog(@"MsgMerge", @"[MSP] enc TextMessageViewModel contentTextSize %s",
              tm ? method_getTypeEncoding(tm) : "nil");
        MSHookMessageEx(tcls, selC, (IMP)repl_MSP_cts, (IMP *)&orig_MSP_cts);
        WPLog(@"MsgMerge", @"[MSP] hook TextMessageViewModel contentTextSize");
    } else {
        WPLog(@"MsgMerge", @"[MSP] ✗ TextMessageViewModel contentTextSize not found");
    }
}
