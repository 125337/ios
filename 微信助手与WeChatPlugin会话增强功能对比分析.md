# 微信助手 3.9-5 vs WeChatPlugin 会话增强功能对比

> **重要修正**: 微信助手使用的是**左滑菜单**（Swipe Actions），而不是长按手势！

---

## 一、核心差异总览

| 维度 | 微信助手 3.9-5 | WeChatPlugin |
|------|---------------|--------------|
| **触发方式** | **左滑菜单** (Swipe Actions) | **长按手势** (Long Press) |
| Hook 方法 | `tableView:trailingSwipeActionsConfigurationForRowAtIndexPath:` | `viewDidAppear:` + 注入 `UILongPressGestureRecognizer` |
| 菜单类型 | iOS 原生 UISwipeActionsConfiguration | UIAlertController ActionSheet |
| 配置项总数 | **9项** | **11项** |
| 会话盒子 UI | ✅ UICollectionView 横向滚动 | ✅ UICollectionView 横向滚动 |
| 手势委托方法 | 不需要（使用原生 Swipe） | **6个实现**（长按手势需要） |
| 品牌号置顶 | ✅ 独立处理 | ✅ 独立处理 |
| 辅助号置顶 | ✅ `isHelperTop` | ❌ 没有 |
| 免打扰自动回复 | ✅ `mDonotdisturbMsg` | ✅ `muteAutoReplyMsg`（有配置无逻辑） |
| 免打扰工作时间 | ✅ `mDonotdisturbWorkingTime` | ✅ `muteWorkingTime`（有配置无逻辑） |
| 设置页构建 | WCTableViewManager（微信原生） | 自建 UIAlertController |
| 日志系统 | ❌ MGLog（基础） | ✅ 文件日志 + NSLog |
| 异常处理 | 基础 | ✅ 全面 @try/@catch |

---

## 二、触发方式对比（核心差异）

### 微信助手：左滑菜单 (Swipe Actions)

微信助手 Hook 微信会话列表的 **iOS 原生左滑菜单 API**：

```
用户左滑会话
    ↓
UITableView 调用 DataSource 方法:
    tableView:trailingSwipeActionsConfigurationForRowAtIndexPath:
    ↓
微信原实现 → 返回微信原生菜单项（删除、标记已读等）
    ↓
微信助手 Hook 后:
    ├── 调用原始实现获取原生菜单项
    ├── 在原生菜单项基础上添加自定义项:
    │   ├── 置顶/取消置顶
    │   ├── 修改备注
    │   └── 免打扰/取消免打扰
    └── 返回新的 UISwipeActionsConfiguration
```

**关键 API（从 dylib 提取）：**

| API | 用途 |
|-----|------|
| `tableView:trailingSwipeActionsConfigurationForRowAtIndexPath:` | iOS 11+ 左滑菜单配置 |
| `tableView:editActionsForRowAtIndexPath:` | iOS 10 及以下编辑操作 |
| `tableView:leadingSwipeActionsConfigurationForRowAtIndexPath:` | 右滑菜单配置 |
| `filteredMenuItems:` | 过滤/修改菜单项 |
| `arrMenuItems` | 菜单项数组 |
| `UISwipeActionsConfiguration` | iOS 原生滑动操作配置类 |
| `UIContextualAction` | iOS 原生上下文操作类 |
| `contextualActionWithStyle:title:handler:` | 创建上下文操作 |
| `forceHideMenuOptionsAnimated:` | 强制隐藏菜单选项 |
| `hideMenuOptionsAnimated:` | 隐藏菜单选项 |
| `customizeActionsForActionSheet:` | 自定义 ActionSheet 操作 |
| `ReportLeftSlideSessionDelete:isConfirmed:` | 左滑删除上报 |
| `ReportLeftSlideSessionHide:isConfirmed:hasGuideView:` | 左滑隐藏上报 |

### WeChatPlugin：长按手势 (Long Press)

WeChatPlugin 向微信会话列表的 TableView **注入自定义长按手势**：

