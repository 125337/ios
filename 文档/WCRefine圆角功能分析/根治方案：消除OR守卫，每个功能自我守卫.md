# 根治方案：消除 OR 守卫，每个功能自我守卫

审查日期：2026-06-06

---

## 一、当前架构的根本问题

### 1.1 问题循环

```
每次加一个新功能 ↓
  在 OR 入口加一项：beautify || hidden || corner || ...
  ↓
用户只开了其中一项 ↓
  其他功能的独立方法被"顺带"执行
  ↓
出现非预期行为
  ↓
加补丁：`if (xxxEnabled)` 包起来
  ↓
入口 OR 列表越来越长，守卫越来越肥
  ↓
下一个新功能 → 重复上面循环 🔁
```

### 1.2 根因：入口守卫做了不该它做的事

| 当前 OR 入口 | 应该做的 | 实际做的 |
|------------|---------|---------|
| `beautify \|\| hidden \|\| corner` | 判断"有没有任何需要执行的代码" | 判断完还要替每个方法做担保 |
| 一旦放行 | 只放行路径路由 | 放行了所有独立方法（高度、边距） |

**核心矛盾**：入口守卫放行的是"任意一个"功能，但独立方法执行的是"所有"功能。

### 1.3 `cardBgBeautifyEnabled` 的双重身份

| 身份 | 含义 | 对应代码 |
|------|------|---------|
| A. 模块总开关 | 控制"这个功能模块是否安装" | `_hooked_heightForHeader` 第16行 |
| B. 美化子功能 | 控制"是否创建背景图" | 场景路由 `handleVisiblePath` → `setupBackgroundMaterialInButton` |

当前代码中 A 和 B 是同一个 NSUserDefaults 值，无法区分。

---

## 二、根治方案：消除 OR 守卫

### 2.1 新架构原则

1. **入口只做通用安全检查**（VC 类型、头像存在、高度过滤）——与具体功能无关
2. **每条路径、每个独立方法自己检查自己的开关**——不依赖任何总开关
3. **`cardBgBeautifyEnabled` 只控制美化功能**——不再承担总开关角色

### 2.2 改造后的入口

```objc
+ (void)handleButtonLayout:(UIView *)button {
    PluginConfig *config = [PluginConfig shared];

    // ★ 通用安全检查（与具体功能无关）
    UIViewController *vc = [ProfileCardBgHook findMoreViewController:button];
    if (!vc) return;
    if (![ProfileCardBgHook hasHeadImageViewInView:button]) return;
    if (button.frame.size.height <= 50.0) return;
    BOOL isDark = [ProfileCardBgHook isDarkModeForVc:vc];

    // ★ 场景路由（每个路径自己检查开关）
    if (config.cardBgHidden) {
        [ProfileCardBgHook handleHiddenPath:button isDark:isDark];
    } else if (config.cardBgMaterialEnabled || config.cardBgCornerEnabled) {
        [ProfileCardBgHook handleVisiblePath:button isDark:isDark];
    }

    // ★ 独立功能（每个方法自己检查开关）
    [ProfileCardBgHook handleHeightAdjustment:button];  // 内部 targetH<=0 守卫

    if (config.cardBgCornerEnabled) {                    // 边距跟随圆角
        [ProfileCardBgHook handleMarginAdjustment:button];
    }

    [ProfileCardBgHook handleCornerAndQR:button isDark:isDark];  // 内部 cornerEnabled 守卫
}
```

**改动**：删掉第589-594行的 OR 入口守卫块。

### 2.3 新架构的行为矩阵

| # | beautify | hidden | material | corner | height | 入口放行? | 实际执行的逻辑 |
|---|----------|--------|----------|--------|-------|----------|-------------|
| 1 | ON | OFF | OFF | OFF | 0 | 通用守卫通过 | **什么也不做**（无语义配置） ✅ |
| 2 | ON | OFF | OFF | OFF | >0 | 同上 | 仅 heightAdjustment（内部守卫通过） ✅ |
| 3 | ON | OFF | ON | OFF | 0 | 同上 | visiblePath → 背景素材 ✅ |
| 4 | OFF | ON | OFF | OFF | 0 | 同上 | hiddenPath ✅ |
| 5 | OFF | OFF | OFF | ON | 0 | 同上 | marginAdjustment + cornerAndQR ✅ |
| 6 | OFF | OFF | OFF | ON | >0 | 同上 | height + margin + cornerAndQR ✅ |
| 7 | OFF | OFF | OFF | OFF | 0 | 通用守卫通过 | **什么也不做**（与方法内部守卫全部拦截） ✅ |
| 8 | OFF | OFF | OFF | OFF | >0 | 同上 | heightAdjustment ✅ |

