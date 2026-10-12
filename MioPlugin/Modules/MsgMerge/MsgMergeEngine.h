//
//  MsgMergeEngine.h
//  MioPlugin
//
//  消息合并分组引擎
//  复刻 BubbleBox +[BubbleMessageMerge] 引擎思路（反编译 v3 报告）：
//    - 相邻有效消息 senderUser 相等（m_nsFromUsr，群聊 @chatroom 归一化到 m_nsRealChatUsr）
//    - 时间节点/系统消息打断分组
//    - 输出节点位置标志：组首/组中/组尾/独立
//  邻接数据源为聊天 VC 的 m_arrMessageNodeData 渲染数组（8.0.78 实证：
//  CMessageMgr 无单例访问器，GetMsg:LocalID: 查库方案不可用）
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 合并位置标志
typedef NS_ENUM(NSUInteger, MOMergePosition) {
    MOMergePositionNone   = 0,  // 不参与合并（系统消息/不可合并类型/功能关闭）
    MOMergePositionSingle = 1,  // 独立消息（前后均不同组）
    MOMergePositionFirst  = 2,  // 组首（与下一条同组）
    MOMergePositionMiddle = 3,  // 组中（与前后均同组）
    MOMergePositionLast   = 4,  // 组尾（与上一条同组）
};

@interface MsgMergeEngine : NSObject

/// 计算一条消息在会话中的合并位置与组内深度（带 5s TTL 缓存）
/// @param wrap      CMessageWrap（来自 viewModel.messageWrap）
/// @param chatName  会话名（talker：群聊为 @chatroom id，私聊为对端 id）
/// @param nodeArray 聊天 VC 的 m_arrMessageNodeData 渲染数组（元素为消息 viewModel）
/// @param depthOut  返回组内深度：组首/独立=0，组内第 k 条=k（连续同发送者步数）
+ (MOMergePosition)positionForWrap:(id)wrap
                          chatName:(nullable NSString *)chatName
                         nodeArray:(nullable NSArray *)nodeArray
                             depth:(nullable NSInteger *)depthOut;

/// 清空位置缓存（切换会话时调用）
+ (void)clearCache;

@end

NS_ASSUME_NONNULL_END
