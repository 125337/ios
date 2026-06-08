#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface WPHueSlider : UIView

/// 当前色相值 (0~1)
@property (nonatomic, assign) CGFloat hue;

/// 色相改变回调
@property (nonatomic, copy) void(^hueDidChange)(CGFloat hue);

/// 设置指示器在色相条上的位置（带动画）
- (void)setIndicatorPositionAnimated:(BOOL)animated;

@end

NS_ASSUME_NONNULL_END