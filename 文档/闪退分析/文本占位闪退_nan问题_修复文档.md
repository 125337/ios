# 文本占位闪退 & "nan" 问题 — 重构修复文档

## 一、问题描述

**症状：**
1. 在「文本占位」设置页的「占位文本」输入框中输入任意文字（如"请输入消息"），点击确定**可以保存**。
2. 进入任意聊天页面，**瞬间闪退**。
3. 重新打开微信进入设置页，「占位文本」显示为固定的 **`nan`**，不再是之前输入的文字。

---

## 二、根因分析

### 2.1 崩溃日志确认

**2026-06-10 05:01:38 崩溃日志** — `-[NSDecimalNumber length]: unrecognized selector`

```
"exceptionReason" : {
    "composed_message":"-[NSDecimalNumber length]: unrecognized selector sent to instance 0x2857f5490",
    "name":"NSInvalidArgumentException",
    "type":"objc-exception"
}
```

- **崩溃线程**：主线程 (`com.apple.main-thread`)
- **触发模块**：`Mio_arm64-1-2.dylib` (插件 Hook 代码)
- **调用栈**：CATransaction commit → layoutSubviews → 插件 Hook 代码 → `[NSDecimalNumber length]`

### 2.2 问题链路

```
用户输入文字 → onEditRowTap: → 无条件转 NSDecimalNumber
    → "请输入消息" → decimalNumberWithString: → NaN
    → KVC 赋值给 NSString * 属性 → 类型污染
    → NSUserDefaults 存储了 NSDecimalNumber(NaN)
    → 进入聊天 → layoutSubviews → Hook 触发
    → 读取 placeholderTextText → 拿到 NSDecimalNumber 对象
    → content.length → NSDecimalNumber 无 length 方法 → CRASH
    → 重启 → stringForKey: 返回 nil → 默认空字串
    → 但设置页残留 NaN 对象 → 显示为 "nan"
```

### 2.3 根本设计缺陷

