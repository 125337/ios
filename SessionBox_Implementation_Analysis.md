# 微信会话列表左滑 — 快速置顶/备注/免打扰 实现原理深度分析

> 分析对象：`WeChatPlugin/Modules/SessionBox/WPSessionBoxHook.m` (v26)
> 交叉验证：微信助手 3.9-5(1).dylib (MG/MiYou 体系，二进制逆向)

---

## 一、功能概述

在微信会话列表页面上，从右往左（leading swipe）滑动某个会话 cell，弹出三个自定义操作按钮：

| 按钮 | 颜色 | 功能 |
|---|---|---|
| 置顶 / 取消置顶 | 蓝色 `(0.0, 0.48, 1.0)` | 切换会话置顶状态 |
| 备注 | 橙色 `(1.0, 0.58, 0.0)` | 弹出 UIAlertController 修改联系人备注 |
| 免打扰 / 取消免打扰 | 紫色 `(0.55, 0.0, 0.85)` | 切换消息免打扰状态 |

同时保留微信原生的右滑功能（"标为未读"、"删除"等）。

---

## 二、整体数据流

```
用户手指左滑会话 Cell
       │
       ▼
_UISwipeActionPanGestureRecognizer 检测手势
       │
       ▼
[Layer 1] Hook addGestureRecognizer: → 拦截手势添加
  ├── 识别 _UISwipeActionPanGestureRecognizer 类型
  ├── 4x 放大 translationInView / velocityInView / locationInView
  ├── delaysTouchesBegan = NO, cancelsTouchesInView = NO
  ├── 设置 13 个微信内部属性 (禁用各种手势冲突)
  └── 7 个 UIGestureRecognizerDelegate Hook
       │
       ▼
[Layer 2] Hook setDataSource: / setDelegate: → 注入 swipe delegate 方法
  ├── tableView:leadingSwipeActionsConfigurationForRowAtIndexPath:
  ├── tableView:trailingSwipeActionsConfigurationForRowAtIndexPath:
  ├── tableView:canEditRowAtIndexPath:
  └── tableView:editingStyleForRowAtIndexPath: (返回 None)
       │
       ▼
iOS 系统查询 leadingSwipeActionsConfigurationForRowAtIndexPath:
       │
       ▼
[Layer 3] sb_leadingSwipeActions 返回 UISwipeActionsConfiguration
       │
       ├── [置顶] → TopSessionByName: / UntopSessionByName:
       ├── [备注] → UIAlertController 弹窗 → setM_nsRemark: → modifyDataItem:notify:
       └── [免打扰] → ChangeNotifyStatus:withStatus:sync:
```

---

## 三、六层架构详解

### 第 1 层：全局安装入口 (`+install`)

Hook 5 个全局点，覆盖整个微信生命周期：

```objc
+ (void)install {
    // 1. Hook UITableView setDataSource: → 数据源设置时注入 swipe 方法
    // 2. Hook UITableView setDelegate:    → 代理设置时注入 swipe 方法
    // 3. Hook UITableView setAllowsMultipleSelection: → 强制为 NO
    // 4. Hook UITableView addGestureRecognizer: → 拦截手势添加 (核心)
    // 5. Hook NewMainFrameViewController viewWillAppear: → 页面出现保证
}
```

### 第 2 层：手势识别器拦截 — `addGestureRecognizer:` Hook

这是整个方案最关键的一步。微信使用 iOS 私有类 `_UISwipeActionPanGestureRecognizer` 来处理左滑操作，但对该手势施加了多重限制。

```objc
// 检测是否为 _UISwipeActionPanGestureRecognizer
static BOOL sb_isSwipeActionGesture(UIGestureRecognizer *g) {
    return strcmp(class_getName(object_getClass(g)), 
                  "_UISwipeActionPanGestureRecognizer") == 0;
}
```

拦截到该手势后执行：

