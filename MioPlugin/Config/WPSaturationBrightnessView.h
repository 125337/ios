#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface WPSaturationBrightnessView : UIView

/// 当前色相 (0~1)，改变时自动重绘面板渐变
@property (nonatomic, assign) CGFloat hue;

/// 当前饱和度 (0~1)
@property (nonatomic, assign) CGFloat saturation;

/// 当前明度 (0~1)
@property (nonatomic, assign) CGFloat brightness;

/// S/B 值改变回调
@property (nonatomic, copy) void(^sbDidChange)(CGFloat saturation, CGFloat brightness);

/// 更新指示器位置
- (void)setIndicatorPositionAnimated:(BOOL)animated;

@end

NS_ASSUME_NONNULL_END