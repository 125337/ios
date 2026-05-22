# WeChatPlugin 优化执行步骤

> 只改源码，不改 `build-standalone.yml`。每一步独立可验证。

---

## 已完成的步骤

| 步骤 | 内容 | 状态 |
|------|------|------|
| — | 删除 `WeChatRedEnvelopOperation` 死代码 | ✅ |
| — | 删除 `SettingAssistFunctionController` + `SettingUIBeautifyController` | ✅ |
| — | 删除 `WPAlert`，改用 WeChatAlertHelper | ✅ |

---

## 步骤一：删除 WeChatRedEnvelopParam.m 编译

**预计耗时**: 3 分钟

### 1.1 从 build-standalone.yml 文件列表中删除

```diff
- WeChatPlugin/Modules/RedEnvelop/WeChatRedEnvelopParam.m \
```

### 1.2 在 RedEnvelopHook.m 末尾补充实现

在文件 `@end` 之前添加：

```objc
// 从 WeChatRedEnvelopParam.m 移入
@implementation WeChatRedEnvelopParam
@end
```

### 1.3 可选择删除源文件

```bash
rm WeChatPlugin/Modules/RedEnvelop/WeChatRedEnvelopParam.m
rm WeChatPlugin/Modules/RedEnvelop/WeChatRedEnvelopParam.h
```

> Push 触发 CI，验证编译通过。

---

## 步骤二：提取统一 ServiceHelper

**预计耗时**: 10 分钟  
**预计体积减少**: ~2KB

### 2.1 创建 `Core/ServiceHelper.h`

```objc
#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import <objc/message.h>

static inline id WXService(Class serviceClass) {
    Class sc = objc_getClass("MMServiceCenter");
    if (!sc) return nil;
    SEL dc = NSSelectorFromString(@"defaultCenter");
    if (![sc respondsToSelector:dc]) return nil;
    id center = ((id (*)(id, SEL))objc_msgSend)(sc, dc);
    if (!center) return nil;
    SEL gs = NSSelectorFromString(@"getService:");
    if (![center respondsToSelector:gs]) return nil;
    return ((id (*)(id, SEL, Class))objc_msgSend)(center, gs, serviceClass);
}
```

### 2.2 逐个替换（每次 Push 1-2 个文件）

| 文件 | 删除 | 替换 |
|------|------|------|
| RedEnvelopHook.m | `getService()` 函数 (lines 30-36) | `#import "ServiceHelper.h"`, 调用 → `WXService(cls)` |
| FriendDetectionHook.m | 内联 `getService()` 调用 | `WXService(cls)` |
| WeChatRedEnvelopTaskManager.m | 内联 `getService()` 调用 | `WXService(cls)` |
| RevokeHandler.m | `getService()` 函数 | `WXService(cls)` |

### 2.3 Push 触发构建

---

## 步骤三：提取统一日志模块

**预计耗时**: 25 分钟（批量替换）  
**预计体积减少**: ~8KB

### 3.1 创建 `Core/LogManager.h`

```objc
#import <Foundation/Foundation.h>

void wp_shared_log(NSString *tag, NSString *content);

#define WPLog(tag, fmt, ...) \
    do { \
        NSString *_msg = [NSString stringWithFormat:fmt, ##__VA_ARGS__]; \
        wp_shared_log(tag, _msg); \
    } while(0)
```

### 3.2 创建 `Core/LogManager.m`

```objc
#import "LogManager.h"

void wp_shared_log(NSString *tag, NSString *content) {
    static dispatch_queue_t _q;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        _q = dispatch_queue_create("com.mio.wplog", DISPATCH_QUEUE_SERIAL);
    });
    dispatch_async(_q, ^{
        @try {
            NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
            NSString *folder = [paths.firstObject stringByAppendingPathComponent:@"WeChatPlugin_Logs"];
            [[NSFileManager defaultManager] createDirectoryAtPath:folder
                                      withIntermediateDirectories:YES attributes:nil error:nil];
            NSString *fp = [folder stringByAppendingPathComponent:
                [NSString stringWithFormat:@"%@.log", tag]];
            NSString *line = [NSString stringWithFormat:@"[%@] %@\n", [NSDate date], content];
            NSFileHandle *h = [NSFileHandle fileHandleForWritingAtPath:fp];
            if (h) {
                [h seekToEndOfFile];
                [h writeData:[line dataUsingEncoding:NSUTF8StringEncoding]];
                [h closeFile];
            } else {
                [line writeToFile:fp atomically:YES encoding:NSUTF8StringEncoding error:nil];
            }
        } @catch (NSException *e) {}
    });
}
```

