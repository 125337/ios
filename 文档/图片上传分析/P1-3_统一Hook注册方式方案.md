# P1-3 修复方案：统一 Hook 注册方式为表驱动

## 问题概述

当前项目 **15 个模块**中有 **14 个模块**使用手写 `MSHookMessageEx` 逐个注册 Hook，代码量约 300+ 行，存在以下问题：

| 问题 | 影响 |
|------|------|
| 每个 Hook 需 5-8 行样板代码（getClass + if + MSHookMessageEx + log） | 代码冗余、阻碍阅读 |
| 各模块的 install 方法结构不一致（有/无 log、有/无 class 检查） | 维护成本高 |
| Hook 注册无统一错误处理 | 类不存在时需手动写 if 防御 |
| 新增 Hook 需写一整套模板代码 | 开发效率低 |

### 改造目标

- **统一**：所有模块使用 `HookTableItem` 结构体 + `[HookEngine installHookTable:]` 注册
- **安全**：使用 `const char *` 代替 `__unsafe_unretained NSString *`，消除野指针风险
- **可读**：一行定义一个 Hook，一眼看清模块所有 Hook 目标
- **健壮**：统一 class/method 不存在检查 + 统一日志输出

---

## 改造方案

### 核心设计

在 `HookEngine.h` 中新增：

```objc
typedef struct {
    const char *className;   // C 字符串，编译期常量，零野指针风险
    const char *selName;     // C 字符串，编译期常量，零野指针风险
    IMP replacement;         // 替换后的 IMP
    IMP *original;           // 保存原始 IMP 的指针
} HookTableItem;
```

使用 `const char *` 而非 `NSString *` 的安全性对比：

| 方案 | 编译期常量 `"MyClass"` | 动态字符串 |
|------|:---------------------:|:----------:|
| `const char *` | ✅ 二进制数据段，永远有效 | ✅ 不适用（C 字符串无引用计数问题） |
| `__unsafe_unretained NSString *` | ✅ `__NSCFConstantString` 永不释放 | **❌ 野指针风险** |

---

## 分步改造步骤

---

### Step 1：基础设施搭建 — 改造 HookEngine.h / HookEngine.m

**涉及文件**：`Core/HookEngine.h`、`Core/HookEngine.m`

**工作量**：**2 个文件，约 +50 行**

#### 1.1 修改 HookEngine.h

当前代码只有 3 个 swizzle 方法：

```objc
@interface HookEngine : NSObject
+ (IMP)swizzleMethod:(SEL)sel inClass:(Class)cls withIMP:(IMP)newIMP;
+ (void)swizzleMethod:(SEL)sel inClass:(Class)cls withBlock:(id)block;
+ (BOOL)addOrSwizzleMethod:(SEL)sel inClass:(Class)cls withIMP:(IMP)newIMP
              typeEncoding:(const char *)typeEncoding originalIMP:(IMP *)outOrigIMP;
@end
```

修改为：

```objc
#import <Foundation/Foundation.h>
#import <objc/runtime.h>

// ============================================================
// MARK: - Hook Table Item
// ============================================================

/// Hook 表条目
/// 使用 const char * 而非 NSString *，避免 C 结构体持有 ObjC 对象的野指针风险
/// 调用方传入编译期字符串常量（如 "MMTableViewCell"），永久有效
typedef struct {
    const char *className;
    const char *selName;
    IMP replacement;
    IMP *original;
} HookTableItem;

// ============================================================
// MARK: - HookEngine
// ============================================================

@interface HookEngine : NSObject

/// 批量安装 Hook 表
/// @param moduleName  模块名称（显示在日志中）
/// @param items       HookTableItem 数组
/// @param count       数组元素个数
/// @return 成功安装的 Hook 数量
///
/// 功能：
///   遍历 HookTableItem 数组，逐条执行 MSHookMessageEx
///   类不存在 → 自动跳过并日志
///   方法不存在 → 自动跳过并日志
///   安装完成 → 输出汇总统计
+ (int)installHookTable:(NSString *)moduleName items:(HookTableItem *)items count:(int)count;

/// 安装单个 Hook（兼容旧写法，逐步迁移时可混用）
+ (BOOL)installHookForClass:(NSString *)className
                     method:(NSString *)methodName
                replacement:(IMP)replacement
                   original:(IMP *)originalPtr
                 moduleName:(NSString *)moduleName;

// 原有方法保持不变
+ (IMP)swizzleMethod:(SEL)sel inClass:(Class)cls withIMP:(IMP)newIMP;
+ (void)swizzleMethod:(SEL)sel inClass:(Class)cls withBlock:(id)block;
+ (BOOL)addOrSwizzleMethod:(SEL)sel
                   inClass:(Class)cls
                   withIMP:(IMP)newIMP
              typeEncoding:(const char *)typeEncoding
               originalIMP:(IMP *)outOrigIMP;

@end
```

#### 1.2 修改 HookEngine.m

在 `@implementation HookEngine` 中新增两个方法：

