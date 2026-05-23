# WeChatPlugin 体积优化执行步骤

> 基于 `WeChatPlugin_体积优化方案.md`，本文件提供可逐条执行的详细步骤。

---

## 执行前准备

```bash
# 确认当前分支干净
cd /www/wwwroot/ios && git status

# 每次修改完一个步骤后执行编译验证
# 验证通过后创建一个 checkpoint commit，方便回溯
```

---

## 阶段一：消除重复代码（低风险，高收益）

### 步骤 1：统一日志模块 ✅ 已完成

**目标**：19 个文件各自实现了几乎相同的日志函数，合并为 1 个。

**执行结果（2026-05-23）**：
- 已创建 `Core/LogManager.h` 和 `Core/LogManager.m`
- `LogManager.m` 已加入 `build-standalone.yml` 编译列表
- 所有 19 个文件的日志函数调用已迁移到 `WPLog(tag, fmt, ...)`
- 旧函数定义保留为死代码（安全策略，可在后续版本清理）
- ~250+ 处 `reLog`/`fdLog`/`mtLog` 等调用已替换

**tag 映射表**：

| 文件 | 旧函数 | 新 tag |
|---|---|---|
| `RedEnvelopHook.m` | `reLog` | `RedEnv` |
| `PluginConfig.m` | `configLog` | `Config` |
| `WeChatRedEnvelopTaskManager.m` | `tmLog` | `RedEnv` |
| `FriendDetectionHook.m` | `fdLog` | `FriendDetect` |
| `ClearUnreadHook.m` | `clearUnreadLog` | `ClearUnread` |
| `SettingCategoryController.m` | `configLog` | `Config` |
| `SettingEntryHook.m` | `reLog` | `Setting` |
| `MessageTimeHook.m` | `mtLog` | `MsgTime` |
| `JokerHook.m` | `jokerLog` | `Joker` |
| `AutoTransferHook.m` | `atLog` | `AutoTransfer` |
| `RevokeHandler.m` | `revokeLog` | `Revoke` |
| `RevokeHook.m` | `hookLog` | `Revoke` |
| `SettingController.m` | `reLog` | `Setting` |
| `SettingRedEnvelopController.m` | `configLog` | `Setting` |
| `SettingSessionActionController.m` | `saLog` | `Setting` |
| `WPAboutVC.m` | `reLog` | `UI` |
| `WPBackupVC.m` | `reLog` | `UI` |
| `WPOtherVC.m` | `reLog` | `UI` |
| `GroupExitHook.m` | 保留 | `GroupExit` |

**验证**：编译通过，运行时日志写入 `Documents/WeChatPlugin_Logs/plugin.log`

**预计减少**：~280 行源码，~8KB dylib

---

### 步骤 2：统一 ServiceHelper ✅ 已完成

**目标**：`getService()` 函数在 4 个文件中重复实现，提取为公共 inline 函数。

**执行结果（2026-05-23）**：
- 已创建 `Core/ServiceHelper.h`，提供 `static inline WXGetService(Class)`
- 4 个文件已 import `ServiceHelper.h`：
  - `RedEnvelopHook.m` — 使用 `WXGetService`
  - `ClearUnreadHook.m` — 使用 `WXGetService`
  - `RevokeHandler.m` — 使用 `WXGetService`
  - `FriendDetectionHook.m` — import 了但未使用（保留 import，后续可去）
- 旧函数定义保留为死代码

**验证**：编译通过

**预计减少**：~50 行源码

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

2. 简化 `loadDefaults` 方法，将原本 ~158 行的重复代码用宏压缩。

3. 同样简化 `save` 方法。

**验证**：
```bash
cd /www/wwwroot/ios && git add -A && git commit -m "step3: PluginConfig 宏化" && git push origin HEAD
```

**预计减少**：~150 行源码

---

## 阶段二：删除冗余探测代码

### 步骤 4：FriendDetectionHook 删除探测代码 ✅ 已完成

**目标**：删除 `scanAllServices`、`scanCGIClasses`、`installNetworkHook`、`installContactSyncHook`、`tryTransferDetection` 等不产生有效结果的探测函数。

