# 左滑菜单 Hook 问题分析与解决方案

> 分析日期: 2026-05-10
> 问题: 左滑菜单不工作，日志只有安装阶段记录

---

## 一、问题现象

### 1.1 日志分析

```
[install] === START (Swipe Actions) ===
[install] found class: MainFrameTableView
[install] ✓ added trailingSwipeActionsConfigurationForRowAtIndexPath: to MainFrameTableView
[install] === COMPLETE ===
```

### 1.2 问题

日志只有安装阶段，**缺少运行时日志**：
- ❌ 没有 `[setDataSource]` 日志
- ❌ 没有 `[canEditRow]` 日志
- ❌ 没有 `[trailingSwipe]` 日志

---

## 二、根本原因

### 2.1 Hook 的类不对

**`trailingSwipeActionsConfigurationForRowAtIndexPath:` 是 UITableViewDataSource 协议方法，应该由 DataSource 实现，而不是 TableView！**

```
❌ 错误的做法：
┌─────────────────────────────────────┐
│  MainFrameTableView (UITableView)   │  ← 你 Hook 了这个类
│  - trailingSwipeActions... ❌       │  ← TableView 不应该实现这个方法
└─────────────────────────────────────┘

✅ 正确的做法：
┌─────────────────────────────────────┐
│  MainFrameTableView (UITableView)   │  ← 只是显示视图
│  dataSource = NewMainFrameViewController
└─────────────────────────────────────┘
           ↓ dataSource
┌─────────────────────────────────────┐
│  NewMainFrameViewController         │  ← DataSource，应该 Hook 这个类
│  - trailingSwipeActions... ✅       │  ← DataSource 实现这个方法
│  - canEditRow...                    │
└─────────────────────────────────────┘
```

### 2.2 iOS UITableView 架构

```objc
// UITableViewDataSource 协议定义
@protocol UITableViewDataSource <NSObject>
@required
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath;
@optional
// Swipe Actions 方法 - 由 DataSource 实现
- (UISwipeActionsConfiguration *)tableView:(UITableView *)tableView 
            trailingSwipeActionsConfigurationForRowAtIndexPath:(NSIndexPath *)indexPath API_AVAILABLE(ios(11.0));
- (BOOL)tableView:(UITableView *)tableView canEditRowAtIndexPath:(NSIndexPath *)indexPath;
- (NSArray<UITableViewRowAction *> *)tableView:(UITableView *)tableView editActionsForRowAtIndexPath:(NSIndexPath *)indexPath API_DEPRECATED_WITH_REPLACEMENT("tableView:trailingSwipeActionsConfigurationForRowAtIndexPath:", ios(8.0, 13.0));
@end
```

**关键点：**
- `trailingSwipeActionsConfigurationForRowAtIndexPath:` 是 DataSource 方法
- TableView 只是调用 DataSource 的方法，不实现这些方法
- 应该 Hook DataSource 类（`NewMainFrameViewController`），而不是 TableView 类

---

## 三、正确的 Hook 方案

### 3.1 方案 A：Hook setDataSource: 动态获取 DataSource 类（推荐）

