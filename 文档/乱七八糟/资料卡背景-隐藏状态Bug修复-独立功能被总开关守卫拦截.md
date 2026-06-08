# 资料卡背景-隐藏状态功能 — Bug 修复：独立功能被总开关守卫拦截

> **Bug**: 开关在「我的页面美化」下开启后无隐藏效果
> **根因**: `hideStateElementsInCell:shouldHide:` 位于 `cardBgBeautifyEnabled` 总开关守卫之后，总开关关时被提前 return

---

## 问题分析

### handleButtonLayout 调用链

```
handleButtonLayout:
  │
  ├── 655  PluginConfig *config = [PluginConfig shared];
  ├── 656  if (!config.cardBgBeautifyEnabled) return;    ← 守卫！
  │
  ├── 658  找 MoreViewController
  ├── 661  检查 headImageView
  ├── 662  检查高度 > 50
  │
  ├── 666  cardBgHidden ? → 隐藏路径
  ├── 668  可见路径
  │
  ├── 673  handleMarginAdjustment
  ├── 674  handleCornerAndQR
  │
  └── 677  hideStateElementsInCell:shouldHide:    ← 在这儿，守卫之后
```

之前 switch 在「资料卡片美化」内，是 `cardBgBeautifyEnabled` 的子开关，总开关必开 → 守卫通过 → 隐藏生效。

现在 switch 移到了「我的页面美化」，与总开关无关。用户可能关着总开关（`cardBgBeautifyEnabled=NO`），此时第 656 行直接 return，**第 677 行永远跑不到**。

### 同样问题的还有 myPageHideArrow

`handleArrowQRHiding:` 的注释写的是「独立功能，不受总开关保护」，但这个方法定义出来后**从来没被 `handleButtonLayout:` 调过**。

---

## 修复方案

### 修改文件

[ProfileCardBgHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m)

### 修改：将隐藏状态调用提到守卫之前

把 [L676-L678](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L676-L678) 移到第 656 行之前：

```objc
+ (void)handleButtonLayout:(UIView *)button {
    PluginConfig *config = [PluginConfig shared];

    // ★ 独立功能：状态隐藏（不受总开关保护）
    [ProfileCardBgHook hideStateElementsInCell:button
                                   shouldHide:config.cardBgHideStateEnabled];

    // ★ 第1层：总开关守卫
    if (!config.cardBgBeautifyEnabled) return;
    
    // ... 后面不变 ...
    
    // 独立功能
    [ProfileCardBgHook handleMarginAdjustment:button];
    [ProfileCardBgHook handleCornerAndQR:button isDark:isDark];

    // ★ 删除旧位置的 hideStateElementsInCell（已移到顶部）
}
```

### 改前

```objc
+ (void)handleButtonLayout:(UIView *)button {
    PluginConfig *config = [PluginConfig shared];
    if (!config.cardBgBeautifyEnabled) return;
    
    // ... 守卫 ...
    // ... 场景路由 ...

    // 独立功能
    [ProfileCardBgHook handleMarginAdjustment:button];
    [ProfileCardBgHook handleCornerAndQR:button isDark:isDark];

    // ★ 状态隐藏
    [ProfileCardBgHook hideStateElementsInCell:button
                                   shouldHide:config.cardBgHideStateEnabled];
}
```

### 改后

```objc
+ (void)handleButtonLayout:(UIView *)button {
    PluginConfig *config = [PluginConfig shared];

    // ☆ 独立功能：状态隐藏（不受总开关保护）
    [ProfileCardBgHook hideStateElementsInCell:button
                                   shouldHide:config.cardBgHideStateEnabled];

    // ★ 第1层：总开关守卫
    if (!config.cardBgBeautifyEnabled) return;
    
    // ... 守卫 ...
    // ... 场景路由 ...

    // 独立功能
    [ProfileCardBgHook handleMarginAdjustment:button];
    [ProfileCardBgHook handleCornerAndQR:button isDark:isDark];
}
```

---

## 修改对照表

| 操作 | 位置 | 说明 |
|------|------|------|
| **移动** | L655 前插入 `hideStateElementsInCell:shouldHide:` | 在守卫之前执行 |
| **删除** | L676-L678 原位置 | 已移到顶部，删除重复调用 |

---

## 修复后数据流

```
cardBgBeautifyEnabled=OFF   cardBgBeautifyEnabled=ON
        │                           │
        ▼                           ▼
  hideStateElementsInCell     hideStateElementsInCell
  (生效 ✓)                    (生效 ✓)
        │                           │
        ▼                           ▼
  return (守卫拦截)              继续执行其余逻辑
```

无论总开关开还是关，状态隐藏功能都能独立工作。`config.cardBgHideStateEnabled` 的读取每次都走 PluginConfig 单例，拨动开关后立即可见效果。