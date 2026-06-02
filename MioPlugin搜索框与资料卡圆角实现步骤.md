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
| **资料卡内容显示** | ❌ 截断 | 昵称"..."，微信号截断 |

---

## 2️⃣ 微信优化的真实做法（反编译精确分析）

### 2.1 MMUIButton Hook 完整流程（FUN_0000d898）

```c
void FUN_0000d898(id self) {

    // ══════════════════════════════════════
    // 第一步：最先调用 orig（★ 关键！）
    // ══════════════════════════════════════
    (*DAT_0013a9f0)();   // _orig_MMUIButton_layoutSubviews(self, _cmd)

    // ... 配置读取 / VC 判断 / MMHeadImageView 搜索 / 高度判断 ...

    // ══════════════════════════════════════
    // 第二步：遍历子视图，对 UILabel 做宽度修正
    // ══════════════════════════════════════
    for (UIView *sub in self.subviews) {
        if ([sub isKindOfClass:[MMCPLabel class]] ||
            [sub isKindOfClass:[MMUILabel class]]) {
            // 跳过，只处理纯 UILabel
            continue;
        }
        if ([sub isKindOfClass:[UILabel class]]) {
            NSString *text = [sub text];     // FUN_000d0620
            if (text) {
                CGFloat margin = /* 从配置读取 */;  // FUN_000c7280
                if (margin > 0) {
                    [sub sizeToFit];          // FUN_000cfc40 ★ 核心！
                }
            }
        }
        // 同时处理二维码按钮隐藏...
    }

    // ══════════════════════════════════════
    // 第三步：设置圆角 / masksToBounds / 边框
    // ══════════════════════════════════════
    // cornerRadius + masksToBounds + border layer...
}
```

### 2.2 关键发现

**微信优化不改 MMUIButton 的 frame！** 它的做法是：

| 步骤 | 操作 | 目的 |
|------|------|------|
| 1 | 调用 orig | 按原始尺寸完成全部布局 |
| 2 | 对 UILabel 调 `sizeToFit` | **让 label 在当前约束下重新计算最佳尺寸** |
| 3 | 设置圆角/边框 | 视觉效果 |

**`sizeToFit` 的作用**：让 UILabel 根据 text 内容和当前约束重新计算自己的 size。如果在调用前修改了 superview 的可用宽度，`sizeToFit` 会自动让 label 适应新的窄宽度并正确换行/截断。

### 2.3 微信优化的边距从哪来？

微信优化的边距**不是通过缩小 MMUIButton 实现的**，而是通过 **Cell Hook 中修改 `cell.origin.x`**（右移 cell）+ **可能的其他机制**。MMUIButton 保持原始全宽，但视觉上因为 cell 位置变化产生了边距效果。

---

## 3️⃣ 为什么 v4 方案（先改frame后orig）仍然截断

### 3.1 当前代码执行流程

```objc
// v4 方式（用户当前代码 L224-L238）
// ① 先设 frame（缩窄）
self.frame = CGRectMake(margin, 0, targetW, currentH);

// ② 再调 orig
_orig_MMUIButton_layoutSubviews(self, _cmd);
```

### 3.2 失败原因分析

**原因：MMUIButton 的 orig (layoutSubviews) 内部会重置或重新计算子视图位置**

当 orig 执行时，它可能会做以下事情之一：

| 可能行为 | 后果 |
|---------|------|
| orig 读取 `self.superview.bounds.size.width` 来计算 label 宽度 | label 按**父视图(cell)**的全宽计算，忽略我们设置的窄 frame |
| orig 内部有 `[self setFrame:]` 调用，覆盖我们的设置 | frame 被恢复 |
| orig 调用 `[label sizeToFit]` 但基于错误的可用宽度 | 文字仍然按宽空间排布后被截断 |
| label 的 `autoresizingMask` 含 `.FlexibleWidth` | orig 过程中 label 被 re-layout 到超出新 frame 的宽度 |

**无论哪种情况，结果都是一样**：label 的文字排布基于比实际显示区域更宽的空间，导致最终显示时被 truncate。

### 3.3 为什么微信优化先调 orig 却没问题

因为微信优化**不修改 MMUIButton.frame**，所以 orig 执行时的环境和原始环境完全一致。orig 按全宽正确布局后，微信优化通过 `sizeToFit` + 其他手段微调 label，而不是暴力改变容器尺寸。

---

## 4️⃣ 正确方案：先 orig → 设 frame → 修复 UILabel

### 4.1 核心思路

既然：
- 先改 frame 后 orig → orig 内部基于错误尺寸布局 → 截断
- 先 orig 后改 frame → autoresizingMask 压缩 label → 截断

那正确的做法是：**先 orig 后改 frame，然后在改完 frame 后手动修复 UILabel**。

### 4.2 代码方案

#### MMUIButton Hook 完整改造

