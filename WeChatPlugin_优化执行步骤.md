# WeChatPlugin 优化执行步骤

> 本文档是 [体积优化方案](./WeChatPlugin_体积优化方案.md) 的执行版，每一步都可以独立执行并验证。
> 编译方式：GitHub Actions (`build-standalone.yml`)，手动 clang 编译+链接。

---

## 前置准备：获取当前基线数据

执行一个空白 push，触发 CI 构建，下载产出的 `Mio_arm64.dylib`，记录：

| 指标 | 优化前 (基线) | 第一轮后 |
|------|--------|--------|
| dylib 大小 | 758K | **429K (-43%)** |
| 源文件数 (.m) | 42 | 37 |
| 源码总行数 | ~12,904 | ~12,750 |

---

## 步骤一：添加编译优化标志（修改 `build-standalone.yml`）

**状态**: ✅ 已完成  
**实际耗时**: 2 分钟  
**实际体积减少**: 与步骤二六合并，总减少 329K (43%)

### 1.1 修改编译命令

编辑 `.github/workflows/build-standalone.yml`，找到编译命令（约第 82-108 行）：

**原代码**:
```bash
clang -arch arm64 \
      -isysroot "$SDK_PATH" \
      -target arm64-apple-ios14.0 \
      -c \
      -fobjc-arc \
      -Wno-deprecated-declarations \
      -Wno-unused-function \
      ... -o "$OBJ_FILE" "$f"
```

**改为**:
```bash
clang -arch arm64 \
      -isysroot "$SDK_PATH" \
      -target arm64-apple-ios14.0 \
      -c \
      -fobjc-arc \
      -Oz \
      -Wno-deprecated-declarations \
      -Wno-unused-function \
      ... -o "$OBJ_FILE" "$f"
```

> 新增: `-Oz`（aggressive size optimization）。未加 `-DNS_BLOCK_ASSERTIONS=1`（原方案建议），因为代码中无 NSAssert。

### 1.2 修改链接命令

已添加 `-Wl,-dead_strip`（移除未使用函数）、`-Wl,-S`（去除调试符号表）、`-Wl,-x`（去除局部符号）。

### 1.3 执行结果 ✅

编译通过，与步骤二/六合并后：758K → 429K (-43%)

---

## 步骤二：删除完全死代码

**状态**: ✅ 已完成  
**实际耗时**: 5 分钟  
**关键修正**: `WeChatRedEnvelopParam.m` 不是死代码！被 `RedEnvelopHook.m` 和 `WeChatRedEnvelopTaskManager.m` 活跃引用，已保留。

### 2.1 删除 WeChatRedEnvelopOperation（NSOperation 死代码）✅

这个文件定义了完整的 `NSOperation` 子类，但 `WeChatRedEnvelopTaskManager` 从未使用它（用的是 `NSBlockOperation`）。

已删除：
- `WeChatPlugin/Modules/RedEnvelop/WeChatRedEnvelopOperation.m`
- `WeChatPlugin/Modules/RedEnvelop/WeChatRedEnvelopOperation.h`

已从 `build-standalone.yml` 移除编译条目。

### 2.2 WeChatRedEnvelopParam ⚠️ 保留（非死代码）

---

## 步骤三：删除 2 个空壳 Setting Controller

**预计耗时**: 5 分钟  
**预计体积减少**: ~1KB + 减少 4 个文件

### 3.1 删除文件

```bash
rm WeChatPlugin/Settings/Controllers/SettingAssistFunctionController.m
rm WeChatPlugin/Settings/Controllers/SettingAssistFunctionController.h
rm WeChatPlugin/Settings/Controllers/SettingUIBeautifyController.m
rm WeChatPlugin/Settings/Controllers/SettingUIBeautifyController.h
```

### 3.2 修改 build-standalone.yml 移除编译条目

```diff
- WeChatPlugin/Settings/Controllers/SettingAssistFunctionController.m \
- WeChatPlugin/Settings/Controllers/SettingUIBeautifyController.m \
```

### 3.3 修改 FeatureModuleRegistry.m

