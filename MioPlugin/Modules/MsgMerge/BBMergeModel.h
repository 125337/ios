//
//  BBMergeModel.h
//  MioPlugin
//
//  消息合并独立模型（查表架构 v5）：
//  分组结果在 rebuild 时一次性预计算（entries + localID→entry 索引）。
//  读侧（measure:/昵称判定/渲染/昵称断供钩）一律按 wrap 的 localID 直接
//  O(1) 查索引（posForLocalID:）——模型即真相，不依赖 vm 对象。
//
//  【为什么废弃预写层（89 号日志定论）】旧 BubbleBox 同构方案把分组位置用
//  关联对象写到 vm 上，但 vm 生命周期归微信管：进聊天/滚动时微信整批重建 vm
//  并立刻测量，预写标志随旧对象死亡、新对象还没被 apply 覆盖 → 测量瞬间读
//  None → 原生样式闪回（03:00:26 实证 17 条集体 None 后同秒自愈）。任何
//  预写+刷新都在和微信测量竞速，窗口永远存在。查表路线：索引按 localID 建、
//  跨 vm 重建恒真，测量瞬间查表即得正确值，vm 死活彻底无关。
//
//  rebuild 触发点（事件驱动）：切会话/进聊天/新消息轮询确认追加/滚动限频
//  （100ms）/读侧 None-miss 限频保鲜（0.5s）/配置指纹变化。幂等守卫防风暴。
//

#import <Foundation/Foundation.h>
#import "BBMergeEntry.h"

NS_ASSUME_NONNULL_BEGIN

@interface BBMergeModel : NSObject

/// 当前会话 entries（渲染顺序，只含可参与合并的消息；时间节点/分隔消息无 entry）
@property (nonatomic, copy) NSArray<BBMergeEntry *> *entries;

+ (instancetype)shared;

/// 按 localID 查 entry
- (nullable BBMergeEntry *)entryForLocalID:(long long)lid;

/// 两条消息是否满足合并条件（身份相等 + 均可合并 + 均非分隔符，纯函数）
+ (BOOL)shouldJoin:(id)wrapA wrapB:(id)wrapB;

// ------------------------------------------------------------
// 查表架构（v5）
// ------------------------------------------------------------

/// 重建（事件驱动触发点的唯一入口，幂等守卫：同数组/同会话/同配置指纹跳过）。
/// @param nodeArray 聊天 VC 的 m_arrMessageNodeData
/// @param chatName  会话名（talker；mmOnlyRoom 判断用）
/// @return 内容变化数（新增条目 + pos 变化 + 条目移除，0=无变化）——调用方据此
/// 触发可见刷新（resetLayoutCache + cellView setNeedsLayout），只覆盖
/// 「表内容变化」场景（新消息/历史补齐/配置切换），不再有 vm 重建刷新需求
- (NSUInteger)rebuildFromNodeArray:(nullable NSArray *)nodeArray
                          chatName:(nullable NSString *)chatName;

/// CMessageMgr 实例捕获回调（MsgMergeHook 的 GetMsg:LocalID: 钩调用）。
/// 8.0.78 无单例访问器且 VC ivar 树 2 层内无其实例（frida 探针实证判死），
/// 实证唯一稳定捕获点 = 微信自己调 GetMsg:LocalID:（每次进聊天必调），首调
/// 即记录 receiver，供索引 miss 时按 localID 直查存储补邻接
/// （BubbleBox findValidMsg 同路线，根除滚动加载 ~1s 记账迟滞的 None 闪回窗口）。
- (void)noteMessageManager:(nullable id)mgr;

/// 标志查询（O(1) 索引查表）：未覆盖/组外/不可合并/功能未激活 = None。
/// 所有钩子只读本方法，禁止查数组、禁止读 vm 关联对象。
/// 索引 miss 且存储层就绪时：按 localID 直查微信消息存储补邻接（DB 兜底），
/// 结果缓存进索引；存储不可用 = None（v5 行为）。
- (MOMergePosition)posForLocalID:(long long)lid;

/// 当前配置是否与上次重建时的分组配置指纹不一致（O(1)，读侧保鲜判断用）
- (BOOL)configFingerprintChanged;

/// 清空模型（切会话时调用，防跨会话 localID 撞号）
- (void)clear;

@end

NS_ASSUME_NONNULL_END
