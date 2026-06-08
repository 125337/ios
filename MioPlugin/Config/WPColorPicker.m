#import "WPColorPicker.h"
#import "WPHsvColorPickerController.h"
#import "WPColorUtil.h"

@implementation WPColorPicker

+ (UIButton *)makeColorButtonWithColor:(UIColor *)color {
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    btn.backgroundColor = color ?: [UIColor grayColor];
    btn.layer.cornerRadius = 15;
    btn.layer.borderWidth = 1.0;
    btn.layer.borderColor = [UIColor colorWithRed:0.82 green:0.82 blue:0.84 alpha:1.0].CGColor;
    btn.clipsToBounds = YES;
    return btn;
}

+ (void)presentCustomPickerOnViewController:(UIViewController *)vc
                                    lightHex:(NSString *)lightHex
                                     darkHex:(NSString *)darkHex
                               activeIsLight:(BOOL)activeIsLight
                                sourceButton:(UIButton *)button
                                  onSelected:(void(^)(NSString *lightHex, NSString *darkHex))onSelected {
    
    BOOL isDual = (lightHex.length > 0 && darkHex.length > 0);
    
    WPHsvColorPickerController *picker;
    if (isDual) {
        picker = [[WPHsvColorPickerController alloc]
            initWithLightHex:lightHex
                    darkHex:darkHex
                   callback:^(NSString *lHex, NSString *dHex) {
                if (button) {
                    NSString *hex = activeIsLight ? lHex : dHex;
                    button.backgroundColor = [WPColorUtil colorFromHexString:hex];
                }
                if (onSelected) onSelected(lHex ?: lightHex, dHex ?: darkHex);
            }];
        picker.singleColorMode = NO;
        picker.isLightMode = activeIsLight;
    } else {
        NSString *hex = lightHex.length > 0 ? lightHex : (darkHex.length > 0 ? darkHex : @"#FFFFFF");
        picker = [[WPHsvColorPickerController alloc]
            initWithHex:hex
            callback:^(NSString *selectedHex) {
                if (button) button.backgroundColor = [WPColorUtil colorFromHexString:selectedHex];
                if (onSelected) onSelected(selectedHex, selectedHex);
            }];
    }

    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:picker];
    [vc presentViewController:nav animated:YES completion:nil];
}

@end