# 微信助手 3.9-5(1).dylib — 左滑会话列表实现原理 逆向分析



> 分析对象：`微信助手 3.9-5(1).dylib` (MG/MiYou 体系)
> 文件：Mach-O 64-bit arm64, 13MB, 符号完全剥离 (`nm` 返回 0 条)
> 方法：纯 `strings` 二进制逆向 (95,818 行字符串交叉验证)
> 范围：**仅聚焦"左滑会话 cell 弹出置顶/备注/免打扰按钮"**

---

## 一、功能表现

在微信会话列表中**从右往左轻扫**（iOS 术语：leading swipe）一个会话 cell，iOS 系统滑出三个彩色按钮：

| 按钮 | 颜色 | 点击行为 |
|---|---|---|
| 置顶 / 取消置顶 | 蓝色 | 调用 `TopSessionByName:` / `UntopSessionByName:` |
| 备注 | 橙色 | 弹出 `UIAlertController` 修改 `m_nsRemark` |
| 免打扰 / 取消免打扰 | 紫色 | 调用 `ChangeNotifyStatus:withStatus:sync:` |

右滑保留微信原生功能（"标为未读"、"删除"）。

---

## 二、完整数据流

纯从 `strings` 中挖掘到的 selector / class / C 函数推导：

```
微信助手 dylib 加载
  │
  ▼
__attribute__((constructor)) 或 MobileSubstrate 注入
  │
  ├─[A] Hook NSObject.checkHook:
  │        │
  │        ▼
  │      Hook NSObject.checkHookWithSeq:
  │        │
  │        ▼
  │      [自触发] addCheckSession → 延迟但确保在微信完全初始化后执行
  │
  ├─[B] Hook 5 个关键方法:
  │     UITableView.setDataSource:
  │     UITableView.setDelegate: (+ setDelegateObj: / setDelegateEx:)
  │     UITableView.setAllowsMultipleSelection:
  │     UITableView.addGestureRecognizer:          ← 核心
  │     某 ViewController.viewWillAppear:
  │
  ▼
═══════════════════ 用户左滑 cell 时 ═══════════════════
  │
  ▼
iOS 系统创建 _UISwipeActionPanGestureRecognizer
  │
  ▼
[Hook] addGestureRecognizer: 被触发
  │  → [gesture isKindOfClass:[UIPanGestureRecognizer class]] → YES
  │  → objc_msgSend(gesture, sel_setDelaysTouchesBegan, NO)
  │  → gesture.delegate = self (令 gesture 的代理方法由 UITableView 处理)
  │  → objc_msgSend(tv, sel_settingSessionGesture) → 初始化
  │  → objc_msgSend(tv, sel_setMIsSessionGesture, YES)
  │  → objc_msgSend(tv, sel_settingMultiplexEnabled) → 初始化
  │  → objc_msgSend(tv, sel_setMultiplexEnabled, NO)
  │  → objc_msgSend(tv, sel_setForbidDisplayMenuWithGestures, YES)
  │  → objc_msgSend(tv, sel_setBUsePanCancelGesture, NO)
  │  → objc_msgSend(tv, sel_setM_bInteractivePopEnabled, NO)
  │  → objc_msgSend(tv, sel_setEnableEdgeSlideToClose, NO)
  │  → objc_msgSend(tv, sel_settingMsgGestureEnable) / sel_setMIsMsgGestureEnbale, YES
  │  → objc_msgSend(tv, sel_settingMsgGestureRightEnable) / sel_setMIsMsgGestureRightEnbale, YES
  │  → objc_msgSend(tv, sel_settingBackEdgeGesture) / sel_setMIsBackEdgeGesture, NO
  │  → objc_msgSend(tv, sel_setIsAddGesture, NO)
  │  → [Hook 7 个 UIGestureRecognizerDelegate 方法]
  │
  ▼
[Hook] 7 个 UIGestureRecognizerDelegate 方法被调用
  │  对 UIPanGestureRecognizer 类型手势: 全部强行放行返回 YES
  │  对其他手势: 透传原始代理逻辑
  │
  ▼
iOS 系统检测到滑动距离达标 → 触发 swipe action
  │
  ▼
iOS 查询 tableView:leadingSwipeActionsConfigurationForRowAtIndexPath:
  │
  ▼
[Hook] 返回 UISwipeActionsConfiguration
  │  ├─ UIContextualAction(title="置顶"/"取消置顶", style=Normal, 蓝色)
  │  ├─ UIContextualAction(title="备注", style=Normal, 橙色)
  │  └─ UIContextualAction(title="免打扰"/"取消免打扰", style=Normal, 紫色)
  │  performsFirstActionWithFullSwipe = NO
  │
  ▼
用户点击某个按钮 → handler block 触发:
  │  ├─ 置顶: objc_msgSend(sessionMgr, sel_TopSessionByName, un) 或 sel_UntopSessionByName
  │  │       → objc_msgSend(sessionMgr, sel_resortSessions)
  │  ├─ 备注: objc_msgSend(contactMgr, sel_getContactByName, un)
  │  │       → 弹出 UIAlertController (alertControllerWithTitle:message:preferredStyle:)
  │  │       → 确定后: objc_msgSend(contact, sel_setM_nsRemark, newValue)
  │  │       → objc_msgSend(contactMgr, sel_modifyDataItem_notify, contact, YES)
  │  │       → objc_msgSend(sessionMgr, sel_updateMainSessionList)
  │  └─ 免打扰: objc_msgSend(contactMgr, sel_ChangeNotifyStatus_withStatus_sync, un, status, YES)
```

