# WeChatPlugin (MioHelper) 体积优化方案

> **编译方式**: GitHub Actions (`build-standalone.yml`, 39个 .m 文件)，编译标志不动。

---

## 一、当前状态

| 指标 | 值 |
|------|----|
| .m 源文件 (编译列表) | 39 个 |
| .h 源文件 | 39 个 |
| 源码总行数 | ~12,435 行 |
| build-standalone.yml | `-Oz` ✅ / `-Wl,-S` ✅ / `-Wl,-x` ✅ |

---

## 二、已完成

| # | 项 | 效果 |
|---|----|------|
| 1 | 删除 `WPAlert.m/.h` | -305行, RedEnvelopHook 改用 WeChatAlertHelper ✅ |
| 2 | 删除 `WeChatRedEnvelopOperation.m/.h` (死代码) | -120行 |
| 3 | 删除 `SettingAssistFunctionController` + `SettingUIBeautifyController` | -48行, FeatureModuleRegistry 已清理 |
| 4 | FriendDetectionHook `onDetailTap` 弹窗 | 已改 WeChatAlertHelper (line 503) ✅ |

---

## 三、待优化问题（11项，按严重程度排序）

### 问题1：重复日志函数 — 19 个编译文件各自实现

`build-standalone.yml` 编译的 39 个 .m 中，以下 19 个有独立日志函数：

| 文件 | 函数名 | ~行数 | 写入日志文件 |
|------|--------|------|------------|
| PluginConfig.m | `configLog` | 16 | redenvelop.log |
| RedEnvelopHook.m | `reLog` | 16 | redenvelop.log |
| FriendDetectionHook.m | `fdLog` | 16 | friend_detection.log |
| SettingCategoryController.m | `configLog` | 16 | redenvelop.log |
| SettingEntryHook.m | `reLog` | ~16 | — |
| ClearUnreadHook.m | `clearUnreadLog` | ~16 | — |
| MessageTimeHook.m | `mtLog` | ~16 | — |
| GroupExitHook.m | 日志函数 | ~16 | — |
| JokerHook.m | `jokerLog` | ~16 | — |
| AutoTransferHook.m | 日志函数 | ~16 | — |
| RevokeHandler.m | `revokeLog` | ~16 | — |
| RevokeHook.m | `hookLog` | ~16 | — |
| WeChatRedEnvelopTaskManager.m | `tmLog` | ~16 | — |
| SettingController.m | `reLog` | ~16 | — |
| SettingRedEnvelopController.m | `configLog` | ~16 | — |
| SettingSessionActionController.m | `saLog` | ~16 | — |
| WPAboutVC.m | `reLog` | ~16 | — |
| WPBackupVC.m | 日志函数 | ~16 | — |
| WPOtherVC.m | 日志函数 | ~16 | — |

**影响**: ~300 行重复 → 编译后 18 份 NSFileHandle 机器码副本 → ~8KB

**方案**: 创建 `Core/LogManager.h/.m`，用 `WPLog(tag, fmt, ...)` 宏替换

**预计减少**: 280行 + ~8KB

---

### 问题2：FriendDetectionHook.m — 1022行，~40% 是探测代码

当前可删除内容：

| 内容 | 行数 | 说明 |
|------|------|------|
| `scanAllServices()` + dispatch_once调用 | ~155 | 全局类扫描，生产无用 |
| `scanCGIClasses()` + 调用 | ~30 | CGI类扫描 |
| `installNetworkHook()` + 调用 | ~55 | 网络探测hook |
| `installContactSyncHook()` + 调用 | ~30 | 联系人同步探测 |
| `tryTransferDetection()` + 调用 + `hooked_OnGetTransferPrepayRequest` | ~140 | 转账预检，不产生有效结果 |
| `FDViewDidLoad` 中 4 个 UIAlertController | 可改为 WeChatAlertHelper | 弹窗统一 |
| **可删合计** | **~410行** | |

**方案**: 删探测函数，runBoundDetection 直接走本地检测，UIAlertController 改 WeChatAlertHelper

**预计减少**: 400+行

---

### 问题3：PluginConfig.m — 配置加载/保存高度重复（441行）

`loadDefaults` (lines 55-213, 158行) + `save` (lines 215-311, 96行) = 254行纯重复模式，每个属性 4-6行。

