#import <UIKit/UIKit.h>

/// 颜色按钮工具类
/// 提供标准颜色按钮创建和自定义颜色选择器弹出功能
@interface WPColorPicker : NSObject

/// 创建标准颜色按钮 (正圆形, 浅灰边框)
/// @param color 按钮填充颜色 (可为 nil, 默认灰色)
/// @param size 按钮尺寸 (宽高一致, 自动计算圆角为 size/2)
+ (UIButton *)makeColorButtonWithColor:(nullable UIColor *)color size:(CGFloat)size;

/// 弹出自定义颜色选择器（统一入口，自动处理单色/双模式）
/// @param vc 当前 VC
/// @param lightHex  浅色 hex
/// @param darkHex   深色 hex
/// @param activeIsLight YES=默认编辑浅色, NO=默认编辑深色
/// @param button    关联按钮（确认后自动更新背景色）
/// @param onSelected 确认回调 (lightHex, darkHex) — 双 hex 都有值；未修改时不回调
+ (void)presentCustomPickerOnViewController:(UIViewController *)vc
                                    lightHex:(NSString *)lightHex
                                     darkHex:(NSString *)darkHex
                               activeIsLight:(BOOL)activeIsLight
                                sourceButton:(nullable UIButton *)button
                                  onSelected:(void(^)(NSString *lightHex, NSString *darkHex))onSelected;

/// 完整入口：支持「清除」按钮（语义 = 显式恢复未设置，走独立 onClear 回调）
+ (void)presentCustomPickerOnViewController:(UIViewController *)vc
                                    lightHex:(nullable NSString *)lightHex
                                     darkHex:(nullable NSString *)darkHex
                               activeIsLight:(BOOL)activeIsLight
                                sourceButton:(nullable UIButton *)button
                                  allowClear:(BOOL)allowClear
                                     onClear:(nullable void(^)(void))onClear
                                  onSelected:(void(^)(NSString *lightHex, NSString *darkHex))onSelected;

@end