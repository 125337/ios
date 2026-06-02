# MioPlugin 资料卡背景功能 Bug 修复文档

> **更新日期**: 2026-06-02 (v8 — 根因确认版)
> **当前状态**: 隐藏信息卡片 ✅ 已修复 | 背景图不显示 ❌ 根因已100%确认
> **根因**: 时序问题 — Cell Hook 执行时 MMHeadImageView 尚未创建，导致 `isProfile=0` 分支不进入

---

## 1️⃣ 日志诊断结果（铁证）

### 1.1 关键日志数据

日志共 480 行，包含两种诊断输出：

#### `[CardBg-Diag]` — Cell Hook 的条件判断

| 时间 | VC 类名 | isMoreVC | isProfile | cardBgEnabled | 结果 |
|------|---------|:--------:|:--------:|:-------------:|------|
| 16:42:33 | **NewMainFrameViewController** | 0 | **0** | 1 | ❌ 不进入 |
| 16:42:33 | **NewMainFrameViewController** | 0 | **1** | 1 | ❌ 不进入（VC不对） |
| 16:42:37 | **MoreViewController** | **1** | **0** | 1 | ❌ **不进入（找不到头像！）** |
| 16:42:37 | **MoreViewController** | **1** | **0** | 1 | ❌ 同上 |
| ...（大量重复） | **MoreViewController** | **1** | **0** | 1 | ❌ 全部失败 |

#### `[CardBg-MUIB]` — MMUIButton Hook 的判断

| 时间 | VC 类名 | foundHead | cardBgHidden | subviews 数量 | 说明 |
|------|---------|:--------:|:------------:|:-------------:|------|
| 16:42:37 | MoreViewController | **0** | 0 | 2 | 非资料卡按钮 |
| 16:42:37 | MoreViewController | **1** | 0 | **9** | ★ 资料卡 MMUIButton！ |
| 16:42:41 | MoreViewController | **1** | 0 | **9** | ★ 再次确认！ |

### 1️⃣ 根因：时序竞争（Race Condition）

**执行顺序**：

```
时间线：
─────────────────────────────────────────────────
第1轮 layoutSubviews (NewMainFrameViewController 下)
  │
  ├─ Cell Hook 执行
  │   └─ wp_isProfileCard: → isProfile=1 ✅ (找到了!)
  │   └─ 但 isMoreVC=0 ❌ (VC 不是 MoreViewController)
  │   └─ → 分支不进入（因为 && 短路）
  │
  └─ MMUIButton Hook 执行
      └─ (此时可能还未切换到 MoreViewController)
─────────────────────────────────────────────────
第2轮 layoutSubviews (MoreViewController 下)  ← 切换到"我"页面
  │
  ├─ Cell Hook 执行  ★★★ 问题在这里 ★★★
  │   ├── isMoreVC = 1 ✅ (VC 正确了)
  │   ├── wp_isProfileCard: → isProfile = 0 ❌ !!!
  │   │    └─ 递归搜索 Cell 所有子视图 → 找不到 MMHeadImageView
  │   │    └─ 因为 MMHeadImageView 还没被创建！
  │   └─ → 分支不进入（isProfile=0 导致 && 短路）
  │
  └─ MMUIButton Hook 执行  ★★★ 这里能找到 ★★★
      ├── orig (微信原始 layoutSubviews)
      │   └─ 在这里创建了 MMHeadImageView！
      ├── 搜索直接子视图 → foundHead = 1 ✅
      └─ → 进入分支，执行 clearColor / m_bgImageView 清除等
          └─ 但是！bgImageView 是在 Cell Hook 中创建的，
             Cell Hook 没进入 → bgImageView 不存在 → 背景图无法设置
```

### 1.2 为什么 HideCard 能工作但背景图不行？

**HideCard 能工作的真正原因**：

回顾之前的分析，HideCard 的"成功"其实也是在这个时序问题下发生的。但 HideCard 的效果看起来"有效"是因为：

- 当用户开启 HideCard 后看到空白/渐变效果，**那不是我们的代码做的**
- 可能是微信自身的某些行为（比如隐藏了内容后 Cell 变成了某种默认状态）
- 或者 HideCard 的效果在其他地方被触发了

**实际上 HideCard 和背景图面临的是同一个根因**：Cell Hook 的 `isProfile=0` 导致整个 cardBg 分支都不进入。

---

## 2️⃣ 修复方案

### 核心思路：将背景图创建逻辑从 Cell Hook 移到 MMUIButton Hook

**原因**：MMUIButton Hook 执行时 MMHeadImageView 已经存在（日志证明 `foundHead=1`），能可靠识别资料卡。

### 方案：在 MMUIButton Hook 中创建和管理 bgImageView

当前架构（有问题）：
```
Cell Hook (layoutSubviews)
  └─ 条件满足 → 创建 bgImageView → 设置 frame → 加载图片  ← 从未执行！

MMUIButton Hook (layoutSubviews)
  └─ 条件满足 → clearColor / 清除 m_bgImageView         ← 执行了但没用
```

修复后架构：
```
Cell Hook (layoutSubviews)
  └─ 只做通用的圆角处理（不依赖 isProfile）

MMUIButton Hook (layoutSubviews)
  ├─ 条件满足 (vc==MoreViewController && foundHead && cardBgEnabled)
  │   ├─ clearColor / 清除 m_bgImageView
  │   ├─ ★ 在 self (MMUIButton) 上创建/复用 bgImageView
  │   ├─ ★ 计算 frame
  │   ├─ ★ 加载背景图片
  │   └─ 图层排序
  └─ 条件不满足 → 正常处理
```