删除这两个模块的注册（约第 58-68 行）：

**修改 `WeChatPlugin/Registry/FeatureModuleRegistry.m`**：

```diff
-            [FeatureModuleDescriptor moduleWithIdentifier:@"assist"
-                                                    title:@"辅助功能"
-                                                 subtitle:@"即将推出"
-                                             sectionTitle:@"通用"
-                                          controllerClass:[SettingAssistFunctionController class]
-                                     hookInstallerClasses:@[]],
-            [FeatureModuleDescriptor moduleWithIdentifier:@"beautify"
-                                                    title:@"界面美化"
-                                                 subtitle:@"即将推出"
-                                             sectionTitle:@"更多"
-                                          controllerClass:[SettingUIBeautifyController class]
-                                     hookInstallerClasses:@[]],
```

同时底部的 `#import` 也可以删除（如果有的话）。

### 3.4 Push 触发构建，验证无编译错误 + 对比体积

---

## 步骤四：提取统一日志模块

**预计耗时**: 15 分钟  
**预计体积减少**: ~8KB (消除 22 份重复机器码)

### 4.1 创建 `Core/LogManager.h`

新建文件 `WeChatPlugin/Core/LogManager.h`：

```objc
#import <Foundation/Foundation.h>

void wp_shared_log(NSString *tag, NSString *content);

// 便捷宏 - 在每个 .m 文件中用 WPLog(tag, @"format %@", arg) 替代原有日志函数
#define WPLog(tag, fmt, ...) \
    do { \
        NSString *_msg = [NSString stringWithFormat:fmt, ##__VA_ARGS__]; \
        wp_shared_log(tag, _msg); \
    } while(0)
```

### 4.2 创建 `Core/LogManager.m`

新建文件 `WeChatPlugin/Core/LogManager.m`：

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

### 4.3 修改 build-standalone.yml

在文件列表中添加 `LogManager.m`：

```diff
+ WeChatPlugin/Core/LogManager.m \
```

### 4.4 逐个替换 23 个文件中的日志函数

每个文件按以下模式修改：

**替换前** (以 RedEnvelopHook.m 为例):
```objc
static void reLog(NSString *content) {
    @try {
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        ... (15行重复代码) ...
    } @catch (NSException *e) {}
}
// 调用: reLog(@"xxx");
```

**替换后**:
```objc
#import "LogManager.h"  // 添加这个 import
// 删除整个 reLog 函数体
// 调用: WPLog(@"redenvelop", @"xxx");   （全局替换 reLog( → WPLog(@"redenvelop", )
```

**各文件对应的 tag 名**:

| 文件 | 原函数名 | 新宏 | tag 名 |
|------|---------|------|--------|
| PluginConfig.m | `configLog` | `WPLog` | `@"config"` |
| WeChatAlertHelper.m | `walertLog` | `WPLog` | `@"alert"` |
| AutoTransferHook.m | 日志函数 | `WPLog` | `@"autotransfer"` |
| FriendDetectionHook.m | `fdLog` | `WPLog` | `@"frienddetect"` |
| GroupExitHook.m | 日志函数 | `WPLog` | `@"groupexit"` |
| JokerHook.m | `jokerLog` | `WPLog` | `@"joker"` |
| MessageTimeHook.m | `mtLog` | `WPLog` | `@"messagetime"` |
| RedEnvelopHook.m | `reLog` | `WPLog` | `@"redenvelop"` |
| WeChatRedEnvelopTaskManager.m | `tmLog` | `WPLog` | `@"redenvelop"` |
| RevokeHandler.m | `revokeLog` | `WPLog` | `@"revoke"` |
| RevokeHook.m | `hookLog` | `WPLog` | `@"revoke"` |
| WPSessionBoxController.m | `sbLog` | `WPLog` | `@"sessionbox"` |
| WPSessionBoxHook.m | `sbHookLog` | `WPLog` | `@"sessionbox"` |
| SettingEntryHook.m | `reLog` | `WPLog` | `@"settingentry"` |
| WPAboutVC.m | `reLog` | `WPLog` | `@"settingentry"` |
| WPBackupVC.m | 日志函数 | `WPLog` | `@"settingentry"` |
| WPOtherVC.m | 日志函数 | `WPLog` | `@"settingentry"` |
| ClearUnreadHook.m | `clearUnreadLog` | `WPLog` | `@"clearunread"` |
| SettingController.m | `reLog` | `WPLog` | `@"setting"` |
| SettingRedEnvelopController.m | `configLog` | `WPLog` | `@"config"` |
| SettingSessionActionController.m | `saLog` | `WPLog` | `@"setting"` |
| WeChatTweakGroupSelectsController.m | 日志函数 | `WPLog` | `@"setting"` |

