#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

/// 语音包模块配置（modulePrefix: Voice_）
@interface VoiceConfig : NSObject <ConfigModule>

/// 启用语音包功能（对外开放，默认开启）
@property (nonatomic, assign) BOOL voicePackEnabled;
/// 连续发送：选择页发送后不关闭，可继续发送
@property (nonatomic, assign) BOOL voicePackContinuousSendEnabled;
/// 收到的语音消息自动保存到「聊天纳入」目录（silk 原始数据）
@property (nonatomic, assign) BOOL voicePackAutoIncludeEnabled;
/// 长按聊天输入栏右下角「+」打开语音包选择页
@property (nonatomic, assign) BOOL voicePackPlusLongPressEnabled;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
