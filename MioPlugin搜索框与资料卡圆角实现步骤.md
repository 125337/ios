# MioPlugin 搜索框圆角 & 资料卡圆角

> **更新日期**: 2026-06-02
> **目标文件**: [ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m)

---

## 1️⃣ 当前状态

| 功能 | 状态 | 说明 |
|------|:----:|------|
| 搜索框圆角 | ✅ 已生效 | `WCSearchBar.layoutSubviews` + `objc_msgSend` |
| 资料卡圆角 | ✅ 已生效 | `MMUIButton.layoutSubviews` Hook 注册成功 |
| 资料卡边距（旧方案） | ❌ 失效 | Cell Hook 改 frame → 被 UITableView 覆盖或 MMUIButton 不跟随 |
| **资料卡内容显示** | ✅ 正常 | 先 orig 后改 frame 的顺序正确 |

---

## 2️⃣ 边距失效根因深度分析

### 2.1 问题现象

采用"先orig后改frame"方案（文档 v3 推荐方案）后：
- 内容（头像+昵称+微信号）显示正常 ✅
- **左右边距失效，资料卡全宽显示** ❌

### 2.2 为什么修改 cell.frame 无效

#### 原因 1：视图层级中的"真身"

```
MMTableViewCell (cell)          ← 逻辑容器，frame 由 UITableView 管理
  └── MMUIButton (self)         ← ★ 视觉容器！这才是用户看到的卡片
        ├── MMHeadImageView     ← 头像
        ├── MMCPLabel           ← 昵称
        └── MMUILabel           ← 微信号
```

**MMUIButton 才是真正的视觉容器**。用户看到的"资料卡"实际上是 MMUIButton，不是 cell。

#### 原因 2：autoresizingMask 的双向影响

当我们修改 `cell.frame.width` 缩窄时：

| MMUIButton 的 autoresizingMask | 行为 | 结果 |
|--------------------------------|------|------|
| 含 `UIViewAutoresizingFlexibleWidth` | MMUIButton 随 cell 缩小 | 内容已被 orig 按原始尺寸布局好，缩小后内容溢出或压缩 |
| 不含 `UIViewAutoresizingFlexibleWidth` | MMUIButton 保持原尺寸 | **MMUIButton 溢出 cell 边界，视觉上仍然是全宽** |

从截图看，属于第二种情况——MMUIButton 保持原尺寸溢出 cell。

#### 原因 3：UITableView 可能覆盖 cell.frame

`UITableView` 在内部布局过程中会主动设置每个 cell 的 frame。我们在 `layoutSubviews` 结束后修改的 frame，可能在下一次布局循环中被覆盖。

### 2.3 微信优化为什么能生效

微信优化**只改 `origin.x`，不改 `width`**：

```objc
// 微信优化伪代码
cell.frame.origin.x = margin;   // 只移动位置
// cell.frame.size.width 不变    // 宽度保持原样
```

**为什么只改 x 能工作**：
1. 微信优化的边距效果是通过**让 cell 整体右移**实现的
2. 因为 width 不变，MMUIButton 的 autoresizingMask 不会被触发
3. UITableView 对 `origin.x` 的容忍度比 `size.width` 高
4. 左侧空白由 cell 的背景色（或父视图背景色）填充

**但我们的需求不同**：我们需要的是**缩小内容宽度产生边距**，不是移动 cell 位置。所以不能照搬微信优化的方案。

---

## 3️⃣ 新方案：在 MMUIButton Hook 中设置 frame

### 3.1 核心思路

**谁负责视觉效果，就由谁来设置 frame**。

MMUIButton 是视觉容器 → 在 `MMUIButton.layoutSubviews` 中设置 MMUIButton 自身的 frame。

### 3.2 方案设计

#### Cell Hook 职责（精简版）

