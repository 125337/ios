//
//  DayNightSwitch.h
//  MioPlugin
//
//  日月开关控件（借自 DayNightSwitch 项目，Finn Gaida 2016，MIT）。
//  纯 CAShapeLayer/UIView 绘图的太阳↔月亮切换动画开关，零外部依赖。
//  集成说明见 SettingCategoryController.m 的 addDayNightRowInGroup——本控件只管画和摸，不管配置。
//

#import <UIKit/UIKit.h>

@interface DayNightSwitch : UIView

/// 状态变化回调（用户点击/拖动即触发）
@property (nonatomic, copy, nullable) void (^changeAction)(BOOL);

/// 程序化同步时置 YES：on 变化不触发 changeAction（防皮肤↔原生开关循环回调，WCR blockChangeAction 同款）
@property (nonatomic, assign) BOOL suppressCallback;

/// 当前状态，赋值会触发切换动画
@property (nonatomic) BOOL on;

/// 关态深色描边层
@property (nonatomic, nonnull) CAShapeLayer *offBorder;

/// 开态浅色描边层
@property (nonatomic, nonnull) CAShapeLayer *onBorder;

/// 关态背景上的星点
@property (nonatomic, nullable) NSArray<UIView *> *stars;

/// 开态月亮上的云朵贴图（dylib 无 bundle 时 imageNamed 返回 nil，云朵不显示但不崩溃）
@property (nonatomic, nonnull) UIImageView *cloud;

- (CGFloat)knobMargin;
- (nonnull instancetype)initWithCenter:(CGPoint)center;

@end