```objc
#import "HookEngine.h"
#import <objc/runtime.h>
#import <substrate.h>

@implementation HookEngine

// ... 原有 3 个 swizzle 方法保持不变 ...

#pragma mark - Hook Table

+ (int)installHookTable:(NSString *)moduleName items:(HookTableItem *)items count:(int)count {
    if (!moduleName || !items || count <= 0) {
        WPLog(moduleName ?: @"HookEngine", @"installHookTable: 参数无效 (count=%d)", count);
        return 0;
    }

    WPLog(moduleName, @"========================================");
    WPLog(moduleName, @"%@ install: 安装 %d 个 Hook", moduleName, count);
    WPLog(moduleName, @"========================================");

    int hookedCount = 0;

    for (int i = 0; i < count; i++) {
        HookTableItem *item = &items[i];

        // 1. 检查参数
        if (!item->className || !item->selName || !item->replacement) {
            WPLog(moduleName, @"[%d/%d] 参数无效，跳过", i + 1, count);
            continue;
        }

        // 2. 获取类（const char * 直接传给 objc_getClass）
        Class cls = objc_getClass(item->className);
        if (!cls) {
            WPLog(moduleName, @"[%d/%d] 类不存在: %s，跳过", i + 1, count, item->className);
            continue;
        }

        // 3. 检查方法是否存在
        SEL sel = sel_registerName(item->selName);
        Method method = class_getInstanceMethod(cls, sel);
        if (!method) {
            WPLog(moduleName, @"[%d/%d] 方法不存在: %s - %s，跳过", i + 1, count, item->className, item->selName);
            continue;
        }

        // 4. 执行 Hook
        MSHookMessageEx(cls, sel, item->replacement, item->original);

        WPLog(moduleName, @"[%d/%d] ✓ Hooked %s - %s", i + 1, count, item->className, item->selName);
        hookedCount++;
    }

    WPLog(moduleName, @"========================================");
    WPLog(moduleName, @"%@ install 完成: %d/%d 个 Hook 成功", moduleName, hookedCount, count);
    WPLog(moduleName, @"========================================");

    return hookedCount;
}

+ (BOOL)installHookForClass:(NSString *)className
                     method:(NSString *)methodName
                replacement:(IMP)replacement
                   original:(IMP *)originalPtr
                 moduleName:(NSString *)moduleName {

    if (!className || !methodName || !replacement) {
        WPLog(moduleName ?: @"HookEngine", @"installHook: 参数无效");
        return NO;
    }

    Class cls = objc_getClass([className UTF8String]);
    if (!cls) {
        WPLog(moduleName, @"installHook: 类不存在 %@", className);
        return NO;
    }

    SEL sel = sel_registerName([methodName UTF8String]);
    Method method = class_getInstanceMethod(cls, sel);
    if (!method) {
        WPLog(moduleName, @"installHook: 方法不存在 %@ - %@", className, methodName);
        return NO;
    }

    MSHookMessageEx(cls, sel, replacement, originalPtr);
    WPLog(moduleName, @"✓ Hooked %@ - %@", className, methodName);
    return YES;
}

@end
```

#### ✅ Step 1 测试验证

| 测试 | 操作 | 预期结果 |
|------|------|---------|
| 编译检查 | `Cmd+B` 编译项目 | 零 error、零 warning |
| API 验证 | 搜索 `HookTableItem` 在项目中出现 | 仅出现在 HookEngine.h（定义处），其他模块未改动 |

---

### Step 2：迁移小模块（1-2 个 Hook，4 个模块）

**涉及文件**：
- `Modules/PlaceholderText/PlaceholderTextHook.m`（1 个 Hook）
- `Modules/Revoke/RevokeHook.m`（1 个 Hook）
- `Modules/Unread/ClearUnreadHook.m`（2 个 Hook）
- `Modules/Layout/UIAttachLayoutHook.m`（3 个 Hook）

**工作量**：**4 个文件，每文件改动约 -10~15 行**

#### 2.1 PlaceholderTextHook.m

**改造前**（~20 行）：

```objc
+ (void)install {
    WPLog(@"PlaceholderText", @"PlaceholderTextHook install");

    Class growTextViewClass = objc_getClass("MMGrowTextView");
    if (growTextViewClass) {
        MSHookMessageEx(
            growTextViewClass,
            @selector(layoutSubviews),
            (IMP)hook_MMGrowTextView_layoutSubviews,
            (IMP *)&orig_MMGrowTextView_layoutSubviews
        );
        WPLog(@"PlaceholderText", @"[Hook] ✓ MMGrowTextView.layoutSubviews");
    } else {
        WPLog(@"PlaceholderText", @"[Hook] ✗ MMGrowTextView class not found");
    }

    WPLog(@"PlaceholderText", @"PlaceholderTextHook install complete");
}
```

**改造后**（~8 行）：

```objc
+ (void)install {
    HookTableItem items[] = {
        {"MMGrowTextView", "layoutSubviews",
            (IMP)hook_MMGrowTextView_layoutSubviews, (IMP *)&orig_MMGrowTextView_layoutSubviews},
    };

    [HookEngine installHookTable:@"PlaceholderText" items:items
                           count:sizeof(items) / sizeof(items[0])];
}
```

#### 2.2 RevokeHook.m

**改造前**（~16 行）：

```objc
+ (void)install {
    WPLog(@"Revoke", @"[MioPlugin][RevokeHook] install start ...");
    Class msgMgrCls = objc_getClass("CMessageMgr");
    if (!msgMgrCls) {
        WPLog(@"Revoke", @"[MioPlugin][RevokeHook] ✗ CMessageMgr class not found!");
        return;
    }
    MSHookMessageEx(msgMgrCls, @selector(onNewSyncNotAddDBMessage:),
        (IMP)replaced_onNewSyncNotAddDBMessage, &orig_onNewSyncNotAddDBMessage);
    g_hookSyncVerified = YES;
    WPLog(@"Revoke", @"[MioPlugin][RevokeHook] ✓ onNewSyncNotAddDBMessage: hooked ...");
}
```

**改造后**（~10 行）：

```objc
+ (void)install {
    HookTableItem items[] = {
        {"CMessageMgr", "onNewSyncNotAddDBMessage:",
            (IMP)replaced_onNewSyncNotAddDBMessage, &orig_onNewSyncNotAddDBMessage},
    };

    [HookEngine installHookTable:@"Revoke" items:items
                           count:sizeof(items) / sizeof(items[0])];
    g_hookSyncVerified = YES;
}
```

#### 2.3 ClearUnreadHook.m

**改造前**（~20 行）：