| 操作 | 说明 |
|---|---|
| `sb_patchSwipeGestureClass(gc)` | 4x 放大 translationInView / velocityInView / locationInView |
| `g.delaysTouchesBegan = NO` | 不延迟触摸开始 |
| `g.cancelsTouchesInView = NO` | 不取消视图中的触摸 |
| `g.delegate = self` (UITableView) | 强制代理指向 TableView |
| 13 个微信内部属性设置 | 禁用各种手势冲突 |
| `sb_hookGestureDelegates(...)` | 注入 7 个手势代理 Hook |

#### 4x 放大机制 (v26: tiv+viv+liv 一致性)

针对 `_UISwipeActionPanGestureRecognizer` 类，Hook 三个方法确保坐标一致性：

```objc
static CGPoint sb_amplifiedTranslationInView(id self, SEL _cmd, UIView *view) {
    CGPoint pt = orig->translationInView(self, _cmd, view);
    pt.x *= 4.0;  // 横向滑动距离 ×4，只需原来 1/4 的距离即可触发
    return pt;
}

static CGPoint sb_amplifiedVelocityInView(id self, SEL _cmd, UIView *view) {
    CGPoint pt = orig->velocityInView(self, _cmd, view);
    pt.x *= 4.0;
    return pt;
}

static CGPoint sb_amplifiedLocationInView(id self, SEL _cmd, UIView *view) {
    CGPoint pt = orig->locationInView(self, _cmd, view);
    pt.x *= 4.0;  // 必须与 translationInView 同步放大，防止内部断言崩溃
    return pt;
}
```

> **v26 改进**：相比之前只放大 translationInView + velocityInView，v26 新增 locationInView 同步放大，三个方法保持一致，避免 `_UISwipeActionPanGestureRecognizer` 内部坐标校验断言崩溃。

#### 13 个微信内部属性设置

```objc
// 会话手势
settingSessionGesture:         → 初始化会话手势
setMIsSessionGesture:YES      → 启用会话手势

// 多路复用
settingMultiplexEnabled:NO    → 禁用手势多路复用
setMultiplexEnabled:NO        → 禁用手势多路复用

// 手势菜单
setForbidDisplayMenuWithGestures:YES → 禁止长按菜单干扰

// Pan 取消手势
setBUsePanCancelGesture:NO    → 不使用 Pan 取消手势

// 交互式 Pop 手势
setM_bInteractivePopEnabled:NO → 禁用返回手势干扰

// 边缘滑动关闭
setEnableEdgeSlideToClose:NO  → 禁用边缘滑动关闭

// 消息手势 (密友专属)
settingMsgGestureEnable:      → 初始化消息手势
setMIsMsgGestureEnbale:YES   → 启用消息手势
settingMsgGestureRightEnable: → 初始化消息右滑
setMIsMsgGestureRightEnbale:YES → 启用消息右滑

// 返回边缘手势
settingBackEdgeGesture:       → 初始化返回边缘手势
setMIsBackEdgeGesture:NO     → 禁用返回边缘手势

// 手势添加标记
setIsAddGesture:NO            → 标记非新增手势
```

### 第 3 层：7 个 UIGestureRecognizerDelegate Hook

对 `_UISwipeActionPan` 手势全部强行放行：

| 代理方法 | 策略 |
|---|---|
| `gestureRecognizerShouldBegin:` | 原始返回 NO → 强行返回 YES |
| `gestureRecognizer:shouldReceiveTouch:` | 原始返回 NO → 强行返回 YES |
| `gestureRecognizer:shouldRequireFailureOfGestureRecognizer:` | 返回 NO，不等待其他手势失败 |
| `gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:` | 透传原始逻辑 |
| `gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:` | 返回 YES，与滚动并存 |
| `gestureRecognizer:shouldReceiveEvent:` | 原始返回 NO → 强行返回 YES |
| `gestureRecognizer:shouldReceivePress:` | 原始返回 NO → 强行返回 YES |

Hook 通过 `method_setImplementation` 直接替换实现，原始 IMP 保存到 `g_origIMPs` 字典中，以 `类名_后缀` 为 key（如 `_gsb`, `_srt` 等）。

### 第 4 层：Swipe Delegate 方法注入

当 `setDataSource:` 或 `setDelegate:` 被调用时，动态向数据源/代理类注入 6 个方法：

