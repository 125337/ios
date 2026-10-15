//
//  BBMergeModel.h
//  MioPlugin
//
//  消息合并独立模型（BubbleBox 同构架构）：
//  分组结果在 rebuild 时一次性预计算（entries + localID→entry 索引），
//  随后由 apply 阶段把位置标志用关联对象写到每个消息 viewModel 上
//  （对齐 BubbleBox 的 setB_isFirstMessage 等预写模式）。measure:（测量层）/ 昵称
//  判定 / 渲染钩子一律只读关联标志（posFromVM，O(1)），零查询、零数组
//  交叉引用、零查询期重建——旧「查询期失效检测 + 保鲜重查」补丁链已整体删除。
//
//  重建+预写只发生在事件触发点（切会话/进聊天/新消息轮询确认追加/读侧
//  None-miss 限频保鲜），rebuild 幂等守卫保证重复触发退化为 O(1) 比对。
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
/// rebuild 的分组判定与昵称判定钩的现场邻接判定共用此规则（单一事实源）
+ (BOOL)shouldJoin:(id)wrapA wrapB:(id)wrapB;

// ------------------------------------------------------------
// BubbleBox 同构预写层（本架构核心，见 BBMergeModel.m 头注释）
// ------------------------------------------------------------

/// 重建 + 预写（事件驱动触发点的唯一入口）：
/// rebuild（幂等守卫：同数组/同会话/同配置指纹直接跳过）后把分组位置用
/// 关联对象写到每个消息 viewModel 上。写标志与重建同函数同刻完成，
/// 保证测量/渲染钩读到的一定是当前代次的标志。
/// @param nodeArray 聊天 VC 的 m_arrMessageNodeData（元素为消息 viewModel / ChatTimeViewModel）
/// @param chatName  会话名（talker；mmOnlyRoom 判断用）
/// @return 本次 apply 实际改变标志值的 vm 数（0=无变化）——调用方据此触发
/// 可见刷新（resetLayoutCache + cellView setNeedsLayout，BubbleBox 三件套同款）
- (NSUInteger)rebuildAndApplyWithNodeArray:(nullable NSArray *)nodeArray
                                  chatName:(nullable NSString *)chatName;

/// 标志读取（O(1) 关联对象读）：未预写/组外/不可合并/功能未激活 = None。
/// 所有钩子（measure:/昵称判定/渲染/昵称断供）只读本方法，禁止查模型。
+ (MOMergePosition)posFromVM:(id)vm;

/// 当前配置是否与上次重建时的分组配置指纹不一致（O(1)，读侧保鲜判断用）
- (BOOL)configFingerprintChanged;

/// 清空模型（切会话时调用，防跨会话残留）
- (void)clear;

@end

NS_ASSUME_NONNULL_END
