//
//  MsgMergeHook.m — 消息合并钩子
//  MRC 编译（与工程一致）
//
//  架构（对齐 BubbleBox 反编译证据 + 工程既有范式）：
//    ⓪ 分组判定来源 = 独立模型 BBMergeModel（BBMergeEntry entries 预计算 +
//       主动重建，旧"逐查询现算邻接 + 5s TTL 缓存"已删）；渲染/行高钩子只查表。
//    ① BaseMsgContentViewController viewDidLoad/viewWillAppear: → 跟踪当前会话
//       与渲染数组 m_arrMessageNodeData
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
//       delegate heightForRow 与 self-sizing 在 8.0.78 均零调用（探针 #13/#14/#17/#18）。
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

static double repl_BaseChatViewModel_rowHeight(id self, SEL _cmd) {
    double h = ((double (*)(id, SEL))orig_BaseChatViewModel_rowHeight)(self, _cmd);
    @try {
        MsgMergeConfig *cfg = [MsgMergeConfig shared];
        if (!cfg.mmEnable) return h;
        id wrap = safeKVC(self, @"messageWrap");
        if (!wrap) return h;   // 时间节点等无 wrap
        NSString *chat = chatNameOfWrap(wrap);
        if (chat.length == 0) chat = currentChatName();
        if (chat.length == 0) return h;

        MOMergePosition pos = [[BBMergeModel shared] positionForWrap:wrap
                                                            chatName:chat
                                                           nodeArray:g_currentNodeArray];
        if (pos == MOMergePositionNone) return h;

        BOOL isMsgTail = (pos == MOMergePositionLast  || pos == MOMergePositionSingle);
        unsigned long long split = vmSplitPosition(self);   // 0=整条 1=首片 2=中片 3=末片
        splitPosLog(self, wrap);

        double reduce = 0;
        // a) 组内间隙收拢：只减非组尾消息的整条/末片（片间不能减，会撕开切片接缝）
        if (!isMsgTail && (split == 0 || split == 3) &&
            cfg.mmSpacingMode == 1 && cfg.mmSpacing > 0) {
            reduce += (double)cfg.mmSpacing;
        }
        // b) 昵称补偿（组首+组中）：[CELL] 探针实证（451245 批次）收方组所有行原生
        //    均按昵称布局渲染（行内 bgTop=16、原生行高 65），昵称文本仅组首绘制但
        //    空间每行都预留——"昵称断供让原生自动回收 11pt"在 rowHeight 层面不成立。
        //    组内间隙 = 上行行高 − 气泡高（bgTop 组内统一），组首 65−N−sp=42（间隙
        //    5pt ✓）而组中 65−sp=53（间隙 16pt ✗）即为不均根因。组中同样减 N；
        //    Last 保持原生（65）保住组尾到组外的原生间隙；Single 昵称可见不参与
        //    合并，不减。
        if ((pos == MOMergePositionFirst || pos == MOMergePositionMiddle) &&
            (split == 0 || split == 1) && [chat hasSuffix:@"@chatroom"]) {
            NSString *from = safeKVC(wrap, @"m_nsFromUsr");
            if ([from isKindOfClass:[NSString class]] && [from hasSuffix:@"@chatroom"]) {
                reduce += [MsgMergeEngine nicknameBlockHeight];
            }
        }
        if (reduce <= 0) return h;
        double v = h - reduce;
        return v >= 24.0 ? v : 24.0;   // 下限 24 防裁切（内容顶对齐，缩减只吃底部空白）
    } @catch (NSException *e) {
        WPLog(@"MsgMerge", @"[H] rowHeight exception: %@", e.reason);
    }
    return h;
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
    UIViewController *vc = g_curChatVC;
    if (!vc.isViewLoaded || !vc.view.window) return;   // 会话页已不在屏
    UITableView *tbl = nil;
    mergeFindTable(vc.view, 0, &tbl);
    if (!tbl) return;
    // 独立模型主动重建（本方案核心）：轮询已确认节点追加，此刻重建的 entries
    // 即含新消息的正确邻接；旧架构此处只清缓存、靠微信后续查询现算回填（会把
    // 中间态判定写回缓存=毒缓存），重建后查询只读、判定确定
    [[BBMergeModel shared] rebuildWithNodeArray:g_currentNodeArray
                                       chatName:g_currentChatName];
    // begin/endUpdates 而非 reloadData：只重新询问行高并动画过渡差异，
    // 不重建可见 cell、不动滚动位置（reloadData 全表重建会抖动，用户实证）。
    // 语音发送实证闪退链（frida_voice_crash.js 取证）：微信 reloadData 在 t、
    // 我们 begin/endUpdates 在 t+17ms 同一主队列批次——reloadData 延迟到布局
    // pass 才消费，表内部仍是旧行集而数据源已新，endUpdates 必抛
    // "Invalid Number Of Sections"（栈帧 Mio 0x4db10=本函数）；坏状态连锁导致
    // 语音行建不出来、退出聊天页闪退。layoutIfNeeded 先强制消费挂起的 reload
    // 同步表内部状态；@try 兜底仅防极端残余（正常路径无抖动）。
    @try {
        [tbl layoutIfNeeded];
        [tbl beginUpdates];
        [tbl endUpdates];
    } @catch (NSException *e) {
        WPLog(@"MsgMerge", @"[RL] begin/endUpdates clash, fallback reloadData: %@", e.reason);
        [tbl reloadData];
    }
}

