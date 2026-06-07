# fillMode=0 修复 — 方案B：contentsRect 垂直对齐操作步骤

> **适用前提：** 已按方案A 删除 `calcImageAlignmentOffsetWithImageSize`，当前 alignment 只有居中效果。
> **目标：** 恢复顶部/居中/底部三种对齐，同时不修改 `frame.origin.y`（避免越界被裁剪）。

---

## 一、原理说明

### 为什么方案A 只能居中？

`UIImageView` 的 `ScaleAspectFill + clipsToBounds=YES` 默认就是**居中裁剪**，UIKit 没有提供"顶部对齐 ScaleAspectFill"或"底部对齐 ScaleAspectFill"的 contentMode。所以方案A 删掉 frame 偏移后，alignment 配置不再产生任何效果。

### contentsRect 如何解决？

`CALayer.contentsRect` 是一个**百分比坐标系（0~1）**，定义图层的哪部分内容被显示：

```
(0,0) ───────── (1,0)
  │                │
  │  contentsRect  │  ← 坐标系是整个图片，不涉及像素坐标
  │                │
(0,1) ───────── (1,1)
```

对齐示例（竖屏图 1080×1920，view 390×172，可见比例 ≈ 24.8%）：

| 对齐 | `contentsRect` | 效果 |
|------|---------------|------|
| 顶部（默认） | `CGRectMake(0, 0, 1, 0.248)` | 显示图片最上部 24.8% |
| 居中 | `CGRectMake(0, 0.376, 1, 0.248)` | 显示图片中间 24.8% |
| 底部 | `CGRectMake(0, 0.752, 1, 0.248)` | 显示图片最下部 24.8% |

**`contentsRect` 不修改 imageView 的 frame，因此不受 `button.layer.masksToBounds=YES` 的裁剪影响。**

---

## 二、变更总览

| # | 操作 | 文件 | 行 | 类型 |
|---|------|------|----|------|
| 1 | 在 `.h` 声明新方法 | `ProfileCardBgHook.h` | 新增一行 | **新增声明** |
| 2 | 新增 `applyVerticalAlignmentToImageView:inView:` 方法 | `ProfileCardBgHook.m` | 新增方法（建议放在 L442 之后） | **新增方法** |
| 3 | 在 `setupBackgroundMaterialInButton` 分支 A 增加调用 | `ProfileCardBgHook.m` | L527 附近 | **修改** |
| 4 | 在 `loadImageAsyncForImageView` 异步回调增加调用 | `ProfileCardBgHook.m` | L492 附近 | **修改** |

---

## 三、详细操作步骤

### 步骤 1：在 `.h` 文件声明新方法

**文件：** [ProfileCardBgHook.h](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.h)

**位置：** 在第 23 行 `setupBackgroundMaterialInButton:` 声明之后插入：

```objc
// ★ 背景素材方法
+ (UIImageView *)findBackgroundImageViewInButton:(UIView *)button;
+ (UIImageView *)createBackgroundImageViewInButton:(UIView *)button;
+ (void)loadImageAsyncForImageView:(UIImageView *)imageView
                            button:(UIView *)button
                            isDark:(BOOL)isDark;
+ (void)setupBackgroundMaterialInButton:(UIView *)button isDark:(BOOL)isDark;

// ↓↓↓ 新增 ↓↓↓
/// 通过 contentsRect 实现 fillMode=0（填充模式）的垂直对齐
/// 不修改 frame.origin，不会被 masksToBounds 裁剪
/// 仅当 fillMode=0 且 contentMode=ScaleAspectFill 且图片过 view 高时执行
+ (void)applyVerticalAlignmentToImageView:(UIImageView *)imageView
                                  inView:(UIView *)view;
// ↑↑↑ 新增结束 ↑↑↑

// ★ 独立功能路径
+ (void)handleHiddenPath:(UIView *)button isDark:(BOOL)isDark;
```

---

### 步骤 2：新增 `applyVerticalAlignmentToImageView:inView:` 方法

**文件：** [ProfileCardBgHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m)

