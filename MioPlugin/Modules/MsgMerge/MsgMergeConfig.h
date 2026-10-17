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

/// 头像骑气泡：头像可见行（组首/独立行）贴顶原位 + 气泡钻入头像列 → 头像悬于
/// 钻入气泡上外角（需 mmEnable 开）
@property (nonatomic, assign) BOOL   mmAvatarRide;
/// 头像 Y 微调偏置（pt，±100 钳位）：targetY = 偏置，0=贴 cell 顶（原生位，零冒出），
/// 负=上浮（冒出压上一行，风险自担），正=下沉压气泡
@property (nonatomic, assign) CGFloat mmAvatarRideDepth;
/// 气泡让位（pt，±60 钳位）：骑气泡时气泡向头像列钻入的横向偏移（XOS MessageOffset 对应物），
/// 正=向头像方向让位（气泡钻到头像正下方，头像悬于气泡上外角），仅头像可见行生效
@property (nonatomic, assign) CGFloat mmAvatarRideInset;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
