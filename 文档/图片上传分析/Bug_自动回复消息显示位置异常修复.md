# Bug 修复：抢红包/转账自动回复消息显示位置异常

## 问题描述

在抢红包（或接收转账）后自动回复消息时：

| 现象 | 说明 |
|------|------|
| 发送方显示错误 | 消息显示为接收方发出的（头像也不显示），像"假消息" |
| 退出重进正常 | 退出聊天页面重新进入后，消息才正常显示为自己发出的 |
| 实际已发送 | 消息确实已发出，接收方收到了正确内容 |

---

## 根因分析

### 直接原因

Auto-reply 消息在创建时 **缺少 3 个关键属性的设置**，同时使用了 **错误的 API**。

### 问题代码

**AutoTransferHook.m 第46-61行** 和 **RedEnvelopHook.m 第422-436行** 创建自动回复消息时：

```objc
// ❌ AutoTransferHook.m 第46-61行 — 缺少从Usr/状态/时间
id msg = ((id (*)(id, SEL, long long))objc_msgSend)([msgWrapClass alloc], @selector(initWithMsgType:), 1LL);

[msg setValue:replyText forKey:@"m_nsContent"];      // ✅ 设置内容
[msg setValue:sessionUserName forKey:@"m_nsToUsr"];   // ✅ 设置接收方
// ❌ 未设置 m_nsFromUsr — 消息来源为空
// ❌ 未设置 m_uiStatus — 消息状态不确定
// ❌ 未设置 m_uiCreateTime — 时间戳缺失

// ❌ 使用简单 API，不触发 UI 刷新
((void(*)(id, SEL, id, id))objc_msgSend)(msgMgr, addMsgSel, sessionUserName, msg);
```

```objc
// ❌ RedEnvelopHook.m 第422-436行 — 同样缺少
id msg = ((id (*)(id, SEL, long long))objc_msgSend)([msgWrapClass alloc], @selector(initWithMsgType:), 1LL);

[msg setValue:config.redEnvelopAutoReplyStr forKey:@"m_nsContent"];     // ✅ 设置内容
[msg setValue:param.sessionUserName forKey:@"m_nsToUsr"];              // ✅ 设置接收方
// ❌ 未设置 m_nsFromUsr — 消息来源为空
// ❌ 未设置 m_uiStatus — 消息状态不确定
// ❌ 未设置 m_uiCreateTime — 时间戳缺失

// ❌ 使用 performSelector，不触发 UI 刷新
[msgMgr performSelector:addMsgSel withObject:param.sessionUserName withObject:msg];
```

### 缺少的属性详解

| 属性 | 作用 | 缺失后果 | 应设值 |
|------|------|---------|--------|
| `m_nsFromUsr` | 标识消息发送者 | UI 无法确定消息归属方，头像不出现 | 当前用户微信ID（`selfUserName`） |
| `m_uiStatus` | 标识消息状态（发送中/已发/接收） | UI 不知是"已发"还是"已收"，渲染异常 | `4`（已发送状态） |
| `m_uiCreateTime` | 消息时间戳 | 消息在时间线上排序不正确 | `time(nil)`，当前 Unix 时间戳 |

### 根本原因

当使用 `initWithMsgType:1` 创建消息对象时，微信的内部实现可能**不提供默认值**给 `m_nsFromUsr` 和 `m_uiStatus`。依赖微信默认值的做法不可靠——在微信内部流程中，这些属性会被框架后续填充；但在插件直接构造消息并调用 `AddMsg:MsgWrap:` 时，框架没有机会填充这些属性。

**对比**: 已修复的 P0-6 `WPUtility.insertSystemTipMessageInSession:` 正确地设置了 `m_uiStatus = 4` 和 `m_nsFromUsr`。

### 为什么退出重进就正常了？

退出聊天页面时，`CMessageMgr` 可能会从消息数据库**重新加载该会话的消息列表**，此时从数据库中读取的消息对象会被完整初始化（包括 `m_nsFromUsr`、`m_uiStatus` 等），因此重新进入时显示正常。

---

## 修复方案

### 涉及修改的文件

| 文件 | 行号 | 修改内容 |
|------|------|---------|
| `AutoTransfer/AutoTransferHook.m` | 第40-68行 | 补充 `m_nsFromUsr`、`m_uiStatus`、`m_uiCreateTime` 设置 |
| `RedEnvelop/RedEnvelopHook.m` | 第416-445行 | 补充 `m_nsFromUsr`、`m_uiStatus`、`m_uiCreateTime` 设置 |

### 修改点 1：AutoTransferHook.m

