# handleVisiblePath 逻辑重构方案 — 不再以打补丁方式修复

## 问题现象

当前代码在以下两个场景表现不一致：

| 场景 | 配置 | 白色子视图是否清理 | 背景色是否正确 |
|:---|------|:----------------:|:-------------:|
| 1 | 使用背景素材(无图片) + 资料圆角 | ❌ 不清理 | ❌ 白色遮挡 |
| 2 | 只开启资料圆角 | ✅ 清理 | ✅ 正常 |

场景 1 的用户体验：用户开启了「使用背景素材」但还没上传图片，此时背景素材本身没有生效，但用户同时开启的资料圆角应该能正常工作——实际上却因为白色子视图没被清理而显示为白色。

---

## 根因

`handleVisiblePath:` 当前结构（L815-L894）：

```
if (hasMaterial) {
    if (hasImagePath) {  ← ② cleanup 被 hasImagePath 守卫
        clear bg
        cleanNativeBgImageView
    }
    setupBackgroundMaterial
    if (hasImagePath) {  ← ③ FIX-WHITE 被 hasImagePath 守卫
        FIX-WHITE
    }
} else {
    if (cornerEnabled) {  ← ① cleanup 直接放在 else 分支
        clear bg + cleanNativeBgImageView + FIX-WHITE + applyColor
    }
}
```

三个问题：

1. **cleanup 逻辑不统一** — 重复了两遍（若干行完全相同的 clear bg 操作）
2. **cleanup 守卫条件不对** — 应该按"是否需要清理"判断（`hasImagePath || needCorner`），而不是"是否属于哪条分支"
3. **颜色设置职责不清晰** — else 分支设了一次 backgroundColor，`applyProfileCardCorner:` 又设一次

---

## 重构方案

### 核心思路

`handleVisiblePath:` 拆为 3 个清晰的阶段，使用统一的守卫条件：

```
handleVisiblePath:
  ├─ 阶段 1：Cleanup（清理原生白色）
  │     条件：hasImagePath || needCorner
  │     clear bg + cleanNativeBgImageView + FIX-WHITE
  │
  ├─ 阶段 2：Material（创建背景素材）
  │     条件：hasMaterial
  │     setupBackgroundMaterialInButton
  │
  └─ 阶段 3：Color（设置背景色 — 委托给 applyProfileCardCorner）
       不再在这里设色，由 handleCornerAndQR → applyProfileCardCorner 统一处理
```

这样所有分支都走到同一份 cleanup 代码，彻底消除不一致。

---

### 改动 1：重构 `handleVisiblePath:`

**文件**：[ProfileCardBgHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L815-L895)

```objc
// ═══════════════════════════════════════════════════════
// 改前（L815-L895）：
// ═══════════════════════════════════════════════════════
+ (void)handleVisiblePath:(UIView *)button isDark:(BOOL)isDark {
    PluginConfig *config = [PluginConfig shared];
    BOOL hasMaterial = config.cardBgMaterialEnabled;

    button.hidden = NO;

    // ══════ 有素材 ══════
    if (hasMaterial) {
        BOOL hasImagePath = config.cardBgImagePath.length > 0;

        // 清理（只有有图片路径才执行）
        if (hasImagePath) {
            button.backgroundColor = [UIColor clearColor];
            button.layer.backgroundColor = [UIColor clearColor].CGColor;
        }

        button.layer.masksToBounds = NO;
        button.layer.cornerRadius = 0;
        button.layer.borderWidth = 0;

        if (hasImagePath) {
            [ProfileCardBgHook cleanNativeBgImageView:button];
        }

        [ProfileCardBgHook setupBackgroundMaterialInButton:button isDark:isDark];

        // FIX-WHITE（只有有图片路径才执行）
        if (hasImagePath) {
            for (...) { ... }
        }

    // ══════ 无素材 ══════
    } else {
        if (config.cardBgCornerEnabled) {
            button.backgroundColor = [UIColor clearColor];
            button.layer.backgroundColor = [UIColor clearColor].CGColor;
            [ProfileCardBgHook cleanNativeBgImageView:button];

            // FIX-WHITE
            for (...) { ... }

            // 设背景色
            UIColor *bgColor = nil;
            ...  // 从 config 取值
            if (bgColor) button.backgroundColor = bgColor;
        }
    }
}

// ═══════════════════════════════════════════════════════
// 改后（L815-L878）：
// ═══════════════════════════════════════════════════════
+ (void)handleVisiblePath:(UIView *)button isDark:(BOOL)isDark {
    PluginConfig *config = [PluginConfig shared];
    BOOL hasMaterial = config.cardBgMaterialEnabled;
    BOOL hasImagePath = hasMaterial && config.cardBgImagePath.length > 0;
    BOOL needCorner = config.cardBgCornerEnabled;

    button.hidden = NO;

    // ══════════════════════════════════════════════════════
    // 阶段 1：Cleanup — 清理原生白色背景
    // 条件：有实际素材（图片路径）或有圆角
    // ══════════════════════════════════════════════════════
    if (hasImagePath || needCorner) {
        button.backgroundColor = [UIColor clearColor];
        button.layer.backgroundColor = [UIColor clearColor].CGColor;

        [ProfileCardBgHook cleanNativeBgImageView:button];

        // FIX-WHITE：隐藏 button 下的白色原生子视图
        // （有素材路径跳过 kProfileCardBgImageTag，无素材路径无此 tag 跳过自然不生效）
        for (NSInteger i = button.subviews.count - 1; i >= 0; i--) {
            UIView *sub = button.subviews[i];
            if (sub.tag == kProfileCardBgImageTag) continue;
            if ([ProfileCardBgHook isEssentialSubview:sub]) continue;
            if ([ProfileCardBgHook isWhiteOrDynamicBackground:sub]) {
                sub.hidden = YES;
            }
        }
    }

    // ══════════════════════════════════════════════════════
    // 阶段 2：Material — 创建背景素材（重置 layer 为素材做准备）
    // 条件：有素材（不论是否有图片路径）
    // ══════════════════════════════════════════════════════
    if (hasMaterial) {
        button.layer.masksToBounds = NO;
        button.layer.cornerRadius = 0;
        button.layer.borderWidth = 0;

        [ProfileCardBgHook setupBackgroundMaterialInButton:button isDark:isDark];
    }

    // ★ 阶段 3：Color — 背景色 + 圆角 + 边框
    // 统一由 handleCornerAndQR → applyProfileCardCorner 处理
    // 不在 handleVisiblePath 中设色，避免职责分散
}
```