```objc
#import "WPSessionBoxHook.h"
#import <objc/runtime.h>
#import <objc/message.h>

static IMP g_origSetDataSource = NULL;
static NSMutableDictionary *g_hookedClasses = nil;
static NSMutableDictionary *g_origIMPs = nil;

static void sbLog(NSString *format, ...) {
    va_list args;
    va_start(args, format);
    NSString *content = [[NSString alloc] initWithFormat:format arguments:args];
    va_end(args);
    NSLog(@"[SessionBox] %@", content);
}

#pragma mark - Swipe Actions Hook

static UISwipeActionsConfiguration *replaced_trailingSwipeActions(
    id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath) {
    
    sbLog(@"[trailingSwipe] called! self=%@ indexPath=%@", NSStringFromClass([self class]), indexPath);
    
    // 获取原始菜单
    UISwipeActionsConfiguration *origConfig = nil;
    NSString *key = [NSString stringWithFormat:@"%@_trailingSwipe", NSStringFromClass([self class])];
    IMP origIMP = g_origIMPs[key];
    if (origIMP) {
        origConfig = ((UISwipeActionsConfiguration *(*)(id, SEL, UITableView *, NSIndexPath *))origIMP)(self, _cmd, tableView, indexPath);
    }
    
    // 构建自定义菜单
    NSMutableArray<UIContextualAction *> *actions = [NSMutableArray array];
    if (origConfig.actions) {
        [actions addObjectsFromArray:origConfig.actions];
    }
    
    // TODO: 添加自定义菜单项
    // ...
    
    sbLog(@"[trailingSwipe] returning %lu actions", (unsigned long)actions.count);
    return [UISwipeActionsConfiguration configurationWithActions:actions];
}

static BOOL replaced_canEditRow(id self, SEL _cmd, UITableView *tableView, NSIndexPath *indexPath) {
    NSString *key = [NSString stringWithFormat:@"%@_canEditRow", NSStringFromClass([self class])];
    IMP origIMP = g_origIMPs[key];
    BOOL result = YES;
    if (origIMP) {
        result = ((BOOL (*)(id, SEL, UITableView *, NSIndexPath *))origIMP)(self, _cmd, tableView, indexPath);
    }
    sbLog(@"[canEditRow] self=%@ indexPath=%@ result=%d", NSStringFromClass([self class]), indexPath, result);
    return result;
}

#pragma mark - setDataSource Hook

static void replaced_setDataSource(id self, SEL _cmd, id dataSource) {
    // 调用原始实现
    if (g_origSetDataSource) {
        ((void (*)(id, SEL, id))g_origSetDataSource)(self, _cmd, dataSource);
    }
    
    sbLog(@"[setDataSource] tableView=%@ dataSource=%@", 
          NSStringFromClass([self class]), 
          dataSource ? NSStringFromClass([dataSource class]) : @"nil");
    
    if (!dataSource) return;
    
    Class dsClass = [dataSource class];
    NSString *className = NSStringFromClass(dsClass);
    
    // 检查是否已经 Hook 过
    if (g_hookedClasses[className]) {
        sbLog(@"[setDataSource] already hooked: %@", className);
        return;
    }
    
    // Hook trailingSwipeActionsConfigurationForRowAtIndexPath:
    SEL swipeSel = NSSelectorFromString(@"tableView:trailingSwipeActionsConfigurationForRowAtIndexPath:");
    Method swipeMethod = class_getInstanceMethod(dsClass, swipeSel);
    
    if (swipeMethod) {
        // 方法已存在，替换实现
        IMP origIMP = method_getImplementation(swipeMethod);
        g_origIMPs[[NSString stringWithFormat:@"%@_trailingSwipe", className]] = origIMP;
        method_setImplementation(swipeMethod, (IMP)replaced_trailingSwipeActions);
        sbLog(@"[setDataSource] ✓ HOOKED trailingSwipe on %@", className);
    } else {
        // 方法不存在，添加方法
        // type encoding: @24@0:8@16 (返回对象，self, _cmd, tableView, indexPath)
        class_addMethod(dsClass, swipeSel, (IMP)replaced_trailingSwipeActions, "@24@0:8@16@16");
        sbLog(@"[setDataSource] ✓ ADDED trailingSwipe to %@", className);
    }
    
    // Hook canEditRowAtIndexPath:
    SEL canEditSel = NSSelectorFromString(@"tableView:canEditRowAtIndexPath:");
    Method canEditMethod = class_getInstanceMethod(dsClass, canEditSel);
    
    if (canEditMethod) {
        IMP origIMP = method_getImplementation(canEditMethod);
        g_origIMPs[[NSString stringWithFormat:@"%@_canEditRow", className]] = origIMP;
        method_setImplementation(canEditMethod, (IMP)replaced_canEditRow);
        sbLog(@"[setDataSource] ✓ HOOKED canEditRow on %@", className);
    } else {
        class_addMethod(dsClass, canEditSel, (IMP)replaced_canEditRow, "B24@0:8@16@16");
        sbLog(@"[setDataSource] ✓ ADDED canEditRow to %@", className);
    }
    
    g_hookedClasses[className] = @YES;
}

#pragma mark - 安装

@implementation WPSessionBoxHook

+ (void)install {
    sbLog(@"[install] === START ===");
    
    g_hookedClasses = [NSMutableDictionary dictionary];
    g_origIMPs = [NSMutableDictionary dictionary];
    
    // Hook UITableView 的 setDataSource: 方法
    Class tableViewClass = [UITableView class];
    SEL setDataSourceSel = NSSelectorFromString(@"setDataSource:");
    Method setDataSourceMethod = class_getInstanceMethod(tableViewClass, setDataSourceSel);
    
    if (setDataSourceMethod) {
        g_origSetDataSource = method_getImplementation(setDataSourceMethod);
        method_setImplementation(setDataSourceMethod, (IMP)replaced_setDataSource);
        sbLog(@"[install] ✓ hooked setDataSource: on UITableView");
    }
    
    sbLog(@"[install] === COMPLETE ===");
}

@end
```

