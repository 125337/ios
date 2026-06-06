# handleButtonLayout 背景丢失 Bug 修复

## Bug 描述

**触发条件**：`cardBgBeautifyEnabled = YES`，但 `cardBgMaterialEnabled = NO`，`cardBgHidden = NO`

**现象**：资料卡片的背景消失（透明），但子视图（头像、昵称等）仍然可见。

---

## 根因分析

### 执行路径追踪

```
条件：beautifyEnabled=YES, materialEnabled=NO, hidden=NO

needsNewCardBg = YES
hasMaterial    = NO
isHidden       = NO

① 进入 needsNewCardBg 块（L422）
② Scene B 早返: isHidden && !hasMaterial → NO && YES → NO → 不触发
③ 查找已有 bg ImageView → 找不到（从未创建过）
④ 分支 B：创建新的空 UIImageView（L508-528）← 不该执行
⑤ 异步加载 loadBackgroundImageSync → 无素材路径 → 返回 nil
⑥ 异步回调：fallback 设置 button.backgroundColor = cardBg
   ↓（异步，稍后才执行）
⑦ 非 HideCard 分支（L626-646）：
   ├─ button.hidden = NO
   ├─ button.backgroundColor = [UIColor clearColor]（L633）← ★ 同步清透明
   └─ 清除原生 m_bgImageView
⑧ FIX-WHITE（L649-689）← 正常运行
```

### 时间线问题

```
时间轴：
├─ 同步：创建空 UIImageView ← 多余
├─ 同步：button.backgroundColor = clearColor ← ★ 关键！背景变透明
├─ 同步：FIX-WHITE 执行
└─ 异步（N 秒后）：
   ├─ loadBackgroundImageSync 返回 nil（无素材）
   └─ fallback 设置 button.backgroundColor = cardBg
```

### 两个子问题

| # | 问题 | 位置 | 严重性 |
|---|------|------|--------|
| **P1** | `if (hasMaterial)` 守卫缺失 | L460-587 | **高** |
| P2 | 非 HideCard 分支无差别清空背景色 | L633 | **中** |

**P1 详情**：重构方案中"改动 3"要求在背景创建段包一层 `if (hasMaterial)`，但并未实现。L460-587 的代码在没有素材时也会执行——创建空的 UIImageView、发起无意义的异步加载。

**P2 详情**：非 HideCard 分支（L633）无条件将 `button.backgroundColor` 设为 `clearColor`。当有素材时，这是为了让背景图片透出来；但当无素材时，这直接导致了按钮透明。

---

## 修复方案

### 改动 1：背景创建段加 `if (hasMaterial)` 守卫

**[ProfileCardBgHook.m — L456-L587](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L456-L587)**

```objc
// 改前：
        // ══════════════════════════════════════════
        // ★ Button 层 bg 生命周期
        // ══════════════════════════════════════════

        // ── 查找 Button 层已有 bg ──
        UIImageView *bgImgView = nil;
        for (UIView *sub in button.subviews) {
            ...

// 改后：
        // ══════════════════════════════════════════
        // ★ Button 层 bg 生命周期（有素材才执行）
        // ══════════════════════════════════════════
        if (hasMaterial) {

        // ── 查找 Button 层已有 bg ──
        UIImageView *bgImgView = nil;
        for (UIView *sub in button.subviews) {
            ...

// 并且，在 else 分支结束时闭合大括号（L587 处）
// 改前：
        }  // hasMaterial

// 改后：
        }  // if (hasMaterial)
```

> 注意：L587 的 `}` 目前是分支 B（else）的闭合，改后需要将其变为 `if (hasMaterial)` 的闭合。
>
> 还需要在 L460（`// ★ Button 层 bg 生命周期`）后立即添加 `if (hasMaterial) {`。
> L587 的 `}` 后新增 `}`（闭合 `if (hasMaterial)`）。

### 改动 2：修正非 HideCard 分支的背景色处理

**[ProfileCardBgHook.m — L626-L646](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L626-L646)**