#### 关键变更点

| 变更 | 说明 |
|------|------|
| `hasImagePath` 前置为局部变量 | 避免在 if 块内重复计算，同时用于 cleanup 守卫 |
| cleanup 条件统一为 `hasImagePath \|\| needCorner` | 只要任一功能需要清理白色背景就执行 |
| 删除 else 分支的颜色设置 | 颜色由 `applyProfileCardCorner:` 统一管理（唯一入口） |
| FIX-WHITE 中加入 `kProfileCardBgImageTag` 跳过 | 统一为一句，有素材时跳过自定义背景图，无素材时无此 tag 自然不匹配 |
| cleanup 单份 | 不再存在两处重复代码 |

---

### 改动 2：`applyProfileCardCorner:` 处理 hasMaterial 时的背景色

**背景**：当 `hasMaterial=YES` 时，`setupBackgroundMaterialInButton:` 内部会在图片加载成功时用素材色、失败时用 fallback 色。而 `applyProfileCardCorner:` 也会设 backgroundColor，两者可能冲突。

**结论**：**无需额外改动**。`applyProfileCardCorner:` 的 backgroundColor 设置优先级是合理的：
- `hasMaterial=YES`：素材图片加载完成时会覆盖 backgroundColor（异步，素材加载完成后设置），素材加载失败时 fallback 色也会覆盖
- `hasMaterial=NO + needCorner=YES`：`applyProfileCardCorner:` 设色，无冲突
- `hasMaterial=NO + needCorner=NO`：不去 `handleVisiblePath`，不走 cleanColor，`applyProfileCardCorner` 内部 `return`，不设色

---

## 完整场景验证

| 场景 | 配置 | Cleanup | Material | Color | 预期结果 |
|:---|------|:-------:|:--------:|:-----:|:--------|
| A | 素材(有图) + 圆角 | ✅ | ✅ | ✅(素材图覆盖) | 背景图正常显示 |
| B | 素材(无图) + 圆角 | ✅ | ✅(空操作) | ✅(corner设色) | 显示圆角背景色 |
| C | 素材(有图) + 无圆角 | ✅ | ✅ | ❌(corner跳过) | 背景图正常显示 |
| D | 无素材 + 圆角 | ✅ | ❌ | ✅ | 显示圆角背景色 |
| E | 无素材 + 无圆角 | ❌(不进visible) | ❌ | ❌ | 完全原生 |

所有场景的 cleanup 守卫统一为 `hasImagePath || needCorner`，不再遗漏。

---

## 涉及文件

| 文件 | 改动 |
|------|------|
| [ProfileCardBgHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L815-L895) | `handleVisiblePath:` 重构为 3 阶段结构 |

仅此一个文件。

---

## 测试要点

| 场景 | 操作 | 预期 |
|:----|------|------|
| 1 | 素材(有图) + 圆角 | 背景图显示，圆角生效 |
| 2 | 素材(无图) + 圆角 + 设置背景色 | 显示圆角背景色，无白色遮挡 |
| 3 | 无素材 + 圆角 + 设置背景色 | 显示圆角背景色，无白色遮挡 |
| 4 | 隐藏信息卡片 | 完全隐藏（回归） |
| 5 | 总开关 OFF | 完全原生 |