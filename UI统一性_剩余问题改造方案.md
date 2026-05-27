# UI 统一性 — 剩余问题改造方案

> 基于 [UI统一性分析报告.md](file:///www/wwwroot/ios/UI统一性分析报告.md) 剩余两个 B 级问题

---

## 一、颜色引用别名冗余 → 消除

### 现状

[SettingCategoryController.m](file:///www/wwwroot/ios/WeChatPlugin/Settings/Common/SettingCategoryController.m) 定义了 7 个颜色宏别名（L34-L40），与 `WPCommonUI.h` 中已有的宏功能完全等效：

| 待删除别名 | 替换为 | 映射函数 |
|-----------|--------|---------|
| `bgColor()` | `WPBgColor()` | `WPBackgroundColor()` |
| `cardBgColor()` | `WPCardBg()` | `WPCardBackgroundColor()` |
| `textPrimary()` | `WPT1()` | `WPTextPrimaryColor()` |
| `textSecondary()` | `WPT2()` | `WPTextSecondaryColor()` |
| `textTertiary()` | `WPT3()` | `WPTextTertiaryColor()` |
| `switchOnColor()` | `WPSwOn()` | `WPSwitchOnColor()` |
| `separatorColor()` | `WPSepColor()` | `WPSeparatorColor()` |

### 波及范围

**仅影响 SettingCategoryController.m 自身**。WP*VC 页面已使用 `WPT1()`/`WPCardBg()` 等宏；Setting*Controller 页面通过基类方法间接使用，不直接引用这些别名。

### 改动步骤

**第一步**：删除 [L34-L40](file:///www/wwwroot/ios/WeChatPlugin/Settings/Common/SettingCategoryController.m#L34-L40) 的 7 行宏定义

```objc
// 删除以下 7 行
#define bgColor() WPBackgroundColor()
#define cardBgColor() WPCardBackgroundColor()
#define textPrimary() WPTextPrimaryColor()
#define textSecondary() WPTextSecondaryColor()
#define textTertiary() WPTextTertiaryColor()
#define switchOnColor() WPSwitchOnColor()
#define separatorColor() WPSeparatorColor()
```

**第二步**：在该文件中做以下替换（共 24 处）：

| 行号 | 原代码 | 改为 |
|------|-------|------|
| 140 | `self.view.backgroundColor = bgColor();` | `WPBgColor()` |
| 147 | `self.scrollView.backgroundColor = bgColor();` | `WPBgColor()` |
| 193 | `l.textColor = textTertiary();` | `WPT3()` |
| 209 | `tl.textColor = textPrimary();` | `WPT1()` |
| 217 | `dl.textColor = textSecondary();` | `WPT2()` |
| 240 | `tl.textColor = textPrimary();` | `WPT1()` |
| 248 | `dl.textColor = textSecondary();` | `WPT2()` |
| 255 | `sw.onTintColor = switchOnColor();` | `WPSwOn()` |
| 270 | `tl.textColor = textPrimary();` | `WPT1()` |
| 276 | `sw.onTintColor = switchOnColor();` | `WPSwOn()` |
| 299 | `l.textColor = textTertiary();` | `WPT3()` |
| 311 | `tl.textColor = textPrimary();` | `WPT1()` |
| 318 | `hl.textColor = textSecondary();` | `WPT2()` |
| 348 | `l.textColor = textSecondary();` | `WPT2()` |
| 359 | `tl.textColor = textPrimary();` | `WPT1()` |
| 380 | `sepView.backgroundColor = separatorColor();` | `WPSepColor()` |
| 389 | `container.backgroundColor = cardBgColor();` | `WPCardBg()` |

> 建议直接在 IDE 中用查找替换：`bgColor()` → `WPBgColor()`、`cardBgColor()` → `WPCardBg()`、`textPrimary()` → `WPT1()`、`textSecondary()` → `WPT2()`、`textTertiary()` → `WPT3()`、`switchOnColor()` → `WPSwOn()`、`separatorColor()` → `WPSepColor()`。

### 验证

- 编译通过
- 所有设置页面颜色显示正常（深色/浅色模式均需验证）

---

## 二、导航/跳转行差异（低优先级，暂不改造）

### 现状

| | `WPAddNavRow` (WPCommonUI) | `addNavRowInGroup:` (SettingCategoryController) |
|---|---|---|
| 使用方 | [SettingEntryHook.m](file:///www/wwwroot/ios/WeChatPlugin/Modules/SettingEntry/SettingEntryHook.m#L113) 仅 1 处 | Setting*Controller 系列 10+ 处 |
| 行高 | 固定 44px | 支持 subtitle 时动态增高 |
| 回调 | `onNavigate:` + 关联 action 字符串 | `rowTapped:` + tag |
| 箭头 | `WPDrawDisclosureArrow` ✅ | `WPDrawDisclosureArrow` ✅ |

### 不改的理由

- `SettingEntryHook.m` 是 Hook 入口文件，不继承 `SettingCategoryController`，无法调用 `addNavRowInGroup:`
- 箭头已统一（均调用 `WPDrawDisclosureArrow`）
- 回调机制差异是设计取舍：Hook 文件用字符串 action 动态路由，Setting*Controller 用 SEL 静态分发
- 目前无新页面同时需要两种跳转行，改动收益低

### 如果将来要统一

若后续需要统一，可将 `WPAddNavRow` 的回调方式改为与 `addNavRowInGroup:` 一致的 tag+selector 模式，或让 `SettingEntryHook` 也使用 `addNavRowInGroup:`（需要一个 `SettingCategoryController` 实例作为 target，当前 Hook 文件结构不适合）。

---

## 执行优先级

| 序号 | 问题 | 工作量 | 风险 | 优先级 |
|------|------|--------|------|--------|
| 1 | 颜色别名消除 | 约 10 分钟（纯文本替换） | 低（功能等效） | **中** |
| 2 | 导航行统一 | 需要架构调整 | 中 | **低（暂不改）** |

> 建议先完成第 1 项，改完后删除 `UI统一性分析报告.md` 中此条目，将该项评级更新为 A。