### 3.3 在 build-standalone.yml 文件列表添加

```diff
+ WeChatPlugin/Core/LogManager.m \
```

### 3.4 逐批替换

**替换模式**：每个文件做 3 步操作
1. 添加 `#import "LogManager.h"`（调整相对路径）
2. 删除 `static void xxxLog(...) { ... }` 整段函数
3. 全局替换函数调用：`xxxLog(@"...")` → `WPLog(@"tag", @"...")`

**分批执行**（每批 1-3 个文件，改完就 Push）：

| 批次 | 文件 | import路径 | tag名 |
|------|------|-----------|-------|
| 1 | PluginConfig.m | `"../../Core/LogManager.h"` | `@"config"` |
| 2 | RedEnvelopHook.m | `"../../Core/LogManager.h"` | `@"redenvelop"` |
| 2 | WeChatRedEnvelopTaskManager.m | `"../../Core/LogManager.h"` | `@"redenvelop"` |
| 3 | FriendDetectionHook.m | `"../../Core/LogManager.h"` | `@"frienddetect"` |
| 4 | ClearUnreadHook.m | `"../../Core/LogManager.h"` | `@"clearunread"` |
| 5 | SettingEntryHook.m | `"../../Core/LogManager.h"` | `@"settingentry"` |
| 5 | WPAboutVC.m | `"../../Core/LogManager.h"` | `@"settingentry"` |
| 5 | WPBackupVC.m | `"../../Core/LogManager.h"` | `@"settingentry"` |
| 6 | WPOtherVC.m | `"../../Core/LogManager.h"` | `@"settingentry"` |
| 6 | GroupExitHook.m | `"../../Core/LogManager.h"` | `@"groupexit"` |
| 7 | JokerHook.m | `"../../Core/LogManager.h"` | `@"joker"` |
| 7 | AutoTransferHook.m | `"../../Core/LogManager.h"` | `@"autotransfer"` |
| 7 | TintHook.m | `"../../Core/LogManager.h"` | `@"tint"` |
| 8 | RevokeHandler.m | `"../../Core/LogManager.h"` | `@"revoke"` |
| 8 | RevokeHook.m | `"../../Core/LogManager.h"` | `@"revoke"` |
| 9 | MessageTimeHook.m | `"../../Core/LogManager.h"` | `@"messagetime"` |
| 10 | SettingController.m | `"../../Core/LogManager.h"` | `@"setting"` |
| 10 | SettingRedEnvelopController.m | `"../../Core/LogManager.h"` | `@"redenvelop"` |
| 10 | SettingSessionActionController.m | `"../../Core/LogManager.h"` | `@"setting"` |
| 11 | WeChatTweakGroupSelectsController.m | `"../../Core/LogManager.h"` | `@"setting"` |

> 注意: WPSessionBox 文件不在编译列表中，跳过。

### 3.5 Push 触发构建

---

## 步骤四：FriendDetectionHook 删探测代码 + 弹窗统一

**预计耗时**: 15 分钟  
**预计体积减少**: ~10KB

### 4.1 删除以下内容

在 `FriendDetectionHook.m` 中整段删除：

1. `scanAllServices()` 函数体 + 所有调用
2. `scanCGIClasses()` 函数体 + 调用
3. `installNetworkHook()` 函数体 + 调用
4. `installContactSyncHook()` 函数体 + 调用
5. `tryTransferDetection()` 函数体 + 调用
6. 三个 `static IMP orig_*` 静态变量 (OnGetTransferPrepayRequest / CNetworkMgr_sendRequest / CContactMgr_onContactListChanged)
7. `hooked_OnGetTransferPrepayRequest()` 函数体