**关键变化**：
- 场景 1：之前 OR 守卫放行 → 高度+边距执行。现在 OR 守卫不存在 → 什么都不做 ✅
- 场景 5：之前 `beautify=OFF` → OR 守卫拦截 → 圆角不生效 ❌。现在 `corner=ON` → margin+corner 自己放行 ✅
- 场景 7/8：`height>0` → 仅高度生效，不依赖任何开关 ✅

### 2.4 边界情况：`_hooked_heightForHeader`

[第16行](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L16) 仍有 `if (!config.cardBgBeautifyEnabled) return result;`

这里 `cardBgBeautifyEnabled` 控制的是"是否在资料卡 section 追加间距（`cardBgListSpacing`）"。这是一个**独立功能**，不应该绑定到 beautify 开关。

**可选优化**：新增 `cardBgListSpacingEnabled` 开关，或直接让 `cardBgListSpacing > 0` 作为守卫（类似 `handleHeightAdjustment` 的做法）。

**当前不影响功能**，可以不改。但如果用户开了隐藏/corner 而没有开 beautify，Section 1 的间距不会追加。这是个低频场景，可作为后续优化。

---

## 三、与其他架构方案的关系

### 3.1 与 `独立路径重构方案` 的关系

独立路径重构方案（[handleButtonLayout独立路径重构方案.md](file:///www/wwwroot/ios/文档/WCRefine圆角功能分析/handleButtonLayout独立路径重构方案.md)）的 Step 7 提出了 OR 聚合入口：

```objc
// 独立路径方案中的入口守卫：
BOOL anyFeatureEnabled = config.cardBgBeautifyEnabled
                      || config.cardBgHidden
                      || config.cardBgCornerEnabled;
if (!anyFeatureEnabled) return;
```

**本方案修正了这一步——去掉 OR 守卫，改为「通用安全检查 + 各方法自我守卫」。**

### 3.2 配套修改

独立路径重构方案的 Step 7（第351-384行）需要更新，去掉 OR 守卫。

其他步骤（1-6, 8-10）保持不变。

---

## 四、改动清单

### 改动 1（核心）：`handleButtonLayout` 入口

**文件**：[ProfileCardBgHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L588-L614)

```objc
// 删除以下代码（第589-594行）：
// ★ 入口守卫：OR 聚合
PluginConfig *config = [PluginConfig shared];  // ← 保留此行（被下方使用）
BOOL anyFeatureEnabled = config.cardBgBeautifyEnabled
                      || config.cardBgHidden
                      || config.cardBgCornerEnabled;
if (!anyFeatureEnabled) return;

// 改为：
PluginConfig *config = [PluginConfig shared];  // ← 保留不动
```

### 改动 2（配套）：边距守卫

**文件**：[ProfileCardBgHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L612)

```objc
// 把 handleMarginAdjustment 移入 cardBgCornerEnabled 条件：
if (config.cardBgCornerEnabled) {
    [ProfileCardBgHook handleMarginAdjustment:button];
}
```

### 改动 3（配套）：删除默认值

**文件**：[ProfileCardBgHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L657-L659)

```objc
// 改前：
CGFloat margin = config.cardBgCornerUseGlobal
    ? config.listCellMargin
    : (config.cardBgCornerMargin > 0 ? config.cardBgCornerMargin : 9.0);

// 改后：
CGFloat margin = 0;
if (config.cardBgCornerUseGlobal) {
    margin = config.listCellMargin;
} else if (config.cardBgCornerMargin > 0) {
    margin = config.cardBgCornerMargin;
}
// 未配置时 margin=0 → 后续 margin <= 0 守卫直接跳过
```

---

## 五、总结

| 方案 | 思路 | 效果 |
|------|------|------|
| 补丁方案（之前） | 发现问题了加 `if (xxxEnabled)` 包起来 | 下次新增功能还是会踩坑 |
| **根治方案（本方案）** | **消除 OR 守卫，每个功能自我守卫** | **不会再出现"只开A触发B"的问题** |

**一句话总结**：入口不再判断"有没有功能开启"（这是每个功能自己的事），入口只做"能不能在这个 button 上操作"的安全检查。从此每个新功能只要在自己的方法内部加好守卫就行，入口不再需要修改。