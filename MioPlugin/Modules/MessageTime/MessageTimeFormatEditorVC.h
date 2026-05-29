#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// 复刻微信优化 CSTimeFormatEditorViewController
@interface MessageTimeFormatEditorVC : UIViewController

/// 初始格式字符串
@property (nonatomic, copy, nullable) NSString *initialFormat;

/// 保存回调
@property (nonatomic, copy, nullable) void (^saveBlock)(NSString *format);

@end

NS_ASSUME_NONNULL_END