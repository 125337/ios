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

### 步骤 1：统一日志模块

**目标**：19 个文件各自实现了几乎相同的日志函数，合并为 1 个。

**操作**：

1. 创建 `/www/wwwroot/ios/WeChatPlugin/Core/LogManager.h`:

```objc
#import <Foundation/Foundation.h>

#ifdef DEBUG
#define WPLog(tag, fmt, ...) \
    do { \
        NSString *_msg = [NSString stringWithFormat:(fmt), ##__VA_ARGS__]; \
        NSLog(@"[%@] %@", (tag), _msg); \
        [_WPLogManager writeTag:(tag) content:_msg]; \
    } while(0)
#else
#define WPLog(tag, fmt, ...)
#endif

@interface _WPLogManager : NSObject
+ (void)writeTag:(NSString *)tag content:(NSString *)content;
@end
```

2. 创建 `/www/wwwroot/ios/WeChatPlugin/Core/LogManager.m`:

```objc
#import "LogManager.h"

@implementation _WPLogManager

+ (NSString *)logFilePath {
    static NSString *_logPath = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folder = [paths.firstObject stringByAppendingPathComponent:@"WeChatPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folder withIntermediateDirectories:YES attributes:nil error:nil];
        _logPath = [folder stringByAppendingPathComponent:@"plugin.log"];
    });
    return _logPath;
}

+ (void)writeTag:(NSString *)tag content:(NSString *)content {
    @try {
        NSString *line = [NSString stringWithFormat:@"[%@] [%@] %@\n", [NSDate date], tag, content];
        NSFileHandle *handle = [NSFileHandle fileHandleForWritingAtPath:[self logFilePath]];
        if (handle) {
            [handle seekToEndOfFile];
            [handle writeData:[line dataUsingEncoding:NSUTF8StringEncoding]];
            [handle closeFile];
        } else {
            [line writeToFile:[self logFilePath] atomically:YES encoding:NSUTF8StringEncoding error:nil];
        }
    } @catch (NSException *e) {}
}

@end
```

3. 修改所有调用处的 log 函数。以 `RedEnvelopHook.m` 为例：

   删除 `RedEnvelopHook.m` 中的 `reLog` 函数定义（lines 12-28），顶部加 `#import "../../Core/LogManager.h"`，然后全局替换 `reLog(@"...")` → `WPLog(@"RedEnv", @"...")`，`reLog([NSString stringWithFormat:...])` → `WPLog(@"RedEnv", @"%@", ...)`。

   **需要修改的文件和 tag 对应表**：

   | 文件 | 旧函数 | 新 tag | 日志文件变更 |
   |---|---|---|---|
   | `RedEnvelopHook.m` | `reLog` | `RedEnv` | redenvelop.log → plugin.log |
   | `PluginConfig.m` | `configLog` | `Config` | redenvelop.log → plugin.log |
   | `WeChatRedEnvelopTaskManager.m` | `tmLog` | `RedEnv` | — → plugin.log |
   | `FriendDetectionHook.m` | `fdLog` | `FriendDetect` | friend_detection.log → plugin.log |
   | `ClearUnreadHook.m` | `clearUnreadLog` | `ClearUnread` | clear_unread.log → plugin.log |
   | `SettingCategoryController.m` | `configLog` | `Config` | — |
   | `SettingEntryHook.m` | `reLog` | `Setting` | — |
   | `MessageTimeHook.m` | `mtLog` | `MsgTime` | — |
   | `GroupExitHook.m` | 日志函数 | `GroupExit` | — |
   | `JokerHook.m` | `jokerLog` | `Joker` | — |
   | `AutoTransferHook.m` | 日志函数 | `AutoTransfer` | — |
   | `RevokeHandler.m` | `revokeLog` | `Revoke` | — |
   | `RevokeHook.m` | `hookLog` | `Revoke` | — |
   | `SettingController.m` | `reLog` | `Setting` | — |
   | `SettingRedEnvelopController.m` | `configLog` | `Setting` | — |
   | `SettingSessionActionController.m` | `saLog` | `Setting` | — |
   | `WPAboutVC.m` | `reLog` | `UI` | — |
   | `WPBackupVC.m` | 日志函数 | `UI` | — |
   | `WPOtherVC.m` | 日志函数 | `UI` | — |

4. 在 `build-standalone.yml` 编译列表中追加 `LogManager.m`：

   ```yaml
   # 在 .m 文件列表末尾（或 Core/ 区域）追加
   WeChatPlugin/Core/LogManager.m \
   ```

