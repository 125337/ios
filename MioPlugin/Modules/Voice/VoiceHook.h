#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 语音包 Hook：
/// 1. 自动把收到的语音消息（silk 原始数据）纳入「聊天纳入」目录
@interface VoiceHook : NSObject

+ (void)install;

@end

NS_ASSUME_NONNULL_END
