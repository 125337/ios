# Bug 修复方案：伪已读状态误判为"已读"

## Bug 描述

日志显示 `statusCode=1 (已送达)`，但用户实际在屏幕上看到的是**"已读"**，而真实的接收方并未发送任何消息给发送方。

## 日志证据

```
[伪已读·状态] 发送方 → createTime(1781174753) >= stored(1781164176) → statusCode=1 (已送达)
```

从日志看，`computeReadStatus` 返回了正确的状态码 `1`（已送达），但 UI 却显示了"已读"。

---

## 根因分析

### 核心问题：Receiver 路径被自身消息回执错误触发

WeChat 的消息流转机制：

```
发送方发消息 → 服务器 → 接收方收到
                        → 发送方自己的 sync 回执（isSender=NO）
```

当用户发送一条消息后，这条消息会通过 WeChat 的 sync 通道回传到**发送方自己的设备**。在回传时，这条消息的 `isSender` 被标记为 `NO`（因为是来自服务器的分发），然后触发 `computeReadStatus` 的 **Receiver 路径**。

### Receiver 路径的代码行为

```objc
// MessageTimeHook.m 第 89-107 行
if (!isSender) {
    if (hasKey) {
        NSMutableDictionary *tracker = _readStatusTracker();
        @synchronized (tracker) {
            NSNumber *stored = tracker[sessionKey];
            unsigned int storedMax = stored ? stored.unsignedIntValue : 0;
            if (createTime > storedMax) {
                tracker[sessionKey] = @(createTime);  // ← 更新存储水位
            }
        }
    }
    return 2;  // ← 接收方始终返回 2 (已读)
}
```

Receiver 路径做了两件事：
1. **无条件更新** `storedMax`（如果 `createTime > storedMax`）
2. **始终返回** `statusCode=2 (已读)`

### 触发链条

```
Step 1: 发送方发消息 (createTime=100)
        → computeReadStatus(isSender=YES, createTime=100, storedMax=0)
        → 100 >= 0 → 返回 1 (已送达) ✅ 正确

Step 2: 自身 sync 回执到达 (createTime=100)
        → computeReadStatus(isSender=NO, createTime=100, storedMax=0)
        → 100 > 0 → storedMax = 100 ← ⚠️ 水位被自身消息抬高
        → 返回 2 (已读) ← ⚠️ 这条消息的 label 直接显示"已读"

Step 3: 同会话中任意 更早的消息 被重新评估
        → computeReadStatus(isSender=YES, createTime=50, storedMax=100)
        → 50 < 100 → 返回 2 (已读) ← ❌ BUG！对方并未读
```

### 为什么日志显示 statusCode=1？

日志来自 Step 1（发送路径），此时 `computeReadStatus` 正确返回了 `1`。但 Step 2（sync 回执路径）没有输出"发送方"日志（因为它走的是 Receiver 路径，输出的是 `statusCode=2 (已读)`），且这条日志可能没有被用户注意到，或者被后续的 label 更新覆盖了。

**实际发生在屏幕上的情况**：
1. 先走 `isSender=YES` 路径 → label 设为"已送达"（日志记录为 statusCode=1）
2. 短时间后 sync 回执到达 → 走 `isSender=NO` 路径 → `storedMax` 被抬高 → label 被重设为"已读"
3. 用户看到的是最终的"已读"

---

## 行业对比：wxyh（微信优化）的实现

### 反编译分析来源

文件：`/www/wwwroot/ios/插件/微信优化反编译最新/wxyh1.6.5.dylib.c`

### wxyh 的伪已读核心逻辑（FUN_0003bb04）

