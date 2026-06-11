# P1-3 修复方案：统一 Hook 注册方式为表驱动

## 问题概述

当前项目中有 **2 种不同的 Hook 注册方式**，每种 Hook 注册需要 5-8 行样板代码，合计约 **300 行重复代码**：

| 方式 | 使用模块 | 数量 |
|------|---------|------|
| 结构体表驱动 `g_hookTable[]` + 循环 | 仅 `MessageTimeHook` | 6 个 Hook |
| 逐个 `MSHookMessageEx()` 调用 | 其余 **13 个模块** | ~50 个 Hook，约 300 行 |

### 逐个调用的问题

每个 Hook 需要写 **5-8 行**完全重复的样板代码，而且每个模块的 install 方法很难一眼看出这个模块 Hook 了哪些类和哪些方法。

### 表驱动的优点

- 一行定义一条 Hook，**一眼看清所有 Hook 目标**
- 统一错误处理（class 不存在、method 不存在自动跳过）
- 统一日志输出，方便调试
- 新增 Hook 只需加**一行数组条目**

---

## 方案设计

### 核心类型

在 `HookEngine.h` 中定义：

```objc
/// Hook 表条目（Objective-C 风格）
/// className  - 需要 Hook 的类名
/// selName    - 需要 Hook 的方法名
/// replacement - 替换后的 IMP
/// original   - 用于保存原始 IMP 的指针
typedef struct {
    NSString *className;
    NSString *selName;
    IMP replacement;
    IMP *original;
} HookTableItem;
```

使用 `NSString *` 而非 `const char *`，保持整个项目风格一致，且便于日志输出。

### 核心方法

```objc
/// 批量安装 Hook 表
/// @param moduleName  模块名称（显示在日志中）
/// @param items       HookTableItem 数组
/// @param count       数组元素个数
/// @return 成功安装的 Hook 数量
/// 
/// 使用示例：
///   HookTableItem items[] = {
///       {@"MMTableViewCell", @"layoutSubviews", (IMP)hooked_func, &orig_func},
///   };
///   [HookEngine installHookTable:@"MyModule" items:items count:sizeof(items)/sizeof(items[0])];
+ (int)installHookTable:(NSString *)moduleName items:(HookTableItem *)items count:(int)count;
```

---

## 详细步骤

### Step 1：修改 HookEngine.h

**当前代码**：

```objc
#import <Foundation/Foundation.h>
#import <objc/runtime.h>

@interface HookEngine : NSObject
+ (IMP)swizzleMethod:(SEL)sel inClass:(Class)cls withIMP:(IMP)newIMP;
+ (void)swizzleMethod:(SEL)sel inClass:(Class)cls withBlock:(id)block;
+ (BOOL)addOrSwizzleMethod:(SEL)sel
                   inClass:(Class)cls
                   withIMP:(IMP)newIMP
              typeEncoding:(const char *)typeEncoding
               originalIMP:(IMP *)outOrigIMP;
@end
```

**修改后**：

