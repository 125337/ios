//
//  MsgMergeConfig.h
//  MioPlugin
//
//  消息合并模块配置
//  对齐 BubbleBox 反编译配置层（enabledMerge/enabledMergeOnlyRoom/mergeMode/mergeLayoutValue）
//  键名统一 mm 前缀，经 ConfigManager 按 key 路由到本模块
//

#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface MsgMergeConfig : NSObject <ConfigModule>

/// 启用消息合并
@property (nonatomic, assign) BOOL mmEnable;

/// 仅对群聊生效
@property (nonatomic, assign) BOOL mmOnlyRoom;

/// 消息合并模式：0=全部合并 1=手动配置（预留，暂与全部合并同行为）
@property (nonatomic, assign) NSInteger mmMode;

/// 头像显示位置：0=消息头（组首显示） 1=消息尾（组尾显示）
@property (nonatomic, assign) NSInteger mmAvatarPos;

/// 消息合并间距：0=跟随气泡（不干预） 1=手动调整
@property (nonatomic, assign) NSInteger mmSpacingMode;

/// 手动间距（pt），mmSpacingMode==1 时生效
@property (nonatomic, assign) CGFloat mmSpacing;

/// 每类消息是否充当分隔符打断合并链（仅 mmMode==1 手动配置时生效）：YES=打断 NO=参与合并
@property (nonatomic, assign) BOOL mmSepMedia;     // 媒体消息（语音34/视频43/App消息49）
@property (nonatomic, assign) BOOL mmSepEmoticon;  // 动画表情（47）
@property (nonatomic, assign) BOOL mmSepSystem;    // 系统消息（>=10000，节点结构层，当前始终打断）
@property (nonatomic, assign) BOOL mmSepTime;      // 时间行（节点结构层，当前始终打断）

/// 头像横向偏移（pt，±60 钳位）：正=向屏幕边缘，负=向气泡侧；收发镜像（按原生头像位判定）
@property (nonatomic, assign) CGFloat mmAvatarOffset;

/// 整列横向偏移（pt，±20 钳位）：头像+气泡+昵称同向平移，正=向屏幕边缘；收发镜像
@property (nonatomic, assign) CGFloat mmWholeOffset;

/// 头像骑气泡：头像可见行（组首/独立行）绝对钉顶（需 mmEnable 开）
@property (nonatomic, assign) BOOL   mmAvatarRide;
/// 钉顶偏置（pt，±100 钳位，XOS ReverseAvatarDownOffset 同款）：targetY = −46(基准族) + 偏置
/// + 消息偏移 + GapReduce − 13(仅群)，默认 0 → 群 −49 / 私 −56；写帧关隐式动画（CATransaction）
/// −46 = cell顶0 − 头像高38 − 冒顶8（1.5.9 全量反编译实证，FUN_000050c0/ac078/L102097）
@property (nonatomic, assign) CGFloat mmAvatarRideDepth;
/// 我方消息偏移（pt，XOS mesMsgMergeMessageOffsetSelf 同款，默认 0）：头像垂直 Y 偏移
/// （1.5.9 实证：头像可见时 offset += −46 叠加钉顶基准族；非水平钻入）
@property (nonatomic, assign) CGFloat mmMessageOffsetSelf;
/// 对方消息偏移（pt，XOS mesMsgMergeMessageOffsetOther 同款，默认 0）：头像垂直 Y 偏移（同上）
@property (nonatomic, assign) CGFloat mmMessageOffsetOther;
/// 群聊 GapReduce（pt，XOS mesMsgMergeGroupGapReduce 同款，默认 +10）：骑行目标 y 微调；
/// XOS 默认群行矮 10pt、头像冒出 cell 顶 11pt
@property (nonatomic, assign) CGFloat mmGroupGapReduce;
/// 私聊 GapReduce（pt，XOS mesMsgMergePrivateGapReduce 同款，默认 −10）：骑行目标 y 微调（私聊域）
@property (nonatomic, assign) CGFloat mmPrivateGapReduce;
/// 行高缩减（pt，XOS mesMsgMergeHeightReduce 同款，默认 0）：组内非组尾行在原生行高
///（及手动间距）基础上再减此值，下限 24
@property (nonatomic, assign) CGFloat mmHeightReduce;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