```
Hook NewMainFrameViewController.viewDidAppear:
    ↓
找到 MainFrameTableView
    ↓
注入 UILongPressGestureRecognizer (0.5s)
    ↓
用户长按会话
    ↓
手势触发 → 获取 indexPath → 获取 sessionInfo → 获取 userName
    ↓
弹出 UIAlertController ActionSheet:
    ├── 置顶会话 / 取消置顶
    ├── 修改备注
    └── 消息免打扰 / 取消免打扰
```

### 触发方式对比表

| 对比项 | 微信助手（左滑） | WeChatPlugin（长按） |
|--------|-----------------|---------------------|
| 触发方式 | 左滑会话 | 长按会话 |
| iOS 版本要求 | iOS 11+ | iOS 任意版本 |
| 菜单样式 | iOS 原生滑动按钮 | UIAlertController |
| 与原生菜单共存 | ✅ 在原生菜单基础上添加 | ❌ 完全替换原生长按菜单 |
| 用户习惯 | 符合 iOS 原生操作习惯 | 需要额外学习 |
| 实现复杂度 | 中等（Hook DataSource 方法） | 高（注入手势 + 冲突处理） |
| 手势冲突 | 无（使用原生 API） | 需要处理与微信原生手势冲突 |

---

## 三、功能对照

| 功能 | 微信助手 | WeChatPlugin | 谁强 |
|------|---------|-------------|------|
| 快速置顶开关 | ✅ 左滑菜单项 | ✅ 长按菜单项 | 相当 |
| 取消置顶 | ✅ 左滑菜单项 | ✅ 长按菜单项 | 相当 |
| 品牌号置顶 | ✅ `isBrandSessionHolderTop` 独立属性 | ✅ `brandTopEnabled` 过滤逻辑 | 相当 |
| 辅助号置顶 | ✅ `isHelperTop` | ❌ | **微信助手** |
| 置顶会话折叠 | ✅ `canFoldTopSession` | ✅ `foldTopSessionEnabled`（有配置无逻辑） | 微信助手 |
| 会话盒子 UI | ✅ UICollectionView | ✅ UICollectionView | 相当 |
| 快速备注 | ✅ 左滑菜单项 | ✅ 长按菜单项 | 相当 |
| 备注修改 fallback | ❌ 仅 `modifyDataItem:notify:` | ✅ `modifyDataItem:` → `updateContact:` fallback | **WeChatPlugin** |
| 免打扰开关 | ✅ 左滑菜单项 | ✅ 长按菜单项 | 相当 |
| 免打扰自动回复 | ✅ 有实现 | ⚠️ 有配置项无业务逻辑 | **微信助手** |
| 免打扰工作时间 | ✅ 有实现 | ⚠️ 有配置项无业务逻辑 | **微信助手** |
| 免打扰列表 UI | ✅ `showDonotdisturbList` | ⚠️ `muteContactList` 本地记录 | **微信助手** |
| 会话手势操作 | ✅ `mIsSessionGesture` | ✅ `sessionGestureEnabled`（有配置无逻辑） | 微信助手 |
| 检查会话 | ✅ `addCheckSession` | ❌ | 微信助手 |
| 清除会话 | ✅ `addClearSession` | ❌ | 微信助手 |
| 日志系统 | ❌ 基础 | ✅ 文件日志 | **WeChatPlugin** |
| 异常处理 | 基础 | ✅ 全面 @try/@catch | **WeChatPlugin** |
| Hook 类兼容 | 单一类 | ✅ 5个候选类 | **WeChatPlugin** |
| 与原生菜单共存 | ✅ 在原生基础上添加 | ❌ 替换原生长按菜单 | **微信助手** |

---

## 四、Hook 方法对比

### 微信助手

| Hook 目标 | Hook 方法 | 用途 |
|----------|----------|------|
| MainFrameTableView DataSource | `tableView:trailingSwipeActionsConfigurationForRowAtIndexPath:` | 注入左滑菜单项 |
| MainFrameTableView DataSource | `tableView:editActionsForRowAtIndexPath:` | iOS 10 兼容 |
| MainFrameTableView DataSource | `filteredMenuItems:` | 过滤/修改菜单项 |

### WeChatPlugin