### 3.2 方案 B：直接 Hook NewMainFrameViewController

如果确定微信使用 `NewMainFrameViewController` 作为 DataSource：

```objc
+ (void)install {
    sbLog(@"[install] === START ===");
    
    g_origIMPs = [NSMutableDictionary dictionary];
    
    // 直接 Hook NewMainFrameViewController
    Class dsClass = objc_getClass("NewMainFrameViewController");
    if (!dsClass) {
        sbLog(@"[install] ✗ NewMainFrameViewController not found");
        return;
    }
    
    sbLog(@"[install] found NewMainFrameViewController");
    
    // Hook trailingSwipeActionsConfigurationForRowAtIndexPath:
    SEL swipeSel = NSSelectorFromString(@"tableView:trailingSwipeActionsConfigurationForRowAtIndexPath:");
    Method swipeMethod = class_getInstanceMethod(dsClass, swipeSel);
    
    if (swipeMethod) {
        IMP origIMP = method_getImplementation(swipeMethod);
        g_origIMPs[@"trailingSwipe"] = origIMP;
        method_setImplementation(swipeMethod, (IMP)replaced_trailingSwipeActions);
        sbLog(@"[install] ✓ HOOKED trailingSwipe");
    } else {
        // 添加方法
        class_addMethod(dsClass, swipeSel, (IMP)replaced_trailingSwipeActions, "@24@0:8@16@16");
        sbLog(@"[install] ✓ ADDED trailingSwipe");
    }
    
    // Hook canEditRowAtIndexPath:
    SEL canEditSel = NSSelectorFromString(@"tableView:canEditRowAtIndexPath:");
    Method canEditMethod = class_getInstanceMethod(dsClass, canEditSel);
    
    if (canEditMethod) {
        IMP origIMP = method_getImplementation(canEditMethod);
        g_origIMPs[@"canEditRow"] = origIMP;
        method_setImplementation(canEditMethod, (IMP)replaced_canEditRow);
        sbLog(@"[install] ✓ HOOKED canEditRow");
    } else {
        class_addMethod(dsClass, canEditSel, (IMP)replaced_canEditRow, "B24@0:8@16@16");
        sbLog(@"[install] ✓ ADDED canEditRow");
    }
    
    sbLog(@"[install] === COMPLETE ===");
}
```

---

## 四、Type Encoding 说明

### 4.1 方法签名与 Type Encoding

```objc
// 方法签名
- (UISwipeActionsConfiguration *)tableView:(UITableView *)tableView 
            trailingSwipeActionsConfigurationForRowAtIndexPath:(NSIndexPath *)indexPath;

// Type Encoding: @24@0:8@16@16
// 分解：
// @     - 返回类型：对象 (UISwipeActionsConfiguration *)
// 24    - 总字节数
// @     - 参数1：self (id)
// 0     - self 的偏移量
// :     - 参数2：_cmd (SEL)
// 8     - _cmd 的偏移量
// @     - 参数3：tableView (UITableView *)
// 16    - tableView 的偏移量
// @     - 参数4：indexPath (NSIndexPath *)
// 16    - indexPath 的偏移量（注意：arm64 下指针都是 8 字节）

// 简化写法（现代 runtime 会自动计算）
"@24@0:8@16@16"  或  "@@:@@"
```

