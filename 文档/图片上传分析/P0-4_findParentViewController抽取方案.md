# P0-4 修复方案：`findParentViewController` 抽取到 WPUtility

## 问题概述

`findParentViewController` 在两个模块中有完全相同的实现，属于复制粘贴重复代码。

### 现状

| 文件 | 行号 | 实现方式 | 调用次数 |
|------|------|---------|---------|
| `Modules/PlaceholderText/PlaceholderTextHook.m` | 第41-50行 | 递归遍历 responder chain | **1次**（第83行） |
| `Modules/ListCornerRadius/ListCornerRadiusHook.m` | 第29-38行 | 递归遍历 responder chain | **5次**（第142、275、300、322、442行） |

### 两处实现完全一致

```objc
// PlaceholderTextHook.m 第41-50行
static UIViewController *_Nullable findParentViewController(UIView *view) {
    UIResponder *responder = view;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            return (UIViewController *)responder;
        }
        responder = [responder nextResponder];
    }
    return nil;
}

// ListCornerRadiusHook.m 第29-38行（完全相同的逻辑，仅返回值类型标注不同）
static UIViewController *findParentViewController(UIView *view) {
    UIResponder *responder = view;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            return (UIViewController *)responder;
        }
        responder = [responder nextResponder];
    }
    return nil;
}
```

### 目标

- 将公共逻辑抽取到 `WPUtility`，两处删除重复代码
- 6处调用方改为 `[WPUtility findParentViewController:]`

---

## 详细修改步骤

### Step 1：在 WPUtility 中添加方法

**文件**: `Core/WPUtility.h`

**修改前**（第44行 `@end` 之前）:

```objc
@end
```

**修改后**:

```objc
/// 从 UIView 递归遍历 responder chain 查找所属的 UIViewController
/// 使用 while 循环而非递归，避免栈溢出风险
/// @param view 任意 UIView 实例
/// @return 查找到的 UIViewController，若不存在则返回 nil
+ (UIViewController *)findParentViewController:(UIView *)view;

@end
```

**文件**: `Core/WPUtility.m`

在 `@implementation WPUtility` 内部（推荐放在 `isDarkMode` 方法之后、`insertSystemTipMessageInSession:` 之前）：

```objc
+ (UIViewController *)findParentViewController:(UIView *)view {
    if (!view) return nil;

    UIResponder *responder = view;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            return (UIViewController *)responder;
        }
        responder = [responder nextResponder];
    }
    return nil;
}
```

**变更说明**:
| 项目 | 说明 |
|------|------|
| 参数检查 | 增加了 `if (!view) return nil` 防御性检查，避免传入 nil 时崩溃 |
| 遍历方式 | 保持 `while` 循环（最优，不触发函数调用栈、无栈溢出风险） |
| 返回值 | 统一为 `UIViewController *`（无 `_Nullable`，与 ListCornerRadiusHook.m 一致） |

---

### Step 2：修改 PlaceholderTextHook.m

**文件**: `Modules/PlaceholderText/PlaceholderTextHook.m`

#### 2.1 添加 import

在文件顶部 `#import` 区域添加:

```objc
#import "../../Core/WPUtility.h"
```

与其他 import 放在一起，例如放在第4行。

#### 2.2 删除 findParentViewController 定义

**删除**第39-50行（从注释 `// =====` 到 `}` 之间的完整 `findParentViewController` 函数定义）。

#### 2.3 修改调用处

**修改前**（第83行）:

```objc
    UIViewController *parentVC = findParentViewController((UIView *)self);
```

**修改后**:

```objc
    UIViewController *parentVC = [WPUtility findParentViewController:(UIView *)self];
```

---

### Step 3：修改 ListCornerRadiusHook.m

**文件**: `Modules/ListCornerRadius/ListCornerRadiusHook.m`

#### 3.1 添加 import

在文件顶部 `#import` 区域添加:

```objc
#import "../CornerResponsibility/CornerResponsibility.h"
```

（如果该行已有则跳过，否则在原 import 之后添加：

```objc
#import "../../Core/WPUtility.h"
```

#### 3.2 删除 findParentViewController 定义

**删除**第29-38行（`findParentViewController` 完整函数定义）。

#### 3.3 修改 5 处调用

**修改前**: 将 `ListCornerRadiusHook.m` 中找到的以下行:

| 行号 | 当前代码 |
|------|---------|
| 142 | `findParentViewController((UIView *)self)` |
| 275 | `findParentViewController((UIView *)self)` |
| 300 | `findParentViewController((UIView *)self)` |
| 322 | `findParentViewController((UIView *)self)` |
| 442 | `findParentViewController(view)` |

**修改后**: 全部改为:

```objc
[WPUtility findParentViewController:(UIView *)self]
```

```objc
[WPUtility findParentViewController:view]
```

每处修改只需要在 `findParentViewController(` 前面加上 `[WPUtility `，在 `)` 后面加上 `]`。

---

### Step 4：编译验证

修改完成后编译项目，确认：

1. `findParentViewController` 未定义的错误不存在（已被替换为 `[WPUtility findParentViewController:]`）
2. `WPUtility.h` 的 import 路径在两个文件中均正确
3. 无其他编译警告

---

## 代码量变化

| 文件 | 操作 | 行数变化 |
|------|------|---------|
| `Core/WPUtility.h` | 新增1行声明 | +1行 |
| `Core/WPUtility.m` | 新增10行实现 | +10行 |
| `PlaceholderTextHook.m` | 删除10行函数定义 | -10行 |
| `ListCornerRadiusHook.m` | 删除10行函数定义 | -10行 |
| **6处调用** | 改名前缀 | 0行变化 |
| **净减少** | | **-9行** |

---

## 测试验证

### 功能测试

| 测试用例 | 操作 | 预期结果 |
|---------|------|---------|
| 1. 占位符显示 | 进入任意聊天输入框 | 占位符文字正常显示 |
| 2. 列表圆角（全屏Cell） | 进入聊天列表 | 列表 Cell 圆角正常渲染 |
| 3. 列表圆角（非全屏Cell） | EMS：见下图 | 正常渲染 |
| 4. 列表圆角（搜索栏） | 打开微信搜索 | 搜索栏正常显示 |
| 5. nil 参数 | 代码本身不会传 nil，防御性检查确保不崩溃 | 不崩溃 |

### 回归测试

| 场景 | 操作 | 受影响功能 | 验证方法 |
|------|------|-----------|---------|
| 聊天输入 | 进入任意聊天 → 输入文字 | 占位符隐藏/显示 | 观察占位符是否正常消失和出现 |
| 列表圆角 | 进入聊天列表 → 滑动浏览 | 所有 Cell 圆角 | 观察 Cell 四角圆角效果 |
| 搜索栏 | 进入搜索 → 输入关键词 | 搜索建议列表圆角 | 观察建议列表样式 |