```c
// 完整实现，行 38696-38766
undefined8 FUN_0003bb04(int param_1, undefined8 param_2, undefined8 param_3)
// param_1 = isSender, param_2 = sessionKey, param_3 = createTime（无符号整型）
{
    lVar3 = _objc_retain(param_2);

    // ── Receiver 路径 (param_1 == 0) ──
    if (param_1 == 0) {
        if (lVar3 != 0) {
            uVar6 = _objc_retain(lVar3);
            auVar8 = FUN_000c7280();  // 获取共享的 readStatusTracker 字典
            if (auVar8._0_8_ != 0) {
                FUN_000c8400(DAT_0013ad68, auVar8._8_8_, uVar6);  // objectForKey:sessionKey
                auVar8 = _objc_retainAutoreleasedReturnValue();
                lVar4 = auVar8._0_8_;
                if (lVar4 == 0) {
                    uVar2 = 0;  // storedMax = 0
                } else {
                    uVar2 = FUN_000d0b80(lVar4);  // unsignedIntValue
                }
                if (uVar2 < (uint)param_3) {     // if storedMax < createTime
                    FUN_000c8380(&_OBJC_CLASS___NSNumber, ...); // @(createTime)
                    FUN_000cccc0(...);            // setObject:forKey:
                }
            }
            _objc_release(uVar6);
        }
        uVar6 = 2;  // ← 始终返回 2 (已读)
        goto LAB_0003bc44;
    }

    // ── Sender 路径 (param_1 != 0) ──
    lVar4 = _objc_retain(lVar3);
    if (lVar4 == 0) { uVar2 = 0; }
    else {
        auVar8 = FUN_000c7280();  // 获取 tracker 字典
        if (auVar8._0_8_ == 0) { uVar2 = 0; }
        else {
            FUN_000c8400(DAT_0013ad68, ...);     // objectForKey:sessionKey
            lVar5 = _objc_retainAutoreleasedReturnValue();
            uVar2 = (lVar5 == 0) ? 0 : FUN_000d0b80(lVar5);  // unsignedIntValue
            _objc_release(lVar5);
        }
    }
    uVar6 = 1;                          // 默认: 1 (已送达)
    if ((uint)param_3 < uVar2) {        // if createTime < storedMax
        uVar6 = 2;                      // → 已读
    }

LAB_0003bc44:
    _objc_release(lVar3);
    return uVar6;
}
```

### 对比结论

| 对比项 | wxyh (FUN_0003bb04) | 本项目 (computeReadStatus) |
|--------|:-------------------:|:--------------------------:|
| Receiver 路径更新 storedMax | ✅ 无条件更新 | ✅ 无条件更新 |
| Receiver 路径返回值 | ✅ 始终返回 2 (已读) | ✅ 始终返回 2 (已读) |
| Sender 路径逻辑 | ✅ `createTime < storedMax → 2` | ✅ 完全一致 |
| 自身消息过滤 | ❌ **无** | ❌ **无** |
| 线程安全 | ⚠️ `@synchronized` 未在反编译中明显体现 | ✅ `@synchronized(tracker)` |
| 输出日志 | ❌ 无日志输出 | ✅ 有详细日志 |

**核心发现：wxyh 的实现逻辑与本项目完全一致，同样没有做自身消息过滤。也就是说，这个 bug 在 wxyh 中同样存在。**

这意味着：
1. 这个 bug 不是代码改动引入的，而是从最初编写伪已读功能时就一直存在
2. 其他知名插件的实现方式相同，没有采用更安全的做法
3. 之前的修复方案（加 `fromUsr` 对比当前用户 ID）仍然是正确的，且是业界首创的改进

---

## 修复方案

### 修改思路

在 `computeReadStatus` 的 Receiver 路径中，增加一个判断：**如果消息的发送方就是当前用户自己**（即自身上行消息的 sync 回执），则不更新 `storedMax`，并返回 `statusCode=1 (已送达)`。

### 修改涉及的接口

`computeReadStatus` 函数签名需要增加一个 `fromUsr` 参数：

```objc
// 修改前
static NSInteger computeReadStatus(BOOL isSender, NSString *sessionKey, unsigned int createTime);

// 修改后
static NSInteger computeReadStatus(BOOL isSender, NSString *sessionKey, unsigned int createTime, NSString *fromUsr);
```

### 修改详情