**替换技巧**: 使用 IDE 的"在文件中查找替换"功能：
1. 搜索 `reLog(` → 替换为 `WPLog(@"redenvelop", `（注意保留参数）
2. 删除 `static void reLog(...) { ... }` 整段函数定义
3. 添加 `#import "LogManager.h"`

> **为每个文件单独操作，替换完一个 Push 一次**，避免一次性改太多出问题。

### 4.5 Push 触发构建，验证编译通过 + 对比体积

---

## 步骤五：提取统一 ServiceHelper

**预计耗时**: 10 分钟  
**预计体积减少**: ~2KB

### 5.1 创建 `Core/ServiceHelper.h`

新建文件 `WeChatPlugin/Core/ServiceHelper.h`：

```objc
#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import <objc/message.h>

// 获取 MMServiceCenter 的 service
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

> 用 `static inline` 代替宏：编译器会在调用处展开，但只定义一次，不会产生多份副本。

### 5.2 逐个替换各文件中的 getService

**替换模式**:
```objc
// 删除原有的 getService 函数定义
// #import "ServiceHelper.h"  // 添加 import
// getService(objc_getClass("XXX")) → WXService(objc_getClass("XXX"))
// getService(XXXClass) → WXService(XXXClass)
```

### 5.3 Push 触发构建，验证编译通过 + 对比体积

---

## 步骤六：删除 WPAlert，统一用 WeChatAlertHelper

**预计耗时**: 20 分钟  
**预计体积减少**: ~7KB + 删除 2 个文件

### 6.1 删除文件

```bash
rm WeChatPlugin/Core/WPAlert.m
rm WeChatPlugin/Core/WPAlert.h
```

### 6.2 修改 build-standalone.yml

```diff
- WeChatPlugin/Core/WPAlert.m \
```

### 6.3 修改唯一调用点：RedEnvelopHook.m

**实际修改**:
```objc
// 原（删除）:
[WPAlert showCustom:@"红包详情" message:msg buttonTitle:@"好的" from:nil];

// 新:
NSString *fullMsg = [NSString stringWithFormat:@"红包详情\n\n%@", msg];
[WeChatAlertHelper showTipAlert:fullMsg];
```

> 注意：`showTipAlert:` 只接受一个参数（message），需将 title + message 合并到一个字符串。

### 6.4 移除其他 WPAlert import

- `SettingGeneralFunctionController.m`: 移除 `#import "../../Core/WPAlert.h"`（仅有 import，无实际调用）
- `SettingSessionActionController.h`: 移除 `#import "../../Core/WPAlert.h"`（未编译文件）

### 6.5 执行结果 ✅

---

## 步骤七：FriendDetectionHook 精简 — 删除探测扫描代码

**预计耗时**: 10 分钟  
**预计体积减少**: ~15KB

### 7.1 删除以下函数（整段删除，包括函数定义和所有调用）

在 `WeChatPlugin/Modules/FriendDetection/FriendDetectionHook.m` 中：

| 删除内容 | 行数 | 位置 |
|----------|------|------|
| `scanAllServices()` 函数定义 + 所有调用 | ~150行 | 函数体 + install 中的调用 |
| `scanCGIClasses()` 函数定义 | ~30行 | |
| `installNetworkHook()` 函数定义 + 调用 | ~55行 | |
| `installContactSyncHook()` 函数定义 + 调用 | ~30行 | |
| `tryTransferDetection()` 函数定义 + 调用 | ~120行 | |
| `FDViewDidLoad()` 中的 UIAlertController 弹窗 | ~40行 | 改用 WeChatAlertHelper |