**方案**: 用宏批量处理

**预计减少**: 150+行

---

### 问题4：getService() — 4 个编译文件各自实现

| 文件 | 行数 |
|------|------|
| RedEnvelopHook.m | 7 (lines 30-36) |
| FriendDetectionHook.m | ~8 (内联) |
| ClearUnreadHook.m | ~37 (含 getServiceViaCenter) |
| RevokeHandler.m | ~10 |

**方案**: 创建 `Core/ServiceHelper.h`，提供 `static inline WXService(Class)`

**预计减少**: 50+行重复

---

### 问题5：ClearUnreadHook — 多层 fallback（402行）

`findSessionMgr()` 4层 fallback (7个类名→5个属性→4个ivar)，`getSessionList()` 3层 (8个selector→6个ivar→逐个索引)。

> 微信版本固定，只命中一种路径。

**方案**: 只保留确定有效的一条路径

**预计减少**: 180+行

---

### 问题6：WPBorderLayer.m — 过度设计（603行）

5 个类、12+ 工厂方法 → 核心功能可精简至 80 行。

**方案**: 保留 WPBorderLayer + UIView(WPBorder) category，删 WPSectionBorderShape 等 4 个类

**预计减少**: 520+行

---

### 问题7：WPCommonUI.h — static 函数被多份编译（121行）

121行 `static` 函数在头文件中，每个 `#import` 的 .m 产生一份副本。

**方案**: 拆为 .h(声明) + .m(实现，加入编译列表)

**预计减少**: 消除 ~600 行等效编译输出

---

### 问题8：Settings 控制器碎片化（9 个控制器文件）

`SettingAboutController`(86行) → 合入 `SettingController`。  
`SettingLayoutFunctionController`(52行) → 合入 `SettingGeneralFunctionController`。

**方案**: 合并后删 2 文件

**预计减少**: 100+行 + 2文件

---

### 问题9：WeChatRedEnvelopParam.m — 4 行空实现

只有 `@implementation WeChatRedEnvelopParam @end`。

**方案**: 移到 RedEnvelopHook.m 底部，从编译列表删除

**预计减少**: 1 个编译文件

---

### 问题10：MessageTimeHook 独用 MSHookMessageEx

其余模块全用 HookEngine。

**方案**: 迁移后删 `libs/CydiaSubstrate.m` 编译（需真机验证）

**预计减少**: ~3-5KB

---

### 问题11：未编译文件占用仓库空间

`WPSessionBoxHook.m/.h` + `WPSessionBoxController.m/.h` 不在编译列表中，不进 dylib 但占仓库。

---

## 四、优化总表

| # | 优化项 | 减少 | 文件变化 |
|---|--------|------|---------|
| 1 | 统一日志模块 | **280行** + ~8KB | +2文件 |
| 2 | FriendDetection 删探测代码 | **400行** | 改1文件 |
| 3 | PluginConfig 宏化 | **150行** | 改1文件 |
| 4 | 统一 ServiceHelper | **50行** | +1文件 |
| 5 | ClearUnreadHook 精简 | **180行** | 改1文件 |
| 6 | WPBorderLayer 精简 | **520行** | 改1文件 |
| 7 | WPCommonUI.h → .m | 消除多份副本 | +1文件 |
| 8 | 合并 Settings 碎片 | **100行** | -2文件 |
| 9 | 删除 RedEnvelopParam.m | 1编译项 | -1文件 |
| 10 | 统一 hook (需真机验证) | ~3-5KB | -1编译项 |
| 11 | 清理未编译文件 | — | -4文件 |
| **合计** | | **~1680行** | **-3~7文件, +4文件** |

---

## 五、分阶段目标

| 阶段 | 内容 | 预计 dylib |
|------|------|-----------|
| 当前 | 已完成 4 项优化 | ~1.8-2.2 MB |
| +消除重复 | 日志+ServiceHelper+宏化 | ~1.5-1.9 MB |
| +删冗余 | FriendDetection探测+ClearUnread fallback+RedEnvelopParam | ~1.2-1.6 MB |
| +精简UI | BorderLayer+CommonUI+Settings合并 | ~1.0-1.4 MB |
| +收尾 | 统一hook+清理文件 | ~900-1300 KB |