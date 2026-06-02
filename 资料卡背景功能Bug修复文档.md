# MioPlugin 资料卡背景功能 Bug 修复文档

> **更新日期**: 2026-06-02 (v5 — 根因确认版)
> **当前状态**: 隐藏信息卡片 ✅ 已修复 | 背景图不显示 ❌ 待修复
> **关键发现**: `object_setIvar(nil)` 只清除实例变量引用，不移除视图层级中的 UIImageView

---

## 1️⃣ 核心问题

**为什么 HideCard 能工作，但背景图不行？**

对比两种模式下 MMUIButton Hook 的处理：

| 操作 | HideCard 模式 (能工作) | 非 HideCard 背景图模式 (不工作) |
|------|:--------------------:|:----------------------------:|
| `object_setIvar(m_bgImageView, nil)` | ✅ 第244行 | ✅ 第332行 |
| **隐藏 MMUIButton 所有子视图** | ✅ 第248-250行 `sub.hidden = YES` | ❌ 不隐藏（要显示内容） |
| 结果 | m_bgImageView 的 UIImageView 被 hidden | **UIImageView 仍在视图层级中渲染！** |

**根因**：`object_setIvar((id)self, bgIvar, nil)` 只是将 MMUIButton 的实例变量 `m_bgImageView` 指向 nil，**不会将 UIImageView 从视图层级中移除**。这个 UIImageView 仍然是 MMUIButton 的子视图，仍然在渲染不透明内容，仍然遮挡着 Cell 层的 bgImageView。

---

## 2️⃣ 详细分析

### 2.1 `object_setIvar(nil)` 做了什么

```objc
Ivar bgIvar = class_getInstanceVariable([(id)self class], "m_bgImageView");
if (bgIvar) {
    id bgImgView = object_getIvar((id)self, bgIvar);  // 获取 UIImageView 对象
    if (bgImgView && [bgImgView isKindOfClass:[UIImageView class]]) {
        object_setIvar((id)self, bgIvar, nil);  // 只是将 ivar 指向 nil
        // ❌ UIImageView 对象仍然存在！
        // ❌ 仍然是 MMUIButton 的子视图！
        // ❌ 仍然在渲染不透明内容！
    }
}
```

这就像把一个指针设为 null，但对象本身还在内存中、还在视图层级中。

### 2.2 视图层级真相

```
MMTableViewCell (Cell) — backgroundColor = clearColor
 ├── UIImageView (tag=999901, bgImageView) ← 我们的背景图
 └── MMUIButton — backgroundColor = clearColor
      ├── ★ m_bgImageView 的 UIImageView ← 仍在渲染！ivar=nil 但视图还在！
      │   └── 渲染微信原始的白色/渐变背景（不透明）
      ├── MMHeadImageView (头像)
      ├── Labels (昵称、微信号)
      └── 其他子视图
```

### 2.3 HideCard 为什么能工作

HideCard 模式下，MMUIButton Hook 在 `object_setIvar(nil)` 之后，**还执行了**：

```objc
// 第248-250行
for (UIView *sub in ((UIView *)self).subviews) {
    sub.hidden = YES;  // ← 隐藏所有子视图，包括 m_bgImageView 的 UIImageView
}
```

所以即使 `object_setIvar(nil)` 没有移除视图，`hidden=YES` 也让它不可见了。

### 2.4 非 HideCard 模式为什么不行

非 HideCard 模式下，我们**不能**隐藏所有子视图（因为要显示头像和文字）。当前的"额外保险"代码：

```objc
// 第337-347行
for (UIView *sub in ((UIView *)self).subviews) {
    if ([sub isKindOfClass:[UIImageView class]]) {
        UIImageView *iv = (UIImageView *)sub;
        if (![NSStringFromClass([iv class]) isEqualToString:@"MMHeadImageView"]) {
            if (iv.frame.size.width > ((UIView *)self).frame.size.width * 0.8 &&
                iv.frame.size.height > ((UIView *)self).frame.size.height * 0.5) {
                iv.hidden = YES;
            }
        }
    }
}
```

这段代码有两个问题：
1. **尺寸阈值可能不匹配** — m_bgImageView 的 UIImageView 尺寸可能不满足 `width > 80% && height > 50%` 的条件
2. **只检查 UIImageView 类** — m_bgImageView 的实际类可能是 UIImageView 的子类，`isKindOfClass` 应该能匹配，但 `NSStringFromClass` 比较可能不匹配

