# MioPlugin 搜索框圆角 & 资料卡圆角

> **更新日期**: 2026-06-02
> **目标文件**: [ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m)

---

## 1️⃣ 当前状态

| 功能 | 状态 | 说明 |
|------|:----:|------|
| 搜索框圆角 | ✅ 已生效 | `WCSearchBar.layoutSubviews` + `objc_msgSend` |
| 资料卡圆角 | ✅ 已生效 | `MMUIButton.layoutSubviews` Hook 注册成功 |
| 资料卡边距 | ✅ 有左右边距 | Cell Hook + MMUIButton Hook 均设置 frame |
| **资料卡内容显示** | ❌ 异常 | 内容（头像+文字）挤在顶部，下方大片空白 |

---

## 2️⃣ 资料卡内容显示异常问题

### 当前症状（2026-06-02 截图）

- 圆角生效 ✅
- 左右边距生效 ✅
- **内容（头像+昵称+微信号）挤在卡片顶部，下方大片空白** ❌

### 根因分析

#### 问题 1: Cell Hook 中 frame 修改和 orig 调用顺序错误

当前代码 [L275-L300](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L275-L300)：

```objc
// ❌ 当前错误顺序
if (isMoreVC && wp_isProfileCard) {
    // ① 先修改 cell.frame（缩窄 width）
    cellView.frame = CGRectMake(targetX, 0, targetW, ...);

    // ② 然后才调用 orig layoutSubviews
    _orig_MMTableViewCell_layoutSubviews(self, _cmd);  // ← cell 已经缩窄了！
    return;
}
```

**后果**: orig 按缩窄后的 cell bounds 来布局 MMUIButton 及其内部子视图，所有空间计算基于错误的尺寸。

#### 问题 2: Cell Hook 和 MMUIButton Hook 同时修改 frame，产生冲突

| Hook 点 | 操作 | 影响 |
|---------|------|------|
| Cell Hook | 缩窄 cell.frame (width) | MMUIButton 被 orig 按**新尺寸**布局 |
| MMUIButton Hook | 读取 self.height（已被影响），重新设置 self.frame = (margin, 0, targetW, currentH) | 与上一步产生二次冲突 |

**结果**: MMUIButton 内部子视图（头像、标签等）位置计算混乱，内容挤在顶部。

### 微信优化是怎么做到的

微信优化对 `MMTableViewCell.layoutSubviews` 进行了**两次链式 Hook**：
1. **第一次 Hook**: 调用 orig → 设置边距（只改 origin.x，不改 width）→ 设置圆角
2. **第二次 Hook**: 调用 orig2（=第一次的替换函数）→ 清理背景色

关键：微信优化只修改 `origin.x`，不修改 `width`。且两次 Hook 的执行顺序保证了布局一致性。

### 修复方案（推荐）

**核心原则**: 只在一个地方设置 frame，避免冲突。

**Step 1**: Cell Hook 中修正顺序——先 orig 后改 frame，MMUIButton Hook 中移除 frame 设置：

```objc
// Cell Hook - 资料卡分支（修正后）
if (isMoreVC && [ListCornerRadiusHook wp_isProfileCard:cellView]) {

    // ★ 先调用 orig，让子视图按原始尺寸正确布局
    if (_orig_MMTableViewCell_layoutSubviews) {
        ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews)(self, _cmd);
    }

    // ★ 然后再修改 cell.frame（缩窄）
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

    return;  // 圆角/边框/隐藏二维码由 MMUIButton Hook 处理
}
```

```objc
// MMUIButton Hook - 移除所有 frame 设置代码
static void replaced_MMUIButton_layoutSubviews(id self, SEL _cmd) {
    if (_orig_MMUIButton_layoutSubviews) {
        ((void (*)(id, SEL))_orig_MMUIButton_layoutSubviews)(self, _cmd);
    }

    PluginConfig *config = [PluginConfig shared];
    if (!config.listCornerRadiusEnabled) return;

    // ... VC 判断 / MMHeadImageView 搜索 / 高度判断 ...

    // ★ 不设置 frame！只设置圆角属性
    NSInteger radius = (NSInteger)config.listCellCornerRadius;
    if (radius == 0) radius = 18;

    [ListCornerRadiusHook wp_applyProfileCardCorner:(UIView *)self
                                       cornerRadius:radius
                                            isDark:isDark];

    if (config.listHideRightQRCode) {
        [ListCornerRadiusHook wp_hideQRButtonInCell:(UIView *)self];
    }
}
```

**为什么这样能工作**:
1. Cell Hook 先让 orig 用原始全宽布局好所有子视图（MMUIButton 及其内部头像、标签等）
2. 然后再缩窄 cell.frame → MMUIButton 已有正确的内部布局
3. MMUIButton 可能因 `autoresizingMask` 或保持原尺寸而溢出 cell 边界
4. 但 `masksToBounds = YES` + `cornerRadius` 会裁剪溢出部分，视觉效果正确

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

### 3.2 Cell Hook 对 MoreViewController 的处理

微信优化进行**两次链式 Hook**:
- **第一次 Hook**: 边距 + 圆角（只改 origin.x）
- **第二次 Hook**: 背景色清理（clearColor）

### 3.3 MMUIButton Hook 对资料卡的处理

只负责：圆角、边框、隐藏二维码。**不修改 frame**。

### 3.4 对比表

| 对比项 | 微信优化 | MioPlugin（当前） | MioPlugin（修复后） |
|--------|---------|-----------|:------------:|
| 搜索框获取方式 | `objc_msgSend` | `objc_msgSend` | ✅ |
| 资料卡 Hook 点 | `MMUIButton.layoutSubviews` | `MMUIButton.layoutSubviews` | ✅ |
| Cell Hook 顺序 | orig → 改 frame | 改 frame → orig ❌ | orig → 改 frame ✅ |
| MMUIButton 设 frame | ❌ 不设 | ✅ 设了（冲突）❌ | ❌ 不设 ✅ |
