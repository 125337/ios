# fillMode=0 修复 — 方案C：恢复 frame 偏移对齐（旧方案还原）

> **说明：** 你原来的方案不是必然出 Bug 的。方案A 的问题是因为 `clipsToBounds=YES` 与 frame 偏移不兼容。旧方案只要配合 `clipsToBounds=NO` 就能正确工作。

---

## 一、旧方案到底能不能工作？

**能。** 但你原来的实现埋了一个陷阱——不是 frame 偏移逻辑本身的问题，而是 `clipsToBounds` 的设置。

### 关键区别

```
          clipsToBounds=YES（方案A）                  clipsToBounds=NO（旧方案）
          ─────────────────────                     ─────────────────────

 imageView  ┌────────────┐                          ┌────────────┐
 (390×172)  │            │  图片被裁到 172 高        │            │
            │  居中部分   │  永远是中间 24.8%         │   ┌────┐   │  ← 图片延伸到
            │            │                         │   │button│   │     imageView 之外
            └────────────┘                         │   │ 172  │   │
                                                    │   │     │   │
 图片实际  ┌────────────────────┐                   │   └────┘   │
 渲染大小  │                    │                   │            │
 (390×693) │   不可见部分       │                   └────────────┘
           │  ┌────────────┐   │
           │  │  可见部分   │   │                    ┌────────────┐
           │  │  (居中)     │   │                    │  button    │
           │  └────────────┘   │                    │  masksTo   │
           │                    │                    │  Bounds=YES│
           └────────────────────┘                    └────────────┘
                                                        ↕ 裁剪
```

- **`clipsToBounds=YES`**：图片被裁到 imageView 的 172 高 → 居中裁剪 → 改 frame.origin.y 不改变渲染内容 → **alignment 无效**
- **`clipsToBounds=NO`**：图片以 ScaleAspectFill 完整渲染（693 高），imageView 只作为定位锚点 → 改 frame.origin.y 能改变 button 窗口内看到的部分 → **alignment 有效**

### 数值推演（1080×1920 竖屏图，button 390×172）

**`clipsToBounds=YES`（方案A）：**

```
imageView 内容渲染：ScaleAspectFill 缩放到 390×172 内
  → 渲染大小 = 390×693，但被裁到 390×172
  → 始终显示中间 24.8% 的区域
  → frame.origin.y = oy ± anything → 内容不变 → 还是居中 → ❌ 不能对齐
```

**`clipsToBounds=NO`（旧方案正确工作）：**

```
scale = 390 / 1080 = 0.361
renderedH = 1920 × 0.361 = 693
overflow = 693 - 172 = 521

imageView.frame = (ox, oy - 260.5, 390, 172)      ← alignment=0 居中

ScaleAspectFill 渲染图片到 390×693，在 imageView 内居中
  → 图片在 button 坐标系：从 y = (oy-260.5) - 260.5 = -511 到 y = -511 + 693 = 182
  → button.masksToBounds=YES 裁剪到 y=0~172
  → 可见区域 = 图片的 y=511~683 范围 → 底部 24.8% → ✅ 正确
```

---

## 二、为什么 `e0348c9` 当时出了问题？

回顾当时的提交，`e0348c9` 确实设置了 `clipsToBounds = NO`。但还有几个其他因素叠加导致了问题：

| 因素 | 说明 |
|------|------|
| `clipsToBounds` 被正确设为 `NO` | ✅ 这次是对的 |
| **但 `e0348c9` 是一次大改** | 同时改了很多东西：换 Hook 方式、加异步加载、改 heightForHeaderInSection、alignment 从 contentsRect 切到 frame |
| **对齐映射可能错了** | 旧 contentsRect 和 frame 偏移的 alignment 值映射需要确认一致 |
| **分支 A（已有 bgView）可能没同步修改** | `setupBackgroundMaterialInButton` 分支 A 可能没加 `clipsToBounds=NO` 和偏移 |