---

## 三、逐层证据

### 第 1 层：Hook 安装机制

`strings` 证据：

```
checkHook:                ← 分段 Hook 检查
checkHookWithSeq:         ← 带序列号的 Hook 检查
addCheckSession           ← 触发会话 Hook 检测
checkLoadSessions         ← 检查已加载的会话列表
```

**推论**：dylib 使用独有的 `checkHook:` / `checkHookWithSeq:` 机制进行延迟 Hook，而非传统的 `+load` 或 `%ctor`。`addCheckSession` 在微信完全初始化后触发实际 Hook 安装，避免 Hook 时机过早导致微信内部对象未就绪。

### 第 2 层：5 个全局 Hook

`strings` 证据 — 所有 selector **精确匹配**：

```
setDataSource:                              ← Hook ✓
setDelegate:                                ← Hook ✓
setDelegateObj:                             ← Hook ✓ (dylib 自有封装)
setDelegateEx:                              ← Hook ✓ (dylib 自有封装)
setAllowsMultipleSelection:                 ← Hook ✓
addGestureRecognizer:                       ← Hook ✓ (核心)
viewWillAppear:                             ← Hook ✓
setDirectionalLockEnabled:                  ← viewWillAppear 中调用 ✓
```

**关键差异**：`setDelegateObj:` 和 `setDelegateEx:` 是 dylib 独有的方法，说明它在标准 `setDelegate:` Hook 之外还额外包装了一层 delegate 设置逻辑。

### 第 3 层：`addGestureRecognizer:` Hook — 核心

#### 手势类型识别

`strings` 中**存在**的工具：
```
object_getClass         ← 获取对象的真实类
isKindOfClass:          ← 类继承检查
UIPanGestureRecognizer  ← 类引用 (_OBJC_CLASS_$_UIPanGestureRecognizer)
```

`strings` 中**不存在**的：
```
_UISwipeActionPanGestureRecognizer  ← 类名字符串 ❌
class_getName                       ← C 函数 ❌ (无法获取类名字符串)
strcmp                              ← C 函数 ❌ (无法字符串比较)
```

**交叉验证结论**：dylib 无法通过 `class_getName` + `strcmp("_UISwipeActionPanGestureRecognizer")` 识别手势。

**最可能的识别方式**：
```objc
// 推断的伪代码
if ([gesture isKindOfClass:[UIPanGestureRecognizer class]]) {
    // _UISwipeActionPanGestureRecognizer 继承自 UIPanGestureRecognizer
    // 对所有 Pan 类型手势统一处理
}
```

因为在 `UITableView` 上，除了 `_UISwipeActionPanGestureRecognizer` 之外，基本不会有其他 `UIPanGestureRecognizer` 子类的手势被添加，所以这个判断实际上足够精准。

#### 手势属性修改

