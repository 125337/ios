#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

/// 语音包模块配置（modulePrefix: Voice_）
@interface VoiceConfig : NSObject <ConfigModule>

/// 启用语音包功能（对外开放，默认开启）
@property (nonatomic, assign) BOOL voicePackEnabled;
/// 连续发送：选择页发送后不关闭，可继续发送
@property (nonatomic, assign) BOOL voicePackContinuousSendEnabled;
/// 长按聊天输入栏右下角「+」打开语音包选择页
@property (nonatomic, assign) BOOL voicePackPlusLongPressEnabled;

// ── 语音功能（UI 先行，功能逻辑后续接入） ──
/// 启用语音转发
@property (nonatomic, assign) BOOL voiceForwardEnabled;
/// 自定义语音秒数：只影响自己发出语音的显示秒数，0 = 未启用（0-600）
@property (nonatomic, assign) NSInteger voiceFakeDuration;
/// 语音自动转文字
@property (nonatomic, assign) BOOL voiceAutoToTextEnabled;
/// 语音进度拖动播放
@property (nonatomic, assign) BOOL voiceDragProgressEnabled;
/// 语音自动倍数播放（开启后需重启微信生效）
@property (nonatomic, assign) BOOL voiceAutoSpeedEnabled;
/// 语音自动背景播放
@property (nonatomic, assign) BOOL voiceBackgroundPlayEnabled;
/// 通话时播放语音消息
@property (nonatomic, assign) BOOL voiceCallPlayEnabled;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
