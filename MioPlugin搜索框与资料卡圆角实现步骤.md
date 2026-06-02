# MioPlugin 搜索框圆角 & 资料卡圆角

> **更新日期**: 2026-06-02
> **目标文件**: [ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m)

---

## 1️⃣ 当前状态

| 功能 | 状态 | 说明 |
|------|:----:|------|
| 搜索框圆角 | ✅ 已生效 | `WCSearchBar.layoutSubviews` + `objc_msgSend` |
| 资料卡圆角 | ✅ 已生效 | `MMUIButton.layoutSubviews` Hook 注册成功 |
| 资料卡边距 | ❌ 无左右边距 | Cell Hook 修改 cell.frame 后 MMUIButton 不跟随 |

---

## 2️⃣ 资料卡无边距问题

### 根因

**视图层级**：
```
MMTableViewCell (cell)          ← Cell Hook 修改 frame（缩窄）
  └── MMUIButton (资料卡按钮)   ← 不跟随 cell 缩窄，仍为原始全宽
```

**执行顺序**：
1. Cell Hook 调用 `orig layoutSubviews` → MMUIButton 按原始 cell 全宽布局
2. Cell Hook 修改 cell.frame（缩窄 origin.x + width）→ cell 变窄了
3. 但 MMUIButton 的 frame **不会自动跟随 cell 缩窄**，仍为原始全宽
4. MMUIButton Hook 设置 `masksToBounds = YES`，但 MMUIButton 本身就是全宽，看不到边距

### 微信优化是怎么做到的

**微信优化在 Cell Hook 中只修改 cell 的 `origin.x`，不修改 `width`**（[L8425-L8426](file:///www/wwwroot/ios/插件/微信优化反编译最新/123456.c#L8425-L8426)）：

```objc
// 微信优化还原（Cell Hook FUN_0000b4cc L8393-L8427）
CGFloat margin = [defaults integerForKey:@"CellHorizontalMargin"];  // L8406-8411, 默认 9
if (margin == 0) margin = 9;

CGFloat screenW = [UIScreen mainScreen].bounds.size.width;  // L8401-8405
if (screenW - 2 * margin <= screenW) {  // L8416: always true
    CGFloat targetX = margin;
    UIView *superview = [cell superview];  // L8412-8414
    if (superview) {
        CGFloat superX = [superview frame].origin.x;  // L8419
        targetX = MAX(0, margin - superX);  // L8420-8423
    }
    [cell setFrame:CGRectMake(targetX, ...)];  // L8425-8426: 只修改 origin.x
}
```

**关键差异**：微信优化只修改 `origin.x`，不修改 `width`。右边距由 `cornerRadius + masksToBounds` 裁剪产生。

**但 MMUIButton 仍然不跟随 origin.x 变化！** 微信优化之所以能生效，是因为：

1. **微信原生的 `MMUIButton` 设置了 `autoresizingMask = UIViewAutoresizingFlexibleWidth`**，当 cell 的 bounds 改变时，MMUIButton 会自动调整宽度
2. 或者 **微信优化通过两次 Hook `MMTableViewCell.layoutSubviews`**（L8231 用 `DAT_0013a9b0`，L9054 用 `DAT_0013a9d0`），在第二次 Hook 中处理了背景色，而第一次 Hook 中设置了边距后触发了重新布局

### 修复方案

**方案 A（推荐）**: 在 MMUIButton Hook 中直接设置 MMUIButton 的 frame，使其填满缩窄后的 cell：

```objc
// 在 replaced_MMUIButton_layoutSubviews 中，设置圆角之前：
CGFloat margin = config.listCellMargin;
if (margin > 0 && config.listCornerRadiusEnabled) {
    UIView *cell = ((UIView *)self).superview;
    if (cell) {
        CGFloat containerW = cell.superview ? cell.superview.bounds.size.width
                                           : [UIScreen mainScreen].bounds.size.width;
        CGFloat targetW = containerW - 2.0 * margin;
        ((UIView *)self).frame = CGRectMake(margin, 0, targetW, cell.bounds.size.height);
    }
}
```

**方案 B**: 在 Cell Hook 中，对资料卡 Cell 只修改 `origin.x`（与微信优化一致），不修改 `width`。然后在 MMUIButton Hook 中也只修改 `origin.x`。

**方案 C**: 在 MMUIButton Hook 中设置 `autoresizingMask`，使其跟随 cell 宽度变化：

```objc
((UIView *)self).autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
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

### 3.2 Cell Hook（FUN_0000b4cc）对 MoreViewController 的处理

微信优化对 `MMTableViewCell.layoutSubviews` 进行了**两次 Hook**（链式），产生两个 orig 指针：

- **第一次 Hook**（`DAT_0013a9b0`）：边距 + 圆角处理
- **第二次 Hook**（`DAT_0013a9d0`）：背景色清理

**第一次 Hook 中**（L8231-L9040）：
1. 调用 orig1
2. 检查 `MoreDiscoverListRoundCornerEnabled` 开关
3. 向上遍历 superview 链找 VC
4. 对所有非排除名单的 VC（包括 `MoreViewController`）设置边距（只修改 origin.x）
5. 设置圆角、边框等

**第二次 Hook 中**（L9054-L9243）：
1. 调用 orig2（= 第一次 Hook 的替换函数）
2. 检查 `MoreDiscoverListRoundCornerEnabled` 开关
3. 向上遍历 superview 链找 VC
4. 对 `MoreViewController` + `MMUIButton` + `TextStateProfileTableView` 组合，设置 cell 背景色为 clearColor

### 3.3 MMUIButton Hook（FUN_0000d898）对资料卡的处理

```objc
- (void)hooked_layoutSubviews {
    [orig layoutSubviews];
    
    if (![defaults boolForKey:@"MoreDiscoverListRoundCornerEnabled"]) return;
    
    UIView *view = self;
    while (view) {
        if ([view isKindOfClass:[UIViewController class]]) break;
        view = [view superview];
    }
    
    if (view) {
        NSString *vcName = NSStringFromClass([view class]);
        if ([vcName isEqualToString:@"MoreViewController"]) {
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

### 3.4 MioPlugin 与微信优化对比

| 对比项 | 微信优化 | MioPlugin | 状态 |
|--------|---------|-----------|:----:|
| 搜索框获取方式 | `objc_msgSend` | `objc_msgSend` | ✅ |
| 资料卡 Hook 点 | `MMUIButton.layoutSubviews` | `MMUIButton.layoutSubviews` | ✅ |
| Cell 边距方式 | 只修改 `origin.x`，不修改 `width` | 修改 `origin.x` + `width` | ❌ 需对齐 |
| Cell Hook 链式 | 两次 Hook（边距+圆角 / 背景色） | 一次 Hook | 🟡 可选优化 |
| MMUIButton 边距 | 由 cell origin.x + autoresizingMask 跟随 | 未设置 | ❌ 需修复 |
| 资料卡背景色 | Cell Hook 第二次 Hook 设 clearColor | Cell Hook 中处理 | ✅ 等效 |
