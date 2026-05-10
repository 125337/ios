# MGSessionBoxViewController 深度逆向分析与自建实现指南

> 分析目标: `微信助手 3.9-5(1).dylib` 中的 `MGSessionBoxViewController` 类
> 分析日期: 2026-05-10
> 目的: 完全复刻微信助手的会话盒子增强控制器
> **重要更新**: 微信助手使用 **iOS 原生 Swipe Actions API**（左滑菜单），而非长按手势

---

## 一、核心发现：微信助手使用 iOS 原生 Swipe Actions

### 1.1 从 dylib 提取的确凿证据

#### iOS 原生 API 类引用

```
_OBJC_CLASS_$_UISwipeActionsConfiguration
_OBJC_CLASS_$_UIContextualAction
_OBJC_CLASS_$_UITableViewRowAction  (iOS 10 及以下兼容)
```

#### iOS 原生 DataSource 方法

```
tableView:trailingSwipeActionsConfigurationForRowAtIndexPath:
tableView:leadingSwipeActionsConfigurationForRowAtIndexPath:
tableView:editActionsForRowAtIndexPath:
```

#### iOS 原生 API 方法

```
contextualActionWithStyle:title:handler:
configurationWithActions:
setPerformsFirstActionWithFullSwipe:
```

#### 方法签名（从二进制提取）

```
@"UISwipeActionsConfiguration"32@0:8@"UITableView"16@"NSIndexPath"24
v32@?0@"UIContextualAction"8@"UIView"16@?<v@?B>24
```

### 1.2 微信助手的实现方式

| 方式 | 用途 | API |
|------|------|-----|
| **iOS 原生 Swipe Actions** | 左滑菜单（主要） | `tableView:trailingSwipeActionsConfigurationForRowAtIndexPath:` |
| 微信内部菜单 API | 修改/隐藏原生菜单项 | `filteredMenuItems:`、`arrMenuItems`、`forceHideMenuOptionsAnimated:` |
| 长按手势 | 其他功能（如会话盒子） | `handlelongGesture:`、`UILongPressGestureRecognizer` |

---

## 二、MGSessionBoxViewController 类结构全景

### 2.1 类声明还原

```objc
@interface MGSessionBoxViewController : NSObject
    <UIGestureRecognizerDelegate,
     UICollectionViewDelegate,
     UICollectionViewDataSource>

@property (nonatomic, assign) BOOL isAddChatBox;                // 是否添加会话盒子
@property (nonatomic, assign) BOOL isBrandSessionHolderTop;     // 品牌号会话是否置顶
@property (nonatomic, assign) BOOL isChatBoxTop;                // 会话盒子是否置顶
@property (nonatomic, assign) BOOL isManagerChatBox;            // 是否管理会话盒子
@property (nonatomic, assign) BOOL mIsSessionGesture;           // 是否启用手势操作
@property (nonatomic, assign) NSInteger chatBoxTopInList;       // 会话盒子在列表中的置顶位置
@property (nonatomic, strong) NSMutableArray *filterSessionList; // 过滤后的会话列表
@property (nonatomic, strong) UICollectionView *collectionView;  // 会话盒子 CollectionView

@end
```

### 2.2 实现的协议

| 协议 | 用途 |
|------|------|
| `UIGestureRecognizerDelegate` | 用于会话盒子等功能的自定义手势（非左滑菜单） |
| `UICollectionViewDelegate` | 会话盒子 CollectionView 的交互委托 |
| `UICollectionViewDataSource` | 会话盒子 CollectionView 的数据源 |

> **注意**: 左滑菜单不需要实现 `UIGestureRecognizerDelegate`，因为它使用 iOS 原生 `UISwipeActionsConfiguration` API。

### 2.3 为什么用 UICollectionView 而非 UITableView

微信助手的 `MGSessionBoxViewController` 使用 `UICollectionView` + `UICollectionViewFlowLayout` 来展示会话盒子，而非 `UITableView`。原因:
1. **横向滚动**: 会话盒子支持横向滑动浏览置顶会话
2. **自定义布局**: 每个会话项可以自定义大小和间距
3. **与微信原生 TableView 不冲突**: 微信会话列表用的是 `MainFrameTableView`(UITableView 子类)，用 CollectionView 不会产生 DataSource 冲突

---

## 三、左滑菜单实现详解（iOS 原生 Swipe Actions）

### 3.1 实现流程

```
用户左滑会话
    ↓
UITableView 调用 DataSource 方法:
    tableView:trailingSwipeActionsConfigurationForRowAtIndexPath:
    ↓
微信助手 Hook 该方法:
    ├── 调用原始实现获取微信原生菜单项
    │   (删除、标记已读、置顶等)
    ├── 通过 filteredMenuItems: 过滤/修改菜单项
    ├── 创建自定义 UIContextualAction:
    │   ├── 置顶/取消置顶
    │   ├── 修改备注
    │   └── 免打扰/取消免打扰
    ├── 将自定义项添加到菜单数组
    └── 返回新的 UISwipeActionsConfiguration
    ↓
iOS 系统显示左滑菜单（原生样式）
```

### 3.2 关键代码还原

