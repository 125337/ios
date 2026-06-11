# MessageTimeHook.m 死代码清理文档（最终检查）

> 基于你已修改的代码复核 | 2026-06-11
> 目标文件：[MessageTimeHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/MessageTime/MessageTimeHook.m)

---

## 检查结果

| 原问题 | 状态 | 说明 |
|--------|:----:|------|
| 1. 日志函数混用 NSLog/WPLog | **✅ 已修复** | 文件中 0 处 `NSLog`，全部使用 `WPLog` |
| 2. 未使用的全局变量和函数 | **❌ 仍存在** | 4 项死代码需要清理 |

---

## 问题 2：未使用的全局变量和函数（死代码）

### 2.1 `static const unsigned int kSystemMessageType` — 未使用

[L16](file:///www/wwwroot/ios/MioPlugin/Modules/MessageTime/MessageTimeHook.m#L16)：

```objc
static const unsigned int kSystemMessageType   = 10000;
```

全局搜索零引用。该常量定义的消息类型判断逻辑已被当前实现（`shouldShowMessageTimeForSubViewModel` 中的复合消息过滤）替代。

→ **直接删除**

---

### 2.2 `static Class s_CMessageWrapClass` — 未使用

[L19](file:///www/wwwroot/ios/MioPlugin/Modules/MessageTime/MessageTimeHook.m#L19)：

```objc
static Class s_CMessageWrapClass; // install 时初始化
```

声明后从未被赋值或读取。注释说"install 时初始化"，但 `install` 方法（L801-843）中没有对 `s_CMessageWrapClass` 做任何操作。

→ **直接删除**

---

### 2.3 `static UILabel *initTimeLabel(UIView *targetView)` + `kTimeLabelTag` — 整体死代码

[L15](file:///www/wwwroot/ios/MioPlugin/Modules/MessageTime/MessageTimeHook.m#L15) 和 [L36-L46](file:///www/wwwroot/ios/MioPlugin/Modules/MessageTime/MessageTimeHook.m#L36-L46)：

```objc
static const NSInteger kTimeLabelTag           = 999999;

static UILabel *initTimeLabel(UIView *targetView) {
    UILabel *label = objc_getAssociatedObject(targetView, @"msgTimeLabel");
    if (!label) {
        label = [[UILabel alloc] init];
        label.tag = kTimeLabelTag;
        label.userInteractionEnabled = NO;
        label.textAlignment = NSTextAlignmentNatural;
        objc_setAssociatedObject(targetView, @"msgTimeLabel", label, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return label;
}
```

`initTimeLabel` 全局搜索只有定义处一处引用，从未被任何代码调用。实际的 label 创建逻辑是在 `repl_CommonMessageCellView_updateNodeStatus`（[L487](file:///www/wwwroot/ios/MioPlugin/Modules/MessageTime/MessageTimeHook.m#L487)）中直接通过 `objc_getAssociatedObject` 获取，没有调用 `initTimeLabel`。

`kTimeLabelTag` 仅在 `initTimeLabel` 内部使用，属于函数级常量，随函数一起死亡。

→ **删除 `initTimeLabel` 函数定义 + `kTimeLabelTag` 常量声明**

---

## 最终变更清单

| 行号 | 当前代码 | 操作 |
|:----:|---------|:----:|
| L15 | `static const NSInteger kTimeLabelTag = 999999;` | 删除 |
| L16 | `static const unsigned int kSystemMessageType = 10000;` | 删除 |
| L19 | `static Class s_CMessageWrapClass;` | 删除 |
| L36-46 | `initTimeLabel` 函数完整定义（11 行） | 删除 |

**合计删除 14 行**，零影响。

删除后常量区从 5 行简化为干净声明：

```objc
// ============================================================
// MARK: - Constants
// ============================================================
static const CGFloat kMinContentViewWidth      = 5.0;
```

---

## 验证方法

编译无 warning，然后：

```bash
cd /www/wwwroot/ios
grep -rn "kSystemMessageType\|s_CMessageWrapClass\|initTimeLabel\|kTimeLabelTag" MioPlugin/Modules/MessageTime/
```

输出应为空。