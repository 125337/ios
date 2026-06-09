# Scene A：隐藏信息卡片时移除背景图 改造方案

## 现状

当前 `handleHiddenPath` 分两个场景处理隐藏信息卡片：

| 场景 | 条件 | 行为 |
|------|------|------|
| Scene B | `cardBgHidden=YES` + `cardBgMaterialEnabled=NO` | 完全隐藏，直接 return |
| Scene A | `cardBgHidden=YES` + `cardBgMaterialEnabled=YES` | 先调用 `setupBackgroundMaterialInButton` 加载背景图，再隐藏其余子视图，**保留背景图可见** |

**目标**：Scene A 不再保留背景图，改为完全隐藏（与 Scene B 行为一致）。

---

## 改动点

### 改动 1：`handleHiddenPath` — 合并 Scene A / Scene B

**文件**：[ProfileCardBgHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m)

**位置**：`+ (void)handleHiddenPath:` 方法（当前 L770-L811）

#### 改前代码结构

```objc
+ (void)handleHiddenPath:(UIView *)button isDark:(BOOL)isDark {
    PluginConfig *config = [PluginConfig shared];
    BOOL hasMaterial = config.cardBgMaterialEnabled;

    // ── 共有清除 ──
    button.backgroundColor = [UIColor clearColor];
    button.layer.backgroundColor = [UIColor clearColor].CGColor;
    button.layer.masksToBounds = NO;
    button.layer.cornerRadius = 0;
    button.layer.borderWidth = 0;
    [ProfileCardBgHook cleanNativeBgImageView:button];

    // Scene B：无素材 → 完全隐藏
    if (!hasMaterial) {
        for (UIView *sub in button.subviews) {
            sub.hidden = YES;
        }
        return;
    }

    // Scene A：有素材 → 加载背景，隐藏其余，保留背景图
    [ProfileCardBgHook setupBackgroundMaterialInButton:button isDark:isDark];
    for (UIView *sub in button.subviews) {
        if ([sub isKindOfClass:[UIImageView class]] &&
            sub.tag == kProfileCardBgImageTag) {
            continue;  // 保留背景图
        }
        sub.hidden = YES;
    }
}
```

#### 改后代码结构

```objc
+ (void)handleHiddenPath:(UIView *)button isDark:(BOOL)isDark {
    // 注意：删除了 config 和 hasMaterial 变量，不再需要

    // ── 共有清除 ──
    button.backgroundColor = [UIColor clearColor];
    button.layer.backgroundColor = [UIColor clearColor].CGColor;
    button.layer.masksToBounds = NO;
    button.layer.cornerRadius = 0;
    button.layer.borderWidth = 0;
    [ProfileCardBgHook cleanNativeBgImageView:button];

    // ★ Scene A / Scene B 统一：完全隐藏所有子视图
    // ★ 不再区分是否有素材，不再调用 setupBackgroundMaterialInButton
    for (UIView *sub in button.subviews) {
        sub.hidden = YES;
    }
    // 不保留任何背景图，直接 return
}
```

**改动总结**：
1. 删除 `BOOL hasMaterial = config.cardBgMaterialEnabled;`
2. 删除 Scene B 的 `if (!hasMaterial) { ... }` 分支守卫
3. 删除 Scene A 的 `setupBackgroundMaterialInButton` 调用
4. 删除 Scene A 中按 tag 保留背景图的 `continue` 逻辑
5. 所有子视图统一 `hidden = YES`，不 return 也可以（后面没有代码了）

---

### 改动 2（可选）：`handleButtonLayout` 入口是否需要精简？

**位置**：`+ (void)handleButtonLayout:` 方法（当前 L686）

#### 改前

```objc
if (config.cardBgHidden) {
    [ProfileCardBgHook handleHiddenPath:button isDark:isDark];
} else if (config.cardBgMaterialEnabled || config.cardBgCornerEnabled) {
    [ProfileCardBgHook handleVisiblePath:button isDark:isDark];
}
```

#### 分析

Scene A 改造后，`handleHiddenPath` 不再依赖 `cardBgMaterialEnabled` 的值，因此入口路由无需修改。`cardBgHidden` 为 YES 时始终走隐藏路径，逻辑依然正确。

**结论**：此处不需要改动。

---

## 影响范围分析

### 正面影响

| 场景 | 改前 | 改后 |
|------|------|------|
| `hidden=YES, material=YES` | 显示背景图，隐藏内容 | 全部隐藏（背景图也不显示） |
| `hidden=YES, material=NO` | 全部隐藏 | 全部隐藏（不变） |
| `hidden=NO, material=YES` | 背景图 + 内容都显示 | 不变 |
| `hidden=NO, material=NO` | 纯色背景 + 内容 | 不变 |

### 背景图恢复行为

当用户关闭 `cardBgHidden` 时，会走 `handleVisiblePath`，其中调用 `setupBackgroundMaterialInButton`。该方法内部：

```
if (已有 bgImgView) → 分支 A：更新 frame
else                → 分支 B：创建新 bg + 异步加载图片
```

由于改造后 Scene A 不再创建背景图（不调用 `setupBackgroundMaterialInButton`），button.subviews 中不会存在 `kProfileCardBgImageTag` 的 view，因此下次进入 `handleVisiblePath` 时**一定会走分支 B**，重新创建背景图。恢复行为正常。

> **对比**：之前用 `removeFromSuperview` 的方式也是为了让下次走分支 B，现在直接不创建，效果一样，而且更干净。

### 性能影响

改造后 Scene A 不再执行 `setupBackgroundMaterialInButton`（含异步图片加载、frame 适配、tableHeaderView 刷新等），减少了不必要的计算和 I/O。

---

## 涉及文件

| 文件 | 改动类型 |
|------|---------|
| [ProfileCardBgHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m) | 修改 `handleHiddenPath:` 方法 |

仅此一个文件，不涉及配置模型、UI 设置或其它 hook 点。

---

## 测试要点

1. **组合 1**：总开关 ON + 隐藏信息卡片 ON + 使用背景素材 ON
   - 预期：资料卡完全隐藏，背景图不可见
2. **组合 2**：在上述状态下关闭「隐藏信息卡片」
   - 预期：资料卡恢复，背景图正常显示
3. **组合 3**：总开关 ON + 隐藏信息卡片 ON + 使用背景素材 OFF
   - 预期：资料卡完全隐藏（与改前一致，回归）
4. **组合 4**：开关机切换（隐藏 ON→OFF→ON），验证背景图创建/隐藏无残留