---

## 3️⃣ 修复方案

### 3.1 核心修复：在清除 m_bgImageView 时，同时从视图层级中移除或隐藏

**MMUIButton Hook 第327-334行**，将：

```objc
Ivar bgIvar = class_getInstanceVariable([(id)self class], "m_bgImageView");
if (bgIvar) {
    id bgImgView = object_getIvar((id)self, bgIvar);
    if (bgImgView && [bgImgView isKindOfClass:[UIImageView class]]) {
        object_setIvar((id)self, bgIvar, nil);
    }
}
```

替换为：

```objc
Ivar bgIvar = class_getInstanceVariable([(id)self class], "m_bgImageView");
if (bgIvar) {
    id bgImgView = object_getIvar((id)self, bgIvar);
    if (bgImgView && [bgImgView isKindOfClass:[UIImageView class]]) {
        // ★ 先从视图层级中移除/隐藏，再清除 ivar
        [(UIImageView *)bgImgView setImage:nil];           // 清空图片内容
        [(UIImageView *)bgImgView setBackgroundColor:[UIColor clearColor]];  // 透明背景
        [(UIImageView *)bgImgView setHidden:YES];          // 隐藏视图
        // 注意：不调用 removeFromSuperview，避免微信 orig 重建它
    }
    object_setIvar((id)self, bgIvar, nil);  // 清除 ivar 引用
}
```

**为什么用 `setHidden:YES` 而不是 `removeFromSuperview`？**

如果调用 `removeFromSuperview`，微信的原始 `layoutSubviews`（在下次调用时通过 orig 触发）检测到 `m_bgImageView` 为 nil，可能会**重新创建**一个新的 UIImageView 并添加到视图层级。而 `setHidden:YES` + `setImage:nil` 只是让现有视图不可见且不渲染内容，微信不会重建。

### 3.2 同样修复 Cell Hook 中的 m_bgImageView 清除

**Cell Hook 第488-498行**，将：

```objc
for (UIView *sub in cellViewCard.subviews) {
    if ([sub isKindOfClass:NSClassFromString(@"MMUIButton")]) {
        Ivar bgIvar = class_getInstanceVariable([sub class], "m_bgImageView");
        if (bgIvar) {
            id bgImgView = object_getIvar(sub, bgIvar);
            if (bgImgView && [bgImgView isKindOfClass:[UIImageView class]]) {
                object_setIvar(sub, bgIvar, nil);
            }
        }
    }
}
```

替换为：

```objc
for (UIView *sub in cellViewCard.subviews) {
    if ([sub isKindOfClass:NSClassFromString(@"MMUIButton")]) {
        Ivar bgIvar = class_getInstanceVariable([sub class], "m_bgImageView");
        if (bgIvar) {
            id bgImgView = object_getIvar(sub, bgIvar);
            if (bgImgView && [bgImgView isKindOfClass:[UIImageView class]]) {
                [(UIImageView *)bgImgView setImage:nil];
                [(UIImageView *)bgImgView setBackgroundColor:[UIColor clearColor]];
                [(UIImageView *)bgImgView setHidden:YES];
            }
            object_setIvar(sub, bgIvar, nil);
        }
    }
}
```

### 3.3 修复 HideCard 分支中的 m_bgImageView 清除（保持一致）

**MMUIButton Hook 第241-245行**，将：

```objc
Ivar bgIvar = class_getInstanceVariable([(id)self class], "m_bgImageView");
if (bgIvar) {
    object_setIvar((id)self, bgIvar, nil);
}
```

替换为：

```objc
Ivar bgIvar = class_getInstanceVariable([(id)self class], "m_bgImageView");
if (bgIvar) {
    id bgImgView = object_getIvar((id)self, bgIvar);
    if (bgImgView && [bgImgView isKindOfClass:[UIImageView class]]) {
        [(UIImageView *)bgImgView setImage:nil];
        [(UIImageView *)bgImgView setBackgroundColor:[UIColor clearColor]];
        [(UIImageView *)bgImgView setHidden:YES];
    }
    object_setIvar((id)self, bgIvar, nil);
}
```