**错误代码位置：** [SettingEntryHook.m → `onEditRowTap:` → 第 188-189 行](file:///www/wwwroot/ios/MioPlugin/Modules/SettingEntry/SettingEntryHook.m#L188-L189)

```objc
NSDecimalNumber *decimal = [NSDecimalNumber decimalNumberWithString:newValue];
[config setValue:decimal forKey:key];
```

核心问题不是某一行代码写错了，而是 **`onEditRowTap:` 无法知道输入值的类型**：

| 缺陷 | 说明 |
|------|------|
| **类型假设** | 硬编码假设所有输入值都是数值类型 |
| **无类型信息传递** | `addInputRowInGroup:` API 没有传递值类型的参数 |
| **KVC 滥用** | 用 `setValue:forKey:` 绕过类型系统，运行时无法校验 |

---

## 三、重构方案

### 3.1 思路

**核心原则：让输入行的创建者明确告知值的类型，而不是让保存逻辑去猜测。**

在 `addInputRowInGroup:` 方法中增加 `valueType` 参数，调用方传入 `InputValueTypeText`（文本）或 `InputValueTypeNumber`（数值），`onEditRowTap:` 根据该标识选择正确的保存方式。

**不做任何向后兼容** — 旧方法签名直接替换，所有调用点统一更新。

### 3.2 不兼容旧数据说明

NSUserDefaults 中如果残留了 NaN 的旧数据，`loadDefaults` 通过 `stringForKey:` 读取时会自动返回 nil，然后 `_placeholderTextText` 被设为空字符串。**旧数据不会导致崩溃，只是相当于恢复默认值**，这是安全的。

---

### 3.3 具体修改步骤

#### Step ①：定义输入类型枚举

在 [SettingCategoryController.h](file:///www/wwwroot/ios/MioPlugin/Settings/Common/SettingCategoryController.h) 中添加：

```objc
typedef NS_ENUM(NSInteger, InputValueType) {
    InputValueTypeNumber = 0,  // 数值
    InputValueTypeText         // 文本字符串
};
```

#### Step ②：替换 `addInputRowInGroup:` API 声明

**头文件** [SettingCategoryController.h](file:///www/wwwroot/ios/MioPlugin/Settings/Common/SettingCategoryController.h) — 将原来的两行声明替换为：

```objc
- (CGFloat)addInputRowInGroup:(UIView *)group
                        title:(NSString *)title
                          key:(NSString *)key
                        value:(NSString *)value
                         hint:(NSString *)hint
                    valueType:(InputValueType)valueType
                           cy:(CGFloat)cy
                        width:(CGFloat)w;

- (CGFloat)addInputRowInGroup:(UIView *)group
                        title:(NSString *)title
                          key:(NSString *)key
                        value:(NSString *)value
                         hint:(NSString *)hint
                    valueType:(InputValueType)valueType
                   alertTitle:(nullable NSString *)alertTitle
                 alertMessage:(nullable NSString *)alertMessage
                           cy:(CGFloat)cy
                        width:(CGFloat)w;
```

#### Step ③：替换 `addInputRowInGroup:` 实现

**实现文件** [SettingCategoryController.m](file:///www/wwwroot/ios/MioPlugin/Settings/Common/SettingCategoryController.m) — 修改第 303-331 行的两个方法：

**方法一（无 alert）：**

```objc
- (CGFloat)addInputRowInGroup:(UIView *)group
                        title:(NSString *)title
                          key:(NSString *)key
                        value:(NSString *)value
                         hint:(NSString *)hint
                    valueType:(InputValueType)valueType
                           cy:(CGFloat)cy
                        width:(CGFloat)w
{
    return [self addInputRowInGroup:group title:title key:key value:value
                               hint:hint valueType:valueType
                         alertTitle:nil alertMessage:nil cy:cy width:w];
}
```

**方法二（带 alert）：**

在 UITableView 路径的 row 字典中存入 `valueType`：

```objc
- (CGFloat)addInputRowInGroup:(UIView *)group
                        title:(NSString *)title
                          key:(NSString *)key
                        value:(NSString *)value
                         hint:(NSString *)hint
                    valueType:(InputValueType)valueType
                   alertTitle:(NSString *)alertTitle
                 alertMessage:(NSString *)alertMessage
                           cy:(CGFloat)cy
                        width:(CGFloat)w
{
    if ([group isKindOfClass:[UITableView class]]) {
        UITableView *table = (UITableView *)group;
        NSMutableDictionary *row = [NSMutableDictionary dictionary];
        row[@"type"] = @"input";
        row[@"title"] = title;
        row[@"key"] = key;
        row[@"valueType"] = @(valueType);     // ★ 新增：存入类型标识
        if (value.length > 0) row[@"value"] = value;
        if (hint.length > 0) row[@"hint"] = hint;
        if (alertTitle.length > 0) row[@"alertTitle"] = alertTitle;
        if (alertMessage.length > 0) row[@"alertMessage"] = alertMessage;
        [self addRowToTable:table row:row];
        return cy + kRowH;
    }

    // 非 UITableView 路径（旧版 UI 布局）保持不变...
    // ...（原有代码不变）
}
```

#### Step ④：修复 `onEditRowTap:` 保存逻辑

在 [SettingEntryHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/SettingEntry/SettingEntryHook.m) 中修改 `onEditRowTap:` 的确定回调：

```objc
[alert addAction:[UIAlertAction actionWithTitle:@"确定"
                                          style:UIAlertActionStyleDefault
                                        handler:^(UIAlertAction *action) {
    NSString *newValue = alert.textFields.firstObject.text ?: @"";
    @try {
        if (newValue.length == 0 && hint.length > 0) {
            newValue = hint;
        }

        // ★ 从 sender(cell) 获取 valueType
        NSNumber *typeNum = objc_getAssociatedObject(sender, @"editValueType");
        InputValueType valueType = typeNum ? [typeNum integerValue] : InputValueTypeNumber;

        if (valueType == InputValueTypeText) {
            // 文本类型：直接保存字符串
            [config setValue:newValue forKey:key];
        } else {
            // 数值类型：转为 NSDecimalNumber 保存
            NSDecimalNumber *decimal = [NSDecimalNumber decimalNumberWithString:newValue];
            [config setValue:decimal forKey:key];
        }

        [config save];
        WPLog(@"Setting", @"[EDIT] %@ = %@ (type=%ld)", key, newValue, (long)valueType);
        if (valueLabel) {
            valueLabel.text = newValue.length > 0 ? newValue : hint ?: @"";
        }
    } @catch (NSException *e) {
        WPLog(@"Setting", @"[ERR] save %@: %@ - %@", key, e.name, e.reason);
    }
}]];
```

同时在 `tableView:didSelectRowAtIndexPath:` 中把 `valueType` 传给 cell：

```objc
// 在 input 类型的点击处理中（第 947-966 行附近）
NSNumber *valueType = row[@"valueType"];
if (valueType) {
    objc_setAssociatedObject(cell, @"editValueType", valueType, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
```

#### Step ⑤：更新所有调用点

逐个修改所有调用 `addInputRowInGroup:` 的文件，在末尾增加 `valueType:` 参数。

##### 文本类型（InputValueTypeText）

| # | 文件 | 行号 | Key | 说明 |
|---|------|------|-----|------|
| 1 | [WPUIPlaceholderTextVC.m](file:///www/wwwroot/ios/MioPlugin/Modules/SettingEntry/WPUIPlaceholderTextVC.m) | 38 | `placeholderTextText` | **占位文本内容 — 本次 bug 的根源** |
| 2 | [SettingRedEnvelopController.m](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingRedEnvelopController.m) | 96 | `redEnvelopTextFilter` | 红包关键词过滤 |
| 3 | [SettingRedEnvelopController.m](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingRedEnvelopController.m) | 111 | `redEnvelopAutoReplyStr` | 红包自动回复内容 |
| 4 | [SettingRedEnvelopController.m](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingRedEnvelopController.m) | 149 | `autoConfirmTransferAutoReplyStr` | 转账自动回复内容 |
| 5 | [SettingDevToolsController.m](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingDevToolsController.m) | 107 | `nsLogKeywords` | 日志关键词过滤 |

修改示例（以 `WPUIPlaceholderTextVC.m` 第 38 行为例）：

```objc
// 修改前：
*ecy = [self addInputRowInGroup:expand title:@"占位文本"
                            key:@"placeholderTextText"
                          value:config.placeholderTextText
                           hint:@""
                            cy:*ecy width:w];

// 修改后：
*ecy = [self addInputRowInGroup:expand title:@"占位文本"
                            key:@"placeholderTextText"
                          value:config.placeholderTextText
                           hint:@""
                      valueType:InputValueTypeText   // ★ 新增
                            cy:*ecy width:w];
```

##### 数值类型（InputValueTypeNumber）

所有其他调用 `addInputRowInGroup:` 的位置，只需在末尾添加 `valueType:InputValueTypeNumber`。完整清单：

**WPUIPlaceholderTextVC.m：**
- L56：`placeholderTextFontSize`
- L75：`placeholderTextAlpha`

**SettingMessageTimeController.m：**
- L102：`messageTimeFontSize`
- L128：`messageTimeOffsetX`
- L130：`messageTimeOffsetY`
- L132：`messageTimeBubbleExtWidth`

**SettingRedEnvelopController.m：**
- L91：`redEnvelopDelay`
- L142：`autoConfirmTransferDelay`
- L144：`autoConfirmTransferMaxAmount`

**SettingListCornerRadiusController.m：**
- L93、L125、L137：各种圆角数值

**SettingCardBackgroundController.m：**
- L48、L101、L112、L150、L161、L181、L210：各种卡片数值

**WPUIAttachmentLayoutVC.m：**
- L37、L43：每行列数、显示行数

**SettingRevokeController.m：**
- L54：`notifySenderCooldown`

---

### 3.4 影响范围确认

| 维度 | 结论 |
|------|------|
| **入口 API** | 替换两个 `addInputRowInGroup:` 方法签名，不碰其他方法 |
| **调用点** | 全部更新，没有遗漏 |
| **保存逻辑** | 只改 `onEditRowTap:` 中的类型判断，不改变量名、不改变存储 key |
| **Hook 代码** | 零影响 — `PlaceholderTextHook.m`、`PluginConfig.m` 无需修改 |
| **旧数据** | NaN 旧数据在 `loadDefaults` 中会被 `stringForKey:` 安全过滤为 nil |
| **其他功能** | 红包、消息时间、聊天顶栏、卡片圆角等 — 继续走 `InputValueTypeNumber`，行为不变 |

**结论：不会影响其他功能。**

---

## 四、验证步骤

1. 按上述步骤修改代码
2. 编译安装插件
3. 验证「文本占位」：
   - 输入任意文字 → 保存正常，不显示 nan
   - 进入聊天 → 不闪退
   - 字体大小/透明度/颜色 → 正常
4. 验证其他设置项：
   - 红包关键词、回复内容 → 正常保存
   - 所有数值输入项 → 正常保存
5. 如果之前有残留的 NaN 旧数据，进入设置页确认显示为空而非 nan

---

## 五、涉及文件汇总

| 文件 | 改动类型 |
|------|---------|
| [SettingCategoryController.h](file:///www/wwwroot/ios/MioPlugin/Settings/Common/SettingCategoryController.h) | 添加 `InputValueType` 枚举，替换方法声明 |
| [SettingCategoryController.m](file:///www/wwwroot/ios/MioPlugin/Settings/Common/SettingCategoryController.m) | 替换方法实现，存入 `valueType` |
| [SettingEntryHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/SettingEntry/SettingEntryHook.m) | `onEditRowTap:` 根据 `valueType` 选择保存方式 |
| [WPUIPlaceholderTextVC.m](file:///www/wwwroot/ios/MioPlugin/Modules/SettingEntry/WPUIPlaceholderTextVC.m) | 占位文本传 `InputValueTypeText`，数值传 `InputValueTypeNumber` |
| [SettingRedEnvelopController.m](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingRedEnvelopController.m) | 文本字段传 `InputValueTypeText`，数值传 `InputValueTypeNumber` |
| [SettingMessageTimeController.m](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingMessageTimeController.m) | 所有为数值，传 `InputValueTypeNumber` |
| [SettingListCornerRadiusController.m](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingListCornerRadiusController.m) | 所有为数值，传 `InputValueTypeNumber` |
| [SettingCardBackgroundController.m](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingCardBackgroundController.m) | 所有为数值，传 `InputValueTypeNumber` |
| [WPUIAttachmentLayoutVC.m](file:///www/wwwroot/ios/MioPlugin/Modules/SettingEntry/WPUIAttachmentLayoutVC.m) | 所有为数值，传 `InputValueTypeNumber` |
| [SettingDevToolsController.m](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingDevToolsController.m) | `nsLogKeywords` 传 `InputValueTypeText` |
| [SettingRevokeController.m](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingRevokeController.m) | 数值，传 `InputValueTypeNumber` |
| [PlaceholderTextHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/PlaceholderText/PlaceholderTextHook.m) | **无需修改** |
| [PluginConfig.m](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m) | **无需修改** |