```objc
static BOOL sb_injectSwipeMethods(Class cls, NSString *nm) {
    // 1. leadingSwipeActionsConfigurationForRowAtIndexPath:
    //    → 自定义左滑按钮 (置顶/备注/免打扰)
    
    // 2. trailingSwipeActionsConfigurationForRowAtIndexPath:
    //    → 桥接原始右滑按钮 (标为未读/删除等)
    
    // 3. canEditRowAtIndexPath:
    //    → 允许编辑
    
    // 4. editingStyleForRowAtIndexPath:
    //    → 返回 UITableViewCellEditingStyleNone
    //    → 触发 iOS 11+ 使用 UISwipeActionsConfiguration 新 API
    
    // 5. editActionsForRowAtIndexPath: (保存原始 IMP 用于桥接)
    // 6. commitEditingStyle:forRowAtIndexPath: (保存原始 IMP)
}
```

注入策略：
- 如果类**已有**该方法 → `method_setImplementation` 替换，原 IMP 存入 `g_origIMPs`
- 如果类**没有**该方法 → `class_addMethod` 新增

### 第 5 层：按钮构建与操作执行

```objc
static UISwipeActionsConfiguration *sb_leadingSwipeActions(
    id s, SEL cmd, UITableView *tv, NSIndexPath *ip) {
    
    NSMutableArray *acts = [NSMutableArray array];
    NSString *un = sb_userNameFromDataSource(s, ip);  // 获取 username
    
    if (un.length) {
        PluginConfig *cfg = [PluginConfig shared];
        
        // 置顶按钮
        if (cfg.quickPinEnabled) {
            BOOL isTop = sb_isSessionTop(un);
            UIContextualAction *a = [UIContextualAction 
                contextualActionWithStyle:UIContextualActionStyleNormal
                title: isTop ? @"取消置顶" : @"置顶"
                handler:^{ sb_togglePin(un, isTop); }];
            a.backgroundColor = [UIColor colorWithRed:0.0 green:0.48 blue:1.0 alpha:1.0];
            [acts addObject:a];
        }
        
        // 备注按钮
        if (cfg.quickRemarkEnabled) {
            UIContextualAction *a = [UIContextualAction 
                contextualActionWithStyle:UIContextualActionStyleNormal
                title:@"备注"
                handler:^{ sb_showEditRemark(un); }];
            a.backgroundColor = [UIColor colorWithRed:1.0 green:0.58 blue:0.0 alpha:1.0];
            [acts addObject:a];
        }
        
        // 免打扰按钮
        if (cfg.quickMuteEnabled) {
            BOOL muted = sb_isSessionMuted(un);
            UIContextualAction *a = [UIContextualAction 
                contextualActionWithStyle:UIContextualActionStyleNormal
                title: muted ? @"取消免打扰" : @"免打扰"
                handler:^{ sb_toggleMute(un, muted); }];
            a.backgroundColor = [UIColor colorWithRed:0.55 green:0.0 blue:0.85 alpha:1.0];
            [acts addObject:a];
        }
    }
    
    UISwipeActionsConfiguration *c = 
        [UISwipeActionsConfiguration configurationWithActions:acts];
    c.performsFirstActionWithFullSwipe = NO;  // 禁止全滑直接触发第一个操作
    return c;
}
```

### 第 6 层：右滑兼容桥接 — 保留微信原生功能

将微信旧 API (`editActionsForRowAtIndexPath:` 返回的 `UITableViewRowAction`) 转为新 API (`UISwipeActionsConfiguration` + `UIContextualAction`)：

```objc
static UISwipeActionsConfiguration *sb_trailingSwipeActions(...) {
    // 优先用原始的 trailingSwipeActionsConfiguration
    // 否则取 editActionsForRowAtIndexPath: 旧 API
    // 通过 KVC 取 title/backgroundColor/style 转换为 UIContextualAction
    // 包装成 UISwipeActionsConfiguration 返回
}
```

```objc
static UIContextualAction *sb_convertRowAction(id rowAction) {
    // KVC: title, backgroundColor, style (0=default, 1=destructive, 2=normal)
    // UIContextualActionStyle: style==1 → Destructive, 否则 → Normal
}
```

