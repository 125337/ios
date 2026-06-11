# P1-3 修复方案：统一 Hook 注册方式为表驱动

## 问题概述

当前项目中有 **2 种不同的 Hook 注册方式**：

| 方式 | 使用模块 | 特点 |
|------|---------|------|
| 结构体表驱动 `g_hookTable[]` + 循环 | 仅 `MessageTimeHook` | ✅ 声明式、易扩展、自文档 |
| 逐个 `MSHookMessageEx()` 调用 | 其余 **13 个模块** | ❌ 重复样板代码、难维护 |

### 表驱动方式的优点

```objc
// MessageTimeHook.m 当前实现（612-619行）
static MTHookEntry g_hookTable[] = {
    {"CommonMessageCellView", "initWithViewModel:",     (IMP)repl_xxx, (IMP*)&orig_xxx},
    {"CommonMessageCellView", "updateNodeStatus",       (IMP)repl_xxx, (IMP*)&orig_xxx},
    {"ChatTimeCellView",      "layoutSubviews",          (IMP)repl_xxx, (IMP*)&orig_xxx},
    // ... 共6个hook
};
```

对比逐个调用：

```objc
// 其他模块的典型写法（单个hook就需要5-8行样板代码）
Class cls = objc_getClass("SomeClass");
if (cls) {
    MSHookMessageEx(cls, @selector(someMethod:),
        (IMP)replaced_someMethod, (IMP *)&orig_someMethod);
}
```

### 涉及修改的文件

| 文件 | 当前 Hook 数量 | 改造后行数变化 |
|------|--------------|-------------|
| `PlaceholderText/PlaceholderTextHook.m` | 1个 | -6行 |
| `ListCornerRadius/ListCornerRadiusHook.m` | 8个 | -40行 |
| `ProfileCardBg/ProfileCardBgHook.m` | 需检查 | 显著减少 |
| `ChatTopBar/ChatTopBarHook.m` | 需检查 | 显著减少 |
| `RedEnvelop/RedEnvelopHook.m` | 9个 | -50行 |
| `AutoTransfer/AutoTransferHook.m` | 6个 | -30行 |
| `Revoke/RevokeHook.m` | 1个 | -6行 |
| `ClearUnread/ClearUnreadHook.m` | 2个 | -12行 |
| `Layout/UIPurifyHook.m` | ~30个 | -150+行 |
| `Layout/UIAttachLayoutHook.m` | 需检查 | 显著减少 |
| `HideAvatar/HideAvatarHook.m` | 需检查 | 显著减少 |

---

## 目标

- 定义全局通用的 HookEntry 结构和安装函数
- 所有模块改为表驱动方式注册
- 消除 ~300 行重复的 `MSHookMessageEx` 样板代码

---

## 详细修改步骤

### Step 1：在 HookEngine 中定义通用 HookEntry

**文件**: `Core/HookEngine.h`

在 `@interface HookEngine` 之前或之后添加：

```objc
/// Hook 表条目：描述一个需要 Hook 的方法
/// className  - 类名（C 字符串，用于 objc_getClass）
/// selName    - 方法名（C 字符串，用于 sel_registerName）
/// replacement - 替换 IMP
/// original   - 原始 IMP 输出指针
typedef struct {
    const char *className;
    const char *selName;
    IMP replacement;
    IMP *original;
} HookEntry;

/// 安装 Hook 表
/// @param table  HookEntry 数组
/// @param count  数组元素个数
/// @param moduleName  模块名称（用于日志）
/// @return 成功安装的 Hook 数量
int installHookTable(HookEntry table[], int count, NSString *moduleName);
```

如果希望保留 Objective-C 风格，也可以声明为类方法：

```objc
@interface HookEngine : NSObject

/// 安装 Hook 表（类方法版本）
/// @param table  HookEntry 数组
/// @param count  数组元素个数
/// @param moduleName  模块名称（用于日志）
/// @return 成功安装的 Hook 数量
+ (int)installHookTable:(HookEntry *)table count:(int)count moduleName:(NSString *)moduleName;

// 现有方法保持不变
+ (IMP)swizzleMethod:(SEL)sel inClass:(Class)cls withIMP:(IMP)newIMP;
+ (void)swizzleMethod:(SEL)sel inClass:(Class)cls withBlock:(id)block;
+ (BOOL)addOrSwizzleMethod:(SEL)sel inClass:(Class)cls withIMP:(IMP)newIMP typeEncoding:(const char *)typeEncoding originalIMP:(IMP *)outOrigIMP;

@end
```