### 4.2 修改 runBoundDetection()

删除 dispatch_once 扫描块和转账预检逻辑，直接走本地检测。

### 4.3 4 个 UIAlertController 改为 WeChatAlertHelper

```objc
// 在文件顶部添加:
#import "../../Core/WeChatAlertHelper.h"

// 检测失败 (line 954):
[WeChatAlertHelper showTipAlert:@"检测失败\n请查看日志了解详情"];

// 检测结果 (line 967):
[WeChatAlertHelper showTipAlert:msg];

// 暂无检测记录 (line 988):
[WeChatAlertHelper showTipAlert:@"暂无检测记录"];

// 上次检测结果 (line 999):
[WeChatAlertHelper showTipAlert:msg];
```

### 4.4 Push 触发构建

---

## 步骤五：ClearUnreadHook 精简 fallback

**预计耗时**: 10 分钟  
**预计体积减少**: ~3KB

### 5.1 用 ServiceHelper 替换 getService()

```diff
- static id getServiceViaCenter(id center, Class serviceClass) { ... }
- static id getService(Class serviceClass) {
-     // 36-72 行的两层 fallback 全删
- }
+ #import "../../Core/ServiceHelper.h"
+ // 调用处: getService(cls) → WXService(cls)
```

### 5.2 精简 findSessionMgr() — 只留类名查找

```c
static id findSessionMgr() {
    Class cls = objc_getClass("MMNewSessionMgr");
    if (!cls) cls = objc_getClass("MMSessionMgr");
    if (!cls) return nil;
    return WXService(cls);
}
```

### 5.3 精简 getSessionList() — 只留核心 selector

```c
static NSArray *getSessionList(id sessionMgr) {
    if (!sessionMgr) return nil;
    SEL sel = NSSelectorFromString(@"GetSessionInfoList");
    if (![sessionMgr respondsToSelector:sel]) return nil;
    id result = ((id (*)(id, SEL))objc_msgSend)(sessionMgr, sel);
    return [result isKindOfClass:[NSArray class]] ? result : nil;
}
```

### 5.4 Push 触发构建

---

## 步骤六：PluginConfig.m 宏化

**预计耗时**: 15 分钟  
**预计体积减少**: ~5KB

### 6.1 在 `@implementation PluginConfig` 前加宏

```objc
#define LOAD_BOOL(name) \
    _##name = [d boolForKey:[kPluginPrefix stringByAppendingString:@#name]]

#define LOAD_INT(name) \
    _##name = (unsigned int)[d integerForKey:[kPluginPrefix stringByAppendingString:@#name]]

#define LOAD_STRING(name) do { \
    NSString *v = [d stringForKey:[kPluginPrefix stringByAppendingString:@#name]]; \
    if (v.length > 0) _##name = v; \
} while(0)

#define SAVE_BOOL(name) \
    [d setBool:_##name forKey:[kPluginPrefix stringByAppendingString:@#name]]

#define SAVE_STRING(name) do { \
    if (_##name) [d setObject:_##name forKey:[kPluginPrefix stringByAppendingString:@#name]]; \
} while(0)
```

### 6.2 替换 loadDefaults 和 save

逐行替换：`LOAD_BOOL(PreventRecall);` / `LOAD_STRING(NotifyFormat);` / `SAVE_BOOL(PreventRecall);` 等。

### 6.3 Push 触发构建

---

## 步骤七：WPBorderLayer 精简

**预计耗时**: 20 分钟  
**预计体积减少**: ~10KB

### 7.1 先查实际使用

```bash
grep -rn "WPBorderLayer\|wp_add\|WPSectionBorder\|WPSeparator\|WPModuleBorder\|WPBorderManager" WeChatPlugin/Settings/ --include="*.m"
```

### 7.2 重写为 80 行精简版

保留：
- `WPBorderLayer` 核心类（分隔线 + 圆角边框）
- `UIView (WPBorder)` category 中实际用到的方法

删除其余 4 个类和未使用的工厂方法。

