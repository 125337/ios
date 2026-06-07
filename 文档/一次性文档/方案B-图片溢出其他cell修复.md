# fillMode=0 图片溢出到其他 cell — 根因分析与修复

---

## 一、问题

fillMode=0 + 开启素材 + **关闭圆角**时，背景图渲染超出 button 边界，飘出到表格视图的其他 cell 上。

---

## 二、根因

### 2.1 方案B 的保护链

方案B（`clipsToBounds=NO` + frame 偏移）需要两道防线才能正常工作：

| 防线 | 作用 | 位置 |
|:----:|------|:----:|
| ① `imageView.clipsToBounds = NO` | 让 ScaleAspectFill 图片越过 imageView 边界完整渲染，alignment 偏移才能产生可见效果 | 方案B 设置 |
| **② `button.layer.masksToBounds = YES`** | **把越界内容裁在 button 边界内，防止溢出到其他 cell** | **被丢失** |

防线②缺失 → 图片从 button 溢出 → 飘到 cell 2、cell 3...

### 2.2 Git 历史 — 保护链是怎么断的

**阶段 1：6月5日（提交 6e59cab）— 有保护**

`applyProfileCardCorner` 无条件执行，始终设 `masksToBounds=YES`：

```objc
// 6e59cab — 无条件的！
cell.layer.cornerRadius = radius;
cell.layer.masksToBounds = YES;    // ← 永远 YES
```

在 `handleButtonLayout` 的 DO_CORNER 标签：

```objc
BOOL skipMasksToBounds = (config.cardBgEnabled && config.cardBgFillMode == 3);
if (!skipMasksToBounds) {
    [ProfileCardBgHook applyProfileCardCorner:...];   // → masksToBounds=YES ✅
}
```

fillMode=0 → skipMasksToBounds = NO → **永远设 `masksToBounds=YES`** → 溢出被裁住。

**阶段 2：6月5日夜（提交 10f5e73）— 保护被条件化**

`applyProfileCardCorner` 重构为分条件执行：

| 条件 | 效果 |
|------|:----:|
| `cardBgCornerEnabled=YES` | `masksToBounds=YES` |
| `cardBgCornerEnabled=NO` | `masksToBounds=NO` |

同时 `handleButtonLayout` 拆分为三条独立路径（`handleHiddenPath` / `handleVisiblePath` / `handleCornerAndQR`），`handleVisiblePath` 在 L795 把 `masksToBounds` 设为 `NO`。

至此，`cardBgCornerEnabled=NO` 时，`masksToBounds` 永远留在 `NO` → **保护链断裂**。

| 条件 | 6月5日 | 6月6日（重构后） |
|------|:------:|:--------------:|
| material + corner=YES | `masksToBounds=YES` | `masksToBounds=YES` |
| material + corner=NO | `masksToBounds=YES`（强制） | **`masksToBounds=NO`** ❌ |

**阶段 3：6月7日（方案B）— 条件触发**

方案B（`clipsToBounds=NO`）让图片完整渲染 → 图片可见了、对齐正常了 → 但 `masksToBounds=NO` + `clipsToBounds=NO` 叠加 → **图片溢出到其他 cell**。

### 2.3 一条结论

**`10f5e73`（圆角职责划分解耦）把 `applyProfileCardCorner` 从"无条件强制 masksToBounds=YES"改为"仅 corner 开启时设 YES"，导致 corner 关闭时保护缺失。方案B 只是把这个隐藏的问题暴露出来了。**

---

## 三、修复

### 3.1 修复思路

把防线②补回来：**只要有背景素材，button 就裁剪子内容**。一行改动，与 `cardBgCornerEnabled` 解耦。

### 3.2 唯一改动

**文件：** [ProfileCardBgHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m)

**位置：** L618 之后、L619（函数结束大括号）之前

**改前：**
```objc
    // ── 清微信原生 m_bgImageView ──
    [ProfileCardBgHook cleanNativeBgImageView:button];
}
```

**改后：**
```objc
    // ── 清微信原生 m_bgImageView ──
    [ProfileCardBgHook cleanNativeBgImageView:button];

    // ★ 裁剪：防止 clipsToBounds=NO 的图片溢出 button
    button.layer.masksToBounds = YES;
}
```

