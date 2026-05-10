# 微信左滑菜单 Hook 方案（更新版）

> 分析日期: 2026-05-10
> 重要发现: SwipeCell 类存在于微信二进制但运行时找不到，可能延迟加载

---

## 一、日志分析结果

### 1.1 当前问题

```
[probe] SwipeCellActionItem not found
[install] ✗ SwipeCell class not found
```

### 1.2 发现的线索

```
[probe] === NewMainFrameViewController ===
[probe]   pj_rightBtnAction3       ← 微信助手注入的方法
[probe]   pj_rightBtnAction2
[probe]   pj_rightBtnAction1
[probe]   pj_editBtnAction
[probe]   onTapOnFakeRightMenuButton
```

**`pj_` 前缀的方法是微信助手注入的！** 这说明微信助手使用的是**方法注入**而不是 Hook。

---

## 二、微信二进制分析结果

### 2.1 确认存在的类和方法

从微信二进制中确认存在：

```
类：
- SwipeCell
- SwipeCellActionItem
- SwipeCellActionView
- SwipeCellStore

方法：
- onMenuItemsAppearInSessionCellData:
- onMenuTransitionToConfirmState:sessionCellData:
- arrMenuItems
- m_arrMenuItems
- filteredMenuItems:
- hideMenuOptionsAnimated:
- forceHideMenuOptionsAnimated:
```

### 2.2 为什么运行时找不到

**原因：Swift 延迟加载**

```
_TtC9WeSwiftUI14SwipeCellStore  ← Swift 模块中的类
```

`SwipeCell` 相关类在 `WeSwiftUI` Swift 模块中定义，可能：
1. 在用户第一次左滑时才加载
2. 类名在运行时被 mangled（Swift name mangling）

---

## 三、新的 Hook 策略

### 策略 A：延迟 Hook（推荐）

在用户第一次左滑时再 Hook：

```objc
#import "WPSessionBoxHook.h"
#import "../../Config/PluginConfig.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>

static NSMutableDictionary *g_origIMPs = nil;
static BOOL g_swipeCellHooked = NO;

static void sbLog(NSString *format, ...) {
    va_list args;
    va_start(args, format);
    NSString *content = [[NSString alloc] initWithFormat:format arguments:args];
    va_end(args);
    NSLog(@"[SessionBox] %@", content);
    
    @try {
        NSArray *paths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
        NSString *folderPath = [paths.firstObject stringByAppendingPathComponent:@"WeChatPlugin_Logs"];
        [[NSFileManager defaultManager] createDirectoryAtPath:folderPath withIntermediateDirectories:YES attributes:nil error:nil];
        NSString *filePath = [folderPath stringByAppendingPathComponent:@"sessionbox.log"];
        NSString *line = [NSString stringWithFormat:@"[%@] %@\n", [NSDate date], content];
        [line writeToFile:filePath atomically:YES encoding:NSUTF8StringEncoding error:nil];
    } @catch (NSException *e) {}
}

#pragma mark - 延迟 Hook SwipeCell

static void tryHookSwipeCell() {
    if (g_swipeCellHooked) return;
    
    // 尝试多种可能的类名
    const char *cellClassNames[] = {
        "SwipeCell",
        "WCSwipeCell",
        "MMSwipeCell",
        "SwipeableCell",
        "MMTableViewCell",
        "MainFrameTableViewCell"
    };
    
    Class cellClass = nil;
    for (int i = 0; i < 6; i++) {
        cellClass = objc_getClass(cellClassNames[i]);
        if (cellClass) {
            sbLog(@"[delayedHook] Found class: %s", cellClassNames[i]);
            break;
        }
    }
    
    if (!cellClass) {
        // 尝试遍历所有类查找包含 "Swipe" 的类
        unsigned int classCount = 0;
        Class *classes = objc_copyClassList(&classCount);
        
        for (unsigned int i = 0; i < classCount; i++) {
            const char *name = class_getName(classes[i]);
            if (strstr(name, "Swipe") || strstr(name, "swipe")) {
                sbLog(@"[delayedHook] Found Swipe class: %s", name);
                cellClass = classes[i];
                break;
            }
        }
        free(classes);
    }
    
    if (!cellClass) {
        sbLog(@"[delayedHook] SwipeCell still not found");
        return;
    }
    
    // Hook arrMenuItems
    SEL arrMenuSel = NSSelectorFromString(@"arrMenuItems");
    Method arrMenuMethod = class_getInstanceMethod(cellClass, arrMenuSel);
    if (arrMenuMethod) {
        IMP origIMP = method_getImplementation(arrMenuMethod);
        g_origIMPs[@"arrMenuItems"] = [NSValue valueWithPointer:origIMP];
        method_setImplementation(arrMenuMethod, (IMP)replaced_arrMenuItems);
        sbLog(@"[delayedHook] ✓ Hooked arrMenuItems");
        g_swipeCellHooked = YES;
    }
}

#pragma mark - Hook onMenuItemsAppearInSessionCellData:

static void replaced_onMenuItemsAppear(id self, SEL _cmd, id sessionCellData) {
    sbLog(@"[onMenuItemsAppear] called! sessionCellData=%@", sessionCellData);
    
    // 尝试延迟 Hook SwipeCell
    tryHookSwipeCell();
    
    // 调用原始实现
    NSValue *impValue = g_origIMPs[@"onMenuItemsAppearInSessionCellData:"];
    if (impValue) {
        IMP origIMP = [impValue pointerValue];
        if (origIMP) {
            ((void (*)(id, SEL, id))origIMP)(self, _cmd, sessionCellData);
        }
    }
    
    // 尝试修改菜单项
    // ...
}

#pragma mark - Hook arrMenuItems

static NSArray *replaced_arrMenuItems(id self, SEL _cmd) {
    sbLog(@"[arrMenuItems] called on %@", NSStringFromClass([self class]));
    
    NSMutableArray *items = [NSMutableArray array];
    
    NSValue *impValue = g_origIMPs[@"arrMenuItems"];
    if (impValue) {
        IMP origIMP = [impValue pointerValue];
        if (origIMP) {
            NSArray *origItems = ((NSArray *(*)(id, SEL))origIMP)(self, _cmd);
            if (origItems) [items addObjectsFromArray:origItems];
        }
    }
    
    sbLog(@"[arrMenuItems] original items: %lu", (unsigned long)items.count);
    
    // TODO: 添加自定义菜单项
    
    return items;
}

#pragma mark - Hook setEditing:animated: (触发点)

static IMP g_origSetEditing = NULL;

static void replaced_setEditing(id self, SEL _cmd, BOOL editing, BOOL animated) {
    sbLog(@"[setEditing] called, editing=%d", editing);
    
    // 用户开始编辑（左滑）时，尝试 Hook SwipeCell
    if (editing) {
        tryHookSwipeCell();
    }
    
    if (g_origSetEditing) {
        ((void (*)(id, SEL, BOOL, BOOL))g_origSetEditing)(self, _cmd, editing, animated);
    }
}

#pragma mark - 安装

@implementation WPSessionBoxHook

+ (void)install {
    sbLog(@"[install] === START ===");
    
    g_origIMPs = [NSMutableDictionary dictionary];
    
    // 1. Hook NewMainFrameViewController 的 onMenuItemsAppearInSessionCellData:
    Class vcClass = objc_getClass("NewMainFrameViewController");
    if (vcClass) {
        SEL onMenuSel = NSSelectorFromString(@"onMenuItemsAppearInSessionCellData:");
        Method onMenuMethod = class_getInstanceMethod(vcClass, onMenuSel);
        if (onMenuMethod) {
            IMP origIMP = method_getImplementation(onMenuMethod);
            g_origIMPs[@"onMenuItemsAppearInSessionCellData:"] = [NSValue valueWithPointer:origIMP];
            method_setImplementation(onMenuMethod, (IMP)replaced_onMenuItemsAppear);
            sbLog(@"[install] ✓ Hooked onMenuItemsAppearInSessionCellData:");
        }
    }
    
    // 2. Hook UITableView 的 setEditing:animated: 作为触发点
    Class tableViewClass = [UITableView class];
    SEL setEditingSel = NSSelectorFromString(@"setEditing:animated:");
    Method setEditingMethod = class_getInstanceMethod(tableViewClass, setEditingSel);
    if (setEditingMethod) {
        g_origSetEditing = method_getImplementation(setEditingMethod);
        method_setImplementation(setEditingMethod, (IMP)replaced_setEditing);
        sbLog(@"[install] ✓ Hooked setEditing:animated:");
    }
    
    // 3. 立即尝试 Hook SwipeCell（可能已经加载）
    tryHookSwipeCell();
    
    sbLog(@"[install] === COMPLETE ===");
}

@end
```

