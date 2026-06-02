# MioPlugin 搜索框圆角 & 资料卡圆角

> **更新日期**: 2026-06-02
> **目标文件**: [ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m)

---

## 1️⃣ 当前状态

| 功能 | 状态 | 说明 |
|------|:----:|------|
| 搜索框圆角 | ✅ 已生效 | `WCSearchBar.layoutSubviews` + `objc_msgSend` |
| 资料卡圆角 | ✅ 已生效 | `MMUIButton.layoutSubviews` Hook |
| 资料卡边距 | ✅ 生效 | MMUIButton Hook 设置 frame |
| **资料卡内容显示** | ❌ 截断 | 昵称显示"..."，微信号被截断 |

---

## 2️⃣ 内容截断根因分析

### 2.1 问题现象（截图）

- 左右边距生效 ✅
- 圆角生效 ✅
- **昵称显示为"..."，微信号显示为"gb123654..."** ❌ — 文字被 truncate

### 2.2 根因：frame 设置顺序错误

当前代码 [L169-L212](file:///wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L169-L212)：

```objc
static void replaced_MMUIButton_layoutSubviews(id self, SEL _cmd) {
    // ① ★ 先调用 orig — 此时 MMUIButton 是全宽的！
    _orig_MMUIButton_layoutSubviews(self, _cmd);
    //     ↓ orig 内部按全宽计算所有子视图的 frame
    //     ↓ label.width ≈ 320pt（假设屏幕375pt，减去头像和右侧箭头）
    //     ↓ 昵称 "啊哲" 在 320pt 的 label 里正常显示 ✓

    // ... 判断逻辑 ...

    // ② ★ 然后才缩窄 MMUIButton 的 frame
    self.frame = CGRectMake(margin, 0, targetW, currentH);
    //     ↓ MMUIButton 从 375pt 缩到 351pt（假设 margin=12）
    //     ↓ label 通过 autoresizingMask 随之变窄
    //     ↓ label.width 从 320pt → ~296pt
    //     ↓ 但文字布局已经完成了！不会重新排布
    //     ↓ 如果文字刚好在这个临界点 → 显示为 "..." ✗
}
```

### 2.3 时序图

```
时间 →

MMUIButton (width=375)
  │
  ├─ [1] orig layoutSubviews ──────────┐
  │     按 width=375 布局子视图         │
  │     label.frame = (50, 0, 320, 24)  │ ← label 足够宽，文字完整
  │     head.frame = (12, 8, 60, 60)    │
  │                                     │
  ├─ [2] self.frame 缩窄 ──────────────│
  │     width: 375 → 351               │
  │     ↓ autoresizingMask 生效        │
  │     label.frame → (50, 0, 296, 24) │ ← label 被压窄！
  │     但文字不重新排布                │ ← "啊哲" 可能变成 "..."
  │                                     │
  └─ [3] cornerRadius / masksToBounds ─┘
        裁剪溢出 + 圆角
```

### 2.4 为什么 v3 方案会这样

v3 方案的核心思路是"在 MMUIButton Hook 中设置 frame"，这没错。
但 v3 文档中错误地建议了 **先 orig 后改 frame** 的顺序——这对 Cell Hook 有效（因为 Cell Hook 不负责内容布局），但对 **MMUIButton Hook 无效**（因为 MMUIButton.orig 直接负责内部子视图布局）。

**关键区别**：

| Hook 点 | orig 负责什么 | 先改 frame 还是先 orig |
|---------|--------------|:----------------------:|
| Cell Hook | 布局 MMUIButton（不涉及文字） | 先 orig 后改 frame ✅ |
| **MMUIButton Hook** | **布局 label/head 等子视图（涉及文字）** | **先改 frame 后 orig ✅** |

---

## 3️⃣ 正确方案：MMUIButton Hook 中先设 frame 再调 orig

### 3.1 核心原则

**在哪个 Hook 中修改 frame，就在那个 Hook 中先把 frame 改好，再调 orig。**

MMUIButton Hook 修改的是 MMUIButton 自身的 frame → 必须在 MMUIButton.orig **之前**设置。

### 3.2 代码修改

#### MMUIButton Hook（[L169-L232](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L169-L232)）

**修改点只有一处：把 frame 设置从 orig 之后移到 orig 之前**

```objc
static void replaced_MMUIButton_layoutSubviews(id self, SEL _cmd) {

    PluginConfig *config = [PluginConfig shared];
    if (!config.listCornerRadiusEnabled) {
        // 不启用时正常走 orig
        if (_orig_MMUIButton_layoutSubviews) {
            ((void (*)(id, SEL))_orig_MMUIButton_layoutSubviews(self, _cmd);
        }
        return;
    }

    // ... VC 判断（L177-L189 保持不变） ...
    // ... MMHeadImageView 搜索（L191-L198 保持不变） ...
    // ... 高度判断（L200-L201 保持不变） ...

    // ★★★ 先设置 frame（缩窄）— 在 orig 之前！
    CGFloat margin = config.listCellMargin;
    if (margin > 0) {
        UIView *cell = ((UIView *)self).superview;
        if (cell) {
            CGFloat containerW = cell.superview ? cell.superview.bounds.size.width
                                                : [UIScreen mainScreen].bounds.size.width;
            CGFloat targetW = containerW - 2.0 * margin;
            CGFloat currentH = ((UIView *)self).frame.size.height;
            ((UIView *)self).frame = CGRectMake(margin, 0, targetW, currentH);
        }
    }

    // ★★★ 再调用 orig — orig 按缩窄后的尺寸布局子视图
    if (_orig_MMUIButton_layoutSubviews) {
        ((void (*)(id, SEL))_orig_MMUIButton_layoutSubviews(self, _cmd);
    }
    //     ↓ 此时 self.bounds.width = targetW（已缩窄）
    //     ↓ orig 按这个宽度计算 label 的 frame
    //     ↓ label.width = targetW - 头像宽度 - 右侧箭头 - 内边距
    //     ↓ 文字按这个宽度正确排布 ✓

    // 以下保持不变（圆角、边框、隐藏二维码）
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

#### Cell Hook（[L263-L288](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L263-L288)）

保持不变——只调 orig，不设 frame：

```objc
if (isMoreVC && [ListCornerRadiusHook wp_isProfileCard:cellView]) {
    if (_orig_MMTableViewCell_layoutSubviews) {
        ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews(self, _cmd);
    }
    // 不设 frame，不设 cornerRadius，全部交给 MMUIButton Hook
    return;
}
```

### 3.3 正确时序图

```
时间 →

MMUIButton (初始 width=375)
  │
  ├─ [1] self.frame 缩窄 ─────────────┐
  │     width: 375 → 351              │
  │     bounds 同步更新               │
  │                                   │
  ├─ [2] orig layoutSubviews ─────────│
  │     ★ 此时 self.bounds.width=351  │
  │     按 351pt 布局子视图           │
  │     label.frame = (50, 0, 296, 24) │ ← label 一开始就是窄的
  │     文字按 296pt 正常排布          │ ← "啊哲" 完整显示 ✓
  │                                   │
  └─ [3] cornerRadius / masksToBounds ┘
        裁剪 + 圆角
```

### 3.4 高度注意事项

**必须使用 orig 之前的 height**，不要用 orig 之后的 bounds.height：

```objc
// ✅ 正确：使用 orig 之前的 frame.height
CGFloat currentH = ((UIView *)self).frame.size.height;

// ❌ 错误：如果先用 orig 获取高度，可能不准确
// （因为此时还没有执行 orig，height 来自上一次布局）
```

如果高度异常（比如变成屏幕高度），可以加一个安全检查：
```objc
CGFloat currentH = ((UIView *)self).frame.size.height;
CGFloat screenH = [UIScreen mainScreen].bounds.size.height;
if (currentH > screenH * 0.5) currentH = 100.0;  // 资料卡通常不超过屏幕一半
```

---

## 4️⃣ 方案对比总结

| 对比项 | v3（旧） | v4（新，本方案） |
|--------|---------|----------------|
| frame 设置位置 | MMUIButton Hook | MMUIButton Hook ✅ |
| frame vs orig 顺序 | **先 orig 后改 frame** ❌ | **先改 frame 后 orig** ✅ |
| 内容显示 | 截断（"..."） | 预期正常 |
| 边距 | 生效 | 生效 |
| 圆角 | 生效 | 生效 |

**一句话总结**：
> **谁负责布局子视图，就先改好谁的 frame，再让它去布局。**
> Cell.orig 布局的是 MMUIButton → Cell Hook 可以先 orig 后改 frame
> MMUIButton.orig 布局的是 label/head → MMUIButton Hook 必须**先改 frame 后 orig**

---

## 5️⃣ 实施步骤

### Step 1: 修改 MMUIButton Hook（唯一需要改的地方）

文件：[ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m) [L169-L232](file:///wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L169-L232)

改动要点：
1. 把 frame 设置代码（当前 L203-213）从 **orig 之后** 移到 **orig 之前**
2. 把 orig 调用（当前 L170-172）从 **最开头** 移到 **frame 设置之后**
3. 当 `listCornerRadiusEnabled == NO` 时也要走 orig（不能跳过）

### Step 2: 编译验证

推送编译后检查：
- [ ] 资料卡有左右边距
- [ ] 昵称完整显示（不被截断为"..."）
- [ ] 微信号完整显示
- [ ] 圆角生效
- [ ] 边框生效（如开启）
- [ ] 二维码按钮隐藏（如开启）
- [ ] 其他列表 Cell 不受影响
- [ ] 滚动流畅无闪烁

---

## 6️⃣ 附录：方案演进历史

| 版本 | frame 位置 | orig 顺序 | 内容显示 | 边距 | 结果 |
|------|-----------|----------|:--------:|:----:|------|
| v1 | Cell Hook | 先改后 orig | ❌ 挤顶部 | ✅ | orig 按错尺寸布局 |
| v2 | Cell Hook | 先 orig 后改 | ✅ 正常 | ❌ 失效 | MMUIButton 不跟随 |
| v3 | **MMUIButton Hook** | **先 orig 后改** | ❌ **截断** | ✅ | label 被 autoresizingMask 压窄 |
| **v4（当前）** | **MMUIButton Hook** | **先改后 orig** | ✅ **预期正常** | ✅ | orig 按正确尺寸布局 |