**文件**: `Modules/AutoTransfer/AutoTransferHook.m`

在 `[msg setValue:sessionUserName forKey:@"m_nsToUsr"];` 之后，添加：

```objc
// 获取当前用户信息
id contactMgr = WXGetService(objc_getClass("CContactMgr"));
id selfContact = nil;
NSString *selfUserName = nil;
if ([contactMgr respondsToSelector:NSSelectorFromString(@"getSelfContact")]) {
    selfContact = ((id (*)(id, SEL))objc_msgSend)(contactMgr, NSSelectorFromString(@"getSelfContact"));
}
if ([selfContact respondsToSelector:NSSelectorFromString(@"m_nsUsrName")]) {
    selfUserName = ((id (*)(id, SEL))objc_msgSend)(selfContact, NSSelectorFromString(@"m_nsUsrName"));
}

// 设置发送方：当前用户
if (selfUserName) {
    [msg setValue:selfUserName forKey:@"m_nsFromUsr"];
}

// 设置消息状态为"已发送"
[msg setValue:@(4) forKey:@"m_uiStatus"];

// 设置消息时间戳
[msg setValue:@((unsigned int)[[NSDate date] timeIntervalSince1970]) forKey:@"m_uiCreateTime"];
```

**完整代码**（第46-61行改造后）:

```objc
id msg = ((id (*)(id, SEL, long long))objc_msgSend)([msgWrapClass alloc], @selector(initWithMsgType:), 1LL);
if (!msg) {
    WPLog(@"AutoTransfer", @"[REPLY] 消息对象创建失败");
    return;
}

[msg setValue:replyText forKey:@"m_nsContent"];
[msg setValue:sessionUserName forKey:@"m_nsToUsr"];

// ✅ 补充：获取当前用户 ID
id contactMgr = WXGetService(objc_getClass("CContactMgr"));
id selfContact = nil;
NSString *selfUserName = nil;
if ([contactMgr respondsToSelector:NSSelectorFromString(@"getSelfContact")]) {
    selfContact = ((id (*)(id, SEL))objc_msgSend)(contactMgr, NSSelectorFromString(@"getSelfContact"));
}
if ([selfContact respondsToSelector:NSSelectorFromString(@"m_nsUsrName")]) {
    selfUserName = ((id (*)(id, SEL))objc_msgSend)(selfContact, NSSelectorFromString(@"m_nsUsrName"));
}

// ✅ 设置发送方为当前用户（解决消息显示在错误一侧的问题）
if (selfUserName) {
    [msg setValue:selfUserName forKey:@"m_nsFromUsr"];
}

// ✅ 设置消息状态为"已发送"（解决消息显示异常的问题）
[msg setValue:@(4) forKey:@"m_uiStatus"];

// ✅ 设置消息时间戳（解决消息排序问题）
[msg setValue:@((unsigned int)[[NSDate date] timeIntervalSince1970]) forKey:@"m_uiCreateTime"];

SEL addMsgSel = NSSelectorFromString(@"AddMsg:MsgWrap:");
if (![msgMgr respondsToSelector:addMsgSel]) {
    WPLog(@"AutoTransfer", @"[REPLY] AddMsg:MsgWrap:方法不可用");
    return;
}

((void(*)(id, SEL, id, id))objc_msgSend)(msgMgr, addMsgSel, sessionUserName, msg);
```

### 修改点 2：RedEnvelopHook.m

**文件**: `Modules/RedEnvelop/RedEnvelopHook.m`

在 `[msg setValue:param.sessionUserName forKey:@"m_nsToUsr"];` 之后（第426行之后），添加：

```objc
// ✅ 获取当前用户 ID（RedEnvelopHook.m 第93-109行已有模板代码）
id contactMgr = WXGetService(objc_getClass("CContactMgr"));
id selfContact = nil;
NSString *selfUserName = nil;
if ([contactMgr respondsToSelector:NSSelectorFromString(@"getSelfContact")]) {
    selfContact = ((id (*)(id, SEL))objc_msgSend)(contactMgr, NSSelectorFromString(@"getSelfContact"));
}
if ([selfContact respondsToSelector:NSSelectorFromString(@"m_nsUsrName")]) {
    selfUserName = ((id (*)(id, SEL))objc_msgSend)(selfContact, NSSelectorFromString(@"m_nsUsrName"));
}

// ✅ 设置发送方为当前用户
if (selfUserName) {
    [msg setValue:selfUserName forKey:@"m_nsFromUsr"];
}

// ✅ 设置消息状态为"已发送"
[msg setValue:@(4) forKey:@"m_uiStatus"];

// ✅ 设置消息时间戳
[msg setValue:@((unsigned int)[[NSDate date] timeIntervalSince1970]) forKey:@"m_uiCreateTime"];
```