**为什么放在 `setupBackgroundMaterialInButton` 末尾？**

| 为什么不是这里 | 原因 |
|--------------|------|
| `createBackgroundImageViewInButton` | 只覆盖创建，不覆盖分支A 更新 |
| `handleVisiblePath` | 会被下面的 `handleCornerAndQR` 覆盖 |
| `handleCornerAndQR` | 受 `cardBgCornerEnabled` 条件控制 |
| ✅ `setupBackgroundMaterialInButton` 末尾 | 所有素材路径（创建/更新）都经过这里，且 `handleCornerAndQR` 在后面执行的，corner=YES 时覆盖为 YES（结果一致），corner=NO 时保持 YES |

### 3.3 执行顺序推演

```
无圆角 + 有素材：

1. handleVisiblePath [L795]:          button.masksToBounds = NO
2.   → setupBackgroundMaterialInButton [L805]:
       ├── 分支A/B → 创建/更新 bgView (clipsToBounds=NO)
       └── ★ button.masksToBounds = YES   ← 新增
3. handleCornerAndQR [L710]:
     └── cardBgCornerEnabled=NO → 不设 YES，也不设 NO
     └── button.masksToBounds → 保持 YES ✅


有圆角 + 有素材（不受影响）：

1. handleVisiblePath [L795]:          button.masksToBounds = NO
2.   → setupBackgroundMaterialInButton [L805]:
       └── ★ button.masksToBounds = YES   ← 新增（冗余）
3. handleCornerAndQR [L710]:
     └── cardBgCornerEnabled=YES → applyProfileCardCorner:
           → button.masksToBounds = YES    ← 再次设为 YES，结果一样 ✅
```

---

## 四、安全性分析

| 场景 | 改前 | 改后 | 结论 |
|------|:----:|:----:|:----:|
| 素材 + 圆角 | `masksToBounds=YES`（handleCornerAndQR） | `YES`（提前设 → 再被覆盖为 YES） | ✅ 无变化 |
| 素材 + 无圆角 | `masksToBounds=NO` ❌ 溢出 | `YES` ✅ | **修复** |
| 隐藏 + 素材 + 无圆角 | `handleHiddenPath` → `NO` → 不恢复 | `setupBackgroundMaterialInButton` → `YES` | ✅ |
| 隐藏 + 素材 + 有圆角 | `handleHiddenPath` → `NO` → corner恢复`YES` | `setupBackgroundMaterialInButton` 提前恢复 `YES` → 再被 corner设为 `YES` | ✅ |
| 无素材（仅圆角） | 不经过 `setupBackgroundMaterialInButton` | 不受影响 | ✅ |

---

## 五、方案比较

| 方案 | 改动量 | 保护方式 | 脆弱性 |
|:----:|:------:|---------|:------:|
| **方案B + 1行修复（当前）** | **改1行** | `masksToBounds=YES` 兜底 | 低 — `setupBackgroundMaterialInButton` 是素材唯一入口 |
| 方案A（contentsRect） | 删1+新1+改2处 | 不依赖 mask，纯视觉裁剪 | 极低 — 完全不受 mask 影响 |

当前方案**1 行改动即可修复**，且后续无论 corner 逻辑怎么变，只要背景素材存在，button 就会裁边。

---

## 六、验证

| # | 场景 | 预期 |
|---|------|------|
| 1 | 素材 + 圆角开 + fillMode=0 + alignment=0/1/2 | 对齐正确，无溢出 |
| 2 | **素材 + 圆角关 + fillMode=0** | **对齐正确，不溢出到其他 cell** |
| 3 | 素材 + 圆角开 + fillMode=1 | 适应模式高度扩展正常 |
| 4 | 素材 + 圆角关 + fillMode=1 | 适应模式不受影响 |
| 5 | 素材 + fillMode=2 | 拉伸铺满，不受影响 |
| 6 | 隐藏路径 + 素材 + 圆角关 | 背景隐藏，不溢出 |
| 7 | XOffset/YOffset + fillMode=0 | 偏移正常，不溢出 |
| 8 | 无素材 + 圆角开 | 不受影响 |