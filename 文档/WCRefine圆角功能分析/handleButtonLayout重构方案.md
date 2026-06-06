# handleButtonLayout 重构方案

## 当前代码问题

### 执行流混乱

```
① needsNewCardBg 守卫
   条件：cardBgBeautifyEnabled
   ↓
② 查找/创建 bg（始终执行）
   └─ 分支 A：已存在 → 更新 frame
   └─ 分支 B：不存在 → 创建新 bg + 异步加载图片
   ↓
③ HideCard 分支
   条件：cardBgHidden
   ├─ YES：隐藏子视图，但 tag 豁免 bg（背景图残留来源）
   └─ NO：清除原生 bg
   ↓
④ FIX-WHITE
   └─ tag 豁免 bg
```

**三个矛盾点：**

1. **② 创建 bg → ③ 豁免 bg**：创建了却又不隐藏，代码意图自相矛盾
2. **③ 用 tag 豁免 → ④ 又豁免一次**：同一豁免逻辑重复两遍
3. **④ 需要跳过 bg**：如果没有背景图（无素材），FIX-WHITE 根本不需要考虑跳过问题

### 「补丁叠补丁」的历史

```
原始代码：简单隐藏子视图
  ├─ 发现 bg 也被隐藏了 → 加 tag 豁免
  ├─ 发现 FIX-WHITE 也隐藏 bg → FIX-WHITE 也加豁免
  └─ 现在需要区分有/无素材 → 再加条件判断
```

每个新需求都在旧逻辑上叠加一层条件，函数内部的条件分支越来越复杂。

---

## 重构目标

1. **消除矛盾**：创建 bg 和隐藏 bg 不在同一分支路径上竞争
2. **消除重复**：同一豁免逻辑只出现一次
3. **线性执行**：按顺序从上到下，不出先创建后豁免的矛盾

---

## 重构后结构

```
handleButtonLayout:
  │
  ├─ ① 极速拒绝链（不变）
  │     cardBgBeautifyEnabled / VC类型 / 头像 / 高度
  │
  ├─ ② 场景判断（新增）
  │     BOOL hasMaterial = config.cardBgMaterialEnabled
  │     BOOL isHidden    = config.cardBgHidden
  │
  ├─ ③ 场景 B 早返（新增！核心变化）
  │     条件：isHidden && !hasMaterial
  │     ├─ 清除 button backgroundColor + layer
  │     ├─ 清除原生 m_bgImageView
  │     ├─ 隐藏所有子视图（无豁免）
  │     ├─ 处理二维码
  │     └─ return ← 直接返回，不进入背景段
  │
  ├─ ④ 创建/更新背景（有素材时才执行）
  │     守卫：hasMaterial
  │     ├─ 分支 A：已存在 → 更新 frame
  │     └─ 分支 B：不存在 → 创建新 bg + 异步加载
  │
  ├─ ⑤ HideCard 分支（场景 A：隐藏内容，保留 bg）
  │     条件：isHidden
  │     ├─ 清除 button backgroundColor + layer
  │     ├─ 清除原生 m_bgImageView
  │     ├─ 隐藏子视图，tag 豁免 bg（← 唯一一次豁免）
  │     └─ 处理二维码
  │
  ├─ ⑥ 非 HideCard 分支（isHidden = NO）
  │     ├─ 确保 button 可见
  │     ├─ 清除 button backgroundColor
  │     └─ 清除原生 m_bgImageView
  │
  └─ ⑦ FIX-WHITE（不变）
        └─ 有素材时跳过 bg；无素材时 bg 不存在，无需跳过
```

---

## 代码 diff

### 改动 1：函数入口新增场景变量

**[ProfileCardBgHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m) — 第 411 行附近**

```objc
// 改前：
BOOL needsNewCardBg = config.cardBgBeautifyEnabled;

// ══════════════════════════════════════════
// 卡片背景专属操作（只在 cardBgBeautifyEnabled 时执行）
// ══════════════════════════════════════════
if (needsNewCardBg) {

// 改后：
BOOL needsNewCardBg = config.cardBgBeautifyEnabled;

// ══════════════════════════════════════════
// 场景判断
// ══════════════════════════════════════════
BOOL hasMaterial = config.cardBgMaterialEnabled;
BOOL isHidden = config.cardBgHidden;

// ══════════════════════════════════════════
// 卡片背景专属操作（只在 cardBgBeautifyEnabled 时执行）
// ══════════════════════════════════════════
if (needsNewCardBg) {
```

---

### 改动 2：场景 B 早返（插入 bg 创建代码之前）

**[ProfileCardBgHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m) — 第 416-420 行，bg 创建代码之前**

```objc
// 改前：
    if (needsNewCardBg) {

        // ══════════════════════════════════════════
        // ★ Button 层 bg 生命周期（始终执行，不依赖 HideCard）
        // ══════════════════════════════════════════

// 改后：
    if (needsNewCardBg) {

        // ══════════════════════════════════════════
        // 场景 B：隐藏 + 无素材 → 完全隐藏，直接返回
        // ══════════════════════════════════════════
        if (isHidden && !hasMaterial) {
            button.backgroundColor = [UIColor clearColor];
            button.layer.backgroundColor = [UIColor clearColor].CGColor;
            button.layer.masksToBounds = NO;
            button.layer.cornerRadius = 0;
            button.layer.borderWidth = 0;

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

            // 隐藏所有子视图（无豁免！没有背景图需要保留）
            for (UIView *sub in button.subviews) {
                sub.hidden = YES;
            }

            if (config.listHideRightQRCode) {
                [ProfileCardBgHook hideQRButtonInCell:button];
            }
            return;
        }

        // ══════════════════════════════════════════
        // ★ Button 层 bg 生命周期
        // ══════════════════════════════════════════
```