**执行结果（2026-05-23）**：
- 已删除以下探测函数及关联代码：
  - `scanAllServices()` (~147行) + 相关 pragma 注释
  - `scanCGIClasses()` (~30行)
  - `installNetworkHook()` (~51行) + `orig_CNetworkMgr_sendRequest` + `hooked_CNetworkMgr_sendRequest` (~20行)
  - `installContactSyncHook()` (~28行) + `orig_CContactMgr_onContactListChanged` + `hooked_CContactMgr_onContactListChanged` (~6行)
  - `tryTransferDetection()` (~118行) + `g_transferResults` + `orig_OnGetTransferPrepayRequest` + `hooked_OnGetTransferPrepayRequest` (~23行)
  - 转账预检测、CGI扫描、网络hook、联系人同步hook 等策略注释块
- `runBoundDetection()` 简化为纯 CContactMgr 本地属性检测（去除了 dispatch_once 探测调用和转账预检步骤）
- `startFriendDetection()` 移除了冗余的 tryLocalDetection fallback
- 移除了未使用的 `#import "../../Core/ServiceHelper.h"`
- 移除了 `MioFriendDetector.tryLocalDetection:` 方法（功能已合并到 `runDetection()`）
- 文件从 **1011行 → 377行**

**验证**：待编译验证

**实际减少**：~450行源码（含注释头简化），~634行净删除

---

### 步骤 5：ClearUnreadHook 精简 ✅ 已完成

**目标**：`findSessionMgr()` 尝试 7 个类名 + 5 个属性 + 4 个 ivar，`getSessionList()` 尝试 8 个 selector + 6 个 ivar + GetSessionAtIndex 逐个索引。微信版本固定时只命中一条路径。

**运行时日志已确认**（`plugin(6).log`）：
```
Found session mgr: MMNewSessionMgr -> MMNewSessionMgr
Got session list via GetSessionInfoList (2529 items)
```

**执行结果（2026-05-23）**：
- 已删除死代码函数：
  - `clearUnreadLog()` (16行)
  - `getServiceViaCenter()` (5行)
  - `getService()` (37行)
- `findSessionMgr()` 精简：7个类名 → 2个，删除 MMContext 属性/ivar 枚举等 fallback (~59行删除)
- `getSessionList()` 精简：8个selector → 1个，删除 ivar 枚举、GetSessionAtIndex 逐个索引等 fallback (~59行删除)
- 文件从 **404行 → 232行**

**验证**：待编译验证

**实际减少**：~172行源码

---

## 阶段三：精简 UI 代码

### 步骤 6：WPBorderLayer 精简

**目标**：WPBorderLayer.m 共 603 行，5 个类、12+ 工厂方法，核心功能约 80 行。

**操作**：编辑 `/www/wwwroot/ios/WeChatPlugin/Settings/Common/WPBorderLayer.m`

1. 保留 `WPBorderLayer` 类及其绘制核心逻辑。
2. 保留 `UIView(WPBorder)` category，因为多处使用 `wp_addBorder...` 和 `wp_updateBorderAppearanceForDarkMode` 接口。
3. 删除多余的内部类和未被调用的工厂方法。

   确认调用方：
   ```bash
   cd /www/wwwroot/ios && grep -rn "mainBorderLayer\|leftBorderLayer\|rightBorderLayer\|bottomBorderLayer\|topBorderLayer" WeChatPlugin/
   ```

**验证**：
```bash
cd /www/wwwroot/ios && git add -A && git commit -m "step6: 精简 WPBorderLayer" && git push origin HEAD
```

**预计减少**：~400 行源码

---

### 步骤 7：WPCommonUI.h static 函数改为 .m 实现

**目标**：`WPCommonUI.h` 中 121 行 `static` 函数，被 4 个 .m 文件各自编译一份副本（SettingEntryHook、WPOtherVC、WPAboutVC、WPBackupVC）。

**操作**：

1. 创建 `/www/wwwroot/ios/WeChatPlugin/Modules/SettingEntry/WPCommonUI.m`，将 `.h` 中的 `static` 函数实现移入，去掉 `static` 关键字：