**验证**：
```bash
cd /www/wwwroot/ios && git add -A && git commit -m "step1: 统一日志模块" && git push origin HEAD
# 等待 CI 编译通过
```

**预计减少**：~280 行源码，~8KB dylib

---

### 步骤 2：统一 ServiceHelper

**目标**：`getService()` 函数在 4 个文件中重复实现，提取为公共 inline 函数。

**操作**：

1. 创建 `/www/wwwroot/ios/WeChatPlugin/Core/ServiceHelper.h`:

```objc
#import <objc/runtime.h>
#import <objc/message.h>

static inline id WXGetService(Class serviceClass) {
    Class sc = objc_getClass("MMServiceCenter");
    if (!sc) return nil;
    id center = ((id (*)(id, SEL))objc_msgSend)(sc, NSSelectorFromString(@"defaultCenter"));
    if (!center) return nil;
    if (![center respondsToSelector:NSSelectorFromString(@"getService:")]) return nil;
    return ((id (*)(id, SEL, Class))objc_msgSend)(center, NSSelectorFromString(@"getService:"), serviceClass);
}
```

2. 修改以下文件，替换本地 `getService` 实现：

   | 文件 | 删除行 | 添加 #import |
   |---|---|---|
   | `RedEnvelopHook.m` | lines 30-36 (`getService` 函数) | `#import "../../Core/ServiceHelper.h"` |
   | `ClearUnreadHook.m` | lines 30-72 (`getServiceViaCenter` + `getService`) | `#import "../../Core/ServiceHelper.h"` |
   | `FriendDetectionHook.m` | `getService` 内联调用 | `#import "../../Core/ServiceHelper.h"` |
   | `RevokeHandler.m` | `getService` 实现 | `#import "../../Core/ServiceHelper.h"` |

3. 将调用处 `getService(...)` 改为 `WXGetService(...)`（全局替换）。

**验证**：
```bash
cd /www/wwwroot/ios && git add -A && git commit -m "step2: 统一 ServiceHelper" && git push origin HEAD
```

**预计减少**：~100 行源码

---

### 步骤 3：PluginConfig 宏化

**目标**：`loadDefaults` 和 `save` 方法中每个属性的读写是高度重复的 4-6 行模式，用宏消除重复。

**操作**：

1. 修改 `/www/wwwroot/ios/WeChatPlugin/Config/PluginConfig.m`，在文件顶部添加宏定义：

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

2. 简化 `loadDefaults` 方法。将原本 158 行的重复代码压缩为：

```objc
- (void)loadDefaults {
    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];

    // 兼容旧 key（仅此一处需要特殊处理）
    if ([d objectForKey:@"WeChatPlugin_PreventRecall"] && ![d objectForKey:PREFIX_KEY(PreventRecall)]) {
        _preventRecall = [d boolForKey:@"WeChatPlugin_PreventRecall"];
        [d setBool:_preventRecall forKey:PREFIX_KEY(PreventRecall)];
        [d removeObjectForKey:@"WeChatPlugin_PreventRecall"];
        [d synchronize];
    } else {
        LOAD_BOOL(PreventRecall, YES);
    }

    LOAD_BOOL(debugLogging, NO);
    LOAD_BOOL(hideContent, NO);
    LOAD_BOOL(noTip, NO);
    LOAD_BOOL(bottomPosition, NO);
    LOAD_BOOL(sendInterceptedContent, NO);
    LOAD_BOOL(interceptNotifyEnabled, NO);
    LOAD_BOOL(customNotifyEnabled, NO);
    LOAD_BOOL(clearUnreadEnabled, NO);
    LOAD_BOOL(hideDiscoverBadge, NO);
    LOAD_BOOL(hideEnterpriseBadge, NO);
    LOAD_BOOL(enableJoker, NO);
    LOAD_BOOL(enableGroupExitMonitor, NO);
    LOAD_BOOL(customColorsEnabled, NO);
    LOAD_BOOL(autoRedEnvelop, NO);
    LOAD_BOOL(redEnvelopCatchMe, NO);
    LOAD_BOOL(personalRedEnvelopEnable, NO);
    LOAD_BOOL(redEnvelopeDetail, NO);
    LOAD_BOOL(redEnvelopTextFilterEnabled, NO);
    LOAD_BOOL(redEnvelopGroupFilterEnabled, NO);
    LOAD_BOOL(redEnvelopAutoReply, NO);
    LOAD_BOOL(redEnvelopAutoReplyInGroup, NO);

    LOAD_INT(redEnvelopDelay, 0);
    LOAD_ARRAY(redEnvelopBlackList);
    LOAD_ARRAY(redEnvelopGroupFilterList);
    LOAD_STRING(redEnvelopTextFilter);
    LOAD_STRING(redEnvelopAutoReplyStr);

    // 保留 Log 输出
    configLog([NSString stringWithFormat:@"[LOAD] Loaded config ..."]);
    // ... 其他非重复逻辑 ...
}
```