```objc
#import <Foundation/Foundation.h>
#import <objc/runtime.h>

// ============================================================
// MARK: - Hook Table Item
// ============================================================

/// Hook 表条目：描述一个需要 Hook 的方法
/// className    - 类名（用于 objc_getClass）
/// selName      - 方法名（用于 sel_registerName）
/// replacement  - 替换后的 IMP
/// original     - 保存原始 IMP 的指针
/// 
/// 使用示例：
///   HookTableItem items[] = {
///       {@"MMTableViewCell", @"layoutSubviews", (IMP)hooked_func, &orig_func},
///   };
typedef struct {
    __unsafe_unretained NSString *className;
    __unsafe_unretained NSString *selName;
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
/// 功能说明：
/// 1. 遍历 HookTableItem 数组，逐条执行 MSHookMessageEx
/// 2. 如果类不存在，自动跳过并记录日志
/// 3. 如果方法不存在，自动跳过并记录日志
/// 4. 安装完成后输出汇总统计
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

### Step 2：修改 HookEngine.m 添加实现

**当前代码**：仅有 swizzle 方法

**新增实现**（放在 `@implementation HookEngine` 中）：

```objc
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

        // 2. 获取类
        Class cls = objc_getClass([item->className UTF8String]);
        if (!cls) {
            WPLog(moduleName, @"[%d/%d] 类不存在: %@，跳过", i + 1, count, item->className);
            continue;
        }

        // 3. 检查方法是否存在
        SEL sel = sel_registerName([item->selName UTF8String]);
        Method method = class_getInstanceMethod(cls, sel);
        if (!method) {
            WPLog(moduleName, @"[%d/%d] 方法不存在: %@ - %@，跳过", i + 1, count, item->className, item->selName);
            continue;
        }

        // 4. 执行 Hook
        MSHookMessageEx(cls, sel, item->replacement, item->original);

        WPLog(moduleName, @"[%d/%d] ✓ Hooked %@ - %@", i + 1, count, item->className, item->selName);
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
```

**注意**：需要在文件顶部添加 `#import "substrate.h"`（如果尚未引入）或在 build settings 中确保 substrate 链接正确。

### Step 3：依次改造每个模块

改造的基本原则：
1. **不改变任何 Hook 实现函数**（`replaced_xxx`、`hook_xxx` 等）
2. **只改 install 方法**（如何注册 Hook）
3. **不需要添加新的 import**（HookEngine.h 已在 Core 中）

#### 改造示例 A：PlaceholderTextHook.m（1 个 Hook，最简单的）

**当前 install 方法**（~20行）：

```objc
+ (void)install {
    WPLog(@"PlaceholderText", @"PlaceholderTextHook install");

    Class growTextViewClass = objc_getClass("MMGrowTextView");
    if (growTextViewClass) {
        MSHookMessageEx(
            growTextViewClass,
            @selector(layoutSubviews),
            (IMP)hook_MMGrowTextView_layoutSubviews,
            (IMP *)&_orig_MMGrowTextView_layoutSubviews
        );
        WPLog(@"PlaceholderText", @"Hooked MMGrowTextView.layoutSubviews ✓");
    } else {
        WPLog(@"PlaceholderText", @"MMGrowTextView class not found, skipping");
    }
}
```

**修改后**（~6行）：

```objc
+ (void)install {
    HookTableItem items[] = {
        {@"MMGrowTextView", @"layoutSubviews",
            (IMP)hook_MMGrowTextView_layoutSubviews, (IMP *)&_orig_MMGrowTextView_layoutSubviews},
    };

    [HookEngine installHookTable:@"PlaceholderText" items:items
                           count:sizeof(items) / sizeof(items[0])];
}
```

**变化**：-14 行，功能等价。

#### 改造示例 B：ClearUnreadHook.m（2 个 Hook）

**当前 install 方法**（~35行）：

```objc
+ (void)install {
    WPLog(@"ClearUnread", @"ClearUnreadHook install");

    // hook NewMainFrameViewController
    Class mainFrameVCClass = objc_getClass("NewMainFrameViewController");
    if (mainFrameVCClass) {
        MSHookMessageEx(mainFrameVCClass, @selector(init),
            (IMP)hooked_NewMainFrameViewController_init,
            (IMP *)&orig_NewMainFrameViewController_init);
        WPLog(@"ClearUnread", @"Hooked NewMainFrameViewController.init ✓");
    }

    // hook MMTableView
    Class mmTableViewClass = objc_getClass("MMTableView");
    if (mmTableViewClass) {
        MSHookMessageEx(mmTableViewClass, @selector(layoutSubviews),
            (IMP)hooked_MMTableView_layoutSubviews,
            (IMP *)&orig_MMTableView_layoutSubviews);
        WPLog(@"ClearUnread", @"Hooked MMTableView.layoutSubviews ✓");
    }
}
```

**修改后**（~10行）：