---

## 四、核心操作函数实现

### 置顶切换

```objc
static void sb_togglePin(NSString *un, BOOL top) {
    id m = sb_getSessionMgr();
    if (!top) {
        [m TopSessionByName:un];         // 置顶
    } else {
        [m UntopSessionByName:un];       // 取消置顶
    }
    [m resortSessions];                  // 重排会话列表
}
```

### 免打扰切换

```objc
static void sb_toggleMute(NSString *un, BOOL muted) {
    id m = sb_getContactMgr();
    // muted ? 恢复通知(status=1) : 开启免打扰(status=0)
    [m ChangeNotifyStatus:un withStatus:muted ? 1 : 0 sync:YES];
}
```

### 备注修改

```objc
static void sb_showEditRemark(NSString *un) {
    // 获取联系人 → 读取当前备注/昵称
    // 弹出 UIAlertController 输入框
    // 确定后: setM_nsRemark: → modifyDataItem:notify: → updateMainSessionList
}
```

### username 获取 (多层 fallback)

```objc
static NSString *sb_userNameFromDataSource(id ds, NSIndexPath *ip) {
    // 尝试 1: getSessionInfoAtIndexPath: → m_nsUserName
    // 尝试 2: getCellData: → m_sessionInfo → m_nsUserName
    // 尝试 3: getCellData: → m_cellData → m_nsUserName
    // 尝试 4: logicGetSessionAtIndexPath: → m_nsUserName
}
```

---

## 五、微信内部 API 总览

### 服务获取

```objc
MMServiceCenter.defaultCenter.getService:(Class)
→ CContactMgr       // 联系人管理
→ MMNewSessionMgr   // 会话管理 (fallback: CConversationMgr/CSessionMgr/MMSessionMgr/MainSessionMgr)
```

### 联系人/会话管理

| Selector | 用途 |
|---|---|
| `getContactByName:` / `getContactByNameFromCache:` | 获取联系人对象 |
| `isContactSessionTop` | 判断是否置顶 |
| `isChatStatusNotifyOpen` | 判断是否开启通知 (免打扰=关闭) |
| `m_nsUserName` | 联系人用户名 |
| `m_nsRemark` / `setM_nsRemark:` | 联系人备注 |
| `m_nsNickName` | 联系人昵称 |
| `TopSessionByName:` | 置顶会话 |
| `UntopSessionByName:` | 取消置顶 |
| `ChangeNotifyStatus:withStatus:sync:` | 修改通知状态 (免打扰) |
| `modifyDataItem:notify:` | 保存修改并通知 |
| `resortSessions` | 重排会话列表 |
| `updateMainSessionList` | 刷新主会话列表 |
| `rebuildMainSessions` | 重建主会话列表 |

### 会话数据获取

| Selector | 用途 |
|---|---|
| `getSessionInfoAtIndexPath:` | 获取会话信息 |
| `logicGetSessionAtIndexPath:` | 备用方式获取会话 |
| `getCellData:` | 获取 cell 数据 |
| `GetSessionInfoList` | 获取全部会话列表 |

### TableView 管理

| Selector | 用途 |
|---|---|
| `WCTableViewManager` | 微信 TableView 管理器类 |
| `MMTableView` | 微信 TableView 类 |
| `m_tableView` / `getTableView` | 获取 TableView |

### 手势相关 (微信内部)

| Selector | 设置值 | 用途 |
|---|---|---|
| `settingSessionGesture:` | 调用 | 初始化会话手势 |
| `setMIsSessionGesture:` | YES | 启用会话手势 |
| `settingMultiplexEnabled:` | NO | 禁用多路复用 |
| `setMultiplexEnabled:` | NO | 禁用多路复用 |
| `setForbidDisplayMenuWithGestures:` | YES | 禁止手势菜单 |
| `setBUsePanCancelGesture:` | NO | 禁用 Pan 取消 |
| `setM_bInteractivePopEnabled:` | NO | 禁用返回手势 |
| `setEnableEdgeSlideToClose:` | NO | 禁用边缘关闭 |
| `settingMsgGestureEnable:` | 调用 | 初始化消息手势 |
| `setMIsMsgGestureEnbale:` | YES | 启用消息手势 |
| `settingMsgGestureRightEnable:` | 调用 | 初始化消息右滑 |
| `setMIsMsgGestureRightEnbale:` | YES | 启用消息右滑 |
| `settingBackEdgeGesture:` | 调用 | 初始化返回边缘手势 |
| `setMIsBackEdgeGesture:` | NO | 禁用返回边缘手势 |
| `setIsAddGesture:` | NO | 标记非新增手势 |