| Hook 目标 | Hook 方法 | 用途 |
|----------|----------|------|
| NewMainFrameViewController | `viewDidAppear:` | 注入长按手势 |
| MainFrameTableView | 注入 `UILongPressGestureRecognizer` | 处理长按事件 |

**关键差异：**

- 微信助手 Hook **UITableViewDataSource 方法**，在微信原生左滑菜单基础上添加自定义项
- WeChatPlugin Hook **UIViewController 生命周期方法**，注入自定义手势

---

## 五、左滑菜单实现详解（微信助手）

### 5.1 iOS 原生 Swipe Actions API

```objc
// iOS 11+ 左滑菜单
- (UISwipeActionsConfiguration *)tableView:(UITableView *)tableView
        trailingSwipeActionsConfigurationForRowAtIndexPath:(NSIndexPath *)indexPath {
    // 微信原生实现返回微信菜单项
    UISwipeActionsConfiguration *originalConfig = [self original_implementation];
    NSMutableArray<UIContextualAction *> *actions = [originalConfig.actions mutableCopy];
    
    // 添加自定义菜单项
    PluginConfig *config = [PluginConfig shared];
    
    // 置顶/取消置顶
    if (config.quickPinEnabled) {
        UIContextualAction *pinAction = [UIContextualAction
            contextualActionWithStyle:UIContextualActionStyleNormal
                               title:@"置顶"
                             handler:^(UIContextualAction *action, UIView *sourceView, void (^completion)(BOOL)) {
            [self togglePinForIndexPath:indexPath];
            completion(YES);
        }];
        pinAction.backgroundColor = [UIColor systemBlueColor];
        [actions addObject:pinAction];
    }
    
    // 修改备注
    if (config.quickRemarkEnabled) {
        UIContextualAction *remarkAction = [UIContextualAction
            contextualActionWithStyle:UIContextualActionStyleNormal
                               title:@"备注"
                             handler:^(UIContextualAction *action, UIView *sourceView, void (^completion)(BOOL)) {
            [self showEditRemarkForIndexPath:indexPath];
            completion(YES);
        }];
        remarkAction.backgroundColor = [UIColor systemOrangeColor];
        [actions addObject:remarkAction];
    }
    
    // 免打扰
    if (config.quickMuteEnabled) {
        UIContextualAction *muteAction = [UIContextualAction
            contextualActionWithStyle:UIContextualActionStyleNormal
                               title:@"免打扰"
                             handler:^(UIContextualAction *action, UIView *sourceView, void (^completion)(BOOL)) {
            [self toggleMuteForIndexPath:indexPath];
            completion(YES);
        }];
        muteAction.backgroundColor = [UIColor systemPurpleColor];
        [actions addObject:muteAction];
    }
    
    return [UISwipeActionsConfiguration configurationWithActions:actions];
}
```

### 5.2 从 dylib 提取的关键方法

| 方法 | 说明 |
|------|------|
| `filteredMenuItems:` | 过滤/修改菜单项，可能用于隐藏某些原生菜单项 |
| `arrMenuItems` | 菜单项数组，用于获取/修改菜单项列表 |
| `forceHideMenuOptionsAnimated:` | 强制隐藏菜单选项（可能用于隐藏微信原生菜单项） |
| `hideMenuOptionsAnimated:` | 隐藏菜单选项 |
| `customizeActionsForActionSheet:` | 自定义 ActionSheet 操作（可能用于某些场景弹出 ActionSheet） |
| `ReportLeftSlideSessionDelete:isConfirmed:` | 左滑删除上报（调用微信原生上报逻辑） |
| `ReportLeftSlideSessionHide:isConfirmed:hasGuideView:` | 左滑隐藏上报 |

---

## 六、长按手势实现详解（WeChatPlugin）

### 6.1 手势注入

```objc
- (void)injectLongPressGestureToViewController:(UIViewController *)vc {
    UITableView *tableView = [self findTableViewInVC:vc];
    if (!tableView) return;
    if (objc_getAssociatedObject(tableView, kLongPressKey)) return;
    
    UILongPressGestureRecognizer *lp = [[UILongPressGestureRecognizer alloc]
        initWithTarget:self action:@selector(handleSessionLongPress:)];
    lp.minimumPressDuration = 0.5;
    lp.delegate = self;
    [tableView addGestureRecognizer:lp];
    objc_setAssociatedObject(tableView, kLongPressKey, lp, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
```

