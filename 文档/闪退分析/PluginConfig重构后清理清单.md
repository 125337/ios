# PluginConfig 重构后清理清单

> 重构已完成。本文记录所有待清理的残留项，均为注释或 UI 文本，无功能性 Bug。

---

## 一、注释中的 PluginConfig 字符串

共 3 处，均为注释说明文字，建议更新为对应模块名称。

### 1. UIAttachLayoutHook.m 第 18 行

**文件**：`/www/wwwroot/ios/MioPlugin/Modules/Layout/UIAttachLayoutHook.m`

**当前代码**：
```objc
// 读取配置（统一使用 PluginConfig，保证与设置页面一致）
```

**改为**：
```objc
// 读取配置（统一使用 AttachLayoutConfig，保证与设置页面一致）
```

---

### 2. HideAvatarHook.m 第 150 行

**文件**：`/www/wwwroot/ios/MioPlugin/Modules/HideAvatar/HideAvatarHook.m`

**当前代码**：
```objc
// ── 查表: (聊天类型, isSender) → PluginConfig 对应属性 ──
```

**改为**：
```objc
// ── 查表: (聊天类型, isSender) → HideAvatarConfig 对应属性 ──
```

---

### 3. ChatTopBarBlacklistEditorVC.m 第 30 行

**文件**：`/www/wwwroot/ios/MioPlugin/Settings/Controllers/ChatTopBarBlacklistEditorVC.m`

**当前代码**：
```objc
// 加载已有黑名单（优先使用传入的 blacklist，fallback PluginConfig）
```

**改为**：
```objc
// 加载已有黑名单（优先使用传入的 blacklist，fallback ChatTopBarConfig）
```

---

## 二、UI 文本中的 PluginConfig 字符串

共 2 处，均为界面显示文本（模块名称标签）。建议改为不耦合类名的标识符。

### 4. SettingController.m 第 116 行

**文件**：`/www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingController.m`

**当前代码**：
```objc
@"PluginConfig", @"配置中心"
```

**改为**：
```objc
@"MioPlugin", @"配置中心"
```

---

### 5. WPAboutVC.m 第 65 行

**文件**：`/www/wwwroot/ios/MioPlugin/Modules/SettingEntry/WPAboutVC.m`

**当前代码**：
```objc
@[@"PluginConfig", @"配置中心"];
```

**改为**：
```objc
@[@"MioPlugin", @"配置中心"];
```

---

## 三、顺手清理（非必须）

### 6. ChatTopBarConfig.m 第 9 行 — 冗余 import

**文件**：`/www/wwwroot/ios/MioPlugin/Modules/ChatTopBar/ChatTopBarConfig.m`

**当前代码**：
```objc
#import "ChatTopBarConfig.h"
#import "ConfigDescriptor.h"   // ← 冗余，ConfigModule.h 已链式导入
```

**改为**：
```objc
#import "ChatTopBarConfig.h"
```

---

## 四、清理汇总

| 序号 | 文件 | 行号 | 类型 | 改动量 |
|------|------|------|------|--------|
| 1 | UIAttachLayoutHook.m | 18 | 注释 | 1 行 |
| 2 | HideAvatarHook.m | 150 | 注释 | 1 行 |
| 3 | ChatTopBarBlacklistEditorVC.m | 30 | 注释 | 1 行 |
| 4 | SettingController.m | 116 | UI 文本 | 1 行 |
| 5 | WPAboutVC.m | 65 | UI 文本 | 1 行 |
| 6 | ChatTopBarConfig.m | 9 | 冗余 import | 1 行 |

**合计**：6 处改动，共 6 行代码。

---

## 五、验证清单

| 验证项 | 命令 | 预期 |
|-------|------|------|
| 无 PluginConfig 注释 | `grep -rn "PluginConfig" MioPlugin/` | 仅剩以上 5 处字符串 |
| 编译通过 | Build 项目 | 0 warning, 0 error |
| 设置功能正常 | 打开设置页检查 | 界面显示正确 |