```objc
#import "WPCommonUI.h"

const CGFloat kPad = 18.0;
const CGFloat kRadius = 12.0;
const CGFloat kRowH = 44.0;

Class WPGetBaseClass(void) { ... }
UIScrollView *WPMakeSV(UIViewController *vc) { ... }
UIView *WPMakeCard(CGFloat top, CGFloat w) { ... }
UILabel *WPMakeSectionHeader(NSString *text, CGFloat top, CGFloat w) { ... }
void WPAddSwitchRow(UIView *card, CGFloat cy, CGFloat cw, NSString *title, NSString *key, BOOL on, id target) { ... }
void WPAddNavRow(UIView *card, CGFloat cy, CGFloat cw, NSString *title, NSString *action, id target) { ... }
void WPAddSep(UIView *card, CGFloat cy, CGFloat cw) { ... }
void WPAddInfoRow(UIView *card, CGFloat cy, CGFloat cw, NSString *left, NSString *right) { ... }
```

2. 修改 `WPCommonUI.h`，将函数改为声明（去掉 `static` 和实现体）：

```objc
// 颜色宏保留（无需改）
#define WPBgColor() WPBackgroundColor()
#define WPCardBg() WPCardBackgroundColor()
// ... 其他宏 ...

// 函数声明
extern const CGFloat kPad;
extern const CGFloat kRadius;
extern const CGFloat kRowH;

Class WPGetBaseClass(void);
UIScrollView *WPMakeSV(UIViewController *vc);
UIView *WPMakeCard(CGFloat top, CGFloat w);
UILabel *WPMakeSectionHeader(NSString *text, CGFloat top, CGFloat w);
void WPAddSwitchRow(UIView *card, CGFloat cy, CGFloat cw, NSString *title, NSString *key, BOOL on, id target);
void WPAddNavRow(UIView *card, CGFloat cy, CGFloat cw, NSString *title, NSString *action, id target);
void WPAddSep(UIView *card, CGFloat cy, CGFloat cw);
void WPAddInfoRow(UIView *card, CGFloat cy, CGFloat cw, NSString *left, NSString *right);
```

3. 在 `build-standalone.yml` 中追加 `WPCommonUI.m` 到编译列表。

**验证**：
```bash
cd /www/wwwroot/ios && git add -A && git commit -m "step7: WPCommonUI.h static → .m" && git push origin HEAD
```

**预计减少**：消除 4 份编译副本（4 × 121 = 484 行等效编译输出）

---

### 步骤 8：合并 Settings 碎片控制器

**目标**：`SettingAboutController`(86行) 和 `SettingLayoutFunctionController`(52行) 功能简单，可合并到父控制器。

**操作**：

1. 将 `SettingAboutController.m` 的核心逻辑移入 `SettingController.m`。
2. 将 `SettingLayoutFunctionController.m` 的核心逻辑移入 `SettingGeneralFunctionController.m`。
3. 修改 `FeatureModuleRegistry.m` (lines 56, 61-62)，将 class 引用改为父控制器：

   ```objc
   // SettingLayoutFunctionController → SettingGeneralFunctionController
   // SettingAboutController → SettingController
   ```

4. 删除文件：
   ```bash
   rm WeChatPlugin/Settings/Controllers/SettingAboutController.m
   rm WeChatPlugin/Settings/Controllers/SettingAboutController.h
   rm WeChatPlugin/Settings/Controllers/SettingLayoutFunctionController.m
   rm WeChatPlugin/Settings/Controllers/SettingLayoutFunctionController.h
   ```

5. 在 `build-standalone.yml` 中删除这两项的编译条目（lines 72, 74）。

**验证**：
```bash
cd /www/wwwroot/ios && git add -A && git commit -m "step8: 合并 Settings 碎片" && git push origin HEAD
```

**预计减少**：~100 行源码，2 个编译文件

---

## 阶段四：编译项精简

### 步骤 9：删除 WeChatRedEnvelopParam.m（仅 4 行空实现）

**目标**：`WeChatRedEnvelopParam.m` 只有 4 行空 `@implementation`。

**操作**：

1. 将 `@implementation WeChatRedEnvelopParam @end` 追加到 `RedEnvelopHook.m` 末尾。
2. 删除文件：
   ```bash
   rm WeChatPlugin/Modules/RedEnvelop/WeChatRedEnvelopParam.m
   # 保留 .h 文件（其他文件可能引用）
   ```
