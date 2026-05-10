# 微信左滑菜单实现原理与 Hook 方案

> 分析日期: 2026-05-10
> 重要发现: 微信使用自定义 SwipeCell，不是 iOS 原生 Swipe Actions

---

## 一、关键发现

### 1.1 微信使用自定义 SwipeCell

从微信二进制中提取的证据：

```
微信自定义类：
- SwipeCell                    ← 自定义可滑动 Cell
- SwipeCellActionItem          ← 滑动菜单项
- SwipeCellActionView          ← 滑动菜单视图
- SwipeCellStore               ← 滑动状态存储

微信自定义方法：
- onMenuItemsAppearInSessionCellData:    ← 菜单项出现时调用
- onMenuTransitionToConfirmState:        ← 菜单过渡到确认状态
- arrMenuItems                           ← 菜单项数组属性
- filteredMenuItems:                     ← 过滤菜单项
- hideMenuOptionsAnimated:               ← 隐藏菜单
- forceHideMenuOptionsAnimated:          ← 强制隐藏菜单
```

### 1.2 为什么 iOS 原生 API 不工作

```
iOS 原生流程（微信不使用）：
UITableView → trailingSwipeActionsConfigurationForRowAtIndexPath: → UISwipeActionsConfiguration

微信自定义流程：
SwipeCell → UIPanGestureRecognizer → SwipeCellActionView → SwipeCellActionItem
```

**微信完全绕过了 iOS 原生 Swipe Actions API！**

---

## 二、微信助手的工作原理

### 2.1 微信助手 Hook 了什么

从微信助手 dylib 分析，它同时引用了：

1. **iOS 原生 API**（作为兼容层）
   - `UISwipeActionsConfiguration`
   - `UIContextualAction`
   - `tableView:trailingSwipeActionsConfigurationForRowAtIndexPath:`

2. **微信内部方法**（实际工作的 Hook）
   - `arrMenuItems`
   - `filteredMenuItems:`
   - `hideMenuOptionsAnimated:`
   - `forceHideMenuOptionsAnimated:`

### 2.2 微信助手的实现策略

```
微信助手策略：
1. 尝试 Hook iOS 原生 API（某些场景可能有效）
2. 同时 Hook 微信内部方法（主要工作方式）
3. 在 arrMenuItems 或 filteredMenuItems: 中添加自定义菜单项
```

---

## 三、正确的 Hook 方案

### 3.1 方案 A：Hook SwipeCellActionItem 创建