### 全局 Hook 点

| Hook 目标 | Hook 方法 |
|---|---|
| `UITableView` | `setDataSource:` |
| `UITableView` | `setDelegate:` |
| `UITableView` | `setAllowsMultipleSelection:` |
| `UITableView` | `addGestureRecognizer:` |
| `NewMainFrameViewController` | `viewWillAppear:` |

### 动态注入的方法

| 注入目标类 | 注入方法 |
|---|---|
| DataSource / Delegate | `tableView:leadingSwipeActionsConfigurationForRowAtIndexPath:` |
| DataSource / Delegate | `tableView:trailingSwipeActionsConfigurationForRowAtIndexPath:` |
| DataSource / Delegate | `tableView:canEditRowAtIndexPath:` |
| DataSource / Delegate | `tableView:editingStyleForRowAtIndexPath:` |

### 手势类 Hook (_UISwipeActionPanGestureRecognizer)

| Hook 方法 | 放大倍数 |
|---|---|
| `translationInView:` | ×4.0 |
| `velocityInView:` | ×4.0 |
| `locationInView:` | ×4.0 |

### UIGestureRecognizerDelegate Hook

| Hook 的代理方法 | 空格键名 |
|---|---|
| `gestureRecognizerShouldBegin:` | `_gsb` |
| `gestureRecognizer:shouldReceiveTouch:` | `_srt` |
| `gestureRecognizer:shouldRequireFailureOfGestureRecognizer:` | `_srf` |
| `gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:` | `_sbrf` |
| `gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:` | `_srs` |
| `gestureRecognizer:shouldReceiveEvent:` | `_sre` |
| `gestureRecognizer:shouldReceivePress:` | `_srp` |

### Runtime 函数

```
class_addMethod           method_getImplementation
method_setImplementation  class_getInstanceMethod
objc_getClass             NSSelectorFromString
objc_msgSend              objc_msgSendSuper2
objc_getAssociatedObject  objc_setAssociatedObject
class_getName             object_getClass
class_getSuperclass
```

---

## 六、与微信助手 3.9-5(1).dylib 交叉验证

### 6.1 验证方法

由于 dylib 是 ARM64 Mach-O 二进制且符号完全剥离，使用 `strings` 提取 ~95,000 行字符串进行比对：

| 比对维度 | 微信助手 dylib | 开源 WPSessionBoxHook |
|---|---|---|
| 7 个 UIGestureRecognizerDelegate Hook | ✅ 7 个 selector 齐全 | ✅ 完全相同 |
| 4 个 tableView swipe delegate 注入 | ✅ leading/trailing/canEdit/editingStyle | ✅ 完全相同 |
| editActions/commitEditing 桥接 | ✅ 保存旧 API IMP | ✅ 相同 |
| 13 个微信内部属性设置 | ✅ 14 个 selector 对应 | ✅ 13 个 |
| addGestureRecognizer: Hook | ✅ | ✅ |
| setDataSource:/setDelegate: Hook | ✅ (含 setDelegateObj:/setDelegateEx:) | ✅ |
| setAllowsMultipleSelection: Hook | ✅ | ✅ |
| viewWillAppear: Hook | ✅ | ✅ |
| UISwipeActionsConfiguration + UIContextualAction | ✅ | ✅ |
| MMServiceCenter → getService: | ✅ defaultCenter + getService: | ✅ |
| TopSessionByName:/UntopSessionByName: | ✅ | ✅ |
| ChangeNotifyStatus:withStatus:sync: | ✅ | ✅ |
| m_nsRemark + modifyDataItem:notify: | ✅ | ✅ |
| Runtime Hook 函数 (9个) | ✅ 完全一致 | ✅ |
| delaysTouchesBegan / cancelsTouchesInView | ✅ setDelaysTouchesBegan: | ✅ |
| UIAlertController 备注弹窗 | ✅ | ✅ |
| performsFirstActionWithFullSwipe = NO | ✅ | ✅ |

