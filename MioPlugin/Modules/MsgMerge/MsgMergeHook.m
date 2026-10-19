//
//  MsgMergeHook.m — 消息合并钩子
//  MRC 编译（与工程一致）
//
//  架构（数据先行 · 增量索引，对齐 BubbleBox）：
//    BBMergeModel 是唯一数据源：refreshIndex 增量补建 localID→entry 索引（屏上
//    fill + 历史方向 DB 预扩，幂等守卫防风暴），分组判定永远发生在微信建 vm/
//    测量之前——读侧钩子（measure:/昵称判定/渲染）按 wrap 的 localID
//    直接 O(1) 查表（flagsPos），首测即命中。刷新语义对齐 BubbleBox scroll 分支：
//    changed 只统计屏上已渲染 lid 的 pos 实变，新 lid 进索引不计（首测查表即真，
//    无需事后刷新）——滚动场景 changed 恒 0，永不跳动。
//    测量层接管（BubbleBox 同款行高杠杆）：measure: 对组内非组尾消息 −mmSpacing
//    （下限 24），组尾/Single 原生直通；骑行开启时组首行行高扩展（悬空头像空间
//    由本行提供，XOS 组间不重叠根源）；切片首/中片无缝直通（末片才含底部空隙）。
//    昵称区回收走 isShowChatRoomDisplayName 判定翻转（常驻，原生按无昵称行
//    测量+布局），无任何 N 补偿。时间行断组修正：refreshIndex 扫 nodeArray，
//    发现「DB 判一组、微信却插行」的矛盾行时以行为权威断组符修正切口两侧
//    entry 的 pos（组首恢复头像，行保留原生显示）——判定服从微信行，矛盾根除。
//    微信对聊天表行变更全部走 reloadData（环形缓冲实证），新消息路径只 rebuild
//    +标脏，表格一个字不碰。
//
//  铁律（违反即崩）：
//    ✗ 预写标志到 vm —— 随微信整批重建 vm 丢失 → 测量读 None → 集体闪回
//    ✗ 按类扫描补挂 —— WAApp 小程序分享消息闪退环宿主（零类扫描，基类单点）
//    ✗ 查询路径挂钩 —— MSHook trampoline 无 unwind info，异常展开必 terminate
//
//  钩子清单（全部 bbSwap 直换，公共基类单点）：
//    BaseMsgContentViewController  viewDidLoad / viewWillAppear: / viewDidAppear: /
//                                  scrollViewDidScroll:（会话跟踪 + 滚动保鲜）
//    CommonMessageCellView         layoutSubviews（渲染应用，XOS 同款挂点：原生
//                                  layoutSubviews 跑完后置重排——UIView 布局链最终
//                                  提交点，写帧天然站住，无后续覆盖）
//    CommonMessageViewModel        measure:（组内间距收拢）
//                                  isShowChatRoomDisplayName（昵称判定，常驻）
//    CMessageMgr                   onServiceInit（mgr 早捕获）/ AddMsg:MsgWrap: /
//                                  AsyncOnAddMsg:MsgWrap:（新消息联动）
//
//  文件分层（自上而下，依赖单向，定义先于使用）：
//    基础设施 → 会话上下文与模型保鲜 → 视图应用 → 事件垫片 → 安装
//

#import "MsgMergeHook.h"
#import "MsgMergeConfig.h"
#import "MsgMergeDebugHud.h"
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
// MARK: - 基础设施
// ============================================================

// —— 原生实现槽（bbSwap 返回值，垫片转发用）——
static IMP orig_BaseMsgContentVC_viewDidLoad    = NULL;
static IMP orig_BaseMsgContentVC_viewWillAppear = NULL;
static IMP orig_BaseMsgContentVC_viewDidAppear  = NULL;
static IMP orig_BMCVC_scrollViewDidScroll       = NULL;
static IMP orig_CMCellView_layoutSubviews       = NULL;   // 渲染应用（XOS 同款挂点）
static IMP orig_CMVM_measure                    = NULL;
static IMP orig_CMVM_isShowChatRoomDisplayName  = NULL;
static IMP orig_CMMsgMgr_AddMsg                 = NULL;   // 收发总管道（发送侧不走 AsyncOnAddMsg）
static IMP orig_CMMsgMgr_onServiceInit          = NULL;   // 服务初始化（mgr 早捕获挂点）
static IMP orig_CMMsgMgr_AsyncOnAddMsg           = NULL;
static IMP orig_UITableView_reloadData           = NULL;   // 聊天表 reload 首测前置

// —— 会话上下文 ——
static NSString *g_currentChatName = nil;   // 当前会话 talker（群聊=chatroom id，私聊=对端 id）
static NSArray  *g_currentNodeArray = nil;  // 当前聊天 VC 的 m_arrMessageNodeData（retain）
static __weak UIViewController *g_curChatVC = nil;   // 当前聊天 VC（刷新/重排定位用）
static double g_lastArrCheck    = 0;        // 读侧保鲜限频（0.15s）
static CFAbsoluteTime g_lastAddMsgTick = 0; // 最近一次收发消息（首屏补询避让收发管线，mmHandleIncomingMsg 写）
static double g_lastScrollApply = 0;        // 滚动保鲜限频（100ms）
static BOOL s_mergeRelayoutPending = NO;    // 新消息重排进行中（防连发消息重复排队）

static NSString *currentChatName(void) {
    return g_currentChatName;
}

/// 聊天名缺位时建立（不覆盖已有值——切会话检测由 updateChatContext 专属）。
/// 8.0.79 兜底链实证：m_nsTalker 不存在 + NodeData 两层提取失效 → 聊天名只能由
/// measure 读侧 wrap / AddMsg 管道 session 建立（两条都零服务总线依赖）。
static void setCurrentChatNameIfEmpty(NSString *name) {
    if (g_currentChatName.length > 0) return;
    if (![name isKindOfClass:[NSString class]] || name.length == 0) return;
    WPLog(@"MsgMerge", @"[Ctx] chat 建立（缺位兜底）: %@ → %@", g_currentChatName, name);
#if __has_feature(objc_arc)
#else
    if (g_currentChatName) [g_currentChatName release];
#endif
    g_currentChatName = [name copy];
}

// —— 视图安全访问 ——
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