```objc
#import <objc/runtime.h>
#import <objc/message.h>

static NSMutableDictionary *g_origIMPs = nil;

static void sbLog(NSString *format, ...) {
    va_list args;
    va_start(args, format);
    NSString *content = [[NSString alloc] initWithFormat:format arguments:args];
    va_end(args);
    NSLog(@"[SessionBox] %@", content);
}

#pragma mark - Hook SwipeCellActionItem

static id replaced_SwipeCellActionItem_init(id self, SEL _cmd) {
    sbLog(@"[SwipeCellActionItem] init called");
    
    // 调用原始初始化
    id item = nil;
    IMP origIMP = g_origIMPs[@"SwipeCellActionItem_init"];
    if (origIMP) {
        item = ((id (*)(id, SEL))origIMP)(self, _cmd);
    }
    
    return item;
}

#pragma mark - Hook arrMenuItems

static NSArray *replaced_arrMenuItems(id self, SEL _cmd) {
    sbLog(@"[arrMenuItems] called on %@", NSStringFromClass([self class]));
    
    NSMutableArray *items = [NSMutableArray array];
    
    // 获取原始菜单项
    IMP origIMP = g_origIMPs[@"arrMenuItems"];
    if (origIMP) {
        NSArray *origItems = ((NSArray *(*)(id, SEL))origIMP)(self, _cmd);
        if (origItems) [items addObjectsFromArray:origItems];
    }
    
    sbLog(@"[arrMenuItems] original items: %lu", (unsigned long)items.count);
    
    // 添加自定义菜单项
    // 需要创建 SwipeCellActionItem 对象
    // ...
    
    return items;
}

#pragma mark - Hook filteredMenuItems:

static NSArray *replaced_filteredMenuItems(id self, SEL _cmd, NSArray *items) {
    sbLog(@"[filteredMenuItems] called with %lu items", (unsigned long)items.count);
    
    NSMutableArray *result = [NSMutableArray arrayWithArray:items];
    
    // 调用原始实现
    IMP origIMP = g_origIMPs[@"filteredMenuItems:"];
    if (origIMP) {
        NSArray *filtered = ((NSArray *(*)(id, SEL, NSArray *))origIMP)(self, _cmd, items);
        if (filtered) result = [filtered mutableCopy];
    }
    
    // 添加自定义菜单项
    // ...
    
    sbLog(@"[filteredMenuItems] returning %lu items", (unsigned long)result.count);
    return result;
}

#pragma mark - Hook onMenuItemsAppearInSessionCellData:

static void replaced_onMenuItemsAppear(id self, SEL _cmd, id sessionCellData) {
    sbLog(@"[onMenuItemsAppear] called");
    
    // 调用原始实现
    IMP origIMP = g_origIMPs[@"onMenuItemsAppearInSessionCellData:"];
    if (origIMP) {
        ((void (*)(id, SEL, id))origIMP)(self, _cmd, sessionCellData);
    }
    
    // 在这里可以修改菜单项
    // ...
}

#pragma mark - 安装 Hook

+ (void)install {
    sbLog(@"[install] === START ===");
    
    g_origIMPs = [NSMutableDictionary dictionary];
    
    // 1. Hook SwipeCell
    Class swipeCellClass = objc_getClass("SwipeCell");
    if (swipeCellClass) {
        sbLog(@"[install] Found SwipeCell class");
        
        // Hook arrMenuItems
        SEL arrMenuSel = NSSelectorFromString(@"arrMenuItems");
        Method arrMenuMethod = class_getInstanceMethod(swipeCellClass, arrMenuSel);
        if (arrMenuMethod) {
            IMP origIMP = method_getImplementation(arrMenuMethod);
            g_origIMPs[@"arrMenuItems"] = origIMP;
            method_setImplementation(arrMenuMethod, (IMP)replaced_arrMenuItems);
            sbLog(@"[install] ✓ Hooked arrMenuItems");
        }
        
        // Hook filteredMenuItems:
        SEL filteredMenuSel = NSSelectorFromString(@"filteredMenuItems:");
        Method filteredMenuMethod = class_getInstanceMethod(swipeCellClass, filteredMenuSel);
        if (filteredMenuMethod) {
            IMP origIMP = method_getImplementation(filteredMenuMethod);
            g_origIMPs[@"filteredMenuItems:"] = origIMP;
            method_setImplementation(filteredMenuMethod, (IMP)replaced_filteredMenuItems);
            sbLog(@"[install] ✓ Hooked filteredMenuItems:");
        }
    }
    
    // 2. Hook NewMainFrameViewController
    Class vcClass = objc_getClass("NewMainFrameViewController");
    if (vcClass) {
        sbLog(@"[install] Found NewMainFrameViewController class");
        
        // Hook onMenuItemsAppearInSessionCellData:
        SEL onMenuSel = NSSelectorFromString(@"onMenuItemsAppearInSessionCellData:");
        Method onMenuMethod = class_getInstanceMethod(vcClass, onMenuSel);
        if (onMenuMethod) {
            IMP origIMP = method_getImplementation(onMenuMethod);
            g_origIMPs[@"onMenuItemsAppearInSessionCellData:"] = origIMP;
            method_setImplementation(onMenuMethod, (IMP)replaced_onMenuItemsAppear);
            sbLog(@"[install] ✓ Hooked onMenuItemsAppearInSessionCellData:");
        }
    }
    
    // 3. Hook SwipeCellActionItem
    Class actionItemClass = objc_getClass("SwipeCellActionItem");
    if (actionItemClass) {
        sbLog(@"[install] Found SwipeCellActionItem class");
        
        // 探测 SwipeCellActionItem 的方法
        unsigned int methodCount = 0;
        Method *methods = class_copyMethodList(actionItemClass, &methodCount);
        sbLog(@"[install] SwipeCellActionItem methods: %u", methodCount);
        
        for (unsigned int i = 0; i < methodCount; i++) {
            SEL sel = method_getName(methods[i]);
            const char *name = sel_getName(sel);
            sbLog(@"[install]   - %s", name);
        }
        free(methods);
    }
    
    sbLog(@"[install] === COMPLETE ===");
}
```

### 3.2 方案 B：探测并复制微信菜单项创建逻辑

