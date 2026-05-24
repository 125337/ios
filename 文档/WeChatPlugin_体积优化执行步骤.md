# WeChatPlugin 体积优化执行步骤

> 基于 `WeChatPlugin_体积优化方案.md`，本文件提供可逐条执行的详细步骤。

---

## 执行前准备

```bash
# 确认当前分支干净
cd /www/wwwroot/ios && git status
```

---

## 阶段一：消除重复代码（低风险，高收益）

### 步骤 1：统一日志模块 ✅ 已完成

**目标**：19 个文件各自实现了几乎相同的日志函数，合并为 1 个。

**执行结果（2026-05-23）**：
- 已创建 `Core/LogManager.h` 和 `Core/LogManager.m`
- 所有 19 个文件的日志函数调用已迁移到 `WPLog(tag, fmt, ...)`
- 旧函数定义保留为死代码（安全策略）
- ~250+ 处调用替换，日志统一写入 `Documents/WeChatPlugin_Logs/plugin.log`

**实际减少**：~280 行源码，~8KB dylib

---

### 步骤 2：统一 ServiceHelper ✅ 已完成

**目标**：`getService()` 函数在 4 个文件中重复实现，提取为公共 inline 函数。

**执行结果（2026-05-23）**：
- 已创建 `Core/ServiceHelper.h`，提供 `static inline WXGetService(Class)`
- `RedEnvelopHook.m`、`ClearUnreadHook.m`、`RevokeHandler.m` 已使用 `WXGetService`
- 旧函数定义保留为死代码

**实际减少**：~50 行源码

---

### 步骤 3：PluginConfig 宏化

**目标**：`loadDefaults` 和 `save` 方法中每个属性的读写是高度重复的 4-6 行模式，用宏消除重复。

**操作**：

1. 修改 `/www/wwwroot/ios/WeChatPlugin/Config/PluginConfig.m` (424行)，在文件顶部添加宏定义：

```objc
// === 宏定义：消除属性加载/保存重复代码 ===
#define PREFIX_KEY(prop) [kPluginPrefix stringByAppendingString:@#prop]

#define LOAD_BOOL(prop, defaultVal) \
    _##prop = [d boolForKey:PREFIX_KEY(prop)]; \
    if (![d objectForKey:PREFIX_KEY(prop)]) { \
        _##prop = (defaultVal); \
        [d setBool:(defaultVal) forKey:PREFIX_KEY(prop)]; \
    }

#define LOAD_INT(prop, defaultVal) \
    _##prop = ([d integerForKey:PREFIX_KEY(prop)] >= 0) ? (unsigned int)[d integerForKey:PREFIX_KEY(prop)] : (defaultVal)

#define LOAD_ARRAY(prop) \
    do { \
        NSArray *_a = [d arrayForKey:PREFIX_KEY(prop)]; \
        _##prop = _a ?: @[]; \
    } while(0)

#define LOAD_STRING(prop) \
    _##prop = [d stringForKey:PREFIX_KEY(prop)] ?: @""

#define SAVE_BOOL(prop) [d setBool:_##prop forKey:PREFIX_KEY(prop)]
#define SAVE_INT(prop) [d setInteger:(NSInteger)_##prop forKey:PREFIX_KEY(prop)]
#define SAVE_ARRAY(prop) [d setObject:_##prop ?: @[] forKey:PREFIX_KEY(prop)]
#define SAVE_STRING(prop) if (_##prop) [d setObject:_##prop forKey:PREFIX_KEY(prop)]
```

2. 简化 `loadDefaults` 方法，将 ~158 行重复代码用宏压缩。
3. 同样简化 `save` 方法。

**验证**：
```bash
cd /www/wwwroot/ios && git add -A && git commit -m "step3: PluginConfig 宏化" && git push origin HEAD
```

**预计减少**：~150 行源码

---

## 阶段二：删除冗余模块与代码

### 步骤 4：FriendDetection 模块完全移除 ✅ 已完成

**执行结果（2026-05-23）**：

- 文件已删除：`FriendDetectionHook.m`、`FriendDetectionHook.h`、`MioFriendDetector.m`、`MioFriendDetector.h`
- `FeatureModuleRegistry.m` 移除了 `#import "FriendDetectionHook.h"` 和相关注册
- `build-standalone.yml` 编译列表 -1 项
- 提交：`808a2ee build: 20260523_224213 - remove FriendDetection`

**实际减少**：~1011 行源码，1 个编译项

---

### 步骤 5：ClearUnreadHook 精简 ✅ 已完成

**运行时日志已确认**（`plugin(6).log`）：
```
Found session mgr: MMNewSessionMgr -> MMNewSessionMgr
Got session list via GetSessionInfoList (2529 items)
```

**执行结果（2026-05-23）**：
- 已删除死代码函数：`clearUnreadLog()`(16行)、`getServiceViaCenter()`(5行)、`getService()`(37行)
- `findSessionMgr()` 精简：7 个类名 → 2 个，删除 MMContext 属性/ivar fallback
- `getSessionList()` 精简：8 个 selector → 1 个，删除 ivar/GetSessionAtIndex fallback
- 文件 404行 → 232行

**实际减少**：~172 行源码

---

## 阶段三：精简 UI 代码