### 6.2 关键差异

| 对比项 | 微信助手 dylib | 开源 WPSessionBoxHook |
|---|---|---|
| `_UISwipeActionPanGestureRecognizer` 字符串 | ❌ **不存在** | ✅ `class_getName` + strcmp 检测 |
| `class_getName` C 函数 | ❌ **不存在** | ✅ |
| `translationInView:` 4x Hook | ❓ 无法确认 (selector 存在但可能来自自有 pan 属性) | ✅ pt.x *= 4.0 |
| `velocityInView:` 4x Hook | ❓ 无法确认 | ✅ pt.x *= 4.0 |
| `locationInView:` 4x Hook | ❓ 无法确认 | ✅ pt.x *= 4.0 (v26 新增) |
| `"4x"` / `"amplification"` (手势语境) | ❌ 不存在 (唯一的 `amplification` 是音频编码器日志) | ✅ v26 日志 |
| `sb_patchSwipeGestureClass` 等效函数 | ❌ 不存在 | ✅ |
| `[SessionBox]` 日志前缀 | ❌ 不存在 | ✅ |
| Hook 入口 | `checkHook:` / `checkHookWithSeq:` | `+install` 全局安装 |
| 类前缀 | `MG` / `MiYou` / `MY` | `WP` |
| 日志系统 | `MGLog` | `sbLog` + 文件写入 |
| `locationInView:` selector | ✅ (标准 UIPanGestureRecognizer 方法) | ✅ (已 Hook 放大) |

### 6.3 核心结论

**微信助手 dylib 大概率未使用 4x 放大技术。**

| 证据 | 结论 |
|---|---|
| `_UISwipeActionPanGestureRecognizer` 类名字符串完全不存在 | 无法精准识别该手势类进而 Hook 其方法 |
| `class_getName` C 函数不存在 | 无法运行时判断手势类型 |
| 无 `4x` `amplification` (手势语境) 字符串 | 无放大相关代码 |
| 无 `gestureClassPatch` / `sb_patchSwipeGestureClass` 等效函数 | 无手势类补丁函数 |

**dylib 的实现策略应是"纯代理绕过"方案**，完全依赖 7 个手势代理 Hook + 13 个微信内部属性调整就足以让 iOS 默认 swipe 机制正常工作。开源的 4x 放大是在此基础上的额外"安全保险"。

---

## 七、版本演进

| 版本 | 日志标识 | 改进 |
|---|---|---|
| v25 | `4x amplification (safe) + 7 gesture delegates + WeChat props` | 初始版本，translationInView + velocityInView 2 个方法放大 |
| v26 | `4x amplification (tiv+viv+liv一致性) + 7 gesture delegates + WeChat props` | 新增 locationInView 放大，三个方法保持坐标一致性，防止 `_UISwipeActionPanGestureRecognizer` 内部断言崩溃 |

---

## 八、关键文件索引

| 文件 | 说明 |
|---|---|
| `WeChatPlugin/Modules/SessionBox/WPSessionBoxHook.m` | 核心 Hook 实现，6 层架构全部在此 |
| `WeChatPlugin/Modules/SessionBox/WPSessionBoxController.m` | 会话盒子 Controller (UICollectionView) |
| `WeChatPlugin/Config/PluginConfig.h` | 配置属性: quickPinEnabled / quickRemarkEnabled / quickMuteEnabled |
| `WeChatPlugin/Config/PluginConfig.m` | 配置读写 + muteContactList 持久化 |
| `WeChatPlugin/Settings/Controllers/SettingSessionActionController.m` | 设置界面: 置顶/备注/免打扰 开关 |