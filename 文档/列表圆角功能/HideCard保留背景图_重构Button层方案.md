# HideCard 保留背景图 — 重构为 Button 层方案

> **背景**：此前在分析中错误地将 bg 放在 Cell 层，引入了 `getCellFromButton:` 和视图层级假设问题。微信优化反编译代码证实 bg 在 Button 层（MMUIButton 的直接子视图），架构更简单、无需跨层级查找。本文档提供从 Cell 层回退到 Button 层的完整重构步骤。

---

## 一、架构总览

### 1.1 目标架构（与微信优化一致）

```
handleButtonLayout:（MMUIButton::layoutSubviews Hook）
│
├─ 拒绝链（VC/MMHeadImageView/高度）              ← 保留不变
│
├─ HideCard 分支                                    ← ★ 改造
│   ├─ button.backgroundColor = clearColor
│   ├─ button.layer.backgroundColor = clearColor.CGColor
│   ├─ 子视图遍历：非 UIImageView → hidden=YES
│   │               UIImageView → 检查 tag
│   │       tag == kMioCardBgTag → 保留可见（bg 豁免）
│   │       其他 → hidden=YES
│   ├─ 继续执行 bg 生命周期（不 return）              ← ★ 改造：删除 return
│   └─ 不隐藏 button 本身
│
├─ 非 HideCard 分支
│   ├─ button.hidden = NO                           ← 保留
│   ├─ button.backgroundColor = clearColor          ← 保留
│   ├─ FIX-WHITE 子视图管理                          ← ★ 改造：跳过 bg tag
│   └─ bg 生命周期（始终执行）                        ← ★ 改造：移到外面
│
├─ 高度调整                                          ← 保留不变
├─ 圆角 + 边框                                       ← 保留不变
└─ QR 码隐藏                                        ← 保留不变
```

### 1.2 文件变更范围

| 文件 | 变更 |
|------|------|
| `ProfileCardBgHook.m` | 增删改约 5 个代码块（详见下文） |
| `ProfileCardBgHook.h` | 无变更 |
| 其他文件 | 无变更 |

### 1.3 核心设计：tag 标签系统

借鉴微信优化的 tag 系统（9998=浅色，9999=深色），采用统一 tag：

```objc
static const NSInteger kMioCardBgTag = 999902;  // 已存在，不改
```

- bg 创建时固定 tag = `kMioCardBgTag`
- 子视图可见性管理中，遇 `tag == kMioCardBgTag` 的 UIImageView → 豁免隐藏
- 通过 `button.subviews` 搜索即可找到 bg，**不需要关联对象**

---

## 二、详细改造步骤

### Step 1：删除 `getCellFromButton:` 及其相关调用

**位置**：`ProfileCardBgHook.m`

**删除内容 1**（整个方法）：

```objc
// ▼ 删除：整段方法（line 365-372）
+ (UITableViewCell *)getCellFromButton:(UIView *)button {
    UIView *contentView = button.superview;
    if (!contentView) return nil;
    UIView *cell = contentView.superview;
    if (!cell || ![cell isKindOfClass:[UITableViewCell class]]) return nil;
    return (UITableViewCell *)cell;
}
```

**删除内容 2**（`handleButtonLayout:` 中）：

```objc
// ▼ 删除：line 417-600 整个 if (cell) { ... } 块
// 包括：getCellFromButton 调用、Cell 4层透明化、Cell 层 bg 搜索/创建/加载
```

**即删除的部分**：
```
Line 416  ── // ── [NEW] 获取 Cell → Cell 透明化 + bg 生命周期 ──
Line 417  ── UITableViewCell *cell = [self getCellFromButton:button];
Line 418  ── if (cell) {
Line 419  ──
Line 420-441  ── // Cell 4层透明化代码
Line 443-452  ── // Cell 层 bg 搜索（cell.subviews）
Line 455-459  ── // convertRect:toView:cell
Line 464-497  ── // 分支 A：已存在 bg 更新 frame
Line 498-600  ── // 分支 B：创建新 bg + 异步加载
Line 600  ── } // end if (cell)
```