```objc
+ (void)install {
    WPLog(@"ClearUnread",@"[INFO] ClearUnreadHook install start");
    Class menuBtnClass = objc_getClass("NewMainFrameRightTopMenuBtn");
    if (menuBtnClass) {
        MSHookMessageEx(menuBtnClass, @selector(reloadMenuItems),
            (IMP)replaced_reloadMenuItems, &orig_reloadMenuItems);
        WPLog(@"ClearUnread",@"[INFO] reloadMenuItems hooked");
    }
    Class menuDataClass = objc_getClass("RightTopMenuData");
    if (menuDataClass) {
        MSHookMessageEx(menuDataClass, @selector(clickMenu:),
            (IMP)replaced_clickMenu, &orig_clickMenu);
        WPLog(@"ClearUnread",@"[INFO] clickMenu: hooked on RightTopMenuData");
    } else {
        WPLog(@"ClearUnread",@"[ERR] RightTopMenuData not found");
    }
    WPLog(@"ClearUnread",@"[INFO] ClearUnreadHook install complete");
}
```

**改造后**（~8 行）：

```objc
+ (void)install {
    HookTableItem items[] = {
        {"NewMainFrameRightTopMenuBtn", "reloadMenuItems",
            (IMP)replaced_reloadMenuItems, &orig_reloadMenuItems},
        {"RightTopMenuData", "clickMenu:",
            (IMP)replaced_clickMenu, &orig_clickMenu},
    };

    [HookEngine installHookTable:@"ClearUnread" items:items
                           count:sizeof(items) / sizeof(items[0])];
}
```

#### 2.4 UIAttachLayoutHook.m

**改造前**（~27 行）：

```objc
+ (void)install {
    Class cls;
    cls = objc_getClass("SelectAttachmentView");
    if (cls) {
        MSHookMessageEx(cls, sel_registerName("layoutSubviews"),
            (IMP)hook_SelectAttachmentView_layoutSubviews,
            (IMP *)&orig_SelectAttachmentView_layoutSubviews);
    }
    cls = objc_getClass("SelectAttachmentViewController");
    if (cls) {
        MSHookMessageEx(cls, sel_registerName("numberOfCols"),
            (IMP)hook_numberOfCols,
            (IMP *)&orig_SelectAttachmentViewController_numberOfCols);
        MSHookMessageEx(cls, sel_registerName("numberOfRows"),
            (IMP)hook_numberOfRows,
            (IMP *)&orig_SelectAttachmentViewController_numberOfRows);
    }
}
```

**改造后**（~10 行）：

```objc
+ (void)install {
    HookTableItem items[] = {
        {"SelectAttachmentView", "layoutSubviews",
            (IMP)hook_SelectAttachmentView_layoutSubviews, (IMP *)&orig_SelectAttachmentView_layoutSubviews},
        {"SelectAttachmentViewController", "numberOfCols",
            (IMP)hook_numberOfCols, (IMP *)&orig_SelectAttachmentViewController_numberOfCols},
        {"SelectAttachmentViewController", "numberOfRows",
            (IMP)hook_numberOfRows, (IMP *)&orig_SelectAttachmentViewController_numberOfRows},
    };

    [HookEngine installHookTable:@"AttachLayout" items:items
                           count:sizeof(items) / sizeof(items[0])];
}
```

#### ✅ Step 2 测试验证

| 测试编号 | 测试场景 | 操作步骤 | 预期结果 |
|---------|---------|---------|---------|
| T2-1 | 编译 | `Cmd+B` | 零 error、零 warning |
| T2-2 | 占位符 | 进入任意聊天 → 点击输入框 → 输入文字 → 清空文字 | 占位符正常显示/隐藏 |
| T2-3 | 撤回提示 | 发送一条消息 → 长按 → 撤回 | 撤回提示「你撤回了一条消息」正常显示 |
| T2-4 | 清除未读 | 在列表页长按菜单 → 点击清除未读 | 未读标记清除成功 |
| T2-5 | 附件布局 | 在聊天中点击「+」→ 选择附件发送 | 附件选择器布局正常 |

**日志检查**：

```
[PlaceholderText] ========================================
[PlaceholderText] PlaceholderText install: 安装 1 个 Hook
[PlaceholderText] [1/1] ✓ Hooked MMGrowTextView - layoutSubviews
[PlaceholderText] PlaceholderText install 完成: 1/1 个 Hook 成功
```

---

### Step 3：迁移中模块（3-5 个 Hook，3 个模块）

**涉及文件**：
- `Modules/ChatTopBar/ChatTopBarHook.m`（3 个 Hook）
- `Modules/HideAvatar/HideAvatarHook.m`（3 个 Hook）
- `Modules/AutoTransfer/AutoTransferHook.m`（5 个 Hook）

**工作量**：**3 个文件，每文件改动约 -15~30 行**

#### 3.1 ChatTopBarHook.m

**改造前**（~22 行）：

```objc
+ (void)install {
    WPLog(@"ChatTopBar", @"ChatTopBarHook install");
    _popoverDelegate = [[MioPopoverHandler alloc] init];
    Class cls = objc_getClass("BaseMsgContentViewController");
    if (cls) {
        MSHookMessageEx(cls, @selector(viewDidLoad),
            (IMP)hook_viewDidLoad, &orig_BaseMsgContentVC_viewDidLoad);
        MSHookMessageEx(cls, @selector(viewWillAppear:),
            (IMP)hook_viewWillAppear, &orig_BaseMsgContentVC_viewWillAppear);
        WPLog(@"ChatTopBar", @"[Hook] ✓ BaseMsgContentViewController");
    }
    Class navCls = objc_getClass("UINavigationController");
    if (navCls) {
        MSHookMessageEx(navCls, @selector(pushViewController:animated:),
            (IMP)hook_pushViewController, &orig_UINavigationController_push);
        WPLog(@"ChatTopBar", @"[Hook] ✓ UINavigationController::pushViewController:animated:");
    }
}
```

