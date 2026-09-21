#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 语音包 Hook：
/// 1. 长按聊天里的语音消息纳入语音包（WCR 式：改名确认后存语音包根目录）
/// 2. 长按聊天输入栏「+」打开语音包选择页
@interface VoiceHook : NSObject

+ (void)install;

@end

NS_ASSUME_NONNULL_END