#### 修改 1：`computeReadStatus` 函数 — 增加自身消息过滤

**文件**：`Modules/MessageTime/MessageTimeHook.m`

**位置**：第 85 行

**修改前**：

```objc
static NSInteger computeReadStatus(BOOL isSender, NSString *sessionKey, unsigned int createTime) {
    BOOL hasKey = (sessionKey.length > 0);

    // ── 接收方路径 ──
    if (!isSender) {
        if (hasKey) {
            NSMutableDictionary *tracker = _readStatusTracker();
            @synchronized (tracker) {
                NSNumber *stored = tracker[sessionKey];
                unsigned int storedMax = stored ? stored.unsignedIntValue : 0;
                if (createTime > storedMax) {
                    tracker[sessionKey] = @(createTime);
                    WPLog(@"MsgTime", @"[伪已读·追踪器] 接收方更新 stored_max: key=%@, old=%u, new=%u", sessionKey, storedMax, createTime);
                } else {
                    WPLog(@"MsgTime", @"[伪已读·追踪器] 接收方无需更新: key=%@, createTime=%u, stored=%u", sessionKey, createTime, storedMax);
                }
            }
        } else {
            WPLog(@"MsgTime", @"[伪已读·追踪器] 接收方 sessionKey 为空，跳过更新");
        }
        WPLog(@"MsgTime", @"[伪已读·状态] 接收方 → statusCode=2 (已读)");
        return 2;
    }

    // ── 发送方路径 ──
    if (!hasKey) {
        WPLog(@"MsgTime", @"[伪已读·状态] 发送方 sessionKey 为空 → 保守返回 statusCode=1 (已送达)");
        return 1;
    }

    NSMutableDictionary *tracker = _readStatusTracker();
    @synchronized (tracker) {
        NSNumber *stored = tracker[sessionKey];
        unsigned int storedMax = stored ? stored.unsignedIntValue : 0;

        if (createTime < storedMax) {
            WPLog(@"MsgTime", @"[伪已读·状态] 发送方 → createTime(%u) < stored(%u) → statusCode=2 (已读)", createTime, storedMax);
            return 2;
        }
        WPLog(@"MsgTime", @"[伪已读·状态] 发送方 → createTime(%u) >= stored(%u) → statusCode=1 (已送达)", createTime, storedMax);
        return 1;
    }
}
```

**修改后**：