### 策略 B：Hook UIScrollView 滚动事件

```objc
// Hook UIScrollView 的 setContentOffset: 检测左滑
static IMP g_origSetContentOffset = NULL;

static void replaced_setContentOffset(id self, SEL _cmd, CGPoint offset, BOOL animated) {
    // 检测是否是横向滚动（左滑）
    if (offset.x > 0) {
        sbLog(@"[setContentOffset] horizontal scroll detected: x=%f", offset.x);
        tryHookSwipeCell();
    }
    
    if (g_origSetContentOffset) {
        ((void (*)(id, SEL, CGPoint, BOOL))g_origSetContentOffset)(self, _cmd, offset, animated);
    }
}
```

### 策略 C：使用通知监听菜单显示

```objc
// 监听菜单显示通知
- (void)setupMenuObserver {
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(menuWillShow:)
                                                 name:@"MMMenuControllerWillShowMenuNotification"
                                               object:nil];
}

- (void)menuWillShow:(NSNotification *)notification {
    sbLog(@"[menuWillShow] menu will show");
    tryHookSwipeCell();
}
```

---

## 四、调试建议

### 4.1 添加类遍历探测

```objc
static void dumpAllClasses() {
    sbLog(@"[dumpAllClasses] === START ===");
    
    unsigned int classCount = 0;
    Class *classes = objc_copyClassList(&classCount);
    
    for (unsigned int i = 0; i < classCount; i++) {
        const char *name = class_getName(classes[i]);
        
        // 只打印包含关键字的类
        if (strstr(name, "Swipe") || 
            strstr(name, "swipe") ||
            strstr(name, "Menu") || 
            strstr(name, "menu") ||
            strstr(name, "Cell") ||
            strstr(name, "Session")) {
            sbLog(@"[dumpAllClasses] %s", name);
        }
    }
    
    free(classes);
    sbLog(@"[dumpAllClasses] === END ===");
}
```

### 4.2 在左滑时调用探测

```objc
// 在 replaced_setEditing 中调用
static void replaced_setEditing(id self, SEL _cmd, BOOL editing, BOOL animated) {
    if (editing) {
        dumpAllClasses();  // 左滑时打印所有相关类
    }
    // ...
}
```

---

## 五、总结

| 问题 | 原因 | 解决方案 |
|------|------|----------|
| SwipeCell 找不到 | Swift 延迟加载 | 使用延迟 Hook |
| 不知道何时 Hook | 类加载时机不确定 | Hook 多个触发点 |
| 无法确定类名 | Swift name mangling | 遍历所有类查找 |

**核心策略：Hook 触发点（setEditing、onMenuItemsAppear），在这些时机尝试延迟 Hook SwipeCell。**