```objc
// replaced_MMTableViewCell_layoutSubviews - 资料卡分支
if (isMoreVC && [ListCornerRadiusHook wp_isProfileCard:cellView]) {

    // ① 调用 orig（必须最先执行，确保子视图正确布局）
    if (_orig_MMTableViewCell_layoutSubviews) {
        ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews(self, _cmd);
    }

    // ② 只设置 cell 层级的属性：圆角、背景色、masksToBounds
    //    ★ 不修改 cell.frame！
    NSInteger radius = (NSInteger)config.listCellCornerRadius;
    if (radius == 0) radius = 18;
    cellView.layer.cornerRadius = radius;
    cellView.layer.masksToBounds = YES;

    return;
    // 边距、详细圆角、边框、隐藏二维码 → 全部交给 MMUIButton Hook
}
```

#### MMUIButton Hook 职责（增强版）

```objc
static void replaced_MMUIButton_layoutSubviews(id self, SEL _cmd) {

    // ① 调用 orig（必须最先执行）
    if (_orig_MMUIButton_layoutSubviews) {
        ((void (*)(id, SEL))_orig_MMUIButton_layoutSubviews(self, _cmd);
    }

    PluginConfig *config = [PluginConfig shared];
    if (!config.listCornerRadiusEnabled) return;

    // ... VC 判断 / MMHeadImageView 搜索 / 高度判断（保持不变） ...

    // ② ★ 设置边距（修改 MMUIButton 自身的 frame）
    CGFloat margin = config.listCellMargin;
    if (margin > 0) {
        UIView *cell = ((UIView *)self).superview;  // MMUITableViewCell
        if (cell) {
            CGFloat containerW = cell.superview ? cell.superview.bounds.size.width
                                                : [UIScreen mainScreen].bounds.size.width;
            CGFloat targetW = containerW - 2.0 * margin;
            CGFloat currentH = ((UIView *)self).frame.size.height;

            // 关键：使用 bounds.height 而非 frame.height
            // 因为 orig 刚执行完，bounds 已更新
            CGFloat correctH = ((UIView *)self).bounds.size.height;
            if (correctH > currentH) currentH = correctH;

            ((UIView *)self).frame = CGRectMake(margin, 0, targetW, currentH);
        }
    }

    // ③ 设置圆角、边框、隐藏二维码
    BOOL isDark = NO;
    if (@available(iOS 13.0, *)) {
        isDark = (vc.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark);
    }
    NSInteger radius = (NSInteger)config.listCellCornerRadius;
    if (radius == 0) radius = 18;

    [ListCornerRadiusHook wp_applyProfileCardCorner:(UIView *)self
                                       cornerRadius:radius
                                            isDark:isDark];

    if (config.listHideRightQRCode) {
        [ListCornerRadiusHook wp_hideQRButtonInCell:(UIView *)self];
    }

    ((UIView *)self).layer.masksToBounds = YES;
}
```

### 3.3 为什么这个方案能工作

| 步骤 | 操作 | 结果 |
|------|------|------|
| Cell Hook orig | 按原始全宽布局 MMUIButton | MMUIButton 内部子视图正确排列 |
| Cell Hook 返回 | 不改 cell.frame | cell 保持全宽，不被 UITableView 抵制 |
| MMUIButton Hook orig | MMUIButton 内部子视图 layoutSubviews | 头像/标签等位置确定 |
| MMUIButton Hook 设 frame | 缩窄 MMUIButton 自身 | **直接作用于视觉容器** |
| masksToBounds + cornerRadius | 裁剪溢出+圆角 | 视觉效果正确 |

**关键优势**：
1. 修改的是**视觉容器自身**的 frame，不是父容器的
2. 不涉及 autoresizingMask 的级联问题
3. 不受 UITableView 的 frame 管理干扰
4. orig 在 frame 修改**之前**执行，内容布局基于正确的原始尺寸

### 3.4 注意事项

1. **高度获取**：使用 `self.bounds.size.height` 而非 `self.frame.size.height`
   - orig 执行后 bounds 已更新，更准确
   - 如果 bounds 和 frame 差异大，以较大的为准

2. **cell 不设 masksToBounds**：cell 层级不需要裁剪，裁剪由 MMUIButton 负责

3. **cell 不设 cornerRadius**：圆角也由 MMUIButton 负责，cell 保持矩形避免干扰

