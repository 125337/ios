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

+ (void)presentColorPickerOnViewController:(UIViewController *)vc
                                  lightHex:(NSString *)lightHex
                                   darkHex:(NSString *)darkHex
                                allowClear:(BOOL)allowClear
                                   onClear:(void(^)(BOOL isLightSide))onClear
                                 onChanged:(void(^)(NSString *lightHex, NSString *darkHex))onChanged {
    // 选择器内部用 userModified 判定：未修改确认 → 不回调直接关闭；
    // 清除 → onClear(isLightSide) 单独出口。这里无需再做任何判定/兜底
    WPHsvColorPickerController *picker =
        [[WPHsvColorPickerController alloc] initWithLightHex:lightHex
                                                      darkHex:darkHex
                                                   allowClear:allowClear
                                                    onChanged:onChanged
                                                      onClear:onClear];
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:picker];
    [vc presentViewController:nav animated:YES completion:nil];
}

@end
