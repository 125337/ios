# WeChatPlugin (MioHelper) 体积优化方案

> **编译方式**: GitHub Actions (`build-standalone.yml`)，编译标志不动。

---

## 一、当前状态

| 指标 | 值 |
|------|----|
| 被编译的 .m 文件 | 39 个 |
| 源代码总行数 | ~12,540 行 |
| 已完成优化 | ✅ 删除 RedEnvelopOperation ✅ 删除空壳Controller ✅ 删除WPAlert |

---

## 二、已完成

| 项 | 效果 |
|----|------|
| 删除 `WPAlert.m/.h` | -305 行, RedEnvelopHook 已改用 WeChatAlertHelper |
| 删除 `WeChatRedEnvelopOperation.m/.h` (死代码) | -120 行 |
| 删除 `SettingAssistFunctionController` + `SettingUIBeautifyController` | -48 行, FeatureModuleRegistry 已清理 |

---

## 三、待优化：按严重程度排序

### 问题1：重复日志函数 — 21 个文件各自实现（打在 dylib 里的）

> 以下文件都在 `build-standalone.yml` 编译列表中，每一份日志函数都会编进 dylib。

| 文件 | 函数名 | ~行数 |
|------|--------|------|
| PluginConfig.m | `configLog` | 16 |
| RedEnvelopHook.m | `reLog` | 16 |
| FriendDetectionHook.m | `fdLog` | 16 |
| SettingEntryHook.m | `reLog` | 16 |
| ClearUnreadHook.m | `clearUnreadLog` | 16 |
| MessageTimeHook.m | `mtLog` | 16 |
| GroupExitHook.m | 日志函数 | 16 |
| JokerHook.m | `jokerLog` | 16 |
| AutoTransferHook.m | 日志函数 | 16 |
| RevokeHandler.m | `revokeLog` | 16 |
| RevokeHook.m | `hookLog` | 16 |
| WeChatRedEnvelopTaskManager.m | `tmLog` | 16 |
| SettingController.m | `reLog` | 16 |
| SettingRedEnvelopController.m | `configLog` | 16 |
| SettingSessionActionController.m | `saLog` | 16 |
| WeChatTweakGroupSelectsController.m | 日志函数 | 16 |
| WPAboutVC.m | `reLog` | 16 |
| WPBackupVC.m | 日志函数 | 16 |
| WPOtherVC.m | 日志函数 | 16 |
| TintHook.m | 日志函数 | 16 |

**影响**: ~330 行重复源码 → 编译后 20 份 NSFileHandle 机器码副本 → 约 8KB+

**方案**: 创建 `Core/LogManager.h/.m`，用 `WPLog(tag, fmt, ...)` 宏替换

**预计减少**: 310 行 + ~8KB

---

### 问题2：FriendDetectionHook.m — 1022 行，一半是探测代码

| 可删除内容 | 行数 |
|-----------|------|
| `scanAllServices()` + 调用 | ~150行 |
| `scanCGIClasses()` + 调用 | ~30行 |
| `installNetworkHook()` + 调用 | ~55行 |
| `installContactSyncHook()` + 调用 | ~30行 |
| `tryTransferDetection()` + 调用 | ~120行 |
| `hooked_OnGetTransferPrepayRequest` hook | ~20行 |
| `runBoundDetection` 中 dispatch_once 扫描块 | ~10行 |
| `FDViewDidLoad` 中 4 个 UIAlertController → WeChatAlertHelper | 调用侧精简 |
| **合计可删** | **~415行** |

**方案**: 删探测函数，UIAlertController 改 WeChatAlertHelper

**预计减少**: 400+ 行

---

### 问题3：PluginConfig.m — 配置加载/保存高度重复（441行）

`loadDefaults` 158 行 + `save` 96 行 = 254 行纯重复模式。

**方案**: 用宏批量处理

**预计减少**: 150+ 行

---

### 问题4：getService() — 6 个文件各自实现

| 文件 | 行数 |
|------|------|
| RedEnvelopHook.m | 7 |
| FriendDetectionHook.m | ~8 |
| ClearUnreadHook.m (含 getServiceViaCenter) | 35 |
| WeChatRedEnvelopTaskManager.m | ~8 |
| RevokeHandler.m | ~10 |

