# 颜色选择器 · iOS 原生代码清理

## 清理范围

所有 `UIColorPickerViewController` 及相关代码，全部移除，只保留自定义选择器。

```
┌──────────────────────────────────────────┐
│  清理前 3 处代码                          │
│                                          │
│  WPColorPicker.h                         │
│    ├─ presentOnViewController: 声明      │  ← 删
│    └─ "替代原生" 注释                     │  ← 改
│                                          │
│  WPColorPicker.m                         │
│    ├─ _WPColorPickerDelegate 类          │  ← 删 (17行)
│    ├─ presentOnViewController: 实现      │  ← 删 (50行)
│    ├─ #import "PluginConfig.h"           │  ← 删 (不再使用)
│    └─ #import <objc/runtime.h>          │  ← 删 (不再使用)
│                                          │
│  其他文件                                 │
│    └─ 无 — 无任何调用者                   │
└──────────────────────────────────────────┘
```

---

## 1. WPColorPicker.h — 删除声明，更新注释

```diff
  #import <UIKit/UIKit.h>

- /// 统一颜色选择器工具类
- /// 提供标准的颜色按钮创建和颜色选择器弹出功能
- /// 替代项目中分散的 UIColorPickerViewController 实现
+ /// 颜色按钮工具类
+ /// 提供标准颜色按钮创建和自定义颜色选择器弹出功能
  @interface WPColorPicker : NSObject

  /// 创建标准颜色按钮 (30×30 圆形, 浅灰边框)
  /// @param color 按钮填充颜色 (可为 nil, 默认灰色)
  + (UIButton *)makeColorButtonWithColor:(nullable UIColor *)color;

- /// 弹出颜色选择器并处理结果
- /// @param vc 当前 ViewController
- /// @param currentColor 当前颜色 (预填充, 可为 nil)
- /// @param button 关联的颜色按钮 (可选, 选择颜色后自动更新按钮背景色)
- /// @param onSelected 颜色确认回调 (color: UIColor, hex: HEX字符串 #RRGGBB)
- + (void)presentOnViewController:(UIViewController *)vc
-                   currentColor:(nullable UIColor *)currentColor
-                   sourceButton:(nullable UIButton *)button
-                     onSelected:(void(^)(UIColor *color, NSString *hex))onSelected;

  /// 弹出自定义颜色选择器（统一入口，自动处理单色/双模式）
  /// @param vc 当前 VC
```

---

## 2. WPColorPicker.m — 删除整个内部代理类 + 旧方法 + 无用 import

### 2.1 删除 import

```diff
  #import "WPColorPicker.h"
- #import "PluginConfig.h"
  #import "WPHsvColorPickerController.h"
  #import "WPColorUtil.h"
- #import <objc/runtime.h>
```

- `PluginConfig.h` — 旧方法通过 `[PluginConfig shared] hexFromColor:` 取 hex，新方法用 `WPColorUtil`
- `<objc/runtime.h>` — 旧方法通过 `objc_setAssociatedObject` 保持 delegate 生命周期，新方法不需要

### 2.2 删除整个 `_WPColorPickerDelegate` 内部类

```diff
- #pragma mark - 内部代理类
-
- @interface _WPColorPickerDelegate : NSObject <UIColorPickerViewControllerDelegate>
- @property (nonatomic, copy) void(^onSelected)(UIColor *color, NSString *hex);
- @property (nonatomic, assign) UIButton *sourceButton;
- @end
-
- @implementation _WPColorPickerDelegate
-
- - (void)colorPickerViewController:(UIColorPickerViewController *)vc
-                    didSelectColor:(UIColor *)color
-                     continuously:(BOOL)continuously {
-     if (continuously) return;
-     if (self.sourceButton && color) {
-         self.sourceButton.backgroundColor = color;
-     }
-     if (self.onSelected && color) {
-         NSString *hex = [[PluginConfig shared] hexFromColor:color];
-         if (!hex) hex = @"#808080";
-         self.onSelected(color, hex);
-     }
- }
-
- @end
```

### 2.3 删除 `presentOnViewController:` 方法

