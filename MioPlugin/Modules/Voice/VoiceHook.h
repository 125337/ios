#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 语音包 Hook：
/// 1. 长按语音消息 → 菜单「纳入语音包」（小丑按钮同款机制：operationMenuItems
///    追加 MMMenuItem；WCR 式改名确认后存语音包根目录）
/// 2. 长按聊天输入栏「+」打开语音包选择页
@interface VoiceHook : NSObject

+ (void)install;

@end

NS_ASSUME_NONNULL_END
