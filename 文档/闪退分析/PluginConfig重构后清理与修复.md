# PluginConfig 重构后 — 问题修复与死代码清理

> **目的**：分析重构后的代码质量问题，清理死代码，确保架构干净完整。

---

## 一、现状总览

重构已完成的核心工作：
- ✅ 15 个模块 Config 类创建（均实现 ConfigModule 协议 + 描述符表）
- ✅ ConfigManager + ConfigDescriptor + ConfigModule 基础设施
- ✅ Tweak.m 注册全部 15 个模块并调用 `[ConfigManager loadAll]`
- ✅ SettingCategoryController 已切换为 `[ConfigManager setValue:forKey:]`
- ✅ 全部 9 个设置控制器已切换引用模块 Config

### 当前文件结构

```
MioPlugin/
├── Core/
│   ├── ConfigManager.h/.m          ✅ 新建
│   ├── ConfigDescriptor.h/.m        ✅ 新建
│   └── ConfigModule.h               ✅ 新建
├── Config/
│   ├── PluginConfig.h               ⚠️ 仍有 80+ 属性声明 → 死代码
│   └── PluginConfig.m               ⚠️ 仍有 save/loadDefaults → 死代码
├── Modules/
│   ├── Revoke/RevokeConfig.h/.m     ✅ 新建（含数字段+工具方法迁移）
│   ├── ChatTopBar/ChatTopBarConfig.h/.m ✅ 新建
│   ├── MessageTime/MessageTimeConfig.h/.m ✅ 新建
│   ├── RedEnvelop/RedEnvelopConfig.h/.m  ✅ 新建
│   ├── AutoTransfer/AutoTransferConfig.h/.m ✅ 新建
│   ├── ListCornerRadius/ListCornerRadiusConfig.h/.m ✅ 新建
│   ├── ProfileCardBg/CardBgConfig.h/.m  ✅ 新建
│   ├── GroupExit/GroupExitConfig.h/.m   ✅ 新建
│   ├── Joker/JokerConfig.h/.m          ✅ 新建
│   ├── Unread/ClearUnreadConfig.h/.m   ✅ 新建
│   ├── Layout/UIPurifyConfig.h/.m     ✅ 新建
│   ├── Layout/AttachLayoutConfig.h/.m  ✅ 新建
│   ├── HideAvatar/HideAvatarConfig.h/.m ✅ 新建
│   ├── PlaceholderText/PlaceholderTextConfig.h/.m ✅ 新建
│   └── DevTools/DevToolsConfig.h/.m   ✅ 新建
└── Settings/
    └── Controllers/ (全部 9 个)       ✅ 已切换模块 Config
```

---

## 二、问题发现与修复方案

### 问题 1：`colorFromHex:` / `isDarkMode` 等工具方法仍在 PluginConfig 上

**涉及文件**：
- [ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m) — 第 211/279/304/366/688 行
- [MessageTimeHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/MessageTime/MessageTimeHook.m) — 第 601/631-634 行

**当前代码**：
```objc
// ListCornerRadiusHook.m
BOOL isDark = [[PluginConfig shared] isDarkModeForViewController:vc];  // 4 处
BOOL isDark = [PluginConfig shared].isDarkMode;                         // 1 处

// MessageTimeHook.m
[PluginConfig shared].isDarkMode,                                       // 1 处
[[PluginConfig shared] colorFromHex:textHex]                            // 4 处
```

**根因**：工具方法 `colorFromHex:`、`hexFromColor:`、`isDarkMode`、`isDarkModeForViewController:` 被多个模块共用，不应该属于任何一个模块 Config。

**修复方案**：将这些工具方法移到 `Config/WPColorUtil.m` 或新建 `Core/WPUtility.m`，以类方法形式提供：

```objc
// Core/WPUtility.h
@interface WPUtility : NSObject
+ (UIColor *)colorFromHex:(NSString *)hex;
+ (NSString *)hexFromColor:(UIColor *)color;
+ (BOOL)isDarkMode;
+ (BOOL)isDarkModeForViewController:(UIViewController *)vc;
@end
```

同时删除 `PluginConfig` 中的同名方法，调用方全部替换为 `[WPUtility xxx]`。

**影响范围**：2 个调用文件，需要：
1. 创建 `Core/WPUtility.h/.m`
2. 删除 `PluginConfig.m` 中的 `colorFromHex:`、`hexFromColor:`、`isDarkMode`、`isDarkModeForViewController:`
3. 修改 ListCornerRadiusHook.m 和 MessageTimeHook.m 的 import 和方法调用