**方案**: 创建 `Core/ServiceHelper.h`，提供 `static inline WXService(Class)`

**预计减少**: 60+ 行重复

---

### 问题5：ClearUnreadHook — 多层 fallback（402行）

- `getService` 两层 fallback（lines 30-72）
- `findSessionMgr` 四层 fallback（lines 74-142）
- `getSessionList` 三层 fallback（lines 144-210）

> 微信版本固定，只命中一种路径。

**方案**: 只保留确定有效的那一条路径

**预计减少**: 180+ 行

---

### 问题6：WPBorderLayer.m — 过度设计（603行）

5 个类、12+ 工厂方法，核心功能可精简 80 行。

**方案**: 保留 `WPBorderLayer` + `UIView (WPBorder)` 核心方法，删其余 4 个类

**预计减少**: 520+ 行

---

### 问题7：WPCommonUI.h — static 函数被多份编译

121 行 `static` 函数在头文件中，每个 `#import` 该文件的 .m 产生一份副本。

**方案**: 拆为 .h(声明) + .m(实现，加入编译列表)

**预计减少**: 消除等效 ~600 行编译输出

---

### 问题8：Settings 控制器碎片化

9 个控制器文件。`SettingAboutController`(86行) 可合入 `SettingController`，`SettingLayoutFunctionController`(52行) 可合入 `SettingGeneralFunctionController`。

**方案**: 合并后删 2 个文件

**预计减少**: 150+ 行 + 2 文件

---

### 问题9：WeChatRedEnvelopParam.m — 4 行空实现还编进 dylib

只有 `@implementation WeChatRedEnvelopParam @end`，不需要单独 .m。

**方案**: 移到 RedEnvelopHook.m 底部，从编译列表删除

**预计减少**: 1 个编译文件

---

### 问题10：MessageTimeHook 独用 MSHookMessageEx

其余模块全用 HookEngine。如果迁移成功，可删 `libs/CydiaSubstrate.m` 编译。

**预计减少**: ~3-5KB

---

### 问题11：仓库中未编译的文件（占用但无贡献）

`WPSessionBoxHook.m/.h` + `WPSessionBoxController.m/.h` 不在编译列表中，占仓库空间但不进 dylib。可删。

---

## 四、优化总表

| # | 优化项 | 减少 | 文件变化 |
|---|--------|------|---------|
| 1 | 统一日志模块 | **310行** + ~8KB | +2 文件 |
| 2 | FriendDetection 删探测代码 | **400行** | 改1文件 |
| 3 | PluginConfig 宏化 | **150行** | 改1文件 |
| 4 | 统一 ServiceHelper | **60行** | +1 文件 |
| 5 | ClearUnreadHook 精简 | **180行** | 改1文件 |
| 6 | WPBorderLayer 精简 | **520行** | 改1文件 |
| 7 | WPCommonUI.h → .m | 消除多份副本 | +1 文件 |
| 8 | 合并 Settings 碎片 | **150行** | -2文件 |
| 9 | 删除 RedEnvelopParam.m 编译 | 1个编译项 | -1文件 |
| 10 | 统一 hook (可选) | ~3-5KB | -1编译项 |
| 11 | 清理未编译文件 (可选) | — | -4文件 |
| **合计** | | **~1770行** | **-3~8文件, +4文件** |

---

## 五、分阶段目标

| 阶段 | 内容 | 预计 dylib |
|------|------|-----------|
| 当前 | 已完成 3 项删除优化 | ~1.8-2.2 MB |
| +消除重复 | 日志+ServiceHelper+宏化 | ~1.5-1.9 MB |
| +删冗余 | FriendDetection探测+ClearUnread fallback | ~1.2-1.6 MB |
| +精简UI | BorderLayer+CommonUI+Settings合并 | ~1.0-1.4 MB |
| +收尾 | RedEnvelopParam+统一hook+清理 | ~900-1300 KB |
| **最终** | | **~900-1300 KB** |