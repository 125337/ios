# MioPlugin 搜索框圆角 & 资料卡圆角

> **更新日期**: 2026-06-02
> **目标文件**: [ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m)

---

## 1️⃣ 当前状态

| 功能 | 状态 | 说明 |
|------|:----:|------|
| 搜索框圆角 | ✅ 已生效 | `WCSearchBar.layoutSubviews` + `objc_msgSend(self, "searchBoxContainer")` |
| 资料卡圆角 | ❌ 未生效 | 代码已写但**未推送编译** |

### 资料卡未生效的直接原因

**本地代码有未提交的修改**（`git status` 显示 `ListCornerRadiusHook.m` 已修改），包含 MMUIButton Hook 和懒注册逻辑，但这些修改从未推送编译。当前运行的 dylib 是旧版本，不包含这些代码。

---

## 2️⃣ 微信优化资料卡真实实现（反编译精确还原）

### 2.1 微信资料卡视图层级

```
MMTableViewCell (cell)
  └── MMUIButton (资料卡按钮，占满整个 cell)
        ├── MMHeadImageView (头像)
        ├── MMCPLabel / MMUILabel (昵称/微信号)
        ├── MMUIButton / UIButton (二维码按钮)
        └── ...
```

**关键**: `MMHeadImageView` 是 `MMUIButton` 的直接子视图，不是 `MMTableViewCell` 的直接子视图。

### 2.2 微信优化 Hook 实现

**Hook 点**: `MMUIButton.layoutSubviews`（[L8171-L8172](file:///www/wwwroot/ios/插件/微信优化反编译最新/123456.c#L8171-L8172)）

**Hook 函数** `FUN_0000d898`（[L9485-](file:///www/wwwroot/ios/插件/微信优化反编译最新/123456.c#L9485)）还原：

```objc
- (void)hooked_layoutSubviews {
    [orig layoutSubviews];                    // L9543
    
    if (![defaults boolForKey:@"MoreDiscoverListRoundCornerEnabled"]) return;  // L9547
    
    // 从 self(MMUIButton) 向上遍历 superview 链找 UIViewController
    UIView *view = self;                       // L9549: lVar6 = param_1
    while (view) {
        if ([view isKindOfClass:[UIViewController class]]) break;  // L9554-9555
        view = [view superview];               // L9560-9563
    }
    
    if (view) {
        NSString *vcName = NSStringFromClass([view class]);  // L9568-9570
        if ([vcName isEqualToString:@"MoreViewController"]) {  // L9571
            
            // 遍历 self(MMUIButton).subviews 查找 MMHeadImageView
            for (UIView *subview in self.subviews) {  // L9581
                if ([[NSStringFromClass([subview class])] isEqualToString:@"MMHeadImageView"]) {  // L9596
                    
                    if (self.frame.size.height > 50.0) {  // L9600-9601
                        
                        // 设置圆角（在 MMUIButton 上）
                        [self.layer setCornerRadius:radius];      // L9697
                        [self.layer setMasksToBounds:YES];       // L9701
                        
                        // 设置边框
                        if ([defaults boolForKey:@"ProfileCardBorderEnabled"]) {  // L9703
                            CGFloat bw = [defaults floatForKey:@"ProfileCardBorderWidth"];  // L9705
                            if (bw == 0) bw = 2.0;
                            [self.layer setBorderWidth:bw];      // L9714
                            [self.layer setBorderColor:color.CGColor];  // L9720
                        }
                        
                        // 遍历 self.subviews 处理标签和二维码
                        for (UIView *child in self.subviews) {  // L9617
                            NSString *cn = NSStringFromClass([child class]);  // L9631-9632
                            if ([cn isEqualToString:@"MMCPLabel"] || 
                                [cn isEqualToString:@"MMUILabel"]) {
                                // Label 背景色调整
                            } else if ([cn isEqualToString:@"MMUIButton"] || 
                                       [cn isEqualToString:@"UIButton"]) {
                                if ([defaults boolForKey:@"HideQRCodeButton"]) {  // L9642
                                    child.hidden = YES;  // L9643
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
```

### 2.3 核心差异

| 对比项 | 微信优化 | MioPlugin（本地未推送版本） |
|--------|---------|-----------|
| Hook 点 | `MMUIButton.layoutSubviews` | `MMUIButton.layoutSubviews` ✅ 一致 |
| VC 识别 | 向上遍历 superview 链 | `nextResponder` 链 ✅ 等效 |
| MMHeadImageView 搜索 | `self.subviews` 第一层 + `NSStringFromClass` | `self.subviews` 第一层 + `NSClassFromString + isKindOfClass` ✅ 等效 |
| 圆角设置对象 | `self.layer`（MMUIButton） | `(UIView *)self.layer`（MMUIButton） ✅ 一致 |
| 懒注册 | 在 constructor 中直接注册 | 在 `replaced_MMTableViewCell_layoutSubviews` 中懒注册 ✅ 解决延迟加载 |

---

## 3️⃣ 待执行操作

### 🔴 推送编译

本地代码已包含完整的资料卡 Hook 实现，但**未推送编译**。需要：

```bash
cd /www/wwwroot/ios && git add -A && git commit -m "build: $(date +%Y%m%d_%H%M%S)" && git push origin HEAD
```

### 🟡 懒注册验证

当前懒注册逻辑在 `replaced_MMTableViewCell_layoutSubviews` 开头：

```objc
if (!_orig_MMUIButton_layoutSubviews) {
    Class MMUIButtonClass = objc_getClass("MMUIButton");
    if (MMUIButtonClass) {
        MSHookMessageEx(MMUIButtonClass, @selector(layoutSubviews),
            (IMP)replaced_MMUIButton_layoutSubviews, &_orig_MMUIButton_layoutSubviews);
        WPLog(@"ListCornerRadius", @"[OK] MMUIButton::layoutSubviews (lazy registered)");
    }
}
```

这种方式在第一次 Cell layoutSubviews 时尝试注册 MMUIButton Hook。如果此时 `MMUIButton` 类已加载（用户进入过任何有列表的页面），则注册成功。

### 🟡 Cell Hook 中的资料卡跳过

当前在 `replaced_MMTableViewCell_layoutSubviews` 中：

```objc
if (isMoreVC && [ListCornerRadiusHook wp_isProfileCard:cellView]) {
    // 调用 original 后直接 return，不执行标准圆角/边框
    return;
}
```

这确保资料卡 Cell 不会被 Cell Hook 和 MMUIButton Hook 同时处理。
