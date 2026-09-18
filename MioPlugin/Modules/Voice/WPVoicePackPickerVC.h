#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// 语音包选择页（聊天中打开：收藏 / 最近 / 目录浏览，点击即发送）
@interface WPVoicePackPickerVC : UIViewController
- (instancetype)initWithChatName:(nullable NSString *)chatName;
@end

NS_ASSUME_NONNULL_END