所以当时的问题不是"frame 偏移方案有 Bug"，而是**那次 build 变动太大，多个变更交织在一起**导致的。

---

## 三、变更总览

| # | 操作 | 文件 | 行 | 类型 |
|---|------|------|----|------|
| 1 | 恢复 `calcImageAlignmentOffsetWithImageSize` 方法 | `ProfileCardBgHook.m` | 在 L443 后新增 | **新增方法** |
| 2 | 改 `clipsToBounds=YES` → **`NO`** | `ProfileCardBgHook.m` | L449 | **修改** |
| 3 | 在 `setupBackgroundMaterialInButton` 分支 A 恢复偏移 | `ProfileCardBgHook.m` | L527 附近 | **修改** |
| 4 | 在 `loadImageAsyncForImageView` 异步回调恢复偏移 | `ProfileCardBgHook.m` | L491 附近 | **修改** |
| 5 | `.h` 文件方法声明 | `ProfileCardBgHook.h` | L20 附近 | **新增声明** |

---

## 四、详细操作步骤

### 步骤 1：`.h` 文件声明方法

**文件：** [ProfileCardBgHook.h](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.h)

**改前：** 无 `calcImageAlignmentOffsetWithImageSize` 声明

**操作：** 在 `ProfileCardBgHook.h` 中合适位置添加：

```objc
/// 计算 fillMode=0（填充模式）下垂直对齐所需的 frame.origin.y 偏移量
/// 仅在 clipsToBounds=NO 时生效
/// @param imageSize   原始图片尺寸
/// @param view        父视图（button）
/// @return 偏移量，正数向下移，负数向上移
+ (CGFloat)calcImageAlignmentOffsetWithImageSize:(CGSize)imageSize
                                          inView:(UIView *)view;
```

---

### 步骤2：恢复 `calcImageAlignmentOffsetWithImageSize` 方法

**文件：** [ProfileCardBgHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m)

**位置：** L443（`createBackgroundImageViewInButton` 之前）插入

```objc
#pragma mark - fillMode=0 垂直对齐偏移计算

/// 计算 fillMode=0（填充模式）下的垂直对齐偏移量
/// 原理：ScaleAspectFill 图片渲染高度 > viewH，通过 frame.origin.y 偏移
/// 控制 button (masksToBounds=YES) 窗口中显示图片的哪一部分。
/// 前提：UIImageView 必须设置 clipsToBounds=NO。
+ (CGFloat)calcImageAlignmentOffsetWithImageSize:(CGSize)imageSize
                                          inView:(UIView *)view {
    PluginConfig *config = [PluginConfig shared];
    NSInteger fillMode = config.cardBgFillMode;
    NSInteger alignment = config.cardBgAlignment;

    // 仅在 fillMode=0（填充模式）下需要偏移
    if (fillMode != 0) return 0;
    if (imageSize.width <= 0 || imageSize.height <= 0) return 0;

    CGFloat viewW = view.bounds.size.width;
    CGFloat viewH = view.bounds.size.height;
    if (viewW <= 0 || viewH <= 0) return 0;

    CGFloat scale = viewW / imageSize.width;
    CGFloat renderedH = imageSize.height * scale;
    CGFloat overflow = renderedH - viewH;

    // 图片不比 view 高 → 无溢出 → 不需要偏移
    if (overflow <= 0) return 0;

    // alignment: 0=居中  1=顶部(默认)  2=底部
    switch (alignment) {
        case 0:
            // 居中 → frame 上移 overflow/2 → button 窗口显示中间部分
            return -overflow / 2.0;
        case 2:
            // 底部 → frame 下移 overflow/2 → button 窗口显示底部部分
            return overflow / 2.0;
        default:  // 1（顶部）
            // 顶部 → frame 不移 → button 窗口显示顶部部分
            return 0;
    }
}
```

**alignment 值与显示效果对照：**