```objc
static void replaced_MMUIButton_layoutSubviews(id self, SEL _cmd) {

    PluginConfig *config = [PluginConfig shared];
    if (!config.listCornerRadiusEnabled) {
        if (_orig_MMUIButton_layoutSubviews) {
            ((void (*)(id, SEL))_orig_MMUIButton_layoutSubviews(self, _cmd);
        }
        return;
    }

    // ... VC 判断（L178-L200 保持不变） ...
    // ... MMHeadImageView 搜索（L202-L214 保持不变） ...
    // ... 高度判断（L216-L222 保持不变） ...

    // ══════════════════════════════════════
    // ① 先调用 orig（按原始全宽布局）
    // ══════════════════════════════════════
    if (_orig_MMUIButton_layoutSubviews) {
        ((void (*)(id, SEL))_orig_MMUIButton_layoutSubviews(self, _cmd);
    }

    CGFloat margin = config.listCellMargin;

    // ══════════════════════════════════════
    // ② 记录所有 UILabel 子视图的原始信息
    // ══════════════════════════════════════
    NSMutableArray<NSValue *> *labelFrames = [NSMutableArray array];
    if (margin > 0) {
        for (UIView *sub in ((UIView *)self).subviews) {
            if ([sub isKindOfClass:[UILabel class]]) {
                [labelFrames addObject:[NSValue valueWithCGRect:sub.frame]];
            }
        }
    }

    // ══════════════════════════════════════
    // ③ 设置 MMUIButton 的 frame（缩窄产生边距）
    // ══════════════════════════════════════
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

    // ══════════════════════════════════════
    // ④ ★ 修复 UILabel 子视图的 frame（关键步骤）
    // ══════════════════════════════════════
    if (margin > 0 && labelFrames.count > 0) {
        NSInteger idx = 0;
        for (UIView *sub in ((UIView *)self).subviews) {
            if ([sub isKindOfClass:[UILabel class]] && idx < labelFrames.count) {
                CGRect originalFrame = [labelFrames[idx] CGRectValue];
                // 将 label 的右边界左移 2*margin，保持左边界不变
                CGRect newFrame = originalFrame;
                newFrame.size.width = originalFrame.size.width - 2.0 * margin;
                if (newFrame.size.width > 0) {
                    sub.frame = newFrame;
                    // ★ 调用 sizeToFit 让 label 重新排布文字
                    [(UILabel *)sub sizeToFit];
                }
                idx++;
            }
        }
    }

    // ══════════════════════════════════════
    // ⑤ 设置圆角、边框、隐藏二维码（保持不变）
    // ══════════════════════════════════════
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

### 4.3 为什么这个方案能工作

```
时间 →

MMUIButton (width=375)
  │
  ├─ [1] orig layoutSubviews ───────────┐
  │     全宽布局                          │
  │     label = (50, 0, 320, 24)         │ ← 文字完整 ✓
  │                                      │
  ├─ [2] 记录 label frames ──────────────│
  │     保存: label → (50, 0, 320, 24)   │
  │                                      │
  ├─ [3] self.frame 缩窄 ────────────────│
  │     width: 375 → 351                 │
  │     ↓ autoresizingMask 生效          │
  │     label 被压缩（可能变形）          │
  │                                      │
  ├─ [4] ★ 修复 label frame + sizeToFit ─│
  │     newWidth = 320 - 24 = 296        │
  │     label.frame = (50, 0, 296, 24)   │ ← 明确设置正确宽度
  │     [label sizeToFit]                │ ← 按新宽度重新排布文字 ✓
  │                                      │
  └─ [5] cornerRadius / masksToBounds ──┘
        裁剪溢出 + 圆角
```

**关键点**：
1. orig 先执行 → label 有正确的初始布局
2. 记录 label 的原始 frame → 作为基准
3. 缩窄容器 → 产生边距视觉效果
4. **主动修复 label 宽度** → 用 `原始宽度 - 2*margin` 作为新宽度
5. **调用 `sizeToFit`** → 让 label 按新宽度重新计算文字排布（与微信优化一致）

### 4.4 注意事项

1. **sizeToFit 必须在 setFrame 之后调用**：先给 label 新的 frame（窄宽度），再让 sizeToFit 基于 frame 排布
2. **不要对 MMCPLabel/MMUILabel 调 sizeToFit**：这些可能是自定义标签类，sizeToFit 行为不确定
3. **如果 sizeToFit 导致高度变化**：可以限制 label 不超过原始高度
4. **margin 为 0 时跳过整个修复流程**：不影响性能

---

## 5️⃣ 方案对比

| 对比项 | v3（先orig后改frame） | v4（先改frame后orig） | **v5（本方案）** |
|--------|---------------------|---------------------|----------------|
| orig 顺序 | 后 | 前 | **前** |
| frame 设置 | 后 | 前 | **后** |
| UILabel 修复 | ❌ 无 | ❌ 无 | **✅ 有** |
| sizeToFit | ❌ 无 | ❌ 无 | **✅ 有** |
| 内容显示 | 截断 | 截断 | **预期正常** |
| 边距 | ✅ | ✅ | **✅** |

---

## 6️⃣ 实施步骤

### Step 1: 修改 MMUIButton Hook

文件：[ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L169-L252)

改动要点：
1. 把 `orig` 调用移回**最前面**（config 判断之后）
2. 把 `frame` 设置移到 **orig 之后**
3. **新增**：orig 之后、frame 设置之前记录 UILabel frames
4. **新增**：frame 设置之后遍历修复 UILabel + 调用 sizeToFit

### Step 2: Cell Hook 保持不变

Cell Hook 只调 orig 返回，不做任何额外操作。

### Step 3: 编译验证

推送编译后检查：
- [ ] 资料卡左右边距生效
- [ ] 昵称完整显示
- [ ] 微信号完整显示
- [ ] "状态"、"朋友数" 标签正常
- [ ] 圆角生效
- [ ] 边框生效（如开启）
- [ ] 二维码按钮隐藏（如开启）
- [ ] 其他列表不受影响

---

## 7️⃣ 附录：方案演进历史

| 版本 | orig 顺序 | frame 时机 | UILabel 修复 | 结果 |
|------|----------|-----------|:------------:|------|
| v1 | 后 | orig 前 | ❌ | 内容挤顶部 |
| v2 | 前 | orig 后 | ❌ | 边距失效 |
| v3 | 前 | orig 后 | ❌ | 文字截断 |
| v4 | **后** | **orig 前** | ❌ | **仍截断** |
| **v5（当前）** | **前** | **orig 后** | **✅ sizeToFit** | **待验证** |