**位置：** 建议放在 `createBackgroundImageViewInButton` 方法之后、`loadImageAsyncForImageView` 方法之前，即 L473 之后、L475 之前。

**插入代码：**

```objc
#pragma mark - fillMode=0 垂直对齐（contentsRect 方案）

+ (void)applyVerticalAlignmentToImageView:(UIImageView *)imageView
                                  inView:(UIView *)view {
    PluginConfig *config = [PluginConfig shared];

    // 守卫条件：仅 fillMode=0（填充模式）+ ScaleAspectFill + 图片已加载
    if (config.cardBgFillMode != 0) {
        // 非 fillMode=0：重置为全图显示
        imageView.layer.contentsRect = CGRectMake(0, 0, 1, 1);
        return;
    }
    if (imageView.contentMode != UIViewContentModeScaleAspectFill) {
        imageView.layer.contentsRect = CGRectMake(0, 0, 1, 1);
        return;
    }
    if (!imageView.image || imageView.image.size.width <= 0) {
        // 图片未加载 → 不设置（等异步加载后再次调用）
        return;
    }

    NSInteger alignment = config.cardBgAlignment;
    CGFloat viewW = view.bounds.size.width;
    CGFloat viewH = view.bounds.size.height;
    CGFloat imgW = imageView.image.size.width;
    CGFloat imgH = imageView.image.size.height;

    CGFloat scale = viewW / imgW;
    CGFloat renderedH = imgH * scale;

    if (renderedH <= viewH) {
        // 图片不比 view 高 → 全部可见 → 全图显示
        imageView.layer.contentsRect = CGRectMake(0, 0, 1, 1);
        return;
    }

    // overflow > 0：图片比 view 高，计算可见区域
    CGFloat visibleRatio = viewH / renderedH;  // 可见范围比例（< 1.0）
    CGFloat topCutRatio = 0;                   // 顶部裁剪比例（contentsRect y）

    switch (alignment) {
        case 0:  // 居中 → 上下各裁一半
            topCutRatio = (1.0 - visibleRatio) / 2.0;
            break;
        case 2:  // 底部 → 裁顶部，留底部
            topCutRatio = 1.0 - visibleRatio;
            break;
        default: // 顶部（默认）→ 裁底部，留顶部
            topCutRatio = 0;
            break;
    }

    imageView.layer.contentsRect = CGRectMake(0, topCutRatio, 1, visibleRatio);
}
```

**要点说明：**
- `contentsRect` 的坐标系：`(0,0)` 是图片左上角，`(1,1)` 是图片右下角
- `topCutRatio` 表示从图片顶部起忽略的比例，`visibleRatio` 表示显示的比例
- 非 fillMode=0 时重置为 `(0,0,1,1)` 显示全图，防止残留影响其他模式
- 图片未加载时直接 return，等异步回调加载后再设

**数值推演验证（1080×1920 竖屏图，view 390×172）：**

```
scale = 390 / 1080 = 0.3611
renderedH = 1920 × 0.3611 = 693.3
visibleRatio = 172 / 693.3 = 0.248（24.8%）

对齐=顶部(default): topCutRatio=0          → contentsRect=(0, 0,     1, 0.248)
对齐=居中(case 0):  topCutRatio=(1-0.248)/2=0.376 → contentsRect=(0, 0.376, 1, 0.248)
对齐=底部(case 2):  topCutRatio=1-0.248=0.752    → contentsRect=(0, 0.752, 1, 0.248)
```

---

### 步骤 3：在 `setupBackgroundMaterialInButton` 分支 A 增加调用

**文件：** [ProfileCardBgHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m)

**位置：** L527 之后、L529 之前

**改前（当前方案A 的代码）：**
```objc
    if (bgImgView) {
        // ── 分支 A：已存在 → 更新 frame ──
        NSInteger fillMode = config.cardBgFillMode;
        switch (fillMode) {
            case 1: bgImgView.contentMode = UIViewContentModeScaleAspectFill; break;
            case 2: bgImgView.contentMode = UIViewContentModeScaleToFill; break;
            default: bgImgView.contentMode = UIViewContentModeScaleAspectFill; break;
        }

        bgImgView.frame = CGRectMake(ox, oy, bgW, bgH);    // ← L527

        if (config.cardBgLayer == 1) [button bringSubviewToFront:bgImgView];
    }
```