### 7.2 保留的核心逻辑

保留：
- 主检测 hook 点（`onNewSyncNotAddDBMessage` 之类的实际 message 拦截）
- `#import "WeChatAlertHelper.h"` 替换 UIAlertController 调用

### 7.3 Push 触发构建，验证编译通过

---

## 步骤八：WPSessionBoxHook 删除类扫描代码

**预计耗时**: 10 分钟  
**预计体积减少**: ~7KB

### 8.1 删除以下函数（`WeChatPlugin/Modules/SessionBox/WPSessionBoxHook.m`）

| 删除内容 | 行数 |
|----------|------|
| `probeAllClasses()` 整段 | ~60行 |
| `dumpClassInfo()` 整段 | ~32行 |
| `tryHookSwipeCellClasses()` 中的全局类扫描回退逻辑 | ~30行 |
| `replaced_viewDidLoad` 中的 `dispatch_after` → `probeAllClasses()` 调用 | ~5行 |
| `replaced_viewWillAppear` 中的重试逻辑 | ~10行 |
| `replaced_onMenuItemsAppear` 中的 `tryHookSwipeCellClasses()` 调用 | ~2行 |

**保留**: 
- `hookSwipeCellClass()` — 直接 hook 已知类名
- `replaced_arrMenuItems` / `replaced_filteredMenuItems` — 实际功能
- ViewController hook（viewDidLoad / viewWillAppear），但删除其中的 dispatch_after 探测代码

### 8.2 同时删除对应的全局变量

```objc
static BOOL g_probeDone = NO;  // 删除
```

### 8.3 Push 触发构建，验证编译通过

---

## 步骤九：ClearUnreadHook 精简 — 只保留确定的路径

**预计耗时**: 10 分钟  
**预计体积减少**: ~3KB

### 9.1 精简 findSessionMgr()

当前有 4 层 fallback（74-142 行），精简为只保留 1 层：

```c
// 精简后：只保留 MMServiceCenter 直接获取
static id findSessionMgr() {
    Class cls = objc_getClass("MMNewSessionMgr");
    if (!cls) cls = objc_getClass("MMSessionMgr");
    if (!cls) return nil;
    // 使用 WXService 宏（来自 ServiceHelper.h）
    return WXService(cls);
}
```

### 9.2 精简 getSessionList()

当前有 3 层 fallback（144-210 行），精简为只保留 1 层：

```c
static NSArray *getSessionList(id sessionMgr) {
    if (!sessionMgr) return nil;
    SEL sel = NSSelectorFromString(@"GetSessionInfoList");
    if (![sessionMgr respondsToSelector:sel]) return nil;
    id result = ((id (*)(id, SEL))objc_msgSend)(sessionMgr, sel);
    if ([result isKindOfClass:[NSArray class]]) return result;
    return nil;
}
```

### 9.3 删除多余的 getServiceViaCenter / getService 函数

改用 `#import "ServiceHelper.h"` 中的 `WXService()`。

### 9.4 Push 触发构建，验证编译通过

---

## 步骤十：合并 SessionBox 共享函数

**预计耗时**: 20 分钟  
**预计体积减少**: ~4KB

### 10.1 创建 `Modules/SessionBox/SessionBoxHelper.h`

新建文件，把 WPSessionBoxHook.m 和 WPSessionBoxController.m 中 8 个重复函数提取为 `static inline` 函数：