```
overflow = 521（竖屏图）

alignment=1（顶部）:  offset=0      → frame.y=oy         → 显示图片顶部 0~172
alignment=0（居中）:  offset=-260.5 → frame.y=oy-260.5   → 显示图片中间 250.5~422.5
alignment=2（底部）:  offset=+260.5 → frame.y=oy+260.5   → 显示图片底部 521~693
```

---

### 步骤 3：改 `clipsToBounds = YES` 为 `NO`

**文件：** [ProfileCardBgHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m)

**位置：** L449

```objc
// 改前：
    newBg.clipsToBounds = YES;

// 改后：
    newBg.clipsToBounds = NO;
```

**为什么必须改：**

| `clipsToBounds` | 图片渲染 | frame.origin.y 偏移效果 |
|:---:|---|---|
| **YES**（方案A） | 图片被裁到 172 高 | 不改变渲染内容 → **对齐无效** |
| **NO**（旧方案） | 图片以 693 完整渲染 | 改变 button 窗口可见区域 → **对齐有效** |

---

### 步骤 4：在 `setupBackgroundMaterialInButton` 分支 A 恢复偏移

**文件：** [ProfileCardBgHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m)

**位置：** L527 附近

**改前（当前方案A 代码）：**
```objc
        bgImgView.frame = CGRectMake(ox, oy, bgW, bgH);

        if (config.cardBgLayer == 1) [button bringSubviewToFront:bgImgView];
```

**改后：**
```objc
        // ★ 关键：分支 A 的 bgImgView 可能是在 clipsToBounds=YES（方案A）下创建的
        // 需要确保它也是 clipsToBounds=NO
        bgImgView.clipsToBounds = NO;

        bgImgView.frame = CGRectMake(ox, oy, bgW, bgH);

        // ★ 恢复：应用 fillMode=0 的对齐偏移
        if (bgImgView.image && bgImgView.image.size.width > 0) {
            CGFloat alignOffset = [ProfileCardBgHook
                calcImageAlignmentOffsetWithImageSize:bgImgView.image.size
                                               inView:button];
            if (fabs(alignOffset) > 0.5) {
                CGRect f = bgImgView.frame;
                f.origin.y = oy + alignOffset;
                bgImgView.frame = f;
            }
        }

        if (config.cardBgLayer == 1) [button bringSubviewToFront:bgImgView];
```

> **注意：** 分支 A 是"已存在的 bgView"路径。当用户切换 fillMode 或 alignment 时会进入此分支。`clipsToBounds=NO` 必须重新设一次，因为如果 bgView 是在方案A 下创建的，它的 `clipsToBounds` 还是 `YES`。

---

### 步骤 5：在 `loadImageAsyncForImageView` 异步回调恢复偏移

**文件：** [ProfileCardBgHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m)

**位置：** L491 附近

**改前（当前方案A 代码）：**
```objc
            if (resultImage) {
                strongBg.image = resultImage;
                strongBg.alpha = 1.0;
                strongBg.hidden = NO;
            } else {
```

**改后：**
```objc
            if (resultImage) {
                strongBg.image = resultImage;
                strongBg.alpha = 1.0;
                strongBg.hidden = NO;

                // ★ 恢复：图片尺寸已知，应用 fillMode=0 对齐偏移
                CGFloat alignOffset = [ProfileCardBgHook
                    calcImageAlignmentOffsetWithImageSize:resultImage.size
                                                   inView:strongButton];
                if (fabs(alignOffset) > 0.5) {
                    PluginConfig *cfg = [PluginConfig shared];
                    CGRect f = strongBg.frame;
                    f.origin.y = cfg.cardBgOffsetY + alignOffset;
                    strongBg.frame = f;
                }
            } else {
```

---

## 五、完整执行顺序

```
步骤 1: ProfileCardBgHook.h      → 添加 calcImageAlignmentOffsetWithImageSize 声明
步骤 2: ProfileCardBgHook.m L443  → 新增 calcImageAlignmentOffsetWithImageSize 方法体
步骤 3: ProfileCardBgHook.m L449  → clipsToBounds = YES → NO
步骤 4: ProfileCardBgHook.m L527  → setupBackgroundMaterialInButton 分支 A 恢复偏移
步骤 5: ProfileCardBgHook.m L491  → loadImageAsyncForImageView 异步回调恢复偏移
步骤 6: 编译验证                   → 无 warning/error
步骤 7: 按验证表格测试             → 确认对齐正常
```

