//
//  BBMergeModel.h
//  MioPlugin
//
//  消息合并独立模型（对齐 BubbleBox 独立 entries 架构）：
//  持有当前会话的 entries 数组（渲染顺序）与 localID→entry 索引，位置标志
//  在 rebuild 时一次性预计算。替代旧「逐查询现算邻接 + 5s TTL 缓存」——
//  旧架构在新消息到达时靠微信下次布局被动触发重算，时机不可控且查询会把
//  早于节点追加的错判定写回缓存（毒缓存，探针实证）；本模型重建只发生在
//  主动触发（切会话/新消息轮询确认追加/配置或数组身份变化），查询只读。
//

#import <Foundation/Foundation.h>
#import "BBMergeEntry.h"

NS_ASSUME_NONNULL_BEGIN

@interface BBMergeModel : NSObject

/// 当前会话 entries（渲染顺序，只含可参与合并的消息；时间节点/分隔消息无 entry）
@property (nonatomic, copy) NSArray<BBMergeEntry *> *entries;

+ (instancetype)shared;

/// 从渲染数组主动重建 entries（新消息入库联动/切会话/配置变化后调用）
/// @param nodeArray 聊天 VC 的 m_arrMessageNodeData（元素为消息 viewModel / ChatTimeViewModel）
/// @param chatName  会话名（talker；mmOnlyRoom 判断用）
- (void)rebuildWithNodeArray:(nullable NSArray *)nodeArray
                    chatName:(nullable NSString *)chatName;

/// 按 localID 查 entry
- (nullable BBMergeEntry *)entryForLocalID:(long long)lid;

/// 渲染/行高钩子的位置查询入口：失效检测（数组身份/配置指纹变化→就地重建）
/// 后查表；查不到（时间节点/分隔消息/陈旧 vm）返回 None
- (MOMergePosition)positionForWrap:(id)wrap
                          chatName:(nullable NSString *)chatName
                         nodeArray:(nullable NSArray *)nodeArray;

/// 清空模型（切会话时调用，防跨会话残留）
- (void)clear;

@end

NS_ASSUME_NONNULL_END
