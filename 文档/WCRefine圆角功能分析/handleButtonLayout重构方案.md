# handleButtonLayout 重构方案

## 当前代码实际状态（截至 2026-06-06）

### 已从此文档应用到代码中的改动

| # | 改动 | 状态 |
|---|------|------|
| ① | hasMaterial/isHidden 场景变量提取 | ✅ 已应用（第416-417行） |
| ② | hasMaterial 守卫 bg 创建代码 | ✅ 已应用（第427行 `if (hasMaterial)`） |
| ③ | handleHeightAdjustment 独立方法 | ✅ 已应用（第654行） |
| ④ | handleMarginAdjustment 独立方法 | ✅ 已应用（第690行） |

### 尚未应用的改动

| # | 改动 | 当前代码状态 |
|---|------|-------------|
| ⑤ | 场景 B 早返内联到 handleButtonLayout | ❌ 仍在 `handleCardHiddenInButton` 中返回 |
| ⑥ | FIX-WHITE 删除 bg 豁免判断 | ❌ 第593行仍有 `sub.tag == kProfileCardBgImageTag continue` |
| ⑦ | handleCardHiddenInButton 内联到 handleButtonLayout | ❌ 仍调用独立方法，未内联 |

---

## 当前代码问题（已过时部分已标注）

### 执行流混乱

```
① needsNewCardBg 守卫
   条件：cardBgBeautifyEnabled
   ↓
② 查找/创建 bg ★（有 hasMaterial 守卫——已修复）
   └─ 分支 A：已存在 → 更新 frame
   └─ 分支 B：不存在 → 创建新 bg + 异步加载图片
   ↓
③ HideCard 分支（handleCardHiddenInButton 方法内）
   条件：cardBgHidden
   ├─ YES：隐藏子视图，但 tag 豁免 bg
   └─ NO：清除原生 bg
   ↓
④ FIX-WHITE
   └─ tag 豁免 bg
```

**三个矛盾点：**

1. ~~**② 创建 bg → ③ 豁免 bg**：创建了却又不隐藏，代码意图自相矛盾~~ → **已修复**（hasMaterial 守卫让 bg 创建只在有素材时执行）
2. **③ 用 tag 豁免 → ④ 又豁免一次**：同一豁免逻辑重复两遍 → **仍存在**
3. **④ 需要跳过 bg**：如果没有背景图（无素材），FIX-WHITE 根本不需要考虑跳过问题 → **仍存在**

### 「补丁叠补丁」的历史

```
原始代码：简单隐藏子视图
  ├─ 发现 bg 也被隐藏了 → 加 tag 豁免
  ├─ 发现 FIX-WHITE 也隐藏 bg → FIX-WHITE 也加豁免
  ├─ 添加 hasMaterial 守卫 → 部分问题解决
  ├─ 发现"微信用户"bug → 加 hasMaterial 保护清理 m_bgImageView
  └─ 提取 handleHeightAdjustment/handleMarginAdjustment → 高度/边距解耦
```

---

## 重构目标（不变）

1. **消除矛盾**：创建 bg 和隐藏 bg 不在同一分支路径上竞争
2. **消除重复**：同一豁免逻辑只出现一次
3. **线性执行**：按顺序从上到下，不出先创建后豁免的矛盾

---

## 重构后结构（保持原案）

```
handleButtonLayout:
  │
  ├─ ① 极速拒绝链（不变）
  │     cardBgBeautifyEnabled / VC类型 / 头像 / 高度
  │
  ├─ ② 场景判断（已有）
  │     BOOL hasMaterial = config.cardBgMaterialEnabled
  │     BOOL isHidden    = config.cardBgHidden
  │
  ├─ ③ 场景 B 早返（新增！尚待实施）
  │     条件：isHidden && !hasMaterial
  │     ├─ 清除 button backgroundColor + layer
  │     ├─ 清除原生 m_bgImageView
  │     ├─ 隐藏所有子视图（无豁免）
  │     ├─ 处理二维码
  │     └─ return ← 直接返回，不进入背景段
  │
  ├─ ④ 创建/更新背景（有素材时才执行）（已有）
  │     守卫：hasMaterial
  │     ├─ 分支 A：已存在 → 更新 frame
  │     └─ 分支 B：不存在 → 创建新 bg + 异步加载
  │
  ├─ ⑤ HideCard 分支（场景 A：隐藏内容，保留 bg）（尚待实施）
  │     条件：isHidden
  │     ├─ 清除 button backgroundColor + layer
  │     ├─ 清除原生 m_bgImageView
  │     ├─ 隐藏子视图，tag 豁免 bg（← 唯一一次豁免）
  │     └─ 处理二维码
  │
  ├─ ⑥ 非 HideCard 分支（isHidden = NO）（尚待简化）
  │     ├─ 确保 button 可见
  │     ├─ 清除 button backgroundColor
  │     └─ 清除原生 m_bgImageView
  │
  └─ ⑦ FIX-WHITE（尚待简化）
        └─ 有素材时跳过 bg；无素材时 bg 不存在，无需跳过
```