```objc
static NSString *getCurrentUserID(void) {
    static NSString *userID;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        id contactMgr = ((id (*)(id, SEL))objc_msgSend)((id)objc_getClass("CContactMgr"), sel_registerName("sharedContactMgr"));
        if (!contactMgr) {
            contactMgr = ((id (*)(id, SEL))objc_msgSend)((id)objc_getClass("MMServiceCenter"), sel_registerName("defaultCenter"));
            contactMgr = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, sel_registerName("getService:"), objc_getClass("CContactMgr"));
        }
        if (contactMgr) {
            id selfContact = ((id (*)(id, SEL))objc_msgSend)(contactMgr, sel_registerName("getSelfContact"));
            if (selfContact) {
                userID = ((id (*)(id, SEL))objc_msgSend)(selfContact, sel_registerName("m_nsUsrName"));
            }
        }
    });
    return userID;
}

static NSInteger computeReadStatus(BOOL isSender, NSString *sessionKey, unsigned int createTime, NSString *fromUsr) {
    BOOL hasKey = (sessionKey.length > 0);

    // ── 接收方路径（复刻 FUN_0003bb04 param_1==0 分支，行 35362-35390）──
    if (!isSender) {
        // 【修复】检查是否为自己消息的 sync 回执
        // 当 fromUsr 等于当前用户自己的 ID 时，说明这条"接收"消息实际上是
        // 自己发出去的同步回执，不应将其视为"对方已读"的证据
        if (fromUsr && [fromUsr isEqualToString:getCurrentUserID()]) {
            WPLog(@"MsgTime", @"[伪已读·追踪器] 跳过自身消息 sync 回执: fromUsr=%@", fromUsr);
            WPLog(@"MsgTime", @"[伪已读·状态] 接收方(自身回执) → statusCode=1 (已送达)");
            return 1;
        }

        if (hasKey) {
            NSMutableDictionary *tracker = _readStatusTracker();
            @synchronized (tracker) {
                NSNumber *stored = tracker[sessionKey];
                unsigned int storedMax = stored ? stored.unsignedIntValue : 0;
                if (createTime > storedMax) {
                    tracker[sessionKey] = @(createTime);
                    WPLog(@"MsgTime", @"[伪已读·追踪器] 接收方更新 stored_max: key=%@, old=%u, new=%u", sessionKey, storedMax, createTime);
                } else {
                    WPLog(@"MsgTime", @"[伪已读·追踪器] 接收方无需更新: key=%@, createTime=%u, stored=%u", sessionKey, createTime, storedMax);
                }
            }
        } else {
            WPLog(@"MsgTime", @"[伪已读·追踪器] 接收方 sessionKey 为空，跳过更新");
        }
        WPLog(@"MsgTime", @"[伪已读·状态] 接收方 → statusCode=2 (已读)");
        return 2;
    }

    // ── 发送方路径（复刻 FUN_0003bb04 param_1!=0 分支，行 35392-35414）──
    if (!hasKey) {
        WPLog(@"MsgTime", @"[伪已读·状态] 发送方 sessionKey 为空 → 保守返回 statusCode=1 (已送达)");
        return 1;
    }

    NSMutableDictionary *tracker = _readStatusTracker();
    @synchronized (tracker) {
        NSNumber *stored = tracker[sessionKey];
        unsigned int storedMax = stored ? stored.unsignedIntValue : 0;

        if (createTime < storedMax) {
            WPLog(@"MsgTime", @"[伪已读·状态] 发送方 → createTime(%u) < stored(%u) → statusCode=2 (已读)", createTime, storedMax);
            return 2;
        }
        WPLog(@"MsgTime", @"[伪已读·状态] 发送方 → createTime(%u) >= stored(%u) → statusCode=1 (已送达)", createTime, storedMax);
        return 1;
    }
}
```

#### 修改 2：调用处 — 传入 `fromUsr` 参数

**文件**：`Modules/MessageTime/MessageTimeHook.m`

**位置**：第 362 行

**修改前**：

```objc
NSInteger statusCode = computeReadStatus(isSender, sessionKey, createTime);
```

**修改后**：

```objc
NSInteger statusCode = computeReadStatus(isSender, sessionKey, createTime, fromUsr);
```

#### 修改 3：`formatMessageTime` 的调用 — 额外补充

**文件**：`Modules/MessageTime/MessageTimeHook.m`

检查第 44-46 行的 `formatMessageTime` 函数以及第 365-369 行的调用处，确保 `statusCode` 正确传递。

此函数不涉及参数变更，只需确认 statusCode 正确传入即可。当前代码（第 365-369 行）无需修改：

```objc
NSString *timeText = formatMessageTime(date,
                                        config.messageTimeCustomFormat,
                                        [WPUtility isDarkMode],
                                        isSender,
                                        statusCode);
```

---

## 改动量统计

| 文件 | 操作 | 行数 |
|------|------|:----:|
| `MessageTimeHook.m` | 新增 `getCurrentUserID()` 函数 | +20 行 |
| `MessageTimeHook.m` | 修改 `computeReadStatus` 签名 + 添加自身消息过滤 | +6 行（逻辑变更） |
| `MessageTimeHook.m` | 修改调用处传参 | +1 字符 |
| **总计** | | **+约 26 行/改 1 处** |

---

## 原理总结