**改造后**（~12 行）：

```objc
+ (void)install {
    _popoverDelegate = [[MioPopoverHandler alloc] init];

    HookTableItem items[] = {
        {"BaseMsgContentViewController", "viewDidLoad",
            (IMP)hook_viewDidLoad, &orig_BaseMsgContentVC_viewDidLoad},
        {"BaseMsgContentViewController", "viewWillAppear:",
            (IMP)hook_viewWillAppear, &orig_BaseMsgContentVC_viewWillAppear},
        {"UINavigationController", "pushViewController:animated:",
            (IMP)hook_pushViewController, &orig_UINavigationController_push},
    };

    [HookEngine installHookTable:@"ChatTopBar" items:items
                           count:sizeof(items) / sizeof(items[0])];
}
```

#### 3.2 HideAvatarHook.m

**改造前**（~39 行）：

```objc
+ (void)install {
    WPLog(@"HideAvatar", @"HideAvatarHook install ...");
    Class cls;
    cls = objc_getClass("BaseMsgContentViewController");
    if (cls) {
        MSHookMessageEx(cls, @selector(viewDidLoad),
            (IMP)hook_viewDidLoad, &orig_BaseMsgContentVC_viewDidLoad);
        WPLog(@"HideAvatar", @"[Hook] ✓ BaseMsgContentViewController.viewDidLoad");
    } else {
        WPLog(@"HideAvatar", @"[Hook] ✗ BaseMsgContentViewController class not found");
    }
    if (cls) {
        MSHookMessageEx(cls, @selector(viewWillAppear:),
            (IMP)hook_viewWillAppear, &orig_BaseMsgContentVC_viewWillAppear);
        WPLog(@"HideAvatar", @"[Hook] ✓ BaseMsgContentViewController.viewWillAppear:");
    }
    cls = objc_getClass("CommonMessageViewModel");
    if (cls) {
        MSHookMessageEx(cls, NSSelectorFromString(@"isShowHeadImage"),
            (IMP)hook_isShowHeadImage, &orig_CommonMessageVM_isShowHeadImage);
        WPLog(@"HideAvatar", @"[Hook] ✓ CommonMessageViewModel.isShowHeadImage");
    } else {
        WPLog(@"HideAvatar", @"[Hook] ✗ CommonMessageViewModel class not found");
    }
    WPLog(@"HideAvatar", @"HideAvatarHook install complete");
}
```

**改造后**（~11 行）：

```objc
+ (void)install {
    HookTableItem items[] = {
        {"BaseMsgContentViewController", "viewDidLoad",
            (IMP)hook_viewDidLoad, &orig_BaseMsgContentVC_viewDidLoad},
        {"BaseMsgContentViewController", "viewWillAppear:",
            (IMP)hook_viewWillAppear, &orig_BaseMsgContentVC_viewWillAppear},
        {"CommonMessageViewModel", "isShowHeadImage",
            (IMP)hook_isShowHeadImage, &orig_CommonMessageVM_isShowHeadImage},
    };

    [HookEngine installHookTable:@"HideAvatar" items:items
                           count:sizeof(items) / sizeof(items[0])];
}
```

#### 3.3 AutoTransferHook.m

**改造前**（~26 行）：

```objc
+ (void)install {
    WPLog(@"AutoTransfer", @"AutoTransferHook install");
    Class CMessageMgrClass = objc_getClass("CMessageMgr");
    if (CMessageMgrClass) {
        MSHookMessageEx(CMessageMgrClass, @selector(onNewSyncAddMessage:),
            (IMP)replaced_at_onNewSyncAddMessage, &orig_onNewSyncAddMessage);
        WPLog(@"AutoTransfer", @"[+] onNewSyncAddMessage: hooked");
        MSHookMessageEx(CMessageMgrClass, @selector(onNewSyncNotAddDBMessage:),
            (IMP)replaced_at_onNewSyncNotAddDBMessage, &orig_onNewSyncNotAddDBMessage);
        WPLog(@"AutoTransfer", @"[+] onNewSyncNotAddDBMessage: hooked");
        MSHookMessageEx(CMessageMgrClass, @selector(AddMsg:MsgWrap:),
            (IMP)replaced_at_AddMsgMsgWrap, &orig_AddMsgMsgWrap);
        WPLog(@"AutoTransfer", @"[+] AddMsg:MsgWrap: hooked");
        MSHookMessageEx(CMessageMgrClass, @selector(AsyncOnAddMsg:MsgWrap:),
            (IMP)replaced_at_AsyncOnAddMsgMsgWrap, &orig_AsyncOnAddMsgMsgWrap);
        WPLog(@"AutoTransfer", @"[+] AsyncOnAddMsg:MsgWrap: hooked");
    }
    Class PayLogicMgrClass = objc_getClass("WCPayLogicMgr");
    if (PayLogicMgrClass) {
        MSHookMessageEx(PayLogicMgrClass, @selector(insideCallBackOnConfirmTransferMoneyResponse:OnRequest:),
            (IMP)replaced_at_ConfirmTransferResponse, &orig_ConfirmTransferResponse);
        WPLog(@"AutoTransfer", @"[+] insideCallBackOnConfirmTransferMoneyResponse:OnRequest: hooked");
    }
    WPLog(@"AutoTransfer", @"AutoTransferHook install complete");
}
```

**改造后**（~14 行）：