```objc
// Hook UITableViewDataSource
static IMP orig_trailingSwipe = NULL;

static UISwipeActionsConfiguration *replaced_trailingSwipe(
    id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath) {
    
    // 1. 获取微信原生菜单
    UISwipeActionsConfiguration *originalConfig = nil;
    if (orig_trailingSwipe) {
        originalConfig = ((UISwipeActionsConfiguration *(*)(id, SEL, UITableView *, NSIndexPath *))
            orig_trailingSwipe)(self, _cmd, tableView, indexPath);
    }
    
    // 2. 获取当前会话信息
    id sessionInfo = [self getSessionInfoAtIndexPath:indexPath];
    NSString *userName = [sessionInfo m_nsUserName];
    
    // 3. 复制原生菜单项
    NSMutableArray<UIContextualAction *> *actions = 
        [originalConfig.actions mutableCopy] ?: [NSMutableArray array];
    
    // 4. 添加自定义菜单项
    PluginConfig *config = [PluginConfig shared];
    
    // 置顶
    if (config.quickPinEnabled) {
        BOOL isTop = [self isSessionTop:userName];
        UIContextualAction *pinAction = [UIContextualAction
            contextualActionWithStyle:UIContextualActionStyleNormal
                               title:isTop ? @"取消置顶" : @"置顶"
                             handler:^(UIContextualAction *action, 
                                       UIView *sourceView, 
                                       void (^completion)(BOOL)) {
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
                             handler:^(UIContextualAction *action, 
                                       UIView *sourceView, 
                                       void (^completion)(BOOL)) {
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
                             handler:^(UIContextualAction *action, 
                                       UIView *sourceView, 
                                       void (^completion)(BOOL)) {
                [self toggleMute:userName isMuted:isMute];
                completion(YES);
            }];
        muteAction.backgroundColor = [UIColor systemPurpleColor];
        [actions addObject:muteAction];
    }
    
    // 5. 返回新配置
    UISwipeActionsConfiguration *newConfig = 
        [UISwipeActionsConfiguration configurationWithActions:actions];
    return newConfig;
}
```

### 3.3 从 dylib 提取的菜单相关方法

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

## 四、属性编码详解（从 dylib 提取的原始编码）

### 4.1 会话盒子相关属性

| 属性名 | ObjC 编码 | 类型 | 说明 |
|--------|-----------|------|------|
| `isAddChatBox` | `TB,N,V_isAddChatBox` | BOOL | 是否添加会话盒子到列表 |
| `isBrandSessionHolderTop` | `TB,N,V_isBrandSessionHolderTop` | BOOL | 品牌号会话持有者是否置顶 |
| `isChatBoxTop` | `TB,N,V_isChatBoxTop` | BOOL | 会话盒子是否置顶 |
| `isManagerChatBox` | `TB,N,V_isManagerChatBox` | BOOL | 是否进入会话盒子管理模式 |
| `mIsSessionGesture` | `TB,N,V_mIsSessionGesture` | BOOL | 是否启用会话手势操作 |
| `chatBoxTopInList` | `Tq,N,V_chatBoxTopInList` | NSInteger | 会话盒子在列表中的置顶位置 |
| `filterSessionList` | `T@"NSMutableArray",&,N,V_filterSessionList` | NSMutableArray | 过滤后的会话列表 |

### 4.2 WeChatMiYouSeting 中关联的配置属性

| 属性名 | ObjC 编码 | 类型 | 说明 |
|--------|-----------|------|------|
| `isBrandTop` | `TB,N,V_isBrandTop` | BOOL | 品牌号是否置顶 |
| `isBrandShowRedDot` | `TB,N,V_isBrandShowRedDot` | BOOL | 品牌号是否显示红点 |
| `isOpenBrandEnable` | `TB,N,V_isOpenBrandEnable` | BOOL | 品牌号功能开关 |
| `isOpenBrandHelper` | `TB,N,V_isOpenBrandHelper` | BOOL | 品牌号辅助开关 |
| `isOpenBrandNewEnable` | `TB,N,V_isOpenBrandNewEnable` | BOOL | 品牌号新功能开关 |
| `isHelperTop` | `TB,N,V_isHelperTop` | BOOL | 辅助号是否置顶 |
| `mIsAddDonotdisturbMenu` | `TB,N,V_mIsAddDonotdisturbMenu` | BOOL | 菜单中添加免打扰选项 |
| `mIsDonotdisturbState` | `TB,N,V_mIsDonotdisturbState` | BOOL | 免打扰全局状态 |
| `mIsBackEdgeGesture` | `TB,N,V_mIsBackEdgeGesture` | BOOL | 返回边缘手势 |
| `mIsMsgGestureEnbale` | `TB,N,V_mIsMsgGestureEnbale` | BOOL | 消息手势开关 |
| `mIsMsgGestureRightEnbale` | `TB,N,V_mIsMsgGestureRightEnbale` | BOOL | 消息右滑手势开关 |
| `mDonotdisturbList` | `T@"NSMutableArray",&,N,V_mDonotdisturbList` | NSMutableArray | 免打扰联系人列表 |
| `mDonotdisturbMsg` | `T@"NSString",&,N,V_mDonotdisturbMsg` | NSString | 免打扰自动回复消息 |
| `mDonotdisturbWorkingTime` | `T@"NSString",&,N,V_mDonotdisturbWorkingTime` | NSString | 免打扰工作时间 |
| `sessionDataList` | `T@"NSMutableArray",&,N,V_sessionDataList` | NSMutableArray | 会话数据列表 |
| `sessionList` | `T@"NSMutableArray",&,N,V_sessionList` | NSMutableArray | 会话列表 |
| `BrandList` | `T@"NSMutableArray",&,N,V_BrandList` | NSMutableArray | 品牌号列表 |
| `allBrandList` | `T@"NSMutableArray",&,N,V_allBrandList` | NSMutableArray | 所有品牌号列表 |
| `filterFriendList` | `T@"NSMutableArray",&,N,V_filterFriendList` | NSMutableArray | 过滤的好友列表 |
| `filterRoomList` | `T@"NSMutableArray",&,N,V_filterRoomList` | NSMutableArray | 过滤的群聊列表 |
| `brandName` | `T@"NSString",C,N,V_brandName` | NSString | 品牌号名称 |
| `brandIdx` | `Tq,N,V_brandIdx` | NSInteger | 品牌号索引 |
| `brandIncoType` | `Tq,N,V_brandIncoType` | NSInteger | 品牌号图标类型 |
| `helperIncoType` | `Tq,N,V_helperIncoType` | NSInteger | 辅助号图标类型 |

---

## 五、方法清单（从 dylib 提取的完整方法列表）

### 5.1 左滑菜单相关方法

