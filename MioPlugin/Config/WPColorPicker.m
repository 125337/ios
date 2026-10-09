#import "WPColorPicker.h"
#import "WPHsvColorPickerController.h"
#import "WPColorUtil.h"

@implementation WPColorPicker

+ (UIButton *)makeColorButtonWithColor:(UIColor *)color size:(CGFloat)size {
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    btn.backgroundColor = color ?: [UIColor grayColor];
    btn.layer.cornerRadius = size / 2;
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
    [self presentCustomPickerOnViewController:vc lightHex:lightHex darkHex:darkHex activeIsLight:activeIsLight sourceButton:button allowClear:NO onClear:nil onSelected:onSelected];
}

+ (void)presentCustomPickerOnViewController:(UIViewController *)vc
                                    lightHex:(NSString *)lightHex
                                     darkHex:(NSString *)darkHex
                               activeIsLight:(BOOL)activeIsLight
                                sourceButton:(UIButton *)button
                                  allowClear:(BOOL)allowClear
                                     onClear:(void(^)(void))onClear
                                  onSelected:(void(^)(NSString *lightHex, NSString *darkHex))onSelected {
    BOOL isDual = (lightHex.length > 0 && darkHex.length > 0);

    // 未修改（选择器回传 nil,nil）→ 直接跳过，不写字段不刷按钮，保住"未设置"语义
    void(^selBlock)(NSString *, NSString *) = ^(NSString *lHex, NSString *dHex) {
        if (!onSelected) return;
        if (lHex.length == 0 && dHex.length == 0) return;
        if (button) {
            NSString *hex = activeIsLight ? lHex : dHex;
            button.backgroundColor = [WPColorUtil colorFromHexString:hex];
        }
        onSelected(lHex ?: lightHex, dHex ?: darkHex);
    };

    WPHsvColorPickerController *picker;
    if (isDual) {
        picker = [[WPHsvColorPickerController alloc]
            initWithLightHex:lightHex
                    darkHex:darkHex
                 allowClear:allowClear
              clearCallback:onClear
                   callback:selBlock];
        picker.singleColorMode = NO;
        picker.isLightMode = activeIsLight;
    } else {
        NSString *hex = lightHex.length > 0 ? lightHex : (darkHex.length > 0 ? darkHex : @"#FFFFFF");
        picker = [[WPHsvColorPickerController alloc]
            initWithLightHex:hex
                    darkHex:hex
                 allowClear:allowClear
              clearCallback:onClear
                   callback:selBlock];
        picker.singleColorMode = YES;
        picker.isLightMode = activeIsLight;
    }

    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:picker];
    [vc presentViewController:nav animated:YES completion:nil];
}

@end