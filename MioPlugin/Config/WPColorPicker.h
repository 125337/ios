#import <UIKit/UIKit.h>

/// 统一颜色选择器工具类
/// 提供标准的颜色按钮创建和颜色选择器弹出功能
/// 替代项目中分散的 UIColorPickerViewController 实现
@interface WPColorPicker : NSObject

/// 创建标准颜色按钮 (30×30 圆形, 浅灰边框)
/// @param color 按钮填充颜色 (可为 nil, 默认灰色)
+ (UIButton *)makeColorButtonWithColor:(nullable UIColor *)color;

/// 弹出颜色选择器并处理结果
/// @param vc 当前 ViewController
/// @param currentColor 当前颜色 (预填充, 可为 nil)
/// @param button 关联的颜色按钮 (可选, 选择颜色后自动更新按钮背景色)
/// @param onSelected 颜色确认回调 (color: UIColor, hex: HEX字符串 #RRGGBB)
+ (void)presentOnViewController:(UIViewController *)vc
                   currentColor:(nullable UIColor *)currentColor
                   sourceButton:(nullable UIButton *)button
                     onSelected:(void(^)(UIColor *color, NSString *hex))onSelected;

/// 弹出自定义颜色选择器（统一入口，自动处理单色/双模式）
/// @param vc 当前 VC
/// @param lightHex  浅色 hex
/// @param darkHex   深色 hex
/// @param activeIsLight YES=默认编辑浅色, NO=默认编辑深色
/// @param button    关联按钮（确认后自动更新背景色）
/// @param onSelected 确认回调 (lightHex, darkHex) — 双 hex 都有值
+ (void)presentCustomPickerOnViewController:(UIViewController *)vc
                                    lightHex:(NSString *)lightHex
                                     darkHex:(NSString *)darkHex
                               activeIsLight:(BOOL)activeIsLight
                                sourceButton:(nullable UIButton *)button
                                  onSelected:(void(^)(NSString *lightHex, NSString *darkHex))onSelected;

@end