**改后：**
```objc
    if (bgImgView) {
        // ── 分支 A：已存在 → 更新 frame ──
        NSInteger fillMode = config.cardBgFillMode;
        switch (fillMode) {
            case 1: bgImgView.contentMode = UIViewContentModeScaleAspectFill; break;
            case 2: bgImgView.contentMode = UIViewContentModeScaleToFill; break;
            default: bgImgView.contentMode = UIViewContentModeScaleAspectFill; break;
        }

        bgImgView.frame = CGRectMake(ox, oy, bgW, bgH);

        // ★ 新增：应用 contentsRect 垂直对齐（fillMode=0 时生效）
        [ProfileCardBgHook applyVerticalAlignmentToImageView:bgImgView inView:button];

        if (config.cardBgLayer == 1) [button bringSubviewToFront:bgImgView];
    }
```

---

### 步骤 4：在 `loadImageAsyncForImageView` 异步回调增加调用

**文件：** [ProfileCardBgHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m)

**位置：** L492 之后（图片设置完成之后）

**改前（当前方案A 的代码）：**
```objc
            if (resultImage) {
                strongBg.image = resultImage;
                strongBg.alpha = 1.0;
                strongBg.hidden = NO;

                // 不移 frame.origin.y — 与微信优化一致         ← L494
            } else {
```

**改后：**
```objc
            if (resultImage) {
                strongBg.image = resultImage;
                strongBg.alpha = 1.0;
                strongBg.hidden = NO;

                // ★ 新增：图片尺寸已知，应用 contentsRect 垂直对齐
                [ProfileCardBgHook applyVerticalAlignmentToImageView:strongBg
                                                             inView:strongButton];
            } else {
```

**注意：** 这步很关键。因为异步加载前 `imageView.image` 为 nil，`applyVerticalAlignmentToImageView:` 中会由于 `!imageView.image` 而 return。只有图片设置完成（`strongBg.image = resultImage`）后，才能获取 `image.size` 计算 `contentsRect`。

---

## 四、改后代码逻辑全景

```
                  fillMode=0？
                  ┌───┴───┐
              是  ↓       否(1/2)
           ScaleAspectFill  ← contentMode
               ↓
         renderedH > viewH？
          ┌───┴───┐
      是  ↓       否
    ┌─────────┐   contentsRect=(0,0,1,1) 全图
    │ topCutRatio 计算  │
    │ 对齐=顶: 0       │
    │ 对齐=中: (1-r)/2  │
    │ 对齐=底: 1-r      │
    └─────────┘
       ↓
    contentsRect=(0, topCutRatio, 1, visibleRatio)
```

---

## 五、对齐映射表

| `cardBgAlignment` 值 | UI 显示 | `topCutRatio` | 效果说明 |
|:---:|---------|:-------------:|---------|
| 1（默认） | 居中 | `(1-visibleRatio)/2` | 上下均等裁剪，显示中间区域 |
| 0 | 顶部 | 0 | 仅裁底部，显示图片顶部 |
| 2 | 底部 | `1-visibleRatio` | 仅裁顶部，显示图片底部 |

---

## 六、验证步骤

### 6.1 对齐功能验证

| # | 测试场景 | 预期结果 | 验证状态 |
|---|---------|---------|:--------:|
| 1 | fillMode=0 + 竖屏大图 + alignment=0（顶部） | 显示图片**顶部**区域 | |
| 2 | fillMode=0 + 竖屏大图 + alignment=1（居中） | 显示图片**中间**区域 | |
| 3 | fillMode=0 + 竖屏大图 + alignment=2（底部） | 显示图片**底部**区域 | |
| 4 | fillMode=0 + 横屏图/wallpaper（不溢出） | `contentsRect=(0,0,1,1)` 全图显示 | |
| 5 | fillMode=0 + 小图（不溢出） | `contentsRect=(0,0,1,1)` 全图显示 | |