| 方法 | 说明 |
|------|------|
| `tableView:trailingSwipeActionsConfigurationForRowAtIndexPath:` | iOS 11+ 左滑菜单配置 |
| `tableView:leadingSwipeActionsConfigurationForRowAtIndexPath:` | 右滑菜单配置 |
| `tableView:editActionsForRowAtIndexPath:` | iOS 10 及以下编辑操作 |
| `filteredMenuItems:` | 过滤/修改菜单项 |
| `arrMenuItems` | 菜单项数组 |
| `forceHideMenuOptionsAnimated:` | 强制隐藏菜单选项 |
| `hideMenuOptionsAnimated:` | 隐藏菜单选项 |
| `customizeActionsForActionSheet:` | 自定义 ActionSheet 操作 |
| `ReportLeftSlideSessionDelete:isConfirmed:` | 左滑删除上报 |
| `ReportLeftSlideSessionHide:isConfirmed:hasGuideView:` | 左滑隐藏上报 |

### 5.2 会话盒子管理方法

| 方法 | 说明 |
|------|------|
| `addChatBoxSection` | 在设置页添加"会话盒子"配置区域 |
| `addSessionBoxSection` | 在设置页添加"会话盒子增强"配置区域 |
| `addCheckSession` | 添加检查会话功能 |
| `addClearSession` | 添加清除会话功能 |
| `addContactToChatBox:` | 将联系人添加到会话盒子 |
| `removeContactFromChatBox:` | 从会话盒子移除联系人 |
| `chatBoxSessions` | 获取会话盒子中的所有会话 |
| `isContactInChatBox:` | 判断联系人是否在会话盒子中 |
| `filterSessionList` / `_filterSessionList` | 过滤会话列表 |
| `setFilterSessionList:` | 设置过滤后的会话列表 |

### 5.3 设置方法

| 方法 | 说明 |
|------|------|
| `settingAddChatBoxEnable:` | 设置是否添加会话盒子 |
| `settingBrandSessionTop:` | 设置品牌号会话置顶 |
| `settingChatBoxTopEnable:` | 设置会话盒子置顶开关 |
| `settingManagerChatBoxEnable:` | 设置会话盒子管理模式开关 |
| `settingSessionGesture:` | 设置会话手势操作 |

### 5.4 手势识别委托方法（用于会话盒子等其他功能）

| 方法 | 说明 |
|------|------|
| `gestureRecognizerShouldBegin:` | 手势是否应该开始识别 |
| `gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:` | 当前手势是否需要另一个手势失败后才能识别 |
| `gestureRecognizer:shouldReceiveEvent:` | 手势是否接收事件 |
| `gestureRecognizer:shouldReceivePress:` | 手势是否接收按压事件 |
| `gestureRecognizer:shouldReceiveTouch:` | 手势是否接收触摸事件 |
| `gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:` | 是否允许同时识别多个手势 |
| `gestureRecognizer:shouldRequireFailureOfGestureRecognizer:` | 当前手势是否需要另一个手势先失败 |

### 5.5 UICollectionView DataSource/Delegate 方法

| 方法 | 说明 |
|------|------|
| `numberOfSectionsInCollectionView:` | 会话盒子分组数 |
| `collectionView:numberOfItemsInSection:` | 每组会话项数量 |
| `collectionView:cellForItemAtIndexPath:` | 配置每个会话项 Cell |
| `collectionView:didSelectItemAtIndexPath:` | 点击会话项 |
| `collectionView:layout:sizeForItemAtIndexPath:` | 会话项大小 |
| `collectionView:layout:insetForSectionAtIndex:` | 分组内边距 |

---

## 六、MGSessionBoxViewController 工作原理深度还原

### 6.1 整体架构

```
┌──────────────────────────────────────────────────────────────┐
│                   NewMainFrameViewController                 │
│                    (微信会话列表控制器)                         │
│                                                              │
│  ┌────────────────────────────────────────────────────────┐  │
│  │              MainFrameTableView (UITableView)          │  │
│  │              (微信原生会话列表)                           │  │
│  │                                                        │  │
│  │  用户左滑会话 → iOS 调用:                               │  │
│  │  tableView:trailingSwipeActionsConfigurationFor...     │  │
│  │                                                        │  │
│  │  ┌──────────────────────────────────────────────────┐  │  │
│  │  │  左滑菜单 (iOS 原生 UISwipeActionsConfiguration)  │  │  │
│  │  │  ┌────────┐ ┌────────┐ ┌────────┐ ┌────────┐     │  │  │
│  │  │  │ 删除   │ │ 标记已读│ │ 置顶   │ │ 备注   │ ... │  │  │
│  │  │  └────────┘ └────────┘ └────────┘ └────────┘     │  │  │
│  │  │  (微信原生)  (微信原生)   (插件添加)  (插件添加)    │  │  │
│  │  └──────────────────────────────────────────────────┘  │  │
│  └────────────────────────────────────────────────────────┘  │
│                                                              │
│  ┌────────────────────────────────────────────────────────┐  │
│  │  MGSessionBoxViewController (自建控制器)                │  │
│  │  ┌──────────────────────────────────────────────────┐  │  │
│  │  │  UICollectionView (横向滚动会话盒子)              │  │  │
│  │  │  ├── [头像1] [头像2] [头像3] [头像4] ...          │  │  │
│  │  │  └── (横向滚动浏览置顶/收藏会话)                   │  │  │
│  │  └──────────────────────────────────────────────────┘  │  │
│  └────────────────────────────────────────────────────────┘  │
└──────────────────────────────────────────────────────────────┘
```

### 6.2 左滑菜单实现流程

```
dylib 加载 (__attribute__((constructor)))
    ↓
Hook UITableViewDataSource 方法:
    tableView:trailingSwipeActionsConfigurationForRowAtIndexPath:
    ↓
用户左滑会话
    ↓
iOS 系统调用 Hook 后的方法:
    ├── 调用原始实现获取微信原生菜单项
    ├── 创建自定义 UIContextualAction:
    │   ├── 置顶/取消置顶
    │   ├── 修改备注
    │   └── 免打扰/取消免打扰
    ├── 将自定义项添加到菜单数组
    └── 返回新的 UISwipeActionsConfiguration
    ↓
iOS 系统显示左滑菜单（原生样式）
    ↓
用户点击自定义菜单项
    ↓
执行对应操作:
    ├── TopSessionByName: / UntopSessionByName:
    ├── setM_nsRemark: + modifyDataItem:notify:
    └── ChangeNotifyStatus:withStatus:sync:
```