```objc
// 探测 SwipeCellActionItem 的结构
static void probeSwipeCellActionItem() {
    Class cls = objc_getClass("SwipeCellActionItem");
    if (!cls) {
        sbLog(@"[probe] SwipeCellActionItem not found");
        return;
    }
    
    sbLog(@"[probe] === SwipeCellActionItem ===");
    
    // 获取属性列表
    unsigned int propCount = 0;
    objc_property_t *props = class_copyPropertyList(cls, &propCount);
    sbLog(@"[probe] Properties: %u", propCount);
    for (unsigned int i = 0; i < propCount; i++) {
        const char *name = property_getName(props[i]);
        const char *attrs = property_getAttributes(props[i]);
        sbLog(@"[probe]   %@ : %s", [NSString stringWithUTF8String:name], attrs);
    }
    free(props);
    
    // 获取方法列表
    unsigned int methodCount = 0;
    Method *methods = class_copyMethodList(cls, &methodCount);
    sbLog(@"[probe] Methods: %u", methodCount);
    for (unsigned int i = 0; i < methodCount; i++) {
        SEL sel = method_getName(methods[i]);
        const char *name = sel_getName(sel);
        const char *type = method_getTypeEncoding(methods[i]);
        sbLog(@"[probe]   - %s [%s]", name, type);
    }
    free(methods);
}

// 创建自定义菜单项
static id createSwipeCellActionItem(NSString *title, NSUInteger action, id target, SEL selector) {
    Class cls = objc_getClass("SwipeCellActionItem");
    if (!cls) return nil;
    
    // 尝试不同的初始化方法
    SEL initSel = NSSelectorFromString(@"initWithTitle:action:target:");
    if ([cls instancesRespondToSelector:initSel]) {
        return ((id (*)(id, SEL, id, NSUInteger, id))objc_msgSend)(
            [[cls alloc] init], initSel, title, action, target);
    }
    
    // 尝试其他初始化方法
    initSel = NSSelectorFromString(@"initWithTitle:action:");
    if ([cls instancesRespondToSelector:initSel]) {
        return ((id (*)(id, SEL, id, NSUInteger))objc_msgSend)(
            [[cls alloc] init], initSel, title, action);
    }
    
    return nil;
}
```

---

## 四、调试步骤

### 4.1 第一步：探测微信的类结构

```objc
+ (void)probe {
    // 探测关键类
    const char *classNames[] = {
        "SwipeCell",
        "SwipeCellActionItem",
        "SwipeCellActionView",
        "SwipeCellStore",
        "MainFrameCellData",
        "NewMainFrameViewController"
    };
    
    for (int i = 0; i < 6; i++) {
        Class cls = objc_getClass(classNames[i]);
        if (cls) {
            sbLog(@"[probe] === %s ===", classNames[i]);
            
            unsigned int methodCount = 0;
            Method *methods = class_copyMethodList(cls, &methodCount);
            
            for (unsigned int j = 0; j < methodCount; j++) {
                SEL sel = method_getName(methods[j]);
                const char *name = sel_getName(sel);
                
                // 只打印菜单相关的方法
                NSString *nameStr = [NSString stringWithUTF8String:name];
                if ([nameStr containsString:@"menu"] || 
                    [nameStr containsString:@"Menu"] ||
                    [nameStr containsString:@"action"] || 
                    [nameStr containsString:@"Action"] ||
                    [nameStr containsString:@"swipe"] || 
                    [nameStr containsString:@"Swipe"]) {
                    sbLog(@"[probe]   %s", name);
                }
            }
            free(methods);
        }
    }
}
```

### 4.2 第二步：分析日志输出

运行探测后，查看日志找到：
1. `SwipeCell` 有哪些菜单相关方法
2. `SwipeCellActionItem` 如何创建
3. `arrMenuItems` 返回什么类型的对象

### 4.3 第三步：根据探测结果调整 Hook

根据探测到的实际方法名和参数类型，调整 Hook 代码。

---

## 五、总结

| 问题 | 原因 | 解决方案 |
|------|------|----------|
| trailingSwipe 不被调用 | 微信使用自定义 SwipeCell | Hook SwipeCell 的方法 |
| iOS 原生 API 无效 | 微信绕过了原生实现 | Hook 微信内部方法 |
| 不知道如何创建菜单项 | 需要探测 SwipeCellActionItem | 运行探测函数分析 |

**核心结论：必须 Hook 微信的 SwipeCell 相关方法，而不是 iOS 原生 Swipe Actions API！**