**删除后，`handleButtonLayout:` 的后续流程要重新连接**：if (cell) 块后的 `needsFullCardBg` 逻辑（line 602+）原本在 if 块外，删除后正常保留。

---

### Step 2：在 Button Hook 中管理 bg（取代 Cell 层逻辑）

**位置**：`handleButtonLayout:` 中，`needsFullCardBg` 块内（`FIX-WHITE` 之前或之后均可，建议放在 FIX-WHITE 之前，与微信优化一致）

**新增这段代码**（放到 `needsFullCardBg` 块开头，即 line 607 位置）：

```objc
// ══════════════════════════════════════════
// ★ Button 层 bg 生命周期
// ══════════════════════════════════════════

// ── 查找 Button 层已有 bg ──
UIImageView *bgImgView = nil;
for (UIView *sub in button.subviews) {
    if (sub.tag == kMioCardBgTag && [sub isKindOfClass:[UIImageView class]]) {
        bgImgView = (UIImageView *)sub;
        break;
    }
}

CGFloat bgW = button.bounds.size.width;
CGFloat bgH = button.bounds.size.height;
CGFloat bgX = 0;
CGFloat bgY = 0;
CGFloat ox = isDark ? config.cardBgDarkOffsetX : config.cardBgLightOffsetX;
CGFloat oy = isDark ? config.cardBgDarkOffsetY : config.cardBgLightOffsetY;

// ── 分支 A：已存在 bg → 更新 frame ──
if (bgImgView) {
    NSInteger fillMode = config.cardBgFillMode;
    switch (fillMode) {
        case 1: bgImgView.contentMode = UIViewContentModeScaleAspectFit; break;
        case 2: bgImgView.contentMode = UIViewContentModeScaleToFill; break;
        default: bgImgView.contentMode = UIViewContentModeScaleAspectFill; break;
    }

    // alignment 偏移
    NSInteger alignment = isDark ? config.cardBgDarkAlignment : config.cardBgLightAlignment;
    CGFloat alignOffset = 0;
    if ((fillMode == 0 || fillMode == 3) && bgImgView.image &&
        bgImgView.image.size.width > 0) {
        CGFloat iW = bgImgView.image.size.width;
        CGFloat iH = bgImgView.image.size.height;
        CGFloat scale = bgW / iW;
        CGFloat renderedH = iH * scale;
        CGFloat overflow = renderedH - bgH;
        if (overflow > 0) {
            switch (alignment) {
                case 0:  alignOffset = -overflow / 2.0; break;
                case 2:  alignOffset =  overflow / 2.0; break;
                default: alignOffset = 0; break;
            }
        }
    }

    bgImgView.frame = CGRectMake(bgX + ox, bgY + oy + alignOffset, bgW, bgH);

    // 图层顺序
    NSInteger layerPos = isDark ? config.cardBgDarkLayer : config.cardBgLightLayer;
    if (layerPos == 1) [button bringSubviewToFront:bgImgView];
}
// ── 分支 B：不存在 → 创建新 bg ──
else {
    UIImageView *newBg = [[UIImageView alloc] init];
    newBg.tag = kMioCardBgTag;
    newBg.clipsToBounds = NO;
    newBg.userInteractionEnabled = NO;

    NSInteger fillMode = config.cardBgFillMode;
    switch (fillMode) {
        case 1: newBg.contentMode = UIViewContentModeScaleAspectFit; break;
        case 2: newBg.contentMode = UIViewContentModeScaleToFill; break;
        default: newBg.contentMode = UIViewContentModeScaleAspectFill; break;
    }

    newBg.frame = CGRectMake(bgX + ox, bgY + oy, bgW, bgH);

    // ★ 插入到 Button 层（最底层或上层，由配置决定）
    NSInteger layerPos = isDark ? config.cardBgDarkLayer : config.cardBgLightLayer;
    if (layerPos == 1) {
        [button addSubview:newBg];
        [button bringSubviewToFront:newBg];
    } else {
        [button insertSubview:newBg atIndex:0];
    }

    // ── 异步加载图片 ──
    __weak UIImageView *weakBg = newBg;
    __weak UIView *weakButton = button;
    BOOL capturedIsDark = isDark;

    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
        __strong UIImageView *strongBg = weakBg;
        if (!strongBg) return;

        UIImage *resultImage = [ProfileCardBgHook loadBackgroundImageSync:capturedIsDark];

        dispatch_async(dispatch_get_main_queue(), ^{
            __strong UIImageView *finalBg = weakBg;
            __strong UIView *finalButton = weakButton;
            if (!finalBg || !finalButton) return;

            if (resultImage) {
                finalBg.image = resultImage;
                finalBg.alpha = 1.0;
                finalBg.hidden = NO;

                // alignment 偏移（异步加载时重新计算）
                PluginConfig *cfg = [PluginConfig shared];
                NSInteger fm = cfg.cardBgFillMode;
                NSInteger alignment = capturedIsDark ? cfg.cardBgDarkAlignment
                                                     : cfg.cardBgLightAlignment;
                CGFloat userOy = capturedIsDark ? cfg.cardBgDarkOffsetY
                                                : cfg.cardBgLightOffsetY;

                if ((fm == 0 || fm == 3) && resultImage.size.width > 0) {
                    CGFloat iW = resultImage.size.width;
                    CGFloat iH = resultImage.size.height;
                    CGFloat scale = finalButton.bounds.size.width / iW;
                    CGFloat renderedH = iH * scale;
                    CGFloat overflow = renderedH - finalButton.bounds.size.height;

                    if (overflow > 0) {
                        CGFloat alignOff = 0;
                        switch (alignment) {
                            case 0:  alignOff = -overflow / 2.0; break;
                            case 2:  alignOff =  overflow / 2.0; break;
                            default: alignOff = 0; break;
                        }
                        CGRect f = finalBg.frame;
                        f.origin.y = userOy + alignOff;
                        finalBg.frame = f;
                    }
                }

                WPLog(@"CardBg-Diag", @"[CELL-BG] image=SET (Button layer), frame=(%.0f,%.0f,%.0f,%.0f)",
                      finalBg.frame.origin.x, finalBg.frame.origin.y,
                      finalBg.frame.size.width, finalBg.frame.size.height);
            } else {
                // 回退：设 button 背景色
                PluginConfig *cfg = [PluginConfig shared];
                UIColor *cardBg = [cfg colorFromHex:capturedIsDark
                    ? cfg.listCardDarkBgColor : cfg.listCardLightBgColor];
                if (cardBg) finalButton.backgroundColor = cardBg;
                WPLog(@"CardBg-Diag", @"[CELL-BG] FALLBACK: set button bg=%@", cardBg);
            }
        });
    });
}
```

