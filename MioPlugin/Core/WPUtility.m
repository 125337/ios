#import "WPUtility.h"

@implementation WPUtility

+ (UIColor *)colorFromHex:(NSString *)hex {
    if (!hex.length) return nil;
    NSString *clean = [hex stringByReplacingOccurrencesOfString:@"#" withString:@""];
    if (clean.length < 6) return nil;
    unsigned int r = 0, g = 0, b = 0, a = 255;
    [[NSScanner scannerWithString:[clean substringWithRange:NSMakeRange(0, 2)]] scanHexInt:&r];
    [[NSScanner scannerWithString:[clean substringWithRange:NSMakeRange(2, 2)]] scanHexInt:&g];
    [[NSScanner scannerWithString:[clean substringWithRange:NSMakeRange(4, 2)]] scanHexInt:&b];
    if (clean.length >= 8) {
        [[NSScanner scannerWithString:[clean substringWithRange:NSMakeRange(6, 2)]] scanHexInt:&a];
    }
    return [UIColor colorWithRed:r / 255.0 green:g / 255.0 blue:b / 255.0 alpha:a / 255.0];
}

+ (NSString *)hexFromColor:(UIColor *)color {
    if (!color) return nil;
    CGFloat r, g, b, a;
    [color getRed:&r green:&g blue:&b alpha:&a];
    return [NSString stringWithFormat:@"#%02X%02X%02X",
            (int)(r * 255), (int)(g * 255), (int)(b * 255)];
}

+ (BOOL)isDarkMode {
    if (@available(iOS 13.0, *)) {
        return UITraitCollection.currentTraitCollection.userInterfaceStyle == UIUserInterfaceStyleDark;
    }
    return NO;
}

+ (BOOL)isDarkModeForViewController:(UIViewController *)vc {
    if (@available(iOS 13.0, *)) {
        return vc.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark;
    }
    return NO;
}

@end