```objc
#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import "ServiceHelper.h"

// 从 WPSessionBoxHook 提取，用 static inline 展开但只定义一次
static inline id SB_getContactMgr() {
    return WXService(objc_getClass("CContactMgr"));
}

static inline id SB_getSessionMgr() {
    Class cls = objc_getClass("MMNewSessionMgr");
    if (!cls) cls = objc_getClass("MMSessionMgr");
    if (!cls) return nil;
    return WXService(cls);
}

static inline BOOL SB_isSessionTop(NSString *userName) {
    id contactMgr = SB_getContactMgr();
    if (!contactMgr) return NO;
    SEL gcSel = NSSelectorFromString(@"getContactByName:");
    if (![contactMgr respondsToSelector:gcSel]) gcSel = NSSelectorFromString(@"getContactByNameFromCache:");
    if (![contactMgr respondsToSelector:gcSel]) return NO;
    id contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, gcSel, userName);
    if (!contact) return NO;
    SEL topSel = NSSelectorFromString(@"isContactSessionTop");
    if (![contact respondsToSelector:topSel]) return NO;
    return ((BOOL (*)(id, SEL))objc_msgSend)(contact, topSel);
}

static inline BOOL SB_isSessionMuted(NSString *userName) {
    id contactMgr = SB_getContactMgr();
    if (!contactMgr) return NO;
    SEL gcSel = NSSelectorFromString(@"getContactByName:");
    if (![contactMgr respondsToSelector:gcSel]) gcSel = NSSelectorFromString(@"getContactByNameFromCache:");
    if (![contactMgr respondsToSelector:gcSel]) return NO;
    id contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, gcSel, userName);
    if (!contact) return NO;
    SEL notifySel = NSSelectorFromString(@"isChatStatusNotifyOpen");
    if (![contact respondsToSelector:notifySel]) return NO;
    return !((BOOL (*)(id, SEL))objc_msgSend)(contact, notifySel);
}

static inline void SB_togglePin(NSString *userName, BOOL isTop) {
    id sessionMgr = SB_getSessionMgr();
    if (!isTop) {
        if (sessionMgr && [sessionMgr respondsToSelector:NSSelectorFromString(@"TopSessionByName:")])
            ((void (*)(id, SEL, id))objc_msgSend)(sessionMgr, NSSelectorFromString(@"TopSessionByName:"), userName);
    } else {
        if (sessionMgr && [sessionMgr respondsToSelector:NSSelectorFromString(@"UntopSessionByName:")])
            ((void (*)(id, SEL, id))objc_msgSend)(sessionMgr, NSSelectorFromString(@"UntopSessionByName:"), userName);
    }
    if (sessionMgr && [sessionMgr respondsToSelector:NSSelectorFromString(@"resortSessions")])
        ((void (*)(id, SEL))objc_msgSend)(sessionMgr, NSSelectorFromString(@"resortSessions"));
}

static inline void SB_toggleMute(NSString *userName, BOOL isMuted) {
    id contactMgr = SB_getContactMgr();
    if (!contactMgr) return;
    NSInteger newStatus = isMuted ? 1 : 0;
    if ([contactMgr respondsToSelector:NSSelectorFromString(@"ChangeNotifyStatus:withStatus:sync:")])
        ((void (*)(id, SEL, id, NSInteger, BOOL))objc_msgSend)(contactMgr, NSSelectorFromString(@"ChangeNotifyStatus:withStatus:sync:"), userName, newStatus, YES);
}
```

### 10.2 在两个文件中分别替换

**WPSessionBoxHook.m**:
```objc
#import "SessionBoxHelper.h"
// 删除: sb_getService, sb_getContactMgr, sb_getSessionMgr,
//        sb_isSessionTop, sb_isSessionMuted, sb_togglePin, sb_toggleMute
// 替换: sb_getService(objc_getClass("X")) → WXService(objc_getClass("X"))
// 替换: sb_getContactMgr() → SB_getContactMgr()
// 替换: sb_isSessionTop(userName) → SB_isSessionTop(userName)
// 等等
```

**WPSessionBoxController.m**:
```objc
#import "SessionBoxHelper.h"
// 删除: getService, getContactMgr, getSessionMgr,
//        isSessionTop:, isSessionMuted:, togglePin:isTop:, toggleMute:isMuted:
// 替换对应的实例方法调用为 C 函数调用
```