**注意事项**：
- bg 插入到 `button.subviews`，`frame` 直接用 `button.bounds`，**不需要 `convertRect:toView:`**
- 关联对象 `kMioBgLoadedKey` **不再需要**（用 `button.subviews` 搜索 tag 即可判断，与微信优化一致）
- 原 Cell 层方案的 `alreadyLoaded` 判断（关联对象）→ 替换为 `bgImgView.image != nil` 检查

---

### Step 3：改造 FIX-WHITE——跳过 bg 的 tag

**位置**：`handleButtonLayout:` 中 `FIX-WHITE` 子视图循环（line 657-696）

**当前 FIX-WHITE**（line 658-696）：

```objc
for (NSInteger i = button.subviews.count - 1; i >= 0; i--) {
    UIView *sub = button.subviews[i];
    if (sub.tag == kMioBgImageTag_local) continue;  // ★ 已经跳过 tag
    // ... 各种 white view 判断 ...
    if (shouldHide) {
        sub.hidden = YES;
    }
}
```

**FIX-WHITE 已经跳过了 `kMioBgImageTag_local`（=999902）！** 但此处的 `kMioBgImageTag_local` 是局部常量，需要确认与全局的 `kProfileCardBgImageTag` 一致。

**改造**：将 FIX-WHITE 中的局部常量 `kMioBgImageTag_local` 替换为全局常量 `kProfileCardBgImageTag`：