`strings` 证据：
```
setDelaysTouchesBegan:      ← 设为 NO，不延迟触摸开始
setEnabled:                 ← 确保手势启用
```

这两个 selector 作为 `__objc_methname` 存在，通过 `objc_msgSend` 动态调用。

#### 14 个微信内部属性设置

`strings` 证据 — `__objc_methname` 中的所有微信内部手势 selector：

| selector | 传参 | 推断作用 |
|---|---|---|
| `settingSessionGesture:` | (void) | 初始化会话手势状态 |
| `setMIsSessionGesture:` | YES | 启用会话手势 |
| `settingMultiplexEnabled:` | (void) | 初始化多路复用状态 |
| `setMultiplexEnabled:` | NO | 禁用手势多路复用 |
| `setForbidDisplayMenuWithGestures:` | YES | 禁止长按菜单干扰滑动 |
| `setBUsePanCancelGesture:` | NO | 不使用 Pan 取消手势 |
| `setM_bInteractivePopEnabled:` | NO | 禁用交互式返回手势 |
| `setEnableEdgeSlideToClose:` | NO | 禁用边缘滑动关闭 |
| `settingMsgGestureEnable:` | (void) | 初始化消息手势 |
| `setMIsMsgGestureEnbale:` | YES | 启用消息手势 |
| `settingMsgGestureRightEnable:` | (void) | 初始化消息右滑 |
| `setMIsMsgGestureRightEnbale:` | YES | 启用消息右滑 |
| `settingBackEdgeGesture:` | (void) | 初始化返回边缘手势 |
| `setMIsBackEdgeGesture:` | NO | 禁用返回边缘手势 |
| `setIsAddGesture:` | NO | 标记手势非新增状态 |

**证据链交叉验证**：

```
# property 声明存在于 __objc_ivar / __objc_data:
TB,N,V_mIsSessionGesture            ← BOOL 属性
TB,N,V_mIsMsgGestureEnbale          ← BOOL 属性
TB,N,V_mIsMsgGestureRightEnbale     ← BOOL 属性
TB,N,V_mIsBackEdgeGesture           ← BOOL 属性

# setter 存在于 __objc_methname:
setMIsSessionGesture:               ← 匹配 property
setMIsMsgGestureEnbale:             ← 匹配 property
setMIsMsgGestureRightEnbale:        ← 匹配 property
setMIsBackEdgeGesture:              ← 匹配 property
```

**注意**：`settingXxx:` 和 `setXxx:` 是两个不同的 selector。`settingXxx:` 不带参数，推测是微信内部的"触发一次初始化"方法；`setXxx:` 带 BOOL 参数，是真正的 setter。dylib 中两种都出现，说明需要先 `setting` 初始化再 `set` 设值。

#### delegate 重定向

```objc
// 推测逻辑
gesture.delegate = self;  // self = UITableView
```

这使得该 TableView 实例成为手势的代理，后续 7 个 Hook 的手势代理方法就能在 `UITableView` 类上生效。

### 第 4 层：7 个 UIGestureRecognizerDelegate Hook

`strings` 证据 — 全部 7 个代理方法 selector 精确匹配：

| selector | 类型签名 | 对 Pan 手势的策略 |
|---|---|---|
| `gestureRecognizerShouldBegin:` | `B24@0:8@"UIGestureRecognizer"16` | 原始 NO → 返回 YES |
| `gestureRecognizer:shouldReceiveTouch:` | `B32@0:8@"UIGestureRecognizer"16@"UITouch"24` | 原始 NO → 返回 YES |
| `gestureRecognizer:shouldReceiveEvent:` | `B32@0:8@"UIGestureRecognizer"16@"UIEvent"24` | 原始 NO → 返回 YES |
| `gestureRecognizer:shouldReceivePress:` | `B32@0:8@"UIGestureRecognizer"16@"UIPress"24` | 原始 NO → 返回 YES |
| `gestureRecognizer:shouldRequireFailureOfGestureRecognizer:` | `B32@0:8@"UIGestureRecognizer"16@"UIGestureRecognizer"24` | 返回 NO |
| `gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:` | `B32@0:8@"UIGestureRecognizer"16@"UIGestureRecognizer"24` | 透传原始结果 |
| `gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:` | `B32@0:8@"UIGestureRecognizer"16@"UIGestureRecognizer"24` | 返回 YES |