**完整代码**（第422-441行改造后）:

```objc
id msg = ((id (*)(id, SEL, long long))objc_msgSend)([msgWrapClass alloc], @selector(initWithMsgType:), 1LL);
if (msg) {
    @try {
        [msg setValue:config.redEnvelopAutoReplyStr forKey:@"m_nsContent"];
        [msg setValue:param.sessionUserName forKey:@"m_nsToUsr"];
        
        // ✅ 补充：获取当前用户 ID
        id contactMgr = WXGetService(objc_getClass("CContactMgr"));
        id selfContact = nil;
        NSString *selfUserName = nil;
        if ([contactMgr respondsToSelector:NSSelectorFromString(@"getSelfContact")]) {
            selfContact = ((id (*)(id, SEL, ...))objc_msgSend)(contactMgr, NSSelectorFromString(@"getSelfContact"));
        }
        if ([selfContact respondsToSelector:NSSelectorFromString(@"m_nsUsrName")]) {
            selfUserName = ((id (*)(id, SEL, ...))objc_msgSend)(selfContact, NSSelectorFromString(@"m_nsUsrName"));
        }
        
        // ✅ 设置发送方为当前用户
        if (selfUserName) {
            [msg setValue:selfUserName forKey:@"m_nsFromUsr"];
        }
        
        // ✅ 设置消息状态为"已发送"
        [msg setValue:@(4) forKey:@"m_uiStatus"];
        
        // ✅ 设置消息时间戳
        [msg setValue:@((unsigned int)[[NSDate date] timeIntervalSince1970]) forKey:@"m_uiCreateTime"];
    } @catch (NSException *e) {
        WPLog(@"RedEnv", @"[REPLY] 设置属性异常: %@ - %@", e.name, e.reason);
    }

    @try {
        SEL addMsgSel = NSSelectorFromString(@"AddMsg:MsgWrap:");
        [msgMgr performSelector:addMsgSel withObject:param.sessionUserName withObject:msg];
        WPLog(@"RedEnv", @"[REPLY] 自动回复已发送: %@ -> %@", config.redEnvelopAutoReplyStr, param.sessionUserName);
    } @catch (NSException *e) {
        WPLog(@"RedEnv", @"[REPLY] AddMsg异常: %@ - %@", e.name, e.reason);
    }
}
```

### 注意点

| 注意项 | 说明 |
|--------|------|
| `WXGetService` | 在 RedEnvelopHook.m 中已有宏定义，AutoTransferHook.m 可能需要添加 |
| `setValue:forKey:` vs setter | 两处代码均使用 KVC 方式，与现有代码风格一致 |
| 获取 self 的逻辑 | 与 `RedEnvelopHook.m` 第93-109行已有代码完全一致，可直接复用 |
| `contactMgr` | 建议增加 `nil` 检查，防止 `getSelfContact` 失败 |

---

## 代码量变化

| 文件 | 操作 | 行数变化 |
|------|------|---------|
| `AutoTransferHook.m` | 插入12行 | +12行 |
| `RedEnvelopHook.m` | 插入15行 | +15行 |
| **总计** | | **+27行** |

---

## 测试验证

### 功能测试

| 测试用例 | 操作 | 预期结果 |
|---------|------|---------|
| 1. 抢红包自动回复 | 在群聊中抢红包 | 自动回复消息立即显示在自己聊天的正确一侧，头像正常显示 |
| 2. 转账自动回复 | 接收转账 | 自动回复消息立即显示在自己聊天的正确一侧 |
| 3. 退出重进对比 | 发送自动回复后 → 退出聊天 → 重新进入 | 消息显示位置与退出前一致，无变化 |
| 4. 接收方检查 | 让朋友检查聊天 | 接收方正常收到回复消息 |

### 用户操作视角测试

1. 开启抢红包自动回复功能（设置好回复内容）
2. 在群聊中抢一个红包
3. ✅ **立即观察**：自己聊天界面中，自动回复消息应该立即显示在**右侧（自己的气泡）**，头像正常显示
4. 不需要退出重进，消息就应该显示正确
5. 让朋友确认已收到回复消息

### 回归测试

| 场景 | 操作 | 预期 |
|------|------|------|
| 无回复功能 | 关闭自动回复，正常收发消息 | 无变化 |
| 系统提示消息 | 撤回消息 | P0-6 修复不受影响 |
| 自动转账回复 | 接收转账 | 回复消息显示正确 |