/// 消息 localID（查表键；KVC 自动装箱 → longLongValue）
static long long localIDOfWrap(id wrap) {
    id v = safeKVC(wrap, @"m_uiMesLocalID");
    return [v respondsToSelector:@selector(longLongValue)] ? [v longLongValue] : 0;
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

// —— bbSwap：BubbleBox 同款挂钩基础设施（反编译 FUN_0044bfbc 定论）——
// 全程不用 MSHookMessageEx：method_getImplementation 存 orig，method_setImplementation
// 直接换 IMP。复制下沉：方法在父类时 class_addMethod 复制到本类再替换，父类实现
// 不受污染（禁止 hook 继承自父类的方法——与其他插件全局 hook 冲突会互递归）。
// 本项目 MioSubstrate 的 MSHookMessageEx 本就是纯 Runtime 直换（无蹦床），bbSwap
// 与其语义一致，仅更显式并便于归属让位判断。
static IMP bbSwap(Class c, SEL sel, IMP newImp, const char *tag) {
    Method m = class_getInstanceMethod(c, sel);
    if (!m) {
        WPLog(@"MsgMerge", @"[Hook] ✗ %s 无 %@（bbSwap）", tag, NSStringFromSelector(sel));
        return NULL;
    }
    IMP orig = method_getImplementation(m);
    if (!class_addMethod(c, sel, orig, method_getTypeEncoding(m))) {
        method_setImplementation(m, newImp);   // 方法在 c 本身 → 直接替换
    } else {
        class_replaceMethod(c, sel, newImp, method_getTypeEncoding(m));   // 从父类复制下沉后替换
    }
    return orig;
}

// ============================================================
// MARK: - 会话上下文与模型保鲜
// ============================================================
// m_arrMessageNodeData 是原地 append 的可变数组：滚动加载历史后指针不变、count
// 增长，g_currentNodeArray 始终指向同一可变数组，重读 .count/元素即拿到最新状态。
// 微信补节点记账有 ~1s 迟滞：索引未覆盖的全新消息查表 None → 原生直通，
// 读侧限频刷新补齐后（屏上 pos None→有值计 changed）→ 可见刷新同刻收敛。

static void refreshAndApplyFromContext(void);   // 定义见下（updateChatContext 前向依赖）

// 会话跟踪（viewDidLoad/viewWillAppear/新消息联动共用）：刷新 talker、渲染数组
// 引用，上下文变化即触发索引刷新（数据先行：索引先行就位，测量读表恒真）
static void updateChatContext(id self) {
    g_curChatVC = self;
    @try {
        // 聊天名（BubbleBox 原版机制 applyCell 同源）：零服务总线依赖。绝不调
        // GetContact——8.0.79 上它走 NSInvocation 服务转发链，viewDidLoad/viewWillAppear
        // 时机 mmcronet 网络注册 dispatch_once 尚在后台执行，主线程介入
        // _dispatch_once_wait 死等 10s → scene-update watchdog SIGKILL（实证
        // WeChat-2026-10-18-094818.ips）。推导链：① m_nsTalker（聊天页本地 ivar，KVC
        // 直读不走服务）② 渲染数组节点提取 chatNameOfWrap（BBMergeModel wrapOfNode
        // 同款：两层 node.viewModel.messageWrap + 单层 node.messageWrap 兜底——119
        // 实证数组元素直接就是 vm，时间行节点无 wrap 循环跳过）。
        NSString *name = safeKVC(self, @"m_nsTalker");
        if (![name isKindOfClass:[NSString class]] || name.length == 0) {
            NSArray *arr0 = safeKVC(self, @"m_arrMessageNodeData");
            if ([arr0 isKindOfClass:[NSArray class]] && arr0.count > 0) {
                // BBMergeModel wrapOfNode 完全同款：node 可能是 NodeData 包装（两层链）
                // 也可能直接是 vm（119 日志实证首条 ChatTimeViewModel、vm=nil——单层
                // messageWrap 才是有效键）。时间行节点无 wrap，循环跳过。
                for (id node in arr0) {
                    id wrap = safeKVC(safeKVC(node, @"viewModel"), @"messageWrap");
                    if (!wrap) wrap = safeKVC(node, @"messageWrap");
                    name = chatNameOfWrap(wrap);
                    if (name.length > 0) break;
                }
            }
        }
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
        // 上下文变化即索引刷新（数据先行：索引先行就位，测量读表恒真）
        refreshAndApplyFromContext();
    } @catch (NSException *e) {
        WPLog(@"MsgMerge", @"[Ctx] updateChatContext exception: %@", e.reason);
    }
}

// 测量缓存清洗（BubbleBox resetLayoutCache/changeRevision 同源）：洗掉旧开关
// 状态/上一会话遗留的固化行高值（m_cachedHeight），viewWillAppear 与进会话
// 兜底时调用。微信按 revision 缓存布局，不 bump revision 的话标脏后也不会
// 真正重询行高。
static void resetAllMeasureCaches(void) {
    @try {
        UIViewController *vc = g_curChatVC;
        if (!vc) return;
        NSArray *arr = safeKVC(vc, @"m_arrMessageNodeData");
        if (![arr isKindOfClass:[NSArray class]] || arr.count == 0) return;
        SEL selReset = NSSelectorFromString(@"resetLayoutCache");
        SEL selBump = NSSelectorFromString(@"changeRevision");
        for (id vm in arr) {
            if (!vm) continue;
            if ([vm respondsToSelector:selReset]) {
                ((void (*)(id, SEL))objc_msgSend)(vm, selReset);
            }
            @try {
                if ([vm respondsToSelector:selBump]) {
                    ((void (*)(id, SEL))objc_msgSend)(vm, selBump);
                }
            } @catch (NSException *e) { }
        }
    } @catch (NSException *e) {
        WPLog(@"MsgMerge", @"[NJW] reset exception: %@", e.reason);
    }
}

// ------------------------------------------------------------
// 可见刷新（BubbleBox apply 同款 + 异步形态照抄）：apply 实改标志后做
// resetLayoutCache + cellView setNeedsLayout。反编译实证 updateAllNodes 的
// 刷新块走 _dispatch_async(main_q)——刷新扔到下一 runloop，不占触发点帧。
// 历史滚动场景：微信把滚动加载的历史节点补进数组迟到 ~1s，补齐瞬间已渲染
// cell 的固化测量值与布局不会自愈，此处对可见消息 cellView 标脏，layoutSubviews
// 钩子下轮按新标志重排（None 也走 applyMergeToCellView 的对称还原路径）。
// 刻意不碰 UITableView 任何 API——语音管线抖动期 begin/endUpdates 崩溃定论；
// 行高若未被原生布局链重询，滚动复用时自愈。
// ------------------------------------------------------------
// 聊天页消息表查找（vc.view 树深度优先；唯一 UITableView）
static UITableView *findChatTableView(UIViewController *vc) {
    if (!vc || ![vc isViewLoaded]) return nil;
    UITableView *tbl = nil;
    NSMutableArray<UIView *> *stack = [NSMutableArray arrayWithObject:vc.view];
    while (stack.count > 0) {
        UIView *v = [stack lastObject];
        [stack removeLastObject];
        if ([v isKindOfClass:[UITableView class]]) { tbl = (UITableView *)v; break; }
        for (UIView *s in v.subviews) [stack addObject:s];
    }
    return tbl;
}

static void refreshFlaggedCellsSync(void) {
    // 主线程同步版（AddMsg 管道收尾用——必须在微信建行首测前完成标脏）
    @try {
        UIViewController *vc = g_curChatVC;
        if (!vc) return;
        resetAllMeasureCaches();
        UITableView *tbl = findChatTableView(vc);
        if (!tbl) return;
        for (UITableViewCell *cell in tbl.visibleCells) {
            NSMutableArray<UIView *> *st = [NSMutableArray arrayWithObject:cell];
            for (int guard = 0; st.count > 0 && guard < 24; guard++) {
                UIView *v = [st lastObject];
                [st removeLastObject];
                NSString *cn = NSStringFromClass([v class]);
                if ([cn containsString:@"MessageCellView"]) {
                    [v setNeedsLayout];   // 下轮 layoutSubviews 按新标志重排/还原
                    continue;
                }
                for (UIView *s in v.subviews) [st addObject:s];
            }
        }
    } @catch (NSException *e) {
        WPLog(@"MsgMerge", @"[Refresh] exception: %@", e.reason);
    }
}

static void refreshFlaggedCells(void) {
    dispatch_async(dispatch_get_main_queue(), ^{
        refreshFlaggedCellsSync();
    });
}

// 事件驱动刷新的统一入口（切会话/进聊天/新消息确认追加/滚动限频/读侧保鲜都走这里）：
// 索引增量刷新（数据先行，无可见动作）+ 屏上 pos 实变时才可见刷新。
static void refreshAndApplyFromContext(void) {
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
    if (chat.length == 0) {
        // 理论不达（常规路径 viewWillAppear 建立 + measure/管道双兜底），达即异常
        WPLog(@"MsgMerge", @"[Ref] ⚠ 无聊天名跳过重建（arr.count=%lu）", (unsigned long)arr.count);
        return;
    }
    NSUInteger changed = [[BBMergeModel shared] refreshIndexWithNodeArray:arr chatName:chat];
    if (changed > 0) {
        WPLog(@"MsgMerge", @"[Ref] rebuild count=%lu changed=%lu", (unsigned long)arr.count, (unsigned long)changed);
        refreshFlaggedCells();   // 屏上 pos 实变 → 可见刷新（清测量缓存+标脏）
    }
}

// 读侧限频保鲜：索引未覆盖的全新消息（微信记账迟滞）由此补表。0.15s 一次
// 封顶——refreshAndApplyFromContext 有幂等守卫，数据未到货时 O(1) 比对空转，
// 到货后最快 0.15s 内补上。
static void refreshModelNow(void) {
    double now = [NSDate timeIntervalSinceReferenceDate];
    if (now - g_lastArrCheck < 0.15) return;
    g_lastArrCheck = now;
    refreshAndApplyFromContext();
}

// 读侧标志统一入口（measure:/昵称判定/渲染/昵称断供四钩子走这里）：
// 按 wrap 的 localID 直接 O(1) 查模型索引——不依赖 vm 对象，微信整批重建 vm
// 零影响（查表架构核心）。None → 限频保鲜补表再查；配置指纹变化 → 立即重建。
static MOMergePosition flagsPos(id vm) {
    BBMergeModel *m = [BBMergeModel shared];
    id wrap = safeKVC(vm, @"messageWrap");
    long long lid = localIDOfWrap(wrap);
    MOMergePosition pos = [m posForLocalID:lid];
    // 聊天名缺位兜底（119 实证有效路径）：measure 是微信建表必经之路，
    // vm.messageWrap 键有效性已实证——wrap 直接推导聊天名并建立（主线程
    // measure 时机安全，零服务总线依赖）。常规路径建立后此分支零触发。
    if (pos == MOMergePositionNone && currentChatName().length == 0 && lid > 0) {
        NSString *nm = chatNameOfWrap(wrap);
        if (nm.length > 0) setCurrentChatNameIfEmpty(nm);
    }
    if (pos != MOMergePositionNone && ![m configFingerprintChanged]) return pos;
    if ([m configFingerprintChanged]) {
        refreshAndApplyFromContext();
    } else {
        refreshModelNow();
    }
    return [m posForLocalID:lid];
}

// —— 新消息入库联动 ——

// BubbleBox addNewMessage:nodes: 收尾照抄：[vm updateLayoutsWithTryScroll:0
// ReloadAll:0] ——微信自己的增量布局 API（0,0=不滚动不整刷），对尾部 vm 逐个调
//（新消息场景=数组尾部）。
static void mergeKickTailVMs(void) {
    @try {
        UIViewController *vc = g_curChatVC;
        NSArray *arr = vc ? safeKVC(vc, @"m_arrMessageNodeData") : nil;
        if ([arr isKindOfClass:[NSArray class]] && arr.count > 0) {
            SEL selUpd = NSSelectorFromString(@"updateLayoutsWithTryScroll:ReloadAll:");
            for (NSUInteger k = arr.count; k > 0 && k + 4 > arr.count; k--) {
                id vm = arr[k - 1];
                if (!vm || ![vm respondsToSelector:selUpd]) continue;
                ((void (*)(id, SEL, BOOL, BOOL))objc_msgSend)(vm, selUpd, NO, NO);
            }
        }
    } @catch (NSException *e) {
        WPLog(@"MsgMerge", @"[Refresh] updateLayouts exception: %@", e.reason);
    }
}

static void mergeDoReload(void) {
    s_mergeRelayoutPending = NO;
    // 轮询已确认节点追加，此刻索引刷新已含新消息的正确邻接（管道 note 直写
    // 首测前就位，此处为全量校准兜底）——微信随后 reload 全量重询行高时查表
    // 恒真，首测即正确。
    //
    // 无条件可见刷新（92 号日志实证的时序洞兜底）：管道 note 直写已在首测前
    // 写好标志，但若 note 迟到/失败（时序窗口），新行首测落 None 原生几何随
    // 首建固化，而后续刷新 changed=0 会被跳过——此处主动 resetLayoutCache +
    // setNeedsLayout 强制重排兜底。安全：不碰表格 API，dispatch_async 异步
    // 标脏（语音管线崩溃定论不受影响）。
    //
    // 绝不参与表格变更（frida_voice_crash.js 三轮实证）：begin/endUpdates 撞进
    // 微信语音管线时必抛 Invalid Number Of Sections，事前任何一致性检查都赌不过
    // 竞态。环形缓冲实证微信对聊天表行变更全部走 reloadData（零 insertRows），
    // 每次收发消息它自己都会全量重询行高，配合查表恒真几何必然正确——本函数
    // 只需刷新索引+标脏，表格一个字都不碰。
    refreshAndApplyFromContext();
    refreshFlaggedCells();
    mergeKickTailVMs();
}

// 等微信把新消息节点追加进 m_arrMessageNodeData（探针实证追加发生在
// AsyncOnAddMsg 返回后 ~30ms 内的某个 runloop，早于它重建必用旧数组），
// 30ms 轮询节点计数，增长（新消息 +1，跨时间行 +2）即 rebuild；12 次未变
// 兜底重建。全程主线程（AJ 回调与计数读取同队列，无竞态）。
// 注意：这里只 rebuild，不触发表格——微信自己 reload 时全量重询行高，查表
// 恒真，几何必然正确。
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

static void mergeScheduleRelayout(void) {
    if (s_mergeRelayoutPending) return;
    s_mergeRelayoutPending = YES;
    NSInteger count0 = g_currentNodeArray ? (NSInteger)g_currentNodeArray.count : -1;
    mergeRetryRelayout(count0, 0);
}

// 新消息处理公共体（收发双管道共用）：AddMsg:MsgWrap: 是收发总管道（探针
// 94 号实证：自己发送不走 AsyncOnAddMsg——它是接收入口，发送时钩子零调用，
// note 直写不执行 → 建行首测 miss → 原生帧固化 → 秒跳合并），AsyncOnAddMsg
// 仅接收侧补充（两条管道收消息都触发，note 以 _index 幂等去重）。
//
// 管道内只做同步 note 直写（标志在微信建行首测前就位）；之后一切刷新交给
// 微信自己的 reloadData 管线（探针实证发送时 2-4 次全量 reload，行高全量
// 重询，查表恒真几何必然正确）——管道内同步标脏/kick 会打断微信「插入+滚动
// 动画」管线，新气泡从滑入变成跳出（装机实证），多余动作全部不做。
static void mmHandleIncomingMsg(id session, id wrap) {
    MsgMergeConfig *cfg = [MsgMergeConfig shared];
    if (!cfg.mmEnable) return;
    g_lastAddMsgTick = CFAbsoluteTimeGetCurrent();   // 收发管线活跃标记（补询避让）
    if (![session isKindOfClass:[NSString class]]) return;
    if (![(NSString *)session isEqualToString:g_currentChatName]) {
        // 聊天名缺位兜底：session 是微信收发管道自带的 talker，当前聊天页在且
        // 聊天名空 → 直接用 session 建立（零服务总线依赖）。常规建立后零触发。
        if (g_currentChatName.length == 0 && g_curChatVC) setCurrentChatNameIfEmpty(session);
        if (![(NSString *)session isEqualToString:g_currentChatName]) return;   // 只管当前打开的会话
    }
    long long lid = localIDOfWrap(wrap);
    if (lid <= 0) return;
    // g_currentNodeArray 仅主线程安全（主线程 updateChatContext 会换数组），
    // 读 count 前必须先归队——非主线程回调时三项动作整体派发主队列串行执行
    if (![NSThread isMainThread]) {
        dispatch_async(dispatch_get_main_queue(), ^{
            [[BBMergeModel shared] noteIncomingMsgLocalID:lid];
            if (g_curChatVC) updateChatContext(g_curChatVC);   // 刷新 g_currentNodeArray（含切会话自检）
            mergeScheduleRelayout();
        });
    } else {
        [[BBMergeModel shared] noteIncomingMsgLocalID:lid];
        if (g_curChatVC) updateChatContext(g_curChatVC);
        mergeScheduleRelayout();
    }
    // 轮询确认节点追加后 mergeDoReload 主动 rebuild：索引全量校准 + 可见刷新
    // （本函数绝不触发表格变更，见 mergeDoReload 注释）
}

// ============================================================
// MARK: - 视图应用（cell 视图逻辑）
// ============================================================

// —— 圆角连续化（associated 备份原值，可还原）——

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
///   组首：上角保持原半径下角收小；组中：四角收小；组尾：下角保持原半径上角收小；
///   Single/None：还原原值。半径取原半径的 1/3（原值 associated 备份）
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
            bg.layer.cornerRadius = original;
            bg.layer.maskedCorners = top;
            break;
        case MOMergePositionMiddle:
            bg.layer.cornerRadius = joinRadius;
            bg.layer.maskedCorners = all;
            break;
        case MOMergePositionLast:
            bg.layer.cornerRadius = original;
            bg.layer.maskedCorners = bottom;
            break;
        default:
            restoreCorner(bg);
            break;
    }
}

