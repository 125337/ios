# MioPlugin 资料卡背景功能 — 技术文档

> **更新日期**: 2026-06-03 (v25 — 背景图 frame 计算错误根因确认 + 微信优化方案对比)
> **架构**: ListCornerRadiusHook（薄分发层） + ProfileCardBgHook（独立资料卡模块）

---

## 1. 文件结构

```
MioPlugin/Modules/
├── ListCornerRadius/
│   ├── ListCornerRadiusHook.h          ← 头文件
│   └── ListCornerRadiusHook.m          ← 薄分发层 + 列表圆角逻辑
│
└── ProfileCardBg/                         ← 独立模块
    ├── ProfileCardBgHook.h                ← 接口声明
    └── ProfileCardBgHook.m                ← 全部资料卡逻辑
```

---

## 2. Bug 清单

### 🔴 Bug H：背景图 frame 高度 1704pt（全屏高度×2）— 待修复

**现象**：背景图被拉伸到全屏，frame=(0,0,393,1704)，而资料卡实际高度仅约 130-200pt

**日志证据**（[plugin(42).log](file:///www/wwwroot/ios/plugin(42).log)）：

```
[BGIMG-CREATE] tag=999902, frame=(0,0,393,1704), cellBounds=(0,0,393,1704)
[BGIMG-SET] image=SET, size=803x980, frame=(0,0,393,1704), hidden=0, alpha=1.00
```

**位置**：[ProfileCardBgHook.m L511-L519](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L511-L519)

```objc
// ❌ 当前代码
UIView *parentCell = nil;
UIView *p = button.superview;
if (p) parentCell = p.superview;
CGRect cellBounds = parentCell ? parentCell.bounds : button.bounds;
CGFloat imgW = cellBounds.size.width;
CGFloat imgH = cellBounds.size.height;   // ★ 1704pt！错误！
```

#### 根因

`button.superview.superview` 不是 MMUITableViewCell，而是某个**全屏高度的容器视图**。

视图层级实际为：
```
MMUITableViewCell (height ≈ 130-200pt)
└── contentView (height ≈ 130-200pt)
    └── MMUIButton (self, height ≈ 130-200pt)  ← Hook 在这里
```

但 `button.superview` = contentView，`button.superview.superview` = **不是 Cell**，而是某个 UIScrollView 或 UITableView 的子视图，其 bounds.height = 1704pt（整个滚动内容的高度）。

**为什么 cellBounds.height = 1704**：`parentCell` 变量名暗示它应该是 Cell，但实际上它指向了一个全高度的容器。Cell 的 bounds 在 `layoutSubviews` 期间可能还没被正确设置，或者 superview 链不是我们预期的。

#### 微信优化是怎么做的

微信优化在 **Cell Hook**（`MMTableViewCell.layoutSubviews`）中处理背景图，而不是在 MMUIButton Hook 中。

关键代码（[123456.c L6556-L6589](file:///www/wwwroot/ios/插件/微信优化反编译最新/123456.c#L6556-L6589)）：

```c
// 微信优化：在 Cell Hook 中，self = Cell 本身
dVar24 = (double)FUN_000c35e0(uVar14);  // [self bounds].size.width  ← Cell 的宽度
dVar22 = param_2;                        // param_2 = Cell frame.origin.y
// ...
if (圆角开启 && 非特殊模式) {
    lVar11 = CellHorizontalMargin ?: 9;
    dVar22 = -2.0;                        // x 偏移基准
    param_3 = param_3 + lVar11 * -2.0;   // width -= margin * 2
    dVar24 = 0.0;                          // y 偏移基准
}
dVar21 = FUN_00008e48(uVar14, 0, iVar6);  // 获取 yOffset
dVar23 = param_2 - dVar22;                // 计算 height
dVar5 = dVar24 + dVar21;                  // 计算 y
FUN_000cb900(dVar5, dVar23, param_3, param_4, uVar20);
//          (y,    height,  width,  ???,    imageView)
// 即: [imageView setFrame:CGRectMake(width_offset, y, width, height)]
```

**微信优化的关键差异**：

| 对比项 | 微信优化 | MioPlugin（当前） |
|--------|---------|-----------------|
| Hook 位置 | **Cell.layoutSubviews** | MMUIButton.layoutSubviews |
| `self` 是谁 | Cell 本身 | MMUIButton |
| 高度来源 | `param_2`/`param_4`（函数参数，= Cell 的实际高度） | `parentCell.bounds.height`（= 1704，错误） |
| 宽度来源 | `[self bounds].size.width`（Cell 的宽度） | `parentCell.bounds.width`（= 393，凑巧正确） |

**微信优化使用函数参数获取高度**，而不是通过 superview 链遍历。这是因为 Cell 的 `layoutSubviews` 函数签名中已经包含了正确的 frame 信息。

#### 修复方案

**方案 A（推荐）：使用 `button.bounds.size.height` 而非 `parentCell.bounds.size.height`**

MMUIButton 就是资料卡的视觉容器，它的高度就是资料卡的实际高度：

```objc
// ✅ 修复后
CGFloat imgW = button.bounds.size.width;
CGFloat imgH = button.bounds.size.height;  // ← 使用 button 自身的高度
CGFloat offsetX = isDark ? config.cardBgDarkOffsetX : config.cardBgLightOffsetX;
CGFloat offsetY = isDark ? config.cardBgDarkOffsetY : config.cardBgLightOffsetY;
btnBgImg.frame = CGRectMake(offsetX, offsetY, imgW, imgH);
```

**为什么 `button.bounds.size.height` 是正确的**：
- MMUIButton 是资料卡的视觉容器，其 bounds 就是资料卡的实际显示区域
- 在 `layoutSubviews` 中，button 的 bounds 已经被 Cell 的 orig 正确设置
- 日志中 `superview=MMUIButton` 确认了 bgImageView 在 MMUIButton 上
- 不需要向上遍历 superview 链

**方案 B：使用 `button.frame.size.height`**

与方案 A 类似，但用 frame 而非 bounds。在大多数情况下两者一致，但 bounds 更准确（不受 transform 影响）。

#### 分支A（已存在 bgImageView）也需要同步修复

[L475-L493](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L475-L493) 中分支A 的 frame 更新也要改为使用 `button.bounds`：

```objc
// 分支A：已存在的 bgImageView，更新 frame
CGRect cellBounds = parentCell ? parentCell.bounds : button.bounds;  // ❌ 同样的问题
// 改为：
CGRect buttonBounds = button.bounds;  // ✅
existingBgImg.frame = CGRectMake(offsetX, offsetY, buttonBounds.size.width, buttonBounds.size.height);
```

---

### 🔴 Bug G：折叠置顶聊天逻辑丢失 — 待修复

**位置**：[ListCornerRadiusHook.m wp_applyStandardCorner](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L379-L413)

**现象**：聊天列表中折叠置顶区域展开时，section 1 的末行 Cell 不应该有底部圆角和底边框，但当前代码仍然给了。

**根因**：重构时遗漏了折叠检测分支。`wp_findFoldViewInSubviews:` 方法还在 [L552](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L552)，但没有调用。

**修复方案**：在 `cornerType == 2`（末行）的赋值之后，插入折叠检测逻辑。

---

### ✅ Bug A-D：已修复（position 语义拆分 / case 0 边框 / skipMasksToFit 守卫 / masksToBounds 顺序）

### 🟢 Bug E：cardBg 关闭时设置自定义背景色 — 按设计

### ✅ Bug F：未调用原始 layoutSubviews — 确认不存在

---

## 3. 待修复汇总

| 优先级 | Bug | 改动量 | 影响范围 |
|:------:|:---:|:-----:|:-------:|
| **P0** | **H** 背景图 frame 高度 1704pt | ~4 行 | 背景图被拉伸到全屏 |
| **P1** | **G** 折叠置顶逻辑丢失 | ~12 行 | 聊天列表展开折叠区域时末行样式错误 |

---

## 4. 微信优化 vs MioPlugin 架构差异

### 4.1 背景图 Hook 位置

| 对比项 | 微信优化 | MioPlugin |
|--------|---------|-----------|
| 背景图创建位置 | **Cell.layoutSubviews** | MMUIButton.layoutSubviews |
| 背景图宿主视图 | Cell（`[self addSubview:bgImg]`） | MMUIButton（`[button insertSubview:bgImg]`） |
| 高度获取方式 | 函数参数（Cell 的实际 frame） | button.bounds（修复后） |
| 宽度获取方式 | `[self bounds].size.width` | button.bounds.size.width |

### 4.2 为什么微信优化在 Cell Hook 中做

微信优化对 `MMTableViewCell.layoutSubviews` 进行了**两次链式 Hook**：
1. 第一次 Hook：处理背景图、高度调整、HideCard
2. 第二次 Hook（FUN_00008874）：处理 Spacing

在 Cell Hook 中，`self` 就是 Cell 本身，可以直接用 `[self bounds]` 获取正确的尺寸，不需要遍历 superview 链。

### 4.3 MioPlugin 选择在 MMUIButton Hook 中做的原因

MioPlugin 的架构是 **Cell Hook 做分发，MMUIButton Hook 做资料卡逻辑**。这避免了 Cell Hook 过于臃肿，但代价是需要在 MMUIButton 中获取正确的尺寸。

**解决方案**：直接用 `button.bounds` 而非向上遍历 superview 链。因为 MMUIButton 本身就是资料卡的视觉容器，其 bounds 就是正确的尺寸。

---

## 5. 视图层级（"我"页面资料卡 Cell）

```
MMUITableViewCell (Cell Hook)
├── layer.cornerRadius = 18          ← 列表圆角
├── layer.masksToBounds = YES (普通) / NO (资料卡+卡片背景)
├── backgroundColor = 自定义色 (普通) / clearColor (资料卡+卡片背景)
│
└── contentView
    └── MMUIButton (ProfileCardBgHook)
        ├── layer.cornerRadius = 18      ← 资料卡圆角
        ├── layer.masksToBounds = YES     ← 裁剪圆角
        ├── backgroundColor = clearColor (卡片开) / 自定义色 (卡片关)
        ├── [0] UIImageView tag=999902   ← bgImageView (cardBg 开启时)
        ├── [1] UIView (DynamicProvider) ← hidden by FIX-WHITE
        └── MMHeadImageView             ← 头像 (识别标志)
```

**注意**：`button.superview` = contentView，`button.superview.superview` ≠ Cell（是某个全高容器），所以**不要通过 superview 链获取 Cell 的 bounds**。

---

## 6. 配置项说明

| 配置项 | 类型 | 默认值 | 所属功能 |
|:------:|:-----:|:------:|:--------:|
| `listCornerRadiusEnabled` | BOOL | NO | 列表圆角 |
| `listCellCornerRadius` | CGFloat | 18 | 列表圆角 |
| `listCellMargin` | CGFloat | 0 | 列表圆角 |
| `listCellBorder` | BOOL | NO | 列表圆角（是否绘边框）|
| `listCellBorderWidth` | CGFloat | 1.0 | 列表圆角 |
| `cardBgEnabled` | BOOL | NO | 资料卡背景 |
| `cardBgHidden` | BOOL | NO | 资料卡背景 (HideCard) |
| `cardBgFillMode` | NSInteger | 0 | 资料卡背景 (0=拉伸 1=适配 2=填充 3=顶部) |
| `cardBgLight/DarkImagePath` | NSString* | nil | 资料卡背景 |
| `listCardLight/DarkBgColor` | NSString* | nil | 资料卡 (卡片关闭时的背景色) |

---

## 7. 历史踩坑记录

| # | 问题 | 根因 | 解决方式 |
|:-:|:-----|:-----|:---------|
| A | 图片文件不存在 | 用户未保存背景图 | picker 保存后文件存在 |
| B | 白色 UIView 遮挡 bgImageView | UIDynamicProviderColor 白色板 | FIX-WHITE 遍历隐藏 |
| C | 点"我"卡死 watchdog | setFrame: height 触发循环 | 移除 height 修改 |
| D | 第二次 orig 覆盖 | if 块内外各调一次 orig | 标志位模式 |
| E | v13 过渡期圆角边距全丢 | early return 跳过通用代码 | 删除 early return |
| F | 圆角不裁剪 | Cell 层 masksToBounds=NO | 改 MMUIButton 层做圆角 |
| G | bgImageView 全宽无边距 | margin 在 orig 之后（时序问题）| margin 移到 orig 之前 |
| H | 普通 Cell 白底丢失 | needsCardBgTransparency 条件过宽 | 增加 isProfileCardCell 判断 |
| I | 只开卡片背景全部 Cell 加圆角 | 入口"或"关系无二次守卫 | 重构为独立模块 |
| J | 关闭卡片背景资料卡无圆角 | early return 返回过早 | 删除 return，APPLY_CORNER 始终执行 |
| K | position 语义错位 + 缺 case 0 | 一变量两用语义冲突 | 拆为 cornerType + borderType |
| L | skipMasksToFit 无守卫 | 只看 fillMode 没看 cardBgEnabled | 加 && config.cardBgEnabled |
| M | masksToBounds 覆盖 | handleCellLayout 在 masksToBounds=YES 之前调用 | 交换执行顺序 |
| **N** | **背景图 frame 高度 1704pt** | **superview.superview 不是 Cell，是全高容器** | **改用 button.bounds 获取高度** |