3. 同样简化 `save` 方法。

**验证**：
```bash
cd /www/wwwroot/ios && git add -A && git commit -m "step3: PluginConfig 宏化" && git push origin HEAD
```

**预计减少**：~150 行源码

---

## 阶段二：删除冗余探测代码

### 步骤 4：FriendDetectionHook 删除探测代码

**目标**：删除 `scanAllServices`、`scanCGIClasses`、`installNetworkHook`、`installContactSyncHook`、`tryTransferDetection` 等不产生有效结果的探测函数。

**操作**：编辑 `/www/wwwroot/ios/WeChatPlugin/Modules/FriendDetection/FriendDetectionHook.m`：

1. **删除 `scanAllServices()`** (lines 239-385, ~147 行)

2. **删除 `scanCGIClasses()`** (lines 565-594, ~30 行)

3. **删除 `installNetworkHook()` 及相关代码**：
   - 删除 `installNetworkHook()` 函数 (lines 630-680, ~51 行)
   - 删除 `orig_CNetworkMgr_sendRequest` 全局变量 (line 607)
   - 删除 `hooked_CNetworkMgr_sendRequest` 函数 (lines 609-628, ~20 行)

4. **删除 `installContactSyncHook()` 及相关代码**：
   - 删除 `installContactSyncHook()` 函数 (lines 699-726, ~28 行)
   - 删除 `orig_CContactMgr_onContactListChanged` 全局变量 (line 690)
   - 删除 `hooked_CContactMgr_onContactListChanged` 函数 (lines 692-697, ~6 行)

5. **删除 `tryTransferDetection()` 及相关代码**：
   - 删除 `tryTransferDetection()` 函数 (lines 437-560, ~124 行)
   - 删除 `g_transferResults` 全局变量 (line 404)
   - 删除 `orig_OnGetTransferPrepayRequest` 全局变量 (line 407)
   - 删除 `hooked_OnGetTransferPrepayRequest` 函数 (lines 409-435, ~27 行)

6. **简化 `runBoundDetection()`** (line 733)：
   - 删除 `dispatch_once` 块中调用 `scanAllServices/scanCGIClasses/installNetworkHook/installContactSyncHook` 的代码 (lines 737-743)
   - 删除 "转账预检测" 步骤 (lines 753-759)
   - 只保留本地 `CContactMgr` 检测逻辑

7. **删除 `runBoundDetection` 中不必要的分支**：如果 `runBoundDetection` 只剩本地检测，可以直接将其代码内联到 `startFriendDetection` 中。

**验证**：
```bash
cd /www/wwwroot/ios && git add -A && git commit -m "step4: 删除 FriendDetection 探测代码" && git push origin HEAD
```

**预计减少**：~400 行源码

---

### 步骤 5：ClearUnreadHook 精简

**目标**：`findSessionMgr()` 尝试 7 个类名 + 5 个属性 + 4 个 ivar，`getSessionList()` 尝试 8 个 selector + 6 个 ivar。微信版本固定时只命中一条路径。

**操作**：

1. 在测试设备上运行一次清除未读功能，从日志中确认实际命中的类名和 selector。以 `MMNewSessionMgr` + `GetSessionInfoList` 为例。

2. 编辑 `/www/wwwroot/ios/WeChatPlugin/Modules/Unread/ClearUnreadHook.m`，精简 `findSessionMgr()` (lines 74-142)：

   ```objc
   static id findSessionMgr() {
       // 只保留已验证的有效类名
       const char *classNames[] = {"MMNewSessionMgr", "CConversationMgr"};
       for (int i = 0; i < 2; i++) {
           Class cls = objc_getClass(classNames[i]);
           if (!cls) continue;
           id svc = WXGetService(cls);  // 使用统一的 ServiceHelper
           if (svc) return svc;
       }
       return nil;
   }
   ```