### Step 2：在 HookEngine.m 中实现 installHookTable

**文件**: `Core/HookEngine.m`

在 `@implementation HookEngine` 中添加：

```objc
+ (int)installHookTable:(HookEntry *)table count:(int)count moduleName:(NSString *)moduleName {
    int hookedCount = 0;

    WPLog(moduleName, @"========================================");
    WPLog(moduleName, @"%@ install - installing %d hooks", moduleName, count);
    WPLog(moduleName, @"========================================");

    for (int i = 0; i < count; i++) {
        HookEntry *entry = &table[i];

        Class cls = objc_getClass(entry->className);
        if (!cls) {
            WPLog(moduleName, @"Class not found: %s, skipping", entry->className);
            continue;
        }

        SEL sel = sel_registerName(entry->selName);
        Method m = class_getInstanceMethod(cls, sel);
        if (!m) {
            WPLog(moduleName, @"Method not found: %s - %s, skipping", entry->className, entry->selName);
            continue;
        }

        MSHookMessageEx(cls, sel, entry->replacement, entry->original);

        WPLog(moduleName, @"Hooked %s - %s ✓", entry->className, entry->selName);
        hookedCount++;
    }

    WPLog(moduleName, @"Hook table complete: %d/%d", hookedCount, count);
    WPLog(moduleName, @"========================================");
    return hookedCount;
}
```

如果选择C函数版本（不依赖类方法）:

```objc
// HookEngine.m 顶部（@implementation 之外）
int installHookTable(HookEntry table[], int count, NSString *moduleName) {
    int hookedCount = 0;
    // ... 同上实现 ...
    return hookedCount;
}
```

### Step 3：依次改造每个模块

以 `PlaceholderTextHook.m` 为例（最简单的，只有1个 Hook）：

**修改前**（install 方法）：

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

**修改后**：

```objc
+ (void)install {
    HookEntry table[] = {
        {"MMGrowTextView", "layoutSubviews",
            (IMP)hook_MMGrowTextView_layoutSubviews, (IMP *)&_orig_MMGrowTextView_layoutSubviews},
    };

    [HookEngine installHookTable:table count:sizeof(table)/sizeof(table[0])
                      moduleName:@"PlaceholderText"];
}
```

以 `ListCornerRadiusHook.m` 为例（多个 Hook）：

**修改前**：~50行逐个 MSHookMessageEx，每个带 class 检查 + 日志 + 3行注册

**修改后**：

```objc
+ (void)install {
    HookEntry table[] = {
        {"MMTableViewCell",    "layoutSubviews",   (IMP)_hooked_MMTableViewCell_layoutSubviews,    (IMP*)&_orig_MMTableViewCell_layoutSubviews},
        {"WCSearchBar",        "layoutSubviews",   (IMP)_hooked_WCSearchBar_layoutSubviews,        (IMP*)&_orig_WCSearchBar_layoutSubviews},
        {"MFWebMMBtn",         "layoutSubviews",   (IMP)_hooked_MFWebMMBtn_layoutSubviews,         (IMP*)&_orig_MFWebMMBtn_layoutSubviews},
        {"MFBannerBtn",        "layoutSubviews",   (IMP)_hooked_MFBannerBtn_layoutSubviews,        (IMP*)&_orig_MFBannerBtn_layoutSubviews},
        {"FoldView",           "layoutSubviews",   (IMP)_hooked_FoldView_layoutSubviews,           (IMP*)&_orig_FoldView_layoutSubviews},
        {"UIView",             "layoutSubviews",   (IMP)_hooked_UIView_layoutSubviews,             (IMP*)&_orig_UIView_layoutSubviews},
        {"NewMainFrameVC",     "viewForHeaderInSection:",
                                                      (IMP)_hooked_NMFVC_viewForHeader,            (IMP*)&_orig_NMFVC_viewForHeader},
        // ... 其他 hook 条目
    };

    [HookEngine installHookTable:table count:sizeof(table)/sizeof(table[0])
                      moduleName:@"ListCornerRadius"];
}
```