```diff
- + (void)presentOnViewController:(UIViewController *)vc
-                    currentColor:(UIColor *)currentColor
-                    sourceButton:(UIButton *)button
-                      onSelected:(void(^)(UIColor *, NSString *))onSelected {
-     if (@available(iOS 14.0, *)) {
-         UIColorPickerViewController *picker = [[UIColorPickerViewController alloc] init];
-         picker.selectedColor = currentColor ?: [UIColor grayColor];
-         picker.supportsAlpha = NO;
-
-         _WPColorPickerDelegate *delegate = [[_WPColorPickerDelegate alloc] init];
-         delegate.onSelected = onSelected;
-         delegate.sourceButton = button;
-         picker.delegate = delegate;
-
-         objc_setAssociatedObject(picker, "wp_delegate", delegate, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
-
-         [vc presentViewController:picker animated:YES completion:nil];
-     } else {
-         // iOS 13 降级: 使用 UIAlertController 文本输入
-         UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"输入颜色值"
-                                                                        message:@"请输入 HEX 颜色值，如 #FA5151"
-                                                                 preferredStyle:UIAlertControllerStyleAlert];
-
-         [alert addTextFieldWithConfigurationHandler:^(UITextField *textField) {
-             if (currentColor) {
-                 NSString *hex = [[PluginConfig shared] hexFromColor:currentColor];
-                 textField.text = hex ?: @"";
-             }
-             textField.placeholder = @"#808080";
-         }];
-
-         [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
-             NSString *text = alert.textFields.firstObject.text ?: @"";
-             if (text.length == 0) return;
-             if (![text hasPrefix:@"#"]) text = [@"#" stringByAppendingString:text];
-             UIColor *color = [[PluginConfig shared] colorFromHex:text];
-             if (!color) return;
-             if (button) button.backgroundColor = color;
-             if (onSelected) onSelected(color, text);
-         }]];
-
-         [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
-
-         [vc presentViewController:alert animated:YES completion:nil];
-     }
- }
```

---

## 3. 清理后 WPColorPicker.m 完整代码

清理后只剩 **~50 行**（原 140 行）：

```objc
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
```

---

## 4. 清理后 WPColorPicker.h 完整代码

```objc
#import <UIKit/UIKit.h>

/// 颜色按钮工具类
/// 提供标准颜色按钮创建和自定义颜色选择器弹出功能
@interface WPColorPicker : NSObject

/// 创建标准颜色按钮 (30×30 圆形, 浅灰边框)
+ (UIButton *)makeColorButtonWithColor:(nullable UIColor *)color;

/// 弹出自定义颜色选择器（统一入口，自动处理单色/双模式）
/// @param vc 当前 VC
/// @param lightHex  浅色 hex
/// @param darkHex   深色 hex
/// @param activeIsLight YES=默认编辑浅色, NO=默认编辑深色
/// @param button    关联按钮
/// @param onSelected 确认回调 (lightHex, darkHex)
+ (void)presentCustomPickerOnViewController:(UIViewController *)vc
                                    lightHex:(NSString *)lightHex
                                     darkHex:(NSString *)darkHex
                               activeIsLight:(BOOL)activeIsLight
                                sourceButton:(nullable UIButton *)button
                                  onSelected:(void(^)(NSString *lightHex, NSString *darkHex))onSelected;

@end
```

---

## 5. 改动验证

| 检查项 | 预期 |
|--------|------|
| 编译 | 无 warning/error，无 `unused` 警告 |
| `grep -r "UIColorPickerViewController" MioPlugin/` | 无结果 |
| `grep -r "presentOnViewController" MioPlugin/` | 无结果 |
| `grep -r "WPColorPickerDelegate" MioPlugin/` | 无结果 |
| `grep -r "PluginConfig.h" WPColorPicker.m` | 无结果 |
| 点击任意颜色按钮 | 正常弹出 WPHsvColorPickerController |
| `makeColorButtonWithColor:` 调用方 | 仍正常工作（边框颜色按钮等不受影响） |
| iOS 13 设备测试 | 自定义选择器正常工作，无 iOS 13 特有崩溃 |

---

## 6. 清理统计

| 维度 | 清理前 | 清理后 | 减少 |
|------|-------|-------|:----:|
| 文件 | `WPColorPicker.h` + `.m` | 不变 | — |
| 总行数 | 176 行 | ~60 行 | **-66%** |
| 类数量 | 3 个 (WPColorPicker + _WPColorPickerDelegate + 匿名) | 1 个 (WPColorPicker) | **-2** |
| import 数 | 5 个 | 3 个 | **-2** |
| iOS API 依赖 | `UIColorPickerViewController`, `UIAlertController`, `objc_setAssociatedObject` | 无 iOS 版本判断 | **全零** |