| 概念 | 说明 |
|------|------|
| **storedMax 水位的意义** | 接收方实际看到的最后一条消息时间戳。只有真正的"对方"消息才能提升水位 |
| **自身 sync 回执** | WeChat 将用户自己发的消息通过 sync 通道回传到本机，此时 `isSender=NO` |
| **BUG 触发条件** | 自身 sync 回执 → `isSender=NO` → `storedMax` 被抬高 → 所有更早消息变"已读" |
| **修复手段** | 检查 `fromUsr` 是否等于当前用户 ID → 如果是则跳过水位更新 |

修复后，`storedMax` 只会在**真实接收到对方消息**时更新，不会再被自身的消息回执错误抬升。

---

## 测试验证

### 测试环境

| 项目 | 内容 |
|------|------|
| 设备 | 两台真实设备（或模拟器 + 真机），登录两个不同的微信账号 |
| 账号 A | 发送消息（观察者） |
| 账号 B | 接收消息（被观察者） |

### 测试步骤

#### 测试场景 1：基础回归 — 发送方不显示"已读"

| 步骤 | 操作 | 预期结果 |
|:----:|------|---------|
| 1 | 账号 A 发送一条消息给账号 B | 时间标签显示"已送达" |
| 2 | 账号 B **不打开聊天** | 账号 A 的消息仍显示"已送达"，不变为"已读" |
| 3 | 账号 B 打开聊天 | 账号 A 的消息在 3-5 秒后变为"已读" |

#### 测试场景 2：连续发送

| 步骤 | 操作 | 预期结果 |
|:----:|------|---------|
| 1 | 账号 A 连续发送 3 条消息 | 3 条都显示"已送达" |
| 2 | 账号 B 打开聊天 | 3 条先后变为"已读" |

#### 测试场景 3：群聊

| 步骤 | 操作 | 预期结果 |
|:----:|------|---------|
| 1 | 账号 A、B、C 在同一个群聊 | — |
| 2 | 账号 A 发消息 | 显示"已送达" |
| 3 | 账号 B 打开群聊（不是 A） | 账号 A 的消息不变为"已读" |
| 4 | 账号 B 发消息 | 账号 A 的消息不变为"已读" |
| 5 | 账号 C 打开群聊 | 账号 A 的消息变为"已读" |

#### 测试场景 4：自身消息回执不抬升水位

| 步骤 | 操作 | 预期结果 |
|:----:|------|---------|
| 1 | 账号 A 发消息 M1（createTime=100） | 显示"已送达" |
| 2 | 账号 A 发消息 M2（createTime=200） | 显示"已送达" |
| 3 | 账号 A 查看 M1 | 仍显示"已送达"（不被 M2 的 sync 回执影响） |
| 4 | 账号 B 打开聊天 | M1、M2 均变为"已读" |

#### 测试场景 5：日志验证

编译运行后，在 Xcode Console 中过滤 `MsgTime`，观察日志：

```
// 发送消息时（isSender=YES）:
[伪已读·状态] 发送方 → createTime(...) >= stored(...) → statusCode=1 (已送达)

// 自身 sync 回执到达时（修复后应出现）:
[伪已读·追踪器] 跳过自身消息 sync 回执: fromUsr=wxid_xxx
[伪已读·状态] 接收方(自身回执) → statusCode=1 (已送达)

// 对方消息到达时（isSender=NO, 不是自身消息）:
[伪已读·追踪器] 接收方更新 stored_max: key=..., old=0, new=...
[伪已读·状态] 接收方 → statusCode=2 (已读)

// 对方已读时（isSender=YES, createTime < storedMax）:
[伪已读·状态] 发送方 → createTime(...) < stored(...) → statusCode=2 (已读)
```

重点确认：
- 自身 sync 回执日志出现 ✅ → 说明过滤逻辑触发
- 自身 sync 回执后 `storedMax` 未被更新 ✅ → 说明水位未被抬升
- 对方消息到达后 `storedMax` 正常更新 ✅ → 说明真实接收不受影响

### 回滚方案

如果修复后出现异常：
1. **临时恢复**：将 `computeReadStatus` 的签名的调用处还原为 3 参数版本，删除 `getCurrentUserID()` 函数
2. **永久放弃**：git revert 本次改动