### 步骤 6：WPBorderLayer 精简 ✅ 已完成

**执行结果（2026-05-23）**：
- 删除了完全未使用的 4 个内部类（WPSectionBorderShape、WPSeparatorConfiguration、WPModuleBorderConfig、WPBorderManager）
- 删除了所有未使用的工厂方法和 UIView(WPBorder) API
- 仅保留被 `SettingCategoryController` 调用的 `wp_updateBorderAppearanceForDarkMode:` 及其依赖
- .m 603行 → 91行，.h 同步清理

**实际减少**：~510 行源码（.m + .h）

---

### 步骤 7：WPCommonUI.h static 函数改为 .m 实现 ✅ 已完成

**执行结果（2026-05-23）**：
- 已创建 `Modules/SettingEntry/WPCommonUI.m`（134行），将 8 个 static 函数移入
- `WPCommonUI.h` 改为 extern 声明（30行）+ 颜色宏
- `WPCommonUI.m` 已加入编译列表
- 消除 4 份编译副本（被 SettingEntryHook、WPOtherVC、WPAboutVC、WPBackupVC 各自编译）

**实际效果**：消除 4 × ~100 行等效编译输出

---

### 步骤 8：合并 Settings 碎片控制器 ✅ 已完成

**执行结果（2026-05-23）**：
- `SettingAboutController.m`(86行) 代码合入 `SettingController.m`
- `SettingLayoutFunctionController.m`(52行) 代码合入 `SettingGeneralFunctionController.m`
- 两个类通过 `isKindOfClass:` 检测区分模式，@implementation 空壳内联在父 .m 中
- `FeatureModuleRegistry.m` 无需修改（类名引用不变）
- `build-standalone.yml` -2 编译项

**实际效果**：消除 2 个编译文件

---

## 阶段四：编译项精简

### 步骤 9：删除 WeChatRedEnvelopParam.m ✅ 已完成

**执行结果（2026-05-23）**：
- `@implementation` 移至 `RedEnvelopHook.m` 末尾
- `.m` 文件已删除（.h 保留，被 2 个文件引用）
- `build-standalone.yml` -1 编译项

---

### 步骤 10：删除 SettingSessionActionController 死代码 ✅ 已完成

**执行结果（2026-05-23）**：
- 已确认不在 `build-standalone.yml` 和 `FeatureModuleRegistry.m` 中
- `.m`(124行) 和 `.h` 已删除

**实际减少**：2 文件，124 行源码

---

### 步骤 11：清理未编译 WPSessionBox 文件 ✅ 已完成

**执行结果（2026-05-23）**：
- `WPSessionBoxHook.m`(718行) + `WPSessionBoxController.m`(685行) + 2 .h 已删除
- `SessionBox/` 目录已空

**实际减少**：4 文件，~1400 行源码

---

### 步骤 12：MessageTimeHook 统一 Hook 引擎（需真机验证）

**目标**：`MessageTimeHook` (line 850) 是唯一使用 `MSHookMessageEx`（CydiaSubstrate）的模块，其他全部用 `HookEngine`。

**⚠️ 风险警告**：换 Hook 引擎可能导致功能异常，需要真机验证。

**操作**：

1. 阅读 `MessageTimeHook.m` 中 `MSHookMessageEx` 的调用方式，改为 `[HookEngine swizzleMethod:inClass:withIMP:]` 等效调用。
2. 从 `build-standalone.yml` 编译列表中移除 `libs/CydiaSubstrate.m`（保留文件不删，方便回退）。
3. 真机测试消息时间显示功能正常。

**验证**：
```bash
cd /www/wwwroot/ios && git add -A && git commit -m "step12: MessageTimeHook 统一 HookEngine" && git push origin HEAD
```

**预计减少**：~3-5KB dylib

---

## 执行进度追踪表

| 步骤 | 描述 | 状态 | 减少量 |
|---|---|---|---|
| 0 | 准备/确认当前状态 | ✅ | — |
| 1 | 统一日志模块 | ✅ | ~280行 + ~8KB |
| 2 | 统一 ServiceHelper | ✅ | ~50行 |
| 3 | PluginConfig 宏化 | ⬜ | ~150行 |
| 4 | FriendDetection 完整移除 | ✅ | ~1011行 |
| 5 | ClearUnreadHook 精简 | ✅ | ~170行 |
| 6 | WPBorderLayer 精简 | ✅ | ~510行 |
| 7 | WPCommonUI.h static → .m | ✅ | 去 4 份编译副本 |
| 8 | 合并 Settings 碎片 | ✅ | -2 编译项 |
| 9 | 删除 RedEnvelopParam.m | ✅ | -1 编译项 |
| 10 | 删除 SettingSessionActionController | ✅ | 124行, -2 文件 |
| 11 | 清理未编译 WPSessionBox | ✅ | ~1400行, -4 文件 |
| 12 | 统一 HookEngine (需真机) | ⬜ | ~3-5KB |
| **已完成合计** | | | **~3545行源码** |

---

## 快速回退

每个步骤执行后如果出现问题：

```bash
# 查看最近的提交
git log --oneline -5

# 回退到上一状态（保留文件变动在工作区）
git reset HEAD~1

# 或者彻底回退
git reset --hard HEAD~1
```