### 6.3 与原生菜单共存

微信助手的实现方式**不会破坏微信原有的左滑菜单**：

```
微信原生菜单项:
├── 删除
├── 标记已读
├── 置顶（微信原生）
└── ...

插件添加的菜单项:
├── 置顶/取消置顶（插件）
├── 备注
└── 免打扰

最终显示:
[删除] [标记已读] [置顶(微信)] [置顶(插件)] [备注] [免打扰] ...
```

---

## 七、自建 WPSessionBoxController 完整实现方案

### 7.1 文件结构

```
Modules/
├── SessionBox/
│   ├── WPSessionBoxController.h      # 会话盒子控制器头文件
│   ├── WPSessionBoxController.m      # 会话盒子控制器实现
│   ├── WPSessionBoxHook.h            # Hook 安装器
│   └── WPSessionBoxHook.m            # Hook 安装器实现（左滑菜单）
```

### 7.2 WPSessionBoxHook.m（左滑菜单实现）

```objc
#import "WPSessionBoxHook.h"
#import "WPSessionBoxController.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/HookEngine.h"
#import <objc/runtime.h>
#import <objc/message.h>

static IMP g_origTrailingSwipe = NULL;
static IMP g_origLeadingSwipe = NULL;
static IMP g_origEditActions = NULL;
static Class g_dataSourceClass = Nil;

static void sbLog(NSString *format, ...) {
    va_list args;
    va_start(args, format);
    NSString *content = [[NSString alloc] initWithFormat:format arguments:args];
    va_end(args);
    NSLog(@"[WeChatPlugin][SessionBox] %@", content);
}

static id getService(Class serviceClass) {
    Class scClass = objc_getClass("MMServiceCenter");
    if (!scClass) return nil;
    id center = ((id (*)(id, SEL))objc_msgSend)(scClass, NSSelectorFromString(@"defaultCenter"));
    if (!center) return nil;
    return ((id (*)(id, SEL, Class))objc_msgSend)(center, NSSelectorFromString(@"getService:"), serviceClass);
}

static id getContactMgr() {
    Class cls = objc_getClass("CContactMgr");
    if (!cls) return nil;
    return getService(cls);
}

static id getSessionMgr() {
    const char *classNames[] = {
        "MMNewSessionMgr", "CConversationMgr", "CSessionMgr",
        "MMSessionMgr", "MainSessionMgr"
    };
    for (int i = 0; i < 5; i++) {
        Class cls = objc_getClass(classNames[i]);
        if (cls) {
            id svc = getService(cls);
            if (svc) return svc;
        }
    }
    return nil;
}

static NSString *userNameFromIndexPath(id dataSource, NSIndexPath *indexPath) {
    SEL sessionInfoSel = NSSelectorFromString(@"getSessionInfoAtIndexPath:");
    if (![dataSource respondsToSelector:sessionInfoSel])
        sessionInfoSel = NSSelectorFromString(@"logicGetSessionAtIndexPath:");
    if (![dataSource respondsToSelector:sessionInfoSel])
        sessionInfoSel = NSSelectorFromString(@"sessionInfoForIndexPath:");
    if (![dataSource respondsToSelector:sessionInfoSel]) return nil;
    
    id sessionInfo = ((id (*)(id, SEL, id))objc_msgSend)(dataSource, sessionInfoSel, indexPath);
    if (!sessionInfo) return nil;
    
    SEL userNameSel = NSSelectorFromString(@"m_nsUserName");
    if (![sessionInfo respondsToSelector:userNameSel]) return nil;
    
    id name = ((id (*)(id, SEL))objc_msgSend)(sessionInfo, userNameSel);
    if (![name isKindOfClass:[NSString class]]) return nil;
    return name;
}

static BOOL isSessionTop(NSString *userName) {
    id contactMgr = getContactMgr();
    if (!contactMgr) return NO;
    SEL gcSel = NSSelectorFromString(@"getContactByName:");
    if (![contactMgr respondsToSelector:gcSel]) gcSel = NSSelectorFromString(@"getContactByNameFromCache:");
    if (![contactMgr respondsToSelector:gcSel]) return NO;
    id contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, gcSel, userName);
    if (!contact) return NO;
    SEL topSel = NSSelectorFromString(@"isContactSessionTop");
    if (![contact respondsToSelector:topSel]) return NO;
    return ((BOOL (*)(id, SEL))objc_msgSend)(contact, topSel);
}

static BOOL isSessionMuted(NSString *userName) {
    id contactMgr = getContactMgr();
    if (!contactMgr) return NO;
    SEL gcSel = NSSelectorFromString(@"getContactByName:");
    if (![contactMgr respondsToSelector:gcSel]) gcSel = NSSelectorFromString(@"getContactByNameFromCache:");
    if (![contactMgr respondsToSelector:gcSel]) return NO;
    id contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, gcSel, userName);
    if (!contact) return NO;
    SEL notifySel = NSSelectorFromString(@"isChatStatusNotifyOpen");
    if (![contact respondsToSelector:notifySel]) return NO;
    return !((BOOL (*)(id, SEL))objc_msgSend)(contact, notifySel);
}

static void togglePin(NSString *userName, BOOL isTop) {
    id sessionMgr = getSessionMgr();
    id contactMgr = getContactMgr();
    
    if (!isTop) {
        if (sessionMgr && [sessionMgr respondsToSelector:NSSelectorFromString(@"TopSessionByName:")]) {
            ((void (*)(id, SEL, id))objc_msgSend)(sessionMgr, NSSelectorFromString(@"TopSessionByName:"), userName);
        }
        if (contactMgr) {
            SEL gcSel = NSSelectorFromString(@"getContactByName:");
            if (![contactMgr respondsToSelector:gcSel]) gcSel = NSSelectorFromString(@"getContactByNameFromCache:");
            if ([contactMgr respondsToSelector:gcSel]) {
                id contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, gcSel, userName);
                if (contact && [contactMgr respondsToSelector:NSSelectorFromString(@"setContact:sessionTop:sync:")]) {
                    ((void (*)(id, SEL, id, BOOL, BOOL))objc_msgSend)(contactMgr, NSSelectorFromString(@"setContact:sessionTop:sync:"), contact, YES, YES);
                }
            }
        }
    } else {
        if (sessionMgr && [sessionMgr respondsToSelector:NSSelectorFromString(@"UntopSessionByName:")]) {
            ((void (*)(id, SEL, id))objc_msgSend)(sessionMgr, NSSelectorFromString(@"UntopSessionByName:"), userName);
        }
        if (contactMgr) {
            SEL gcSel = NSSelectorFromString(@"getContactByName:");
            if (![contactMgr respondsToSelector:gcSel]) gcSel = NSSelectorFromString(@"getContactByNameFromCache:");
            if ([contactMgr respondsToSelector:gcSel]) {
                id contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, gcSel, userName);
                if (contact && [contactMgr respondsToSelector:NSSelectorFromString(@"setContact:sessionTop:sync:")]) {
                    ((void (*)(id, SEL, id, BOOL, BOOL))objc_msgSend)(contactMgr, NSSelectorFromString(@"setContact:sessionTop:sync:"), contact, NO, YES);
                }
            }
        }
    }
    
    if (sessionMgr && [sessionMgr respondsToSelector:NSSelectorFromString(@"resortSessions")]) {
        ((void (*)(id, SEL))objc_msgSend)(sessionMgr, NSSelectorFromString(@"resortSessions"));
    }
}

static void toggleMute(NSString *userName, BOOL isMuted) {
    id contactMgr = getContactMgr();
    if (!contactMgr) return;
    NSInteger newStatus = isMuted ? 1 : 0;
    if ([contactMgr respondsToSelector:NSSelectorFromString(@"ChangeNotifyStatus:withStatus:sync:")]) {
        ((void (*)(id, SEL, id, NSInteger, BOOL))objc_msgSend)(contactMgr, NSSelectorFromString(@"ChangeNotifyStatus:withStatus:sync:"), userName, newStatus, YES);
    }
}

static void showEditRemark(NSString *userName) {
    id contactMgr = getContactMgr();
    if (!contactMgr) return;
    SEL gcSel = NSSelectorFromString(@"getContactByName:");
    if (![contactMgr respondsToSelector:gcSel]) gcSel = NSSelectorFromString(@"getContactByNameFromCache:");
    if (![contactMgr respondsToSelector:gcSel]) return;
    id contact = ((id (*)(id, SEL, id))objc_msgSend)(contactMgr, gcSel, userName);
    if (!contact) return;
    
    NSString *currentRemark = @"";
    if ([contact respondsToSelector:NSSelectorFromString(@"m_nsRemark")]) {
        id r = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsRemark"));
        if ([r isKindOfClass:[NSString class]]) currentRemark = r;
    }
    NSString *nickName = @"";
    if ([contact respondsToSelector:NSSelectorFromString(@"m_nsNickName")]) {
        id n = ((id (*)(id, SEL))objc_msgSend)(contact, NSSelectorFromString(@"m_nsNickName"));
        if ([n isKindOfClass:[NSString class]]) nickName = n;
    }
    
    dispatch_async(dispatch_get_main_queue(), ^{
        UIAlertController *alert = [UIAlertController
            alertControllerWithTitle:@"修改备注"
                            message:[NSString stringWithFormat:@"当前昵称: %@", nickName]
                     preferredStyle:UIAlertControllerStyleAlert];
        [alert addTextFieldWithConfigurationHandler:^(UITextField *textField) {
            textField.text = currentRemark;
            textField.placeholder = @"请输入备注名";
        }];
        __weak UIAlertController *weakAlert = alert;
        [alert addAction:[UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:^(UIAlertAction *action) {
            NSString *newRemark = weakAlert.textFields.firstObject.text ?: @"";
            if ([contact respondsToSelector:NSSelectorFromString(@"setM_nsRemark:")]) {
                ((void (*)(id, SEL, id))objc_msgSend)(contact, NSSelectorFromString(@"setM_nsRemark:"), newRemark);
            }
            if ([contactMgr respondsToSelector:NSSelectorFromString(@"modifyDataItem:notify:")]) {
                ((void (*)(id, SEL, id, BOOL))objc_msgSend)(contactMgr, NSSelectorFromString(@"modifyDataItem:notify:"), contact, YES);
            }
        }]];
        [alert addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
        
        UIViewController *topVC = nil;
        for (UIWindow *window in [UIApplication sharedApplication].windows) {
            if (window.isKeyWindow) { topVC = window.rootViewController; break; }
        }
        while (topVC.presentedViewController) topVC = topVC.presentedViewController;
        if (topVC) [topVC presentViewController:alert animated:YES completion:nil];
    });
}

// iOS 11+ 左滑菜单 Hook
static UISwipeActionsConfiguration *replaced_trailingSwipe(
    id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath) {
    
    sbLog(@"[trailingSwipe] called for indexPath: %@", indexPath);
    
    // 获取原始菜单
    UISwipeActionsConfiguration *originalConfig = nil;
    if (g_origTrailingSwipe) {
        originalConfig = ((UISwipeActionsConfiguration *(*)(id, SEL, UITableView *, NSIndexPath *))
            g_origTrailingSwipe)(self, _cmd, tableView, indexPath);
    }
    
    PluginConfig *config = [PluginConfig shared];
    if (!config.quickPinEnabled && !config.quickRemarkEnabled && !config.quickMuteEnabled) {
        return originalConfig;
    }
    
    // 获取 userName
    NSString *userName = userNameFromIndexPath(self, indexPath);
    if (!userName) return originalConfig;
    
    sbLog(@"[trailingSwipe] userName: %@", userName);
    
    // 复制原生菜单项
    NSMutableArray<UIContextualAction *> *actions = 
        [originalConfig.actions mutableCopy] ?: [NSMutableArray array];
    
    // 置顶
    if (config.quickPinEnabled) {
        BOOL isTop = isSessionTop(userName);
        UIContextualAction *pinAction = [UIContextualAction
            contextualActionWithStyle:UIContextualActionStyleNormal
                               title:isTop ? @"取消置顶" : @"置顶"
                             handler:^(UIContextualAction *action, UIView *sourceView, void (^completion)(BOOL)) {
                sbLog(@"[Action] togglePin: %@ isTop: %d", userName, isTop);
                togglePin(userName, isTop);
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
                sbLog(@"[Action] showEditRemark: %@", userName);
                showEditRemark(userName);
                completion(YES);
            }];
        remarkAction.backgroundColor = [UIColor systemOrangeColor];
        [actions addObject:remarkAction];
    }
    
    // 免打扰
    if (config.quickMuteEnabled) {
        BOOL isMute = isSessionMuted(userName);
        UIContextualAction *muteAction = [UIContextualAction
            contextualActionWithStyle:UIContextualActionStyleNormal
                               title:isMute ? @"取消免打扰" : @"免打扰"
                             handler:^(UIContextualAction *action, UIView *sourceView, void (^completion)(BOOL)) {
                sbLog(@"[Action] toggleMute: %@ isMuted: %d", userName, isMute);
                toggleMute(userName, isMute);
                completion(YES);
            }];
        muteAction.backgroundColor = [UIColor systemPurpleColor];
        [actions addObject:muteAction];
    }
    
    return [UISwipeActionsConfiguration configurationWithActions:actions];
}

@implementation WPSessionBoxHook

+ (void)install {
    sbLog(@"[install] === START (Swipe Actions) ===");
    
    // 查找 MainFrameTableView 或其 DataSource 类
    const char *dataSourceClassNames[] = {
        "MainFrameTableView",
        "NewMainFrameTableView",
        "MainFrameTableViewManager",
        "NewMainFrameViewController",
    };
    
    for (int i = 0; i < 4; i++) {
        Class cls = objc_getClass(dataSourceClassNames[i]);
        if (cls) {
            g_dataSourceClass = cls;
            sbLog(@"[install] found class: %s", dataSourceClassNames[i]);
            break;
        }
    }
    
    if (!g_dataSourceClass) {
        sbLog(@"[install] ✗ no suitable class found");
        return;
    }
    
    // Hook trailingSwipeActionsConfigurationForRowAtIndexPath: (iOS 11+)
    SEL trailingSwipeSel = NSSelectorFromString(@"tableView:trailingSwipeActionsConfigurationForRowAtIndexPath:");
    if ([g_dataSourceClass instancesRespondToSelector:trailingSwipeSel]) {
        IMP orig = [HookEngine swizzleMethod:trailingSwipeSel
                                     inClass:g_dataSourceClass
                                     withIMP:(IMP)replaced_trailingSwipe];
        if (orig) {
            g_origTrailingSwipe = orig;
            sbLog(@"[install] ✓ hooked trailingSwipeActionsConfigurationForRowAtIndexPath:");
        }
    } else {
        sbLog(@"[install] ⚠ class does not respond to trailingSwipeActionsConfigurationForRowAtIndexPath:");
    }
    
    sbLog(@"[install] === COMPLETE ===");
}

@end
```

