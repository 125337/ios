#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface WPHexInputView : UIView

@property (nonatomic, copy) NSString *hexString;
@property (nonatomic, copy) void(^hexDidChange)(NSString *hexString);

/// 验证并应用 Hex（无效时恢复旧值）
- (void)applyHex:(NSString *)hex;

@end

NS_ASSUME_NONNULL_END