---

## 六、验证步骤

### 6.1 对齐功能验证

| # | 测试场景 | 预期结果 | 验证状态 |
|---|---------|---------|:--------:|
| 1 | fillMode=0 + 竖屏图 + alignment=1（顶部） | 显示图片**顶部**（人物头部分） | |
| 2 | fillMode=0 + 竖屏图 + alignment=0（居中） | 显示图片**中间** | |
| 3 | fillMode=0 + 竖屏图 + alignment=2（底部） | 显示图片**底部**（人物脚部分） | |
| 4 | fillMode=0 + 横屏图（不溢出） | 全图显示，无位移 | |
| 5 | fillMode=0 + 小图（不溢出） | 全图显示，无位移 | |

### 6.2 回归验证

| # | 测试场景 | 预期结果 | 验证状态 |
|---|---------|---------|:--------:|
| 1 | fillMode=1（适应模式） | 高度扩展正常，不受 clipsToBounds=NO 影响 | |
| 2 | fillMode=2（拉伸填充） | 拉伸铺满，无溢出内容干扰 | |
| 3 | fillMode 切换（0→1→0→2→0） | 每次切回 fillMode=0 时对齐正确 | |
| 4 | XOffset/YOffset 调节 + fillMode=0 | 偏移正常，对齐效果叠加正确 | |
| 5 | 圆角开启 + fillMode=0 | 图片在圆角范围内正常显示，越界部分被 masksToBounds 裁剪 | |
| 6 | 深色模式切换 | 所有模式正常 | |
| 7 | 隐藏路径 | 隐藏后正常隐藏/显示 | |

### 6.3 边界条件

| # | 测试场景 | 预期结果 | 验证状态 |
|---|---------|---------|:--------:|
| 1 | 图片 500×4000（极窄极高） | overflow 很大，仍正确定位 | |
| 2 | 图片 4000×500（极宽极矮） | overflow < 0，全图显示 | |
| 3 | 无图片（路径为空） | `!imageView.image` 守卫，不偏移 | |
| 4 | 异步加载中切 alignment | 重新进入分支 A → 重新计算偏移 | |
| 5 | alignment 从 1→0→2 快速切换 | 每次正确计算偏移 | |

---

## 七、方案B vs 方案C 对比

| 维度 | 方案B（contentsRect） | **方案C（frame 偏移+clipsToBounds=NO）** |
|------|:-------------------:|:--------------------------------------:|
| 核心机制 | `layer.contentsRect` 百分比裁剪 | **`clipsToBounds=NO` 让图片溢出 + `frame.origin.y` 偏移** |
| 新增代码量 | 新增 1 个方法 + 2 处调用 | **恢复旧方案：新增 1 个方法 + 改 1 个属性 + 2 处调用** |
| `clipsToBounds` | `YES`（不变） | **`NO`（需修改）** |
| 对齐原理 | 裁剪图片渲染结果 | **利用 button.masksToBounds 作为窗口，移动图片** |
| 与微信优化一致性 | 可能接近（不确定） | **不确定，但逻辑自洽** |
| 代码熟悉度 | 新方案 | **你写过，熟悉** |
| 副作用 | `contentsRect` 残留需小心处理 | **clipsToBounds=NO 可能影响其他依赖 clip 的逻辑** |

### clipsToBounds=NO 的潜在影响

改成 `NO` 后，如果 imageView 在其他地方被依赖 `clipsToBounds=YES` 的行为，可能会有视觉溢出。检查以下几个地方：

