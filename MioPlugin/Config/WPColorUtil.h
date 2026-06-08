#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// HSVA 颜色结构体
typedef struct {
    CGFloat hue;        // 色相     0.0 ~ 1.0
    CGFloat saturation; // 饱和度   0.0 ~ 1.0
    CGFloat brightness; // 明度     0.0 ~ 1.0
    CGFloat alpha;      // 透明度   0.0 ~ 1.0
} WPHsvColor;

@interface WPColorUtil : NSObject

/// #RRGGBB / #RRGGBBAA → UIColor
+ (UIColor *)colorFromHexString:(NSString *)hex;

/// UIColor → #RRGGBB（小写）
+ (NSString *)hexStringFromColor:(UIColor *)color;

/// 验证 Hex 是否合法（6 或 8 位十六进制，可选 # 前缀）
+ (BOOL)isValidHexString:(NSString *)hex;

/// HSVA → UIColor
+ (UIColor *)colorWithHue:(CGFloat)hue
               saturation:(CGFloat)saturation
               brightness:(CGFloat)brightness
                    alpha:(CGFloat)alpha;

/// UIColor → HSVA
+ (WPHsvColor)hsvFromColor:(UIColor *)color;

/// RGB(0~255) + Alpha(0~1) → WPHsvColor
+ (WPHsvColor)hsvFromRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha;

/// WPHsvColor → RGB(0~255)
+ (void)getRed:(CGFloat *)red green:(CGFloat *)green blue:(CGFloat *)blue fromHsv:(WPHsvColor)hsv;

/// 判断两个颜色是否相似（用于历史颜色去重，欧几里得距离 < 0.05）
+ (BOOL)isColor:(UIColor *)c1 similarToColor:(UIColor *)c2;

@end

NS_ASSUME_NONNULL_END