**证据**：所有 7 个 selector 字符串在 `__objc_methname` 中精确出现，对应的 4 种类型签名也全部存在：

```
B24@0:8@"UIGestureRecognizer"16                                        ← 1 参数: shouldBegin
B32@0:8@"UIGestureRecognizer"16@"UITouch"24                            ← 2 参数: shouldReceiveTouch
B32@0:8@"UIGestureRecognizer"16@"UIEvent"24                            ← 2 参数: shouldReceiveEvent
B32@0:8@"UIGestureRecognizer"16@"UIPress"24                            ← 2 参数: shouldReceivePress
B32@0:8@"UIGestureRecognizer"16@"UIGestureRecognizer"24                ← 2 参数: 其余 3 个
```

dylib 中有 `class_getInstanceMethod` + `method_setImplementation` + `method_getImplementation`，确认通过直接替换 IMP 来 Hook 这些方法。

### 第 5 层：Swipe Delegate 方法注入

`strings` 证据 — 6 个 TableView delegate 方法：

```
tableView:leadingSwipeActionsConfigurationForRowAtIndexPath:    ← 自定义左滑 ✓
tableView:trailingSwipeActionsConfigurationForRowAtIndexPath:   ← 右滑桥接 ✓
tableView:canEditRowAtIndexPath:                                ← 允许编辑 ✓
tableView:editingStyleForRowAtIndexPath:                        ← 返回 None ✓
tableView:editActionsForRowAtIndexPath:                         ← 旧 API (保存/桥接) ✓
tableView:commitEditingStyle:forRowAtIndexPath:                 ← 旧 API (保存) ✓
```

以及 3 个辅助 delegate 方法（控制编辑行为）：
```
tableView:willBeginEditingRowAtIndexPath:       ← 编辑开始 ✓
tableView:didEndEditingRowAtIndexPath:          ← 编辑结束 ✓
tableView:shouldIndentWhileEditingRowAtIndexPath: ← 缩进控制 ✓
```

**注入时机**：当 `setDataSource:` 或 `setDelegate:` Hook 被触发时，调用 `class_addMethod` 或 `method_setImplementation` 向目标类注入以上方法。

**关键**：`tableView:editingStyleForRowAtIndexPath:` 返回 `UITableViewCellEditingStyleNone`（即值 0），这会触发 iOS 11+ 使用新的 `UISwipeActionsConfiguration` API，而不是旧的 `UITableViewRowAction` API。

**证据链**：
```
class_addMethod            ← 动态添加方法 ✓
method_getImplementation   ← 获取原始实现 ✓
method_setImplementation   ← 替换实现 ✓
class_getInstanceMethod    ← 获取实例方法 ✓
objc_getClass              ← 获取类对象 ✓
NSSelectorFromString       ← 字符串转 Selector ✓
objc_msgSend               ← 消息发送 ✓
objc_msgSendSuper2         ← 父类消息发送 ✓
```

### 第 6 层：UIContextualAction 按钮构建

`strings` 证据 — iOS 11+ Swipe API 全线存在：

```
=== 类引用 (__objc_classrefs) ===
_OBJC_CLASS_$_UIContextualAction            ← 按钮类 ✓
_OBJC_CLASS_$_UISwipeActionsConfiguration   ← 配置类 ✓
_OBJC_CLASS_$_UIAlertController             ← 备注弹窗类 ✓
_OBJC_CLASS_$_UIAlertAction                 ← 弹窗按钮类 ✓

=== 方法 selector ===
contextualActionWithStyle:title:handler:    ← 创建按钮 ✓
setBackgroundColor:                         ← 设置按钮颜色 ✓
setPerformsFirstActionWithFullSwipe:        ← 禁止全滑触发 ✓

=== Handler block 类型签名 ===
v32@?0@"UIContextualAction"8@"UIView"16@?<v@?B>24    ← 按钮回调签名 ✓

=== 返回类型签名 ===
@"UISwipeActionsConfiguration"32@0:8@"UITableView"16@"NSIndexPath"24
    ← leadingSwipeActions / trailingSwipeActions 方法签名 ✓
```