3. 精简 `getSessionList()` (lines 144-210)：

   ```objc
   static NSArray *getSessionList(id sessionMgr) {
       SEL sel = NSSelectorFromString(@"GetSessionInfoList");
       if ([sessionMgr respondsToSelector:sel]) {
           id result = ((id (*)(id, SEL))objc_msgSend)(sessionMgr, sel);
           if ([result isKindOfClass:[NSArray class]]) return (NSArray *)result;
       }
       return nil;
   }
   ```

4. 删除 `getServiceViaCenter` 和 `getService` 函数（改用 `WXGetService`，步骤 2 已处理）。

**验证**：
```bash
cd /www/wwwroot/ios && git add -A && git commit -m "step5: 精简 ClearUnreadHook" && git push origin HEAD
```

**预计减少**：~180 行源码

---

## 阶段三：精简 UI 代码

### 步骤 6：WPBorderLayer 精简

**目标**：WPBorderLayer.m 共 ~600 行，5 个类、12+ 工厂方法，核心功能约 80 行。

**操作**：编辑 `/www/wwwroot/ios/WeChatPlugin/Settings/Common/WPBorderLayer.m`

1. 保留 `WPBorderLayer` 类及其绘制核心逻辑（`updatePathInRect`、`updateAppearanceForDarkMode` 等）。
2. 保留 `UIView(WPBorder)` category，因为多处使用 `wp_addBorder...` 和 `wp_updateBorderAppearanceForDarkMode` 接口。
3. 删除多余工厂方法的冗余参数变体，每种方向只保留一个方法。

   通过 Grep 确认调用方使用情况：
   ```bash
   cd /www/wwwroot/ios && grep -rn "mainBorderLayer\|leftBorderLayer\|rightBorderLayer\|bottomBorderLayer\|topBorderLayer" WeChatPlugin/
   ```

   删除未被调用的工厂方法。

**注意**：此步骤需要仔细确认哪些工厂方法被调用，避免误删。

**验证**：
```bash
cd /www/wwwroot/ios && git add -A && git commit -m "step6: 精简 WPBorderLayer" && git push origin HEAD
```

**预计减少**：~400 行源码（保守估计，视实际调用情况）

---

### 步骤 7：WPCommonUI.h static 函数改为 .m 实现

**目标**：`WPCommonUI.h` 中 121 行 `static` 函数，每个 `#import` 的 .m 文件各自编译一份副本。

**操作**：

1. 创建 `/www/wwwroot/ios/WeChatPlugin/Modules/SettingEntry/WPCommonUI.m`，将 `.h` 中的 `static` 函数实现移入：

```objc
#import "WPCommonUI.h"

// 从 .h 移过来的函数实现，去掉 static 关键字，加上对外声明
CGFloat WP_GetPad(void) { return 18.0; }
CGFloat WP_GetRadius(void) { return 12.0; }
CGFloat WP_GetRowH(void) { return 44.0; }

Class WPGetBaseClass(void) { ... }
UIScrollView *WPMakeSV(UIViewController *vc) { ... }
UIView *WPMakeCard(CGFloat top, CGFloat w) { ... }
UILabel *WPMakeSectionHeader(NSString *text, CGFloat top, CGFloat w) { ... }
void WPAddSwitchRow(UIView *card, CGFloat cy, CGFloat cw, NSString *title, NSString *key, BOOL on, id target) { ... }
void WPAddNavRow(UIView *card, CGFloat cy, CGFloat cw, NSString *title, NSString *action, id target) { ... }
void WPAddSep(UIView *card, CGFloat cy, CGFloat cw) { ... }
void WPAddInfoRow(UIView *card, CGFloat cy, CGFloat cw, NSString *left, NSString *right) { ... }
```

2. 修改 `WPCommonUI.h`（路径：`WeChatPlugin/Modules/SettingEntry/WPCommonUI.h`），将函数改为声明：

