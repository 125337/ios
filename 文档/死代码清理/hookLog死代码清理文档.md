# `hookLog` 死代码清理文档

## 一、问题概述

[RevokeHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/Revoke/RevokeHook.m) 中定义了 `hookLog` 函数（第 10-31 行），但**整个代码库中没有任何地方调用它**，属于死代码。

## 二、根因分析

### 2.1 代码现状

```objc
// 第 6 行 — 仅为 hookLog 引入
#import <stdarg.h>

// 第 10-31 行 — 从未被调用的日志函数
static void hookLog(NSString *format, ...) {
    va_list args;
    va_start(args, format);
    NSString *content = [[NSString alloc] initWithFormat:format arguments:args];
    va_end(args);
    // ... 写入文件 MioPlugin_Logs/revoke.log ...
}
```

### 2.2 实际使用的日志方式

该文件中所有 12 处日志调用均使用 `WPLog`（来自 `LogManager.h`），而非 `hookLog`：

| 行号 | 调用 |
|------|------|
| L56 | `WPLog(@"Revoke", @"[MioPlugin][Revoke] onNewSyncNotAddDBMessage called...");` |
| L74 | `WPLog(@"Revoke", @"[MioPlugin][Revoke] detected revoke message...");` |
| L80 | `WPLog(@"Revoke", @"[MioPlugin][Revoke] blocking original revoke...");` |
| L86 | `WPLog(@"Revoke", @"[MioPlugin][Revoke] exception...");` |
| L97 | `WPLog(@"Revoke", @"[RevokeHook] install start...");` |
| L101 | `WPLog(@"Revoke", @"[RevokeHook] ✗ CMessageMgr class not found!");` |
| L104 | `WPLog(@"Revoke", @"[RevokeHook] CMessageMgr found...");` |
| L108 | `WPLog(@"Revoke", @"[RevokeHook] ✓ hooked...");` |
| L110 | `WPLog(@"Revoke", @"[RevokeHook] install complete...");` |
| L115 | `WPLog(@"Revoke", @"[RevokeHook][checkHook:%d] hook was never installed");` |
| L121 | `WPLog(@"Revoke", @"[RevokeHook][checkHook:%d] ✗ CMessageMgr class gone");` |
| L127 | `WPLog(@"Revoke", @"[RevokeHook][checkHook:%d] ✗ method gone");` |
| L135 | `WPLog(@"Revoke", @"[RevokeHook][checkHook:%d] ✗ IMP changed! restoring...");` |
| L140 | `WPLog(@"Revoke", @"[RevokeHook][checkHook:%d] ✓ single hook OK");` |

### 2.3 历史成因

`hookLog` 是一个独立的文件日志写入函数，会将日志写到 `Documents/MioPlugin_Logs/revoke.log`。推测是早期调试阶段用于追踪撤回消息的详细日志。后来统一使用了 `WPLog`（通过 `LogManager` 管理），`hookLog` 被废弃但未删除。

## 三、涉及文件

仅 [RevokeHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/Revoke/RevokeHook.m) 一个文件。

| 行号 | 内容 | 说明 |
|------|------|------|
| L6 | `#import <stdarg.h>` | **仅被 hookLog 使用**，可一并移除 |
| L10-31 | `static void hookLog(NSString *format, ...) { ... }` | 定义，零调用 |

## 四、清理步骤

在 [RevokeHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/Revoke/RevokeHook.m) 中：

1. 删除第 6 行：`#import <stdarg.h>`
2. 删除第 10-31 行：`hookLog` 函数定义（整个 `static void hookLog...` 块）

## 五、影响范围

**零影响。**

- `hookLog` 是 `static` 函数，作用域仅限于本文件
- 整个代码库中零引用
- 删除后文件中的所有 `WPLog` 调用不受任何影响
- 无依赖，无级联影响

## 六、验证步骤

1. 删除 `#import <stdarg.h>` 和 `hookLog` 函数。
2. 编译项目，确认**无编译错误**。
3. 触发防撤回功能，确认日志仍能正常输出（`WPLog` 不受影响）。