3. 在 `build-standalone.yml` 中移除 `WeChatRedEnvelopParam.m` 编译条目（line 51）。

**验证**：
```bash
cd /www/wwwroot/ios && git add -A && git commit -m "step9: 删除 RedEnvelopParam.m 空文件" && git push origin HEAD
```

**预计减少**：1 个编译文件

---

### 步骤 10：删除 SettingSessionActionController（死代码）

**目标**：`SettingSessionActionController.m/.h` (124行) 不在编译列表中，未被任何文件引用。

**操作**：

```bash
# 确认不在编译列表中
grep -r "SettingSessionActionController" /www/wwwroot/ios/.github/workflows/build-standalone.yml
# 无输出 → 确认未编译

# 确认无其他文件引用
grep -rn "SettingSessionActionController" /www/wwwroot/ios/WeChatPlugin/ --include="*.m" --include="*.h"
# 仅自身文件 → 死代码

# 删除
rm /www/wwwroot/ios/WeChatPlugin/Settings/Controllers/SettingSessionActionController.m
rm /www/wwwroot/ios/WeChatPlugin/Settings/Controllers/SettingSessionActionController.h
```

**验证**：
```bash
cd /www/wwwroot/ios && git add -A && git commit -m "step10: 删除未编译 SettingSessionActionController" && git push origin HEAD
```

**预计减少**：2 个仓库文件，124 行源码

---

### 步骤 11：清理未编译 WPSessionBox 文件

**目标**：`WPSessionBoxHook.m` (718行) + `WPSessionBoxController.m` (685行) + 2 .h 文件，不在编译列表中。

**操作**：

```bash
# 确认不在编译列表中
grep -r "WPSessionBox" /www/wwwroot/ios/.github/workflows/build-standalone.yml
# 无输出 → 确认未编译

# 删除
rm /www/wwwroot/ios/WeChatPlugin/Modules/SessionBox/WPSessionBoxHook.m
rm /www/wwwroot/ios/WeChatPlugin/Modules/SessionBox/WPSessionBoxHook.h
rm /www/wwwroot/ios/WeChatPlugin/Modules/SessionBox/WPSessionBoxController.m
rm /www/wwwroot/ios/WeChatPlugin/Modules/SessionBox/WPSessionBoxController.h

# 如果 SessionBox 目录已空，删除目录
rmdir /www/wwwroot/ios/WeChatPlugin/Modules/SessionBox 2>/dev/null
```

**验证**：
```bash
cd /www/wwwroot/ios && git add -A && git commit -m "step11: 清理未编译 WPSessionBox 文件" && git push origin HEAD
```

**预计减少**：4 个仓库文件，~1400 行源码

---

### 步骤 12：MessageTimeHook 统一 Hook 引擎（需真机验证）

**目标**：`MessageTimeHook` (line 850) 是唯一使用 `MSHookMessageEx`（CydiaSubstrate）的模块，其他全部用 `HookEngine`。

**⚠️ 风险警告**：换 Hook 引擎可能导致功能异常，需要真机验证。

**操作**：

1. 阅读 `MessageTimeHook.m` 中 `MSHookMessageEx` 的调用方式，改为 `[HookEngine swizzleMethod:inClass:withIMP:]` 等效调用。
2. 从 `build-standalone.yml` 编译列表中移除 `libs/CydiaSubstrate.m`（line 38）（保留文件不删，方便回退）。
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
| 4 | FriendDetection 删探测代码 | ✅ | ~450行 |
| 5 | ClearUnreadHook 精简 | ✅ | ~170行 |
| 6 | WPBorderLayer 精简 | ⬜ | ~400行 |
| 7 | WPCommonUI.h static → .m | ⬜ | 去 4 份编译副本 |
| 8 | 合并 Settings 碎片 | ⬜ | ~100行 + 2编译文件 |
| 9 | 删除 RedEnvelopParam.m | ⬜ | 1 编译项 |
| 10 | 删除 SettingSessionActionController | ⬜ | 2 文件, 124行 |
| 11 | 清理未编译 WPSessionBox | ⬜ | 4 文件, ~1400行 |
| 12 | 统一 HookEngine | ⬜ | ~3-5KB |
| **合计** | | | **~1560行源码** |

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