**注意**: `showEditRemark` 函数包含 UIAlertController，应当改用 WeChatAlertHelper。两个文件中的 `sb_showEditRemark` 和 `showEditRemark:` 都改为调用 `WeChatAlertHelper.showInputAlertWithInitialText:target:onConfirm:`。

### 10.3 Push 触发构建，验证编译通过

---

## 步骤十一：WPBorderLayer 精简

**预计耗时**: 20 分钟  
**预计体积减少**: ~10KB

### 11.1 分析当前使用

先检查哪些地方实际使用了 WPBorderLayer 功能：
```bash
grep -rn "wp_\|WPBorderLayer\|WPSectionBorder\|WPSeparatorConfig\|WPModuleBorder\|WPBorderManager" WeChatPlugin/ --include="*.m" --include="*.h"
```

### 11.2 精简方案

**保留**:
- `WPBorderLayer` 核心类（CAShapeLayer 子类）
- `UIView+WPBorder` category 中的 `wp_addSeparatorWithLeftInset:`（最常用的分隔线方法）
- `wp_setupBordersWithConfig:`（圆角边框方法，如果被使用）

**删除**:
- `WPSectionBorderShape` 类
- `WPSeparatorConfiguration` 类
- `WPModuleBorderConfig` 类
- `WPBorderManager` 类
- `UIView+WPBorder` 中未使用的方法

精简后的 WPBorderLayer.m 约 80 行：

```objc
#import "WPBorderLayer.h"
#import "../../Config/WPColors.h"

@implementation WPBorderLayer

+ (instancetype)separatorWithLeftInset:(CGFloat)inset {
    WPBorderLayer *l = [[WPBorderLayer alloc] init];
    l.sides = WPBorderSideBottom;
    l.borderWidth = 0.5;
    l.borderColorLight = WPSeparatorColor();
    l.borderColorDark = WPSeparatorColorDark();
    l.leftInset = inset;
    l.fillColor = [UIColor clearColor].CGColor;
    l.lineWidth = 0.5;
    l.strokeColor = WPSeparatorColor().CGColor;
    return l;
}

+ (instancetype)borderWithCornerRadius:(CGFloat)radius
                                width:(CGFloat)width
                            lightColor:(UIColor *)light
                             darkColor:(UIColor *)dark {
    WPBorderLayer *l = [[WPBorderLayer alloc] init];
    l.sides = WPBorderSideAll;
    l.borderWidth = width;
    l.borderColorLight = light;
    l.borderColorDark = dark;
    l.cornerRadius = radius;
    l.fillColor = [UIColor clearColor].CGColor;
    l.lineWidth = width;
    l.strokeColor = light.CGColor;
    return l;
}

- (void)updatePathInRect:(CGRect)rect {
    CGFloat hw = self.borderWidth / 2.0;
    UIBezierPath *path;
    if (self.sides == WPBorderSideAll && self.cornerRadius > 0) {
        path = [UIBezierPath bezierPathWithRoundedRect:CGRectInset(rect, hw, hw) 
                                         cornerRadius:self.cornerRadius];
    } else {
        path = [UIBezierPath bezierPath];
        if (self.sides & WPBorderSideBottom) {
            [path moveToPoint:CGPointMake(rect.origin.x + self.leftInset, CGRectGetMaxY(rect) - hw)];
            [path addLineToPoint:CGPointMake(CGRectGetMaxX(rect), CGRectGetMaxY(rect) - hw)];
        }
        if (self.sides & WPBorderSideTop) {
            [path moveToPoint:CGPointMake(rect.origin.x, rect.origin.y + hw)];
            [path addLineToPoint:CGPointMake(CGRectGetMaxX(rect), rect.origin.y + hw)];
        }
        if (self.sides & WPBorderSideLeft) {
            [path moveToPoint:CGPointMake(rect.origin.x + hw, rect.origin.y)];
            [path addLineToPoint:CGPointMake(rect.origin.x + hw, CGRectGetMaxY(rect))];
        }
        if (self.sides & WPBorderSideRight) {
            [path moveToPoint:CGPointMake(CGRectGetMaxX(rect) - hw, rect.origin.y)];
            [path addLineToPoint:CGPointMake(CGRectGetMaxX(rect) - hw, CGRectGetMaxY(rect))];
        }
    }
    self.path = path.CGPath;
}

- (void)updateAppearanceForDarkMode:(BOOL)isDark {
    self.strokeColor = (isDark ? self.borderColorDark : self.borderColorLight).CGColor;
}

@end

// UIView category - 只保留最常用的方法
@implementation UIView (WPBorder)

- (void)wp_addSeparatorWithLeftInset:(CGFloat)inset {
    WPBorderLayer *sep = [WPBorderLayer separatorWithLeftInset:inset];
    sep.frame = self.bounds;
    [sep updatePathInRect:self.bounds];
    [self.layer addSublayer:sep];
}

- (void)wp_addRoundedBorderWithWidth:(CGFloat)w color:(UIColor *)c radius:(CGFloat)r {
    WPBorderLayer *bl = [WPBorderLayer borderWithCornerRadius:r width:w lightColor:c darkColor:c];
    bl.frame = self.bounds;
    [bl updatePathInRect:self.bounds];
    [self.layer addSublayer:bl];
}

@end
```