### 6.2 手势冲突处理

WeChatPlugin 需要实现 6 个 `UIGestureRecognizerDelegate` 方法来处理与微信原生手势的冲突：

| 方法 | 返回值 | 说明 |
|------|--------|------|
| `gestureRecognizerShouldBegin:` | YES | 允许手势开始 |
| `shouldRecognizeSimultaneouslyWithGestureRecognizer:` | **NO** | 不与微信原生手势同时识别 |
| `shouldRequireFailureOfGestureRecognizer:` | NO | 不依赖其他手势失败 |
| `shouldBeRequiredToFailByGestureRecognizer:` | NO | 其他手势不依赖此手势失败 |
| `shouldReceiveTouch:` | YES | 接收触摸事件 |
| `shouldReceivePress:` | YES | 接收按压事件 |

> **缺失**: `gestureRecognizer:shouldReceiveEvent:` (iOS 13+)

---

## 七、架构对比

### 微信助手

```
MGSessionBoxViewController (NSObject)
    <UICollectionViewDelegate, UICollectionViewDataSource>
    （不需要 UIGestureRecognizerDelegate，使用原生 Swipe Actions）
    ├── 属性: 7个
    ├── 方法: 20+
    └── 配置: WeChatMiYouSeting 单例

Hook 点:
    ├── tableView:trailingSwipeActionsConfigurationForRowAtIndexPath:
    ├── tableView:editActionsForRowAtIndexPath:
    └── filteredMenuItems:
```

### WeChatPlugin

```
WPSessionBoxController (NSObject)
    <UIGestureRecognizerDelegate,
     UICollectionViewDelegate,
     UICollectionViewDataSource>
    ├── 属性: 8个
    ├── 方法: 20+
    └── 配置: PluginConfig 单例

WPSessionBoxHook (NSObject)
    ├── Hook: NewMainFrameViewController.viewDidAppear:
    ├── 防护: Associated Object kAttachedKey
    └── 延迟: 0.5s dispatch_after
```

---

## 八、配置键完整对照

| 功能 | 微信助手 | WeChatPlugin | WeChatPlugin 实现状态 |
|------|---------|-------------|---------------------|
| 快速置顶开关 | `mIsMessageTime`(共用?) | `quickPinEnabled` | ✅ |
| 折叠置顶 | `canFoldTopSession` | `foldTopSessionEnabled` | ⚠️ 有配置无逻辑 |
| 品牌号置顶 | `isBrandTop` + `isBrandSessionHolderTop` | `brandTopEnabled` | ✅ 过滤逻辑 |
| 会话盒子置顶 | `isChatBoxTop` | `chatBoxTopEnabled` | ⚠️ 有配置无逻辑 |
| 添加会话盒子 | `isAddChatBox` | `addChatBoxEnabled` | ✅ |
| 管理会话盒子 | `isManagerChatBox` | `managerChatBoxEnabled` | ⚠️ 有配置无逻辑 |
| 会话手势 | `mIsSessionGesture` | `sessionGestureEnabled` | ⚠️ 有配置无逻辑 |
| 快速备注 | (在左滑菜单中) | `quickRemarkEnabled` | ✅ |
| 免打扰开关 | `mIsDonotdisturbState` | `quickMuteEnabled` | ✅ |
| 免打扰菜单注入 | `mIsAddDonotdisturbMenu` | `addMuteMenuItemEnabled` | ⚠️ 有配置无逻辑 |
| 免打扰自动回复 | `mDonotdisturbMsg` | `muteAutoReplyMsg` | ⚠️ 有配置无逻辑 |
| 免打扰工作时间 | `mDonotdisturbWorkingTime` | `muteWorkingTime` | ⚠️ 有配置无逻辑 |
| 免打扰列表 | `mDonotdisturbList` | `muteContactList` | ✅ 本地记录 |
| 辅助号置顶 | `isHelperTop` | ❌ | ❌ |
| 检查会话 | `addCheckSession` | ❌ | ❌ |
| 清除会话 | `addClearSession` | ❌ | ❌ |