---

### 问题 2：`applyTemplate:` / `applyRevokeTemplate:` 在 PluginConfig 和 RevokeConfig 重复

**当前状态**：
- [PluginConfig.m](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m) 第 757-779 行 — 有 `applyTemplate:` 和 `applyRevokeTemplate:`
- [RevokeConfig.m](file:///www/wwwroot/ios/MioPlugin/Modules/Revoke/RevokeConfig.m) — 已迁移了这些方法

**是否存在问题**：如果 `RevokeConfig` 已正确实现这些方法且 `RevokeHandler.m` 改为引用 `RevokeConfig`，则 PluginConfig 中的是死代码。需验证 `RevokeHandler.m` 的引用情况。

**验证方式**：搜索 `applyTemplate` 和 `applyRevokeTemplate` 的调用方：

```
grep -rn "applyTemplate\|applyRevokeTemplate" MioPlugin/
```

如果所有调用方都已从 PluginConfig 改为 RevokeConfig，则 PluginConfig 中的重复代码直接删除。

---

### 问题 3：PluginConfig.h/m 整体成为死代码

**现状**：
- [PluginConfig.h](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.h) — 198 行，仍有 80+ 个 @property 声明
- [PluginConfig.m](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m) — 804 行，包含：
  - `loadDefaults` ~460 行
  - `save` ~230 行
  - `resetAllConfig` ~50 行
  - 旧 key 迁移逻辑（第 36-48 行）
  - 工具方法 ~40 行

**修复方案**：清理后仅保留以下方法（如果仍有调用方）：
- `notifyFormatForSession:user:` → 已经在 RevokeConfig 中实现
- 上述 4 个工具方法 → 移到 WPUtility

**最终状态**：`Config/PluginConfig.h` 和 `Config/PluginConfig.m` 可以完全删除。

---

### 问题 4：部分 Hook 文件有多余的 `#import "PluginConfig.h"`

**涉及文件**（这些文件已使用模块 Config，但还保留了 PluginConfig 的 import）：

| 文件 | 是否还使用 PluginConfig? | 状态 |
|------|------------------------|------|
| Modules/RedEnvelop/RedEnvelopHook.m | 已用 `[RedEnvelopConfig shared]` | PluginConfig.h import 多余 |
| Modules/AutoTransfer/AutoTransferHook.m | 已用 `[AutoTransferConfig shared]` | PluginConfig.h import 多余 |
| Modules/HideAvatar/HideAvatarHook.m | 已用 `[HideAvatarConfig shared]` | PluginConfig.h import 多余 |
| Modules/Unread/ClearUnreadHook.m | 可能已用 `[ClearUnreadConfig shared]` | 需验证后删除 |
| Modules/GroupExit/GroupExitHook.m | 已用 `[GroupExitConfig shared]` | PluginConfig.h import 多余 |
| Modules/SettingEntry/WPUIAttachmentLayoutVC.m | 已用 `[AttachLayoutConfig shared]` | PluginConfig.h import 多余 |
| Modules/SettingEntry/WPUIPurifyVC.m | 已用 `[UIPurifyConfig shared]` | PluginConfig.h import 多余 |
| Modules/ListCornerRadius/ListCornerRadiusHook.m | 仅用 `isDarkMode`/`isDarkModeForViewController:` | 待迁移到 WPUtility |
| Modules/MessageTime/MessageTimeHook.m | 仅用 `isDarkMode`/`colorFromHex:` | 待迁移到 WPUtility |

**修复方案**：除 ListCornerRadiusHook.m 和 MessageTimeHook.m 外，其余文件直接删除 `#import "PluginConfig.h"`。

---

### 问题 5：`SettingCardBackgroundController.m` 的 `config` 变量声明不统一

**现状**：
```objc
// 第 28 行
CardBgConfig *config = [CardBgConfig shared];
// ...
// 第 143 行 — 又在子 Builder 中重新声明
CardBgConfig *c3 = [CardBgConfig shared];
```

虽然没错，但风格不一致。`c3` 的命名含义不明，应在子 Builder 中统一用 `config` 或不用重新声明。

**修复方案**：第 143 行的 `c3` 改为 `config`，保持一致性。

---

### 问题 6：[ConfigManager 的 `setValue:forKey:` 效率问题](file:///www/wwwroot/ios/MioPlugin/Core/ConfigManager.m#L109-L119)

**现状**：每次调用遍历所有模块的所有描述符来匹配 key（O(n*m) 复杂度）。

```objc
+ (void)setValue:(id)value forKey:(NSString *)key {
    for (Class<ConfigModule> cls in s_registeredModules) {          // 15 个模块
        id instance = [cls shared];
        for (ConfigDescriptor *desc in [cls descriptors]) {         // 每个模块 ~10-20 个描述符
            if ([desc.key isEqualToString:key]) {                   // 匹配
                [instance setValue:value forKey:key];
                return;
            }
        }
    }
}
```

**问题**：每次开关切换执行 15×15=225 次字符串比较。但考虑到这是 jailbreak tweak 场景，用户操作频率很低（手动点开关），**当前影响可忽略**。用户无感知，不需要优化。

**建议**：标记为潜在优化点，但暂不处理。如果需要优化，可构建一个 `NSDictionary *keyToModuleMap` 缓存。

---

## 三、死代码清理清单

### 3.1 可安全删除的代码

| 文件 | 删除内容 | 行数 | 前置条件 |
|------|---------|------|---------|
| `PluginConfig.h` | **整个文件** | ~198 行 | 确认所有调用方已迁移 |
| `PluginConfig.m` | **整个文件** | ~804 行 | 确认所有调用方已迁移 |
| `RedEnvelopHook.m` | `#import "../../Config/PluginConfig.h"` | 1 行 | — |
| `AutoTransferHook.m` | `#import "../../Config/PluginConfig.h"` | 1 行 | — |
| `HideAvatarHook.m` | `#import "../../Config/PluginConfig.h"` | 1 行 | — |
| `GroupExitHook.m` | `#import "../../Config/PluginConfig.h"` | 1 行 | — |
| `ClearUnreadHook.m` | 需验证后删除 `#import` | 1 行 | 验证是否还有 PluginConfig 引用 |
| `WPUIAttachmentLayoutVC.m` | `#import "../../Config/PluginConfig.h"` | 1 行 | — |
| `WPUIPurifyVC.m` | `#import "../../Config/PluginConfig.h"` | 1 行 | — |
| **合计可删除** | | **~1007 行** | |

> 注：在删除 `PluginConfig.m` 之前，检查是否有「重写」了 PluginConfig 方法的子类或 category。`@synthesize` 如果没有显式写，用的是 autosynthesis，不影响。

### 3.2 需要先迁移再删除的代码

| 代码 | 迁移目标 | 涉及文件 |
|------|---------|---------|
| `PluginConfig.colorFromHex:` | `WPUtility.colorFromHex:` | MessageTimeHook.m, ListCornerRadiusHook.m |
| `PluginConfig.hexFromColor:` | `WPUtility.hexFromColor:` | —（检查调用方） |
| `PluginConfig.isDarkMode` | `WPUtility.isDarkMode` | ListCornerRadiusHook.m, MessageTimeHook.m |
| `PluginConfig.isDarkModeForViewController:` | `WPUtility.isDarkModeForViewController:` | ListCornerRadiusHook.m |
| `PluginConfig.applyTemplate:` | RevokeConfig.applyTemplate: | —（已迁移，验证调用方） |
| `PluginConfig.applyRevokeTemplate:` | RevokeConfig.applyRevokeTemplate: | —（已迁移，验证调用方） |
| `PluginConfig.notifyFormatForSession:user:` | RevokeConfig.notifyFormatForSession:user: | —（已迁移，验证调用方） |

### 3.3 清理后文件结构

```
MioPlugin/
├── Core/
│   ├── ConfigManager.h/.m              ✅ 保留
│   ├── ConfigDescriptor.h/.m            ✅ 保留
│   ├── ConfigModule.h                   ✅ 保留
│   └── WPUtility.h/.m                   🔜 新建（迁移工具方法）
├── Config/
│   ├── (PluginConfig.h/m 删除)          🗑️ 删除
│   ├── Constants.h                      ✅ 保留
│   ├── WPColors.h                       ✅ 保留
│   ├── WPColorPicker.h                  ✅ 保留
│   └── WPColorUtil.h                    ✅ 保留
├── Modules/ (15 个模块各自 Config)       ✅ 保留
└── Settings/ (全部 9 个设置控制器)       ✅ 保留
```

---

## 四、执行步骤

### 步骤 1：创建 WPUtility 工具类

- 新建 `Core/WPUtility.h` 和 `Core/WPUtility.m`
- 从 `PluginConfig.m` 复制以下方法：
  - `colorFromHex:`
  - `hexFromColor:`
  - `isDarkMode`
  - `isDarkModeForViewController:`

### 步骤 2：切换调用方

| 文件 | 改动 |
|------|------|
| ListCornerRadiusHook.m | `#import "PluginConfig.h"` → `#import "../../Core/WPUtility.h"`，全部 `[PluginConfig shared].isDarkMode` → `[WPUtility isDarkMode]`，`[[PluginConfig shared] isDarkModeForViewController:vc]` → `[WPUtility isDarkModeForViewController:vc]` |
| MessageTimeHook.m | 添加 `#import "../../Core/WPUtility.h"`，全部 `[[PluginConfig shared] colorFromHex:]` → `[WPUtility colorFromHex:]`，`[PluginConfig shared].isDarkMode` → `[WPUtility isDarkMode]` |

### 步骤 3：删除冗余 import

| 文件 | 操作 |
|------|------|
| RedEnvelopHook.m | 删除 `#import "../../Config/PluginConfig.h"` |
| AutoTransferHook.m | 删除 `#import "../../Config/PluginConfig.h"` |
| HideAvatarHook.m | 删除 `#import "../../Config/PluginConfig.h"` |
| GroupExitHook.m | 删除 `#import "../../Config/PluginConfig.h"` |
| WPUIAttachmentLayoutVC.m | 删除 `#import "../../Config/PluginConfig.h"` |
| WPUIPurifyVC.m | 删除 `#import "../../Config/PluginConfig.h"` |

### 步骤 4：验证无引用后删除 PluginConfig

1. 全局搜索 `[PluginConfig shared]` — 确认无结果（工具方法已迁移）
2. 全局搜索 `PluginConfig` — 确认仅剩 `WPAboutVC.m` 中的字符串 `@"PluginConfig"`（这是界面文本，不是引用）
3. 删除 `Config/PluginConfig.h`
4. 删除 `Config/PluginConfig.m`

### 步骤 5：清理 SettingCardBackgroundController.m

- 第 143 行的 `CardBgConfig *c3 = [CardBgConfig shared];` → 改为 `CardBgConfig *config = [CardBgConfig shared];`，或删除该行复用已有变量

---

## 五、验证清单

| 验证项 | 方法 | 预期 |
|-------|------|------|
| 编译通过 | Build | 0 warning, 0 error |
| 设置读写 | 切换所有开关 → 杀进程 → 重启 → 检查 | 所有设置正确保存/恢复 |
| 工具方法 | 进入聊天页（触发 isDarkMode/colorFromHex）| 颜色正常渲染，无崩溃 |
| 死代码 | 全局搜索 `[PluginConfig shared]` | 0 结果 |

---

## 六、依赖关系总图

```
Tweak.m
  └── ConfigManager.registerModule(15个模块)
        └── ConfigManager.loadAll()
              └── RevokeConfig.descriptors()
              └── ChatTopBarConfig.descriptors()
              └── MessageTimeConfig.descriptors()
              ...

SettingControllers (9个)
  ├── SettingCardBackgroundController
  │     ├── CardBgConfig          ← import
  │     └── ListCornerRadiusConfig ← import
  ├── SettingChatTopBarController → ChatTopBarConfig
  ├── SettingRedEnvelopController → RedEnvelopConfig + AutoTransferConfig
  ├── SettingRevokeController     → RevokeConfig
  ├── SettingMessageTimeController → MessageTimeConfig
  ├── SettingGeneralFunctionController → RevokeConfig + ClearUnreadConfig + ...
  ├── SettingAvatarHideController → HideAvatarConfig
  ├── SettingDevToolsController   → DevToolsConfig
  └── SettingListCornerRadiusController → ListCornerRadiusConfig

Hook Modules (15个)
  ├── ChatTopBarHook              → ChatTopBarConfig
  ├── MioChatAvatarTitleView      → ChatTopBarConfig
  ├── ProfileCardBgHook           → CardBgConfig + ListCornerRadiusConfig
  ├── ListCornerRadiusHook        → WPUtility (原 PluginConfig 工具方法)
  ├── MessageTimeHook             → MessageTimeConfig + WPUtility
  ├── RedEnvelopHook              → RedEnvelopConfig
  ├── RevokeHandler               → RevokeConfig
  ├── JokerHook                   → JokerConfig
  ├── GroupExitHook               → GroupExitConfig
  ├── AutoTransferHook            → AutoTransferConfig
  ├── HideAvatarHook              → HideAvatarConfig
  ├── ClearUnreadHook             → ClearUnreadConfig
  ├── PlaceholderTextHook         → PlaceholderTextConfig
  ├── UIPurifyHook                → UIPurifyConfig
  └── UIAttachLayoutHook          → AttachLayoutConfig
```