// —— 布局接管（白名单类型三 frame 横向自摆）——
// 原生模型（视图调试器 8.0.78 实测，cell 坐标，TextMessageCellView 即 cellView）：
//   头像 MMHeadImageView 46×46 y=2 距屏边 9：自发 x=W−55 / 收方 x=9
//   气泡容器：有 bg 的类型 = getBgImageView.superview；无 bg 的（图片3/视频43/表情47）
//   = getContentView 返回值（探针全类型实证与 bg.superview 同一视图，精准命中）
//     自发右缘 W−64 / 收方 x=64；y=5（无昵称）/ 16（群收昵称开）——纵向原生已对，不碰
//     （固定行高内挪 y 必守恒，项目定论；间距收拢走 measure: 测量层接管）
//   气泡图 YYAsyncImageView 与内容 RichTextView（getRichTextView，ivar m_richTextView）
//   均为容器子视图，随容器走；尺寸保持原生测量（宽=文字宽+24，inset 左右12/上10/下10）
// 自摆范围：横向 x（仅 mmAvatarOffset/mmWholeOffset 配置，默认 0 = 原生）+ 骑行行纵向
//   （头像钉行顶+depth、气泡顶钉头像底+14 靠边钻入；mmAvatarRide）。
// 位置输入 = mmAvatarOffset（头像，±60 钳位）+ mmWholeOffset
//   （整列含昵称，±20 钳位），正=向屏幕边缘，收发镜像（按原生头像 x>W/2 判侧，不查联系人）；
//   骑行 = XOS 标杆形态：泡整体钻到头像正下方（cont 收−52/自+50 靠边，视觉泡体缘=头像缘）+ 泡顶钉头像底+14
//   纵向分离（v2 的重叠根因是泡顶 25 与头像共存，非钻入本身）。行高只归 measure 层，渲染层只挪 x/y。
// 失效检测（项目定论）：首过缓存原生基准帧；当前值 ≠ 基准+上轮 delta → 原生已重摆
//   （cell 复用/重布局），以当前值为新基准——裸相对位移在 native 不重置 frame 的视图上
//   逐轮累加会把头像推出屏外（9→270 实证）。总开关关闭 = delta 归零，同机制自动还原。
static void *kOLBaseHeadF = &kOLBaseHeadF;
static void *kOLBaseBubF  = &kOLBaseBubF;
static void *kOLBaseNameX = &kOLBaseNameX;
static void *kOLBaseRefF  = &kOLBaseRefF;
static void *kOLLastDH    = &kOLLastDH;
static void *kOLLastDC    = &kOLLastDC;
static void *kOLLastDY    = &kOLLastDY;
static void *kOLLastDN    = &kOLLastDN;
static void *kOLLastDRX   = &kOLLastDRX;
static void *kOLLastDRY   = &kOLLastDRY;

static double olClamp(double v, double lim) {
    return v > lim ? lim : (v < -lim ? -lim : v);
}

// —— 骑行形态（XOS 标杆截图 2026-10-18：泡整体在头像正下方、泡边缘=头像边缘
// （靠边），泡顶在头像底下方，纵向与头像完全分离零重叠；装机演进定论）——
// 头像钉行顶（不出行），气泡顶 = 头像底(45)+14 = 头像顶+57；泡随 cont ±44 钻入
// 使泡边缘对齐头像边缘（探针实证钻入 44 后左泡左缘=头像左缘 12/右泡右缘=头像右缘
// 381，量准）。v2 的错不在钻入而在泡顶 25 与头像共存 20pt（头像压着泡区→文字钻到
// 头像底下+泡 z 序盖头像）；泡顶 59 分离后，文字顶 69+ 恒在头像底下，钻入安全。
// 泡下移量由行高全额补足（rideAdd = 下移量，底部空白保原生）。
// （2026-10-18 探针定论：不可抵扣本行底部空白——那块空白是组内行间距的来源，抵扣=
// 骑行偷间距，实测骑行行泡底溢出行底 9.7pt 压进下一行；与 mmSpacing/mmHeightReduce
// 叠加时 reduce 收的是同一块空白，必叠泡。全额补高后骑行行底部空白与原生一致，
// reduce 在骑行/非骑行行均匀生效，两功能叠加间距不出错。）
static const double olRideLift = 57.0;   // 头像顶→气泡顶抬升（XOS 标杆图 2026-10-18 实测泡顶=头像顶+57；57=头像高43+底间隙14）