### 11.3 Push 触发构建，验证编译通过

---

## 步骤十二：WPCommonUI.h → WPCommonUI.m

**预计耗时**: 10 分钟  
**预计体积减少**: ~8KB

### 12.1 拆分为 .h 和 .m

**WPCommonUI.h** (精简后):
```objc
#import <UIKit/UIKit.h>
#import "Constants.h"

UIView *WPMakeCard(CGFloat y, CGFloat w);
UIScrollView *WPMakeSV(UIViewController *vc);
UIView *WPMakeSectionHeader(NSString *title, CGFloat y, CGFloat w);
void WPAddSep(UIView *parent, CGFloat y, CGFloat w);
void WPAddInfoRow(UIView *parent, CGFloat y, CGFloat w, NSString *left, NSString *right);
Class WPGetBaseClass(void);
UIColor *WPAccent(void);
UIColor *WPT3(void);
```

**WPCommonUI.m**:
```objc
#import "WPCommonUI.h"

// 将所有 static 函数移到这里（不改内容，去掉 static 关键字即可）
UIView *WPMakeCard(CGFloat y, CGFloat w) { ... }
// ... 等等
```

### 12.2 修改 build-standalone.yml

```diff
+ WeChatPlugin/Modules/SettingEntry/WPCommonUI.m \
```

### 12.3 Push 触发构建，验证编译通过

---

## 步骤十三：PluginConfig.m 宏化重构

**预计耗时**: 15 分钟  
**预计体积减少**: ~5KB

### 13.1 在文件开头添加宏

在 `WeChatPlugin/Config/PluginConfig.m` 的 `@implementation` 之前添加：

```objc
#define LOAD_BOOL(name) _##name = [d boolForKey:[kPluginPrefix stringByAppendingString:@#name]]
#define LOAD_INT(name) _##name = (unsigned int)[d integerForKey:[kPluginPrefix stringByAppendingString:@#name]]
#define LOAD_INT64(name) _##name = [d longLongForKey:[kPluginPrefix stringByAppendingString:@#name]]
#define LOAD_STRING(name) do { NSString *v = [d stringForKey:[kPluginPrefix stringByAppendingString:@#name]]; if (v.length > 0) _##name = v; } while(0)
#define LOAD_ARRAY(name) do { id v = [d arrayForKey:[kPluginPrefix stringByAppendingString:@#name]]; if (v) _##name = [v mutableCopy]; } while(0)
```

### 13.2 替换 loadDefaults

**原来**:
```objc
_debugLogging = [d boolForKey:[kPluginPrefix stringByAppendingString:@"DebugLogging"]];
_preventRecall = [d boolForKey:[kPluginPrefix stringByAppendingString:@"PreventRecall"]];
...
```

**改为**:
```objc
LOAD_BOOL(DebugLogging);
LOAD_BOOL(PreventRecall);
LOAD_BOOL(NoTip);
...
```

