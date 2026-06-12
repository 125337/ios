# 问题4 改造方案：LogManager 双日志文件统一

> **关联文档**: [MioPlugin_架构深度分析报告.md](file:///www/wwwroot/ios/MioPlugin_架构深度分析报告.md)  
> **改造目标**: 消除 WPLog 写入 `plugin.log` 与 `appendLineWithTag:` 写入 `MioPlugin.log` 的双文件分散问题，建立**唯一日志文件**  
> **方案类型**: 终极统一方案（非补丁）  
> **说明**: 本文档仅提供改造方案，不涉及实际代码修改。

---

## 一、现状分析

### 1.1 当前日志架构

**两种写入路径、两个文件、两种格式：**

```
                    WPLog(tag, fmt, ...) 宏
                     │
                     ├─ NSLog(@"[%@] %@", tag, msg)
                     │     → 系统控制台（ASL / Unified Logging）
                     │
                     └─ [_WPLogManager writeTag:tag content:msg]
                           → Documents/MioPlugin_Logs/plugin.log      ← 文件 #1
                             格式: [2026-06-10 14:30:22 +0000] [Tag] msg


                    [_WPLogManager appendLineWithTag:content:]
                           → Documents/MioPlugin_Logs/MioPlugin.log   ← 文件 #2
                             格式: [2026-06-10 14:30:22][Tag] msg
```

### 1.2 调用方分布

| 写入路径 | 使用方式 | 使用文件数 | 代表文件 |
|---------|---------|:---------:|---------|
| `plugin.log` | `WPLog(tag, fmt, ...)` 宏 | **32 个** | 所有 Hook、Controller、工具类 |
| `MioPlugin.log` | `appendLineWithTag:content:` | **3 个** | GroupExitHook.m、AutoTransferHook.m、MioAlertHelper.m |

**问题本质**：同一个 `MioPlugin_Logs/` 目录下并存两个日志文件，排查问题时需要同时查看两个文件才能获得完整信息。

### 1.3 两种写入方法对比

| 对比项 | `WPLog` → `writeTag:` | `appendLineWithTag:` |
|-------|:--------------------:|:-------------------:|
| 目标文件 | `plugin.log` | `MioPlugin.log` |
| 时间戳格式 | `[NSDate date]` 默认格式 (`+0000` 尾缀) | `yyyy-MM-dd HH:mm:ss` 自定义格式 |
| 同时输出到 NSLog | **是** | **否** |
| 调用方 | 32 个文件 | 3 个文件 |
| 写入密度 | 低频 ~ 中频 | 高频（循环内调试日志） |

---

## 二、改造方案：统一日志文件

### 2.1 方案设计

**核心原则**：一个目录、一个文件、一种格式。

```
改造前:  MioPlugin_Logs/
           ├─ plugin.log      (WPLog)
           └─ MioPlugin.log   (appendLineWithTag)

改造后:  MioPlugin_Logs/
           └─ MioPlugin.log   (两边都写入此文件，统一格式)
```

### 2.2 具体改动

只需要修改 **1 个文件**：[LogManager.m](file:///www/wwwroot/ios/MioPlugin/Core/LogManager.m)

改动分三步：

| 步骤 | 操作 | 说明 |
|------|------|------|
| **1** | 删除 `logFilePath` 方法 | 不再使用 `plugin.log` |
| **2** | 改写 `writeTag:content:` | 改为调用 `appendLineWithTag:content:`，使其写入 `MioPlugin.log` |
| **3** | (可选) 统一时间戳格式 | `appendLineWithTag:` 的格式更好，统一用此格式 |

**不改动的**：
- `WPLog` 宏定义（仍然同时 NSLog + 写文件）
- `appendLineWithTag:` 方法签名（保持兼容）
- 任何调用方代码（两边的调用方在改造后自动写入同一文件）

### 2.3 改造后的代码

```objc
// ── 改造前 (LogManager.m) ──

#import "LogManager.h"

@implementation _WPLogManager

/// ★ 方法 1: 返回 plugin.log 路径（将要删除）
+ (NSString *)logFilePath {
    static NSString *_logPath = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folder = [paths.firstObject stringByAppendingPathComponent:@"MioPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folder withIntermediateDirectories:YES attributes:nil error:nil];
        _logPath = [folder stringByAppendingPathComponent:@"plugin.log"];
    });
    return _logPath;
}

/// ★ 方法 2: WPLog 调用的写入（写入 plugin.log）
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

/// ★ 方法 3: 调试日志写入（写入 MioPlugin.log）
+ (void)appendLineWithTag:(NSString *)tag content:(NSString *)line {
    @try {
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folderPath = [paths.firstObject stringByAppendingPathComponent:@"MioPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folderPath
                                  withIntermediateDirectories:YES
                                                   attributes:nil
                                                        error:nil];
        NSString *filePath = [folderPath stringByAppendingPathComponent:@"MioPlugin.log"];

        NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
        formatter.dateFormat = @"yyyy-MM-dd HH:mm:ss";
        NSString *timestamp = [formatter stringFromDate:[NSDate date]];
        NSString *logLine = [NSString stringWithFormat:@"[%@][%@] %@\n", timestamp, tag, line];

        NSFileHandle *handle = [NSFileHandle fileHandleForWritingAtPath:filePath];
        if (handle) {
            [handle seekToEndOfFile];
            [handle writeData:[logLine dataUsingEncoding:NSUTF8StringEncoding]];
            [handle closeFile];
        } else {
            [logLine writeToFile:filePath atomically:YES encoding:NSUTF8StringEncoding error:nil];
        }
    } @catch (NSException *e) {}
}

@end


// ── 改造后 (LogManager.m) ──

#import "LogManager.h"

/// 统一日志文件路径（懒加载，dispatch_once 保证线程安全）
static NSString *WPLogFilePath(void) {
    static NSString *_logPath = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folder = [paths.firstObject stringByAppendingPathComponent:@"MioPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folder
                                  withIntermediateDirectories:YES
                                                   attributes:nil
                                                        error:nil];
        _logPath = [folder stringByAppendingPathComponent:@"MioPlugin.log"];
    });
    return _logPath;
}

/// 向统一日志文件追加一行
/// 格式: [2026-06-10 14:30:22][Tag] 内容
static void WPLogAppendLine(NSString *tag, NSString *content) {
    @try {
        NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
        formatter.dateFormat = @"yyyy-MM-dd HH:mm:ss";
        NSString *timestamp = [formatter stringFromDate:[NSDate date]];
        NSString *line = [NSString stringWithFormat:@"[%@][%@] %@\n", timestamp, tag, content];

        NSString *filePath = WPLogFilePath();
        NSFileHandle *handle = [NSFileHandle fileHandleForWritingAtPath:filePath];
        if (handle) {
            [handle seekToEndOfFile];
            [handle writeData:[line dataUsingEncoding:NSUTF8StringEncoding]];
            [handle closeFile];
        } else {
            [line writeToFile:filePath atomically:YES encoding:NSUTF8StringEncoding error:nil];
        }
    } @catch (NSException *e) {
        // 日志写入失败不抛异常，不吞 NSLog
    }
}

@implementation _WPLogManager

/**
 * WPLog 宏的写入目标。
 * 改造前: 写入 plugin.log
 * 改造后: 写入 MioPlugin.log（与 appendLineWithTag: 同一文件）
 *
 * ⚠️ 注意: WPLog 宏调用前已经执行了 NSLog，
 *    此方法仅负责文件持久化，不再输出到控制台。
 */
+ (void)writeTag:(NSString *)tag content:(NSString *)content {
    WPLogAppendLine(tag, content);
}

/**
 * 直接追加一行到统一日志文件（不输出 NSLog）。
 * 适用于高频调试日志，避免刷屏控制台。
 */
+ (void)appendLineWithTag:(NSString *)tag content:(NSString *)line {
    WPLogAppendLine(tag, line);
}

@end
```

### 2.4 公共函数说明

引入两个 `static` C 函数的作用：

| 函数 | 作用 |
|------|------|
| `WPLogFilePath()` | 统一日志文件路径（`MioPlugin_Logs/MioPlugin.log`），取代原 `logFilePath`（`plugin.log`） |
| `WPLogAppendLine(tag, content)` | 原子级追加写入，带时间戳格式化，供两个 ObjC 方法共用 |

> 选择 C 函数而非 ObjC 方法的原因：避免两个类方法互相调用带来的 `self` 歧义，C 函数是纯粹的"写文件"操作，职责单一。

---

## 三、改造前后对比

### 3.1 文件变化

| 指标 | 改造前 | 改造后 |
|------|:----:|:----:|
| 日志文件数 | **2 个**（`plugin.log` + `MioPlugin.log`） | **1 个**（`MioPlugin.log`） |
| 目录内文件 | `plugin.log`, `MioPlugin.log` | `MioPlugin.log` |
| 日志格式统一度 | 不同格式 | **统一** |

### 3.2 代码变化

| 指标 | 改造前 | 改造后 |
|------|:----:|:----:|
| 文件行数 | 64 行 | **~55 行**（净减 9 行） |
| 文件路径数 | 2 处（`logFilePath` + `appendLineWithTag` 内联路径） | **1 处**（`WPLogFilePath()`） |
| 写入逻辑副本 | 2 份（`writeTag:` + `appendLineWithTag:`） | **1 份**（`WPLogAppendLine()`） |
| 时间戳格式化 | 2 种 | **1 种** |

### 3.3 行为变化

| 场景 | 改造前 | 改造后 |
|------|:----:|:----:|
| `WPLog(@"Revoke", @"msg loaded")` | 写入 `plugin.log` | 写入 `MioPlugin.log` |
| `[_WPLogManager appendLineWithTag:@"GroupExit" content:...]` | 写入 `MioPlugin.log` | 写入 `MioPlugin.log`（不变） |
| 排查问题时 | 需要 `cat plugin.log && cat MioPlugin.log` | **只需 `cat MioPlugin.log`** |

### 3.4 对旧日志的影响

改造后**不会丢失**旧日志：

- 旧 `plugin.log` 文件保留在 `MioPlugin_Logs/` 目录中（不会被删除）
- 新日志开始写入 `MioPlugin.log`，旧 plugin.log 会成为历史文件
- 如果要彻底清理旧文件，可以在改造完成后手动删除：

```bash
# 设备上登录 ssh 后执行
rm /var/mobile/Documents/.MioPlugin/MioPlugin_Logs/plugin.log
```

---

## 四、日志梳理：是否需要保留 `appendLineWithTag:`？

### 4.1 当前三个调用方的用途

| 调用方 | 使用场景 | 日志密度 |
|-------|---------|:-------:|
| [GroupExitHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/GroupExit/GroupExitHook.m) | 每次群成员变更时记录旧→新成员变化 | **高频**（每秒可能多次） |
| [AutoTransferHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/AutoTransfer/AutoTransferHook.m) | 转账检测 + 自动回复结果 | **中频** |
| [MioAlertHelper.m](file:///www/wwwroot/ios/MioPlugin/Modules/MioAlertHelper/MioAlertHelper.m) | 弹窗生命周期的每个步骤 | **低频**（仅调试用） |

### 4.2 GroupExitHook 的日志写入策略是否需要调整？

GroupExitHook 在 `setGroupMemberList::::` hook 的循环内高频调用 `appendLineWithTag:`，如果日志量过大，文件写入 I/O 可能成为性能隐患。

**改造方案中不调整 GroupExitHook 的日志策略**（职责范围外），但提供以下建议：

| 建议 | 实现方式 | 效果 |
|------|---------|------|
| 使用频率限制 | 在 `WPLogAppendLine` 内部添加最小间隔控制（如 100ms 内跳过重复 tag 的写入） | 减少 I/O 压力 |
| 提级到 WPLog | 将重要事件用 WPLog（NSLog 可见），调试细节保留 appendLineWithTag | 区分日志级别 |

**两种建议都不属于本次"双文件统一"的必要改动**，仅作为后续优化方向列出。

---

## 五、LogManager.h API 说明

改造后 [LogManager.h](file:///www/wwwroot/ios/MioPlugin/Core/LogManager.h) **不需要**修改。

当前的头文件声明已经是干净的双 API 设计：

```objc
// LogManager.h（改造后无需修改）

#define WPLog(tag, fmt, ...) \
    do { \
        NSString *_msg = [NSString stringWithFormat:(fmt), ##__VA_ARGS__]; \
        NSLog(@"[%@] %@", (tag), _msg); \
        [_WPLogManager writeTag:(tag) content:_msg]; \
    } while(0)

@interface _WPLogManager : NSObject

/// WPLog 宏的写入目标（NSLog + 文件持久化）
+ (void)writeTag:(NSString *)tag content:(NSString *)content;

/// 仅文件写入（不输出 NSLog），适用于高频调试日志
+ (void)appendLineWithTag:(NSString *)tag content:(NSString *)line;
@end
```

两个方法的语义清晰：
- **`WPLog`**: 控制台可见 + 文件持久化（适合普通日志）
- **`appendLineWithTag:`**: 仅文件写入（适合调试高频日志，不刷控制台）

改造后两者写入**同一个文件**，语义不变。

---

## 六、执行步骤

| 步骤 | 操作 | 涉及文件 |
|:---:|------|---------|
| 1 | 删除 `logFilePath` 方法及其返回的 `plugin.log` 路径常量 | LogManager.m |
| 2 | 创建 C 函数 `WPLogFilePath()`（返回 `MioPlugin.log` 路径） | LogManager.m |
| 3 | 创建 C 函数 `WPLogAppendLine(tag, content)`（统一的追加写入逻辑） | LogManager.m |
| 4 | 改造 `writeTag:content:`：调用 `WPLogAppendLine` | LogManager.m |
| 5 | 改造 `appendLineWithTag:content:`：调用 `WPLogAppendLine` | LogManager.m |
| 6 | 编译验证 | `make clean && make` |
| 7 | 功能测试 | 见下方测试方案 |

### 完整的 LogManager.m 改造后代码

```objc
//
//  LogManager.m
//  MioPlugin
//
//  统一日志管理。
//  所有日志（WPLog + appendLineWithTag）写入同一文件：
//    Documents/MioPlugin_Logs/MioPlugin.log
//

#import "LogManager.h"

/// 统一日志文件路径
static NSString *WPLogFilePath(void) {
    static NSString *_logPath = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folder = [paths.firstObject stringByAppendingPathComponent:@"MioPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folder
                                  withIntermediateDirectories:YES
                                                   attributes:nil
                                                        error:nil];
        _logPath = [folder stringByAppendingPathComponent:@"MioPlugin.log"];
    });
    return _logPath;
}

/// 向统一日志文件追加一行
/// 格式: [2026-06-10 14:30:22][Tag] 内容
static void WPLogAppendLine(NSString *tag, NSString *content) {
    @try {
        // 格式化时间戳
        NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
        formatter.dateFormat = @"yyyy-MM-dd HH:mm:ss";
        NSString *timestamp = [formatter stringFromDate:[NSDate date]];

        // 构造日志行
        NSString *line = [NSString stringWithFormat:@"[%@][%@] %@\n", timestamp, tag, content];

        // 追加写入
        NSString *filePath = WPLogFilePath();
        NSFileHandle *handle = [NSFileHandle fileHandleForWritingAtPath:filePath];
        if (handle) {
            [handle seekToEndOfFile];
            [handle writeData:[line dataUsingEncoding:NSUTF8StringEncoding]];
            [handle closeFile];
        } else {
            [line writeToFile:filePath atomically:YES encoding:NSUTF8StringEncoding error:nil];
        }
    } @catch (NSException *e) {
        // 日志写入失败不抛异常，不影响主流程
    }
}

@implementation _WPLogManager

+ (void)writeTag:(NSString *)tag content:(NSString *)content {
    WPLogAppendLine(tag, content);
}

+ (void)appendLineWithTag:(NSString *)tag content:(NSString *)line {
    WPLogAppendLine(tag, line);
}

@end
```

---

## 七、测试方案

### 第 1 层：编译验证

```bash
cd /www/wwwroot/ios/MioPlugin
make clean && make
```

无编译错误 → `WPLogFilePath()` C 函数、`WPLogAppendLine()` 语法正确。

### 第 2 层：单文件验证

安装到设备后，触发日志：

```
1. 进入微信，触发防撤回（WPLog 路径）
2. 进入有成员变化的群（GroupExit appendLineWithTag 路径）
3. 触发一次弹窗（MioAlertHelper appendLineWithTag 路径）
```

检查日志文件：

```bash
# SSH 到越狱设备
cat /var/mobile/Documents/.MioPlugin/MioPlugin_Logs/MioPlugin.log
```

**预期输出**（所有日志在同一文件）：

```
[2026-06-12 14:30:22][Revoke] 消息撤回拦截
[2026-06-12 14:30:25][GroupExit] chatroom@xxx setter called, old=120, new=118
[2026-06-12 14:30:25][GroupExit] chatroom@xxx exit detected, diff count=2
[2026-06-12 14:30:30][AutoTransfer] 检测到转账: transferID=xxx from=yyy
[2026-06-12 14:30:35][Alert] alloc+initWithTitle: Mio助手
```

**验证要点**：

| 检查项 | 方法 |
|-------|------|
| 所有 WPLog 写入此文件 | 查看 `[Revoke]`、`[AutoTransfer]` 等标签的日志是否存在 |
| 所有 appendLineWithTag 写入此文件 | 查看 `[GroupExit]` 的高频调试日志是否存在 |
| 旧 plugin.log 不再有新内容 | `cat plugin.log` 确认无最新时间戳的日志 |
| 时间戳统一为 `yyyy-MM-dd HH:mm:ss` 格式 | 查看日志行首格式 |

### 第 3 层：性能验证

在日志密集的场景（群聊成员频繁退出/加入），确保无性能退化：

```
1. 进入大群（500 人），观察群成员列表变更触发 GroupExit 日志
2. 确认微信无卡顿、无崩溃
3. 确认 MioPlugin.log 文件正常追加内容
```

### 第 4 层：异常场景

```
1. 删除 MioPlugin_Logs/ 整个目录
2. 触发任意日志（WPLog 或 appendLineWithTag）
3. 检查目录是否自动重建，MioPlugin.log 是否自动创建并写入
```

---

## 八、改造后清理

改造完成后，旧 `plugin.log` 文件可以保留（不影响），也可以手动删除：

```bash
# 设备上
rm /var/mobile/Documents/.MioPlugin/MioPlugin_Logs/plugin.log
```

**不需要**修改 32 个 WPLog 调用方、3 个 appendLineWithTag 调用方、1 个 LogManager.h 头文件。

---

## 九、后续优化方向（非本次改造范围）

| 方向 | 方案 | 价值 |
|------|------|------|
| 日志轮转 | 文件超过 5MB 自动归档为 `MioPlugin_1.log`、`MioPlugin_2.log` | 避免日志文件无限增长 |
| 频率控制 | GroupExit 高频写入时，100ms 内同 tag 去重 | 减少 I/O 压力 |
| 级别区分 | 增加 `WPLogDebug` / `WPLogError` 宏，输出不同颜色/前缀 | 更清晰的日志分级 |
| 设备端查看 | 在设置页增加"导出日志"按钮，一键分享日志文件 | 方便用户反馈问题 |

---

*文档结束*