```objc
// line 657：查找替换
// 旧：
    static const NSInteger kMioBgImageTag_local = 999902;
// 新：
    // 使用全局常量 kProfileCardBgImageTag（=999902）
```

**或者**：直接确认两值一致即可，不需要改代码。

---

### Step 4：改造 HideCard 分支——选择性隐藏 + 不 return

**位置**：`handleButtonLayout:` 中 `HideCard 分支`（line 610-633）

**当前代码**（line 610-633）：

```objc
if (config.cardBgHidden) {
    button.backgroundColor = [UIColor clearColor];
    button.layer.masksToBounds = NO;
    button.layer.cornerRadius = 0;
    button.layer.borderWidth = 0;

    // 清除微信原生 m_bgImageView
    Ivar bgIvar = class_getInstanceVariable([button class], "m_bgImageView");
    if (bgIvar) {
        id bgImgView = object_getIvar(button, bgIvar);
        if (bgImgView && [bgImgView isKindOfClass:[UIImageView class]]) {
            [(UIImageView *)bgImgView setImage:nil];
            [(UIImageView *)bgImgView setBackgroundColor:[UIColor clearColor]];
            [(UIImageView *)bgImgView setHidden:YES];
        }
        object_setIvar(button, bgIvar, nil);
    }

    button.hidden = YES;       // ← ★ 问题：整个 button 隐藏，bg 也被隐藏

    if (config.listHideRightQRCode) {
        [ProfileCardBgHook hideQRButtonInCell:button];
    }
    return;                    // ← ★ 问题：直接退出，bg 生命周期不执行
}
```

**改造后的代码**：

```objc
if (config.cardBgHidden) {
    // 1. 清除 button 背景色
    button.backgroundColor = [UIColor clearColor];
    button.layer.backgroundColor = [UIColor clearColor].CGColor;
    button.layer.masksToBounds = NO;
    button.layer.cornerRadius = 0;
    button.layer.borderWidth = 0;

    // 2. 清除微信原生 m_bgImageView
    Ivar bgIvar = class_getInstanceVariable([button class], "m_bgImageView");
    if (bgIvar) {
        id bgImgView = object_getIvar(button, bgIvar);
        if (bgImgView && [bgImgView isKindOfClass:[UIImageView class]]) {
            [(UIImageView *)bgImgView setImage:nil];
            [(UIImageView *)bgImgView setBackgroundColor:[UIColor clearColor]];
            [(UIImageView *)bgImgView setHidden:YES];
        }
        object_setIvar(button, bgIvar, nil);
    }

    // ★ 3. 选择性隐藏子视图（非 UIImageView → hidden，bg 通过 tag 豁免）
    for (UIView *sub in button.subviews) {
        if ([sub isKindOfClass:[UIImageView class]] &&
            sub.tag == kProfileCardBgImageTag) {
            // bg 图片 → 保留可见
            continue;
        }
        sub.hidden = YES;
    }

    // ★ 4. ❌ 不设 button.hidden = YES（否则 bg 也被隐藏）
    // ★ 5. ❌ 不 return（继续执行 bg 生命周期）

    // QR 码隐藏
    if (config.listHideRightQRCode) {
        [ProfileCardBgHook hideQRButtonInCell:button];
    }

    // ★ 6. 不 return → 继续执行到 bg 生命周期代码
}
```

**关键变更**：
1. `button.hidden = YES` → 删除（用子视图选择性隐藏替代）
2. `sub.hidden = YES` 前加 tag 豁免判断
3. `return` → 删除（继续执行 bg 生命周期）

---

### Step 5：调整非 HideCard 分支——确保 bg 不被 FIX-WHITE 误隐藏

当前 FIX-WHITE 已经跳过了 tag=999902，只要确认常量一致即可。还需要确保：

```objc
// ★ 非 HideCard 分支中，确保 button 可见
button.hidden = NO;
```

这行（line 638）已经存在，保留。

---

### Step 6：删除不再使用的关联对象 `kMioBgLoadedKey`

**位置**：`ProfileCardBgHook.m` 顶部（line 9）

```objc
// ▼ 删除：不再需要关联对象，用 tag 搜索代替
static const void *kMioBgLoadedKey = &kMioBgLoadedKey;
```