```objc
+ (void)install {
    HookTableItem items[] = {
        {"CMessageMgr", "onNewSyncAddMessage:",
            (IMP)replaced_at_onNewSyncAddMessage, &orig_onNewSyncAddMessage},
        {"CMessageMgr", "onNewSyncNotAddDBMessage:",
            (IMP)replaced_at_onNewSyncNotAddDBMessage, &orig_onNewSyncNotAddDBMessage},
        {"CMessageMgr", "AddMsg:MsgWrap:",
            (IMP)replaced_at_AddMsgMsgWrap, &orig_AddMsgMsgWrap},
        {"CMessageMgr", "AsyncOnAddMsg:MsgWrap:",
            (IMP)replaced_at_AsyncOnAddMsgMsgWrap, &orig_AsyncOnAddMsgMsgWrap},
        {"WCPayLogicMgr", "insideCallBackOnConfirmTransferMoneyResponse:OnRequest:",
            (IMP)replaced_at_ConfirmTransferResponse, &orig_ConfirmTransferResponse},
    };

    [HookEngine installHookTable:@"AutoTransfer" items:items
                           count:sizeof(items) / sizeof(items[0])];
}
```

#### ✅ Step 3 测试验证

| 测试编号 | 测试场景 | 操作步骤 | 预期结果 |
|---------|---------|---------|---------|
| T3-1 | 编译 | `Cmd+B` | 零 error、零 warning |
| T3-2 | 聊天顶部栏 | 进入任意聊天 → 查看顶部栏 | 顶部栏标题/样式正常 |
| T3-3 | 隐藏头像 | 打开隐藏头像开关 → 进入聊天 | 消息列表中用户头像正确隐藏/显示 |
| T3-4 | 自动转账回复 | 让朋友发送一个转账 | 自动转账回复正常触发，接收方收到消息 |
| T3-5 | 日志验证 | 查看 Xcode Console | 3 个模块的 `install` 日志输出完整 |

---

### Step 4：迁移大模块（8+ 个 Hook，2 个模块 + 1 个关联模块）

**涉及文件**：
- `Modules/ListCornerRadius/ListCornerRadiusHook.m`（8 个直接 Hook + 调用 ProfileCardBgHook）
- `Modules/ProfileCardBg/ProfileCardBgHook.m`（2 个 Hook，新增 install 方法）
- `Modules/RedEnvelop/RedEnvelopHook.m`（8 个 Hook）

**工作量**：**3 个文件**

#### 4.1 ListCornerRadiusHook.m + ProfileCardBgHook.m

这两个模块是耦合的：`ListCornerRadiusHook.initListCornerRadiusHook` 在最后一行调用了 `[ProfileCardBgHook initCellHeightHook]`。

**改造方案**：为 ProfileCardBgHook 新增 `install` 方法，ListCornerRadiusHook 不再直接调用 ProfileCardBgHook 的 hook 初始化。

##### ProfileCardBgHook.m — 新增 install 方法

当前 ProfileCardBgHook 没有 `install` 方法，Hook 注册在 `initCellHeightHook` 和 `initProfileCardHook` 中。

在 `@implementation ProfileCardBgHook` 中新增：

```objc
+ (void)install {
    HookTableItem items[] = {
        {"WCTableViewManager", "tableView:heightForHeaderInSection:",
            (IMP)_hooked_heightForHeader, (IMP *)&orig_heightForHeader},
        {"MMUIButton", "layoutSubviews",
            (IMP)replaced_MMUIButton_layoutSubviews, (IMP *)&orig_MMUIButton_layoutSubviews},
    };

    [HookEngine installHookTable:@"CardBg" items:items
                           count:sizeof(items) / sizeof(items[0])];
}
```

**保留** `initCellHeightHook` 和 `initProfileCardHook` 方法（旧调用方仍可调用），但将其实现改为空方法或标记为弃用：

```objc
+ (void)initCellHeightHook {
    // 已弃用 — Hook 注册已迁移到 install 方法
}

+ (void)initProfileCardHook {
    // 已弃用 — Hook 注册已迁移到 install 方法
}
```

##### ListCornerRadiusHook.m — 改造 initListCornerRadiusHook

**改造前**（~66 行）：

```objc
+ (void)initListCornerRadiusHook {
    WPLog(@"ListCornerRadius", @"[INIT] Initializing ListCornerRadius hook...");
    Class MMTableViewCellClass = objc_getClass("MMTableViewCell");
    if (MMTableViewCellClass) {
        MSHookMessageEx(MMTableViewCellClass, @selector(layoutSubviews),
            (IMP)replaced_MMTableViewCell_layoutSubviews, &orig_MMTableViewCell_layoutSubviews);
        WPLog(@"ListCornerRadius", @"[OK] MMTableViewCell::layoutSubviews");
    } else {
        WPLog(@"ListCornerRadius", @"[WARN] MMTableViewCell class not found!");
    }
    // ... 后面 7 个 Hook 同样的模式 ...
    [ProfileCardBgHook initCellHeightHook];
}
```

**改造后**：

```objc
+ (void)initListCornerRadiusHook {
    HookTableItem items[] = {
        {"MMTableViewCell", "layoutSubviews",
            (IMP)replaced_MMTableViewCell_layoutSubviews, &orig_MMTableViewCell_layoutSubviews},
        {"WCSearchBar", "layoutSubviews",
            (IMP)replaced_WCSearchBar_layoutSubviews, &orig_WCSearchBar_layoutSubviews},
        {"MFWebMMBtn", "layoutSubviews",
            (IMP)_hooked_MFWebMMBtn_layoutSubviews, (IMP *)&orig_MFWebMMBtn_layoutSubviews},
        {"MFBannerBtn", "layoutSubviews",
            (IMP)_hooked_MFBannerBtn_layoutSubviews, (IMP *)&orig_MFBannerBtn_layoutSubviews},
        {"MainFrameSectionFoldView", "layoutSubviews",
            (IMP)_hooked_FoldView_layoutSubviews, (IMP *)&orig_FoldView_layoutSubviews},
        {"UIView", "layoutSubviews",
            (IMP)_hooked_UIView_layoutSubviews, (IMP *)&orig_UIView_layoutSubviews},
        {"NewMainFrameViewController", "tableView:viewForHeaderInSection:",
            (IMP)_hooked_NMFVC_viewForHeader, (IMP *)&orig_NMFVC_viewForHeader},
        {"MMTableSectionHeaderView", "setBackgroundImageView:",
            (IMP)_hooked_setBgImageView, (IMP *)&orig_setBgImageView},
    };

    [HookEngine installHookTable:@"ListCorner" items:items
                           count:sizeof(items) / sizeof(items[0])];

    // ProfileCardBgHook 的 Hook 已迁移到它自己的 install 方法中，
    // 由 HookRegistry 自动调用，不再需要手动调用
    // [ProfileCardBgHook initCellHeightHook];  ← 此行删除
}
```