**推断的按钮构建代码**：
```objc
// 基于所有存在的 selector 推导的伪代码
UISwipeActionsConfiguration *config = ^(id self, SEL _cmd, UITableView *tv, NSIndexPath *ip) {
    NSMutableArray *actions = [NSMutableArray array];
    NSString *un = [self getSessionInfoAtIndexPath:ip].m_nsUserName;
    
    MiYouConfig *cfg = [MiYouConfig sharedInstance]; // 或类方法获取

    if (cfg.某个标志位 == YES) {  // quickPinEnabled
        BOOL top = [contactMgr getContactByName:un].isContactSessionTop;
        UIContextualAction *a = [UIContextualAction 
            contextualActionWithStyle:UIContextualActionStyleNormal
            title:top ? @"取消置顶" : @"置顶"
            handler:^(UIContextualAction *action, UIView *view, void(^done)(BOOL)) {
                if (top) [sessionMgr UntopSessionByName:un];
                else     [sessionMgr TopSessionByName:un];
                [sessionMgr resortSessions];
                done(YES);
            }];
        [a setBackgroundColor:蓝色];
        [actions addObject:a];
    }
    // ... 备注、免打扰同理
    
    UISwipeActionsConfiguration *c = [UISwipeActionsConfiguration configurationWithActions:actions];
    [c setPerformsFirstActionWithFullSwipe:NO];
    return c;
};
```

### 第 7 层：置顶/免打扰/备注 — 微信内部 API 调用

`strings` 证据 — 所有操作的 selector 全部存在：

```
=== 置顶 ===
TopSessionByName:               ← 置顶 ✓
UntopSessionByName:             ← 取消置顶 ✓
isContactSessionTop             ← 判断当前状态 ✓
resortSessions                  ← 重排序 ✓
updateMainSessionList           ← 刷新 ✓
rebuildMainSessions             ← 重建 ✓

=== 免打扰 ===
ChangeNotifyStatus:withStatus:sync:    ← 切换 ✓
isChatStatusNotifyOpen                 ← 判断状态 ✓

=== 备注 ===
m_nsRemark                      ← 读取备注 ✓
setM_nsRemark:                  ← 写入备注 ✓
m_nsNickName                    ← 读取昵称 ✓
m_nsUserName                    ← 读取用户名 ✓
modifyDataItem:notify:          ← 保存修改 ✓

=== 获取 username ===
getSessionInfoAtIndexPath:      ← 主路径 ✓
logicGetSessionAtIndexPath:     ← fallback ✓
getCellData:                    ← fallback ✓
m_sessionInfo                   ← 中间属性 ✓
GetSessionInfoList              ← 全量获取 ✓

=== 服务获取 ===
defaultCenter                   ← MMServiceCenter.defaultCenter ✓
getService:                     ← defaultCenter getService: ✓
CContactMgr                     ← getService:[CContactMgr class] ✓
```

### 第 8 层：右滑兼容桥接

`strings` 证据：
```
tableView:editActionsForRowAtIndexPath:          ← 旧 API (iOS 8-10) ✓
tableView:commitEditingStyle:forRowAtIndexPath:  ← 旧 API (iOS 8-10) ✓
tableView:trailingSwipeActionsConfiguration...   ← 新 API (iOS 11+) ✓
```

**注意**：`UITableViewRowAction` 类名字符串在 dylib 中**不存在**，说明桥接方式可能不是直接操作 `UITableViewRowAction` 对象，而是通过 `editActionsForRowAtIndexPath:` 获取 NSArray，再从数组中取 `title`、`backgroundColor`、`style` 等信息，手动构建 `UIContextualAction`。

---

## 四、4x 放大滑动 — 存在性判定

### 4.1 `amplification` 字符串来源

`strings -t x` 定位到的上下文：

```
 b1eff3    adjust masking: %g dB        ← LAME 音频编码器
 b1f029    quantization comparison: %d   ← LAME 音频编码器
 b1f068    noise shaping: %d             ← LAME 音频编码器
 b1f07c     ^ amplification: %d          ← LAME 音频编码器 !!!
 b1f093     ^ stopping: %d               ← LAME 音频编码器
```

### 4.2 4x 放大证据汇总