```objc
// 常量声明
extern const CGFloat kPad;
extern const CGFloat kRadius;
extern const CGFloat kRowH;

// 颜色宏保留（无需改）
#define WPBgColor() WPBackgroundColor()
// ... 其他宏 ...

// 函数声明（去掉 static 和实现体）
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

**预计减少**：消除 ~600 行等效编译输出（多份副本去重）

---

### 步骤 8：合并 Settings 碎片控制器

**目标**：`SettingAboutController`(86行) 和 `SettingLayoutFunctionController`(52行) 功能简单，可合并到父控制器。

**操作**：

1. 查看 `/www/wwwroot/ios/WeChatPlugin/Settings/Controllers/SettingAboutController.m` 和 `SettingLayoutFunctionController.m` 的内容，将核心逻辑移到 `SettingController` 或 `SettingGeneralFunctionController` 中。

2. 删除文件：
   ```bash
   rm WeChatPlugin/Settings/Controllers/SettingAboutController.m
   rm WeChatPlugin/Settings/Controllers/SettingAboutController.h
   rm WeChatPlugin/Settings/Controllers/SettingLayoutFunctionController.m
   rm WeChatPlugin/Settings/Controllers/SettingLayoutFunctionController.h
   ```

3. 修改 `FeatureModuleRegistry`（或对应的注册文件）中移除这两个控制器的注册。

4. 在 `build-standalone.yml` 中删除这两项的编译条目。

**验证**：
```bash
cd /www/wwwroot/ios && git add -A && git commit -m "step8: 合并 Settings 碎片" && git push origin HEAD
```

**预计减少**：~100 行，2 个编译文件

---

## 阶段四：编译项精简

### 步骤 9：删除 WeChatRedEnvelopParam.m（仅 4 行空实现）

**目标**：`WeChatRedEnvelopParam.m` 只有 4 行空 `@implementation`。

**操作**：

1. 将 `@implementation WeChatRedEnvelopParam @end` 追加到 `RedEnvelopHook.m` 末尾（`@end` 之前）。

2. 删除文件：
   ```bash
   rm WeChatPlugin/Modules/RedEnvelop/WeChatRedEnvelopParam.m
   # 保留 .h 文件（其他文件可能引用）
   ```

3. 在 `build-standalone.yml` 中移除 `WeChatRedEnvelopParam.m` 编译条目（line 50）。

**验证**：
```bash
cd /www/wwwroot/ios && git add -A && git commit -m "step9: 删除 RedEnvelopParam.m 空文件" && git push origin HEAD
```

**预计减少**：1 个编译文件

---

### 步骤 10：清理未编译文件

**目标**：`WPSessionBoxHook.m/.h` 和 `WPSessionBoxController.m/.h` 不在编译列表中，占仓库空间。

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
cd /www/wwwroot/ios && git add -A && git commit -m "step10: 清理未编译 WPSessionBox 文件" && git push origin HEAD
```

**预计减少**：4 个文件

---

### 步骤 11：MessageTimeHook 统一 Hook 引擎（需真机验证）

**目标**：`MessageTimeHook` 是唯一使用 `MSHookMessageEx`（CydiaSubstrate）的模块，其他全部用 `HookEngine`。

**⚠️ 风险警告**：换 Hook 引擎可能导致功能异常，需要真机验证。

**操作**：

1. 阅读 `MessageTimeHook.m` 中 `MSHookMessageEx` 的调用方式，改为 `[HookEngine swizzleMethod:inClass:withIMP:]` 等效调用。

2. 从 `build-standalone.yml` 编译列表中移除 `libs/CydiaSubstrate.m`（保留文件不删，方便回退）。

3. 真机测试消息时间显示功能正常。

**验证**：
```bash
cd /www/wwwroot/ios && git add -A && git commit -m "step11: MessageTimeHook 统一 HookEngine" && git push origin HEAD
```

**预计减少**：~3-5KB dylib

---

## 执行进度追踪表

| 步骤 | 描述 | 状态 | 减少量 |
|---|---|---|---|
| 0 | 准备/确认当前状态 | ✅ | — |
| 1 | 统一日志模块 | ⬜ | ~280行 + ~8KB |
| 2 | 统一 ServiceHelper | ⬜ | ~100行 |
| 3 | PluginConfig 宏化 | ⬜ | ~150行 |
| 4 | FriendDetection 删探测代码 | ⬜ | ~400行 |
| 5 | ClearUnreadHook 精简 | ⬜ | ~180行 |
| 6 | WPBorderLayer 精简 | ⬜ | ~400行 |
| 7 | WPCommonUI.h → .m | ⬜ | 去多份副本 |
| 8 | 合并 Settings 碎片 | ⬜ | ~100行 + 2文件 |
| 9 | 删除 RedEnvelopParam.m | ⬜ | 1 编译项 |
| 10 | 清理未编译 SessionBox | ⬜ | 4 文件 |
| 11 | 统一 HookEngine | ⬜ | ~3-5KB |
| **合计** | | | **~1680行** |

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