- **`applyProfileCardCorner`**：`button.layer.masksToBounds=YES` 会裁掉超出 button 的部分 ✅ 不受影响
- **其他给 imageView 加子视图的代码**：如果有 subview，`clipsToBounds=NO` 会让 subview 溢出 ❗ 需要检查
- **contentMode 不是 ScaleAspectFill 时**：大图可能以奇怪方式溢出 ⚠️ 但代码中 fillMode=2 用 ScaleToFill，不溢出

---

## 八、附录：完整代码参考

### 恢复的方法完整代码

```objc
#pragma mark - fillMode=0 垂直对齐偏移计算

+ (CGFloat)calcImageAlignmentOffsetWithImageSize:(CGSize)imageSize
                                          inView:(UIView *)view {
    PluginConfig *config = [PluginConfig shared];
    NSInteger fillMode = config.cardBgFillMode;
    NSInteger alignment = config.cardBgAlignment;

    if (fillMode != 0) return 0;
    if (imageSize.width <= 0 || imageSize.height <= 0) return 0;

    CGFloat viewW = view.bounds.size.width;
    CGFloat viewH = view.bounds.size.height;
    if (viewW <= 0 || viewH <= 0) return 0;

    CGFloat scale = viewW / imageSize.width;
    CGFloat renderedH = imageSize.height * scale;
    CGFloat overflow = renderedH - viewH;

    if (overflow <= 0) return 0;

    switch (alignment) {
        case 0:  return -overflow / 2.0;   // 居中
        case 2:  return  overflow / 2.0;   // 底部
        default: return 0;                  // 顶部
    }
}
```

### clipsToBounds 修改位置

```objc
// ProfileCardBgHook.m L449
    newBg.clipsToBounds = NO;  // ★ YES → NO
```

### 分支 A 恢复代码

```objc
    if (bgImgView) {
        // ── 分支 A：已存在 → 更新 frame ──
        NSInteger fillMode = config.cardBgFillMode;
        switch (fillMode) {
            case 1: bgImgView.contentMode = UIViewContentModeScaleAspectFill; break;
            case 2: bgImgView.contentMode = UIViewContentModeScaleToFill; break;
            default: bgImgView.contentMode = UIViewContentModeScaleAspectFill; break;
        }

        // ★ 确保 clipsToBounds=NO（如果是之前 YES 下创建的）
        bgImgView.clipsToBounds = NO;

        bgImgView.frame = CGRectMake(ox, oy, bgW, bgH);

        // ★ 恢复：应用 fillMode=0 的对齐偏移
        if (bgImgView.image && bgImgView.image.size.width > 0) {
            CGFloat alignOffset = [ProfileCardBgHook
                calcImageAlignmentOffsetWithImageSize:bgImgView.image.size
                                               inView:button];
            if (fabs(alignOffset) > 0.5) {
                CGRect f = bgImgView.frame;
                f.origin.y = oy + alignOffset;
                bgImgView.frame = f;
            }
        }

        if (config.cardBgLayer == 1) [button bringSubviewToFront:bgImgView];
    }
```

### 异步回调恢复代码

```objc
            if (resultImage) {
                strongBg.image = resultImage;
                strongBg.alpha = 1.0;
                strongBg.hidden = NO;

                // ★ 恢复：图片尺寸已知，应用 fillMode=0 对齐偏移
                CGFloat alignOffset = [ProfileCardBgHook
                    calcImageAlignmentOffsetWithImageSize:resultImage.size
                                                   inView:strongButton];
                if (fabs(alignOffset) > 0.5) {
                    PluginConfig *cfg = [PluginConfig shared];
                    CGRect f = strongBg.frame;
                    f.origin.y = cfg.cardBgOffsetY + alignOffset;
                    strongBg.frame = f;
                }
            } else {
                // fallback：无图片时设置背景色
                PluginConfig *cfg = [PluginConfig shared];
                UIColor *cardBg = [cfg colorFromHex:isDark
                    ? cfg.listCardDarkBgColor : cfg.listCardLightBgColor];
                if (cardBg) strongButton.backgroundColor = cardBg;
            }
```