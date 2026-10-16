//
//  BBMergeModel.h
//  MioPlugin
//
//  消息合并独立模型（数据先行 · 增量索引 · DB 单路径）：
//  对齐 BubbleBox 数据先行架构——分组判定永远发生在微信建 vm/测量之前：
//  索引覆盖域 = 屏上 lid 渲染集合（refreshIndex 增量补建）+ 历史方向 DB 预扩
//  （extendHistorical，滚动加载的批次插入前 entries 已就位）。邻接判定全走
//  微信存储层（GetMsg:LocalID: ±1 步进跳已删空洞，BubbleBox findValidMsg 同构）；
//  UI 数组仅提供 lid 种子，不参与邻接判定。读侧（measure:/昵称判定/渲染/昵称
//  断供钩）按 wrap 的 localID 直接 O(1) 查索引（posForLocalID:）——模型即真相，
//  微信整批重建 vm 零影响；索引 miss 时 DB fill 同步兜底（测量返回前即正确）。
//
//  【禁止复活预写层】旧方案把分组位置用关联对象写到 vm 上，但 vm 生命周期
//  归微信管：进聊天/滚动时整批重建 vm 并立刻测量，预写标志随旧对象死亡 →
//  测量瞬间读 None → 原生样式闪回（89 号日志实证 17 条集体 None）。任何
//  预写+刷新都在和微信测量竞速，窗口永远存在；查表按 localID 建、跨 vm
//  重建恒真，vm 死活彻底无关。
//
//  刷新语义（BubbleBox scheduleUpdateNodes:scroll: 精髓——滚动中零可见变更）：
//  refreshIndex 返回的 changed 只统计「屏上已渲染 lid 的 pos 实变」（None→有值
//  或值翻转）；新 lid 进索引不计——微信建行首测查表即真，无需事后刷新，滚动
//  场景 changed 恒 0，永不跳动。时间行精准隐藏（见 shouldHideTimeVM:）。
//
//  refreshIndex 触发点（事件驱动）：切会话/进聊天/新消息轮询确认追加/滚动限频
//  （100ms）/读侧 None-miss 限频保鲜（0.15s）/配置指纹变化。幂等守卫防风暴。
//

#import <Foundation/Foundation.h>
#import "BBMergeEntry.h"

NS_ASSUME_NONNULL_BEGIN

@interface BBMergeModel : NSObject

+ (instancetype)shared;

/// 按 localID 查 entry
- (nullable BBMergeEntry *)entryForLocalID:(long long)lid;

/// 新消息入库直写（AddMsg/AsyncOnAddMsg 管道回调调，不等 UI 节点记账）：存储层
/// 即时判定新消息与 prev 的邻接并写入索引——微信建行首测即命中（BubbleBox
/// addNewMessage 管道内同步 merge: 同款时序）；之后的 refreshIndex 用同一套
/// shouldJoinDB 规则覆盖，无漂移
- (void)noteIncomingMsgLocalID:(long long)lid;

/// 合并判定唯一入口（DB 单路径）：身份相等 + 均可合并 + 均非分隔符/新邀请
/// + 299s 时间窗（BubbleBox isNeedInsertTimeNode 同语义）
+ (BOOL)shouldJoinDB:(id)wrapA wrapB:(id)wrapB;

/// 索引增量刷新（事件驱动触发点的唯一入口，幂等守卫：同数组/同会话/同配置
/// 指纹跳过；增量本体天然幂等——已覆盖 lid O(1) 跳过）：
///   ① 屏上无 entry 的 lid → DB fill 建 entry（含 None 负缓存）
///   ② 历史方向预扩：屏上最小 lid 向 −1 预建 ~32 条（数据先行，滚动批次到账
///      前 entries 已就位）
/// @param nodeArray 聊天 VC 的 m_arrMessageNodeData（仅提供屏上 lid 种子）
/// @param chatName  会话名（talker）
/// @return 屏上已渲染 lid 的 pos 实变数（0=无需可见刷新）
- (NSUInteger)refreshIndexWithNodeArray:(nullable NSArray *)nodeArray
                               chatName:(nullable NSString *)chatName;

/// 存储层实例捕获回调（MsgMergeHook 的 onServiceInit/AddMsg/AsyncOnAddMsg 钩调用，
/// self 即 CMessageMgr）。8.0.78 无单例访问器且 VC ivar 树 2 层内无其实例（探针实证）。
/// 【铁律】捕获点绝不能放在 GetMsg 查询簇上：MSHook trampoline 无 unwind info，
/// 查询踩坏消息抛异常展开到跳板帧必 terminate（.ips 三轮崩溃实证）；BubbleBox
/// 查 DB 不死正因其查询栈无自家跳板。捕获后供索引 miss 时按 localID 直查
/// 存储补邻接（插件直调不被 hook 的 4 参版，@try 可接坏消息异常）。
/// @return YES = 本次新捕获（此前 mgr 为 nil）——调用方应调度一次
/// refreshIndex：冷启动首次进聊天时索引先于 DB 就绪（fill 全部落空），
/// 新捕获必须失效守卫重算，否则该页永远停在"不合并"残局。
- (BOOL)noteMessageManager:(nullable id)mgr;

/// 失效 refreshIndex 幂等守卫（DB 新捕获时调用）：_lastArray/_lastCount 置空，
/// 下次刷新必然真正扫描。裸指针 ivar（无所有权），置 nil 零成本。
- (void)invalidateRebuildGuard;

/// 标志查询（O(1) 索引查表）：未覆盖/组外/不可合并/功能未激活 = None。
/// 所有钩子只读本方法，禁止查数组、禁止读 vm 关联对象。
/// 索引 miss 且存储层就绪时：按 localID 直查微信消息存储补邻接（DB fill 兜底，
/// 同步发生在测量返回之前），结果缓存进索引；存储不可用 = None。
- (MOMergePosition)posForLocalID:(long long)lid;

/// 当前配置是否与上次刷新时的分组配置指纹不一致（O(1)，读侧保鲜判断用）
- (BOOL)configFingerprintChanged;

/// 时间行隐藏判定（ChatTimeViewModel cellHeight 钩调用）：时间行夹在满足
/// shouldJoinDB 的两条消息之间 → cellHeight 归零（视觉等效「源头不插入」，
/// 数据层零改动；原生阈值更敏感的时间行保留）。集合 O(1) 命中（refreshIndex
/// 建表前重建）；miss 时现场扫 nodeArray 邻居判定并回填（滚动新批次窗口期
/// 兜底，时序无关恒正确）。
- (BOOL)shouldHideTimeVM:(nullable id)vm nodeArray:(nullable NSArray *)nodeArray;

/// 清空模型（切会话时调用，防跨会话 localID 撞号）
- (void)clear;

@end

NS_ASSUME_NONNULL_END
