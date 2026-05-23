# WeChatPlugin (MioHelper) 体积优化方案

> **编译方式**: GitHub Actions (`build-standalone.yml`, 38个 .m 文件)，编译标志不动。

---

## 一、当前状态

| 指标 | 值 |
|------|----|
| .m 源文件 (编译列表) | 38 个 |
| .m 源文件 (全仓) | 40 个（含 2 个未编译死代码） |
| 源码总行数 | ~12,400 行 |
| build-standalone.yml | `-Oz` ✅ / `-Wl,-S` ✅ / `-Wl,-x` ✅ |

---

## 二、已完成

| # | 项 | 效果 |
|---|----|------|
| 1 | 删除 `WPAlert.m/.h` | -305行, RedEnvelopHook 改用 WeChatAlertHelper ✅ |
| 2 | 删除 `WeChatRedEnvelopOperation.m/.h` (死代码) | -120行 |
| 3 | 删除 `SettingAssistFunctionController` + `SettingUIBeautifyController` | -48行, FeatureModuleRegistry 已清理 |
| 4 | FriendDetectionHook `onDetailTap` 弹窗 | 已改 WeChatAlertHelper ✅ |
| 5 | 统一日志模块 (LogManager.h/.m) | ~250+ 处调用迁移，19 文件 ✅ |
| 6 | 统一 ServiceHelper.h | 4 文件 getService 去重 ✅ |

---

## 三、待优化问题（10项，按严重程度排序）

### 问题1：FriendDetectionHook.m — 1011行→377行，已完成精简 ✅

已删除：
- `scanAllServices()` + dispatch_once调用
- `scanCGIClasses()` + 调用
- `installNetworkHook()` + 调用
- `installContactSyncHook()` + 调用
- `tryTransferDetection()` + 调用 + `hooked_OnGetTransferPrepayRequest`
- `MioFriendDetector.tryLocalDetection:` 方法（合并到 `runDetection()`）
- 未使用的 `#import "../../Core/ServiceHelper.h"`

**方案**: 只保留 CContactMgr 本地属性检测

**已减少**: ~450+行

---

### 问题2：PluginConfig.m — 配置加载/保存高度重复（424行）

`loadDefaults` + `save` = ~250行纯重复模式，每个属性 4-6行。

**方案**: 用宏批量处理

**预计减少**: 150+行

---

### 问题3：ClearUnreadHook — 已精简 ✅（404行→232行）

`findSessionMgr()` 和 `getSessionList()` 多层 fallback 已删除，只保留运行时日志确认的有效路径（MMNewSessionMgr + GetSessionInfoList）。

**已减少**: 172行

---

### 问题4：WPBorderLayer.m — 过度设计（603行），已精简 ✅

603行 → 93行，删除了完全未使用的 4 个内部类（WPSectionBorderShape、WPSeparatorConfiguration、WPModuleBorderConfig、WPBorderManager）和所有未使用的工厂方法/UIView(WPBorder) API。仅保留被 SettingCategoryController 调用的 `wp_updateBorderAppearanceForDarkMode:` 及其依赖。

**已减少**: ~500行

---

### 问题5：WPCommonUI.h — static 函数被多份编译，已修复 ✅

已创建 `WPCommonUI.m`（加入编译列表），头文件改为 extern 声明。消除 4 份编译副本。

---

### 问题6：Settings 控制器碎片化

| 文件 | 行数 | 操作 |
|------|------|------|
| `SettingAboutController.m/.h` | 86行 | 合入 `SettingController` |
| `SettingLayoutFunctionController.m/.h` | 52行 | 合入 `SettingGeneralFunctionController` |

FeatureModuleRegistry 中仍有这两个控制器的注册引用。

**方案**: 合并后删 4 文件，更新 FeatureModuleRegistry

**预计减少**: 100+行 + 2 编译项

---

### 问题7：WeChatRedEnvelopParam.m — 4 行空实现

只有 `@implementation WeChatRedEnvelopParam @end`。

**方案**: 移到 RedEnvelopHook.m 底部，从编译列表删除

**预计减少**: 1 个编译文件

---

### 问题8：MessageTimeHook 独用 MSHookMessageEx

其余模块全用 HookEngine。`MessageTimeHook.m` line 850 调用 `MSHookMessageEx`。

**方案**: 迁移后删 `libs/CydiaSubstrate.m` 编译（需真机验证）

**预计减少**: ~3-5KB

---

### 问题9：SettingSessionActionController — 死代码（124行）

`SettingSessionActionController.m/.h` (124行) 存在于仓库但：
- 不在 `build-standalone.yml` 编译列表中
- 未被 FeatureModuleRegistry 引用
- 未被任何其他文件 import

**方案**: 直接删除

**预计减少**: 2 个仓库文件

---

### 问题10：WPSessionBox 未编译文件占用仓库空间

`WPSessionBoxHook.m` (718行) + `WPSessionBoxController.m` (685行) + 2 .h 文件，不在编译列表中，不进 dylib 但占仓库。

---

## 四、优化总表

| # | 优化项 | 减少 | 文件变化 | 状态 |
|---|--------|------|---------|------|
| 1 | 统一日志模块 | **280行** + ~8KB | +2文件, 改19文件 | ✅ |
| 2 | 统一 ServiceHelper | **50行** | +1文件, 改4文件 | ✅ |
| 3 | FriendDetection 删探测代码 | **~450行** | 改1文件 | ✅ |
| 4 | PluginConfig 宏化 | **150行** | 改1文件 | ⬜ |
| 5 | ClearUnreadHook 精简 | **~170行** | 改1文件 | ✅ |
| 6 | WPBorderLayer 精简 | **~500行** | 改1文件(.m+.h) | ✅ |
| 7 | WPCommonUI.h → .m | 消除多份副本 | +1文件, 改1文件 | ✅ |
| 8 | 合并 Settings 碎片 | **~100行** | -2文件, 改2文件 | ✅ |
| 9 | 删除 RedEnvelopParam.m | 1编译项 | -1文件 | ⬜ |
| 10 | 删除 SettingSessionActionController (死代码) | — | -2文件 | ⬜ |
| 11 | 统一 hook (需真机验证) | ~3-5KB | -1编译项 | ⬜ |
| 12 | 清理未编译 WPSessionBox | — | -4文件 | ⬜ |
| **合计** | | **~1560行源码** | **-10~14文件, +4文件** | |

---

## 五、分阶段目标

| 阶段 | 内容 | 预计 dylib | 状态 |
|------|------|-----------|------|
| 当前 | 已完成 6 项优化 | ~445K | ✅ |
| +消除重复 | 日志+ServiceHelper+宏化 | — | 日志+ServiceHelper ✅, 宏化 ⬜ |
| +删冗余 | FriendDetection探测+ClearUnread fallback+RedEnvelopParam+SessionAction | ~1.2-1.6 MB | ✅ FriendDetection+ClearUnread, 其余 ⬜ |
| +精简UI | BorderLayer+CommonUI+Settings合并 | ~1.0-1.4 MB | ✅ |
| +收尾 | 统一hook+清理WPSessionBox | ~900-1300 KB | ⬜ |