**标注说明**：
- "已有" → 代码已实施 ✅
- "尚待实施" → 仍需改造 ❌

---

## 代码 diff（更新版）

### 改动 1 和 改动 3：**已有，无需再改**

- `hasMaterial`、`isHidden` 变量 → 第416-417行 ✅
- `if (hasMaterial)` 守卫 bg 创建 → 第427行 ✅

### 改动 2：场景 B 早返（仍需实施）

当前代码场景 B 在 `handleCardHiddenInButton` 中通过 `return YES` 实现（第797-806行），调用方据此 return（第581行）。改为内联到 `handleButtonLayout` 中：

```objc
// 在 needsNewCardBg 块内、if (hasMaterial) 之前插入：
if (isHidden && !hasMaterial) {
    button.backgroundColor = [UIColor clearColor];
    button.layer.backgroundColor = [UIColor clearColor].CGColor;
    button.layer.masksToBounds = NO;
    button.layer.cornerRadius = 0;
    button.layer.borderWidth = 0;

    // 清理原生 m_bgImageView
    Ivar bgIvar = class_getInstanceVariable([button class], "m_bgImageView");
    if (bgIvar) {
        id bgImgView = object_getIvar(button, bgIvar);
        if (bgImgView && [bgImgView isKindOfClass:[UIImageView class]]) {
            [(UIImageView *)bgImgView setImage:nil];
            [(UIImageView *)bgImgView setBackgroundColor:[UIColor clearColor]];
            [(UIImageView *)bgImgView setHidden:YES];
        }
        // 保留 ivar：object_setIvar(button, bgIvar, nil);
    }

    for (UIView *sub in button.subviews) {
        sub.hidden = YES;
    }

    if (config.listHideRightQRCode) {
        [ProfileCardBgHook hideQRButtonInCell:button];
    }
    return;
}
```

这样做的好处：`handleCardHiddenInButton` 调用的 `return YES` → `handleButtonLayout` 的 `return` 两跳变成直接 return，消除隐藏路径对调用方的依赖。

### 改动 4：HideCard 分支改用 isHidden

**当前**（第578行）：
```objc
if ([ProfileCardBgHook handleCardHiddenInButton:button
                                        isHidden:isHidden
                                     hasMaterial:hasMaterial]) {
    return;
}
```

**改为内联**：
```objc
// Scene A：隐藏 + 有素材 → 隐藏内容，保留背景
if (isHidden) {
    button.backgroundColor = [UIColor clearColor];
    button.layer.backgroundColor = [UIColor clearColor].CGColor;
    button.layer.masksToBounds = NO;
    button.layer.cornerRadius = 0;
    button.layer.borderWidth = 0;

    Ivar bgIvar = class_getInstanceVariable([button class], "m_bgImageView");
    // ...清理原生 m_bgImageView...

    for (UIView *sub in button.subviews) {
        if ([sub isKindOfClass:[UIImageView class]] &&
            sub.tag == kProfileCardBgImageTag) {
            continue;  // 保留背景图
        }
        sub.hidden = YES;
    }

    if (config.listHideRightQRCode) {
        [ProfileCardBgHook hideQRButtonInCell:button];
    }
}
```

### 改动 5：FIX-WHITE 删除保留注释

当前（第593行）`if (sub.tag == kProfileCardBgImageTag) continue;` 仍存在。可保留作为防御性编程，注释需确认准确。

---

## 改动汇总（剩余待实施）

| # | 位置 | 改动 | 行数 |
|---|------|------|------|
| 1 | 第422行附近 | 插入场景 B 早返 inline | +25 |
| 2 | 第578行 | 替换 handleCardHiddenInButton 调用为内联 HideCard | 0 |
| 3 | 第593行 | 更新注释 | 0 |
| 4 | - | 可清理 `handleCardHiddenInButton` 方法（~80行） | -80 |

**执行建议**：
1. 先做改动 1（场景 B 早返 inline）→ 主流程简化
2. 再做改动 2（HideCard 内联）→ handleCardHiddenInButton 不再需要
3. 清理 handleCardHiddenInButton（可选）

---

## 重构后的执行流对比

### 当前代码

```
                        ┌────────────────────────────────┐
                        │  needsNewCardBg = YES           │
                        │  → hasMaterial?→创建/更新 bg    │
                        │  → handleCardHiddenInButton      │
                        │    ├─ Scene B → return YES      │
                        │    │            → 调用方 return │
                        │    └─ Scene A → return NO       │
                        │  → FIX-WHITE（豁免 bg）          │
                        └────────────────────────────────┘
```

### 改后（本方案）

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
│    └─ NO → 不操作（handleCardHiddenInButton 无操作）│
│  → FIX-WHITE（bg 存在时跳过）                    │
└────────────────────────────────────────────────┘
```