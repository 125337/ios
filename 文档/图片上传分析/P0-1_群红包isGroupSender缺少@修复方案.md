# P0-1 修复方案：群红包 `isGroupSender` 缺少 `@` 符号

## 问题概述

**文件**: `Modules/RedEnvelop/RedEnvelopHook.m`
**行号**: 第113行
**问题**: `@"chatroom"` 缺少 `@` 前缀，应为 `@"@chatroom"`

### 错误代码（第113行）

```objc
// RedEnvelopHook.m 第111-114行
BOOL isSender = fromUsr && selfUserName && [fromUsr isEqualToString:selfUserName];
BOOL isGroupReceiver = fromUsr && [fromUsr containsString:@"@chatroom"];   // ✅ 正确
BOOL isGroupSender = isSender && toUsr && [toUsr containsString:@"chatroom"]; // ❌ 缺少 @
BOOL isPersonalSender = isSender && !isGroupSender;
```

### 对比说明

| 行号 | 代码 | 状态 |
|------|------|------|
| 112 | `[fromUsr containsString:@"@chatroom"]` | ✅ 正确写法 |
| 113 | `[toUsr containsString:@"chatroom"]` | ❌ 缺少 `@` |
| 405 | `[param.sessionUserName containsString:@"@chatroom"]` | ✅ 正确写法 |

### 微信头文件验证

群聊会话 ID 在微信中的格式为 `xxx@chatroom`（如 `2309482034@chatroom`），因此判断是否群聊必须使用 `@"@chatroom"`。`@"chatroom"` 作为子串也会匹配 `@"@chatroom"`，但：

| 场景 | `@"@chatroom"` | `@"chatroom"` |
|------|---------------|--------------|
| `@"2309482034@chatroom"` | ✅ 匹配 | ✅ 匹配 |
| `@"wxid_xxxchatroom"` | ❌ 不匹配 | ❌ 不匹配（巧合） |
| 其他包含 `chatroom` 子串的任意字符串 | ❌ 不匹配 | ⚠️ 可能误匹配 |

**实际影响**: 除非用户ID中恰好包含 `chatroom` 子串，否则 `containsString:` 对于 `@"@chatroom"` 和 `@"chatroom"` 的行为在当前上下文中**实际相同**。这是一个"巧合正确的笔误"。

---

## 修复步骤

### 修改点

**文件**: `Modules/RedEnvelop/RedEnvelopHook.m` 第113行

**修改前**:

```objc
    BOOL isGroupSender = isSender && toUsr && [toUsr containsString:@"chatroom"];
```

**修改后**:

```objc
    BOOL isGroupSender = isSender && toUsr && [toUsr containsString:@"@chatroom"];
```

**变更**: 仅增加 1 个字符 `@`。

---

## 代码量变化

| 文件 | 操作 | 行数变化 |
|------|------|---------|
| `RedEnvelopHook.m` | 修改1个字符 | 0行 |

**总计**: 0 行增删，1 个字符变更。

---

## 测试验证

### 功能测试

| 测试用例 | 操作 | 预期结果 |
|---------|------|---------|
| 1. 群聊发送红包 | 加入一个群聊 → 在群聊中发送一个红包 | `isGroupSender` 返回 `YES`，如果 `config.redEnvelopCatchMe` 开启，应进入抢红包流程 |
| 2. 群聊接收红包 | 在群聊中接收一个红包 | `isGroupReceiver` 返回 `YES`，正常抢红包（该路径未受影响）|
| 3. 单聊发送红包 | 在单人聊天中发送红包 | `isGroupSender` 返回 `NO`，不会错误触发群发方案 |
| 4. 单聊接收红包 | 在单人聊天中接收红包 | `isGroupReceiver` 返回 `NO`，走单人红包逻辑 |

### 用户操作视角测试

1. 在微信中加入一个群聊
2. 在群聊中发送一个红包（作为发送方）
3. 观察是否触发了自动抢红包功能（根据配置，可能自动抢自己的红包）
4. 在群聊中接收别人的红包
5. 确认群聊接收红包功能不受影响（该路径一直使用 `@"@chatroom"` 是正确的）