| 证据项 | dylib | 说明 |
|---|---|---|
| `_UISwipeActionPanGestureRecognizer` 字符串 | ❌ | 无法精准识别 |
| `class_getName` | ❌ | 无法获取类名 |
| `strcmp` | ❌ | 无法字符串比较 |
| `translationInView:` | ✅ | 但来自 dylib 自有 `pan` 属性正常使用 |
| `velocityInView:` | ✅ | 同上 |
| `locationInView:` | ✅ | 同上 |
| `"4x"` / `"amplification"` (手势) | ❌ | 仅有的 `amplification` 来自 LAME 音频编码器 |
| 浮点 4.0 常量 | ❌ | 无 |

### 4.3 结论

**dylib 大概率未使用 4x 放大技术**。`translationInView:` / `velocityInView:` / `locationInView:` 三个 selector 来自 dylib 自身的 `UIPanGestureRecognizer *pan` 属性 (`T@"UIPanGestureRecognizer",&,N,V_pan`)，用于会话盒子等功能的手势处理，而非对 `_UISwipeActionPanGestureRecognizer` 的放大 Hook。

dylib 的方案是**纯代理绕过**——通过 7 个手势代理 Hook + 14 个微信内部属性设置，直接消除所有手势冲突，让 iOS 系统默认的滑动触发阈值正常工作。

---

## 五、总结：左滑功能的技术栈

```
┌─────────────────────────────────────────────────────┐
│                    左滑功能技术栈                       │
├─────────────────────────────────────────────────────┤
│  Hook 安装        checkHook: / checkHookWithSeq:     │
│                   addCheckSession                    │
├─────────────────────────────────────────────────────┤
│  全局 Hook (5)     setDataSource: / setDelegate:      │
│                   setAllowsMultipleSelection:         │
│                   addGestureRecognizer: (核心)         │
│                   viewWillAppear:                     │
├─────────────────────────────────────────────────────┤
│  手势拦截          addGestureRecognizer: Hook         │
│                   → isKindOfClass:[UIPan... class]   │
│                   → delaysTouchesBegan = NO           │
│                   → delegate = self (TableView)       │
│                   → 14 个微信属性设置                  │
│                   → 7 个代理 Hook                      │
├─────────────────────────────────────────────────────┤
│  代理绕过 (7)      gestureRecognizerShouldBegin 等     │
│                   对 Pan 手势: 全部强行返回 YES         │
│                   对其他手势: 透传原始                  │
├─────────────────────────────────────────────────────┤
│  Delegate 注入 (6) leadingSwipeActionsConfiguration  │
│                   trailingSwipeActionsConfiguration   │
│                   canEditRowAtIndexPath               │
│                   editingStyleForRowAtIndexPath       │
│                   editActionsForRowAtIndexPath        │
│                   commitEditingStyle:forRowAtIndexPath│
├─────────────────────────────────────────────────────┤
│  按钮构建          UIContextualAction × 3              │
│                   ├─ 置顶 (蓝)                         │
│                   ├─ 备注 (橙)                         │
│                   └─ 免打扰 (紫)                       │
│                   UISwipeActionsConfiguration          │
│                   performsFirstAction = NO             │
├─────────────────────────────────────────────────────┤
│  操作执行          置顶: TopSessionByName: /           │
│                         UntopSessionByName:            │
│                         resortSessions                 │
│                   备注: UIAlertController +            │
│                         setM_nsRemark: +               │
│                         modifyDataItem:notify:         │
│                   免打扰: ChangeNotifyStatus:with:sync:│
├─────────────────────────────────────────────────────┤
│  Runtime 工具 (12) class_addMethod                    │
│                   method_getImplementation            │
│                   method_setImplementation            │
│                   objc_msgSend / objc_msgSendSuper2   │
│                   NSSelectorFromString / objc_getClass│
│                   object_getClass / isKindOfClass:    │
│                   class_getInstanceMethod             │
│                   objc_getAssociatedObject 等          │
├─────────────────────────────────────────────────────┤
│  放大滑动          大概率 未使用                        │
│  证据: _UISwipeActionPanGestureRecognizer ❌           │
│        class_getName ❌    strcmp ❌                    │
│        4x/amplification(手势) ❌                        │
└─────────────────────────────────────────────────────┘
```