---

## 九、设置页面对比

### 微信助手

使用微信原生 `WCTableViewManager`，与微信设置页风格完全一致：

```
┌─────────────────────────────────────────┐
│ 会话盒子                                 │
├─────────────────────────────────────────┤
│ [开关] 添加会话盒子                       │
│ [开关] 管理会话盒子                       │
│ [开关] 会话盒子置顶                       │
│ [开关] 品牌号置顶                         │
│ [开关] 辅助号置顶                         │
│ [开关] 会话手势操作                       │
└─────────────────────────────────────────┘
```

### WeChatPlugin

使用自建 UIAlertController ActionSheet，在**长按会话**时弹出：

```
┌─────────────────────────────────────────┐
│ 会话操作                                 │
├─────────────────────────────────────────┤
│ 置顶会话 / 取消置顶                       │
│ 修改备注                                 │
│ 消息免打扰 / 取消免打扰                   │
│ 取消                                     │
└─────────────────────────────────────────┘
```

---

## 十、技术实现对比

| 对比项 | 微信助手 | WeChatPlugin |
|--------|---------|-------------|
| 触发方式 | **左滑菜单** | **长按手势** |
| Hook 方式 | UITableViewDataSource 方法 | UIViewController 生命周期 |
| 菜单类型 | UISwipeActionsConfiguration（原生） | UIAlertController（自建） |
| 与原生共存 | ✅ 在原生基础上添加 | ❌ 替换原生长按菜单 |
| 手势冲突处理 | 不需要 | ✅ 6个委托方法 |
| 异常处理 | 基础 | ✅ 全面 @try/@catch |
| 日志 | MGLog（基础） | ✅ 文件日志 + NSLog |
| 服务获取 | MMServiceCenter | MMServiceCenter + respondsToSelector |
| SessionMgr 兼容 | 单一类名 | ✅ 5个候选类名 |
| DataSource 兼容 | 单一方法 | ✅ 3个候选方法 fallback |

---

## 十一、微信助手独有功能

| 功能 | 属性 | 说明 |
|------|------|------|
| 辅助号置顶 | `isHelperTop` | 微信辅助号独立置顶 |
| 品牌号红点 | `isBrandShowRedDot` | 控制品牌号红点显示 |
| 会话盒子管理模式 | `isManagerChatBox` | 可增删会话盒子成员 |
| 免打扰自动回复 | `mDonotdisturbMsg` | 免打扰时自动回复消息 |
| 免打扰工作时间 | `mDonotdisturbWorkingTime` | 定时免打扰 |
| 免打扰列表 UI | `showDonotdisturbList` | 查看免打扰联系人列表 |
| 检查会话 | `addCheckSession` | 检查会话状态 |
| 清除会话 | `addClearSession` | 清除会话 |
| 设置页 | WCTableViewManager | 微信原生风格设置页 |

---

## 十二、WeChatPlugin 独有功能

| 功能 | 属性/实现 | 说明 |
|------|----------|------|
| 5候选类 Hook | WPSessionBoxHook | 兼容不同微信版本 |
| VC 重复附加防护 | kAttachedKey | 防止 viewDidAppear 多次触发 |
| 延迟附加 | 0.5s dispatch_after | 等待 VC 的 view 完全加载 |
| detach 清理 | detachFromViewController | 完整清理手势、CollectionView、delegate |
| 备注修改 fallback | modifyDataItem → updateContact | 双路径保证备注修改成功 |
| 全面异常处理 | @try/@catch | 每个关键方法都有异常保护 |
| 文件日志 | sbLog | 写入 sessionbox.log |

---

## 十三、结论

**微信助手胜出维度：** 
- 触发方式更符合 iOS 原生习惯（左滑菜单）
- 与微信原生菜单共存，不破坏原有功能
- 功能完整度更高
- 设置页 UI 更专业

**WeChatPlugin 胜出维度：** 
- 代码健壮性、异常处理、兼容性、日志系统

**核心差异：触发方式完全不同**

