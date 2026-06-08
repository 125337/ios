#import <UIKit/UIKit.h>
#import "WPColorUtil.h"

NS_ASSUME_NONNULL_BEGIN

@interface WPRGBAControl : UIView

/// 当前 RGBA 值 (R/G/B:0~255, A:0~1)
@property (nonatomic, assign) CGFloat red;
@property (nonatomic, assign) CGFloat green;
@property (nonatomic, assign) CGFloat blue;
@property (nonatomic, assign) CGFloat alpha;

/// 任一值变化回调
@property (nonatomic, copy) void(^rgbaDidChange)(CGFloat red, CGFloat green, CGFloat blue, CGFloat alpha);

/// 快速设置所有值（不触发回调）
- (void)setRed:(CGFloat)r green:(CGFloat)g blue:(CGFloat)b alpha:(CGFloat)a animated:(BOOL)animated;

@end

NS_ASSUME_NONNULL_END