```objc
+ (void)install {
    HookTableItem items[] = {
        {@"NewMainFrameViewController", @"init",
            (IMP)hooked_NewMainFrameViewController_init, &orig_NewMainFrameViewController_init},
        {@"MMTableView", @"layoutSubviews",
            (IMP)hooked_MMTableView_layoutSubviews, &orig_MMTableView_layoutSubviews},
    };

    [HookEngine installHookTable:@"ClearUnread" items:items
                           count:sizeof(items) / sizeof(items[0])];
}
```

**变化**：-25 行。

#### 改造示例 C：AutoTransferHook.m（6 个 Hook + 自定义日志）

**当前 install 方法**（~90行）：

```objc
+ (void)install {
    WPLog(@"AutoTransfer", @"AutoTransferHook install");

    Class CMessageMgrClass = objc_getClass("CMessageMgr");
    if (CMessageMgrClass) {
        MSHookMessageEx(CMessageMgrClass, @selector(AddMsg:MsgWrap:),
            (IMP)replaced_at_AddMsgMsgWrap, &orig_at_AddMsgMsgWrap);
        WPLog(@"AutoTransfer", @"[+] AddMsg:MsgWrap: hooked");

        MSHookMessageEx(CMessageMgrClass, @selector(AsyncOnAddMsg:MsgWrap:),
            (IMP)replaced_at_AsyncOnAddMsgMsgWrap, &orig_at_AsyncOnAddMsgMsgWrap);
        WPLog(@"AutoTransfer", @"[+] AsyncOnAddMsg:MsgWrap: hooked");
    }

    Class WCBaseTVMsgHandlerClass = objc_getClass("WCBaseTVMsgHandler");
    if (WCBaseTVMsgHandlerClass) {
        // ... 每个 hook 都一样模式
    }

    // ... 更多 hook 注册
}
```

**修改后**（~20行）：

```objc
+ (void)install {
    HookTableItem items[] = {
        {@"CMessageMgr", @"AddMsg:MsgWrap:",
            (IMP)replaced_at_AddMsgMsgWrap, &orig_at_AddMsgMsgWrap},
        {@"CMessageMgr", @"AsyncOnAddMsg:MsgWrap:",
            (IMP)replaced_at_AsyncOnAddMsgMsgWrap, &orig_at_AsyncOnAddMsgMsgWrap},
        {@"WCBaseTVMsgHandler", @"onNewSyncAddMessage:",
            (IMP)replaced_at_onNewSyncAddMessage, &orig_at_onNewSyncAddMessage},
        {@"MMNewSessionMgr", @"onNewSyncAddMessage:",
            (IMP)replaced_at_onNewSyncAddMessage2, &orig_at_onNewSyncAddMessage2},
        {@"BaseMsgHandler", @"onNewSyncAddMessage:",
            (IMP)replaced_at_onNewSyncAddMessage3, &orig_at_onNewSyncAddMessage3},
        {@"CMessageMgr", @"onNewSyncAddMessage:",
            (IMP)replaced_at_onNewSyncAddMessage4, &orig_at_onNewSyncAddMessage4},
    };

    [HookEngine installHookTable:@"AutoTransfer" items:items
                           count:sizeof(items) / sizeof(items[0])];
}
```

**变化**：-70 行。

#### 改造示例 D：MessageTimeHook.m（已有表驱动，改为通用类型）

**当前代码**：

```objc
// 自定义结构体（需删除）
typedef struct {
    const char *className;
    const char *selName;
    IMP replacement;
    IMP *original;
} MTHookEntry;

// Hook 表
static MTHookEntry g_hookTable[] = {
    {"CommonMessageCellView", "initWithViewModel:", ...},
    // ... 6 个条目
};
static const int g_hookTableCount = sizeof(g_hookTable) / sizeof(g_hookTable[0]);

// install 中的手动循环
for (int i = 0; i < g_hookTableCount; i++) {
    MTHookEntry *entry = &g_hookTable[i];
    Class cls = objc_getClass(entry->className);
    // ... 50 行手工循环
}
```

