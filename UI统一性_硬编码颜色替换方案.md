# UI 统一性 — 硬编码颜色替换方案（§3.2 + §3.3）

> 基于 [UI统一性分析报告.md](file:///www/wwwroot/ios/UI统一性分析报告.md) 复查结果

---

## 改动总览

| 问题 | 硬编码色值 | 替换为 | 文件数 | 处数 |
|------|-----------|--------|--------|------|
| 3.2 | `(0.722, 0.722, 0.749, 1.0)` | `WPTextTertiaryColor()` | 4 | 6 |
| 3.3 | `(0.200, 0.780, 0.349, 1.0)` | `WPAccentColor()` | 1 | 2 |

> **深色模式影响**：这些硬编码色值是浅色模式下的固定值。替换为 `WPColors` 函数后，iOS 13+ 会自动切换为系统语义色，暗黑模式下不再出现白底灰字/不可见文字。

---

## 一、3.2 硬编码 `WPT3()` 等效色值 → 替换

目标色值 `(0.722, 0.722, 0.749)` 与 `WPTextTertiaryColor()` 完全一致（[WPColors.h#L44-L47](file:///www/wwwroot/ios/WeChatPlugin/Config/WPColors.h#L44-L47)）：

```objc
static UIColor *WPTextTertiaryColor(void) {
    if (@available(iOS 13.0, *)) return [UIColor tertiaryLabelColor];
    return [UIColor colorWithRed:0.722 green:0.722 blue:0.749 alpha:1.0];
}
```

### 文件 1：[SettingController.m](file:///www/wwwroot/ios/WeChatPlugin/Settings/Controllers/SettingController.m)

已导入 `WPColors.h`（L3），无需新增 import。

| 行 | 上下文 | 原代码 | 改为 |
|----|------|-------|------|
| 61 | footer 文字颜色 | `[UIColor colorWithRed:0.722 green:0.722 blue:0.749 alpha:1.0]` | `WPTextTertiaryColor()` |
| 103-104 | `heroDesc` 降级颜色（`else` 分支） | `[UIColor colorWithRed:0.722 green:0.722 blue:0.749 alpha:1.0]` | `WPTextTertiaryColor()` |

> L103-104 已有 `if (@available(iOS 13.0, *))` 分支使用 `[UIColor tertiaryLabelColor]`，与 `WPTextTertiaryColor()` 内部逻辑完全相同。替换后可直接移除 if/else：

```objc
// 改前（L103-L104）
if (@available(iOS 13.0, *)) heroDesc.textColor = [UIColor tertiaryLabelColor];
else heroDesc.textColor = [UIColor colorWithRed:0.722 green:0.722 blue:0.749 alpha:1.0];

// 改后
heroDesc.textColor = WPTextTertiaryColor();
```

### 文件 2：[SettingRedEnvelopController.m](file:///www/wwwroot/ios/WeChatPlugin/Settings/Controllers/SettingRedEnvelopController.m)

需新增 import（当前未导入 WPColors.h 或 WPCommonUI.h）。

**步骤 1**：在 `#import "../../Core/LogManager.h"` 之后添加：

```objc
#import "../../Config/WPColors.h"
```

**步骤 2**：替换 2 处：

| 行 | 上下文 | 原代码 | 改为 |
|----|------|-------|------|
| 121 | 红包关闭时的 hint 文字 | `[UIColor colorWithRed:0.722 green:0.722 blue:0.749 alpha:1.0]` | `WPTextTertiaryColor()` |
| 160 | 自动收款关闭时的 hint 文字 | 同上 | `WPTextTertiaryColor()` |

### 文件 3：[WPUIPlaceholderTextVC.m](file:///www/wwwroot/ios/WeChatPlugin/Modules/SettingEntry/WPUIPlaceholderTextVC.m)

需新增 import。

**步骤 1**：在 `#import "../../Core/LogManager.h"` 之后添加：

```objc
#import "../../Config/WPColors.h"
```

**步骤 2**：

| 行 | 上下文 | 原代码 | 改为 |
|----|------|-------|------|
| 86 | 占位文本关闭时的 hint | `[UIColor colorWithRed:0.722 green:0.722 blue:0.749 alpha:1.0]` | `WPTextTertiaryColor()` |

### 文件 4：[WPUIAttachmentLayoutVC.m](file:///www/wwwroot/ios/WeChatPlugin/Modules/SettingEntry/WPUIAttachmentLayoutVC.m)

需新增 import。

**步骤 1**：在 `#import "../../Core/LogManager.h"` 之后添加：

```objc
#import "../../Config/WPColors.h"
```

**步骤 2**：

| 行 | 上下文 | 原代码 | 改为 |
|----|------|-------|------|
| 55 | 附件布局关闭时的 hint | `[UIColor colorWithRed:0.722 green:0.722 blue:0.749 alpha:1.0]` | `WPTextTertiaryColor()` |

---

## 二、3.3 硬编码 `WPAccent` 等效色值 → 替换

目标色值 `(0.200, 0.780, 0.349)` 与 `WPAccentColor()` 完全一致（[WPColors.h#L52-L54](file:///www/wwwroot/ios/WeChatPlugin/Config/WPColors.h#L52-L54)）：

```objc
static UIColor *WPAccentColor(void) {
    return [UIColor colorWithRed:0.200 green:0.780 blue:0.349 alpha:1.0];
}
```

> `SettingEntryHook.m` L80 已使用 `WPAccent()` 宏，`SettingController.m` 是唯一仍在硬编码此色值的文件。

### 仅影响 [SettingController.m](file:///www/wwwroot/ios/WeChatPlugin/Settings/Controllers/SettingController.m)

已导入 `WPColors.h`，无需新增 import。

| 行 | 上下文 | 原代码 | 改为 |
|----|------|-------|------|
| 51 | 主页 hero 标题 | `[UIColor colorWithRed:0.2 green:0.78 blue:0.349 alpha:1.0]` | `WPAccentColor()` |
| 89 | loadAboutView hero 标题 | 同上 | `WPAccentColor()` |

---

## 三、汇总：完整改动清单

| 文件 | 新增 import | 替换处数 | 
|------|------------|---------|
| [SettingController.m](file:///www/wwwroot/ios/WeChatPlugin/Settings/Controllers/SettingController.m) | 无 | 4 处 (L51, L61, L89, L103-104) |
| [SettingRedEnvelopController.m](file:///www/wwwroot/ios/WeChatPlugin/Settings/Controllers/SettingRedEnvelopController.m) | `#import "../../Config/WPColors.h"` | 2 处 (L121, L160) |
| [WPUIPlaceholderTextVC.m](file:///www/wwwroot/ios/WeChatPlugin/Modules/SettingEntry/WPUIPlaceholderTextVC.m) | `#import "../../Config/WPColors.h"` | 1 处 (L86) |
| [WPUIAttachmentLayoutVC.m](file:///www/wwwroot/ios/WeChatPlugin/Modules/SettingEntry/WPUIAttachmentLayoutVC.m) | `#import "../../Config/WPColors.h"` | 1 处 (L55) |

> **共 4 个文件，3 个新增 import，8 处替换。改动量约 5 分钟，无编译风险。**

---

## 四、验证

- 编译通过
- 浅色模式下所有页面文字颜色与改前一致
- 暗黑模式下 hint 文字自动变为系统 tertiaryLabelColor（不再硬编码为浅灰色）
- `SettingController` hero 标题在两种模式下均显示正确的品牌绿色

## 五、附：SettingController.m L103-104 简化前后对比

```objc
// 改前 — 手动 if/else（与 WPTextTertiaryColor 内部逻辑重复）
if (@available(iOS 13.0, *)) heroDesc.textColor = [UIColor tertiaryLabelColor];
else heroDesc.textColor = [UIColor colorWithRed:0.722 green:0.722 blue:0.749 alpha:1.0];

// 改后 — 一行搞定
heroDesc.textColor = WPTextTertiaryColor();
```

> 此简化属于 3.2 改动的一部分，L103-L104 的两行替换为一行即完成。