| | 微信助手 | WeChatPlugin |
|--|---------|-------------|
| 触发方式 | **左滑菜单** | **长按手势** |
| 实现 | Hook UITableViewDataSource | 注入自定义手势 |
| 菜单类型 | iOS 原生 UISwipeActionsConfiguration | UIAlertController |

**WeChatPlugin 剩余待完善：**

| 优先级 | 功能 | 说明 |
|--------|------|------|
| **高** | 改为左滑菜单实现 | 更符合 iOS 原生习惯，与微信原生共存 |
| 高 | 品牌号置顶独立处理 | `setIsBrandTop:` / `setIsBrandSessionHolderTop:` |
| 中 | 免打扰自动回复逻辑 | 有配置无实现 |
| 中 | 免打扰工作时间逻辑 | 有配置无实现 |
| 中 | 设置页 UI | WCTableViewManager 或自建 |
| 低 | 辅助号置顶 | — |
| 低 | 检查/清除会话 | — |

---

## 十四、建议：WeChatPlugin 改用左滑菜单

### 优势

1. **符合 iOS 原生习惯** — 用户无需学习新操作
2. **与微信原生共存** — 不破坏微信原有的左滑删除、标记已读等功能
3. **实现更简洁** — 不需要处理手势冲突
4. **视觉效果更好** — iOS 原生滑动按钮样式

### 实现方案

```objc
// Hook MainFrameTableView 的 DataSource
// tableView:trailingSwipeActionsConfigurationForRowAtIndexPath:

static IMP orig_trailingSwipe = NULL;

static UISwipeActionsConfiguration *replaced_trailingSwipe(id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath) {
    // 1. 获取微信原生菜单
    UISwipeActionsConfiguration *original = nil;
    if (orig_trailingSwipe) {
        original = ((UISwipeActionsConfiguration *(*)(id, SEL, UITableView *, NSIndexPath *))orig_trailingSwipe)(self, _cmd, tableView, indexPath);
    }
    
    // 2. 获取当前会话信息
    id sessionInfo = [self getSessionInfoAtIndexPath:indexPath];
    NSString *userName = sessionInfo.m_nsUserName;
    
    // 3. 构建自定义菜单项
    NSMutableArray<UIContextualAction *> *actions = [original.actions mutableCopy] ?: [NSMutableArray array];
    
    PluginConfig *config = [PluginConfig shared];
    
    // 置顶
    if (config.quickPinEnabled) {
        BOOL isTop = [self isSessionTop:userName];
        UIContextualAction *pinAction = [UIContextualAction
            contextualActionWithStyle:UIContextualActionStyleNormal
                               title:isTop ? @"取消置顶" : @"置顶"
                             handler:^(UIContextualAction *action, UIView *sourceView, void (^completion)(BOOL)) {
            [self togglePin:userName isTop:isTop];
            completion(YES);
        }];
        pinAction.backgroundColor = [UIColor systemBlueColor];
        [actions addObject:pinAction];
    }
    
    // 备注
    if (config.quickRemarkEnabled) {
        UIContextualAction *remarkAction = [UIContextualAction
            contextualActionWithStyle:UIContextualActionStyleNormal
                               title:@"备注"
                             handler:^(UIContextualAction *action, UIView *sourceView, void (^completion)(BOOL)) {
            [self showEditRemark:userName];
            completion(YES);
        }];
        remarkAction.backgroundColor = [UIColor systemOrangeColor];
        [actions addObject:remarkAction];
    }
    
    // 免打扰
    if (config.quickMuteEnabled) {
        BOOL isMute = [self isSessionMuted:userName];
        UIContextualAction *muteAction = [UIContextualAction
            contextualActionWithStyle:UIContextualActionStyleNormal
                               title:isMute ? @"取消免打扰" : @"免打扰"
                             handler:^(UIContextualAction *action, UIView *sourceView, void (^completion)(BOOL)) {
            [self toggleMute:userName isMuted:isMute];
            completion(YES);
        }];
        muteAction.backgroundColor = [UIColor systemPurpleColor];
        [actions addObject:muteAction];
    }
    
    return [UISwipeActionsConfiguration configurationWithActions:actions];
}
```
