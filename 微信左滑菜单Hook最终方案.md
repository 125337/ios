# 微信左滑菜单 Hook 最终方案

> 分析日期: 2026-05-10
> 重要发现: 应该 Hook `NewMainFrameCell` 的 `setArrMenuItems:` 方法

---

## 一、关键发现

### 1.1 正确的 Hook 目标

从探测日志中发现：

```
[probe] === FOUND : NewMainFrameCell ===
[probe]   prop: m_cellData
[probe]   method: setArrMenuItems:           ← 菜单设置方法
[probe]   method: checkAndAddDeleteItem
[probe]   method: onCommitEditingWithStyle:tableView:
[probe]   method: updateMoreMenu:
[probe]   method: makeUnsubscribeMenuItem
[probe]   method: onMenuTransitionToConfirmState:
[probe]   method: onMultiMenuAppear
```

### 1.2 为什么之前的方案不工作

1. **`SwipeCell` 类不存在于运行时** - 它可能是 Swift 模块中的内部类，运行时无法访问
2. **`NewMainFrameViewController` 只实现了右滑** - 只有 `leadingSwipeActionsConfigurationForRowAtIndexPath:`，没有 `trailingSwipeActionsConfigurationForRowAtIndexPath:`
3. **微信使用自定义菜单系统** - 通过 `NewMainFrameCell` 的 `arrMenuItems` 属性管理菜单项

---

## 二、正确的 Hook 方案

### 2.1 Hook `NewMainFrameCell` 的 `setArrMenuItems:`

```objc
#import "WPSessionBoxHook.h"
#import "../../Config/PluginConfig.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>

static NSMutableDictionary *g_origIMPs = nil;

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

#pragma mark - 辅助函数

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

static NSString *getUserNameFromCellData(id cellData) {
    if (!cellData) return nil;
    
    SEL userNameSel = NSSelectorFromString(@"m_nsUserName");
    if ([cellData respondsToSelector:userNameSel]) {
        id name = ((id (*)(id, SEL))objc_msgSend)(cellData, userNameSel);
        if ([name isKindOfClass:[NSString class]]) return name;
    }
    
    SEL sessionInfoSel = NSSelectorFromString(@"m_sessionInfo");
    if ([cellData respondsToSelector:sessionInfoSel]) {
        id sessionInfo = ((id (*)(id, SEL))objc_msgSend)(cellData, sessionInfoSel);
        if (sessionInfo && [sessionInfo respondsToSelector:userNameSel]) {
            id name = ((id (*)(id, SEL))objc_msgSend)(sessionInfo, userNameSel);
            if ([name isKindOfClass:[NSString class]]) return name;
        }
    }
    
    return nil;
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

#pragma mark - 创建菜单项

static id createMenuItem(NSString *title, NSString *actionType, id target, SEL selector) {
    sbLog(@"[createMenuItem] title=%@ actionType=%@", title, actionType);
    
    Class itemClass = NSClassFromString(@"MMTableViewCellMenuItem");
    if (!itemClass) {
        itemClass = NSClassFromString(@"UITableViewRowAction");
    }
    
    if (!itemClass) {
        sbLog(@"[createMenuItem] No suitable menu item class found");
        return nil;
    }
    
    if ([itemClass respondsToSelector:NSSelectorFromString(@"rowActionWithStyle:title:handler:")]) {
        UITableViewRowActionStyle style = UITableViewRowActionStyleNormal;
        id action = ((id (*)(Class, SEL, UITableViewRowActionStyle, id, id))objc_msgSend)(
            itemClass, 
            NSSelectorFromString(@"rowActionWithStyle:title:handler:"),
            style, 
            title, 
            ^(UITableViewRowAction *action, NSIndexPath *indexPath) {
                sbLog(@"[MenuItem] tapped: %@", title);
                if (target && selector) {
                    ((void (*)(id, SEL))objc_msgSend)(target, selector);
                }
            }
        );
        return action;
    }
    
    return nil;
}

#pragma mark - Hook setArrMenuItems:

static void replaced_setArrMenuItems(id self, SEL _cmd, NSArray *items) {
    sbLog(@"[setArrMenuItems] === CALLED === on %@ with %lu items", 
          NSStringFromClass([self class]), (unsigned long)items.count);
    
    NSMutableArray *newItems = [NSMutableArray arrayWithArray:items];
    
    id cellData = nil;
    if ([self respondsToSelector:NSSelectorFromString(@"m_cellData")]) {
        cellData = ((id (*)(id, SEL))objc_msgSend)(self, NSSelectorFromString(@"m_cellData"));
    }
    
    NSString *userName = getUserNameFromCellData(cellData);
    sbLog(@"[setArrMenuItems] userName=%@", userName);
    
    if (userName.length > 0) {
        PluginConfig *config = [PluginConfig shared];
        
        if (config.quickPinEnabled) {
            BOOL isTop = isSessionTop(userName);
            NSString *title = isTop ? @"取消置顶" : @"置顶";
            id pinItem = createMenuItem(title, @"pin", nil, nil);
            if (pinItem) {
                [newItems addObject:pinItem];
                sbLog(@"[setArrMenuItems] added pin item");
            }
        }
        
        if (config.quickRemarkEnabled) {
            id remarkItem = createMenuItem(@"备注", @"remark", nil, nil);
            if (remarkItem) {
                [newItems addObject:remarkItem];
                sbLog(@"[setArrMenuItems] added remark item");
            }
        }
        
        if (config.quickMuteEnabled) {
            BOOL isMuted = isSessionMuted(userName);
            NSString *title = isMuted ? @"取消免打扰" : @"免打扰";
            id muteItem = createMenuItem(title, @"mute", nil, nil);
            if (muteItem) {
                [newItems addObject:muteItem];
                sbLog(@"[setArrMenuItems] added mute item");
            }
        }
    }
    
    sbLog(@"[setArrMenuItems] calling original with %lu items", (unsigned long)newItems.count);
    
    NSValue *impValue = g_origIMPs[@"setArrMenuItems:"];
    if (impValue) {
        IMP origIMP = [impValue pointerValue];
        if (origIMP) {
            ((void (*)(id, SEL, NSArray *))origIMP)(self, _cmd, newItems);
        }
    }
}

#pragma mark - 安装

@implementation WPSessionBoxHook

+ (void)install {
    sbLog(@"[install] === START (NewMainFrameCell Hook) ===");
    
    g_origIMPs = [NSMutableDictionary dictionary];
    
    Class cellClass = objc_getClass("NewMainFrameCell");
    if (!cellClass) {
        sbLog(@"[install] ✗ NewMainFrameCell not found");
        return;
    }
    
    sbLog(@"[install] Found NewMainFrameCell");
    
    SEL setArrMenuSel = NSSelectorFromString(@"setArrMenuItems:");
    Method setArrMenuMethod = class_getInstanceMethod(cellClass, setArrMenuSel);
    
    if (setArrMenuMethod) {
        IMP origIMP = method_getImplementation(setArrMenuMethod);
        g_origIMPs[@"setArrMenuItems:"] = [NSValue valueWithPointer:origIMP];
        method_setImplementation(setArrMenuMethod, (IMP)replaced_setArrMenuItems);
        sbLog(@"[install] ✓ Hooked setArrMenuItems:");
    } else {
        sbLog(@"[install] ✗ setArrMenuItems: not found");
    }
    
    sbLog(@"[install] === COMPLETE ===");
}

@end
```