**注意**：如果其他模块引用了 `kMioBgLoadedKey`，则保留。只有确认无其他引用时才删除。

---

## 三、改造后代码结构

### 3.1 handleButtonLayout: 新流程

```
+ (void)handleButtonLayout:(UIView *)button {
    //
    // ── 拒绝链 ──
    //
    if (!config.cardBgEnabled && !config.listCornerRadiusEnabled) return;
    if (!isMoreVC) return;
    if (!foundHeadImageView) return;
    if (height <= 50) return;
    isDark = ...;

    //
    // ── 卡片背景专属操作 ──
    //
    if (needsFullCardBg) {

        // ★ Step 2: Button 层 bg 生命周期（搜索/创建/异步加载）
        //           （bg 始终存在，不依赖 HideCard 状态）
        //   代码见 Step 2

        // ★ Step 4: HideCard 分支 → 选择性隐藏子视图
        //   如果 HideCard:
        //     - 清 button 背景色
        //     - 选择性隐藏子视图（bg 通过 tag 豁免）
        //     - 不设 button.hidden=YES
        //     - 不 return
        //   否则:
        //     - button.hidden=NO
        //     - 清 button 背景色
        //     - 清除微信原生 m_bgImageView

        // ★ Step 3: FIX-WHITE（跳过 tag=kProfileCardBgImageTag 的 UIImageView）
    }

    //
    // ── 高度调整 ──
    //
    //   （不变）

    //
    // ── 圆角 + 边框 + QR 码 ──
    //
    //   （不变）
}
```

### 3.2 方法变更清单

| 方法 | 变更 |
|------|------|
| `+ (UITableViewCell *)getCellFromButton:` | **删除**——不再需要 |
| `+ (void)handleButtonLayout:` - if (cell) 块 | **删除**——Cell 4层透明化、Cell 层 bg 搜索、convertRect |
| `+ (void)handleButtonLayout:` - bg 生命周期 | **重建**——改为 Button 层操作，插到 button.subviews |
| `+ (void)handleButtonLayout:` - HideCard | **改造**——改为选择性隐藏 + 不 return |
| `+ (void)handleButtonLayout:` - FIX-WHITE | **调整**——确认 tag 常量一致（如有需要则替换） |
| `+ (void)handleButtonLayout:` - needsFullCardBg | **新增**——移入 bg 生命周期代码 |
| `kMioBgLoadedKey` 关联对象 | **删除**——用 tag 搜索替代 |

### 3.3 删除代码汇总

```
删除方法：
  getCellFromButton:                          (5 行)

删除 handleButtonLayout: 中代码块：
  // ── [NEW] 获取 Cell → Cell 透明化 + bg 生命周期 ──
  UITableViewCell *cell = ...;                (1 行)
  if (cell) {                                  (1 行)
    // 4 层透明化                               (22 行)
    // Cell 层 bg 搜索（cell.subviews）          (10 行)
    // convertRect:toView:cell                 (5 行)
    // 分支 A：已有 bg 更新 frame               (34 行)
    // 分支 B：创建新 bg                        (102 行)
  }                                            (1 行)

总计删除：约 181 行
```

### 3.4 新增代码汇总

```
在 needsFullCardBg 块开头新增：
  Button 层 bg 生命周期（搜索/创建/异步加载）     (约 90 行)

修改 HideCard 分支：
  删除 button.hidden = YES                     (1 行)
  删除 return                                   (1 行)
  新增选择性隐藏 + tag 豁免循环                  (8 行)

总计新增/修改：约 100 行
```

---

## 四、与微信优化的对照

### 4.1 一致性对比

