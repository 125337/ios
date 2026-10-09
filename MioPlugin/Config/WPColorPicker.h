#import <UIKit/UIKit.h>

/// 颜色按钮工具类
/// 提供标准颜色按钮创建和自定义颜色选择器弹出功能
@interface WPColorPicker : NSObject

/// 创建标准颜色按钮 (正圆形, 浅灰边框)
/// @param color 按钮填充颜色 (可为 nil, 默认灰色)
/// @param size 按钮尺寸 (宽高一致, 自动计算圆角为 size/2)
+ (UIButton *)makeColorButtonWithColor:(nullable UIColor *)color size:(CGFloat)size;

/// 弹出自定义颜色选择器（唯一入口）
/// @param vc 当前 VC
/// @param lightHex  浅色 hex（nil = 未设置）
/// @param darkHex   深色 hex（nil = 未设置）
/// @param allowClear YES = 选择器提供「清除」入口
/// @param onChanged  确认回调：仅用户调整过颜色后确认才触发，双 hex 均有值
/// @param onClear    清除回调：isLightSide 标明清的是哪一侧
+ (void)presentColorPickerOnViewController:(UIViewController *)vc
                                  lightHex:(nullable NSString *)lightHex
                                   darkHex:(nullable NSString *)darkHex
                                allowClear:(BOOL)allowClear
                                   onClear:(nullable void(^)(BOOL isLightSide))onClear
                                 onChanged:(nullable void(^)(NSString *lightHex, NSString *darkHex))onChanged;

@end