### Step 4：删除 MessageTimeHook 的自定义 MTHookEntry

改造完成后，`MessageTimeHook.m` 中的 `MTHookEntry` 结构体和手工循环也可以删除，改为使用通用的 `HookEngine`：

**修改前**：

```objc
typedef struct {
    const char *className;
    const char *selName;
    IMP replacement;
    IMP *original;
} MTHookEntry;

static MTHookEntry g_hookTable[] = { ... };
static const int g_hookTableCount = sizeof(g_hookTable) / sizeof(g_hookTable[0]);

// 手工循环 + MSHookMessageEx 调用
```

**修改后**：

```objc
#import "../../Core/HookEngine.h"  // 如果还没有

static HookEntry g_hookTable[] = { ... };  // 类型从 MTHookEntry 改为 HookEntry

// install 方法中
[HookEngine installHookTable:g_hookTable count:sizeof(g_hookTable)/sizeof(g_hookTable[0])
                  moduleName:@"MsgTime"];
```

**额外好处**: 删除 `MTHookEntry` 自定义结构体（~6行）+ 删除手工循环（~27行）。

---

## 代码量变化

| 文件 | 操作 | 预估行数变化 |
|------|------|------------|
| `Core/HookEngine.h` | 新增 HookEntry 结构体 + installHookTable 声明 | +8行 |
| `Core/HookEngine.m` | 新增 installHookTable 实现 | +35行 |
| 13个模块文件 | 逐个改造 | **-300行（预估）** |
| `MessageTimeHook.m` | 删除 MTHookEntry + 手工循环 | -33行 |
| **净减少** | | **-290行（预估）** |

---

## 测试验证

### 功能测试

| 测试用例 | 操作 | 预期结果 |
|---------|------|---------|
| 1. 编译 | 改造后编译项目 | 编译成功，无警告 |
| 2. 单模块验证 | 先改造1个模块（如 PlaceholderText），编译测试 | 该模块功能正常 |
| 3. 批量验证 | 改造3-4个模块后编译测试 | 所有改造模块功能正常 |
| 4. 全量验证 | 全部改造完成后编译 | 所有 Hook 功能正常 |

### 推荐改造顺序

| 顺序 | 模块 | 风险 | 理由 |
|------|------|------|------|
| 1 | `PlaceholderTextHook.m` | 低 | 只有1个 Hook，改造成本最低 |
| 2 | `ClearUnreadHook.m` | 低 | 2个 Hook |
| 3 | `RevokeHook.m` | 低 | 1个 Hook |
| 4 | `MessageTimeHook.m` | 中 | 已有表驱动，只需改类型名 |
| 5 | `ChatTopBarHook.m` | 中 | 中等数量 |
| 6 | `HideAvatarHook.m` | 中 | 中等数量 |
| 7 | `ListCornerRadiusHook.m` | 中 | 8个 Hook，但都是 layoutSubviews |
| 8 | `AutoTransferHook.m` | 中 | 6个 Hook |
| 9 | `ProfileCardBgHook.m` | 中 | 中等数量 |
| 10 | `RedEnvelopHook.m` | 高 | 9个 Hook，影响群红包功能 |
| 11 | `UIPurifyHook.m` | 高 | ~30个 Hook，最多 |
| 12 | `UIAttachLayoutHook.m` | 中 | 中等数量 |

**建议每个模块改造后单独编译验证通过，再进行下一个。**

### 回归测试

| 场景 | 受影响功能 | 验证方法 |
|------|-----------|---------|
| 聊天输入占位符 | PlaceholderTextHook | 进入聊天 → 输入文字 |
| 聊天列表圆角 | ListCornerRadiusHook | 进入聊天列表 |
| 自动抢红包 | RedEnvelopHook | 收到群红包 |
| 自动转账 | AutoTransferHook | 收到转账 |
| 消息时间显示 | MessageTimeHook | 进入聊天 |
| 撤回提示 | RevokeHook | 撤回消息 |
| UI净化 | UIPurifyHook | 打开 UI 净化功能 |
| 清除未读 | ClearUnreadHook | 点击清除未读 |