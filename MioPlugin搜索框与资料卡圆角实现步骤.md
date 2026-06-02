# MioPlugin 搜索框圆角 & 资料卡圆角

> **更新日期**: 2026-06-02
> **目标文件**: [ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m)

---

## 1️⃣ 当前状态

| 功能 | 状态 | 说明 |
|------|:----:|------|
| 搜索框圆角 | ✅ 已生效 | `WCSearchBar.layoutSubviews` + `objc_msgSend` |
| 资料卡圆角 | ✅ 已生效 | `MMUIButton.layoutSubviews` Hook 注册成功 |
| 资料卡边距 | ❌ 无左右边距 | Cell Hook 对资料卡提前 return，跳过了边距设置 |

---

## 2️⃣ 资料卡无边距问题

### 根因

Cell Hook 中，资料卡 Cell 在 L263-268 提前 return：

```objc
BOOL isMoreVC = [className isEqualToString:@"MoreViewController"];
if (isMoreVC && [ListCornerRadiusHook wp_isProfileCard:cellView]) {
    if (_orig_MMTableViewCell_layoutSubviews) {
        ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews)(self, _cmd);
    }
    return;  // ← 跳过了后面的边距设置逻辑
}
```

而边距设置在 L274-287：

```objc
CGFloat margin = config.listCellMargin;
if (margin > 0 && config.listCornerRadiusEnabled) {
    CGRect f = cellView.frame;
    f.origin.x = targetX;
    f.size.width = targetW;
    cellView.frame = f;
}
```

资料卡 Cell 提前 return 后，边距逻辑不会执行。MMUIButton Hook 中也没有设置 Cell 边距。

### 修复方案

在 Cell Hook 中，对资料卡 Cell **先设置边距，再 return**：

```objc
BOOL isMoreVC = [className isEqualToString:@"MoreViewController"];
if (isMoreVC && [ListCornerRadiusHook wp_isProfileCard:cellView]) {
    if (_orig_MMTableViewCell_layoutSubviews) {
        ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews)(self, _cmd);
    }
    
    // ★ 资料卡也需要设置边距
    CGFloat margin = config.listCellMargin;
    if (margin > 0 && config.listCornerRadiusEnabled) {
        UIView *superview = cellView.superview;
        CGFloat superX = superview ? superview.frame.origin.x : 0;
        CGFloat targetX = (margin > superX) ? margin - superX : 0;
        CGFloat containerW = superview ? superview.bounds.size.width
                                       : [UIScreen mainScreen].bounds.size.width;
        CGFloat targetW = containerW - 2.0 * margin;
        CGFloat currentX = cellView.frame.origin.x;
        CGFloat currentW = cellView.frame.size.width;
        if (currentX != targetX || fabs(currentW - targetW) > 0.5) {
            CGRect f = cellView.frame;
            f.origin.x = targetX;
            f.size.width = targetW;
            cellView.frame = f;
        }
    }
    
    return;
}
```

---

## 3️⃣ 微信优化资料卡实现（反编译精确还原）

### 3.1 视图层级

```
MMTableViewCell (cell)
  └── MMUIButton (资料卡按钮，占满整个 cell)
        ├── MMHeadImageView (头像)
        ├── MMCPLabel / MMUILabel (昵称/微信号)
        ├── MMUIButton / UIButton (二维码按钮)
        └── ...
```

### 3.2 Hook 实现

**Hook 点**: `MMUIButton.layoutSubviews`（[L8171-L8172](file:///www/wwwroot/ios/插件/微信优化反编译最新/123456.c#L8171-L8172)）

```objc
- (void)hooked_layoutSubviews {
    [orig layoutSubviews];
    
    if (![defaults boolForKey:@"MoreDiscoverListRoundCornerEnabled"]) return;
    
    // 从 self(MMUIButton) 向上遍历 superview 链找 UIViewController
    UIView *view = self;
    while (view) {
        if ([view isKindOfClass:[UIViewController class]]) break;
        view = [view superview];
    }
    
    if (view) {
        NSString *vcName = NSStringFromClass([view class]);
        if ([vcName isEqualToString:@"MoreViewController"]) {
            
            // 遍历 self.subviews 查找 MMHeadImageView
            for (UIView *subview in self.subviews) {
                if ([[NSStringFromClass([subview class])] isEqualToString:@"MMHeadImageView"]) {
                    
                    if (self.frame.size.height > 50.0) {
                        
                        [self.layer setCornerRadius:radius];
                        [self.layer setMasksToBounds:YES];
                        
                        if ([defaults boolForKey:@"ProfileCardBorderEnabled"]) {
                            CGFloat bw = [defaults floatForKey:@"ProfileCardBorderWidth"];
                            if (bw == 0) bw = 2.0;
                            [self.layer setBorderWidth:bw];
                            [self.layer setBorderColor:color.CGColor];
                        }
                        
                        // 隐藏二维码按钮
                        for (UIView *child in self.subviews) {
                            NSString *cn = NSStringFromClass([child class]);
                            if ([cn isEqualToString:@"MMUIButton"] || [cn isEqualToString:@"UIButton"]) {
                                if ([defaults boolForKey:@"HideQRCodeButton"]) {
                                    child.hidden = YES;
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

### 3.3 MioPlugin 与微信优化对比

| 对比项 | 微信优化 | MioPlugin | 状态 |
|--------|---------|-----------|:----:|
| Hook 点 | `MMUIButton.layoutSubviews` | `MMUIButton.layoutSubviews` | ✅ |
| VC 识别 | superview 链遍历 | `nextResponder` 链 | ✅ 等效 |
| MMHeadImageView 搜索 | `self.subviews` + `NSStringFromClass` | `self.subviews` + `isKindOfClass` | ✅ 等效 |
| 圆角设置对象 | `self.layer`（MMUIButton） | `(UIView *)self.layer` | ✅ |
| 边框 | `layer.borderWidth/borderColor` | `wp_applyProfileCardCorner` | ✅ |
| 隐藏二维码 | `child.hidden = YES` | `wp_hideQRButtonInCell` | ✅ |
| **Cell 边距** | 由 Cell Hook 统一处理 | Cell Hook 提前 return 跳过 | ❌ |
