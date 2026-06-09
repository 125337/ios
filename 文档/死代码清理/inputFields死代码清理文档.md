# `inputFields` 死代码清理文档

## 一、问题概述

在 6 个 Setting 控制器中均声明了 `inputFields` 属性，并在 `buildUI` 中调用 `[self.inputFields removeAllObjects]`，但该属性**从未被初始化**，属于死代码。

## 二、涉及文件

| # | 文件 | 行号 | 声明 | 使用 |
|---|------|------|------|------|
| 1 | [SettingRevokeController.m](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingRevokeController.m) | L6, L21 | `@property NSMutableArray *inputFields` | `[self.inputFields removeAllObjects]` |
| 2 | [SettingMessageTimeController.m](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingMessageTimeController.m) | L6, L86 | 同上 | 同上 |
| 3 | [SettingRedEnvelopController.m](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingRedEnvelopController.m) | L9, L67 | 同上 | 同上 |
| 4 | [SettingChatTopBarController.m](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingChatTopBarController.m) | L11, L343 | 同上 | 同上 |
| 5 | [SettingGeneralFunctionController.m](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingGeneralFunctionController.m) | L9, L61 | 同上 | 同上 |
| 6 | [SettingAvatarHideController.m](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingAvatarHideController.m) | L6, L21 | 同上 | 同上 |

## 三、根因分析

### 3.1 代码现状

```objc
@interface SettingRevokeController ()
@property (nonatomic, strong) NSMutableArray *inputFields;  // 声明
@end

- (void)buildUI {
    [self.inputFields removeAllObjects];  // 调用（对 nil 发消息，无操作）
    // ... 后续 UI 构建 ...
}
```

`removeAllObjects` 发送给 `nil` 在 Objective-C 中是安全的（no-op），不会崩溃，但**没有任何效果**。

### 3.2 历史成因

此代码属于**重构遗留物**。早期版本中，输入框不使用 UITableView，而是直接用 `UITextField` 手工布局，需要 `inputFields` 数组来追踪所有输入框，便于键盘处理、焦点管理等。后来 UI 重构为 UITableView 之后，输入框改由 cell 管理，`inputFields` 不再需要，但声明和调用语句未被删除，被复制粘贴到了多个控制器中。

### 3.3 为什么是安全的

- 属性未初始化（始终为 `nil`）
- `[nil removeAllObjects]` 是 Objective-C 空指针调用的标准行为，不做任何事
- 不影响任何功能逻辑

### 3.4 影响范围

**零影响。** 删除后所有功能行为完全不变。

---

## 四、清理步骤

### Step ①：删除属性声明

每个文件的 `@interface` 类别中删除这一行：

```objc
@property (nonatomic, strong) NSMutableArray *inputFields;
```

### Step ②：删除调用语句

每个文件的 `buildUI` 方法中删除这一行：

```objc
[self.inputFields removeAllObjects];
```

### 4.1 具体修改清单

#### 文件 1：SettingRevokeController.m

| 操作 | 位置 | 内容 |
|------|------|------|
| 删除 | L6 | `@property (nonatomic, strong) NSMutableArray *inputFields;` |
| 删除 | L21 | `[self.inputFields removeAllObjects];` |

#### 文件 2：SettingMessageTimeController.m

| 操作 | 位置 | 内容 |
|------|------|------|
| 删除 | L6 | `@property (nonatomic, strong) NSMutableArray *inputFields;` |
| 删除 | L86 | `[self.inputFields removeAllObjects];` |

#### 文件 3：SettingRedEnvelopController.m

| 操作 | 位置 | 内容 |
|------|------|------|
| 删除 | L9 | `@property (nonatomic, strong) NSMutableArray *inputFields;` |
| 删除 | L67 | `[self.inputFields removeAllObjects];` |

#### 文件 4：SettingChatTopBarController.m

| 操作 | 位置 | 内容 |
|------|------|------|
| 删除 | L11 | `@property (nonatomic, strong) NSMutableArray *inputFields;` |
| 删除 | L343 | `[self.inputFields removeAllObjects];` |

#### 文件 5：SettingGeneralFunctionController.m

| 操作 | 位置 | 内容 |
|------|------|------|
| 删除 | L9 | `@property (nonatomic, strong) NSMutableArray *inputFields;` |
| 删除 | L61 | `[self.inputFields removeAllObjects];` |

#### 文件 6：SettingAvatarHideController.m

| 操作 | 位置 | 内容 |
|------|------|------|
| 删除 | L6 | `@property (nonatomic, strong) NSMutableArray *inputFields;` |
| 删除 | L21 | `[self.inputFields removeAllObjects];` |

---

## 五、验证步骤

1. 按上述清单删除所有 `inputFields` 相关代码。
2. 编译项目，确认**无编译错误**。
3. 逐一进入每个设置页：
   - 防撤回设置（SettingRevokeController）
   - 消息时间设置（SettingMessageTimeController）
   - 红包设置（SettingRedEnvelopController）
   - 聊天顶栏设置（SettingChatTopBarController）
   - 通用功能设置（SettingGeneralFunctionController）
   - 隐藏头像设置（SettingAvatarHideController）
4. 确认 UI 显示正常，各项功能不受影响。

---

## 六、额外信息

**防撤回的 Hook 文件：** [RevokeHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/Revoke/RevokeHook.m)

该文件 Hook 了 `CMessageMgr.onNewSyncNotAddDBMessage:` 方法，在同步通道拦截撤回消息（`revokemsg`），阻断 sysmsg 入库来实现防撤回。