---

### 改动 3：bg 创建代码拆出素材守卫（可选优化）

背景创建代码（当前行 422-549）不需要改逻辑本身，但外层可以加一个 `if (hasMaterial)` 守卫，避免无素材时执行不必要的布局计算：

```objc
// 改前：
        // ── 查找 Button 层已有 bg ──
        UIImageView *bgImgView = nil;
        ...

// 改后：
        // ── 有素材时才执行背景布局 ──
        if (hasMaterial) {
            // ── 查找 Button 层已有 bg ──
            UIImageView *bgImgView = nil;
            ...
        }  // hasMaterial
```

---

### 改动 4：HideCard 分支 — 删除豁免判断中的冗余

**[ProfileCardBgHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m) — 第 554-579 行**

```objc
// 改前：
        if (config.cardBgHidden) {
            button.backgroundColor = [UIColor clearColor];
            ...（清除原生 bg）
            // ★ 选择性隐藏子视图（bg 通过 tag 豁免）
            for (UIView *sub in button.subviews) {
                if ([sub isKindOfClass:[UIImageView class]] &&
                    sub.tag == kProfileCardBgImageTag) {
                    continue;
                }
                sub.hidden = YES;
            }
            ...
        } else {

// 改后：
        if (isHidden) {
            // 场景 A：隐藏内容，保留背景图
            button.backgroundColor = [UIColor clearColor];
            ...（清除原生 bg）
            // ★ 隐藏子视图，背景图通过 tag 豁免
            for (UIView *sub in button.subviews) {
                if ([sub isKindOfClass:[UIImageView class]] &&
                    sub.tag == kProfileCardBgImageTag) {
                    continue;  // 保留背景图
                }
                sub.hidden = YES;
            }
            ...
        } else {
```

> 这里的逻辑和之前一样，但因为场景 B 已经在③早返，走到这里的一定是`!isHidden || hasMaterial`，即要么不隐藏，要么隐藏但有素材。豁免代码只需要服务场景 A。

---

### 改动 5：FIX-WHITE — 删除 bg 豁免判断

**[ProfileCardBgHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m) — 第 614 行**

```objc
// 改前：
                // 使用全局常量 kProfileCardBgImageTag（=999902）跳过 bg
                if (sub.tag == kProfileCardBgImageTag) continue;

// 改后：
                // 场景 A 中背景图存在，需跳过；场景 B 已早返，不会走到此处
                if (sub.tag == kProfileCardBgImageTag) continue;
```

> 实际上这一行可以不删，保留作为防御性编程也行。但注释需要更新以描述真实场景。

---

## 改动汇总

| # | 位置 | 改动类型 | 改动内容 | 约行数 |
|---|------|---------|---------|-------|
| 1 | 行 411 附近 | 新增 | 场景变量 `hasMaterial`、`isHidden` | +2 |
| 2 | 行 416-418 | 插入 | 场景 B 早返块（~25 行） | +25 |
| 3 | 行 422 | 可选优化 | bg 创建代码包入 `if (hasMaterial)` | +2 |
| 4 | 行 554-554 | 重命名 | `config.cardBgHidden` → `isHidden` | 0 |
| 5 | 行 614 | 更新注释 | FIX-WHITE 豁免注释更新 | 0 |

**总量**：+27 行（其中 25 行是场景 B 的清除代码，大部分是从现有 HideCard 分支复制的）

---

## 重构后的执行流对比

### 改前（3 个场景共用 1 条路径）

```
                        ┌─────────────────────────────┐
                        │  needsNewCardBg = YES        │
                        │  → 创建/更新 bg              │
                        │  → HideCard（豁免 bg）        │
                        │  → FIX-WHITE（豁免 bg）      │
                        └─────────────────────────────┘
```

### 改后（3 个场景走 2 条路径）

```
┌─ hidden=YES, material=NO ──────────────────────┐
│  场景 B 早返                                    │
│  → 清除一切                                     │
│  → hide all subviews（无豁免）                   │
│  → return                                       │
└────────────────────────────────────────────────┘

┌─ hidden=NO 或 material=YES ─────────────────────┐
│  → 创建/更新 bg（有素材时）                      │
│  → hidden=YES?                                  │
│    ├─ YES（场景 A）→ hide all 豁免 bg            │
│    └─ NO → 清除原生 bg                          │
│  → FIX-WHITE（bg 存在时跳过）                    │
└────────────────────────────────────────────────┘
```

---

## 后续维护注意事项

1. **别再往这条链上加条件**。如果以后新增一个"在隐藏时额外隐藏/保留某元素"的需求，应该在 HideCard 分支内修改，而不是在函数入口再加一层守卫。

2. **早返是好东西**。场景 B 的早返让后续代码不需要考虑"hidden+!material"这个组合，简化了所有后续分支的守卫条件。以后类似场景优先用早返。

3. **变量提取 vs 内联**。`isHidden` 和 `hasMaterial` 两个局部变量提取了目的，建议保留。如果其他代码也需要判断场景，直接使用这两个变量而非重复写条件。

4. **如果未来 bg 创建逻辑继续膨胀**，考虑把背景创建/更新代码抽成独立方法：
   ```objc
   + (void)updateCardBackgroundForButton:(UIView *)button 
                                   config:(PluginConfig *)config 
                                   isDark:(BOOL)isDark;
   ```