#import <UIKit/UIKit.h>

/// 工具类：提供颜色转换和暗黑模式检测等通用方法
@interface WPUtility : NSObject

/// 从十六进制字符串创建 UIColor
/// @param hex 十六进制颜色字符串，如 "#FF0000" 或 "FF0000AA"
/// @return UIColor 对象，失败返回 nil
+ (UIColor *)colorFromHex:(NSString *)hex;

/// 从 UIColor 获取十六进制字符串
/// @param color UIColor 对象
/// @return 十六进制颜色字符串，如 "#FF0000"
+ (NSString *)hexFromColor:(UIColor *)color;

/// 检测当前是否为暗黑模式
/// @return YES 表示暗黑模式，NO 表示普通模式
+ (BOOL)isDarkMode;

/// 检测指定 ViewController 是否为暗黑模式
/// @param vc UIViewController 对象
/// @return YES 表示暗黑模式，NO 表示普通模式
+ (BOOL)isDarkModeForViewController:(UIViewController *)vc;

@end