---

## 八、与微信助手的差异对照

| 特性 | 微信助手 MGSessionBoxViewController | 自建 WPSessionBoxController |
|------|-------------------------------------|----------------------------|
| 基类 | NSObject | NSObject |
| 左滑菜单 | ✅ iOS 原生 UISwipeActionsConfiguration | ✅ iOS 原生 UISwipeActionsConfiguration |
| 与原生菜单共存 | ✅ 在原生基础上添加 | ✅ 在原生基础上添加 |
| 会话盒子 UI | UICollectionView (横向滚动) | 同左 |
| 设置页构建 | WCTableViewManager (微信原生) | UIAlertController (可改) |
| 配置管理 | WeChatMiYouSeting 单例 | PluginConfig 单例 |
| 日志 | MGLog | NSLog + 文件日志 |
| 品牌号置顶 | isBrandSessionHolderTop | 通过 CContact API |

---

## 九、关键注意事项

### 9.1 iOS 版本兼容

- `tableView:trailingSwipeActionsConfigurationForRowAtIndexPath:` 需要 iOS 11+
- iOS 10 及以下需要使用 `tableView:editActionsForRowAtIndexPath:`

### 9.2 与原生菜单共存

微信助手的实现方式**不会破坏微信原有的左滑菜单**，而是在原生菜单基础上添加自定义项。