`install` 方法保持不变（仍然调用 `initListCornerRadiusHook`）：

```objc
+ (void)install {
    [self initListCornerRadiusHook];
}
```

#### 4.2 RedEnvelopHook.m

**改造前**（~45 行，8 个 MSHookMessageEx 调用）：

```objc
+ (void)install {
    // ... 大量 MSHookMessageEx 调用 ...
    Class CMessageMgrClass = objc_getClass("CMessageMgr");
    if (CMessageMgrClass) {
        MSHookMessageEx(CMessageMgrClass, @selector(onNewSyncAddMessage:), ...);
        MSHookMessageEx(CMessageMgrClass, @selector(addMessageLibWithWrap:withVC:), ...);
        MSHookMessageEx(CMessageMgrClass, @selector(onNewSyncNotAddDBMessage:), ...);
        MSHookMessageEx(CMessageMgrClass, @selector(AddMsg:MsgWrap:), ...);
        MSHookMessageEx(CMessageMgrClass, @selector(AsyncOnAddMsg:MsgWrap:), ...);
    }
    Class WCRedLogicMgr = objc_getClass("WCRedEnvelopesLogicMgr");
    if (WCRedLogicMgr) {
        MSHookMessageEx(WCRedLogicMgr, @selector(OnWCToHongbaoCommonResponse:Request:), ...);
        MSHookMessageEx(WCRedLogicMgr, @selector(OnWCToHongbaoCommonResponse:Request:WithType:), ...);
    }
    Class detailVC = objc_getClass("WCRedEnvelopesRedEnvelopesDetailViewController");
    if (detailVC) {
        MSHookMessageEx(detailVC, @selector(viewDidLoad), ...);
    }
}
```

**改造后**（~22 行）：

```objc
+ (void)install {
    HookTableItem items[] = {
        {"CMessageMgr", "onNewSyncAddMessage:",
            (IMP)replaced_onNewSyncAddMessage, &orig_onNewSyncAddMessage},
        {"CMessageMgr", "addMessageLibWithWrap:withVC:",
            (IMP)replaced_addMessageLibWithWrap, &orig_addMessageLibWithWrap},
        {"CMessageMgr", "onNewSyncNotAddDBMessage:",
            (IMP)replaced_onNewSyncNotAddDBMessage, &orig_onNewSyncNotAddDBMessage},
        {"CMessageMgr", "AddMsg:MsgWrap:",
            (IMP)replaced_AddMsgMsgWrap, &orig_AddMsgMsgWrap},
        {"CMessageMgr", "AsyncOnAddMsg:MsgWrap:",
            (IMP)replaced_AsyncOnAddMsgMsgWrap, &orig_AsyncOnAddMsgMsgWrap},
        {"WCRedEnvelopesLogicMgr", "OnWCToHongbaoCommonResponse:Request:",
            (IMP)replaced_OnWCToHongbaoCommonResponse2, &orig_OnWCToHongbaoCommonResponse2},
        {"WCRedEnvelopesLogicMgr", "OnWCToHongbaoCommonResponse:Request:WithType:",
            (IMP)replaced_OnWCToHongbaoCommonResponse3, &orig_OnWCToHongbaoCommonResponse3},
        {"WCRedEnvelopesRedEnvelopesDetailViewController", "viewDidLoad",
            (IMP)replaced_DetailViewDidLoad, &orig_DetailViewDidLoad},
    };

    [HookEngine installHookTable:@"RedEnv" items:items
                           count:sizeof(items) / sizeof(items[0])];
}
```

#### ✅ Step 4 测试验证

| 测试编号 | 测试场景 | 操作步骤 | 预期结果 |
|---------|---------|---------|---------|
| T4-1 | 编译 | `Cmd+B` | 零 error、零 warning |
| T4-2 | 列表圆角 | 进入聊天列表 → 上下滑动 | 所有 Cell 圆角/边框正常 |
| T4-3 | 搜索框圆角 | 进入聊天列表 → 下拉出现搜索框 | 搜索框圆角正常 |
| T4-4 | 资料卡背景 | 进入联系人资料卡 | 背景图正常显示 |
| T4-5 | 自动抢红包 | 在群聊中收到一个红包 | 自动抢红包正常触发 |
| T4-6 | 红包详情 | 点击已抢红包 → 查看详情 | 红包详情页正常显示 |
| T4-7 | 日志验证 | 查看 Xcode Console | ListCorner 输出 8/8，CardBg 输出 2/2，RedEnv 输出 8/8 |

---

### Step 5：迁移特殊模块（混合模式 + 已有表驱动 + UI 净化）

**涉及文件**：
- `Modules/Layout/UIPurifyHook.m`（6 个直接 Hook 改造，10 个 purifySafeHook 保持不动）
- `Modules/MessageTime/MessageTimeHook.m`（6 个 Hook，从自建 MTHookEntry 切换到共用 HookTableItem）

**工作量**：**2 个文件**

#### 5.1 UIPurifyHook.m

UIPurifyHook 有三种 Hook 注册方式：
1. **6 个直接 `MSHookMessageEx` 调用** → 迁移到 HookTableItem
2. **10 个通过 `purifySafeHook` 注册** → **保持不动**（purifySafeHook 有特殊的父子类隔离需求）
3. **1 个 `WCColor` 类方法 Hook**（需要 metaclass） → 保持单独处理