**修改后**：

```objc
static HookTableItem g_hookTable[] = {
    // 注意：className 从 "..." 改为 @"..."（NSString *）
    {@"CommonMessageCellView", @"initWithViewModel:",
        (IMP)repl_CommonMessageCellView_initWithViewModel, (IMP *)&orig_CommonMessageCellView_initWithViewModel},
    {@"CommonMessageCellView", @"updateNodeStatus",
        (IMP)repl_CommonMessageCellView_updateNodeStatus, (IMP *)&orig_CommonMessageCellView_updateNodeStatus},
    {@"ChatTimeCellView", @"layoutSubviews",
        (IMP)repl_ChatTimeCellView_layoutSubviews, (IMP *)&orig_ChatTimeCellView_layoutSubviews},
    {@"ChatTimeViewModel", @"cellHeight",
        (IMP)repl_ChatTimeViewModel_cellHeight, (IMP *)&orig_ChatTimeViewModel_cellHeight},
    {@"CContact", @"m_nsNickName",
        (IMP)repl_CContact_m_nsNickName, (IMP *)&orig_CContact_m_nsNickName},
    {@"TextMessageCellView", @"setFrameForBgImageView:",
        (IMP)repl_TextMsgCell_setFrameBgImg, (IMP *)&orig_TextMsgCell_setFrameBgImg},
};

+ (void)install {
    // ... 配置日志输出（保留，与 Hook 注册无关）

    [HookEngine installHookTable:@"MsgTime" items:g_hookTable
                           count:sizeof(g_hookTable) / sizeof(g_hookTable[0])];

    // ... 完成日志（保留）
}
```

**变化**：删除 `MTHookEntry`（6行）+ 删除手工循环（27行）+ 删除 `g_hookTableCount`（1行），共 **-34 行**。

#### 改造示例 E：RedEnvelopHook.m（9 个 Hook + 需要保留 class 检查日志）

如果某个模块需要对缺失的 class 做特殊处理（不满足于自动跳过），可以使用单个安装方法：

```objc
+ (void)install {
    // 关键 class 检查（如果不存在则需要特殊处理）
    Class CMessageMgrClass = objc_getClass("CMessageMgr");
    if (!CMessageMgrClass) {
        WPLog(@"RedEnv", @"⚠️ 关键类 CMessageMgr 不存在，部分 Hook 可能失败");
    }

    HookTableItem items[] = {
        {@"CMessageMgr", @"AddMsg:MsgWrap:",
            (IMP)replaced_AddMsgMsgWrap, &orig_AddMsgMsgWrap},
        {@"CMessageMgr", @"AsyncOnAddMsg:MsgWrap:",
            (IMP)replaced_AsyncOnAddMsgMsgWrap, &orig_AsyncOnAddMsgMsgWrap},
        {@"WCBaseTVMsgHandler", @"onNewSyncAddMessage:",
            (IMP)replaced_OnNewSyncAddMessage, &orig_OnNewSyncAddMessage},
        // ... 7 个更多条目
    };

    [HookEngine installHookTable:@"RedEnv" items:items
                           count:sizeof(items) / sizeof(items[0])];
}
```

---

### Step 4：删除 MessageTimeHook.m 的手工循环

改造完所有模块后，将 `MessageTimeHook.m` 中的以下代码删除：

1. `MTHookEntry` 结构体定义（第16-21行）→ 使用 `HookTableItem`
2. `g_hookTableCount` 常量和 `sizeof` 计算（第607行）→ 在 install 中内联
3. `for` 循环 + `objc_getClass` + `class_getInstanceMethod` + 日志（第629-653行）→ 替换为 `[HookEngine installHookTable:]`

---

## 代码量变化

| 操作 | 行数 |
|------|------|
| `HookEngine.h` 新增 | +45 行 |
| `HookEngine.m` 新增 | +70 行 |
| 13 个模块改造 | -250 行 |
| `MessageTimeHook.m` 改造 | -34 行 |
| **净减少** | **-169 行** |

