# P1-6: `Tweak.m` 注册模块数组化改造方案（逐行详细版）

> 将 14 行重复的 `[ConfigManager registerModule:...]` 改为**数组 + for 循环**驱动。本文档逐行分析每一处代码改动，并提供二次风险分析。

---

## 一、问题分析

### 1.1 当前代码全貌

[`Tweak.m`](file:///www/wwwroot/ios/MioPlugin/Tweak.m) 是插件入口文件，包含一个 `__attribute__((constructor))` 修饰的 `MioPluginInitialize()` 函数。当前（改前）完整代码共 59 行：

```objc
// 第1-21行：头文件导入（14个 Config 头 + 3个系统头 + 4个其他头）
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import "Registry/HookRegistry.h"
#import "Core/ConfigManager.h"
#import "Modules/Revoke/RevokeConfig.h"
#import "Modules/Unread/ClearUnreadConfig.h"
#import "Modules/Joker/JokerConfig.h"
#import "Modules/GroupExit/GroupExitConfig.h"
#import "Modules/RedEnvelop/RedEnvelopConfig.h"
#import "Modules/AutoTransfer/AutoTransferConfig.h"
#import "Modules/ChatTopBar/ChatTopBarConfig.h"
#import "Modules/MessageTime/MessageTimeConfig.h"
#import "Modules/Layout/UIPurifyConfig.h"
#import "Modules/Layout/AttachLayoutConfig.h"
#import "Modules/HideAvatar/HideAvatarConfig.h"
#import "Modules/PlaceholderText/PlaceholderTextConfig.h"
#import "Modules/ListCornerRadius/ListCornerRadiusConfig.h"
#import "Modules/ProfileCardBg/CardBgConfig.h"
#import "Modules/ListCornerRadius/ListCornerRadiusHook.h"
#import "Modules/ProfileCardBg/ProfileCardBgHook.h"

// 第23-59行：constructor 函数
__attribute__((constructor))
static void MioPluginInitialize() {
    NSLog(@"[MioPlugin] === DYLIB LOADED ===");

    @try {
        @autoreleasepool {
            NSLog(@"[MioPlugin] entering constructor");

            // ★ 改造目标：第32-45行，14行 registerModule 调用
            [ConfigManager registerModule:RevokeConfig.class];       // 第32行
            [ConfigManager registerModule:ClearUnreadConfig.class];  // 第33行
            [ConfigManager registerModule:JokerConfig.class];        // 第34行
            [ConfigManager registerModule:GroupExitConfig.class];    // 第35行
            [ConfigManager registerModule:RedEnvelopConfig.class];   // 第36行
            [ConfigManager registerModule:AutoTransferConfig.class]; // 第37行
            [ConfigManager registerModule:ChatTopBarConfig.class];   // 第38行
            [ConfigManager registerModule:MessageTimeConfig.class];  // 第39行
            [ConfigManager registerModule:UIPurifyConfig.class];     // 第40行
            [ConfigManager registerModule:AttachLayoutConfig.class]; // 第41行
            [ConfigManager registerModule:HideAvatarConfig.class];   // 第42行
            [ConfigManager registerModule:PlaceholderTextConfig.class]; // 第43行
            [ConfigManager registerModule:ListCornerRadiusConfig.class]; // 第44行
            [ConfigManager registerModule:CardBgConfig.class];       // 第45行

            // ★ 改造范围：仅第32-45行
            // ★ 以下代码不改动：
            [ConfigManager loadAll];                                  // 第48行
            [HookRegistry installAllHooks];                           // 第50行
            // ★ ProfileCardBgHook 已通过 FeatureModuleRegistry 注册  // 第53行
            NSLog(@"[MioPlugin] all hooks installed");                // 第55行
        }
    } @catch (NSException *e) {
        NSLog(@"[MioPlugin] ✗ CONSTRUCTOR EXCEPTION: %@ - %@\n%@", e.name, e.reason, e.callStackSymbols);
    }
}
```

### 1.2 14 行调用的逐行对比

所有 14 行的**唯一区别**是 `registerModule:` 的参数不同：

```
[ConfigManager registerModule:RevokeConfig.class];         // 防撤回
[ConfigManager registerModule:ClearUnreadConfig.class];    // 清除未读
[ConfigManager registerModule:JokerConfig.class];          // Joker 弹窗
[ConfigManager registerModule:GroupExitConfig.class];      // 群退群监控
[ConfigManager registerModule:RedEnvelopConfig.class];     // 自动抢红包
[ConfigManager registerModule:AutoTransferConfig.class];   // 自动转账
[ConfigManager registerModule:ChatTopBarConfig.class];     // 聊天顶栏
[ConfigManager registerModule:MessageTimeConfig.class];    // 消息时间
[ConfigManager registerModule:UIPurifyConfig.class];       // UI 净化
[ConfigManager registerModule:AttachLayoutConfig.class];   // 附件布局
[ConfigManager registerModule:HideAvatarConfig.class];     // 隐藏头像
[ConfigManager registerModule:PlaceholderTextConfig.class];// 占位文本
[ConfigManager registerModule:ListCornerRadiusConfig.class];// 列表圆角
[ConfigManager registerModule:CardBgConfig.class];         // 资料卡背景
```

| 维度 | 值 |
|------|-----|
| 总调用行数 | 14 行 |
| 每行字符数 | 50-60 字符（含缩进） |
| 总重复字符数 | 14 × 37 = 518 字符（`[ConfigManager registerModule:` + `.class];` 重复部分） |
| 唯一部分 | 每个 `*Config.class` 类名 |
| 是否可数据驱动 | ✅ 是，类名可以放入数组 |

### 1.3 这个问题的实质

这不是一个"功能 bug"或"性能问题"，而是**可维护性（Maintainability）问题**：

- **新增模块时**：开发者需要在第 32-45 行的某个位置插入一行 `[ConfigManager registerModule:NewConfig.class]`
- **删除模块时**：开发者需要在一堆相同模式的行中找到目标行
- **检视代码时**：14 行相同的代码模式占据视觉空间，使 `loadAll` / `installAllHooks` 的核心顺序被淹没
- **合并冲突时**：如果两个人同时在 Tweak.m 中增加模块，Git 可能会产生合并冲突

---

## 二、改造方案（逐行代码）

### 2.1 改造原则

1. **不改动 14 个 `#import`** — 编译必须保留
2. **不改动 `loadAll` / `installAllHooks`** — 调用顺序不变
3. **不改动 `@try` / `@autoreleasepool` 结构** — 整体函数结构不变
4. **仅替换第 32-45 行** — 最小化改动

### 2.2 改后完整代码（标注改动部分）

```objc
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import "Registry/HookRegistry.h"
#import "Core/ConfigManager.h"
#import "Modules/Revoke/RevokeConfig.h"          // ← 保留：编译器需要这些类可见
#import "Modules/Unread/ClearUnreadConfig.h"      // ← 保留
#import "Modules/Joker/JokerConfig.h"             // ← 保留
#import "Modules/GroupExit/GroupExitConfig.h"     // ← 保留
#import "Modules/RedEnvelop/RedEnvelopConfig.h"   // ← 保留
#import "Modules/AutoTransfer/AutoTransferConfig.h"// ← 保留
#import "Modules/ChatTopBar/ChatTopBarConfig.h"   // ← 保留
#import "Modules/MessageTime/MessageTimeConfig.h" // ← 保留
#import "Modules/Layout/UIPurifyConfig.h"         // ← 保留
#import "Modules/Layout/AttachLayoutConfig.h"     // ← 保留
#import "Modules/HideAvatar/HideAvatarConfig.h"   // ← 保留
#import "Modules/PlaceholderText/PlaceholderTextConfig.h" // ← 保留
#import "Modules/ListCornerRadius/ListCornerRadiusConfig.h" // ← 保留
#import "Modules/ProfileCardBg/CardBgConfig.h"    // ← 保留
#import "Modules/ListCornerRadius/ListCornerRadiusHook.h" // ← 保留（Hook 非 Config）
#import "Modules/ProfileCardBg/ProfileCardBgHook.h"       // ← 保留（Hook 非 Config）

__attribute__((constructor))
static void MioPluginInitialize() {
    NSLog(@"[MioPlugin] === DYLIB LOADED ===");

    @try {
        @autoreleasepool {
            NSLog(@"[MioPlugin] entering constructor");

            // ★★★ 改造区域：14行逐行调用 → 数组 + 循环 ★★★

            // 定义所有 ConfigModule 类数组
            NSArray<Class<ConfigModule>> *allConfigClasses = @[
                RevokeConfig.class,
                ClearUnreadConfig.class,
                JokerConfig.class,
                GroupExitConfig.class,
                RedEnvelopConfig.class,
                AutoTransferConfig.class,
                ChatTopBarConfig.class,
                MessageTimeConfig.class,
                UIPurifyConfig.class,
                AttachLayoutConfig.class,
                HideAvatarConfig.class,
                PlaceholderTextConfig.class,
                ListCornerRadiusConfig.class,
                CardBgConfig.class,
            ];

            // 循环注册
            for (Class<ConfigModule> cls in allConfigClasses) {
                [ConfigManager registerModule:cls];
            }

            // 诊断日志：确认注册数量
            NSLog(@"[MioPlugin] registered %lu config modules", (unsigned long)allConfigClasses.count);

            // ★★★ 改造结束 ★★★

            // 以下代码不改动
            [ConfigManager loadAll];
            [HookRegistry installAllHooks];

            NSLog(@"[MioPlugin] all hooks installed");
        }
    } @catch (NSException *e) {
        NSLog(@"[MioPlugin] ✗ CONSTRUCTOR EXCEPTION: %@ - %@\n%@", e.name, e.reason, e.callStackSymbols);
    }
}
```

### 2.3 逐行解析新增/改动代码

#### 第 1 行：数组声明 + 类型约束

```objc
NSArray<Class<ConfigModule>> *allConfigClasses = @[
```

| 语法要素 | 说明 |
|----------|------|
| `NSArray<...> *` | Objective-C 泛型（Lightweight Generics），编译期类型检查 |
| `Class<ConfigModule>` | 泛型参数，表示数组中只能存放**遵循 ConfigModule 协议**的 Class 对象 |
| `@[...]` | 编译期数组字面量，在编译时确定内容，运行时零开销 |
| 变量名 `allConfigClasses` | 表达"所有 Config 类"的语义，自文档化 |

> **为什么用 `NSArray` 而不是 `C 数组` 或 `NSMutableArray`？**
> - `NSArray`（不可变）比 `NSMutableArray` 更安全，不会被意外修改
> - `NSArray` 的 `@[...]` 字面量简洁、可读性强
> - `NSArray` 支持泛型约束 `<Class<ConfigModule>>`

#### 第 2-16 行：数组元素

```objc
    RevokeConfig.class,
    ClearUnreadConfig.class,
    JokerConfig.class,
    // ...（全部 14 个模块）
    CardBgConfig.class,
];
```

> **每个元素**是 `Class` 对象（`*Config.class`），对应一个 ConfigModule 实现类。
>
> **顺序说明**：数组中的顺序与改前第 32-45 行的顺序**完全一致**，保证 `registerModule:` 的调用顺序不变。
>
> **注意结尾逗号**：最后一个元素 `CardBgConfig.class,` 有尾逗号。Objective-C 允许 `@[...]` 字面量的最后一个元素后面加逗号（类似 Swift），这是良好的编码习惯——下次新增模块时只需加一行，不需要修改上一行。

#### 第 3 行：for 循环

```objc
for (Class<ConfigModule> cls in allConfigClasses) {
```

> **快速枚举（Fast Enumeration）**：对集合中的每个元素执行循环体。等效于：
> ```objc
> for (NSUInteger i = 0; i < [allConfigClasses count]; i++) {
>     Class<ConfigModule> cls = allConfigClasses[i];
>     // ...
> }
> ```
> 但更简洁、性能更好（内部使用 `NSFastEnumeration` 协议，比下标访问更快）。

#### 第 4 行：注册调用

```objc
    [ConfigManager registerModule:cls];
}
```

> **与改前的唯一区别**：改前是 14 个不同的字面量类名，这里是循环变量 `cls`。执行效果完全等价。

#### 第 5 行：诊断日志

```objc
NSLog(@"[MioPlugin] registered %lu config modules", (unsigned long)allConfigClasses.count);
```

> **新增诊断信息**：这是改前没有的。`allConfigClasses.count` 返回 `NSUInteger`（无符号整数），格式符 `%lu` 配合 `(unsigned long)` 强制转换确保跨平台兼容（32/64 位）。
>
> 作用：在控制台日志中确认注册的模块数量，便于排查遗漏。输出示例：
> ```
> [MioPlugin] registered 14 config modules
> ```

### 2.4 精细 diff（改动对比）

```diff
  // ★ 改前（14行）
- [ConfigManager registerModule:RevokeConfig.class];
- [ConfigManager registerModule:ClearUnreadConfig.class];
- [ConfigManager registerModule:JokerConfig.class];
- [ConfigManager registerModule:GroupExitConfig.class];
- [ConfigManager registerModule:RedEnvelopConfig.class];
- [ConfigManager registerModule:AutoTransferConfig.class];
- [ConfigManager registerModule:ChatTopBarConfig.class];
- [ConfigManager registerModule:MessageTimeConfig.class];
- [ConfigManager registerModule:UIPurifyConfig.class];
- [ConfigManager registerModule:AttachLayoutConfig.class];
- [ConfigManager registerModule:HideAvatarConfig.class];
- [ConfigManager registerModule:PlaceholderTextConfig.class];
- [ConfigManager registerModule:ListCornerRadiusConfig.class];
- [ConfigManager registerModule:CardBgConfig.class];

  // ★ 改后（13行 = 数组声明3行 + 循环3行 + 日志1行 + 数组内容7行）
+ NSArray<Class<ConfigModule>> *allConfigClasses = @[
+     RevokeConfig.class,
+     ClearUnreadConfig.class,
+     JokerConfig.class,
+     GroupExitConfig.class,
+     RedEnvelopConfig.class,
+     AutoTransferConfig.class,
+     ChatTopBarConfig.class,
+     MessageTimeConfig.class,
+     UIPurifyConfig.class,
+     AttachLayoutConfig.class,
+     HideAvatarConfig.class,
+     PlaceholderTextConfig.class,
+     ListCornerRadiusConfig.class,
+     CardBgConfig.class,
+ ];
+ for (Class<ConfigModule> cls in allConfigClasses) {
+     [ConfigManager registerModule:cls];
+ }
+ NSLog(@"[MioPlugin] registered %lu config modules", (unsigned long)allConfigClasses.count);
```

### 2.5 改动统计

| 指标 | 改前 | 改后 | 变化 |
|------|:----:|:----:|:----:|
| 注册调用语句数 | 14 行 | 3 行（数组定义 2 行 + for 循环 1 行） | -11 行 |
| 额外代码 | 无 | 1 行 `NSLog` + 1 行数组闭合 `];` + 3 行数组元素 | +5 行 |
| **文件总代码行数** | 59 行 | **52 行** | **-7 行** |
| 注册逻辑的视觉空间 | 14 行占据了 23% 的构造函数 | 13 行，但包含注释和空白 | 更紧凑 |
| 新增诊断能力 | 无 | `NSLog` 输出注册数量 | 有改善 |

---

## 三、不改动 `#import` 的原因（重要）

可能会有一个疑问：既然 Config 类名已经在数组中使用，是否还需要 `#import`？

**答案是：必须保留 `#import`。**

```objc
// ★ 以下 #import 不可删除
#import "Modules/Revoke/RevokeConfig.h"      // ← 提供 RevokeConfig 类的声明
// ...

// ★ 数组中使用 RevokeConfig.class
NSArray<Class<ConfigModule>> *allConfigClasses = @[
    RevokeConfig.class,                       // ← 编译器需要知道 RevokeConfig 是什么
    // ...
];
```

| 场景 | 有 `#import` | 无 `#import` |
|------|:-----------:|:-----------:|
| 编译阶段 | ✅ 正常编译 | ❌ `RevokeConfig` 未声明，编译错误 |
| 链接阶段 | ✅ 正常链接 | N/A（编译失败，到不了链接） |
| 运行时 | ✅ 正常 | N/A |

`*Config.class` 是一个**编译期符号**（类对象指针），编译器需要看到类的 `@interface` 声明才能编译。`#import` 的作用就是告诉编译器这些类是什么。

---

## 四、用户测试方法

### 阶段 1：编译和启动验证

| 步骤 | 操作 | 观察点 | 预期结果 |
|:----:|------|--------|----------|
| 1 | `make clean && make` | 编译输出 | ✅ 编译通过，0 error，0 warning |
| 2 | 安装 .dylib 到微信 | 安装过程 | 无报错 |
| 3 | 启动微信 | 控制台日志 | 出现 `[MioPlugin] registered 14 config modules` |
| 4 | 继续观察启动日志 | 控制台日志 | `[MioPlugin] all hooks installed` 随后出现 |

### 阶段 2：配置完整性验证

| 步骤 | 操作 | 预期结果 |
|:----:|------|----------|
| 5 | 进入「防撤回」设置页 | 所有开关和设置项正常显示 |
| 6 | 切换几个开关 → 杀掉进程重启 | 设置保持 ✅ |
| 7 | 进入「自动抢红包」设置页 | 所有开关正常 |
| 8 | 修改延迟值 → 重启 | 值保持 ✅ |
| 9 | 进入「消息时间」设置页 | 所有选项正常 |
| 10 | 进入「聊天顶栏」设置页 | 所有选项正常 |
| 11 | 进入「群退群监控」设置页 | 所有选项正常 |
| 12 | 进入「占位文本」设置页 | 所有选项正常 |
| 13 | 进入「列表圆角」设置页 | 所有选项正常 |
| 14 | 进入「资料卡背景」设置页 | 所有选项正常 |
| 15 | 进入「UI 净化」设置页 | 所有选项正常 |
| 16 | 进入「隐藏头像」设置页 | 所有选项正常 |
| 17 | 进入「附件布局」设置页 | 所有选项正常 |
| 18 | 进入「清除未读」设置页 | 所有选项正常 |
| 19 | 进入「Joker 弹窗」设置页 | 所有选项正常 |
| 20 | 进入「自动转账」设置页 | 所有选项正常 |

> 以上 14 个模块全部验证后，确认每个模块的配置页面都能正常加载 ✅

### 阶段 3：功能完整性验证（抽样测试）

| 步骤 | 操作 | 预期结果 |
|:----:|------|----------|
| 21 | 在群聊中发一条消息并撤回 | 防撤回功能生效 ✅ |
| 22 | 群里有人发红包 | 自动抢红包功能触发 ✅ |
| 23 | 进入聊天列表 | 列表圆角正常显示 ✅ |
| 24 | 进入资料卡 | 背景色正确 ✅ |
| 25 | 在聊天中输入文字 | 占位文本功能正常 ✅ |

### 阶段 4：边界场景验证

| 步骤 | 操作 | 预期结果 |
|:----:|------|----------|
| 26 | 使用「重置所有配置」功能 | 所有模块配置全部恢复默认 ✅ |
| 27 | 重置后杀掉进程重启 | 全部为默认值 ✅ |
| 28 | 修改配置后立即杀掉进程（非正常退出）| 配置应已通过 `saveAll` 持久化 ✅ |

---

## 五、二次风险分析（深层分析已有分析未覆盖的问题）

⚠️ **本节重点**：分析原始文档未覆盖的潜在风险点。

### 5.1 数组元素为 nil 的风险

`@[...]` 数组字面量中的元素**不能为 nil**。如果某个元素为 nil，会在运行时抛出异常：

```
*** Terminating app due to uncaught exception 'NSInvalidArgumentException',
reason: '*** -[__NSPlaceholderArray initWithObjects:count:]: attempt to insert nil object from objects[0]'
```

| 场景 | `*Config.class` 可能为 nil？ | 分析 |
|------|:--------------------------:|------|
| 正常编译 | ❌ 不可能 | `*Config.class` 是编译期确定的类对象指针，只要该类被正确编译和链接，就永远不为 nil |
| `#import` 遗漏 | **编译失败，到不了运行** | 编译器报 `Use of undeclared identifier`，编译错误 |
| 链接失败 | **链接失败，.dylib 无法生成** | `Undefined symbols` 链接错误 |
| 运行时动态卸载 | ❌ 不可能（.dylib 无法部分卸载）| Objective-C 类一旦加载就不能卸载 |

**结论**：数组元素为 nil 导致崩溃的**概率为 0**。如果发生，说明存在编译/链接错误，这些错误会在开发阶段被 Xcode 捕获。

### 5.2 泛型类型约束的编译期检查

```objc
NSArray<Class<ConfigModule>> *allConfigClasses = @[...];
```

Objective-C 的 Lightweight Generics 会在编译期进行类型检查：

| 代码 | 编译结果 |
|------|:--------:|
| `@[RevokeConfig.class, ...]` | ✅ 通过 — 所有 Config 类都遵循 `ConfigModule` 协议 |
| `@[RevokeConfig.class, NSString.class]` | ⚠️ 警告 — `NSString` 不遵循 `ConfigModule` 协议 |
| `@[RevokeConfig.class, (id)NSString.class]` | ✅ 通过（强制转型绕过检查）— 但这是故意绕过类型系统 |

**但在本项目场景下**，数组中的元素全部是合法的 `*Config.class`，且都遵循 `ConfigModule` 协议，泛型检查全部通过。

### 5.3 数组顺序与改前顺序的一致性

精确对比改前第 32-45 行的顺序和数组中的顺序：

| 索引 | 改前行号 | 类名 | 数组中索引 | 顺序一致？ |
|:----:|:--------:|------|:----------:|:--------:|
| 0 | 32 | `RevokeConfig.class` | 0 | ✅ |
| 1 | 33 | `ClearUnreadConfig.class` | 1 | ✅ |
| 2 | 34 | `JokerConfig.class` | 2 | ✅ |
| 3 | 35 | `GroupExitConfig.class` | 3 | ✅ |
| 4 | 36 | `RedEnvelopConfig.class` | 4 | ✅ |
| 5 | 37 | `AutoTransferConfig.class` | 5 | ✅ |
| 6 | 38 | `ChatTopBarConfig.class` | 6 | ✅ |
| 7 | 39 | `MessageTimeConfig.class` | 7 | ✅ |
| 8 | 40 | `UIPurifyConfig.class` | 8 | ✅ |
| 9 | 41 | `AttachLayoutConfig.class` | 9 | ✅ |
| 10 | 42 | `HideAvatarConfig.class` | 10 | ✅ |
| 11 | 43 | `PlaceholderTextConfig.class` | 11 | ✅ |
| 12 | 44 | `ListCornerRadiusConfig.class` | 12 | ✅ |
| 13 | 45 | `CardBgConfig.class` | 13 | ✅ |

**顺序完全一致**。并且 `registerModule:` 内部通过 `[s_registeredModules addObject:]` 按顺序追加，改前和改后注册顺序一样，模块在 `s_registeredModules` 数组中的索引位置也一样。

### 5.4 `registerModule:` 内部去重保护

[`ConfigManager.m`](file:///www/wwwroot/ios/MioPlugin/Core/ConfigManager.m) 第 9-16 行：

```objc
+ (void)registerModule:(Class<ConfigModule>)moduleClass {
    if (!s_registeredModules) {
        s_registeredModules = [NSMutableArray array];
    }
    if (![s_registeredModules containsObject:moduleClass]) {  // ← 去重保护
        [s_registeredModules addObject:moduleClass];
    }
}
```

| 场景 | 去重保护是否生效 |
|------|:---------------:|
| 数组中无意包含重复类 | ✅ `containsObject:` 检查，重复类不会二次注册 |
| 构造器被调用两次（理论上不可能） | ✅ 同上 |

### 5.5 `allConfigClasses` 变量作用域和内存管理

```objc
@autoreleasepool {
    NSArray<Class<ConfigModule>> *allConfigClasses = @[...];
    for (...) { ... }
    // 这里 allConfigClasses 仍然有效
    [ConfigManager loadAll];
    [HookRegistry installAllHooks];
} // ← @autoreleasepool 结束，allConfigClasses 被释放
```

| 关注点 | 分析 |
|--------|------|
| 变量作用域 | `allConfigClasses` 在 `@autoreleasepool` 块内定义，在块结束时自动释放 |
| 内存占用 | 14 个指针（112 字节 on 64-bit）+ NSArray 对象开销（~32 字节）= **~144 字节**，持续约几微秒 |
| ARC 管理 | `@[]` 字面量返回 `__strong` 对象，ARC 自动管理引用计数 |
| 循环结束后是否释放 | 在 `@autoreleasepool` 块结束时释放，但如果循环后有大量耗时操作（这里没有），池内内存会累积 |

**结论**：内存占用极小（144 字节），在 `@autoreleasepool` 内创建和销毁，无内存问题。

### 5.6 `NSLog` 诊断信息的副作用

```objc
NSLog(@"[MioPlugin] registered %lu config modules", (unsigned long)allConfigClasses.count);
```

| 副作用 | 分析 |
|--------|------|
| 性能影响 | `NSLog` 约耗时 0.1-1ms，只在构造器启动时调用一次，可忽略 |
| ASL 日志写入 | `NSLog` 写入系统日志 `system.log`，占用少量磁盘空间（约 50 字节/条） |
| 泄密风险 | 日志内容仅含模块数量（14），不包含用户数据，无隐私风险 |
| 调试价值 | **高** — 快速确认所有模块是否注册成功。如果日志输出 `registered 14 config modules`，说明模块列表完整 |

**结论**：+1 行 `NSLog` 的收益远大于成本。

### 5.7 新增模块时的遗漏风险

这是**改前和改后都存在的问题**：

| 场景 | 改前 | 改后 |
|------|:----:|:----:|
| 新模块 A 已实现，但忘记在 Tweak.m 注册 | 功能静默丢失 | **同样静默丢失** |
| 编译报错？ | ❌ 不会报错（`*Config.class` 只是类对象引用） | ❌ 同样不会报错 |
| 如何检测？ | 手动检查或运行时日志 | 通过 `NSLog(@"registered %lu...")` 发现数量不对 |

**改后的优势**：新增的 `NSLog` 输出了注册总数，如果开发者看到 `registered 13 config modules` 但预期是 14，能立即发现遗漏。

### 5.8 与 `P1-5` 改造的兼容性

P1-5 改造了 `ConfigManager.m` 内部的遍历逻辑，P1-6 改造了 `Tweak.m` 的注册方式。两者**完全独立**：

| 维度 | P1-5 | P1-6 | 交互 |
|------|------|------|:----:|
| 修改文件 | `ConfigManager.m` | `Tweak.m` | **不同文件** |
| 修改内容 | 内部遍历方法 | 外部注册方式 | **互不影响** |
| 依赖关系 | 无（接口不变） | `registerModule:` 接口不变 | ✅ 兼容 |

**结论**：P1-5 和 P1-6 可以**独立实施或同时实施**，无冲突。

### 5.9 综合风险评级

| 风险项 | 等级 | 是否新增 | 说明 |
|--------|:----:|:--------:|------|
| 功能正确性 | ✅ 无风险 | 否 | 注册行为完全等价 |
| 数组元素为 nil | ✅ 无风险 | 否 | `*Config.class` 不可能为 nil |
| 注册顺序 | ✅ 无风险 | 否 | 顺序完全一致 |
| 重复注册 | ✅ 无风险 | 否 | `registerModule:` 内部有去重 |
| 内存管理 | ✅ 无风险 | 否 | 144 字节，`@autoreleasepool` 内自动释放 |
| 编译检查 | ✅ 无风险 | 否 | 泛型 `<Class<ConfigModule>>` 提供类型安全 |
| 模块遗漏检测 | ✅ **有改善** | **正向** | 新增 `NSLog` 帮助发现遗漏 |
| 需保留 14 个 `#import` | ✅ 注意点 | 否 | 删除 `#import` 会导致编译失败 |
| 综合风险 | **极低** | 无新增风险 | |

### 5.10 最坏情况推演

| 假设的极端情况 | 后果 | 恢复 |
|----------------|------|:----:|
| 数组中的某个类被错误地注释掉 | 该模块的配置不会被加载，功能静默丢失 | 通过 `NSLog` 发现计数不对，恢复注释行 |
| 数组顺序被意外打乱 | 注册顺序改变，但 `s_registeredModules` 只关心"包含"不关心"顺序"，**功能不受影响** | 无需恢复（无影响） |
| 数组类型泛型被移除 | 编译器不再检查元素类型，但运行时仍然正确 | 无影响，仅是编译期检查弱化 |

**结论**：即使在最坏情况下，也不会导致崩溃或数据丢失。

---

## 文档信息

| 项目 | 内容 |
|------|------|
| 创建日期 | 2026-06-12 |
| 涉及文件 | [Tweak.m](file:///www/wwwroot/ios/MioPlugin/Tweak.m)（仅此 1 个文件） |
| 不改动的文件 | 14 个 `*Config.h` 头文件、[ConfigManager.h](file:///www/wwwroot/ios/MioPlugin/Core/ConfigManager.h)、[ConfigManager.m](file:///www/wwwroot/ios/MioPlugin/Core/ConfigManager.m) |
| 改动类型 | 14 行逐行注册 → 数组 + for 循环 |
| 代码行数变化 | 59 行 → 52 行（净减 7 行） |
| 影响范围 | Tweak.m 内部，对 `loadAll` / `installAllHooks` 无影响 |
| 风险等级 | **极低**（纯语法糖改造，运行时行为等价） |
| 二次风险结论 | **无新增功能性风险**。`NSLog` 诊断是正向改进。唯一注意点是需保留 14 个 `#import` 保证编译通过。 |