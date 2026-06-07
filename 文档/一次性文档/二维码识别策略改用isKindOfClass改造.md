# 二维码识别策略改用 `isKindOfClass:` 改造文档

## 改造目的

当前 `isQRCodeButton:` 使用 `containsString:@"Button"` 匹配类名，虽然配合位置条件足够安全，但不够**精准**。既然已确认二维码就是 `MMUIButton` 类，可以直接用 `isKindOfClass:[MMUIButton class]` 精确命中。

## 优势对比

| 方案 | 方式 | 精准度 | 兼容子类 |
|---|---|---|---|
| 当前 | `containsString:@"Button"` | 低（可能误匹配其他 Button） | 好 |
| 改造后 | `isKindOfClass:[MMUIButton class]` | **高**（只匹配 MMUIButton） | **好**（子类也会匹配） |

`isKindOfClass:` 比 `isEqualToString:` 更好——它不仅精确匹配 `MMUIButton`，还会匹配它的子类，兼容性有保障。

## 改动步骤

### 改动一：修改 `isQRCodeButton:` 方法

文件：`MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m`

**删除旧代码：**

```objc
/// 识别资料卡右侧的二维码按钮
/// 旧版已验证：二维码是一个 MMUIButton（类名含"Button"），位于父视图右侧
+ (BOOL)isQRCodeButton:(UIView *)view {
    NSString *cn = NSStringFromClass([view class]);
    if (![cn containsString:@"Button"]) return NO;
    // 位于右侧区域（距右边界 60pt 以内）
    CGFloat x = view.frame.origin.x;
    CGFloat parentW = view.superview.bounds.size.width;
    return x >= parentW - 60;
}
```

**替换为新代码：**

```objc
/// 识别资料卡右侧的二维码按钮
/// 二维码是 MMUIButton，用 isKindOfClass: 精准匹配（兼容子类）
+ (BOOL)isQRCodeButton:(UIView *)view {
    if (![view isKindOfClass:NSClassFromString(@"MMUIButton")]) return NO;
    // 位于右侧区域（距右边界 60pt 以内）
    CGFloat x = view.frame.origin.x;
    CGFloat parentW = view.superview.bounds.size.width;
    return x >= parentW - 60;
}
```

### 改动二：确认 `isArrowQRView:` 不需要改动

```objc
+ (BOOL)isArrowQRView:(UIView *)view {
    return [self isArrowQRByAccessibilityLabel:view] ||   // → 箭头
           [self isArrowQRByFrameHeuristic:view] ||       // → 箭头（UIImageView）
           [self isQRCodeButton:view];                    // → 二维码（MMUIButton）
}
```

方法 ③ 的引用不变，只是内部实现从 `containsString` 换成了 `isKindOfClass`。

## 为什么不用 `isEqualToString:`？

`isKindOfClass:` 优于 `isEqualToString:`：

```objc
// ❌ 只匹配 MMUIButton 本身，不匹配子类
[cn isEqualToString:@"MMUIButton"];

// ✅ 匹配 MMUIButton 及其所有子类
[view isKindOfClass:[MMUIButton class]];
```

如果微信将来把二维码改成 `MMUIButton` 的子类（例如 `@interface MyQRCodeButton : MMUIButton`），`isEqualToString:` 会失效，但 `isKindOfClass:` 仍然有效。

## 关于 MMUIButton 的引用方式

`MMUIButton` 是微信的私有类，没有头文件导入。有两种引用方式：

| 方式 | 代码 | 说明 |
|---|---|---|
| `NSClassFromString` | `NSClassFromString(@"MMUIButton")` | 运行时动态获取类对象，不需要 import |
| `objc_getClass` | `objc_getClass("MMUIButton")` | 与上面等价 |

推荐用 `NSClassFromString`，更符合 ObjC 风格：

```objc
Class mmUIButtonClass = NSClassFromString(@"MMUIButton");
if (!mmUIButtonClass) return NO;  // 类不存在时安全跳过
if (![view isKindOfClass:mmUIButtonClass]) return NO;
```

## 验证清单

| 检查项 | 预期结果 |
|---|---|
| 开启「隐藏箭码」 | 箭头隐藏、二维码隐藏 |
| 关闭「隐藏箭码」 | 箭头显示、二维码显示 |
| 同时开启资料卡隐藏 | 全部隐藏，二维码也不例外 |
| 切换深浅模式 | 两种模式行为一致 |

## 回退方案

如果改造后测试失败，恢复到旧代码即可：

```objc
// 回退到 containsString 方案
+ (BOOL)isQRCodeButton:(UIView *)view {
    NSString *cn = NSStringFromClass([view class]);
    if (![cn containsString:@"Button"]) return NO;
    CGFloat x = view.frame.origin.x;
    CGFloat parentW = view.superview.bounds.size.width;
    return x >= parentW - 60;
}
```