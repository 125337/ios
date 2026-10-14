//
//  BBMergeEntry.h
//  MioPlugin
//
//  消息合并 entry 模型（对齐 BubbleBox 独立 entries 架构，反编译 FUN_00414c90）：
//  一条消息在渲染序列中的节点 = 一个 entry，位置标志在模型重建时一次性预计算，
//  渲染/行高钩子只查表读取，不再逐查询现算邻接。
//

#import <Foundation/Foundation.h>

/// 合并位置标志（自 MsgMergeEngine.h 迁入，随模型架构）
typedef NS_ENUM(NSUInteger, MOMergePosition) {
    MOMergePositionNone   = 0,  // 不参与合并（系统消息/不可合并类型/功能关闭）
    MOMergePositionSingle = 1,  // 独立消息（前后均不同组）
    MOMergePositionFirst  = 2,  // 组首（与下一条同组）
    MOMergePositionMiddle = 3,  // 组中（与前后均同组）
    MOMergePositionLast   = 4,  // 组尾（与上一条同组）
};

NS_ASSUME_NONNULL_BEGIN

@interface BBMergeEntry : NSObject

@property (nonatomic, strong) id wrap;             // CMessageWrap
@property (nonatomic, copy, nullable) NSString *senderUser;  // 发送者身份（m_nsFromUsr，群聊归一化到 m_nsRealChatUsr）
@property (nonatomic, assign) long long localID;   // m_uiMesLocalID
@property (nonatomic, assign) long long type;      // m_uiMessageType
@property (nonatomic, assign) MOMergePosition pos; // 预计算位置标志

/// 渲染语义：组首（First 或 Single，昵称可见/头像位"消息头"用）
- (BOOL)isGroupHead;
/// 渲染语义：组尾（Last 或 Single，头像位"消息尾"用）
- (BOOL)isGroupTail;

@end

NS_ASSUME_NONNULL_END