### 3.4 修复 bgImageView 被误隐藏 + 异步回调不恢复

**Cell Hook 第501-511行**，在隐藏循环中排除 bgImageView：

```objc
for (UIView *sub in cellViewCard.subviews) {
    if ([sub isKindOfClass:[UIImageView class]]) {
        UIImageView *imgView = (UIImageView *)sub;
        if (imgView.tag == kBgImageTagCard) continue;  // ★ 排除自定义背景图

        if (imgView.image != nil &&
            ![imgView isEqual:objc_getAssociatedObject(cellViewCard, "mio_bgImageView")]) {
            imgView.hidden = YES;
        } else if (imgView.image == nil) {
            imgView.hidden = YES;
        }
    }
}
```

**异步加载回调第1292-1296行**，添加 `hidden=NO`：

```objc
if (resultImage && imageView) {
    dispatch_async(dispatch_get_main_queue(), ^{
        imageView.image = resultImage;
        imageView.alpha = 1.0;
        imageView.hidden = NO;  // ★ 确保可见
    });
}
```

### 3.5 删除不再需要的"额外保险"代码

第336-347行的大尺寸 ImageView 隐藏代码可以删除，因为 3.1 的修复已经直接处理了 m_bgImageView 的 UIImageView：

```objc
// 可以删除这段代码（第336-347行），已被 3.1 的修复替代
// for (UIView *sub in ((UIView *)self).subviews) {
//     if ([sub isKindOfClass:[UIImageView class]]) { ... }
// }
```

---

## 4️⃣ 修复优先级

| 优先级 | Bug | 影响 | 修复方式 |
|:------:|-----|------|---------|
| 🔴 P0 | `object_setIvar(nil)` 不移除视图 | m_bgImageView 的 UIImageView 仍在渲染，遮挡背景图 | setImage:nil + setHidden:YES + clearColor |
| 🔴 P0 | bgImageView 被误隐藏 + 回调不恢复 | 即使 m_bgImageView 清除了，bgImageView 也可能不可见 | 排除 tag + hidden=NO |
| 🟡 P1 | Cell Hook 中 m_bgImageView 清除不完整 | 双重保险 | 同 P0 修复方式 |

---

## 5️⃣ 修复后执行链路

```
MMUIButton Hook (非 HideCard, hasBgImage=YES)
  ├─ orig → 微信原始 layoutSubviews (m_bgImageView 正常渲染)
  ├─ backgroundColor = clearColor ✅
  ├─ ★ 获取 m_bgImageView 对象
  ├─ ★ setImage:nil → 清空图片内容
  ├─ ★ setBackgroundColor:clearColor → 透明背景
  ├─ ★ setHidden:YES → 隐藏视图
  ├─ ★ object_setIvar(nil) → 清除 ivar 引用
  └─ wp_applyProfileCardCorner → 跳过背景色 ✅

Cell Hook
  ├─ Cell 样式清理 (clearColor, masksToBounds=NO)
  ├─ ★ 清除 MMUIButton 的 m_bgImageView (同上方式)
  ├─ ImageView 隐藏循环 → ★ 排除 bgImageView (tag==999901)
  ├─ 创建/获取 bgImageView
  ├─ bgImageView.image=nil, alpha=0.5
  └─ 异步加载 → 完成后: image=resultImage, alpha=1.0, hidden=NO ★

最终视图层级：
  Cell (clearColor, masksToBounds=NO)
  ├── bgImageView (背景图, visible) ✅
  └── MMUIButton (clearColor)
       ├── [原 m_bgImageView 的 UIImageView] (hidden=YES, image=nil) ✅ 不遮挡了
       ├── MMHeadImageView (头像, visible) ✅
       └── Labels (昵称等, visible) ✅
```

---

## 6️⃣ 验证步骤

1. **cardBgEnabled=YES, 有背景图, cardBgHidden=NO** → 背景图可见，头像昵称正常
2. **cardBgEnabled=YES, 有背景图, cardBgHidden=YES** → 只显示背景图+遮罩
3. **cardBgEnabled=YES, 无背景图** → 显示配置的卡片背景色
4. **快速进出"我"页面** → 背景图稳定显示
5. **GIF 动图** → 动画播放正常
6. **深色/浅色切换** → 背景图正确切换
7. **图层=顶层/底层** → 正确显示