| 维度 | 微信优化（FUN_00007b4c） | MioPlugin 重构后 | 一致？ |
|------|------------------------|-----------------|--------|
| bg 层级 | Button 层（`self.subviews`） | Button 层（`button.subviews`） | ✅ |
| bg 创建时机 | 始终创建，不依赖 HideCard | 始终创建，不依赖 HideCard | ✅ |
| bg tag | 9998（浅色）/ 9999（深色） | 999902（统一值） | ✅ 风格不同，功能等价 |
| HideCard 清 button 背景色 | ✅ | ✅ | ✅ |
| HideCard 隐藏子视图 | 非 UIImageView→hidden | 全部非 bg tag→hidden | ✅（更彻底，与微信优化方向一致） |
| HideCard 保留 bg | 通过 tag 豁免（9998/9999） | 通过 tag 豁免（999902） | ✅ |
| HideCard 后继续 bg 生命周期 | ✅（不 return） | ✅（不 return） | ✅ |
| 子视图豁免范围 | 所有 UIImageView(tag=9998/9999) | 仅 UIImageView(tag=999902) | ✅（MioPlugin 更精确） |
| Cell 透明化 | ❌ 不需要 | ❌ 不需要 | ✅ |
| 获取 Cell | ❌ 不需要 | ❌ 不需要 | ✅ |
| 坐标转换 | ❌ 不需要（self.bounds） | ❌ 不需要（button.bounds） | ✅ |

### 4.2 性能变化

| 指标 | 改造前（Cell 层） | 改造后（Button 层） | 差异 |
|------|-----------------|-----------------|------|
| `getCellFromButton:` 遍历 | 每次 `handleButtonLayout:` 调 | ❌ 删除 | **减少 1 次视图遍历** |
| `convertRect:toView:cell` | 每次 bg 更新时调 | ❌ 删除 | **减少 1 次坐标计算** |
| Cell 4层透明化 | 每次 bg 更新时调 | ❌ 删除 | **减少 4 次背景色设置** |
| `kMioBgLoadedKey` 关联对象 | 每次需读写 | ❌ 删除 | **减少 2 次 runtime 调用** |
| tag 搜索 | 搜索 cell.subviews | 搜索 button.subviews | **子视图数更少，更快** |

---

## 五、代码修改速查表

| 步骤 | 操作 | 位置（行号参考） | 改什么 |
|------|------|-----------------|--------|
| 1 | 删除 | L365-372 | `getCellFromButton:` 整个方法 |
| 1 | 删除 | L417-600 | `if (cell) { ... }` 整个块（含 Cell 透明化 + Cell 层 bg 管理） |
| 2 | 新增 | L607 之后 | Button 层 bg 生命周期（搜索/创建/异步加载） |
| 3 | 检查 | L657-658 | FIX-WHITE 中 tag 常量是否与全局一致 |
| 4 | 改造 | L610-633 | HideCard 分支：选择性隐藏 + 删除 button.hidden + 删除 return |
| 4 | 删除 | L627 | `button.hidden = YES;` |
| 4 | 删除 | L632 | `return;` |
| 6 | 删除 | L9 | `static const void *kMioBgLoadedKey`（确认无引用后） |

---

## 六、验证清单

### 6.1 编译验证

- [ ] 删除 `getCellFromButton:` 后编译无警告
- [ ] 删除 `if (cell)` 块后 `needsFullCardBg` 后续代码编译正常
- [ ] 删除 `kMioBgLoadedKey` 后编译无警告（确认无引用）

### 6.2 功能验证

| 场景 | cardBgHidden | cardBgEnabled | 预期 |
|------|-------------|--------------|------|
| 开启背景图 | NO | YES | button 显示背景图，白色子视图被 FIX-WHITE 隐藏 |
| 隐藏卡片 | YES | YES | 卡片内容隐藏，背景图可见，button 透明 |
| 关闭背景图 | NO | NO | 原始资料卡样式，无变化 |
| 深色模式切换 | NO | YES | bg 正常显示，tag 正确 |

### 6.3 日志验证

- [ ] `[CELL-BG] image=SET (Button layer)` → bg 创建成功
- [ ] HideCard 后 bg frame 日志依然出现（说明生命周期未被打断）
- [ ] 无 warning / 崩溃

### 6.4 回归验证

- [ ] 列表圆角功能正常
- [ ] QR 码隐藏正常
- [ ] 高度调整正常
- [ ] 边框/圆角配置正常
- [ ] FIX-WHITE 正常（白色视图被隐藏，bg 不被误隐藏）