static void mergeRetryRelayout(NSInteger count0, NSInteger attempt);

static void mergeScheduleRelayout(void) {
    if (s_mergeRelayoutPending) return;
    s_mergeRelayoutPending = YES;
    NSInteger count0 = g_currentNodeArray ? (NSInteger)g_currentNodeArray.count : -1;
    mergeRetryRelayout(count0, 0);
}

// 等微信把新消息节点追加进 m_arrMessageNodeData（探针实证追加发生在
// AsyncOnAddMsg 返回后 ~30ms 内的某个 runloop，早于它我们重排必用旧数组），
// 30ms 轮询节点计数，增长（新消息 +1，跨时间行 +2）即重排；12 次未变兜底重排。
// 全程主线程（AJ 回调与计数读取同队列，无竞态）。
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
        // miss → None 原生渲染；轮询确认追加后 mergeDoReload 主动重建并重排，
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
            mergeDoReload();                   // 重建 + begin/endUpdates
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

        NSArray *nodes = msgNodeArrayOfCellView(cellView);
        if (!nodes) {
            static NSTimeInterval lastVCFailLog = 0;
            NSTimeInterval now = [[NSDate date] timeIntervalSince1970];
            if (now - lastVCFailLog > 10) {
                lastVCFailLog = now;
                WPLog(@"MsgMerge", @"[Apply] 未找到聊天 VC 或渲染数组（页面=%s）", object_getClassName(cellView));
            }
        }
        // ⑤ 布局接管（阶段2/3）：白名单类型（文本+媒体四类）横向自摆。
        //    必须在 pos=None 早退之前——mmSepMedia 开启时媒体消息充当分隔符
        //    （positionForWrap 返 None），早退会饿死媒体自摆（实证：图片/视频偏移无效）。
        //    自摆只依赖 wrap 类型与原生基准帧，不依赖合并位置。
        long long msgType = [(NSNumber *)safeKVC(wrap, @"m_uiMessageType") longLongValue];
        applyOwnLayout(cellView, olTypeEnabled(msgType) && cfg.mmOwnLayout);

        MOMergePosition pos = [[BBMergeModel shared] positionForWrap:wrap chatName:chat nodeArray:nodes];
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
                    MOMergePosition pos = [[BBMergeModel shared] positionForWrap:wrap
                                                                        chatName:chat
                                                                       nodeArray:g_currentNodeArray];
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

    WPLog(@"MsgMerge", @"MsgMergeHook install complete");
}

@end