4. **边框绘制**：在 MMUIButton 上绘制，与圆角一致

---

## 4️⃣ 微信优化 vs MioPlugin 方案对比

| 对比项 | 微信优化 | MioPlugin（新方案） |
|--------|---------|-------------------|
| 边距实现方式 | 改 cell.origin.x（右移） | 改 MMUIButton.frame（缩窄） |
| 视觉原理 | cell 右移，左侧留白 | MMUIButton 缩窄，两侧留白 |
| width 是否变化 | ❌ 不变 | ✅ 变小 |
| 修改目标 | cell（逻辑容器） | MMUIButton（视觉容器） |
| 圆角设置位置 | cell + MMUIButton | 仅 MMUIButton |
| 背景色清理 | 第二次链式 Hook | Cell Hook 中处理 |
| 代码复杂度 | 两次链式 Hook | 两个独立 Hook，职责清晰 |

**为什么不能照搬微信优化**：
- 微信优化只改 origin.x，产生的边距是"左移右溢"，依赖 cell 背景色遮罩
- 我们的 UI 设计需要**真正的两侧等宽边距**，必须缩小内容宽度
- 缩小宽度必须在**视觉容器**上操作才有效

---

## 5️⃣ 实施步骤

### Step 1: 修改 Cell Hook（[L263-L288](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L263-L288)）

移除所有 frame 设置代码，只保留 orig 调用和返回：

```objc
if (isMoreVC && [ListCornerRadiusHook wp_isProfileCard:cellView]) {
    if (_orig_MMTableViewCell_layoutSubviews) {
        ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews(self, _cmd);
    }
    // ★ 删除所有 frame 设置代码（L269-285）
    return;
}
```

### Step 2: 修改 MMUIButton Hook（[L169-L220](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L169-L220)）

在 orig 调用之后、圆角设置之前，添加 frame 设置代码：

```objc
static void replaced_MMUIButton_layoutSubviews(id self, SEL _cmd) {
    if (_orig_MMUIButton_layoutSubviews) {
        ((void (*)(id, SEL))_orig_MMUIButton_layoutSubviews(self, _cmd);
    }

    PluginConfig *config = [PluginConfig shared];
    if (!config.listCornerRadiusEnabled) return;

    // ... VC 判断 / MMHeadImageView 搜索 / 高度判断（L177-L201 保持不变） ...

    // ★ 新增：设置边距
    CGFloat margin = config.listCellMargin;
    if (margin > 0) {
        UIView *cell = ((UIView *)self).superview;
        if (cell) {
            CGFloat containerW = cell.superview ? cell.superview.bounds.size.width
                                                : [UIScreen mainScreen].bounds.size.width;
            CGFloat targetW = containerW - 2.0 * margin;
            CGFloat currentH = ((UIView *)self).bounds.size.height;
            ((UIView *)self).frame = CGRectMake(margin, 0, targetW, currentH);
        }
    }

    // 以下保持不变（圆角、边框、隐藏二维码）
    // ...
}
```

### Step 3: 编译验证

推送编译后检查：
- [ ] 资料卡有左右边距
- [ ] 内容（头像+昵称+微信号）位置正常
- [ ] 圆角生效
- [ ] 边框生效（如开启）
- [ ] 二维码按钮隐藏（如开启）
- [ ] 其他列表 Cell 不受影响

---

## 6️⃣ 附录：历史方案演进

| 版本 | 方案 | 内容显示 | 边距 | 问题 |
|------|------|:--------:|:----:|------|
| v1 | Cell Hook: 先改frame后orig | ❌ 挤在顶部 | ✅ | orig 按错误尺寸布局 |
| v2 | Cell Hook: 先orig后改frame + MMUIButton不改frame | ✅ 正常 | ❌ 失效 | cell.frame 被覆盖/MMUIButton不跟随 |
| **v3（当前）** | **Cell Hook: 只调orig + MMUIButton: 设置frame** | ✅ 预期正常 | ✅ 预期有效 | 待验证 |
