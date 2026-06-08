#import "WPColorPicker.h"
#import "PluginConfig.h"
#import "WPHsvColorPickerController.h"
#import "WPColorUtil.h"
#import <objc/runtime.h>

#pragma mark - 内部代理类

@interface _WPColorPickerDelegate : NSObject <UIColorPickerViewControllerDelegate>
@property (nonatomic, copy) void(^onSelected)(UIColor *color, NSString *hex);
@property (nonatomic, assign) UIButton *sourceButton;
@end

@implementation _WPColorPickerDelegate

- (void)colorPickerViewController:(UIColorPickerViewController *)vc
                   didSelectColor:(UIColor *)color
                    continuously:(BOOL)continuously {
    if (continuously) return;

    // 自动更新按钮背景色
    if (self.sourceButton && color) {
        self.sourceButton.backgroundColor = color;
    }

    // 回调
    if (self.onSelected && color) {
        NSString *hex = [[PluginConfig shared] hexFromColor:color];
        if (!hex) hex = @"#808080";
        self.onSelected(color, hex);
    }
}

@end

#pragma mark - WPColorPicker

@implementation WPColorPicker

+ (UIButton *)makeColorButtonWithColor:(UIColor *)color {
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    btn.backgroundColor = color ?: [UIColor grayColor];
    btn.layer.cornerRadius = 15;
    btn.layer.borderWidth = 1.0;
    btn.layer.borderColor = [UIColor colorWithRed:0.82 green:0.82 blue:0.84 alpha:1.0].CGColor;
    btn.clipsToBounds = YES;
    // frame 由调用方设置
    return btn;
}

+ (void)presentOnViewController:(UIViewController *)vc
                   currentColor:(UIColor *)currentColor
                   sourceButton:(UIButton *)button
                     onSelected:(void(^)(UIColor *, NSString *))onSelected {
    if (@available(iOS 14.0, *)) {
        UIColorPickerViewController *picker = [[UIColorPickerViewController alloc] init];
        picker.selectedColor = currentColor ?: [UIColor grayColor];
        picker.supportsAlpha = NO;

        _WPColorPickerDelegate *delegate = [[_WPColorPickerDelegate alloc] init];
        delegate.onSelected = onSelected;
        delegate.sourceButton = button;
        picker.delegate = delegate;

        // 保持 delegate 生命周期（via associated object）
        objc_setAssociatedObject(picker, "wp_delegate", delegate, OBJC_ASSOCIATION_RETAIN_NONATOMIC);

        [vc presentViewController:picker animated:YES completion:nil];
    } else {
        // iOS 13 降级: 使用 UIAlertController 文本输入
        UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"输入颜色值"
                                                                       message:@"请输入 HEX 颜色值，如 #FA5151"
                                                                preferredStyle:UIAlertControllerStyleAlert];

        [alert addTextFieldWithConfigurationHandler:^(UITextField *textField) {
            if (currentColor) {
                NSString *hex = [[PluginConfig shared] hexFromColor:currentColor];
                textField.text = hex ?: @"";
            }
            textField.placeholder = @"#808080";
        }];

        [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
            NSString *text = alert.textFields.firstObject.text ?: @"";
            if (text.length == 0) return;
            // 补全 # 前缀
            if (![text hasPrefix:@"#"]) text = [@"#" stringByAppendingString:text];
            UIColor *color = [[PluginConfig shared] colorFromHex:text];
            if (!color) return;

            if (button) button.backgroundColor = color;

            if (onSelected) onSelected(color, text);
        }]];

        [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];

        [vc presentViewController:alert animated:YES completion:nil];
    }
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
        // 只有一个 hex → 单色模式
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