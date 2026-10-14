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

/// 头像显示位置：0=气泡设定（不干预） 1=消息头（组首显示） 2=消息尾（组尾显示）
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

/// 布局接管（阶段2 实验开关，默认 NO）：type==1 文本 cell 三 frame 自摆
/// （头像/气泡容器/昵称横向重摆，纵向与尺寸保持原生测量；路线图阶段5 转正）
@property (nonatomic, assign) BOOL mmOwnLayout;

/// 昵称判定接管（实验开关，默认 NO）：钩 -[CommonMessageViewModel isShowChatRoomDisplayName]
/// 组内非首条返 NO，让原生按「无昵称行」测量+布局（bgTop 16→5、行高自动回收昵称区），
/// 取代 rowHeight 层的 N 实测补偿链（XOS 同款挂点，探针+反编译实证）
@property (nonatomic, assign) BOOL mmNickJudgeTakeover;

/// 头像横向偏移（pt，±60 钳位）：正=向屏幕边缘，负=向气泡侧；收发镜像（按原生头像位判定）
@property (nonatomic, assign) CGFloat mmAvatarOffset;

/// 整列横向偏移（pt，±20 钳位）：头像+气泡+昵称同向平移，正=向屏幕边缘；收发镜像
@property (nonatomic, assign) CGFloat mmWholeOffset;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