### 4.2 常用 Type Encoding

| 类型 | Encoding |
|------|----------|
| `void` | `v` |
| `BOOL` | `B` |
| `id` / `instancetype` | `@` |
| `Class` | `#` |
| `SEL` | `:` |
| `int` | `i` |
| `NSInteger` | `q` (64位) |
| `CGFloat` / `double` | `d` |
| `NSString *` | `@` |
| `NSIndexPath *` | `@` |
| `UITableView *` | `@` |
| `UISwipeActionsConfiguration *` | `@` |

---

## 五、调试检查清单

### 5.1 检查 Hook 是否正确

```objc
// 在 install 后添加验证代码
+ (void)verifyHook {
    Class dsClass = objc_getClass("NewMainFrameViewController");
    if (!dsClass) {
        sbLog(@"[verify] ✗ NewMainFrameViewController not found");
        return;
    }
    
    SEL swipeSel = NSSelectorFromString(@"tableView:trailingSwipeActionsConfigurationForRowAtIndexPath:");
    Method m = class_getInstanceMethod(dsClass, swipeSel);
    
    if (m) {
        sbLog(@"[verify] ✓ method exists");
        sbLog(@"[verify]   IMP: %p", method_getImplementation(m));
        sbLog(@"[verify]   type: %s", method_getTypeEncoding(m));
    } else {
        sbLog(@"[verify] ✗ method not found");
    }
}
```

### 5.2 预期日志输出

正确的日志应该包含：

```
[install] === START ===
[install] ✓ hooked setDataSource: on UITableView
[install] === COMPLETE ===

// 进入会话列表后：
[setDataSource] tableView=MainFrameTableView dataSource=NewMainFrameViewController
[setDataSource] ✓ ADDED trailingSwipe to NewMainFrameViewController
[setDataSource] ✓ ADDED canEditRow to NewMainFrameViewController

// 滚动会话列表时：
[canEditRow] self=NewMainFrameViewController indexPath={0-0} result=1
[canEditRow] self=NewMainFrameViewController indexPath={1-0} result=1

// 左滑时：
[trailingSwipe] called! self=NewMainFrameViewController indexPath={1-0}
[trailingSwipe] returning 3 actions
```

---

## 六、常见错误

### 6.1 Hook 了错误的类

```objc
// ❌ 错误：Hook TableView
Class cls = objc_getClass("MainFrameTableView");  // 这是 View，不是 DataSource

// ✅ 正确：Hook DataSource
Class cls = objc_getClass("NewMainFrameViewController");  // 这是 DataSource
```

### 6.2 Type Encoding 错误

```objc
// ❌ 错误：参数个数不对
class_addMethod(cls, sel, imp, "@@:@");  // 缺少 indexPath 参数

// ✅ 正确：4 个参数
class_addMethod(cls, sel, imp, "@24@0:8@16@16");  // self, _cmd, tableView, indexPath
```

### 6.3 没有保存原始 IMP

```objc
// ❌ 错误：直接替换，丢失原始实现
method_setImplementation(method, newIMP);

// ✅ 正确：保存原始 IMP
IMP origIMP = method_getImplementation(method);
g_origIMPs[@"methodName"] = origIMP;
method_setImplementation(method, newIMP);
```

---

## 七、总结

| 问题 | 原因 | 解决方案 |
|------|------|----------|
| 日志只有安装阶段 | Hook 了 TableView 而非 DataSource | Hook `NewMainFrameViewController` |
| trailingSwipe 不被调用 | 方法添加到了错误的类 | 通过 `setDataSource:` 动态获取 DataSource 类 |
| canEditRow 返回 YES 但无后续 | 微信可能使用自定义菜单 | 探测微信实际使用的方法 |

**核心原则：`trailingSwipeActionsConfigurationForRowAtIndexPath:` 是 DataSource 方法，必须 Hook DataSource 类！**