### 9.3 内存管理

- 使用 Method Swizzling 时保存原始 IMP
- `UIContextualAction` 的 handler 是 block，注意循环引用

### 9.4 线程安全

- 所有 UI 操作必须在主线程
- `UIContextualAction` 的 handler 在主线程调用

---

## 十、⚠️ 左滑不动的根本原因与解决方案（重要更新）

### 10.1 重新分析结论

经过深入分析微信助手 dylib 和微信二进制，**确认微信助手使用的是 iOS 原生 Swipe Actions API**：

#### 微信助手 dylib 中的证据：
```
_OBJC_CLASS_$_UISwipeActionsConfiguration
_OBJC_CLASS_$_UIContextualAction
_OBJC_CLASS_$_UITableViewRowAction

tableView:trailingSwipeActionsConfigurationForRowAtIndexPath:
tableView:leadingSwipeActionsConfigurationForRowAtIndexPath:
tableView:editActionsForRowAtIndexPath:

configurationWithActions:
contextualActionWithStyle:title:handler:
```

#### 微信二进制中的证据：
```
tableView:trailingSwipeActionsConfigurationForRowAtIndexPath:
tableView:leadingSwipeActionsConfigurationForRowAtIndexPath:
tableView:editActionsForRowAtIndexPath:

_OBJC_CLASS_$_UISwipeActionsConfiguration
_OBJC_CLASS_$_UIContextualAction
_OBJC_CLASS_$_UITableViewRowAction
```

