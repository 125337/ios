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

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