**改造后**的 install 方法：

```objc
+ (void)install {
    UIPurifyConfig *config = [UIPurifyConfig shared];
    WPLog(@"UIPurify", @"install starting, hideSeparatorLine=%d", config.hideSeparatorLine);

    // ── 表驱动 Hook（标准 MSHookMessageEx）──
    HookTableItem items[] = {
        {"UITableView", "separatorColor",
            (IMP)replaced_separatorColor, &orig_separatorColor},
        {"UITableView", "separatorStyle",
            (IMP)replaced_separatorStyle, &orig_separatorStyle},
        {"VoiceMessageCellView", "layoutSubviews",
            (IMP)hook_VoiceMsgCell_layoutSubviews, (IMP *)&orig_VoiceMsgCell_layoutSubviews},
        {"YYAsyncImageView", "layoutSubviews",
            (IMP)hook_YYAsyncImg_layoutSubviews, (IMP *)&orig_YYAsyncImg_layoutSubviews},
        {"MMGrowTextViewExtConfig", "enableDictation",
            (IMP)hook_MMDictConfig_enableDictation, (IMP *)&orig_MMDictConfig_enableDictation},
    };
    [HookEngine installHookTable:@"UIPurify" items:items
                           count:sizeof(items) / sizeof(items[0])];

    // ── WCColor 类方法 Hook（需要特殊处理 metaclass，不适用表驱动）──
    Class wcColorClass = objc_getClass("WCColor");
    if (wcColorClass) {
        Class wcColorMeta = object_getClass(wcColorClass);
        MSHookMessageEx(wcColorMeta, @selector(seperatorColor),
            (IMP)replaced_wcColor_seperatorColor, &orig_wcColor_seperatorColor);
    }

    // ── 拍一拍（purifySafeHook 避免父子类交叉污染）── 保持不动
    // ── 撤回提示（purifySafeHook）── 保持不动
    // （以下 ~100 行代码完全不变）
}
```

**注意**：`purifySafeHook` 部分、WCColor 部分、以及对应的函数实现 `hook_AppPatCell_initWithViewModel` 等均**不修改**。

#### 5.2 MessageTimeHook.m

MessageTimeHook 已经使用表驱动方式，但用的是自己的 `MTHookEntry` 结构体（与 `HookTableItem` 完全一致）和手动 for 循环。

**改造目标**：删除 `MTHookEntry`，改用 `HookTableItem`，用 `[HookEngine installHookTable:]` 替换手动 for 循环。

**改造前**：

```objc
// 自定义结构体（与 HookTableItem 完全一样，需删除）
typedef struct {
    const char *className;
    const char *selName;
    IMP replacement;
    IMP *original;
} MTHookEntry;

// Hook 表
static MTHookEntry g_hookTable[] = {
    {"CommonMessageCellView", "initWithViewModel:", ...},
    {"CommonMessageCellView", "updateNodeStatus", ...},
    {"ChatTimeCellView", "layoutSubviews", ...},
    {"ChatTimeViewModel", "cellHeight", ...},
    {"CContact", "m_nsNickName", ...},
    {"TextMessageCellView", "setFrameForBgImageView:", ...},
};
static const int g_hookTableCount = sizeof(g_hookTable) / sizeof(g_hookTable[0]);

// install 中的手动循环
+ (void)install {
    // ... 日志 ...
    int hookedCount = 0;
    for (int i = 0; i < g_hookTableCount; i++) {
        MTHookEntry *entry = &g_hookTable[i];
        Class cls = objc_getClass(entry->className);
        // ... 50 行手工循环 ...
    }
}
```

**改造后**：

```objc
// 删除 MTHookEntry 结构体定义（第 16-21 行）
// 删除 g_hookTableCount 常量

// Hook 表 — 改用 HookTableItem 类型
static HookTableItem g_hookTable[] = {
    {"CommonMessageCellView", "initWithViewModel:",
        (IMP)repl_CommonMessageCellView_initWithViewModel, (IMP *)&orig_CommonMessageCellView_initWithViewModel},
    {"CommonMessageCellView", "updateNodeStatus",
        (IMP)repl_CommonMessageCellView_updateNodeStatus, (IMP *)&orig_CommonMessageCellView_updateNodeStatus},
    {"ChatTimeCellView", "layoutSubviews",
        (IMP)repl_ChatTimeCellView_layoutSubviews, (IMP *)&orig_ChatTimeCellView_layoutSubviews},
    {"ChatTimeViewModel", "cellHeight",
        (IMP)repl_ChatTimeViewModel_cellHeight, (IMP *)&orig_ChatTimeViewModel_cellHeight},
    {"CContact", "m_nsNickName",
        (IMP)repl_CContact_m_nsNickName, (IMP *)&orig_CContact_m_nsNickName},
    {"TextMessageCellView", "setFrameForBgImageView:",
        (IMP)repl_TextMsgCell_setFrameBgImg, (IMP *)&orig_TextMsgCell_setFrameBgImg},
};

+ (void)install {
    // 配置日志输出（保留，与 Hook 注册无关）
    WPLog(@"MsgTime", @"========================================");
    WPLog(@"MsgTime", @"MessageTimeHook install - ...");
    // ... 其他日志 ...

    // 替换为一行调用
    [HookEngine installHookTable:@"MsgTime" items:g_hookTable
                           count:sizeof(g_hookTable) / sizeof(g_hookTable[0])];

    // 完成日志（保留）
}
```

#### ✅ Step 5 测试验证