### 10.2 问题现象

从日志分析：
```
[canEditRow] self=NewMainFrameViewController indexPath={0-0} result=0
[canEditRow] self=NewMainFrameViewController indexPath={1-0} result=1  ← 返回 YES
[canEditRow] self=NewMainFrameViewController indexPath={2-0} result=1  ← 返回 YES
```

`canEditRowAtIndexPath:` 返回 `YES`，但 `trailingSwipeActionsConfigurationForRowAtIndexPath:` **从未被调用**。

### 10.3 根本原因

**微信的 `NewMainFrameViewController` 没有直接实现 `trailingSwipeActionsConfigurationForRowAtIndexPath:` 方法！**

证据：
```
[setDataSource] ✓ ADDED trailingSwipeActions to class NewMainFrameViewController
```
- "ADDED" 而非 "HOOKED" 说明该方法原本不存在

**微信可能通过以下方式实现左滑菜单：**

1. **通过父类或 Category 实现**
   - `NewMainFrameViewController` 可能继承自某个实现了 Swipe Actions 的基类
   - 或者通过 Category 添加方法

2. **使用自定义的菜单系统**
   - 微信有 `arrMenuItems`、`filteredMenuItems:` 等自定义菜单方法
   - 可能使用 UIScrollView + 自定义按钮实现

### 10.4 正确的 Hook 方案

#### 方案 A：Hook 微信的 `arrMenuItems` 方法（推荐）

微信内部使用 `arrMenuItems` 来管理菜单项，Hook 这个方法可以添加自定义菜单：

```objc
static NSArray *replaced_arrMenuItems(id self, SEL _cmd) {
    NSMutableArray *items = [NSMutableArray array];
    
    // 获取原始菜单项
    IMP origIMP = g_origIMPs[@"arrMenuItems"];
    if (origIMP) {
        NSArray *origItems = ((NSArray *(*)(id, SEL))origIMP)(self, _cmd);
        if (origItems) [items addObjectsFromArray:origItems];
    }
    
    // 获取当前会话的 userName
    NSString *userName = getUserNameFromCell(self);
    
    // 添加自定义菜单项
    PluginConfig *config = [PluginConfig shared];
    
    if (config.quickPinEnabled && userName.length > 0) {
        BOOL isTop = [[WPSessionBoxController shared] isSessionTop:userName];
        // 创建微信风格的菜单项...
    }
    
    return items;
}
```

#### 方案 B：Hook `filteredMenuItems:` 方法

微信使用 `filteredMenuItems:` 来过滤/修改菜单项：

```objc
static NSArray *replaced_filteredMenuItems(id self, SEL _cmd, NSArray *items) {
    NSMutableArray *result = [NSMutableArray arrayWithArray:items];
    
    // 添加自定义菜单项
    // ...
    
    return result;
}
```

#### 方案 C：Hook Cell 的配置方法

```objc
// Hook MMTableViewCell 或 MainFrameCell 的配置方法
static void replaced_configureCell(id self, SEL _cmd, id cellData) {
    // 调用原始实现
    orig_configureCell(self, _cmd, cellData);
    
    // 在 Cell 配置完成后添加自定义菜单
    // ...
}
```

### 10.5 探测微信实际使用的方法

```objc
static void probeWeChatSwipeImplementation() {
    sbLog(@"[probe] === 探测微信左滑实现 ===");
    
    // 1. 检查 NewMainFrameViewController 的所有方法
    Class vcClass = objc_getClass("NewMainFrameViewController");
    if (vcClass) {
        unsigned int methodCount = 0;
        Method *methods = class_copyMethodList(vcClass, &methodCount);
        sbLog(@"[probe] NewMainFrameViewController methods: %u", methodCount);
        
        for (unsigned int i = 0; i < methodCount; i++) {
            SEL sel = method_getName(methods[i]);
            const char *name = sel_getName(sel);
            
            NSString *nameStr = [NSString stringWithUTF8String:name];
            if ([nameStr containsString:@"swipe"] || 
                [nameStr containsString:@"action"] || 
                [nameStr containsString:@"menu"] ||
                [nameStr containsString:@"edit"]) {
                sbLog(@"[probe]   发现方法: %s", name);
            }
        }
        free(methods);
    }
    
    // 2. 检查 MainFrameTableView
    Class tvClass = objc_getClass("MainFrameTableView");
    if (tvClass) {
        unsigned int methodCount = 0;
        Method *methods = class_copyMethodList(tvClass, &methodCount);
        sbLog(@"[probe] MainFrameTableView methods: %u", methodCount);
        
        for (unsigned int i = 0; i < methodCount; i++) {
            SEL sel = method_getName(methods[i]);
            const char *name = sel_getName(sel);
            
            NSString *nameStr = [NSString stringWithUTF8String:name];
            if ([nameStr containsString:@"swipe"] || 
                [nameStr containsString:@"action"] || 
                [nameStr containsString:@"menu"]) {
                sbLog(@"[probe]   发现方法: %s", name);
            }
        }
        free(methods);
    }
    
    // 3. 检查 MainFrameCellData
    Class cellDataClass = objc_getClass("MainFrameCellData");
    if (cellDataClass) {
        unsigned int methodCount = 0;
        Method *methods = class_copyMethodList(cellDataClass, &methodCount);
        sbLog(@"[probe] MainFrameCellData methods: %u", methodCount);
        free(methods);
    }
    
    sbLog(@"[probe] === 探测完成 ===");
}
```

### 10.6 修正后的 WPSessionBoxHook.m

