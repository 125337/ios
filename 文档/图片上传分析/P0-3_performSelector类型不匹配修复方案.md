# P0-3 修复方案：`performSelector` 参数类型不匹配

## 问题概述

### 受影响文件

| 文件 | 行号 | 代码 |
|------|------|------|
| `Modules/AutoTransfer/AutoTransferHook.m` | 第46行 | `[[msgWrapClass alloc] performSelector:@selector(initWithMsgType:) withObject:@(1)]` |
| `Modules/RedEnvelop/RedEnvelopHook.m` | 第422行 | `[[msgWrapClass alloc] performSelector:@selector(initWithMsgType:) withObject:@(1)]` |

### 问题分析

#### 微信头文件确认

`CMessageWrap.h` 第491行确认 `initWithMsgType:` 的签名：

```objc
- (id)initWithMsgType:(long long)arg1;  // 参数是 long long，不是 id
```

#### 为什么是 Bug

`performSelector:withObject:` 只能接收 `id` 类型参数（对象指针），但 `initWithMsgType:` 实际需要 `long long`（64位整数）：

```objc
// ❌ 错误：@(1) 是 NSNumber * 对象指针，不是 long long
id msg = [[msgWrapClass alloc] performSelector:@selector(initWithMsgType:) withObject:@(1)];
```

#### 为什么当前功能正常（Tagged Pointer 巧合）

在 arm64（iPhone 5s 及以上所有设备）上：

```
@(1) 的内存表示 ≈ 0x0000000000000013  （Tagged Pointer 编码）
          ↓ 被解释为 long long
initWithMsgType: 收到参数值 ≈ 19
```

`initWithMsgType:` 的实现大概率只是保存该值到 `m_uiMessageType`（`unsigned int`），然后返回 `self`。传入 19 或预期的 1 都能成功初始化，不崩溃、不报错。

### 潜在风险

| 场景 | 触发条件 | 后果 |
|------|---------|------|
| 不同 NSNumber 值 | 使用 `@(0x2710)` 等较大值 | Tagged Pointer 编码与预期完全不同 |
| Apple 修改 Tagged Pointer 编码 | 新 iOS 版本 | 传递的整数值与预期不符 |
| `initWithMsgType:` 内部校验 | 微信版本升级 | 值校验不通过，返回 nil，消息创建失败 |

---

## 修复目标

- 两处 `performSelector:withObject:@(1)` 改为正确传递 `long long` 类型的 `1LL`
- 兼容 arm64 / arm64e 所有架构
- 保持项目现有代码风格一致

---

## 详细修改步骤

### Step 1：修改 AutoTransferHook.m

**文件**: `Modules/AutoTransfer/AutoTransferHook.m` 第46行

**修改前**:

```objc
id msg = [[msgWrapClass alloc] performSelector:@selector(initWithMsgType:) withObject:@(1)];
```

**修改后**:

```objc
id msg = ((id (*)(id, SEL, long long))objc_msgSend)([msgWrapClass alloc], @selector(initWithMsgType:), 1LL);
```

#### 是否需要添加 import？

检查 AutoTransferHook.m 的文件顶部：

| 已有 import | 说明 |
|-------------|------|
| `#import <objc/message.h>` | ✅ 如果已存在，可直接使用 `objc_msgSend` |
| `#import <objc/runtime.h>` | ✅ runtime 头文件，已包含 message 相关声明 |

**实际检查结果**:

```objc
// AutoTransferHook.m 文件顶部
#import <objc/runtime.h>
#import <objc/message.h>
```

✅ **已有 `#import <objc/message.h>`，不需要额外添加 import。**

#### 与项目现有代码风格一致

`AutoTransferHook.m` 第61行已在相同函数中使用 `objc_msgSend`：

```objc
((void(*)(id, SEL, id, id))objc_msgSend)(msgMgr, addMsgSel, sessionUserName, msg);
```

因此，此修改完全符合项目现有代码风格。

---

### Step 2：修改 RedEnvelopHook.m

**文件**: `Modules/RedEnvelop/RedEnvelopHook.m` 第422行

**修改前**:

```objc
id msg = [[msgWrapClass alloc] performSelector:@selector(initWithMsgType:) withObject:@(1)];
```

**修改后**:

```objc
id msg = ((id (*)(id, SEL, long long))objc_msgSend)([msgWrapClass alloc], @selector(initWithMsgType:), 1LL);
```

#### 是否需要添加 import？

```objc
// RedEnvelopHook.m 文件顶部
// ... 已有 import ...
```

**请检查 RedEnvelopHook.m 顶部是否已有 `#import <objc/message.h>`**。如果没有，需添加：

```objc
#import <objc/message.h>
```

如果已有 `#import <objc/runtime.h>`，通常已包含 objc_msgSend 声明，可跳过。

---

## 代码量变化

| 文件 | 操作 | 行数变化 |
|------|------|---------|
| `AutoTransferHook.m:46` | 修改1行 | 0行 |
| `RedEnvelopHook.m:422` | 修改1行 | 0行 |
| 可能：添加 `#import <objc/message.h>` | 1行 | +1行（可能不需要） |
| **总计** | | **0行（或+1行）** |

---

## 测试验证

### 功能测试

| 测试用例 | 操作 | 预期结果 |
|---------|------|---------|
| 1. 自动回复发送 | 触发自动转账 → 插件自动回复一条消息 | 消息正常创建并发送，接收方收到回复消息 |
| 2. 抢红包自动回复 | 抢到红包 → 插件自动回复感谢消息 | 消息正常创建并发送，接收方收到回复消息 |
| 3. 连续多次触发 | 连续触发10次自动回复 | 全部正常创建，无崩溃、无消息丢失 |
| 4. 多线程场景 | 多个消息同时到达，触发多次自动回复 | 正常并发，无时序问题 |

### 用户操作视角测试

1. 打开插件设置，开启自动转账回复功能
2. 让朋友向自己转账
3. 观察是否自动回复消息（发送方和接收方都能看到）
4. 打开插件设置，开启抢红包自动回复功能
5. 在群聊中抢一个红包
6. 观察是否自动回复感谢消息

### 回归测试

| 场景 | 验证项 |
|------|--------|
| 自动转账 | 转账自动回复、通知、日志记录 |
| 抢红包 | 红包自动抢、自动回复、日志记录 |
| 崩溃检测 | 修改后运行30分钟，无崩溃 |

---

## 修改失败回退方案

如果修改后出现 `objc_msgSend` 相关编译错误：

1. 确认是否导入了 `<objc/message.h>`
2. 确认是否启用了 `OBJC_OLD_DISPATCH_PROTOTYPES`（Xcode 编译设置中检查）
3. 如果仍然有问题，可回退到原代码，改用 `NSInvocation` 方案：

```objc
// 备选方案：NSInvocation（更安全，但代码量大）
SEL sel = @selector(initWithMsgType:);
NSMethodSignature *sig = [msgWrapClass methodSignatureForSelector:sel];
NSInvocation *inv = [NSInvocation invocationWithMethodSignature:sig];
[inv setTarget:[msgWrapClass alloc]];
[inv setSelector:sel];
long long val = 1LL;
[inv setArgument:&val atIndex:2];
[inv invoke];
id msg = nil;
[inv getReturnValue:&msg];
```

主方案（`objc_msgSend` + 类型转换）更简洁、性能更好，推荐优先使用。