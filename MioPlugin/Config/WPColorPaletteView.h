#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface WPColorPaletteView : UIView

/// 设置预设色列表 (UIColor 数组)
- (void)setPresetColors:(NSArray<UIColor *> *)colors;

/// 设置莫兰迪色列表
- (void)setMorandiColors:(NSArray<UIColor *> *)colors;

/// 设置历史色列表 (Hex NSString 数组，内部解析)
- (void)setHistoryHexes:(NSArray<NSString *> *)hexes;

/// 添加颜色到历史（去重、上限 20）
- (void)addToHistory:(UIColor *)color;

/// 获取当前历史色 Hex 列表（存 UserDefaults 用）
- (NSArray<NSString *> *)historyHexes;

/// 任一色块被点击回调
@property (nonatomic, copy) void(^colorDidTap)(UIColor *color);

@end

NS_ASSUME_NONNULL_END