```objc
#import "WPSessionBoxHook.h"
#import "WPSessionBoxController.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/HookEngine.h"
#import <objc/runtime.h>
#import <objc/message.h>

static void sbLog(NSString *format, ...) {
    va_list args;
    va_start(args, format);
    NSString *content = [[NSString alloc] initWithFormat:format arguments:args];
    va_end(args);
    NSLog(@"[WeChatPlugin][SessionBox] %@", content);
    
    @try {
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folderPath = [paths.firstObject stringByAppendingPathComponent:@"WeChatPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folderPath withIntermediateDirectories:YES attributes:nil error:nil];
        NSString *filePath = [folderPath stringByAppendingPathComponent:@"sessionbox.log"];
        NSString *line = [NSString stringWithFormat:@"[%@] %@\n", [NSDate date], content];
        NSFileHandle *handle = [NSFileHandle fileHandleForWritingAtPath:filePath];
        if (handle) {
            [handle seekToEndOfFile];
            [handle writeData:[line dataUsingEncoding:NSUTF8StringEncoding]];
            [handle closeFile];
        } else {
            [line writeToFile:filePath atomically:YES encoding:NSUTF8StringEncoding error:nil];
        }
    } @catch (NSException *e) {}
}

static NSMutableDictionary *g_origIMPs = nil;

#pragma mark - 探测函数

static void probeClassMethods(const char *className) {
    Class cls = objc_getClass(className);
    if (!cls) {
        sbLog(@"[probe] 类不存在: %s", className);
        return;
    }
    
    sbLog(@"[probe] === %s ===", className);
    
    unsigned int methodCount = 0;
    Method *methods = class_copyMethodList(cls, &methodCount);
    
    for (unsigned int i = 0; i < methodCount; i++) {
        SEL sel = method_getName(methods[i]);
        const char *name = sel_getName(sel);
        
        NSString *nameStr = [NSString stringWithUTF8String:name];
        if ([nameStr containsString:@"swipe"] || 
            [nameStr containsString:@"Swipe"] ||
            [nameStr containsString:@"action"] || 
            [nameStr containsString:@"Action"] ||
            [nameStr containsString:@"menu"] ||
            [nameStr containsString:@"Menu"] ||
            [nameStr containsString:@"edit"] ||
            [nameStr containsString:@"Edit"]) {
            const char *typeEncoding = method_getTypeEncoding(methods[i]);
            sbLog(@"[probe]   %s [%s]", name, typeEncoding);
        }
    }
    free(methods);
}

#pragma mark - Hook 函数

static NSArray *replaced_arrMenuItems(id self, SEL _cmd) {
    sbLog(@"[arrMenuItems] called on %@", NSStringFromClass([self class]));
    
    NSMutableArray *items = [NSMutableArray array];
    
    IMP origIMP = g_origIMPs[@"arrMenuItems"];
    if (origIMP) {
        NSArray *origItems = ((NSArray *(*)(id, SEL))origIMP)(self, _cmd);
        if (origItems) [items addObjectsFromArray:origItems];
    }
    
    sbLog(@"[arrMenuItems] original items: %lu", (unsigned long)items.count);
    
    // TODO: 添加自定义菜单项
    
    return items;
}

static NSArray *replaced_filteredMenuItems(id self, SEL _cmd, NSArray *items) {
    sbLog(@"[filteredMenuItems] called on %@ with %lu items", NSStringFromClass([self class]), (unsigned long)items.count);
    
    NSMutableArray *result = [NSMutableArray arrayWithArray:items];
    
    IMP origIMP = g_origIMPs[@"filteredMenuItems:"];
    if (origIMP) {
        NSArray *filtered = ((NSArray *(*)(id, SEL, NSArray *))origIMP)(self, _cmd, items);
        if (filtered) result = [filtered mutableCopy];
    }
    
    // TODO: 添加自定义菜单项
    
    return result;
}

#pragma mark - 安装 Hook

@implementation WPSessionBoxHook

+ (void)install {
    sbLog(@"[install] === START ===");
    
    g_origIMPs = [NSMutableDictionary dictionary];
    
    // 1. 探测微信的实现
    probeClassMethods("NewMainFrameViewController");
    probeClassMethods("MainFrameTableView");
    probeClassMethods("MainFrameCellData");
    
    // 2. 尝试 Hook arrMenuItems
    Class vcClass = objc_getClass("NewMainFrameViewController");
    if (vcClass) {
        SEL arrMenuSel = NSSelectorFromString(@"arrMenuItems");
        Method arrMenuMethod = class_getInstanceMethod(vcClass, arrMenuSel);
        
        if (arrMenuMethod) {
            IMP origIMP = method_getImplementation(arrMenuMethod);
            g_origIMPs[@"arrMenuItems"] = origIMP;
            method_setImplementation(arrMenuMethod, (IMP)replaced_arrMenuItems);
            sbLog(@"[install] ✓ Hooked arrMenuItems");
        } else {
            sbLog(@"[install] ⚠ arrMenuItems not found on NewMainFrameViewController");
        }
        
        // 3. 尝试 Hook filteredMenuItems:
        SEL filteredMenuSel = NSSelectorFromString(@"filteredMenuItems:");
        Method filteredMenuMethod = class_getInstanceMethod(vcClass, filteredMenuSel);
        
        if (filteredMenuMethod) {
            IMP origIMP = method_getImplementation(filteredMenuMethod);
            g_origIMPs[@"filteredMenuItems:"] = origIMP;
            method_setImplementation(filteredMenuMethod, (IMP)replaced_filteredMenuItems);
            sbLog(@"[install] ✓ Hooked filteredMenuItems:");
        }
    }
    
    sbLog(@"[install] === COMPLETE ===");
}

@end
```

### 10.7 下一步调试建议

1. **运行探测函数**：先运行 `probeClassMethods()` 找到微信实际使用的方法名

2. **查看完整日志**：检查探测结果，找到正确的方法名

3. **根据实际方法名调整 Hook**：微信可能使用不同的方法名，需要根据探测结果调整

4. **检查微信的 Cell 类**：微信可能使用 `MainFrameCell` 或其他 Cell 类来实现菜单