static void applyOwnLayout(id cellView, BOOL active, BOOL headVisible, MOMergePosition pos, BOOL rideOK) {
    @try { [MsgMergeDebugHud syncVisible]; } @catch (NSException *e) {}   // 调试悬浮窗显隐（异常不进布局路径）
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

    // 首过建基准（此刻原生 layoutSubviews 刚跑完，frame 为原生值）
    NSValue *bHeadV = objc_getAssociatedObject(cellView, kOLBaseHeadF);
    if (!bHeadV) {
        bHeadV = [NSValue valueWithCGRect:head.frame];
        objc_setAssociatedObject(cellView, kOLBaseHeadF, bHeadV, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(cellView, kOLBaseBubF, [NSValue valueWithCGRect:cont.frame], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(cellView, kOLLastDH, @(0), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(cellView, kOLLastDC, @(0), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(cellView, kOLLastDY, @(0), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        // [BG-DUMP] cont 全子视图清单（白泡真身定位；bg 实证为空容器占位）
        static NSInteger sBgdumpCnt = 0;
        if (sBgdumpCnt < 6) {
            sBgdumpCnt++;
            NSMutableString *d = [NSMutableString stringWithFormat:
                @"[BG-DUMP] %@ head %@ | cont=%@ %@ subs:",
                NSStringFromClass([cellView class]),
                NSStringFromCGRect(head.frame),
                NSStringFromClass([cont class]),
                NSStringFromCGRect(cont.frame)];
            for (UIView *sv in cont.subviews) {
                UIImage *si = ([sv isKindOfClass:[UIImageView class]] ? [(UIImageView *)sv image] : nil);
                [d appendFormat:@" %@%@%@", NSStringFromClass([sv class]),
                    ([sv isKindOfClass:[UIImageView class]] && !sv.isHidden) ? @"*" : @"",
                    [NSString stringWithFormat:@"(%g,%g %gx%g%@)",
                        sv.frame.origin.x, sv.frame.origin.y, sv.frame.size.width, sv.frame.size.height,
                        si ? [NSString stringWithFormat:@" img%gx%g", si.size.width, si.size.height] : @""]];
            }
            WPLog(@"MsgMerge", @"%@", d);
        }
    }
    CGRect bHead = [bHeadV CGRectValue];
    CGRect bBub  = [(NSValue *)objc_getAssociatedObject(cellView, kOLBaseBubF) CGRectValue];
    double lastDH = [(NSNumber *)objc_getAssociatedObject(cellView, kOLLastDH) doubleValue];
    double lastDC = [(NSNumber *)objc_getAssociatedObject(cellView, kOLLastDC) doubleValue];
    double lastDY = [(NSNumber *)objc_getAssociatedObject(cellView, kOLLastDY) doubleValue];

    // 失效检测：位置或尺寸偏离 基准+上轮delta → 原生已重摆（复用/重布局），重置基准。
    // cont y 已纳入管理（骑行头行行内下移），按 基准+lastDY 检测。
    if (fabs(head.frame.origin.x - (bHead.origin.x + lastDH)) > 0.5 ||
        fabs(head.frame.size.width - bHead.size.width) > 0.5 ||
        fabs(cont.frame.origin.x - (bBub.origin.x + lastDC)) > 0.5 ||
        fabs(cont.frame.origin.y - (bBub.origin.y + lastDY)) > 0.5 ||
        fabs(cont.frame.size.width - bBub.size.width) > 0.5) {
        bHead = head.frame;
        bBub = cont.frame;
        lastDH = 0;
        lastDC = 0;
        lastDY = 0;
        objc_setAssociatedObject(cellView, kOLBaseHeadF, [NSValue valueWithCGRect:bHead], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(cellView, kOLBaseBubF, [NSValue valueWithCGRect:bBub], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(cellView, kOLLastDY, @(0), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
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
    CGFloat W = ((UIView *)cellView).bounds.size.width;
    double sign = (bHead.origin.x > W * 0.5) ? 1.0 : -1.0;
    MsgMergeConfig *cfg = [MsgMergeConfig shared];
    if (active) {
        newDH = sign * (olClamp(cfg.mmAvatarOffset, 60) + olClamp(cfg.mmWholeOffset, 20));
        newDC = sign * olClamp(cfg.mmWholeOffset, 20);
    }
    // XOS 标杆形态（截图 2026-10-18）：泡整体在头像正下方、视觉泡体缘=头像边缘（靠边），
    //   泡顶在头像底下方（olRideLift=58 纵向分离零重叠）。泡图素材自带透明边距（bg frame
    //   比视觉泡体宽），对齐基准必须用视觉泡体缘而非 bg frame；素材 pad 收方左 4.8 /
    //   自发右 3.2 不对称（截图量测 2026-10-19）。
    if (cfg.mmAvatarRide && active) {
        // 组内全行钻入：视觉泡体缘=头像缘（用户定论 2026-10-19：对齐的是泡图素材内的
        // 真实泡体，不是容器——素材含透明边）。量配置化（mmRideDiveRecv/Send，向屏内
        // 正值），悬浮调试窗（mmRideDebug）实时精调。默认 recv=52/send=0 = 8bf92bf3
        // 稳定版实测行为（收方泡体缘贴头像缘、自发原生已贴边不钻）。
        newDC += (sign < 0 ? -olClamp(cfg.mmRideDiveRecv, 80) : -olClamp(cfg.mmRideDiveSend, 80));
    }
    BOOL rideTop = (cfg.mmAvatarRide && active && headVisible && rideOK);
    // XOS 组首头像构图微调（8.0.60 探针实测：组首 (12,4)/自发 (338,4) vs 组内原生
    // (9,2)/(341,2)——向屏内 3pt、向下 2pt，所有类型一致）。★★必须并入记账：
    // 写帧 delta = newDH+tuneX / depth+tuneY，失效检测按同口径比对——若只写帧不记账，
    // 检测每轮发现差一个微调量 → 误判"原生重摆"重置基准 → 微调逐轮累加发散
    // （探针实证 76afa41f：头像每轮 -3/+2 漂移、泡连带每轮 +50/轮 跑飞）。
    double tuneX = 0.0, tuneY = 0.0;
    if (active && rideOK) { tuneX = -sign * 3.0; tuneY = 2.0; }
    if (fabs(newDH + tuneX - lastDH) > 0.01 || rideTop) {
        CGRect f = bHead;
        f.origin.x += newDH + tuneX;
        if (cfg.mmAvatarRide && headVisible) {
            // 骑行头行：头像钉行顶（XOS 探针实测 y≈+2，不出行→绝不与上一行 cell
            // 重叠）+depth 整体下沉+tuneY；切片行（泡体无缝）/非接管类型：+2 轻咬合
            f.origin.y = (active && rideOK) ? (bHead.origin.y + olClamp(cfg.mmAvatarRideDepth, 100) + tuneY) : (f.origin.y + 2.0);
        }
        head.frame = f;
        // 昵称跟随（XOS 同款：原生布局本就把昵称排在头像右侧锚点（头像右+8/顶+4，
        // 探针实证 63,6），天然绑定即终态——默认态（depth=0 且无横移）对昵称零干预；
        // 仅当头像偏离原生锚点（depth/横移配置）导致期望位与原生位不一致时才显式写帧
        // 跟随。lastDN 照记，供切回非骑行行时还原路径使用。）
        if (rideTop && lb) {
            CGRect nf = lb.frame;
            double wx = f.origin.x + f.size.width + 8.0;
            double wy = f.origin.y + 2.0;   // XOS 标杆图：昵称与头像顶几乎齐平（+2pt），原生锚点 +4 偏低
            if (fabs(wx - nf.origin.x) > 0.5 || fabs(wy - nf.origin.y) > 0.5) {
                nf.origin.x = wx;
                nf.origin.y = wy;
                lb.frame = nf;
            }
            objc_setAssociatedObject(cellView, kOLLastDN, @(newDC), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        }
        objc_setAssociatedObject(cellView, kOLLastDH, @(newDH + tuneX), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    // cont 纵向：气泡顶统一钉到 头像底+14（=头像顶+57，XOS 标杆：泡在头像正下方
    // 纵向分离；原生两基线 16/5 拉平→左右恒对称）；行高差额由 measure 全额补足。
    // lastDY 增量管理：开关翻转/复用自动还原
    double newDY = 0.0;
    if (rideTop) {
        newDY = bHead.origin.y + olRideLift + olClamp(cfg.mmAvatarRideDepth, 100) - bBub.origin.y;
        if (newDY < 0.0) newDY = 0.0;
    }
    if (fabs(newDC - lastDC) > 0.01 || fabs(newDY - lastDY) > 0.01) {
        CGRect f = bBub;
        f.origin.x += newDC;
        f.origin.y += newDY;
        cont.frame = f;
        objc_setAssociatedObject(cellView, kOLLastDC, @(newDC), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(cellView, kOLLastDY, @(newDY), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        if (lb && !rideTop && fabs(newDC - lastDN) > 0.01) {
            CGRect nf = lb.frame;
            nf.origin.x = baseNameX + newDC;
            lb.frame = nf;
            objc_setAssociatedObject(cellView, kOLLastDN, @(newDC), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        }
    }
    // 引用条跟随（MMInputMsgReferView 是 mcv 直接子视图，不随泡容器走）：原生按泡原生
    // 基准摆位（探针 2026-10-19 实证：原生泡底+4 处 y=57，与泡左对齐 x=61），骑行把泡
    // 钉到 头像顶+57 后引用条留在原地压进泡体（重叠 219×28，引用消息渲染撕裂）。
    // 跟随 = 与 cont 完全同量位移（newDC/newDY），随泡贴引用条保持原生间距。发现走
    // 子视图遍历（无已知 getter，防懒建不直调）；基准+失效检测+记账同口径（head/cont
    // 同款——native 每轮把引用条重摆回原生位，靠检测+重写站住）；无此类/无此子视图
    // （非引用消息）零开销幂等。
    static Class s_refCls = nil;
    static dispatch_once_t onceRef;
    dispatch_once(&onceRef, ^{ s_refCls = objc_getClass("MMInputMsgReferView"); });
    if (s_refCls) {
        UIView *refer = nil;
        for (UIView *sv in ((UIView *)cellView).subviews) {
            if ([sv isKindOfClass:s_refCls]) { refer = sv; break; }
        }
        if ([refer isKindOfClass:[UIView class]]) {
            NSValue *bRefV = objc_getAssociatedObject(cellView, kOLBaseRefF);
            double lastDRX = [(NSNumber *)objc_getAssociatedObject(cellView, kOLLastDRX) doubleValue];
            double lastDRY = [(NSNumber *)objc_getAssociatedObject(cellView, kOLLastDRY) doubleValue];
            if (!bRefV) {
                bRefV = [NSValue valueWithCGRect:refer.frame];
                objc_setAssociatedObject(cellView, kOLBaseRefF, bRefV, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                objc_setAssociatedObject(cellView, kOLLastDRX, @(0), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                objc_setAssociatedObject(cellView, kOLLastDRY, @(0), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                lastDRX = 0;
                lastDRY = 0;
            }
            CGRect bRef = [bRefV CGRectValue];
            if (fabs(refer.frame.origin.x - (bRef.origin.x + lastDRX)) > 0.5 ||
                fabs(refer.frame.origin.y - (bRef.origin.y + lastDRY)) > 0.5) {
                bRef = refer.frame;   // 原生已重摆（复用/重布局），以当前值为新基准
                lastDRX = 0;
                lastDRY = 0;
                objc_setAssociatedObject(cellView, kOLBaseRefF, [NSValue valueWithCGRect:bRef], OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            }
            if (fabs(newDC - lastDRX) > 0.01 || fabs(newDY - lastDRY) > 0.01) {
                CGRect f = bRef;
                f.origin.x += newDC;
                f.origin.y += newDY;
                refer.frame = f;
                objc_setAssociatedObject(cellView, kOLLastDRX, @(newDC), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
                objc_setAssociatedObject(cellView, kOLLastDRY, @(newDY), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
            }
        }
    }
}

// —— 长文本切片角色 ——
// 长文本切片的角色由 vm 自身 ivar `_splitPosition`（Q 类型）提供：0=整条未切片 /
// 1=首片 / 2=中片 / 3=末片（探针 #34 实证：10 行消息拆 3 片行高 95/80/62，三片
// split=1/2/3、_startHeight 递进；中片行高=内容高接缝 0 空隙，末片才含底部空白——
// 只有 split∈{0,3} 的行高里有可安全吃掉的间隙）。节点数组一条消息只有 1 个节点
//（切片是表格内部展开的），不能从数组推切片结构。
static unsigned long long vmSplitPosition(id vm) {
    static Ivar iv = nil;
    if (!iv) iv = class_getInstanceVariable(object_getClass(vm), "_splitPosition");
    if (!iv) return 0;
    return *(unsigned long long *)((char *)(__bridge void *)vm + ivar_getOffset(iv));
}

// —— 合并渲染应用（layoutSubviews 钩调）——

static void applyMergeToCellView(id cellView) {
    @try {
        MsgMergeConfig *cfg = [MsgMergeConfig shared];

        // 功能关闭：还原此前触碰过的 cell，然后不干预
        if (!cfg.mmEnable) {
            if (isTouched(cellView)) {
                UIImageView *bg = safeCall(cellView, "getBgImageView");
                if ([bg isKindOfClass:[UIImageView class]]) restoreCorner(bg);
                markTouched(cellView);  // 保持标记，防止重复还原开销（幂等）
            }
            applyOwnLayout(cellView, NO, NO, MOMergePositionNone, NO);   // 布局接管残留还原（delta 归零路径，无缓存则幂等空转）
            return;
        }

        id viewModel = safeKVC(cellView, @"viewModel");
        if (!viewModel) return;
        id wrap = safeKVC(viewModel, @"messageWrap");

        // 无 messageWrap = 时间行等辅助节点：渲染层零干预（BubbleBox 同款，
        // 时间行按原生显示）
        if (!wrap) return;

        NSString *chat = chatNameOfWrap(wrap) ?: currentChatName();
        if (chat.length == 0) return;

        MOMergePosition pos = flagsPos(viewModel);
        BOOL isFirst = (pos == MOMergePositionFirst || pos == MOMergePositionSingle);
        BOOL isLast  = (pos == MOMergePositionLast  || pos == MOMergePositionSingle);
        // 头像可见性判定（与 ① 显隐钩同源同值）：作为骑行门控传入 applyOwnLayout，
        // 避免布局函数里二次查表；mmAvatarPos 非 0/1 时显隐钩不干预，骑行也不生效
        BOOL headVisible = NO;
        if (cfg.mmAvatarPos == 0 || cfg.mmAvatarPos == 1) {
            headVisible = (cfg.mmAvatarPos == 0) ? isFirst : isLast;
        }

        // 布局接管：进组类型横向自摆（结构防御靠 applyOwnLayout 取数兜底：head/cont
        // 取不到直接 return，不瞎挪）。必须在 pos=None 早退之前——mmSepMedia 开启时
        // 媒体消息充当分隔符（标志为 None），早退会饿死媒体自摆（实证：图片/视频偏移
        // 无效）。分隔符行 pos=None → headVisible=NO，自摆生效但骑行不生效（独立打断
        // 行不属于合并组，无骑可言）。
        // （旧类型白名单 olTypeEnabled 已删：合并每支持新类型就得手动加白名单，
        // 通话 t=50 漏加导致骑行不生效——根治 = 进组即接管 + 取数兜底。）
        // 骑行门控：整条消息（split==0）才可悬空+扩行——切片行泡体无缝，扩行必裂缝、
        // 悬空必与上一行重叠（measure 层同门控，两侧一致）
        unsigned long long split = vmSplitPosition(viewModel);
        applyOwnLayout(cellView, YES, headVisible, pos, split == 0);

        // 骑气泡：写帧必须晚于 applyOwnLayout（其 x 写帧基于原生基准重建 frame，
        // y 取原生值，先写骑行 y 会被它抹掉）。挂 layoutSubviews 后（XOS 同款）
        // 本函数整体在原生布局链最终提交点之后执行——同步写帧天然站住，无后续
        // 覆盖。侧判定（XOS 真身双开关之一）：只骑头像在左半屏的行（对方侧）——
        if (pos == MOMergePositionNone) return;   // 组外/标志缺席：不干预渲染

        markTouched(cellView);

        // ① 头像显隐（0=消息头/组首显示，1=消息尾/组尾显示；headVisible 与骑行门控同源）
        if (cfg.mmAvatarPos == 0 || cfg.mmAvatarPos == 1) {
            id head = safeCall(cellView, "getHeadImageView");
            if ([head isKindOfClass:[UIView class]]) [(UIView *)head setHidden:!headVisible];
        }

        // ② 气泡背景圆角连续化（独立消息还原原值）。
        // 群昵称显隐不再由渲染层干预——昵称判定钩（常驻）翻转后原生按无昵称行
        // 测量+布局，渲染层 hidden 已冗余。
        UIImageView *bg = safeCall(cellView, "getBgImageView");
        if ([bg isKindOfClass:[UIImageView class]]) {
            applyCorner(bg, pos);
        }
    } @catch (NSException *e) {
        WPLog(@"MsgMerge", @"[Apply] exception: %@", e.reason);
    }
}

// ============================================================
// MARK: - 事件垫片（转发 orig + 触发对应层动作）
// ============================================================

// —— BaseMsgContentViewController：会话跟踪与保鲜触发 ——

static void repl_BaseMsgContentVC_viewDidLoad(id self, SEL _cmd) {
    // 数据先行（BubbleBox 时机对齐）：索引在微信首屏建表之前就位——orig 之后
    // 刷新会错过首屏首测（None 窗口=进聊天闪/骑行失效的根源）。
    // findChatTableView 有 isViewLoaded 守卫，此刻触发表查找安全空转不递归。
    // updateChatContext 零服务总线依赖（BubbleBox 原版机制，不调 GetContact），
    // 任何时机安全——8.0.79 GetContact 走 NSInvocation 服务转发链会撞 mmcronet
    // 网络 once 等待链 → scene-update watchdog SIGKILL（IPS 实证，已根除）。
    updateChatContext(self);
    ((void (*)(id, SEL))orig_BaseMsgContentVC_viewDidLoad)(self, _cmd);
    // 定位锚点：本日志出现 = 聊天页 viewDidLoad 垫片完整跑完（卡死判别用：
    // 停在本行之前 = 卡在微信自身 viewDidLoad；之后无 [Model] = 卡在测量链）
    WPLog(@"MsgMerge", @"[Ctx] chatVC viewDidLoad done");
}

static void repl_BaseMsgContentVC_viewWillAppear(id self, SEL _cmd, BOOL animated) {
    ((void (*)(id, SEL, BOOL))orig_BaseMsgContentVC_viewWillAppear)(self, _cmd, animated);
    updateChatContext(self);
    // 洗掉旧开关状态/上一会话遗留的固化行高值，保证首测前缓存干净
    //（首测判定走查表，正确性由模型保证；这里只负责清旧值）
    MsgMergeConfig *cfg = [MsgMergeConfig shared];
    if (cfg.mmEnable) resetAllMeasureCaches();
}

// 建表期判定固化兜底：历史行的行高只在建表期被问一次，若模型首次重建时渲染
// 数组尚未就绪（刚进聊天数组未加载完，实证常态），错判定固化——UITableView
// 不会对已建好的行重询行高。didAppear 落定后延迟主动重建 + begin/endUpdates
// 强制全表重询，行高无差异时无动画。
// 注意 begin/endUpdates 只允许出现在这里（进会话静默窗口，微信建表管线已
// 消费完，三轮探针实证 crash 类只发生在消息到达时刻的语音管线期间）；
// mergeDoReload（消息路径）绝不碰表格。
static void mergeFindTable(UIView *v, int depth, UITableView **out) {
    if (!v || *out || depth > 6) return;
    if ([v isKindOfClass:[UITableView class]]) { *out = (UITableView *)v; return; }
    for (UIView *sub in v.subviews) mergeFindTable(sub, depth + 1, out);
}

// —— 首屏数据驱动补询状态（微信数据落地时机不定，固定延迟保险丝会输给晚到数据）——
static CFAbsoluteTime g_entryTick = 0;       // 进页时刻（viewDidAppear 刷新）
static BOOL g_userScrolled = NO;             // 用户手动滚动过 → 补询窗口关闭
static NSUInteger g_fuseGen = 0;             // 去抖代际
static NSUInteger g_fuseCount = 0;           // 本次进页补询次数（上限 3）
static BOOL g_fuseSnap = NO;                 // 贴底快照已取
static BOOL g_fuseAtBottom = NO;             // 进页贴底快照

// 补询执行：同步清测量缓存 + begin/endUpdates 强制全表重询 + 贴底重锚。
// begin/endUpdates 安全性同 appear 保险丝（进会话静默窗口；收发管线由调用侧
// 1.5s 避让与 @try 共同防）。
static void mergeFuseFire(void) {
    if (!g_curChatVC) return;
    UIViewController *vc = g_curChatVC;
    UITableView *tbl = nil;
    mergeFindTable(vc.view, 0, &tbl);
    if (!tbl) return;
    @try {
        resetAllMeasureCaches();
        [tbl layoutIfNeeded];
        [tbl beginUpdates];
        [tbl endUpdates];
        g_fuseCount++;
        if (g_fuseAtBottom) {
            double target = tbl.contentSize.height - tbl.bounds.size.height
                          + tbl.adjustedContentInset.bottom;
            if (target > 0 && fabs(tbl.contentOffset.y - target) > 1.0) {
                [tbl setContentOffset:CGPointMake(0, target) animated:NO];
            }
        }
    } @catch (NSException *e) {
        WPLog(@"MsgMerge", @"[Ctx] 数据补询 begin/end clash: %@", e.reason);
    }
}

// measure 实际改高时去抖 0.4s 补询（首屏截断根治，2026-10-19 探针实证）：微信聊天
// 数据落地时机不定（DB/网络，同一进页动作 measure 爆发相对 viewDidAppear+0.2s 可
// 漂移 5s+），固定延迟保险丝与晚到数据赛跑必输——晚到的骑行补高无人重询，微信
// 锚底仍用旧 contentSize，底行被输入栏截断。改为改高测量自身触发：数据何时落地
// 就何时补询。窗口=进页 10s 内且用户未手动滚动（isDragging/isDecelerating 判定，
// 程序性 setContentOffset 不算）；距最近收发消息 ≥1.5s（语音管线期间 begin/
// endUpdates 崩溃定论，撞上则顺延 1s）；上限 3 次（防「补询→重询→再调度」自激励
// 循环）；贴底快照取首次改高时刻（此时微信锚底尚未消费新行高）。
static void mergeScheduleDataFuse(void) {
    if (![NSThread isMainThread]) return;
    CFAbsoluteTime now = CFAbsoluteTimeGetCurrent();
    if (g_entryTick <= 0 || now - g_entryTick > 10.0) return;
    if (g_userScrolled) return;
    if (g_lastAddMsgTick > 0 && now - g_lastAddMsgTick < 1.5) return;
    if (g_fuseCount >= 3) return;
    if (!g_fuseSnap) {
        g_fuseSnap = YES;
        UITableView *tbl = nil;
        if (g_curChatVC) mergeFindTable(g_curChatVC.view, 0, &tbl);
        if (tbl) {
            double offY = tbl.contentOffset.y;
            double bottom = tbl.contentSize.height - tbl.bounds.size.height
                          + tbl.adjustedContentInset.bottom;
            g_fuseAtBottom = (bottom <= 0) || (offY >= bottom - 80.0);
        }
    }
    NSUInteger myGen = ++g_fuseGen;
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.4 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        if (myGen != g_fuseGen) return;   // 被更新的改高测量取代（去抖）
        if (g_userScrolled) return;
        CFAbsoluteTime now2 = CFAbsoluteTimeGetCurrent();
        if (g_lastAddMsgTick > 0 && now2 - g_lastAddMsgTick < 1.5) {
            NSUInteger g2 = ++g_fuseGen;
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.0 * NSEC_PER_SEC)),
                           dispatch_get_main_queue(), ^{
                if (g2 != g_fuseGen) return;
                mergeFuseFire();
            });
            return;
        }
        mergeFuseFire();
    });
}

// 聊天表 reloadData 首测前置（首屏固化根治，2026-10-19）：微信行变更全走 reloadData
// （本项目定论），被调时节点数组必然就位（reload 就是要渲染这些节点）——此刻同步
// 重建索引，行高首测与首帧渲染的标志必就位。根治后 viewDidAppear 0.2s 补救退化为
// 保险丝（微信原生锚底不再撞上行高补差落地，底行截断从源头消失）。
// 守卫：只认当前聊天页的表（delegate 直比，视图树确认兜底），其它表格直通零成本。
static void repl_UITableView_reloadData(UITableView *self, SEL _cmd) {
    @try {
        if (g_curChatVC && g_currentNodeArray.count > 0) {
            BOOL isChatTbl = (self.delegate == (id)g_curChatVC);
            if (!isChatTbl) {
                UITableView *tbl = nil;
                mergeFindTable(g_curChatVC.view, 0, &tbl);
                isChatTbl = (tbl == self);
            }
            if (isChatTbl) refreshAndApplyFromContext();
        }
    } @catch (NSException *e) {
        WPLog(@"MsgMerge", @"[Ctx] reloadData 前置刷新异常: %@", e.reason);
    }
    if (orig_UITableView_reloadData) {
        ((void (*)(id, SEL))orig_UITableView_reloadData)(self, _cmd);
    }
}

static void repl_BaseMsgContentVC_viewDidAppear(id self, SEL _cmd, BOOL animated) {
    ((void (*)(id, SEL, BOOL))orig_BaseMsgContentVC_viewDidAppear)(self, _cmd, animated);
    @try {
        MsgMergeConfig *cfg = [MsgMergeConfig shared];
        if (!cfg.mmEnable) return;
        if (self != g_curChatVC) return;
        // 数据驱动补询窗口开启（详见 mergeScheduleDataFuse 注释）
        g_entryTick = CFAbsoluteTimeGetCurrent();
        g_userScrolled = NO;
        g_fuseSnap = NO;
        g_fuseCount = 0;
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
                // 首屏贴底重锚（截图 2026-10-19 实证）：微信原生锚底发生在行高补差
                // （rideAdd/reduce）落地之前，补差后 contentSize 增长把锚点以下内容
                // 整体下推 → 底行泡被输入栏截断。补差前记贴底状态，补差后按原状态
                // 重锚（中途用户已滚动/搜索定位进入则不动）。
                double offY0 = tbl.contentOffset.y;
                double bottom0 = tbl.contentSize.height - tbl.bounds.size.height
                               + tbl.adjustedContentInset.bottom;
                BOOL atBottom = (bottom0 <= 0) || (offY0 >= bottom0 - 80.0);
                resetAllMeasureCaches();       // 同步清缓存（mergeDoReload 的异步版赶不上下方重询）
                [tbl layoutIfNeeded];
                [tbl beginUpdates];
                [tbl endUpdates];
                if (atBottom) {
                    double target = tbl.contentSize.height - tbl.bounds.size.height
                                  + tbl.adjustedContentInset.bottom;
                    if (target > 0 && fabs(tbl.contentOffset.y - target) > 1.0) {
                        [tbl setContentOffset:CGPointMake(0, target) animated:NO];
                    }
                }
            } @catch (NSException *e) {
                WPLog(@"MsgMerge", @"[Ctx] appear begin/end clash: %@", e.reason);
            }
        });
    } @catch (NSException *e) {
        WPLog(@"MsgMerge", @"[Ctx] viewDidAppear exception: %@", e.reason);
    }
}

// 滚动驱动保鲜（BubbleBox scheduleUpdateNodes:scroll: 同款触发源）：滚动时限频
// 100ms 跑索引增量刷新（屏上 fill + 历史预扩，数据先行无可见动作）；新 lid 不计
// changed，滚动场景可见刷新恒 0 触发——永不跳动。
static void repl_BMCVC_scrollViewDidScroll(id self, SEL _cmd, id scrollView) {
    if (orig_BMCVC_scrollViewDidScroll) {
        ((void (*)(id, SEL, id))orig_BMCVC_scrollViewDidScroll)(self, _cmd, scrollView);
    }
    @try {
        // 用户手动滚动判定（isDragging/isDecelerating：程序性 setContentOffset 不算）
        if (scrollView) {
            BOOL drag = ((BOOL (*)(id, SEL))objc_msgSend)(scrollView, @selector(isDragging))
                     || ((BOOL (*)(id, SEL))objc_msgSend)(scrollView, @selector(isDecelerating));
            if (drag) g_userScrolled = YES;
        }
        MsgMergeConfig *cfg = [MsgMergeConfig shared];
        if (!cfg.mmEnable) return;
        if (self != g_curChatVC) return;   // 非当前聊天页的滚动不干预
        double now = [NSDate timeIntervalSinceReferenceDate];
        if (now - g_lastScrollApply < 0.1) return;
        g_lastScrollApply = now;
        refreshAndApplyFromContext();
    } @catch (NSException *e) {
        WPLog(@"MsgMerge", @"[Scroll] exception: %@", e.reason);
    }
}

// —— CommonMessageViewModel：测量层接管 ——

// ------------------------------------------------------------
// -[CommonMessageViewModel measure:]（探针实证：CGSize 参数入 x2/x3，调用侧
// 传 {-1,-1} 无约束哨兵；MSHook + 同声明签名，编译器自动对齐 ABI）。orig 只当
// 排版工具，两项算术：
//   ① 骑行补高：气泡顶钉 头像底+14 后，泡下移量由行高全额补足（底部空白保原生，
//      组内间距不被骑行偷走，与②叠加均匀生效）
//   ② 组内行高缩减：非组尾消息测量高 −(mmSpacing+mmHeightReduce)（下限 24；
//      HeightReduce=XOS mesMsgMergeHeightReduce 同款：组内行高原生−该值）
// 昵称区不在此补偿——判定钩翻转让原生测量自动收缩（N 补偿链已删）。
// ------------------------------------------------------------
static CGSize repl_CMVM_measure(id self, SEL _cmd, CGSize sz) {
    // BubbleBox 同款直换 IMP：orig 全局唯一（公共基类单点，无按类分表）
    IMP o = orig_CMVM_measure;
    CGSize s = o ? ((CGSize (*)(id, SEL, CGSize))o)(self, _cmd, sz)
                 : CGSizeMake(sz.width, 0);
    static BOOL s_inMeasure = NO;
    if (s_inMeasure) return s;
    @try {
        MsgMergeConfig *cfg = [MsgMergeConfig shared];
        if (!cfg.mmEnable) return s;
        // 行高两项算术：① 骑行补高（气泡下移后底部空白不足的差额，仅无昵称行需要）
        // ② 组内行高缩减（XOS 同域两键合并：mmSpacing+mmHeightReduce，下限 24）
        double reduce = 0;
        if (cfg.mmSpacingMode == 1 && cfg.mmSpacing > 0) reduce += (double)cfg.mmSpacing;
        reduce += (double)cfg.mmHeightReduce;
        if (reduce <= 0 && !cfg.mmAvatarRide) return s;
        id wrap = safeKVC(self, @"messageWrap");
        if (!wrap) return s;   // 时间节点等无 wrap
        NSString *chat = chatNameOfWrap(wrap);
        if (chat.length == 0) chat = currentChatName();
        if (chat.length == 0) return s;
        s_inMeasure = YES;
        MOMergePosition pos = flagsPos(self);
        s_inMeasure = NO;
        if (pos == MOMergePositionNone) return s;   // 组外/标志缺席：原生直通
        unsigned long long split = vmSplitPosition(self);   // 0=整条 1=首片 2=中片 3=末片
        // ① 骑行补高：渲染层把气泡顶钉到 头像底(45)+14=头像顶+57（泡在头像正下方
        //    左右恒对称），泡下移量由行高全额补足（rideAdd = 下移量）。不可抵扣本行
        //    底部空白——那块空白是组内行间距的来源，抵扣=骑行偷间距（探针实证骑行行
        //    泡底溢出行底 9.7pt 压进下一行），与 reduce 叠加必叠泡；全额补高后骑行行
        //    底部空白与原生一致，reduce 均匀生效。切片行泡体无缝不扩（渲染层对切片行
        //    不做骑行 y）。
        double rideAdd = 0;
        if (cfg.mmAvatarRide && split == 0 &&
            (cfg.mmAvatarPos == 0 || cfg.mmAvatarPos == 1)) {
            BOOL headRow = (cfg.mmAvatarPos == 0)
                ? (pos == MOMergePositionFirst || pos == MOMergePositionSingle)
                : (pos == MOMergePositionLast  || pos == MOMergePositionSingle);
            if (headRow) {
                // 本行原生 cont 基线：群昵称行（chatroom+组首/Single+原生判定开）
                // y=16，否则 y=5。直调原生 orig 判定（与渲染层 bBub 实测同语义）
                BOOL nickRow = NO;
                if ([chat hasSuffix:@"@chatroom"] &&
                    (pos == MOMergePositionFirst || pos == MOMergePositionSingle) &&
                    orig_CMVM_isShowChatRoomDisplayName) {
                    nickRow = ((BOOL (*)(id, SEL))orig_CMVM_isShowChatRoomDisplayName)(
                        self, @selector(isShowChatRoomDisplayName));
                }
                double need = 2.0 + olRideLift + olClamp(cfg.mmAvatarRideDepth, 100) - (nickRow ? 16.0 : 5.0);
                rideAdd = need;   // 泡下移量全额补高（不抵扣底部空白，间距保原生）
                if (rideAdd < 0.0) rideAdd = 0.0;
            }
        }
        BOOL isTail = (pos == MOMergePositionLast || pos == MOMergePositionSingle);
        if (rideAdd <= 0 && isTail) return s;   // 组尾保原生（组尾到组外间隙不变）
        // 末片门控：首片/中片是无缝泡体——原生切片气泡底=片边界、续片 bgTop=0
        // 贴顶无让位，任何测量改动都让泡体溢出压进下一片（diag33 实锤同气泡自叠）。
        if (rideAdd <= 0 && split != 0 && split != 3) return s;
        double h = (double)s.height + rideAdd;
        if (!isTail) {
            h -= reduce;
            if (h < 24.0) h = 24.0;   // 下限 24 防裁切（缩减只吃底部空白）
        }
        if (fabs(h - (double)s.height) < 0.01) return s;
        mergeScheduleDataFuse();   // 改高即调度补询（数据驱动首屏修复，见函数注释）
        return CGSizeMake(s.width, (CGFloat)h);
    } @catch (NSException *e) {
        s_inMeasure = NO;
        WPLog(@"MsgMerge", @"[MMZ] measure exception: %@", e.reason);
    }
    return s;
}

// —— CommonMessageViewModel：昵称判定接管 ——

// ------------------------------------------------------------
// -[CommonMessageViewModel isShowChatRoomDisplayName]（常驻，XOS 同款挂点）：
// 组内非首条返 NO → 微信原生按「无昵称行」测量+布局：bgTop
// 16→5、行高自动回收昵称区（65→54）、切片泡体随 bgTop 上移零溢出。判定查表
//（flagsPos），与测量同链路同刻读表恒真，首测即正确无固化。
// 8.0.78 全部消息 viewModel 共用基类 IMP，单一挂点全覆盖。
// ------------------------------------------------------------
static BOOL repl_CMVM_isShowChatRoomDisplayName(id self, SEL _cmd) {
    static BOOL s_inJudge = NO;   // 重入守卫：垫片内再进入直接走原生（防任何递归风暴）
    IMP o = orig_CMVM_isShowChatRoomDisplayName;   // BubbleBox 同款：orig 全局唯一
    if (!o) return NO;
    BOOL origVal = ((BOOL (*)(id, SEL))o)(self, _cmd);
    if (s_inJudge) return origVal;
    @try {
        MsgMergeConfig *cfg = [MsgMergeConfig shared];
        if (!cfg.mmEnable) return origVal;
        if (!origVal) return origVal;   // 原生不显示，无需翻转
        // 非聊天页上下文（上会话残留测量）不干预——防跨会话 localID 误判
        if (!g_curChatVC) return origVal;
        id wrap = safeKVC(self, @"messageWrap");
        if (!wrap) return origVal;
        NSString *chat = chatNameOfWrap(wrap);
        if (chat.length == 0) chat = currentChatName();
        if (!(chat && [chat hasSuffix:@"@chatroom"])) return origVal;
        s_inJudge = YES;
        MOMergePosition pos = flagsPos(self);
        s_inJudge = NO;
        // 组内非首条（Middle/Last）返 NO → 原生按无昵称测量+布局自动回收昵称区
        if (pos == MOMergePositionMiddle || pos == MOMergePositionLast) return NO;
        return origVal;
    } @catch (NSException *e) {
        s_inJudge = NO;
        WPLog(@"MsgMerge", @"[NJ] exception: %@", e.reason);
        return origVal;
    }
}

// —— CommonMessageCellView：渲染应用 ——

// 骑气泡写帧已并入 applyOwnLayout（头像钉行顶、泡顶钉头像底+14、cont ±44 钻入靠边）。

// ------------------------------------------------------------
// -[CommonMessageCellView layoutSubviews]（XOS 同款挂点）：原生布局跑完后置应用。
// layoutSubviews 是 UIView 布局链最终提交点——垫片内同步写帧天然站住，无后续覆盖
// （此前 layoutInternal/updateNodeStatus 双路径 + 异步下一拍 + g_inLayoutInternal
// 旗标的整套对抗机制随迁移删除）。CommonMessageCellView 未实现该方法时 bbSwap
// 复制下沉（class_addMethod）后替换，父类（UIView）实现不受污染。
// ------------------------------------------------------------
static void repl_CMCellView_layoutSubviews(id self, SEL _cmd) {
    ((void (*)(id, SEL))orig_CMCellView_layoutSubviews)(self, _cmd);
    applyMergeToCellView(self);
}

// —— CMessageMgr：mgr 捕获 + 新消息入库联动 ——

// AddMsg:MsgWrap: = 收发总管道（94 号日志实证：自己发送不走 AsyncOnAddMsg，
// 不钩它则发出消息首测恒 miss → 原生帧固化）。与 AsyncOnAddMsg 收消息双触发，
// note 幂等去重。
// onServiceInit = MMBaseService 服务体系生命周期钩（CMessageMgr 自有方法，探针
// class_copyMethodList 实证；super chain CMessageMgr←MMUserService←MMBaseService）。
// 登录后服务树初始化即调——远早于首条消息，mgr 早捕获消灭冷启动窗口期
// （MioPlugin(100/101) 实证：AddMsg 管道捕获晚于首进聊天，首屏 entries=0）。
// 非查询路径+纯指针捕获，铁律合规。noteMessageManager 幂等（同 mgr 直接跳过）。
static void repl_CMMsgMgr_onServiceInit(id self, SEL _cmd) {
    [[BBMergeModel shared] noteMessageManager:self];
    ((void (*)(id, SEL))orig_CMMsgMgr_onServiceInit)(self, _cmd);
}

static void repl_CMMsgMgr_AddMsg(id self, SEL _cmd, id session, id wrap) {
    if ([[BBMergeModel shared] noteMessageManager:self]) {   // mgr 捕获（零新增 hook，查询栈零跳板）
        // 新捕获调度重算：冷启动首次进聊天 rebuild 先于 DB 就绪（entries=0 被
        // 幂等守卫锁死，MioPlugin(100) 实证「第二次进才合并」），异步出管道
        dispatch_async(dispatch_get_main_queue(), ^{ refreshAndApplyFromContext(); });
    }
    ((void (*)(id, SEL, id, id))orig_CMMsgMgr_AddMsg)(self, _cmd, session, wrap);
    @try {
        mmHandleIncomingMsg(session, wrap);
    } @catch (NSException *e) {
        WPLog(@"MsgMerge", @"[Ctx] AddMsg exception: %@", e.reason);
    }
}

static void repl_CMMsgMgr_AsyncOnAddMsg(id self, SEL _cmd, id session, id wrap) {
    if ([[BBMergeModel shared] noteMessageManager:self]) {   // mgr 捕获（零新增 hook，查询栈零跳板）
        // 同 AddMsg：新捕获异步重算，出管道执行
        dispatch_async(dispatch_get_main_queue(), ^{ refreshAndApplyFromContext(); });
    }
    ((void (*)(id, SEL, id, id))orig_CMMsgMgr_AsyncOnAddMsg)(self, _cmd, session, wrap);
    @try {
        mmHandleIncomingMsg(session, wrap);
    } @catch (NSException *e) {
        WPLog(@"MsgMerge", @"[Ctx] AsyncOnAddMsg exception: %@", e.reason);
    }
}

// ============================================================
// MARK: - 安装
// ============================================================

// dladdr 查 IMP 归属：被其他 dylib（如 WCR/XOS）占用则让位不挂（防互递归）
static BOOL impIsForeign(IMP cur) {
    Dl_info info;
    return cur && dladdr((void *)cur, &info) && info.dli_fname &&
           strstr(info.dli_fname, ".dylib") &&
           !strstr(info.dli_fname, "WeChat") && !strstr(info.dli_fname, "Mio");
}

// 【mgr 捕获点定论】捕获钩只能挂 AddMsg/AsyncOnAddMsg（self 即 CMessageMgr，
// 查询栈零跳板）——挂进查询路径 = MSHook trampoline 无 unwind info，异常展开
// 到跳板帧必 terminate（.ips 三轮崩溃实证）；插件查询直调不被 hook 的 4 参版
// GetMsg，全栈 FDE 完整，dbGetMsg 的 @try 可正常接住坏消息异常。
@implementation MsgMergeHook

+ (void)install {
    WPLog(@"MsgMerge", @"MsgMergeHook install");
    Class cls;

    // ① 会话上下文跟踪（BaseMsgContentViewController）
    cls = objc_getClass("BaseMsgContentViewController");
    if (cls) {
        orig_BaseMsgContentVC_viewDidLoad = bbSwap(cls, @selector(viewDidLoad),
                                                   (IMP)repl_BaseMsgContentVC_viewDidLoad,
                                                   "BaseMsgContentViewController");
        orig_BaseMsgContentVC_viewWillAppear = bbSwap(cls, @selector(viewWillAppear:),
                                                      (IMP)repl_BaseMsgContentVC_viewWillAppear,
                                                      "BaseMsgContentViewController");
        if ([cls instancesRespondToSelector:NSSelectorFromString(@"viewDidAppear:")]) {
            orig_BaseMsgContentVC_viewDidAppear = bbSwap(cls, NSSelectorFromString(@"viewDidAppear:"),
                                                         (IMP)repl_BaseMsgContentVC_viewDidAppear,
                                                         "BaseMsgContentViewController");
            WPLog(@"MsgMerge", @"[Hook] ✓ BaseMsgContentViewController viewDidAppear:");
        }
        WPLog(@"MsgMerge", @"[Hook] ✓ BaseMsgContentViewController viewDidLoad/viewWillAppear:");
    } else {
        WPLog(@"MsgMerge", @"[Hook] ✗ BaseMsgContentViewController not found");
    }

    // ①b 滚动驱动保鲜（BubbleBox scheduleUpdateNodes:scroll: 同款触发源）
    cls = objc_getClass("BaseMsgContentViewController");
    if (cls) {
        SEL selScroll = @selector(scrollViewDidScroll:);
        Method sm = class_getInstanceMethod(cls, selScroll);
        if (sm) {
            IMP cur = method_getImplementation(sm);
            if (impIsForeign(cur)) {
                Dl_info sinfo;
                dladdr((void *)cur, &sinfo);
                WPLog(@"MsgMerge", @"[Hook] ⊘ scrollViewDidScroll: 归属 %s，让位不挂",
                      sinfo.dli_fname ?: "?");
            } else {
                orig_BMCVC_scrollViewDidScroll = bbSwap(cls, selScroll,
                                                        (IMP)repl_BMCVC_scrollViewDidScroll,
                                                        "BaseMsgContentViewController");
                WPLog(@"MsgMerge", @"[Hook] ✓ BaseMsgContentViewController scrollViewDidScroll:（滚动驱动保鲜）");
            }
        } else {
            WPLog(@"MsgMerge", @"[Hook] ✗ BaseMsgContentViewController 无 scrollViewDidScroll:，滚动驱动不可用");
        }
    }

    // ①c 聊天表 reload 首测前置（首屏固化根治，见 repl_UITableView_reloadData 注释）。
    // impIsForeign 让位（reloadData 可能已被外挂 MSHook，链上不可靠），0.2s 补救兜底。
    {
        Class uicls = objc_getClass("UITableView");
        Method rm = uicls ? class_getInstanceMethod(uicls, @selector(reloadData)) : NULL;
        if (rm) {
            IMP cur = method_getImplementation(rm);
            if (impIsForeign(cur)) {
                WPLog(@"MsgMerge", @"[Hook] ⊘ UITableView reloadData 归属外挂，让位不挂（0.2s 补救兜底）");
            } else {
                orig_UITableView_reloadData = bbSwap(uicls, @selector(reloadData),
                                                     (IMP)repl_UITableView_reloadData,
                                                     "UITableView");
                WPLog(@"MsgMerge", @"[Hook] ✓ UITableView reloadData（聊天表首测前置）");
            }
        }
    }

    // ② 消息 cell 渲染钩子（CommonMessageCellView，XOS 同款 layoutSubviews 挂点）
    cls = objc_getClass("CommonMessageCellView");
    if (cls) {
        orig_CMCellView_layoutSubviews = bbSwap(cls, @selector(layoutSubviews),
                                                (IMP)repl_CMCellView_layoutSubviews,
                                                "CommonMessageCellView");
        WPLog(@"MsgMerge", @"[Hook] ✓ CommonMessageCellView layoutSubviews（渲染应用，XOS 同款）");
    } else {
        WPLog(@"MsgMerge", @"[Hook] ✗ CommonMessageCellView not found");
    }

    // ③ 测量层接管（BubbleBox 同款行高杠杆 + 同款挂法）：公共基类单点直换，
    //    零类扫描（按类扫描补挂是 WAApp 小程序闪退环宿主）。内层类型分派走
    //    repl 内 flagsPos 查表：pos=None/组尾/首中片直通，仅组尾前整条/末片
    //    收 mmSpacing——公共基类一钩天然覆盖全部消息类型。
    {
        SEL selMeasure = NSSelectorFromString(@"measure:");
        Class baseCls = objc_getClass("CommonMessageViewModel");
        if (baseCls && [baseCls instancesRespondToSelector:selMeasure]) {
            Method bm = class_getInstanceMethod(baseCls, selMeasure);
            IMP cur = bm ? method_getImplementation(bm) : NULL;
            if (impIsForeign(cur)) {
                Dl_info info;
                dladdr((void *)cur, &info);
                WPLog(@"MsgMerge", @"[Hook] ⊘ CommonMessageViewModel measure: 归属 %s，让位不挂",
                      info.dli_fname ?: "?");
            } else {
                orig_CMVM_measure = bbSwap(baseCls, selMeasure, (IMP)repl_CMVM_measure,
                                           "CommonMessageViewModel");
                WPLog(@"MsgMerge", @"[Hook] ✓ CommonMessageViewModel measure: (BubbleBox 直换)");
            }
        } else {
            WPLog(@"MsgMerge", @"[Hook] ✗ CommonMessageViewModel measure: not found");
        }
    }

    // ③b 昵称判定钩子（常驻，XOS 同款挂点）：公共基类
    //     单点直换，零类扫描。媒体重写类漏挂回归原生：媒体默认断组 pos 恒
    //     None，判定钩本就直通，无实际影响。
    {
        SEL selNick = NSSelectorFromString(@"isShowChatRoomDisplayName");
        Class baseCls = objc_getClass("CommonMessageViewModel");
        if (baseCls && [baseCls instancesRespondToSelector:selNick]) {
            Method m = class_getInstanceMethod(baseCls, selNick);
            IMP cur = m ? method_getImplementation(m) : NULL;
            if (impIsForeign(cur)) {
                Dl_info info;
                dladdr((void *)cur, &info);
                WPLog(@"MsgMerge", @"[Hook] ⊘ CommonMessageViewModel isShowChatRoomDisplayName 归属 %s，让位不挂",
                      info.dli_fname ?: "?");
            } else {
                orig_CMVM_isShowChatRoomDisplayName = bbSwap(baseCls, selNick,
                                                             (IMP)repl_CMVM_isShowChatRoomDisplayName,
                                                             "CommonMessageViewModel");
                WPLog(@"MsgMerge", @"[Hook] ✓ CommonMessageViewModel isShowChatRoomDisplayName (BubbleBox 直换)");
            }
        } else {
            WPLog(@"MsgMerge", @"[Hook] ✗ CommonMessageViewModel isShowChatRoomDisplayName not found");
        }
    }

    // ④ 新消息入库联动（mgr 捕获 + note 直写 + 重排轮询）
    cls = objc_getClass("CMessageMgr");
    // AddMsg:MsgWrap: = 收发总管道（94 号日志实证）。KeywordAlert/RedEnv 等成熟
    // 插件同钩佐证签名 (v@:@@)。与 AsyncOnAddMsg 收消息双触发，note 幂等去重。
    if (cls && [cls instancesRespondToSelector:NSSelectorFromString(@"AddMsg:MsgWrap:")]) {
        orig_CMMsgMgr_AddMsg = bbSwap(cls, NSSelectorFromString(@"AddMsg:MsgWrap:"),
                                      (IMP)repl_CMMsgMgr_AddMsg, "CMessageMgr");
        WPLog(@"MsgMerge", @"[Hook] ✓ CMessageMgr AddMsg:MsgWrap: (收发总管道)");
    } else {
        WPLog(@"MsgMerge", @"[Hook] ✗ CMessageMgr AddMsg:MsgWrap: not found");
    }
    if (cls && [cls instancesRespondToSelector:NSSelectorFromString(@"AsyncOnAddMsg:MsgWrap:")]) {
        orig_CMMsgMgr_AsyncOnAddMsg = bbSwap(cls, NSSelectorFromString(@"AsyncOnAddMsg:MsgWrap:"),
                                             (IMP)repl_CMMsgMgr_AsyncOnAddMsg, "CMessageMgr");
        WPLog(@"MsgMerge", @"[Hook] ✓ CMessageMgr AsyncOnAddMsg:MsgWrap:");
    } else {
        WPLog(@"MsgMerge", @"[Hook] ✗ CMessageMgr AsyncOnAddMsg not found");
    }
    // mgr 早捕获：onServiceInit（服务初始化，登录期必调，早于首条消息）
    if (cls && [cls instancesRespondToSelector:NSSelectorFromString(@"onServiceInit")]) {
        orig_CMMsgMgr_onServiceInit = bbSwap(cls, NSSelectorFromString(@"onServiceInit"),
                                             (IMP)repl_CMMsgMgr_onServiceInit, "CMessageMgr");
        WPLog(@"MsgMerge", @"[Hook] ✓ CMessageMgr onServiceInit (mgr 早捕获)");
    } else {
        WPLog(@"MsgMerge", @"[Hook] ✗ CMessageMgr onServiceInit not found");
    }

    WPLog(@"MsgMerge", @"MsgMergeHook install complete");
}

@end