### 6.2 回归验证（确保不破坏其他模式）

| # | 测试场景 | 预期结果 | 验证状态 |
|---|---------|---------|:--------:|
| 1 | fillMode=1（适应模式） | 高度扩展正常，图片填满，无 contentsRect 残留干扰 | |
| 2 | fillMode=2（拉伸填充） | 拉伸铺满，无 contentsRect 残留干扰 | |
| 3 | fillMode 切换（1→0→2→0→1） | 每次切换居中和顶部正确，无残留 | |
| 4 | XOffset/YOffset 调节 | 所有模式下偏移正常生效 | |
| 5 | 圆角开启 | `masksToBounds=YES` 不裁剪 contentsRect 的视觉效果 | |
| 6 | 深色模式切换 | 所有 fillMode 正常 | |
| 7 | 隐藏路径 | 隐藏后背景图正常隐藏/显示 | |
| 8 | 切后台再返回 | `contentsRect` 不丢失 | |

### 6.3 边界条件验证

| # | 测试场景 | 预期结果 | 验证状态 |
|---|---------|---------|:--------:|
| 1 | 图片极窄极高（如 500×4000） | `visibleRatio` 极小，仍正确定位 | |
| 2 | 图片极宽极矮（如 4000×500） | renderedH < viewH，全图显示 | |
| 3 | 图片尺寸为 1×1 | 不溢出，全图显示 | |
| 4 | 无图片（路径为空） | `!imageView.image` 守卫，不设 contentsRect | |
| 5 | contentMode 被外部改为 ScaleToFill | `contentMode != ScaleAspectFill` 守卫，显示全图 | |

---

## 七、潜在注意事项

### 7.1 `contentsRect` 会跨生命周期残留

一旦设置了 `contentsRect`，它会一直保存在 `layer` 上，直到被显式重置或 `image` 被更改。因此：

- 在 **`applyVerticalAlignmentToImageView:` 的非 fillMode=0 分支中**重置为 `(0,0,1,1)` ✅ 已处理
- 当 **用户切换 fillMode** 时：`setupBackgroundMaterialInButton` 分支 A 会被调用 → 重新走 `applyVerticalAlignmentToImageView:` → 自动重置 ✅ 已处理
- 当 **新建 imageView** 时：`createBackgroundImageViewInButton` 创建的是新 `UIImageView` → `layer.contentsRect` 默认为 `(0,0,1,1)` → 只走 `loadImageAsyncForImageView` 异步回调 → 回调中正确设置 ✅ 已处理

### 7.2 `contentsRect` 与 GIF 动图

`contentsRect` 对 `UIImageView` 的静态图和 GIF 动图都有效，因为它作用在 `layer` 层面。动图的每一帧都会被裁剪到同样的 `contentsRect` 区域。**不需额外处理。**

### 7.3 `contentsRect` 和 `contentsGravity` 的互斥

`contentsRect` 和 `contentsGravity` 会相互作用。如果其他地方给 imageView 设置了 `contentsGravity`，可能会覆盖 `contentsRect` 的效果。当前代码中没有设置 `contentsGravity`，因此不考虑此问题。

### 7.4 性能

`contentsRect` 是 GPU 层面的裁剪，**零额外性能开销**。它只改变纹理采样坐标，不涉及 CPU 像素操作。

---

## 八、执行顺序总结

```
步骤 1：ProfileCardBgHook.h     → 添加方法声明
步骤 2：ProfileCardBgHook.m     → 新增 applyVerticalAlignmentToImageView:inView: 方法
步骤 3：ProfileCardBgHook.m L527→ setupBackgroundMaterialInButton 分支 A 增加调用
步骤 4：ProfileCardBgHook.m L492→ loadImageAsyncForImageView 异步回调增加调用
步骤 5：编译验证                  → 无 warning/error
步骤 6：按第六节验证步骤逐条测试  → 确认对齐功能正常
```

---

## 九、附录：完整代码参考

### 新增方法完整代码

