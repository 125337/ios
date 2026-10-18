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

/// 头像骑气泡（XOS 1.5.9 骑坐，需 mmEnable 开）：组首头像钉行顶、组首气泡顶统一
/// 钉到头像顶+23（可视抬升恒定，左右对称）+组内气泡整组钻入；独立行仅头像 ±3/+2 轻咬合
@property (nonatomic, assign) BOOL   mmAvatarRide;
/// 骑行纵向偏置（pt，±100 钳位）：0=XOS 实证位（头像钉行顶、气泡顶=头像顶+23）；
/// 正=整套骑行下沉（头像与气泡同步下移），负=上移
@property (nonatomic, assign) CGFloat mmAvatarRideDepth;
/// 行高缩减（pt，XOS mesMsgMergeHeightReduce 同款，默认 0）：组内非组尾行在原生行高
///（及手动间距）基础上再减此值，下限 24
@property (nonatomic, assign) CGFloat mmHeightReduce;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