---

## 每个模块的改造要点

| 模块 | Hook 数 | 改造难点 | 注意事项 |
|------|---------|---------|---------|
| `PlaceholderTextHook` | 1 | 最简单，可直接改造 | 无 |
| `RevokeHook` | 1 | 同左 | 无 |
| `ClearUnreadHook` | 2 | 简单 | 无 |
| `ChatTopBarHook` | 3 | 中等 | className 注意引号格式 |
| `HideAvatarHook` | 3 | 中等 | 无 |
| `ProfileCardBgHook` | 4 | 中等 | 无 |
| `AutoTransferHook` | 6 | 中等 | 注意 `orig_at_` 前缀的变量名 |
| `ListCornerRadiusHook` | 8 | 中等 | 每个都是 layoutSubviews，可能需排查是否混用 | 
| `RedEnvelopHook` | 9 | 较多 | 可保留关键 class 检查（如 CMessageMgr）|
| `MessageTimeHook` | 6 | 已有表驱动 | 删除自定义 MTHookEntry + 手工循环 |
| `UIPurifyHook` | ~30 | 最多 | 建议分批改造，每次 5-10 个 |
| `UIAttachLayoutHook` | ~8 | 中等 | 注意 `__orig_` 前缀 |
| `HookEngine+WCDependency` | 1 | 简单 | 无 |

---

## 测试验证

### 测试原则

1. **改一个模块，测一个模块** — 不要一次性改完再测试
2. **先改最简单的**（PlaceholderTextHook），验证方法可行后，再推广
3. **每改 2-3 个模块做一次全功能回归**

### 推荐改造顺序

| 顺序 | 模块 | 预计耗时 | 影响面 |
|------|------|---------|--------|
| **阶段一：验证可行性** |
| 1 | `PlaceholderTextHook` | 2 分钟 | 极小 |
| 2 | `RevokeHook` | 2 分钟 | 极小 |
| **阶段二：批量改造** |
| 3 | `ClearUnreadHook` | 3 分钟 | 小 |
| 4 | `ChatTopBarHook` | 3 分钟 | 小 |
| 5 | `HideAvatarHook` | 3 分钟 | 小 |
| 6 | `ProfileCardBgHook` | 3 分钟 | 小 |
| 7 | `AutoTransferHook` | 5 分钟 | 中 |
| 8 | `ListCornerRadiusHook` | 5 分钟 | 中 |
| 9 | `MessageTimeHook` | 5 分钟 | 中（仅改类型名称） |
| 10 | `RedEnvelopHook` | 5 分钟 | 较大 |
| 11 | `UIAttachLayoutHook` | 5 分钟 | 较大 |
| 12 | `UIPurifyHook` | 15 分钟 | 大（Hook 最多） |

### 阶段一测试步骤（PlaceholderTextHook）

**准备**：
1. 打开 Xcode 项目
2. 修改 `PlaceholderTextHook.m` 的 install 方法
3. 编译运行（⌘R）

**功能测试**：
1. 在 iOS 设备或模拟器上启动微信
2. 进入任意一个聊天会话
3. 点击文字输入框，焦点进入
4. 观察占位符文字是否正常显示
5. 输入文字，观察占位符是否正常消失
6. 清空文字，观察占位符是否重新出现

**验证通过标准**：占位符行为与改造前完全一致。

### 阶段二测试步骤（批量改造后，选择代表性模块）

**RedEnvelopHook 测试**：
1. 编译并启动项目
2. 在群聊中接收一个红包
3. 观察自动抢红包功能是否正常触发
4. 检查日志输出中是否包含 `[RedEnv] ✓ Hooked xxx - xxx` 字样

**AutoTransferHook 测试**：
1. 编译并启动项目
2. 让朋友发一个转账
3. 观察自动转账回复是否正常
4. 检查日志输出中是否包含 `[AutoTransfer] ✓ Hooked xxx - xxx` 字样