### 7.3 Push 触发构建

---

## 步骤八：WPCommonUI.h → WPCommonUI.m

**预计耗时**: 10 分钟  
**预计体积减少**: ~8KB

### 8.1 WPCommonUI.h 改为只含声明

```objc
#import <UIKit/UIKit.h>
#import "../../Config/Constants.h"

UIView *WPMakeCard(CGFloat y, CGFloat w);
UIScrollView *WPMakeSV(UIViewController *vc);
UIView *WPMakeSectionHeader(NSString *title, CGFloat y, CGFloat w);
void WPAddSep(UIView *parent, CGFloat y, CGFloat w);
void WPAddInfoRow(UIView *parent, CGFloat y, CGFloat w, NSString *left, NSString *right);
Class WPGetBaseClass(void);
UIColor *WPAccent(void);
UIColor *WPT3(void);
```

### 8.2 创建 WPCommonUI.m

把所有函数体移过来，去掉 `static` 关键字。

### 8.3 build-standalone.yml 添加编译

```diff
+ WeChatPlugin/Modules/SettingEntry/WPCommonUI.m \
```

### 8.4 Push 触发构建

---

## 步骤九：合并 Settings 碎片

**预计耗时**: 20 分钟  
**预计体积减少**: ~8KB

### 9.1 SettingAboutController → SettingController

关于信息 86 行直接写为主设置页底部 section，删 `SettingAboutController.m/.h`。

### 9.2 SettingLayoutFunctionController → SettingGeneralFunctionController

52 行合并，删 `SettingLayoutFunctionController.m/.h`。

### 9.3 修改 build-standalone.yml 和 FeatureModuleRegistry

移除编译项和注册项。

### 9.4 Push 触发构建

---

## 步骤十：统一 hook 方式（可选，需真机验证）

**预计耗时**: 15 分钟  
**预计体积减少**: ~3-5KB

MessageTimeHook 改用 HookEngine 替代 MSHookMessageEx。成功后从编译列表删除 `libs/CydiaSubstrate.m`。

> ⚠️ 必须在真机上验证 MessageTime 功能正常。

---

## 步骤十一：清理未编译文件（可选）

```bash
rm WeChatPlugin/Modules/SessionBox/WPSessionBoxHook.m
rm WeChatPlugin/Modules/SessionBox/WPSessionBoxHook.h
rm WeChatPlugin/Modules/SessionBox/WPSessionBoxController.m
rm WeChatPlugin/Modules/SessionBox/WPSessionBoxController.h
```

---

## 执行检查清单

```
□ [ ] 步骤一:    删除 WeChatRedEnvelopParam.m 编译
□ [ ] 步骤二:    提取统一 ServiceHelper
□ [ ] 步骤三:    提取统一日志模块 LogManager
□ [ ] 步骤四:    FriendDetectionHook 删探测 + UI弹窗统一
□ [ ] 步骤五:    ClearUnreadHook 精简 fallback
□ [ ] 步骤六:    PluginConfig 宏化
□ [ ] 步骤七:    WPBorderLayer 精简
□ [ ] 步骤八:    WPCommonUI.h → .m
□ [ ] 步骤九:    合并 Settings 碎片
□ [ ] 步骤十:    统一 hook 方式 (可选,需真机验证)
□ [ ] 步骤十一:  清理未编译 SessionBox 文件 (可选)
```

## 分阶段目标

| 阶段 | 步骤 | 预计 dylib |
|------|------|-----------|
| 当前 | 已完成 3 项删除 | ~1.8-2.2 MB |
| +消除重复 | 步骤一+二+三+六 (RedEnvelopParam+ServiceHelper+LogManager+宏化) | ~1.5-1.9 MB |
| +删冗余 | 步骤四+五 (FriendDetection探测+ClearUnread fallback) | ~1.2-1.6 MB |
| +精简UI | 步骤七+八+九 (BorderLayer+CommonUI+Settings合并) | ~1.0-1.4 MB |
| +收尾 | 步骤十+十一 (统一hook+清理) | ~900-1300 KB |
| **最终** | | **~900-1300 KB** |