| 测试编号 | 测试场景 | 操作步骤 | 预期结果 |
|---------|---------|---------|---------|
| T5-1 | 编译 | `Cmd+B` | 零 error、零 warning |
| T5-2 | 分割线隐藏 | 打开隐藏分割线开关 → 进入聊天列表 | 分割线正确隐藏 |
| T5-3 | 拍一拍显示 | 在群聊中拍一拍某人 | 拍一拍提示正常显示 |
| T5-4 | 消息时间显示 | 进入聊天 → 收发消息 | 时间标签样式/位置正确 |
| T5-5 | 时间配置 | 修改时间格式/字号 → 重新进入聊天 | 时间标签按新配置显示 |
| T5-6 | 日志验证 | 查看 Xcode Console | UIPurify 输出 5/5，MsgTime 输出 6/6 |

---

### Step 6：全局编译验证 + 全功能回归测试

**涉及**：所有已改造的 12 个模块 + 3 个未改造模块

#### 6.1 不需要改动的模块

| 模块 | Hook 方式 | 不改的原因 |
|------|----------|-----------|
| `GroupExitHook.m` | `method_setImplementation` 直接替换 IMP | 非 MSHook 体系，不适用 |
| `SettingEntryHook.m` | `WCPluginsMgr` 动态注册入口 VC | 纯 runtime API，不适用 |
| `JokerHook.m` | `method_setImplementation` + `class_addMethod` | 非 MSHook 体系，不适用 |

这些模块的 `install` 方法保持原样，不受本改造影响。

#### 6.2 全局编译验证

| 操作 | 预期 |
|------|------|
| `Cmd+B` 编译 | 零 error、零 warning |
| 清理构建后编译（`Cmd+Shift+K` → `Cmd+B`） | 零 error、零 warning |

#### 6.3 全量回归测试清单

| 编号 | 功能域 | 操作步骤 | 预期结果 | 对应模块 |
|------|--------|---------|---------|---------|
| R01 | 聊天输入框 | 进入聊天 → 点击输入框 → 输入文字 → 清空 | 占位符正常 | PlaceholderText |
| R02 | 消息撤回 | 发消息 → 长按 → 撤回 | 撤回提示正常 | Revoke |
| R03 | 清除未读 | 列表页长按 → 清除未读 | 未读清除 | ClearUnread |
| R04 | 聊天顶部栏 | 进入聊天 → 查看顶部栏 | 样式正常 | ChatTopBar |
| R05 | 隐藏头像 | 开关打开 → 进入聊天 | 头像隐藏 | HideAvatar |
| R06 | 自动转账 | 收到转账 | 自动回复 | AutoTransfer |
| R07 | 列表圆角 | 进入列表 → 上下滑动 | 圆角正常 | ListCornerRadius |
| R08 | 资料卡背景 | 进入联系人资料卡 | 背景正常 | ProfileCardBg |
| R09 | 自动抢红包 | 群聊中收到红包 | 自动抢 | RedEnvelop |
| R10 | 消息时间 | 聊天中观察时间标签 | 位置/颜色正确 | MessageTime |
| R11 | 分割线隐藏 | 开关打开 → 观察列表 | 分割线消失 | UIPurify |
| R12 | 附件布局 | 点击「+」→ 选择附件 | 布局正常 | UIAttachLayout |
| R13 | 群成员变更 | 群聊中有人退出 | 退群提示 | GroupExit |
| R14 | 设置入口 | 进入微信设置 | 插件入口显示 | SettingEntry |
| R15 | 恶搞功能 | 各恶搞开关切换 | 功能正常 | Joker |
| R16 | 日志完整性 | 查看 Xcode Console | 每个模块都有 install 日志输出 | 全部 |

#### 6.4 日志输出示例

```
[MioPlugin] ========================================
[MioPlugin] ListCorner install: 安装 8 个 Hook
[MioPlugin] ========================================
[MioPlugin] [1/8] ✓ Hooked MMTableViewCell - layoutSubviews
[MioPlugin] [2/8] ✓ Hooked WCSearchBar - layoutSubviews
...
[MioPlugin] ListCorner install 完成: 8/8 个 Hook 成功
[MioPlugin] ========================================
```

每个改造模块的成功数应等于预期 Hook 数（100% 安装率）。如果某个类在微信中不存在，会输出 `类不存在: xxx，跳过` 并继续安装其他 Hook。

---

## 改动量统计

| 步骤 | 涉及文件 | 改动类型 | 行数变化 |
|------|---------|---------|:--------:|
| Step 1 | `Core/HookEngine.h` + `Core/HookEngine.m` | 新增 | **+50 行** |
| Step 2 | 4 个小模块 | 改造 | **-50 行** |
| Step 3 | 3 个中模块 | 改造 | **-60 行** |
| Step 4 | 3 个文件（2 模块 + 1 关联） | 改造 + 新增 | **-120 行** |
| Step 5 | 2 个特殊模块 | 改造 | **-70 行** |
| **总计** | **核心 2 个 + 12 个模块** | | **净减少约 -250 行** |

---

## 改造前后对比

### 改造前

```
每个模块的 install:
  Class cls = objc_getClass("XXX");
  if (cls) {
      MSHookMessageEx(cls, @selector(method), (IMP)repl, &orig);
      WPLog(@"Module", @"[OK] XXX::method");
  } else {
      WPLog(@"Module", @"[WARN] XXX class not found!");
  }
  // 重复 8 次 = 60 行样板代码
```

### 改造后

```
每个模块的 install:
  HookTableItem items[] = {
      {"XXX", "method", (IMP)repl, &orig},
      // 一行一个 Hook，8 个 = 10 行
  };
  [HookEngine installHookTable:@"Module" items:items count:sizeof(items)/sizeof(items[0])];
```

### 改造原则

1. **不改变任何 Hook 实现函数** — 只改 install 方法中的注册方式
2. **不改变量名、函数名** — `orig_xxx`、`replaced_xxx` 等完全不变
3. **不改业务逻辑** — 所有 Hook 函数体内的代码原封不动
4. **每步可独立编译验证** — 改完一个 Step 立刻编译测试，不累积错误