**MessageTimeHook 测试**：
1. 编译并启动项目
2. 进入聊天界面
3. 观察消息时间标签是否正常显示
4. 观察气泡布局是否正确

### 完整回归测试清单

| 测试编号 | 测试场景 | 操作步骤 | 预期结果 |
|---------|---------|---------|---------|
| T1 | 聊天输入框 | 进入聊天 → 点击输入框 → 输入文字 → 清空 | 占位符正常显示/隐藏 |
| T2 | 聊天列表圆角 | 进入聊天列表 → 上下滑动 | 所有 Cell 圆角正常 |
| T3 | 聊天顶部栏 | 进入聊天 → 观察顶部栏 | 顶部栏标题/样式正常 |
| T4 | 消息时间显示 | 进入聊天 → 收发消息 | 时间标签样式/位置正确 |
| T5 | 自动抢红包 | 在群聊中收到红包 | 自动抢红包正常触发 |
| T6 | 自动转账回复 | 收到转账 | 自动转账+回复正常 |
| T7 | 撤回提示 | 发送消息 → 撤回 | 撤回提示正常显示 |
| T8 | 退群通知 | 触发退群操作 | 退群通知正常插入 |
| T9 | 清除未读 | 在列表页点击清除未读 | 未读标记清除 |
| T10 | UI 净化 | 打开 UI 净化开关 → 观察聊天界面 | 界面元素按配置隐藏 |
| T11 | 附件布局 | 发送图片/文件 | 附件布局正常 |
| T12 | 资料卡背景 | 进入联系人的资料卡 | 背景图正常显示 |
| T13 | 忽略头像 | 打开忽略头像开关 | 头像按配置显示/隐藏 |
| T14 | 日志输出 | 编译后查看 Console | 每个模块输出 `[模块名] ✓ Hooked xxx` 日志 |

### 改造完成后的检查方法

编译后，在 Xcode Console 中搜索日志 `installHookTable:`，应该看到每个改造模块的输出：

```
[MioPlugin] ========================================
[MioPlugin] AutoTransfer install: 安装 6 个 Hook
[MioPlugin] ========================================
[MioPlugin] [1/6] ✓ Hooked CMessageMgr - AddMsg:MsgWrap:
[MioPlugin] [2/6] ✓ Hooked CMessageMgr - AsyncOnAddMsg:MsgWrap:
[MioPlugin] [3/6] ✓ Hooked WCBaseTVMsgHandler - onNewSyncAddMessage:
...
[MioPlugin] AutoTransfer install 完成: 6/6 个 Hook 成功
[MioPlugin] ========================================
```

**每个模块的失败数应为 0**。如果某些 Hook 失败（如类不存在），说明该 Hook 在改造前就是无效的（从未生效过），改造前后行为一致，**不影响功能**。

---

## 附录：完整的 HookEngine.h 最终代码

```objc
#import <Foundation/Foundation.h>
#import <objc/runtime.h>

// ============================================================
// MARK: - Hook Table Item
// ============================================================

typedef struct {
    __unsafe_unretained NSString *className;
    __unsafe_unretained NSString *selName;
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
+ (int)installHookTable:(NSString *)moduleName items:(HookTableItem *)items count:(int)count;

/// 安装单个 Hook（兼容旧写法）
+ (BOOL)installHookForClass:(NSString *)className
                     method:(NSString *)methodName
                replacement:(IMP)replacement
                   original:(IMP *)originalPtr
                 moduleName:(NSString *)moduleName;

// 原有方法
+ (IMP)swizzleMethod:(SEL)sel inClass:(Class)cls withIMP:(IMP)newIMP;
+ (void)swizzleMethod:(SEL)sel inClass:(Class)cls withBlock:(id)block;
+ (BOOL)addOrSwizzleMethod:(SEL)sel
                   inClass:(Class)cls
                   withIMP:(IMP)newIMP
              typeEncoding:(const char *)typeEncoding
               originalIMP:(IMP *)outOrigIMP;

@end
```