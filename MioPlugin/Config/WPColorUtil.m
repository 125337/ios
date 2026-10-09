#import "WPColorUtil.h"

@implementation WPColorUtil

#pragma mark - Hex ↔ UIColor

/// 清洗：去 #、去首尾空白（含换行）；清洗后为空返回 nil
/// colorFromHexString / isValidHexString 共用，保证验收规则一致
static NSString * _Nullable NormalizedHex(NSString *hex) {
    if (!hex) return nil;
    NSString *clean = [[hex stringByReplacingOccurrencesOfString:@"#" withString:@""]
                          stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    return clean.length > 0 ? clean : nil;
}

+ (nullable UIColor *)colorFromHexString:(NSString *)hex {
    if (![self isValidHexString:hex]) return nil;   // 空/nil/非法 → nil：调用方各自兜底
    NSString *clean = NormalizedHex(hex);

    if (clean.length == 6) {
        unsigned int rgb = 0;
        [[NSScanner scannerWithString:clean] scanHexInt:&rgb];
        return [UIColor colorWithRed:((rgb >> 16) & 0xFF) / 255.0
                               green:((rgb >> 8) & 0xFF) / 255.0
                                blue:(rgb & 0xFF) / 255.0
                               alpha:1.0];
    }
    unsigned long long rgba = 0;
    [[NSScanner scannerWithString:clean] scanHexLongLong:&rgba];
    return [UIColor colorWithRed:((rgba >> 24) & 0xFF) / 255.0
                           green:((rgba >> 16) & 0xFF) / 255.0
                            blue:((rgba >> 8) & 0xFF) / 255.0
                           alpha:(rgba & 0xFF) / 255.0];
}

+ (NSString *)hexStringFromColor:(UIColor *)color {
    if (!color) return @"#000000";
    CGFloat r = 0, g = 0, b = 0, a = 0;
    [color getRed:&r green:&g blue:&b alpha:&a];
    return [NSString stringWithFormat:@"#%02x%02x%02x",
            (int)(r * 255), (int)(g * 255), (int)(b * 255)];
}

+ (BOOL)isValidHexString:(NSString *)hex {
    NSString *clean = NormalizedHex(hex);
    if (!clean || (clean.length != 6 && clean.length != 8)) return NO;
    NSCharacterSet *hexSet = [NSCharacterSet characterSetWithCharactersInString:@"0123456789abcdefABCDEF"];
    return [clean stringByTrimmingCharactersInSet:hexSet].length == 0;
}

#pragma mark - HSV ↔ UIColor

+ (UIColor *)colorWithHue:(CGFloat)hue saturation:(CGFloat)saturation
               brightness:(CGFloat)brightness alpha:(CGFloat)alpha {
    return [UIColor colorWithHue:hue saturation:saturation brightness:brightness alpha:alpha];
}

+ (WPHsvColor)hsvFromColor:(UIColor *)color {
    WPHsvColor hsv = {0, 0, 0, 1};
    [color getHue:&hsv.hue saturation:&hsv.saturation
        brightness:&hsv.brightness alpha:&hsv.alpha];
    return hsv;
}

#pragma mark - RGB ↔ HSV

+ (WPHsvColor)hsvFromRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha {
    UIColor *color = [UIColor colorWithRed:red/255.0 green:green/255.0 blue:blue/255.0 alpha:alpha];
    return [self hsvFromColor:color];
}

+ (void)getRed:(CGFloat *)red green:(CGFloat *)green blue:(CGFloat *)blue fromHsv:(WPHsvColor)hsv {
    UIColor *color = [UIColor colorWithHue:hsv.hue saturation:hsv.saturation
                                brightness:hsv.brightness alpha:hsv.alpha];
    [color getRed:red green:green blue:blue alpha:nil];
    if (red)   *red   = *red * 255;
    if (green) *green = *green * 255;
    if (blue)  *blue  = *blue * 255;
}

#pragma mark - 颜色相似度

+ (BOOL)isColor:(UIColor *)c1 similarToColor:(UIColor *)c2 {
    if (!c1 || !c2) return NO;
    CGFloat r1, g1, b1, a1, r2, g2, b2, a2;
    [c1 getRed:&r1 green:&g1 blue:&b1 alpha:&a1];
    [c2 getRed:&r2 green:&g2 blue:&b2 alpha:&a2];
    CGFloat dist = sqrt(pow(r1 - r2, 2) + pow(g1 - g2, 2) + pow(b1 - b2, 2));
    return dist < 0.05; // RGB 空间欧几里得距离 < ~12/255
}

@end