```objc
// 改前：
        } else {
            // ── 非 HideCard 分支 ──

            // 1. 确保 button 可见
            button.hidden = NO;

            // 2. Button 背景色清透明
            button.backgroundColor = [UIColor clearColor];

            // 3. 清除微信原生 m_bgImageView
            ...

// 改后：
        } else {
            // ── 非 HideCard 分支 ──

            // 1. 确保 button 可见
            button.hidden = NO;

            // 2. 有素材时清透明让 bg 透出；无素材时保持默认外观
            if (hasMaterial) {
                button.backgroundColor = [UIColor clearColor];
            }

            // 3. 清除微信原生 m_bgImageView
            ...
```

---

## 修复后的执行流

### 场景：beautifyEnabled=YES, materialEnabled=NO, hidden=NO（修复后）

```
needsNewCardBg = YES
hasMaterial    = NO
isHidden       = NO

① 进入 needsNewCardBg 块
② Scene B 早返: 不触发
③ if (hasMaterial) → NO → 跳过整个背景创建段 ✅
④ HideCard: isHidden=NO → 进入 else（非 HideCard 分支）
   ├─ button.hidden = NO
   ├─ if (hasMaterial) → NO → 跳过清空背景色 ← ★ button 保留默认背景 ✅
   └─ 清除原生 m_bgImageView
⑤ FIX-WHITE（正常运行）
```

**结果**：button 保持微信默认外观，不透明，子视图正常显示。

### 场景：beautifyEnabled=YES, materialEnabled=YES, hidden=NO（正常有素材）

```
① 进入 needsNewCardBg 块
② Scene B 早返: 不触发
③ if (hasMaterial) → YES
   ├─ 查找/创建 bg ImageView
   ├─ 异步加载图片
   └─ 创建空 bg 或更新 frame
④ HideCard: isHidden=NO → 非 HideCard 分支
   ├─ button.hidden = NO
   ├─ if (hasMaterial) → YES → button.backgroundColor = clearColor ✅
   └─ 清除原生 m_bgImageView
⑤ FIX-WHITE
```

**结果**：与之前完全一致，有素材时清透明让图片透出。

### 场景：beautifyEnabled=YES, materialEnabled=NO, hidden=YES（隐藏无素材）

```
① 进入 needsNewCardBg 块
② Scene B 早返: isHidden && !hasMaterial → YES → 完全隐藏 + return ✅
```

**结果**：Scene B 拦截，正常隐藏卡片。

### 场景：beautifyEnabled=YES, materialEnabled=YES, hidden=YES（隐藏有素材）

```
① 进入 needsNewCardBg 块
② Scene B 早返: !hasMaterial → NO → 不触发
③ if (hasMaterial) → YES → 创建/更新 bg ✅
④ HideCard: isHidden=YES → 场景 A
   ├─ 清除原生 bg
   ├─ 隐藏子视图，豁免 bg ImageView
   └─ 保留背景图可见 ✅
⑤ FIX-WHITE
```

**结果**：与之前完全一致，隐藏内容保留背景图。

---

## 改动汇总

| # | 位置 | 改动类型 | 改动内容 | 约行数 |
|---|------|---------|---------|-------|
| 1 | L456-L460 | 新增 | 背景段入口加 `if (hasMaterial) {` | +1 |
| 2 | L587 | 新增 | 闭合 `if (hasMaterial)` 的 `}` | +1 |
| 3 | L633 | 加条件 | `button.backgroundColor = [UIColor clearColor]` 包入 `if (hasMaterial)` | +1 |

**总量**：+3 行（非常精简）

---

## 验证清单

编译后逐一验证：

- [ ] beautifyEnabled=YES, material=NO, hidden=NO → 卡片正常显示，背景不透明
- [ ] beautifyEnabled=YES, material=YES, hidden=NO → 有背景图，功能正常
- [ ] beautifyEnabled=YES, material=NO, hidden=YES → 卡片完全隐藏
- [ ] beautifyEnabled=YES, material=YES, hidden=YES → 隐藏内容，保留背景图
- [ ] beautifyEnabled=NO → 不受影响
- [ ] 切换 materialEnabled 开关后，layoutSubviews 触发正确更新
- [ ] 从 material=YES 切换到 NO 时，背景图消失，button 恢复默认外观
- [ ] 从 material=NO 切换到 YES 时，背景图出现