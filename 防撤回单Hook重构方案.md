# WeChatPlugin 防撤回重构方案：单 Hook 精简架构

> 参考对象：微信优化（`123456.c`），仅用 1 个 Hook 实现完整防撤回  
> 重构目标：从当前 7 个 Hook 精简到 1~2 个，消除副作用，提升可靠性

---

## 一、问题诊断

### 1.1 当前架构（7 Hook）存在的问题

从 [revoke(13).log](file:///www/wwwroot/ios/revoke(13).log) 的实际运行日志可以看到：

```
Line 14: onNewSyncNotAddDBMessage 检测到 revokemsg → 阻断 ✅
Line 22: onRevokeMsg called (MessageRevokeMgr)        ← 独立触发！
```

**`MessageRevokeMgr.onRevokeMsg` 在 `onNewSyncNotAddDBMessage` 阻断后仍然独立触发**，而我们的 Hook 处理完后**又调用了原始方法**：

```objc
// RevokeHook.m 第 142 行 — 问题所在
if (orig_onRevokeMsg) ((void (*)(id, SEL, id))orig_onRevokeMsg)(self, _cmd, arg1);
```

这导致：
1. 原始 `onRevokeMsg` 继续执行 → 可能弹 Toast / 修改 UI 状态
2. `replaceRevokedMsg` / `deleteLocalProcessRevokeMsgWithToast` 被我们拦截
3. 但原始 `onRevokeMsg` 内部的**其他副作用**（弹窗、状态变更）我们拦不住
4. 结果：**阻止本地撤回弹窗效果不如微信优化的单 Hook 方案**

### 1.2 为什么微信优化 1 个 Hook 就够了

```
微信撤回事件链路：

  ① PostInsertParsedXmlSysMsg  解析 revokemsg XML
  ② onNewSyncNotAddDBMessage   同步通道推送 ← 微信优化在这里掐断
  ③ sysmsg 写入 DB
  ④ onRevokeMsg (MessageRevokeMgr)  撤回回调
  ④' onRevokeMsg (CMessageMgr)      撤回回调
  ⑤ replaceRevokedMsg          替换原文内容
  ⑥ deleteLocalProcessRevokeMsgWithToast  弹窗/删除

微信优化在 ② 阻断：
  → sysmsg 不入库
  → ④⑤⑥ 虽被触发，但 DB 中无 sysmsg 可操作
  → 整个链条"空转"，无事发生
```

**核心原理**：不是拦截每个环节，而是**掐断数据源**。sysmsg 不入库，下游所有环节自然失效。

---

## 二、重构方案

### 2.1 精简后的 Hook 清单

| 保留 | Hook | 保留理由 |
|:---:|------|------|
| ✅ | `CMessageMgr.onNewSyncNotAddDBMessage:` | ★ **核心**：同步通道拦截，阻断 sysmsg 入库 |
| ✅ | `CMessageMgr.PostInsertParsedXmlSysMsg:ChatName:` | 可选补充：XML 解析层拦截（比 `onNewSyncNotAddDBMessage` 更早期） |
| ❌ | `CMessageMgr.onRevokeMsg:` | **删除**：阻断后此方法不会触达 sysmsg，且调用原始有副作用 |
| ❌ | `MessageRevokeMgr.onRevokeMsg:` | **删除**：同上 |
| ❌ | `MessageRevokeMgr.replaceRevokedMsg:` | **删除**：sysmsg 不入库则不会触发 |
| ❌ | `MessageRevokeMgr.deleteLocalProcessRevokeMsgWithToast:` | **删除**：同上 |
| ❌ | `BaseMsgContentViewController.OnGetNewXmlMsg:Type:MsgWrap:` | **删除**：VC 层备份，核心路径已覆盖 |

> 激进方案：仅保留 `onNewSyncNotAddDBMessage`（与微信优化完全一致）  
> 保守方案：保留 `onNewSyncNotAddDBMessage` + `PostInsertParsedXmlSysMsg`（双保险）

### 2.2 新 Hook 流程

```
onNewSyncNotAddDBMessage 触发
  ├─ 检查 preventRecall 开关 → 未开启则调用原始、返回
  ├─ 检查 arg1 是否为 CMessageWrap
  ├─ 检查 m_nsContent 是否以 <sysmsg type="revokemsg"> 开头
  ├─ 解析 XML 提取 session / newmsgid / replacemsg
  ├─ 判断是否自己撤回 → 是则调用原始、返回
  ├─ 查找被撤回的原始消息 (GetMsg:session:n64SvrID:)
  ├─ 构建内容摘要 / 格式化提示消息
  ├─ AddLocalMsg 插入提示条
  └─ return（不调用原始方法！sysmsg 不入库！）
```

### 2.3 代码改动

#### 删除的 IMP 声明（6 个 → 1 个）

```objc
// 删除：
// static IMP orig_onRevokeMsg = NULL;
// static IMP orig_onRevokeMsg_CMessageMgr = NULL;
// static IMP orig_replaceRevokedMsg = NULL;
// static IMP orig_deleteLocalProcessRevokeMsgWithToast = NULL;
// static IMP orig_OnGetNewXmlMsg = NULL;

// 保留：
static IMP orig_onNewSyncNotAddDBMessage = NULL;

// 可选保留（双保险方案）：
static IMP orig_PostInsertParsedXmlSysMsg = NULL;
```

#### 删除的 verify 标记（6 个 → 1 个）

```objc
// 删除：
// static BOOL g_hookOnRevokeVerified = NO;
// static BOOL g_hookOnRevokeMgrVerified = NO;
// static BOOL g_hookReplaceVerified = NO;
// static BOOL g_hookDeleteVerified = NO;
// static BOOL g_hookOnGetNewXmlVerified = NO;

// 保留：
static BOOL g_hookOnNewSyncNotAddDBVerified = NO;

// 可选保留：
static BOOL g_hookPostInsertVerified = NO;
```

#### 删除的 Hook 安装（installAllHooks 函数）

```objc
// ========== 删除以下全部 ==========

// 原 CMessageMgr.onRevokeMsg Hook
// g_hookOnRevokeVerified = hook_Method(CMessageMgrClass, onRevokeMsgSel, 
//     (IMP)replaced_onRevokeMsg_CMessageMgr, (IMP *)&orig_onRevokeMsg_CMessageMgr);

// 原 MessageRevokeMgr.onRevokeMsg Hook（含整个 MessageRevokeMgr 查找逻辑）
// Class messageRevokeMgrClass = objc_getClass("MessageRevokeMgr");
// if (messageRevokeMgrClass) { ... }

// 原 replaceRevokedMsg Hook
// g_hookReplaceVerified = hook_Method(messageRevokeMgrClass, ...);

// 原 deleteLocalProcessRevokeMsgWithToast Hook
// g_hookDeleteVerified = hook_Method(messageRevokeMgrClass, ...);

// 原 OnGetNewXmlMsg Hook（含 addOrSwizzleMethod 动态挂载逻辑）
// SEL onGetNewXmlSel = NSSelectorFromString(@"OnGetNewXmlMsg:Type:MsgWrap:");
// ...

// ========== 仅保留以下 ==========

// CMessageMgr.onNewSyncNotAddDBMessage（核心）
SEL syncSel = NSSelectorFromString(@"onNewSyncNotAddDBMessage:");
if ([CMessageMgrClass instancesRespondToSelector:syncSel]) {
    g_hookOnNewSyncNotAddDBVerified = hook_Method(CMessageMgrClass, syncSel,
        (IMP)replaced_onNewSyncNotAddDBMessage, (IMP *)&orig_onNewSyncNotAddDBMessage);
}

// 可选：PostInsertParsedXmlSysMsg（双保险）
// SEL postSel = NSSelectorFromString(@"PostInsertParsedXmlSysMsg:ChatName:");
// if ([CMessageMgrClass instancesRespondToSelector:postSel]) {
//     g_hookPostInsertVerified = hook_Method(CMessageMgrClass, postSel,
//         (IMP)replaced_PostInsertParsedXmlSysMsg, (IMP *)&orig_PostInsertParsedXmlSysMsg);
// }
```

#### 简化的 checkHook 函数

```objc
static void checkHookWithSeq(NSString *seq) {
    BOOL allOK = YES;
    
    Class CMessageMgrClass = objc_getClass("CMessageMgr");
    if (!CMessageMgrClass) {
        hookLog(@"[%@] HookCheck ✗ CMessageMgr class gone", seq);
        return;
    }
    
    // 仅检查核心 Hook
    SEL syncSel = NSSelectorFromString(@"onNewSyncNotAddDBMessage:");
    if ([CMessageMgrClass instancesRespondToSelector:syncSel]) {
        IMP curIMP = method_getImplementation(class_getInstanceMethod(CMessageMgrClass, syncSel));
        IMP expectedIMP = (IMP)replaced_onNewSyncNotAddDBMessage;
        if (curIMP != expectedIMP) {
            hookLog(@"[%@] HookCheck ✗ onNewSyncNotAddDBMessage IMP changed! Re-hooking...", seq);
            g_hookOnNewSyncNotAddDBVerified = hook_Method(CMessageMgrClass, syncSel,
                (IMP)replaced_onNewSyncNotAddDBMessage, (IMP *)&orig_onNewSyncNotAddDBMessage);
            if (!g_hookOnNewSyncNotAddDBVerified) allOK = NO;
        }
    } else {
        allOK = NO;
    }
    
    hookLog(@"[%@] HookCheck %@ (1 core hook)", seq, allOK ? @"✓ all ok" : @"✗ FAILED");
}
```

#### replaced_onNewSyncNotAddDBMessage（核心，保持不变，已正确实现）

```objc
static void replaced_onNewSyncNotAddDBMessage(id self, SEL _cmd, id arg1) {
    hookLog(@"[Revoke] onNewSyncNotAddDBMessage called, arg1=%@", arg1);
    
    if (![PluginConfig shared].preventRecall) {
        if (orig_onNewSyncNotAddDBMessage)
            ((void (*)(id, SEL, id))orig_onNewSyncNotAddDBMessage)(self, _cmd, arg1);
        return;
    }
    
    @try {
        Class CMessageWrapClass = objc_getClass("CMessageWrap");
        if (arg1 && CMessageWrapClass && [arg1 isKindOfClass:CMessageWrapClass]) {
            NSString *content = nil;
            SEL contentSel = NSSelectorFromString(@"m_nsContent");
            if ([arg1 respondsToSelector:contentSel]) {
                content = ((NSString *(*)(id, SEL))objc_msgSend)(arg1, contentSel);
            }
            
            if (content && [content hasPrefix:@"<sysmsg type=\"revokemsg\">"]) {
                hookLog(@"[Revoke] detected revoke message");
                
                NSString *chatName = extractChatName(arg1);
                BOOL handled = [[RevokeHandler shared] handleRevoke:arg1 chatName:chatName];
                
                if (handled) {
                    hookLog(@"[Revoke] blocking original - message preserved!");
                    return;  // ← 关键：阻断原始方法，sysmsg 不入库
                }
            }
        }
    } @catch (NSException *e) {
        hookLog(@"[Revoke] exception: %@", e);
    }
    
    // 非撤回消息或处理失败 → 调用原始
    if (orig_onNewSyncNotAddDBMessage)
        ((void (*)(id, SEL, id))orig_onNewSyncNotAddDBMessage)(self, _cmd, arg1);
}
```

---

## 三、需要删除的文件和方法

### 3.1 RevokeHook.m 中可删除

| 删除内容 | 说明 |
|---------|------|
| `replaced_onRevokeMsg` 函数（行 122-143） | MessageRevokeMgr 层冗余，且有调用原始的副作用 |
| `replaced_onRevokeMsg_CMessageMgr` 函数（行 145-165） | CMessageMgr 层冗余，同上 |
| `replaced_replaceRevokedMsg` 函数（行 206-216） | 不需要，sysmsg 不入库则不触发 |
| `replaced_deleteLocalProcessRevokeMsgWithToast` 函数（行 218+） | 同上 |
| `replaced_OnGetNewXmlMsg` 函数 | VC 层备份，不需要 |
| `orig_onRevokeMsg` / `orig_onRevokeMsg_CMessageMgr` / `orig_replaceRevokedMsg` / `orig_deleteLocalProcessRevokeMsgWithToast` / `orig_OnGetNewXmlMsg` | 对应 IMP 变量 |
| `g_hookOnRevokeVerified` / `g_hookOnRevokeMgrVerified` / `g_hookReplaceVerified` / `g_hookDeleteVerified` / `g_hookOnGetNewXmlVerified` | 对应 verify 标记 |
| `installAllHooks` 中对应的 `hook_Method` 调用 | Hook 安装逻辑 |
| `checkHook` 中对应的 IMP 检查逻辑 | 保活检查 |
| `proactiveDeleteRevokeSysMsg` 函数（行 86-120） | 不再需要主动删除 sysmsg |

### 3.2 RevokeHandler.m 保持不变

`RevokeHandler` 是纯业务逻辑（XML 解析、消息查找、内容摘要、提示条插入），不涉及 Hook 层，无需修改。

---

## 四、可选保留：PostInsertParsedXmlSysMsg（双保险）

如果担心 `onNewSyncNotAddDBMessage` 覆盖不够（某些撤回可能不走同步通道），可以额外保留 `PostInsertParsedXmlSysMsg`：

```objc
static void replaced_PostInsertParsedXmlSysMsg(id self, SEL _cmd, id arg1, id arg2) {
    if (![PluginConfig shared].preventRecall) {
        if (orig_PostInsertParsedXmlSysMsg)
            ((void (*)(id, SEL, id, id))orig_PostInsertParsedXmlSysMsg)(self, _cmd, arg1, arg2);
        return;
    }
    
    @try {
        // arg1 是 XML 字典，检查是否包含 revokemsg
        id revokeSysmsg = [arg1 objectForKey:@"revokemsg"];
        if (revokeSysmsg) {
            hookLog(@"[Revoke] PostInsertParsedXmlSysMsg detected revokemsg");
            
            // 构造 CMessageWrap 或直接解析 XML
            // 调用 handleRevokeFromXmlSysMsg
            // return 阻断
        }
    } @catch (NSException *e) {}
    
    if (orig_PostInsertParsedXmlSysMsg)
        ((void (*)(id, SEL, id, id))orig_PostInsertParsedXmlSysMsg)(self, _cmd, arg1, arg2);
}
```

---

## 五、对比总结

| 维度 | 重构前（7 Hook） | 重构后（1 Hook） |
|------|:---:|:---:|
| Hook 数量 | 7 个 | 1 个（或 2 个双保险） |
| `onRevokeMsg` 副作用 | ❌ 调用原始，残留弹窗风险 | ✅ 不 Hook，无副作用 |
| 阻止系统撤回提示 | ✅ | ✅ |
| 阻止原文被替换 | ✅（通过 `replaceRevokedMsg`） | ✅（sysmsg 不入库，自然不替换） |
| 阻止本地撤回弹窗 | ⚠️（拦截 `deleteLocalProcessRevokeMsgWithToast`，但原始 `onRevokeMsg` 仍有副作用） | ✅（sysmsg 不入库，弹窗无数据可弹） |
| `checkHook` 复杂度 | 6 个 IMP 检查 | 1 个 IMP 检查 |
| 代码行数 | ~400 行 | ~150 行 |
| 可维护性 | ⭐⭐ | ⭐⭐⭐⭐⭐ |
| 参考实现 | — | 微信优化 `123456.c:4305` |

---

> 重构核心思想：**掐断数据源，而非拦截每个环节**。  
> 微信优化验证了这一策略在实战中的有效性。  
> 生成时间：2026-05-22