### 13.3 替换 save 方法

同样用类似的宏模式替换每个属性保存代码。

### 13.4 Push 触发构建，验证编译通过

---

## 步骤十四：合并 Settings 碎片化控制器

**预计耗时**: 25 分钟  
**预计体积减少**: ~10KB

### 14.1 SettingAboutController 合并到 SettingController

SettingAboutController（86行）的信息页可以直接作为 SettingController 底部的一个 section。删除 `SettingAboutController.m/.h`，把关于信息直接写到主设置页。

### 14.2 SettingLayoutFunctionController 合并到 SettingGeneralFunctionController

52 行的空壳（只有颜色设置开关），可以直接作为 SettingGeneralFunctionController 的一个 section。

### 14.3 修改 FeatureModuleRegistry

移除被合并的模块注册条目。

### 14.4 修改 build-standalone.yml

移除不再编译的文件。

### 14.5 Push 触发构建，验证编译通过

---

## 步骤十五：其他小优化（收尾工作）

### 15.1 删除 SettingRedEnvelopController 中的 `__attribute__((unused))` 日志函数

文件中有一个 `configLog` 函数被标记为 `__attribute__((unused))`，但是实际上被 `buttonClicked:` 方法调用。要么删除 `__attribute__((unused))` 属性，要么统一用 `WPLog` 替换。

### 15.2 减少 RedEnvelop hook 入口点

当前 hook 了 5 个 CMessageMgr 方法（`onNewSyncAddMessage`, `addMessageLibWithWrap`, `onNewSyncNotAddDBMessage`, `AddMsg`, `AsyncOnAddMsg`），可以只保留 2 个最可靠的入口（如 `onNewSyncAddMessage` + `AddMsg`），其余删除。

### 15.3 统一 hook 方式

MessageTimeHook 是唯一使用 `MSHookMessageEx`（CydiaSubstrate）的模块。如果功能正常，改为 `HookEngine.swizzleMethod`，然后删除：
```diff
- WeChatPlugin/libs/CydiaSubstrate.m \
- #import <substrate.h>
```

---

### 6.4 执行结果 ✅

编译通过，WPAlert 完全被 WeChatAlertHelper 替代。红包详情弹窗功能正常。</think>## 执行检查清单

```
✅ [x] 步骤一:  添加编译优化标志 (-Oz, -dead_strip, -Wl,-S, -Wl,-x)
✅ [x] 步骤二:  删除死代码 (WeChatRedEnvelopOperation; Param 保留)
✅ [x] 步骤三:  删除 2 个空壳 Controller
□ [ ] 步骤四:  提取统一日志模块
□ [ ] 步骤五:  提取统一 ServiceHelper
✅ [x] 步骤六:  删除 WPAlert, 统一用 WeChatAlertHelper
□ [ ] 步骤七:  FriendDetectionHook 删除探测扫描
□ [ ] 步骤八:  SessionBoxHook 删除类扫描
□ [ ] 步骤九:  ClearUnreadHook 移除多余 fallback
□ [ ] 步骤十:  合并 SessionBox 重复函数
□ [ ] 步骤十一: WPBorderLayer 精简
□ [ ] 步骤十二: WPCommonUI.h → .m
□ [ ] 步骤十三: PluginConfig 宏化
□ [ ] 步骤十四: 合并 Settings 碎片化控制器
□ [ ] 步骤十五: 其他小优化收尾
```

## 分阶段目标体积

| 阶段 | 执行步骤 | dylib 大小 | 减少率 |
|------|---------|----------------|--------|
| 基线 | — | 758K | — |
| **第一轮** ✅ | 步骤一~六 (编译优化+删死代码+删空壳+删WPAlert) | **429K** | **-43%** |
| 第二轮 | 步骤四~五~十~十三 (日志统一+ServiceHelper+PluginConfig宏化) | ~350K | -18% |
| 第三轮 | 步骤七~九~十一~十二~十四~十五 (精简重构) | ~300K | -14% |
| 最终 | 全部完成 | **~250-300K** | ~60-67% |