### 2.2 关键点说明

1. **Hook 目标**: `NewMainFrameCell` 类
2. **Hook 方法**: `setArrMenuItems:` - 这是设置菜单项的方法
3. **获取会话数据**: 通过 `m_cellData` 属性获取 `MainFrameCellData`
4. **获取 userName**: 从 `m_cellData` 的 `m_nsUserName` 或 `m_sessionInfo.m_nsUserName` 获取

---

## 三、调试检查清单

### 3.1 预期日志

```
[install] === START (NewMainFrameCell Hook) ===
[install] Found NewMainFrameCell
[install] ✓ Hooked setArrMenuItems:
[install] === COMPLETE ===

// 左滑时：
[setArrMenuItems] === CALLED === on NewMainFrameCell with 2 items
[setArrMenuItems] userName=wxid_xxx
[setArrMenuItems] added pin item
[setArrMenuItems] added remark item
[setArrMenuItems] added mute item
[setArrMenuItems] calling original with 5 items
```

### 3.2 如果还是不工作

检查以下几点：
1. `NewMainFrameCell` 是否存在
2. `setArrMenuItems:` 方法是否存在
3. `m_cellData` 是否能正确获取
4. 菜单项类型是否正确（可能需要使用微信内部的菜单项类）

---

## 四、总结

| 之前的错误 | 正确的做法 |
|-----------|-----------|
| Hook `SwipeCell` | Hook `NewMainFrameCell` |
| Hook `arrMenuItems` (getter) | Hook `setArrMenuItems:` (setter) |
| 使用 iOS 原生 Swipe Actions | 使用微信自定义菜单系统 |

**核心结论：微信通过 `NewMainFrameCell` 的 `setArrMenuItems:` 方法设置左滑菜单项，应该 Hook 这个方法来添加自定义菜单。**