### 具体修改位置

#### 修改 1：MMUIButton Hook 中增加 bgImageView 创建逻辑

**文件**: [ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m)  
**位置**: MMUIButton Hook 的 `hasBgImage` 分支内（约第 320 行之后）

在设置 `backgroundColor = clearColor` 和清除 `m_bgImageView` 之后，添加：

```objc
// ★★★ 在 MMUIButton 上创建/获取 bgImageView ★★★
UIImageView *btnBgImg = nil;

// 先尝试从关联对象获取（复用）
btnBgImg = objc_getAssociatedObject((id)self, "mio_btnBgImageView");
if (!btnBgImg || ![btnBgImg isKindOfClass:[UIImageView class]]) {
    btnBgImg = [[UIImageView alloc] init];
    btnBgImg.tag = kBgImageTagCard;  // 复用同一个 tag 常量
    btnBgImg.clipsToBounds = YES;
    btnBgImg.userInteractionEnabled = NO;

    NSInteger fillMode = config.cardBgFillMode;
    switch (fillMode) {
        case 1: btnBgImg.contentMode = UIViewContentModeScaleAspectFit; break;
        case 2: btnBgImg.contentMode = UIViewContentModeScaleAspectFill; break;
        default: btnBgImg.contentMode = UIViewContentModeScaleToFill; break;
    }

    // ★ 插入到 MMUIButton 最底层（在所有内容之下）
    [(UIView *)self insertSubview:btnBgImg atIndex:0];
    objc_setAssociatedObject((id)self, "mio_btnBgImageView",
                             btnBgImg, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

// ★ 计算 frame（基于 MMUIButton 的 bounds）
CGRect btnBounds = ((UIView *)self).bounds;
CGFloat margin = config.listCellMargin;
if (margin <= 0) margin = 9;

CGFloat imgW = btnBounds.size.width;
CGFloat imgH = btnBounds.size.height;
CGFloat imgX = 0;
CGFloat imgY = 0;

if (config.listCornerRadiusEnabled && config.cardBgFillMode != 3) {
    imgW -= margin * 2;
    imgX = margin;
}

CGFloat offsetY = isDark ? config.cardBgDarkOffsetY : config.cardBgLightOffsetY;
CGFloat offsetX = isDark ? config.cardBgDarkOffsetX : config.cardBgLightOffsetX;
imgY += offsetY;
imgX += offsetX;

btnBgImg.frame = CGRectMake(imgX, imgY, imgW, imgH);

// ★ 图层排序
NSInteger layerPos = isDark ? config.cardBgDarkLayer : config.cardBgLightLayer;
if (layerPos == 1) {
    [(UIView *)self bringSubviewToFront:btnBgImg];
} else {
    // 底层：确保在最下面（index 0 已经是了）
}

// ★ 加载图片
btnBgImg.image = nil;
btnBgImg.alpha = 0.5;
[ListCornerRadiusHook wp_loadBackgroundImageForImageView:btnBgImg isDark:isDark];
```

#### 修改 2：Cell Hook 中移除 bgImageView 相关代码（或保留作为降级）

Cell Hook 中的 `isProfile` 判断可以放宽——不再要求 `isProfile=1`，只检查 `isMoreVC && cardBgEnabled`。或者完全将 bgImageView 逻辑移到 MMUIButton Hook，Cell Hook 只做通用处理。

---

## 3️⃣ 日志证据汇总

| 证据 | 值 | 含义 |
|------|-----|------|
| `vc=MoreViewController, isMoreVC=1` | ✅ | VC 匹配正确 |
| `vc=MoreViewController, isProfile=0` | ❌ | Cell 层找不到 MMHeadImageView |
| `vc=MoreViewController, foundHead=1` | ✅ | MMUIButton 层**能**找到 MMHeadImageView |
| `ALL CONDITIONS PASSED` 日志 | **从未出现** | Cell Hook 的三个条件从未同时为真 |
| `★ branch entered` 日志 | **从未出现** | bgImageView 从未被创建 |

---

## 4️⃣ 为什么之前所有的修复都没用

| 修复尝试 | 为什么无效 |
|---------|----------|
| contentView 透明 | Cell Hook 分支根本没进入，这行代码从未执行 |
| backgroundView 隐藏 | 同上 |
| bringSubviewToFront | 同上 |
| 红色诊断色 | 同上 |
| m_bgImageView 清除 | 这部分在 MMUIButton Hook 中**确实执行了**（foundHead=1 的那些行），但 bgImageView 不存在所以没意义 |
| clearColor | 同上，确实执行了但没有 bgImageView 可以显示 |

**所有针对"遮挡"的修复都是徒劳的，因为根本问题是 bgImageView 从未被创建。**

---

## 5️⃣ 修复优先级

| 优先级 | 修复 | 说明 |
|:------:|------|------|
| 🔴 P0 | 将 bgImageView 创建逻辑移入 MMUIButton Hook | 解决时序问题 |
| 🟡 P1 | Cell Hook 放宽 isProfile 条件或移除 bgImageView 逻辑 | 避免依赖不可靠的时序 |
| 🟢 P2 | 移除红色诊断色 | 修复后清理 |