```objc
#pragma mark - fillMode=0 垂直对齐（contentsRect 方案）

+ (void)applyVerticalAlignmentToImageView:(UIImageView *)imageView
                                  inView:(UIView *)view {
    PluginConfig *config = [PluginConfig shared];

    // 守卫条件：仅 fillMode=0（填充模式）+ ScaleAspectFill + 图片已加载
    if (config.cardBgFillMode != 0) {
        imageView.layer.contentsRect = CGRectMake(0, 0, 1, 1);
        return;
    }
    if (imageView.contentMode != UIViewContentModeScaleAspectFill) {
        imageView.layer.contentsRect = CGRectMake(0, 0, 1, 1);
        return;
    }
    if (!imageView.image || imageView.image.size.width <= 0) {
        return;
    }

    NSInteger alignment = config.cardBgAlignment;
    CGFloat viewW = view.bounds.size.width;
    CGFloat viewH = view.bounds.size.height;
    CGFloat imgW = imageView.image.size.width;
    CGFloat imgH = imageView.image.size.height;

    CGFloat scale = viewW / imgW;
    CGFloat renderedH = imgH * scale;

    if (renderedH <= viewH) {
        imageView.layer.contentsRect = CGRectMake(0, 0, 1, 1);
        return;
    }

    CGFloat visibleRatio = viewH / renderedH;
    CGFloat topCutRatio = 0;

    switch (alignment) {
        case 0:
            topCutRatio = (1.0 - visibleRatio) / 2.0;  // 居中
            break;
        case 2:
            topCutRatio = 1.0 - visibleRatio;           // 底部
            break;
        default:
            topCutRatio = 0;                            // 顶部
            break;
    }

    imageView.layer.contentsRect = CGRectMake(0, topCutRatio, 1, visibleRatio);
}
```

### 调用点 1：setupBackgroundMaterialInButton 分支 A

```objc
    if (bgImgView) {
        // ── 分支 A：已存在 → 更新 frame ──
        NSInteger fillMode = config.cardBgFillMode;
        switch (fillMode) {
            case 1: bgImgView.contentMode = UIViewContentModeScaleAspectFill; break;
            case 2: bgImgView.contentMode = UIViewContentModeScaleToFill; break;
            default: bgImgView.contentMode = UIViewContentModeScaleAspectFill; break;
        }

        bgImgView.frame = CGRectMake(ox, oy, bgW, bgH);

        // ★ 新增：应用 contentsRect 垂直对齐（fillMode=0 时生效）
        [ProfileCardBgHook applyVerticalAlignmentToImageView:bgImgView inView:button];

        if (config.cardBgLayer == 1) [button bringSubviewToFront:bgImgView];
    }
```

### 调用点 2：loadImageAsyncForImageView 异步回调

```objc
            if (resultImage) {
                strongBg.image = resultImage;
                strongBg.alpha = 1.0;
                strongBg.hidden = NO;

                // ★ 新增：图片尺寸已知，应用 contentsRect 垂直对齐
                [ProfileCardBgHook applyVerticalAlignmentToImageView:strongBg
                                                             inView:strongButton];
            } else {
                // fallback：无图片时设置背景色
                PluginConfig *cfg = [PluginConfig shared];
                UIColor *cardBg = [cfg colorFromHex:isDark
                    ? cfg.listCardDarkBgColor : cfg.listCardLightBgColor];
                if (cardBg) strongButton.backgroundColor = cardBg;
            }
```

---

## 十、与方案A 的差异对比

| 维度 | 方案A（当前状态） | 方案B（改造后） |
|------|:---------------:|:--------------:|
| `calcImageAlignmentOffsetWithImageSize` | 已删除 | 已删除（不恢复） |
| 新增方法 | 无 | `applyVerticalAlignmentToImageView:inView:` |
| 对齐实现 | 无（恒居中） | `layer.contentsRect` 百分比裁剪 |
| 对齐选项 | 顶部/居中/底部都居中 | 顶部/居中/底部按设置显示 |
| `clipsToBounds` | `YES` | `YES`（不变） |
| frame.origin.y | 仅 YOffset | 仅 YOffset（不变） |
| 越界风险 | 无 | 无 |
| 代码复杂度 | 简单 | 中等 |