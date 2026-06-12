# 问题1 改造方案 D — 手动统一风格 A（推荐）

> **关联文档**: [MioPlugin_架构深度分析报告.md](file:///www/wwwroot/ios/MioPlugin_架构深度分析报告.md) — 问题1  
> **改造目标**: 消除项目中两种单例实现风格的差异，全部统一为 Apple 推荐的方法内局部静态变量模式  
> **方案选择**: 方案 D — 手动逐文件统一（不引入宏、不新建文件、不改动已有风格 A 的代码）  
> **说明**: 本文档仅提供改造方案，不涉及实际代码修改

---

## 目录

1. [方案选择理由](#1-方案选择理由)
2. [目标风格定义](#2-目标风格定义)
3. [文件分类清单](#3-文件分类清单)
4. [逐文件改造对照（13 个文件）](#4-逐文件改造对照13-个文件)
5. [无需修改的文件（3 个文件）](#5-无需修改的文件3-个文件)
6. [改造汇总](#6-改造汇总)
7. [执行步骤](#7-执行步骤)
8. [验证计划](#8-验证计划)

---

## 1. 方案选择理由

### 1.1 当前问题本质

项目中存在 **2 种单例实现风格**，分布在 16 个文件中：

- **风格 B**（13 个文件）：使用文件级静态变量 `static ClassName *_sharedInstance = nil;`
- **风格 A**（3 个文件）：使用 Apple 推荐的方法内局部静态变量

**两种风格在功能上完全等价**——都使用 `dispatch_once`，都是线程安全的。真正的唯一问题就是 **不一致**，没有代码质量或性能问题。

### 1.2 为什么不引入宏（方案 B）

方案 B（宏定义统一）在原文档中作为推荐方案，但在当前项目背景下存在以下问题：

| 问题 | 说明 |
|------|------|
| **调试断点困难** | 宏展开的代码无法直接设置断点，`dispatch_once` 内部的初始化逻辑调试不便 |
| **代码导航断裂** | Cmd+点击宏不会跳转到实现，而是跳到宏定义，增加认知负担 |
| **新增文件** | 需要新建 `MioSingletonMacros.h`，并给 16 个文件添加 `#import` |
| **过设计** | 7 行 `dispatch_once` 模板代码是 Objective-C 标准实践，不值得用宏来消除 |
| **YAGNI 违背** | "方便以后统一修改"的前提是"以后真的需要改所有单例"，概率极低 |
| **自定义扩展受限** | 如果未来某个单例需要自定义 `+shared` 逻辑，宏方案反而造成障碍 |

### 1.3 方案 D 的核心优势

| 维度 | 方案 D（手动统一） | 方案 B（宏定义） |
|------|-------------------|-----------------|
| **改文件数** | 13 个（零新建） | 16 个 + 新建 1 个头文件 |
| **新增文件** | 0 | 1 个（MioSingletonMacros.h） |
| **新增 import** | 0 行 | 16 行 |
| **删除/修改行数** | ~13 行删除 + ~39 行修改 | ~120 行删除 + ~17 行宏 + 16 行 import |
| **调试体验** | 完美（标准 dispatch_once） | 差（宏展开不可见） |
| **代码导航** | Cmd+点击到方法实现 | Cmd+点击到宏定义 |
| **新成员学习成本** | 0（标准 OC 语法） | 需要先理解宏 |
| **长期维护** | 零维护 | 宏本身需要维护 |
| **可扩展性** | 任何单例可独立自定义 | 自定义需展开宏，破坏统一性 |

### 1.4 方案 D 不做的事情

- **不新建任何文件** — 无新头文件、无新源文件
- **不添加任何 `#import`** — 所有修改均在文件内部完成
- **不改动已有风格 A 的文件** — RevokeConfig、RevokeHandler、MioPluginSwitchHandler 保持不变
- **不改变方法名** — 所有调用方 `[XXXConfig shared]` 无需任何修改
- **不改变 `-init` 方法** — 任何自定义初始化逻辑不受影响

---

## 2. 目标风格定义

所有单例统一为以下模式（Apple 官方推荐）：

```objc
// ===== 目标风格（风格 A）=====
@implementation SomeClass

// ★ 无文件级 static 变量

+ (instancetype)shared {
    static SomeClass *instance = nil;          // ← 方法内局部静态变量
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[SomeClass alloc] init];
    });
    return instance;
}

// ... 其他方法 ...
@end
```

### 2.1 核心特征

| 特征 | 说明 |
|------|------|
| 变量声明位置 | `+shared` 方法内部，第一行 |
| 变量作用域 | 仅限于 `+shared` 方法 |
| 变量命名 | `instance`（统一命名，提高代码可读性） |
| 初始化机制 | `dispatch_once`（线程安全，执行一次） |
| 文件级符号 | **无** — 没有文件作用域的静态变量暴露 |

### 2.2 与改造前风格 B 的差异

```objc
// 改造前（风格 B）
static SomeClass *_sharedInstance = nil;   // ★ 这行要删除

+ (instancetype)shared {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[SomeClass alloc] init];   // ★ 改为 instance
    });
    return _sharedInstance;                            // ★ 改为 instance
}

// 改造后（风格 A）
// ★ 这一行已删除

+ (instancetype)shared {
    static SomeClass *instance = nil;       // ★ 新增变量声明
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[SomeClass alloc] init];           // ★ 变量名改为 instance
    });
    return instance;                                    // ★ 变量名改为 instance
}
```

---

## 3. 文件分类清单

### 3.1 需要改造的文件（13 个——目前为风格 B）

| # | 文件路径 | 行号 | 文件级变量声明 |
|---|---------|------|---------------|
| 1 | `Modules/Unread/ClearUnreadConfig.m` | 第 5 行 | `static ClearUnreadConfig *_sharedInstance = nil;` |
| 2 | `Modules/Joker/JokerConfig.m` | 第 5 行 | `static JokerConfig *_sharedInstance = nil;` |
| 3 | `Modules/GroupExit/GroupExitConfig.m` | 第 6 行 | `static GroupExitConfig *_sharedInstance = nil;` |
| 4 | `Modules/RedEnvelop/RedEnvelopConfig.m` | 第 5 行 | `static RedEnvelopConfig *_sharedInstance = nil;` |
| 5 | `Modules/AutoTransfer/AutoTransferConfig.m` | 第 5 行 | `static AutoTransferConfig *_sharedInstance = nil;` |
| 6 | `Modules/ChatTopBar/ChatTopBarConfig.m` | 第 13 行 | `static ChatTopBarConfig *_sharedInstance = nil;` |
| 7 | `Modules/MessageTime/MessageTimeConfig.m` | 第 3 行 | **在 @implementation 之前** |
| 8 | `Modules/Layout/UIPurifyConfig.m` | 第 5 行 | `static UIPurifyConfig *_sharedInstance = nil;` |
| 9 | `Modules/Layout/AttachLayoutConfig.m` | 第 5 行 | `static AttachLayoutConfig *_sharedInstance = nil;` |
| 10 | `Modules/HideAvatar/HideAvatarConfig.m` | 第 5 行 | `static HideAvatarConfig *_sharedInstance = nil;` |
| 11 | `Modules/PlaceholderText/PlaceholderTextConfig.m` | 第 5 行 | `static PlaceholderTextConfig *_sharedInstance = nil;` |
| 12 | `Modules/ListCornerRadius/ListCornerRadiusConfig.m` | 第 5 行 | `static ListCornerRadiusConfig *_sharedInstance = nil;` |
| 13 | `Modules/ProfileCardBg/CardBgConfig.m` | 第 5 行 | `static CardBgConfig *_sharedInstance = nil;` |

### 3.2 无需改造的文件（3 个——已是风格 A）

| # | 文件路径 | 方法名 | 说明 |
|---|---------|--------|------|
| 1 | `Modules/Revoke/RevokeConfig.m` | `shared` | 已是风格 A，无需修改 |
| 2 | `Modules/Revoke/RevokeHandler.m` | `shared` | 已是风格 A，无需修改 |
| 3 | `Modules/SettingEntry/SettingEntryHook.m` (MioPluginSwitchHandler) | `sharedInstance` | 已是风格 A，方法名不同但调用方已适配，无需修改 |

---

## 4. 逐文件改造对照（13 个文件）

### 4.1 通用改造模式

每个文件的改造操作完全相同，共 **3 步**：

```
第 1 步：删除文件级 static 变量声明行
第 2 步：在 +shared 方法体内首行添加静态变量声明
第 3 步：将 +shared 方法体内的 _sharedInstance 全部替换为 instance
```

**操作前后的代码结构变化**（以通用模板说明）：

```objc
// ── 改造前 ─────────────────────────────────────────────
@implementation SomeClass

static SomeClass *_sharedInstance = nil;           // ← 第 1 步：删除此行

+ (instancetype)shared {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[SomeClass alloc] init]; // ← 第 3 步：_sharedInstance → instance
    });
    return _sharedInstance;                          // ← 第 3 步：_sharedInstance → instance
}
// ── 改造后 ─────────────────────────────────────────────
@implementation SomeClass

// ★ 已删除：无文件级 static 变量

+ (instancetype)shared {
    static SomeClass *instance = nil;               // ← 第 2 步：新增此行
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[SomeClass alloc] init];        // ← 已替换
    });
    return instance;                                 // ← 已替换
}
```

> **注意**：以下每个文件的改造对照中，"改造前"代码直接复制自实际文件内容，"改造后"代码展示应用三步操作后的结果。灰色虚线标记的行是需要执行操作的精确位置。

---

### 4.2 文件 1：ClearUnreadConfig.m

**路径**: `/www/wwwroot/ios/MioPlugin/Modules/Unread/ClearUnreadConfig.m`

**当前代码**（清单一）：

```objc
// ClearUnreadConfig.m — 改造前
#import "ClearUnreadConfig.h"

@implementation ClearUnreadConfig

static ClearUnreadConfig *_sharedInstance = nil;       // ← 第 1 步：删除

+ (instancetype)shared {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[ClearUnreadConfig alloc] init];  // ← 第 3 步
    });
    return _sharedInstance;                                   // ← 第 3 步
}

+ (NSString *)modulePrefix {
    return @"ClearUnread_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"clearUnreadEnabled" type:ConfigValueTypeBool default:@(NO)],
    ];
}

@end
```

**改造后代码**：

```objc
// ClearUnreadConfig.m — 改造后
#import "ClearUnreadConfig.h"

@implementation ClearUnreadConfig

// ★ 已删除文件级 static 变量

+ (instancetype)shared {
    static ClearUnreadConfig *instance = nil;         // ← 第 2 步：新增变量声明
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[ClearUnreadConfig alloc] init];  // ← 替换 _sharedInstance → instance
    });
    return instance;                                   // ← 替换 _sharedInstance → instance
}

+ (NSString *)modulePrefix {
    return @"ClearUnread_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"clearUnreadEnabled" type:ConfigValueTypeBool default:@(NO)],
    ];
}

@end
```

**行数变化**: 删除 1 行（文件级变量），新增 1 行（方法内变量），净变化 0 行。

---

### 4.3 文件 2：JokerConfig.m

**路径**: `/www/wwwroot/ios/MioPlugin/Modules/Joker/JokerConfig.m`

**当前代码**：

```objc
// JokerConfig.m — 改造前
#import "JokerConfig.h"

@implementation JokerConfig

static JokerConfig *_sharedInstance = nil;             // ← 第 1 步：删除

+ (instancetype)shared {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[JokerConfig alloc] init];
    });
    return _sharedInstance;
}

+ (NSString *)modulePrefix {
    return @"Joker_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"enableJoker" type:ConfigValueTypeBool default:@(NO)],
    ];
}

@end
```

**改造后代码**：

```objc
// JokerConfig.m — 改造后
#import "JokerConfig.h"

@implementation JokerConfig

// ★ 已删除文件级 static 变量

+ (instancetype)shared {
    static JokerConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[JokerConfig alloc] init];
    });
    return instance;
}

+ (NSString *)modulePrefix {
    return @"Joker_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"enableJoker" type:ConfigValueTypeBool default:@(NO)],
    ];
}

@end
```

---

### 4.4 文件 3：GroupExitConfig.m

**路径**: `/www/wwwroot/ios/MioPlugin/Modules/GroupExit/GroupExitConfig.m`

**注意**: 此文件在 `@implementation` 之前有两个 `#import`，文件级变量在第 6 行。

**当前代码**：

```objc
// GroupExitConfig.m — 改造前
#import "GroupExitConfig.h"
#import "GroupExitHook.h"

@implementation GroupExitConfig

static GroupExitConfig *_sharedInstance = nil;         // ← 第 1 步：删除

+ (instancetype)shared {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[GroupExitConfig alloc] init];
    });
    return _sharedInstance;
}

+ (NSString *)modulePrefix {
    return @"GroupExit_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"enableGroupExitMonitor" type:ConfigValueTypeBool default:@(NO)],
    ];
}

- (void)setEnableGroupExitMonitor:(BOOL)enableGroupExitMonitor {
    _enableGroupExitMonitor = enableGroupExitMonitor;
    if (enableGroupExitMonitor) {
        [GroupExitHook startMonitoring];
    } else {
        [GroupExitHook stopMonitoring];
    }
}

@end
```

**改造后代码**：

```objc
// GroupExitConfig.m — 改造后
#import "GroupExitConfig.h"
#import "GroupExitHook.m"  // ★ 确认：此文件在 @implementation 之前有 #import "GroupExitHook.h"
// 改为：
#import "GroupExitConfig.h"
#import "GroupExitHook.h"

@implementation GroupExitConfig

// ★ 已删除文件级 static 变量

+ (instancetype)shared {
    static GroupExitConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[GroupExitConfig alloc] init];
    });
    return instance;
}

+ (NSString *)modulePrefix {
    return @"GroupExit_";
}
// ... 其余代码不变 ...
```

---

### 4.5 文件 4：RedEnvelopConfig.m

**路径**: `/www/wwwroot/ios/MioPlugin/Modules/RedEnvelop/RedEnvelopConfig.m`

**当前代码**：

```objc
// RedEnvelopConfig.m — 改造前
#import "RedEnvelopConfig.h"

@implementation RedEnvelopConfig

static RedEnvelopConfig *_sharedInstance = nil;        // ← 第 1 步：删除

+ (instancetype)shared {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[RedEnvelopConfig alloc] init];
    });
    return _sharedInstance;
}

+ (NSString *)modulePrefix {
    return @"RedEnvelop_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"autoRedEnvelop" type:ConfigValueTypeBool default:@(NO)],
        // ... 其余 descriptors ...
    ];
}

@end
```

**改造后代码**：

```objc
// RedEnvelopConfig.m — 改造后
#import "RedEnvelopConfig.h"

@implementation RedEnvelopConfig

// ★ 已删除文件级 static 变量

+ (instancetype)shared {
    static RedEnvelopConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[RedEnvelopConfig alloc] init];
    });
    return instance;
}

// ... 其余代码不变 ...
@end
```

---

### 4.6 文件 5：AutoTransferConfig.m

**路径**: `/www/wwwroot/ios/MioPlugin/Modules/AutoTransfer/AutoTransferConfig.m`

**当前代码**：

```objc
// AutoTransferConfig.m — 改造前
#import "AutoTransferConfig.h"

@implementation AutoTransferConfig

static AutoTransferConfig *_sharedInstance = nil;      // ← 第 1 步：删除

+ (instancetype)shared {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[AutoTransferConfig alloc] init];
    });
    return _sharedInstance;
}

+ (NSString *)modulePrefix {
    return @"AutoTransfer_";
}
// ... 其余代码 ...
```

**改造后代码**：

```objc
// AutoTransferConfig.m — 改造后
#import "AutoTransferConfig.h"

@implementation AutoTransferConfig

// ★ 已删除文件级 static 变量

+ (instancetype)shared {
    static AutoTransferConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[AutoTransferConfig alloc] init];
    });
    return instance;
}

// ... 其余代码不变 ...
```

---

### 4.7 文件 6：ChatTopBarConfig.m

**路径**: `/www/wwwroot/ios/MioPlugin/Modules/ChatTopBar/ChatTopBarConfig.m`

**注意**: 此文件在 `@implementation` 内部有注释 `// MARK: - 单例` 标记。

**当前代码**：

```objc
// ChatTopBarConfig.m — 改造前
//
//  ChatTopBarConfig.m
//  MioPlugin
//
//  聊天顶栏配置模块
//

#import "ChatTopBarConfig.h"

@implementation ChatTopBarConfig

// MARK: - 单例
static ChatTopBarConfig *_sharedInstance = nil;        // ← 第 1 步：删除此行和上方注释

+ (instancetype)shared {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[ChatTopBarConfig alloc] init];
    });
    return _sharedInstance;
}

// MARK: - ConfigModule 协议
// ... 其余代码 ...
```

**改造后代码**：

```objc
// ChatTopBarConfig.m — 改造后
//
//  ChatTopBarConfig.m
//  MioPlugin
//
//  聊天顶栏配置模块
//

#import "ChatTopBarConfig.h"

@implementation ChatTopBarConfig

// ★ 已删除 '// MARK: - 单例' 注释和文件级 static 变量

+ (instancetype)shared {
    static ChatTopBarConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[ChatTopBarConfig alloc] init];
    });
    return instance;
}

// MARK: - ConfigModule 协议
// ... 其余代码不变 ...
```

**特别注意**: `// MARK: - 单例` 注释可以保留或删除。如果希望保留，可以将注释移到 `+shared` 方法上方：

```objc
// 可选：保留注释
#pragma mark - 单例

+ (instancetype)shared {
    static ChatTopBarConfig *instance = nil;
    // ...
}
```

---

### 4.8 文件 7：MessageTimeConfig.m

**路径**: `/www/wwwroot/ios/MioPlugin/Modules/MessageTime/MessageTimeConfig.m`

**注意**: 此文件的 `_sharedInstance` 声明位置特殊——它在 `@implementation` 之前，而不是内部。这是唯一一个变量声明在 `@implementation` 之前的文件。

**当前代码**：

```objc
// MessageTimeConfig.m — 改造前
#import "MessageTimeConfig.h"

static MessageTimeConfig *_sharedInstance = nil;       // ← 第 1 步：删除（在 @implementation 之前）

@implementation MessageTimeConfig

+ (instancetype)shared {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[MessageTimeConfig alloc] init];
    });
    return _sharedInstance;
}

+ (NSString *)modulePrefix {
    return @"MsgTime_";
}
// ... 其余代码 ...
```

**改造后代码**：

```objc
// MessageTimeConfig.m — 改造后
#import "MessageTimeConfig.h"

// ★ 已删除文件级 static 变量（原来在 @implementation 之前）

@implementation MessageTimeConfig

+ (instancetype)shared {
    static MessageTimeConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[MessageTimeConfig alloc] init];
    });
    return instance;
}

// ... 其余代码不变 ...
```

---

### 4.9 文件 8：UIPurifyConfig.m

**路径**: `/www/wwwroot/ios/MioPlugin/Modules/Layout/UIPurifyConfig.m`

**当前代码**：

```objc
// UIPurifyConfig.m — 改造前
#import "UIPurifyConfig.h"

@implementation UIPurifyConfig

static UIPurifyConfig *_sharedInstance = nil;          // ← 第 1 步：删除

+ (instancetype)shared {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[UIPurifyConfig alloc] init];
    });
    return _sharedInstance;
}

+ (NSString *)modulePrefix {
    return @"UIPurify_";
}
// ... 其余代码 ...
```

**改造后代码**：

```objc
// UIPurifyConfig.m — 改造后
#import "UIPurifyConfig.h"

@implementation UIPurifyConfig

// ★ 已删除文件级 static 变量

+ (instancetype)shared {
    static UIPurifyConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[UIPurifyConfig alloc] init];
    });
    return instance;
}

// ... 其余代码不变 ...
```

---

### 4.10 文件 9：AttachLayoutConfig.m

**路径**: `/www/wwwroot/ios/MioPlugin/Modules/Layout/AttachLayoutConfig.m`

**当前代码**：

```objc
// AttachLayoutConfig.m — 改造前
#import "AttachLayoutConfig.h"

@implementation AttachLayoutConfig

static AttachLayoutConfig *_sharedInstance = nil;      // ← 第 1 步：删除

+ (instancetype)shared {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[AttachLayoutConfig alloc] init];
    });
    return _sharedInstance;
}

+ (NSString *)modulePrefix {
    return @"AttachLayout_";
}
// ... 其余代码 ...
```

**改造后代码**：

```objc
// AttachLayoutConfig.m — 改造后
#import "AttachLayoutConfig.h"

@implementation AttachLayoutConfig

// ★ 已删除文件级 static 变量

+ (instancetype)shared {
    static AttachLayoutConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[AttachLayoutConfig alloc] init];
    });
    return instance;
}

// ... 其余代码不变 ...
```

---

### 4.11 文件 10：HideAvatarConfig.m

**路径**: `/www/wwwroot/ios/MioPlugin/Modules/HideAvatar/HideAvatarConfig.m`

**当前代码**：

```objc
// HideAvatarConfig.m — 改造前
#import "HideAvatarConfig.h"

@implementation HideAvatarConfig

static HideAvatarConfig *_sharedInstance = nil;        // ← 第 1 步：删除

+ (instancetype)shared {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[HideAvatarConfig alloc] init];
    });
    return _sharedInstance;
}

+ (NSString *)modulePrefix {
    return @"HideAvatar_";
}
// ... 其余代码 ...
```

**改造后代码**：

```objc
// HideAvatarConfig.m — 改造后
#import "HideAvatarConfig.h"

@implementation HideAvatarConfig

// ★ 已删除文件级 static 变量

+ (instancetype)shared {
    static HideAvatarConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[HideAvatarConfig alloc] init];
    });
    return instance;
}

// ... 其余代码不变 ...
```

---

### 4.12 文件 11：PlaceholderTextConfig.m

**路径**: `/www/wwwroot/ios/MioPlugin/Modules/PlaceholderText/PlaceholderTextConfig.m`

**当前代码**：

```objc
// PlaceholderTextConfig.m — 改造前
#import "PlaceholderTextConfig.h"

@implementation PlaceholderTextConfig

static PlaceholderTextConfig *_sharedInstance = nil;   // ← 第 1 步：删除

+ (instancetype)shared {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[PlaceholderTextConfig alloc] init];
    });
    return _sharedInstance;
}

+ (NSString *)modulePrefix {
    return @"Placeholder_";
}
// ... 其余代码 ...
```

**改造后代码**：

```objc
// PlaceholderTextConfig.m — 改造后
#import "PlaceholderTextConfig.h"

@implementation PlaceholderTextConfig

// ★ 已删除文件级 static 变量

+ (instancetype)shared {
    static PlaceholderTextConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[PlaceholderTextConfig alloc] init];
    });
    return instance;
}

// ... 其余代码不变 ...
```

---

### 4.13 文件 12：ListCornerRadiusConfig.m

**路径**: `/www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusConfig.m`

**当前代码**：

```objc
// ListCornerRadiusConfig.m — 改造前
#import "ListCornerRadiusConfig.h"

@implementation ListCornerRadiusConfig

static ListCornerRadiusConfig *_sharedInstance = nil;  // ← 第 1 步：删除

+ (instancetype)shared {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[ListCornerRadiusConfig alloc] init];
    });
    return _sharedInstance;
}

+ (NSString *)modulePrefix {
    return @"ListCorner_";
}
// ... 其余代码 ...
```

**改造后代码**：

```objc
// ListCornerRadiusConfig.m — 改造后
#import "ListCornerRadiusConfig.h"

@implementation ListCornerRadiusConfig

// ★ 已删除文件级 static 变量

+ (instancetype)shared {
    static ListCornerRadiusConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[ListCornerRadiusConfig alloc] init];
    });
    return instance;
}

// ... 其余代码不变 ...
```

---

### 4.14 文件 13：CardBgConfig.m

**路径**: `/www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/CardBgConfig.m`

**当前代码**：

```objc
// CardBgConfig.m — 改造前
#import "CardBgConfig.h"

@implementation CardBgConfig

static CardBgConfig *_sharedInstance = nil;            // ← 第 1 步：删除

+ (instancetype)shared {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[CardBgConfig alloc] init];
    });
    return _sharedInstance;
}

+ (NSString *)modulePrefix {
    return @"CardBg_";
}
// ... 其余代码 ...
```

**改造后代码**：

```objc
// CardBgConfig.m — 改造后
#import "CardBgConfig.h"

@implementation CardBgConfig

// ★ 已删除文件级 static 变量

+ (instancetype)shared {
    static CardBgConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[CardBgConfig alloc] init];
    });
    return instance;
}

// ... 其余代码不变 ...
```

---

## 5. 无需修改的文件（3 个文件）

以下 3 个文件**已经使用风格 A**，不需要做任何修改。

### 5.1 RevokeConfig.m

**路径**: `/www/wwwroot/ios/MioPlugin/Modules/Revoke/RevokeConfig.m`

**当前代码**（已是风格 A，无需修改）：

```objc
// RevokeConfig.m — 已是正确风格，无需修改
#import "RevokeConfig.h"
#import "../../Core/ConfigManager.h"

@implementation RevokeConfig

#pragma mark - Singleton

+ (instancetype)shared {
    static RevokeConfig *instance = nil;         // ← 方法内局部变量 ✓
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[RevokeConfig alloc] init];
    });
    return instance;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _sessionFormats = [NSMutableDictionary dictionary];
        _userFormats = [NSMutableDictionary dictionary];
    }
    return self;
}

// ... 其余方法 ...
@end
```

**无需修改的理由**: 没有文件级 `_sharedInstance`，`+shared` 内使用方法内局部静态变量，符合风格 A 全部要求。

### 5.2 RevokeHandler.m

**路径**: `/www/wwwroot/ios/MioPlugin/Modules/Revoke/RevokeHandler.m`

**当前代码**（已是风格 A，无需修改）：

```objc
// RevokeHandler.m — 已是正确风格，无需修改
@implementataion RevokeHandler

+ (instancetype)shared {
    static RevokeHandler *instance = nil;         // ← 方法内局部变量 ✓
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[RevokeHandler alloc] init];
    });
    return instance;
}

// ... 其余方法 ...
@end
```

**无需修改的理由**: 与 RevokeConfig 相同，已是风格 A。

### 5.3 MioPluginSwitchHandler（位于 SettingEntryHook.m）

**路径**: `/www/wwwroot/ios/MioPlugin/Modules/SettingEntry/SettingEntryHook.m`，第 133-142 行

**当前代码**（已是风格 A，无需修改）：

```objc
// MioPluginSwitchHandler — 已是正确风格，无需修改
@implementation MioPluginSwitchHandler

+ (instancetype)sharedInstance {                 // ← 方法名不同但实现正确 ✓
    static MioPluginSwitchHandler *instance = nil; // ← 方法内局部变量 ✓
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[MioPluginSwitchHandler alloc] init];
    });
    return instance;
}
```

**无需修改的理由**:
- 使用**方法内局部静态变量**（风格 A 的核心要求）
- 没有文件级 `_sharedInstance`
- 方法名为 `sharedInstance` 而非 `shared`，但**这是调用方已经在使用的约定**（查看 SettingEntryHook.m 第 112 行：`[MioPluginSwitchHandler sharedInstance]`），改变方法名会导致编译错误或运行时崩溃
- 因此：**保持原样，不做修改**

---

## 6. 改造汇总

### 6.1 改动统计

| 类别 | 数量 | 说明 |
|------|------|------|
| **新建文件** | **0** | 不需要新建任何文件 |
| **修改文件** | **13** | 全部为 Config 模块实现文件 |
| **保持不变** | **3** | RevokeConfig、RevokeHandler、MioPluginSwitchHandler |
| **新增 import** | **0** | 不需要添加任何 `#import` |
| **删除行数** | **13** | 每文件删除 1 行文件级 `static XXX *_sharedInstance = nil;` |
| **修改行数** | **39** | 每文件修改 +shared 方法中的 3 处引用（变量声明 + 赋值 + return） |
| **净行数变化** | **0** | 删除 13 行，新增 13 行（方法内变量声明） |
| **调用方修改** | **0** | 所有 `[XXXConfig shared]` 调用完全不受影响 |

### 6.2 完整修改清单

| # | 文件路径 | 操作 | 删除 | 新增/修改 | 说明 |
|---|---------|------|------|----------|------|
| 1 | `Modules/Unread/ClearUnreadConfig.m` | 改 | 第 5 行 | 方法内 3 处 | 标准改造 |
| 2 | `Modules/Joker/JokerConfig.m` | 改 | 第 5 行 | 方法内 3 处 | 标准改造 |
| 3 | `Modules/GroupExit/GroupExitConfig.m` | 改 | 第 6 行 | 方法内 3 处 | 标准改造 |
| 4 | `Modules/RedEnvelop/RedEnvelopConfig.m` | 改 | 第 5 行 | 方法内 3 处 | 标准改造 |
| 5 | `Modules/AutoTransfer/AutoTransferConfig.m` | 改 | 第 5 行 | 方法内 3 处 | 标准改造 |
| 6 | `Modules/ChatTopBar/ChatTopBarConfig.m` | 改 | 第 13 行 | 方法内 3 处 | 含注释清理 |
| 7 | `Modules/MessageTime/MessageTimeConfig.m` | 改 | 第 3 行 | 方法内 3 处 | 变量在 @implementation 之前 |
| 8 | `Modules/Layout/UIPurifyConfig.m` | 改 | 第 5 行 | 方法内 3 处 | 标准改造 |
| 9 | `Modules/Layout/AttachLayoutConfig.m` | 改 | 第 5 行 | 方法内 3 处 | 标准改造 |
| 10 | `Modules/HideAvatar/HideAvatarConfig.m` | 改 | 第 5 行 | 方法内 3 处 | 标准改造 |
| 11 | `Modules/PlaceholderText/PlaceholderTextConfig.m` | 改 | 第 5 行 | 方法内 3 处 | 标准改造 |
| 12 | `Modules/ListCornerRadius/ListCornerRadiusConfig.m` | 改 | 第 5 行 | 方法内 3 处 | 标准改造 |
| 13 | `Modules/ProfileCardBg/CardBgConfig.m` | 改 | 第 5 行 | 方法内 3 处 | 标准改造 |

### 6.3 批量操作等价于

对每个改造文件，实质上等价于执行以下 **3 个字符串操作**：

| 操作 | 搜索 | 替换为 |
|------|------|--------|
| 删除文件级变量 | `static ClassName *_sharedInstance = nil;\n` | `（空）` |
| 添加方法内变量 | `+ (instancetype)shared {\n    static dispatch_once_t onceToken;` | `+ (instancetype)shared {\n    static ClassName *instance = nil;\n    static dispatch_once_t onceToken;` |
| 替换变量引用 | `_sharedInstance`（在 +shared 方法范围内） | `instance` |

---

## 7. 执行步骤

### 7.1 执行顺序

不需要特定顺序。13 个文件的修改完全独立，可以按任何顺序执行，也可以并行执行。

推荐按模块名称字母序逐个修改，以避免遗漏：

```
 1. AutoTransferConfig.m
 2. CardBgConfig.m
 3. ChatTopBarConfig.m
 4. ClearUnreadConfig.m
 5. GroupExitConfig.m
 6. HideAvatarConfig.m
 7. JokerConfig.m
 8. ListCornerRadiusConfig.m
 9. MessageTimeConfig.m
10. PlaceholderTextConfig.m
11. RedEnvelopConfig.m
12. UIPurifyConfig.m
13. AttachLayoutConfig.m
```

### 7.2 每文件操作步骤

对每个文件，执行以下精确操作：

**步骤 1**：打开文件，找到 `static ClassName *_sharedInstance = nil;` 行，整行删除。

**步骤 2**：在 `+ (instancetype)shared {` 下一行，`static dispatch_once_t onceToken;` 之前，插入：
```objc
    static ClassName *instance = nil;
```

**步骤 3**：在 `dispatch_once` 块内，将 `_sharedInstance` 替换为 `instance`。

**步骤 4**：在 `return` 行，将 `_sharedInstance` 替换为 `instance`。

### 7.3 操作实例（以 ClearUnreadConfig.m 为例）

```
文件原内容：
  @implementation ClearUnreadConfig
  static ClearUnreadConfig *_sharedInstance = nil;    ← 整行删除
  + (instancetype)shared {
      static dispatch_once_t onceToken;               ← 在此行前插入新行
      dispatch_once(&onceToken, ^{
          _sharedInstance = [[ClearUnreadConfig alloc] init];  ← 替换为 instance
      });
      return _sharedInstance;                         ← 替换为 instance
  }

文件修改后：
  @implementation ClearUnreadConfig
  + (instancetype)shared {
      static ClearUnreadConfig *instance = nil;       ← 新增
      static dispatch_once_t onceToken;
      dispatch_once(&onceToken, ^{
          instance = [[ClearUnreadConfig alloc] init];
      });
      return instance;
  }
```

### 7.4 MessageTimeConfig.m 的特殊注意

此文件的 `_sharedInstance` 在 `@implementation` 之前：

```
当前：
  #import "MessageTimeConfig.h"
  static MessageTimeConfig *_sharedInstance = nil;    ← 删除此整行（在 @implementation 之前）
  @implementation MessageTimeConfig
  + (instancetype)shared {
      static dispatch_once_t onceToken;
      ...
  }

修改后：
  #import "MessageTimeConfig.h"
  @implementation MessageTimeConfig                   ← 直接是 @implementation
  + (instancetype)shared {
      static MessageTimeConfig *instance = nil;       ← 新增此
      static dispatch_once_t onceToken;
      ...
  }
```

### 7.5 编译验证

所有文件修改完成后，Xcode 中执行 `Cmd+B` 编译：

```
预期的编译结果：
  - 0 errors
  - 0 warnings
  - 编译成功
```

如果出现编译错误，可能的原因：

| 错误信息 | 原因 | 修复 |
|---------|------|------|
| `Use of undeclared identifier '_sharedInstance'` | 某处还引用了 `_sharedInstance` 但变量已删除 | 在文件中搜索 `_sharedInstance`，全部改为 `instance` |
| `Expected identifier` | 变量声明语法错误 | 检查方法内变量声明是否为 `static ClassName *instance = nil;` |
| `Duplicate symbol` | 不可能出现（方法内 static 不会造成符号冲突） | — |

---

## 8. 验证计划

### 8.1 编译验证

| 检查项 | 方法 | 预期结果 |
|--------|------|----------|
| 编译 | Xcode `Cmd+B` | 0 errors, 0 warnings |
| 静态分析 | Xcode `Product → Analyze` | 0 issues |

### 8.2 功能验证

每个 Config 模块的 `+shared` 方法被多处调用（通过 `ConfigManager` 加载、模块内部访问等）。验证以下场景：

| 测试项 | 方法 | 预期结果 |
|--------|------|----------|
| `[ClearUnreadConfig shared]` | 在控制台执行或触发调用 | 返回有效实例，非 nil |
| `[RedEnvelopConfig shared]` | 触发红包功能 | 配置正常加载，自动抢红包正常工作 |
| `[CardBgConfig shared]` | 触发资料卡功能 | 配置正常加载 |
| 全部 13 个 Config 模块 | 遍历所有模块检查 | `[XXXConfig shared]` 均返回非 nil 实例 |

### 8.3 回归验证

| 测试项 | 检查点 |
|--------|--------|
| ConfigManager 配置加载 | 所有模块的 `+descriptors` 正常注册 |
| 配置读写 | 修改配置后，通过 `[XXXConfig shared]` 读取到最新值 |
| 模块功能 | 各模块对应的功能正常工作（抢红包、防撤回、暗黑模式等） |
| 内存 | 无新增内存泄漏（dispatch_once 模式线程安全） |

### 8.4 最终确认清单

- [ ] 项目中再无 `static XXX *_sharedInstance = nil;` 风格 B 的代码
- [ ] 全部 13 个 Config 模块已统一为方法内局部 `instance` 变量
- [ ] RevokeConfig.m、RevokeHandler.m、MioPluginSwitchHandler 保持原样
- [ ] 编译通过，0 errors, 0 warnings
- [ ] 所有 Config 模块的 `[XXXConfig shared]` 返回正常实例
- [ ] 所有模块功能不受影响

---

## 附录 A：改造前后对照总表

| 文件 | 改造前（风格 B） | 改造后（风格 A） |
|------|-----------------|-----------------|
| ClearUnreadConfig.m | `static ClearUnreadConfig *_sharedInstance` | 无文件级变量，方法内 `instance` |
| JokerConfig.m | `static JokerConfig *_sharedInstance` | 同上 |
| GroupExitConfig.m | `static GroupExitConfig *_sharedInstance` | 同上 |
| RedEnvelopConfig.m | `static RedEnvelopConfig *_sharedInstance` | 同上 |
| AutoTransferConfig.m | `static AutoTransferConfig *_sharedInstance` | 同上 |
| ChatTopBarConfig.m | `static ChatTopBarConfig *_sharedInstance` | 同上 |
| MessageTimeConfig.m | `static MessageTimeConfig *_sharedInstance`（在 @implementation 前） | 同上 |
| UIPurifyConfig.m | `static UIPurifyConfig *_sharedInstance` | 同上 |
| AttachLayoutConfig.m | `static AttachLayoutConfig *_sharedInstance` | 同上 |
| HideAvatarConfig.m | `static HideAvatarConfig *_sharedInstance` | 同上 |
| PlaceholderTextConfig.m | `static PlaceholderTextConfig *_sharedInstance` | 同上 |
| ListCornerRadiusConfig.m | `static ListCornerRadiusConfig *_sharedInstance` | 同上 |
| CardBgConfig.m | `static CardBgConfig *_sharedInstance` | 同上 |
| RevokeConfig.m | 已是风格 A ✅ | 无需修改 |
| RevokeHandler.m | 已是风格 A ✅ | 无需修改 |
| MioPluginSwitchHandler | 已是风格 A ✅ | 无需修改 |

## 附录 B：与方案 B（宏）的对比

| 对比项 | 方案 B（宏定义） | 方案 D（手动统一） |
|--------|----------------|------------------|
| **新建文件** | `Core/MioSingletonMacros.h`（~40 行） | **0** |
| **新增 import** | 16 个文件各加一行 `#import` | **0** |
| **文件修改数** | 16 | **13** |
| **删除代码行** | ~120 行（旧模板） | **13 行**（仅文件级变量） |
| **新增代码行** | ~17 行宏调用 + 16 行 import | **13 行**（方法内变量声明） |
| **方法签名兼容性** | ✅ 完全兼容 | ✅ 完全兼容 |
| **调试断点体验** | 差（宏展开不可见） | **完美**（标准 OC 方法） |
| **代码导航体验** | Cmd+点击到宏定义 | **Cmd+点击到方法实现** |
| **Xcode 静态分析** | 宏展开可能导致分析干扰 | **完美支持** |
| **新增模块约束力** | 编译期强制使用宏 | **代码审查约束** |
| **统一修改便利性** | 改一个宏定义即可 | 需逐文件修改（但因很简单，sed 秒级完成） |
| **自定义扩展难度** | 需展开宏，破坏统一 | **直接修改方法即可** |
| **长期维护成本** | 宏本身需要维护和文档 | **零维护** |

---

*文档结束*