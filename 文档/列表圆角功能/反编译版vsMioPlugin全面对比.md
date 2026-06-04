# 微信优化插件 - 反编译版 vs MioPlugin 版 全面对比文档（v5 - 源码验证版）

> 对比基准：反编译版 `wxyh1.6.5.dylib.c`（Ghidra 反编译，版本 1.6.5） / MioPlugin 版 `ListCornerRadiusHook.m` + `WPSessionSpacingHook.m` + `WPAuxiliaryHooks.m` + `WPSearchBoxHook.m` + `ProfileCardBgHook.m` + `PluginConfig`
>
> 文档日期：2026-06-04
>
> 本次更新：逐行读取 MioPlugin 全部 5 个 Hook 模块源码 + PluginConfig 配置，与反编译版逐行交叉验证。**修正了之前大量错误判断**——MioPlugin 实际功能远超之前认知。

---

## 零、之前分析的错误纠正

| 之前错误描述 | 实际真相 | 证据 |
|------------|---------|------|
| "MioPlugin Cell 列表圆角 Hook 数 = 4" | MioPlugin 共 **15 个 Hook**，分布在 5 个模块中 | `ListCornerRadiusHook.m`(3) + `WPSessionSpacingHook.m`(5) + `WPAuxiliaryHooks.m`(4) + `WPSearchBoxHook.m`(1) + `ProfileCardBgHook.m`(2) |
| "MioPlugin 缺失 PinnedSessionSpacing" | ✅ 已实现，`WPSessionSpacingHook.m` line 14，section 1，默认 15pt | 源码第 14 行 |
| "MioPlugin 缺失 NormalSessionSpacing" | ✅ 已实现，`WPSessionSpacingHook.m` line 17，section ≥2，默认 15pt | 源码第 17 行 |
| "MioPlugin 缺失 Section Header 隐藏" | ✅ 已实现，`WPSessionSpacingHook.m` line 24-29，返回空 UIView | 源码第 24-29 行 |
| "MioPlugin 缺失 Section Header 背景图隐藏" | ✅ 已实现，`WPSessionSpacingHook.m` line 32-38，拦截 setBackgroundImageView: | 源码第 32-38 行 |
| "MioPlugin 缺失 MFWebMMBtn 背景色" | ✅ 已实现，`WPAuxiliaryHooks.m` line 19-43 | 源码第 19-43 行 |
| "MioPlugin 缺失 MFBannerBtn 背景色" | ✅ 已实现，`WPAuxiliaryHooks.m` line 45-69 | 源码第 45-69 行 |
| "MioPlugin 缺失 折叠视图" | ✅ 已实现，`WPAuxiliaryHooks.m` line 71-146，含边距+圆角+边框+背景色 | 源码第 71-146 行 |
| "MioPlugin 缺失 DisableLabelWidthAdjustment" | ✅ 已实现，`WPAuxiliaryHooks.m` line 177-185 | 源码第 177-185 行 |
| "反编译版 Cell 背景色硬编码" | 完全可配置，`cf_CellBackgroundColorLight/Dark`，UIColor 序列化 | `FUN_0000e02c` (line 13130) |
| "反编译版无 Cell 边框功能" | 有完整 Cell 边框：开关+宽度+颜色+分边+子视图标记 | `FUN_0000e344` (line 13233) |
| "反编译版无搜索框圆角" | 有，但在独立模块 `FUN_00021b3c` 中，使用 `SearchBoxRoundCornerEnabled` | `FUN_00025530` (line 26231) |

---

## 一、功能边界定义

Cell 列表圆角功能的边界由 `MoreDiscoverListRoundCornerEnabled`（反编译版）和 `listCornerRadiusEnabled`（MioPlugin）确定。

```
反编译版 Cell 列表圆角功能：
  FUN_00007af0 (2 个 Hook) + FUN_0000b364 (9 个 Hook) = 11 个 Hook

MioPlugin Cell 列表圆角功能：
  ListCornerRadiusHook.m (3) + WPSessionSpacingHook.m (5)
  + WPAuxiliaryHooks.m (4) + WPSearchBoxHook.m (1)
  + ProfileCardBgHook.m (2) = 15 个 Hook

独立模块 FUN_00021b3c（反编译版，不属于 Cell 列表圆角功能）：
  16 个 Hook，使用各自独立的配置键
  WCSearchBar、MMHeadImageView、MMEmoticonView、MMInputToolView 等
```

---

## 二、Hook 注册逐行对比

### 2.1 反编译版 Hook 注册（wxyh1.6.5.dylib.c 行号，已验证）

| 行号 | Hook 目标 | 方法 | 实现函数 | 说明 |
|------|----------|------|---------|------|
| 9550-9551 | `MMUIButton` | `layoutSubviews` | `FUN_00007b4c` | cardBg 路径 |
| 9552-9553 | `WCTableViewManager` | `tableView:heightForHeaderInSection:` | `FUN_00008874` | 资料卡间距 |
| 11533-11534 | `MMTableViewCell` | `layoutSubviews` | `FUN_0000b4cc` | ★ 核心：边距/圆角/背景色/边框 |
| 11535-11536 | `NewMainFrameViewController` | `tableView:heightForHeaderInSection:` | `FUN_0000ca18` | 聊天列表间距 |
| 11535,11537 | `NewMainFrameViewController` | `tableView:viewForHeaderInSection:` | `FUN_0000cae8` | Section Header 隐藏 |
| 11538-11539 | `MMTableSectionHeaderView` | `setBackgroundImageView:` | `FUN_0000cbcc` | Header 背景图隐藏 |
| 11540-11541 | `UIView` | `layoutSubviews` | `FUN_0000cc74` | 折叠视图 |
| 11542-11543 | `MFWebMMBtn` | `layoutSubviews` | `FUN_0000d200` | MFWeb 按钮背景色 |
| 11544-11545 | `MFBannerBtn` | `layoutSubviews` | `FUN_0000d384` | Banner 按钮背景色 |
| 11546-11547 | `MainFrameSectionFoldView` | `layoutSubviews` | `FUN_0000d508` | 折叠视图 |
| 11548-11549 | `MMUIButton` | `layoutSubviews` | `FUN_0000d898` | listCornerRadius 路径 |

### 2.2 MioPlugin Hook 注册（源码验证）

| 模块 | Hook 目标 | 方法 | 实现函数 | 源文件行号 |
|------|----------|------|---------|----------|
| ListCornerRadiusHook | `MMTableViewCell` | `layoutSubviews` | `replaced_MMTableViewCell_layoutSubviews` | .m:325-330 |
| ListCornerRadiusHook | `WCSearchBar` | `layoutSubviews` | `replaced_WCSearchBar_layoutSubviews` | .m:336-343 |
| ListCornerRadiusHook | `MMUIButton` | `layoutSubviews` | `replaced_MMUIButton_layoutSubviews` | .m:352-360 |
| WPSessionSpacingHook | `UIView` | `layoutSubviews` | `_hooked_UIView_layoutSubviews` | .m:123-126 |
| WPSessionSpacingHook | `NewMainFrameViewController` | `tableView:heightForHeaderInSection:` | `_hooked_NMFVC_heightForHeader` | .m:129-130 |
| WPSessionSpacingHook | `NewMainFrameViewController` | `tableView:viewForHeaderInSection:` | `_hooked_NMFVC_viewForHeader` | .m:131-132 |
| WPSessionSpacingHook | `NewMainFrameViewController` | `viewDidLayoutSubviews` | `_hooked_NMFVC_viewDidLayoutSubviews` | .m:133-134 |
| WPSessionSpacingHook | `MMTableSectionHeaderView` | `setBackgroundImageView:` | `_hooked_setBgImageView` | .m:138-139 |
| WPAuxiliaryHooks | `MFWebMMBtn` | `layoutSubviews` | `_hooked_MFWebMMBtn_layoutSubviews` | .m:191-193 |
| WPAuxiliaryHooks | `MFBannerBtn` | `layoutSubviews` | `_hooked_MFBannerBtn_layoutSubviews` | .m:197-199 |
| WPAuxiliaryHooks | `MainFrameSectionFoldView` | `layoutSubviews` | `_hooked_FoldView_layoutSubviews` | .m:203-205 |
| WPAuxiliaryHooks | `MMUIButton` | `layoutSubviews` | `_hooked_MMUIButton_layoutSubviews` | .m:209-211 |
| WPSearchBoxHook | `UIView` | `layoutSubviews` | `replaced_UIView_layoutSubviews` | .m:48-54 |
| ProfileCardBgHook | `WCTableViewManager` | `tableView:heightForHeaderInSection:` | `_hooked_heightForHeader` | .m:901-905 |
| ProfileCardBgHook | `MMTableSectionHeaderView` | `setFrame:` | `_hooked_headerSetFrame` | .m:916-919 |

### 2.3 Hook 逐一对比：谁有谁没有

> 按**类名 + 方法**逐一对比。✅ = 有，❌ = 没有。

| # | 类名 | 方法 | 反编译版 | MioPlugin | 谁更好 | 说明 |
|---|------|------|---------|-----------|--------|------|
| 1 | `MMTableViewCell` | `layoutSubviews` | ✅ `FUN_0000b4cc` | ✅ `ListCornerRadiusHook.m` | ★ 相同 | 核心：边距/圆角/背景色/边框 |
| 2 | `WCTableViewManager` | `tableView:heightForHeaderInSection:` | ✅ `FUN_00008874` | ✅ `ProfileCardBgHook.m` | ★ 相同 | 资料卡 section header 高度 |
| 3 | `NewMainFrameViewController` | `tableView:heightForHeaderInSection:` | ✅ `FUN_0000ca18` | ✅ `WPSessionSpacingHook.m` | ★ 相同 | 聊天列表 section 间距 |
| 4 | `NewMainFrameViewController` | `tableView:viewForHeaderInSection:` | ✅ `FUN_0000cae8` | ✅ `WPSessionSpacingHook.m` | ★ 相同 | Section Header 隐藏 |
| 5 | `NewMainFrameViewController` | `viewDidLayoutSubviews` | ❌ | ✅ `WPSessionSpacingHook.m` | **MioPlugin 独有** | 清除 plain UIView 白色背景 |
| 6 | `MMTableSectionHeaderView` | `setBackgroundImageView:` | ✅ `FUN_0000cbcc` | ✅ `WPSessionSpacingHook.m` | ★ 相同 | Header 背景图隐藏 |
| 7 | `MMTableSectionHeaderView` | `setFrame:` | ❌ | ✅ `ProfileCardBgHook.m` | **MioPlugin 独有** | 同步 button 高度 |
| 8 | `MFWebMMBtn` | `layoutSubviews` | ✅ `FUN_0000d200` | ✅ `WPAuxiliaryHooks.m` | ★ 相同 | MFWeb 按钮背景色 |
| 9 | `MFBannerBtn` | `layoutSubviews` | ✅ `FUN_0000d384` | ✅ `WPAuxiliaryHooks.m` | ★ 相同 | Banner 按钮背景色 |
| 10 | `MainFrameSectionFoldView` | `layoutSubviews` | ✅ `FUN_0000d508` | ✅ `WPAuxiliaryHooks.m` | ★ 相同 | 折叠视图：边距/圆角/边框/背景色 |
| 11 | `UIView` | `layoutSubviews`（折叠视图） | ✅ `FUN_0000cc74` | ✅ `WPSessionSpacingHook.m` | ★ 相同 | 聊天列表折叠置顶视图边距/圆角 |
| 12 | `UIView` | `layoutSubviews`（搜索框辅助） | ❌ | ✅ `WPSearchBoxHook.m` | **MioPlugin 独有** | 搜索框圆角双保险（额外 UIView Hook） |
| 13 | `WCSearchBar` | `layoutSubviews` | ✅ `FUN_00025530`（独立模块） | ✅ `ListCornerRadiusHook.m` | 模块归属不同 | 反编译版在独立模块 `FUN_00021b3c`，MioPlugin 纳入 Cell 列表圆角 |
| 14 | `MMUIButton` | `layoutSubviews`（cardBg 路径） | ✅ `FUN_00007b4c` | ✅ `ListCornerRadiusHook.m`（合并） | MioPlugin 更清晰 | 资料卡背景图/高度；MioPlugin 将两个路径合并为一个 Hook |
| 15 | `MMUIButton` | `layoutSubviews`（listCornerRadius 路径） | ✅ `FUN_0000d898` | ✅ `ListCornerRadiusHook.m`（合并） | MioPlugin 更清晰 | 资料卡圆角/边框/Label处理；同上合并 |
| 16 | `MMUIButton` | `layoutSubviews`（辅助） | ❌ | ✅ `WPAuxiliaryHooks.m` | **MioPlugin 独有** | DisableLabelWidthAdjustment / 媒体圆角 / QR码隐藏 |

### 2.4 Hook 注册对比总结

| 统计维度 | 反编译版 | MioPlugin |
|---------|---------|-----------|
| 总 Hook 数 | **11** | **16** |
| 双方共有 | 11 | 11 |
| 反编译版独有 | 0 | — |
| MioPlugin 独有 | — | **5**（#5, #7, #12, #16 + WCSearchBar 纳入主模块） |
| 独立模块（非本功能） | `WCSearchBar` 在 `FUN_00021b3c` | — |

> **结论**：反编译版 11 个 Hook 在 MioPlugin 中全部有对应实现（覆盖率 100%）。MioPlugin 额外多出 5 个 Hook，提供了 `viewDidLayoutSubviews` 白色背景清理、`setFrame:` 高度同步、搜索框辅助 UIView Hook、MMUIButton 辅助 Hook 等增强功能。反编译版的 `WCSearchBar` Hook 位于独立模块 `FUN_00021b3c`（共 16 个 Hook，使用独立配置键），MioPlugin 将其纳入 Cell 列表圆角功能统一管理。

---

## 三、配置键与默认值对比（源码验证）

### 3.1 Cell 列表核心配置

| 功能 | 反编译版配置键 | 反编译版默认值 | MioPlugin 配置键 | MioPlugin 默认值 | 结论 |
|------|-------------|-------------|----------------|----------------|------|
| 总开关 | `MoreDiscoverListRoundCornerEnabled` | — | `listCornerRadiusEnabled` (PluginConfig.h:149) | — | ★ 相同 |
| Cell 边距 | `CellHorizontalMargin` | **9pt** | `listCellMargin` (PluginConfig.m:404) | **9pt** | ★ 相同 |
| 圆角半径 | `MoreDiscoverListCornerRadius` | **18pt** | `listCellCornerRadius` (PluginConfig.m:399) | **18pt** | ★ 相同 |
| Cell 边框开关 | `CellBorderEnabled` | — | `listCellBorder` (PluginConfig.h:152) | — | ★ 相同 |
| Cell 边框宽度 | `CellBorderWidth` | **2pt** | `listCellBorderWidth` (PluginConfig.m:434) | **2pt** | ★ 相同 |
| Cell 边框亮色 | `CellBorderColorLight` | blackColor | `listCellBorderLightColor` (PluginConfig.h:162) | 可配置 | ★ 相同 |
| Cell 边框暗色 | `CellBorderColorDark` | whiteColor | `listCellBorderDarkColor` (PluginConfig.h:163) | 可配置 | ★ 相同 |
| Cell 亮色背景 | `CellBackgroundColorLight` | ~#202020 | `listCellLightBgColor` (PluginConfig.h:157) | 可配置 | ★ 相同 |
| Cell 暗色背景 | `CellBackgroundColorDark` | ~#FFFFFF | `listCellDarkBgColor` (PluginConfig.h:158) | 可配置 | ★ 相同 |
| 卡片亮色背景 | `CardBackgroundColorLight` | ~#202020 | `listCardLightBgColor` (PluginConfig.h:159) | 可配置 | ★ 相同 |
| 卡片暗色背景 | `CardBackgroundColorDark` | ~#FFFFFF | `listCardDarkBgColor` (PluginConfig.h:160) | 可配置 | ★ 相同 |
| 自定义边框标记 | `CustomBorder` | — | ❌ | — | **反编译版独有** |

### 3.2 资料卡配置

| 功能 | 反编译版配置键 | 反编译版默认值 | MioPlugin 配置键 | MioPlugin 默认值 | 结论 |
|------|-------------|-------------|----------------|----------------|------|
| 资料卡开关 | `ProfileCardBackgroundEnabled` | — | `cardBgEnabled` | — | ★ 相同 |
| 资料卡间距 | `ProfileCardSpacing` | **9pt** | `cardBgListSpacing` | **0pt** | 不同 |
| 资料卡高度 | `ProfileCardHeight` | **0** | `cardBgHeight` | **0** | ★ 相同 |
| 资料卡隐藏 | `ProfileCardHideCard` | — | `cardBgHidden` | — | ★ 相同 |
| 资料卡边框开关 | `ProfileCardBorderEnabled` | — | `listProfileCardBorderEnabled` (PluginConfig.h:167) | — | ★ 相同 |
| 资料卡边框宽度 | `ProfileCardBorderWidth` | **2pt** | `listProfileCardBorderWidth` (PluginConfig.m:436) | **2pt** | ★ 相同 |
| 资料卡浅色边框 | `ProfileCardBorderColorLight` | — | `listProfileCardBorderLightColor` (PluginConfig.h:169) | #E5E5E5 | ★ 相同 |
| 资料卡深色边框 | `ProfileCardBorderColorDark` | — | `listProfileCardBorderDarkColor` (PluginConfig.h:170) | #3A3A3C | ★ 相同 |
| 背景图填充模式 | `ProfileCardBackgroundContentMode` | **0** | `cardBgFillMode` | **0** | ★ 相同 |
| 背景图层级 | `ProfileCardBackgroundLight/DarkLayer` | — | `cardBgLight/DarkLayer` | **0** | ★ 相同 |
| 背景图 XY 偏移 | `ProfileCardBackgroundLight/DarkX/YOffset` | **0** | `cardBgLight/DarkOffsetX/Y` | **0** | ★ 相同 |
| 背景图对齐 | `ProfileCardBackgroundLight/DarkAlignment` | **1** | `cardBgLight/DarkAlignment` | **1** | ★ 相同 |
| QR码隐藏 | `HideQRCodeButton` | — | `listHideRightQRCode` (PluginConfig.h:151) | — | ★ 相同 |
| Label 宽度禁用 | `DisableLabelWidthAdjustment` | — | `listDisableLabelWidthAdjustment` (PluginConfig.h:164) | — | ★ 相同 |

### 3.3 聊天列表间距配置

| 功能 | 反编译版配置键 | 反编译版默认值 | MioPlugin 配置键 | MioPlugin 默认值 | 结论 |
|------|-------------|-------------|----------------|----------------|------|
| 置顶对话间距 | `PinnedSessionSpacing` | **15pt** | `listPinnedSessionTopSpacing` (PluginConfig.m:421) | **15pt** | ★ 相同 |
| 普通对话间距 | `NormalSessionSpacing` | **15pt** | `listNormalSessionSpacing` (PluginConfig.m:424) | **15pt** | ★ 相同 |

### 3.4 搜索框配置

| 功能 | 反编译版配置键 | 反编译版默认值 | MioPlugin 配置键 | MioPlugin 默认值 | 结论 |
|------|-------------|-------------|----------------|----------------|------|
| 搜索框圆角开关 | `SearchBoxRoundCornerEnabled` | — | `listSearchCornerRadius` (PluginConfig.h:150) | — | ★ 相同 |
| 搜索框圆角半径 | `SearchBoxCornerRadius` | **18pt** | `listSearchBoxCornerRadius` (PluginConfig.m:432) | **18pt** | ★ 相同 |

---

## 四、Cell 边距实现对比

| 维度 | 反编译版 | MioPlugin | 结论 |
|------|---------|-----------|------|
| 边距配置键 | `CellHorizontalMargin` | `listCellMargin` | ★ 相同 |
| 默认值 | 9pt | 9pt | ★ 相同 |
| x 计算公式 | `targetX = max(margin - superX, 0)` | `targetX = max(margin - superX, 0)` | ★ 相同 |
| 宽度计算 | `targetW = screenW - 2*margin` | `targetW = containerW - 2*margin` | MioPlugin 使用 superview 宽度更精确 |
| 应用方式 | 分步修改 frame | 一次性设置完整 frame | MioPlugin 更可靠 |
| 变更检测 | 宽度检查 | `currentX != targetX \|\| fabs(currentW - targetW) > 0.5` | MioPlugin 浮点比较 |

---

## 五、Cell 边框实现对比

| 维度 | 反编译版 | MioPlugin | 结论 |
|------|---------|-----------|------|
| 边框开关 | `CellBorderEnabled` | `listCellBorder` | ★ 相同 |
| 边框宽度 | 默认 2pt | 默认 2pt（代码回退 1pt） | ★ 相同 |
| 边框颜色 | 亮暗双色自适应 | 亮暗双色可配置 | ★ 相同 |
| 分边边框 | top/bottom/left/right (position 0/1/2/3) | 统一 CAShapeLayer | 反编译版更细粒度 |
| 子视图边框标记 | `CustomBorder` 标记 | ❌ | 反编译版独有 |
| 实现方式 | `layer.borderWidth/Color` + mask | `CAShapeLayer` + 路径 | 各有优劣 |
| 边框缓存 | 每帧创建 | `objc_setAssociatedObject` 缓存 | MioPlugin |

---

## 六、Cell 背景色实现对比

| 维度 | 反编译版 | MioPlugin | 结论 |
|------|---------|-----------|------|
| 可配置性 | NSUserDefaults 完全可配置 | PluginConfig 可配置 | ★ 相同 |
| 亮色背景 | `CellBackgroundColorLight` (~#202020) | `listCellLightBgColor` | ★ 相同 |
| 暗色背景 | `CellBackgroundColorDark` (~#FFFFFF) | `listCellDarkBgColor` | ★ 相同 |
| Card 模式 | 区分 Cell/Card 两种 | 区分 Cell/Card 两种 | ★ 相同 |
| 存储方式 | UIColor 序列化为 NSData | 十六进制字符串 | 各有优劣 |
| 深浅色检测 | `traitCollection.userInterfaceStyle` | `traitCollection.userInterfaceStyle` | ★ 相同 |

---

## 七、搜索框圆角实现对比

| 维度 | 反编译版 | MioPlugin | 结论 |
|------|---------|-----------|------|
| Hook 目标 | `WCSearchBar::layoutSubviews` | `WCSearchBar::layoutSubviews` + `UIView::layoutSubviews` (辅助) | 各有优劣 |
| 开关 | `SearchBoxRoundCornerEnabled` | `listSearchCornerRadius` | ★ 相同 |
| 默认半径 | 18pt | 18pt | ★ 相同 |
| 操作对象 | 搜索框内部容器 | `_searchField` / `_textField` / 类名匹配查找 | ★ 相同 |
| 实现方式 | `layer.cornerRadius` + `masksToBounds` | `layer.cornerRadius` + `masksToBounds` | ★ 相同 |
| 模块归属 | 独立模块 `FUN_00021b3c` | Cell 列表圆角功能内 | 设计差异 |

---

## 八、资料卡实现对比

### 8.1 资料卡边框

| 维度 | 反编译版 | MioPlugin | 结论 |
|------|---------|-----------|------|
| 开关 | `ProfileCardBorderEnabled` | `listProfileCardBorderEnabled` | ★ 相同 |
| 宽度 | 默认 2pt | 默认 2pt | ★ 相同 |
| 颜色 | 亮暗双色自适应 | 亮暗双色 (#E5E5E5 / #3A3A3C) | ★ 相同 |
| 实现 | `layer.borderWidth` + `layer.borderColor` | `layer.borderWidth` + `layer.borderColor` | ★ 相同 |

### 8.2 资料卡背景图

| 维度 | 反编译版 | MioPlugin | 结论 |
|------|---------|-----------|------|
| 背景图创建 | 每次创建新 `UIImageView` | 首次创建 + 缓存（tag=999902） | MioPlugin |
| 图片加载 | 异步（dispatch_queue） | 异步（`dispatch_async`） | ★ 相同 |
| 动图支持 | GIF | GIF + PNG | ★ 相同 |
| 填充模式 | 可配置 | 可配置 | ★ 相同 |
| 对齐方式 | 可配置 | 可配置 | ★ 相同 |
| XY 偏移 | 可配置 | 可配置 | ★ 相同 |
| 层级控制 | 可配置 | 可配置 | ★ 相同 |
| 失败回退 | ❌ | 回退到纯色背景 | MioPlugin |
| 原生背景清除 | ❌ | `m_bgImageView` ivar | MioPlugin |

### 8.3 资料卡间距

| 维度 | 反编译版 | MioPlugin | 结论 |
|------|---------|-----------|------|
| 默认值 | 9pt | 0pt | MioPlugin 更安全 |
| 高度保护 | ❌ | `result = max(result, customHeight)` | MioPlugin |
| 额外 Hook | ❌ | `MMTableSectionHeaderView::setFrame:` | MioPlugin |

---

## 九、圆角实现对比

| 维度 | 反编译版 | MioPlugin | 结论 |
|------|---------|-----------|------|
| 圆角方式 | `layer.cornerRadius` + `masksToBounds` | `layer.cornerRadius` + `maskedCorners` | MioPlugin 分角圆角 |
| 分组圆角 | ❌ 全圆角 | ✅ 首行顶角、末行底角、中间无角 | MioPlugin |
| 联系人特殊处理 | ❌ | ✅ `wp_applyCornerForContacts` | MioPlugin |
| 折叠视图 `isFolding` | ✅ | ✅ 区分折叠态 | ★ 相同 |

---

## 十、反编译版独有功能

| 功能 | 说明 | 反编译版实现 |
|------|------|------------|
| 子视图边框标记 (`CustomBorder`) | 子视图可标记是否独立应用边框 | `FUN_0000e344` 遍历 subviews 检查 `cf_CustomBorder` 标记 |
| 分边边框 (position 0/1/2/3) | 精确控制上下左右各边边框 | `FUN_0000e344` 中 switch(position) |

---

## 十一、MioPlugin 独有功能

| 功能 | 说明 | 源文件 |
|------|------|--------|
| 分组圆角（maskedCorners） | 首行顶角、末行底角、中间无角 | `ListCornerRadiusHook.m` |
| 联系人特殊圆角处理 | `wp_applyCornerForContacts` | `ListCornerRadiusHook.m` |
| CAShapeLayer 边框缓存 | 避免重复创建边框 layer | `ListCornerRadiusHook.m` |
| 背景图加载失败回退 | 回退到纯色背景 | `ProfileCardBgHook.m` |
| 微信原生背景 ivar 清除 | `m_bgImageView` | `ProfileCardBgHook.m` |
| 白色视图清理 | `_wp_clearPlainUIViewBackgrounds` | `WPSessionSpacingHook.m` |
| `viewDidLayoutSubviews` Hook | 清除 plain UIView 背景 | `WPSessionSpacingHook.m` |
| 懒注册 | MMUIButton 懒注册 | `ListCornerRadiusHook.m` |
| 类查找回退 | `objc_lookUpClass` 回退 | `ListCornerRadiusHook.m` |
| 高度保护 | `result = max(result, customHeight)` | `ProfileCardBgHook.m` |
| 前缀黑名单 | `WCRefine`, `WCPulse` 等 | `ListCornerRadiusHook.m` |
| 搜索框圆角双子 Hook | `WCSearchBar` + `UIView` 双保险 | `ListCornerRadiusHook.m` + `WPSearchBoxHook.m` |
| 媒体圆角 (`listMediaCornerEnabled`) | `MMUIButton` 媒体项圆角 | `WPAuxiliaryHooks.m` |
| WPLog 分级日志 | 便于调试 | 全部模块 |

---

## 十二、综合评价

| 评价维度 | 反编译版 | MioPlugin | 结论 |
|---------|---------|-----------|------|
| **Hook 数量** | 11 | 15 | MioPlugin 更多 |
| **功能覆盖度** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ | MioPlugin 更全面（分组圆角/联系人/回退/清理） |
| **代码质量** | ⭐⭐ | ⭐⭐⭐⭐⭐ | MioPlugin 模块化、可读性、可维护性均完胜 |
| **Cell 边距/圆角质量** | ⭐⭐⭐ | ⭐⭐⭐⭐⭐ | MioPlugin 有分组圆角和联系人特殊处理 |
| **Cell 边框** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ | 各有优势（分边 vs 缓存） |
| **Cell 背景色** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ | 双方都可配置 |
| **资料卡** | ⭐⭐⭐ | ⭐⭐⭐⭐⭐ | MioPlugin 有回退、原生清除、更多优化 |
| **搜索框圆角** | ⭐⭐⭐ | ⭐⭐⭐⭐ | MioPlugin 双 Hook 更可靠 |
| **性能优化** | ⭐⭐ | ⭐⭐⭐⭐ | MioPlugin 有缓存、懒加载、异步优化 |
| **稳定性** | ⭐⭐⭐ | ⭐⭐⭐⭐ | MioPlugin 有高度保护、回退、失败兜底 |
| **配置灵活性** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ | 双方都能灵活配置 |

---

## 十三、改进建议

### MioPlugin 可补充的反编译版功能：

1. **子视图边框标记 (`CustomBorder`)**：对特定子视图单独应用边框
2. **分边边框**：精确控制 top/bottom/left/right 各边边框

### 反编译版可借鉴 MioPlugin 的优化：

1. 模块化拆分（当前单文件约 10000 行）
2. 背景图缓存（避免每次创建新 UIImageView）
3. 背景图加载失败回退
4. 微信原生背景 ivar 清除
5. 分组圆角（maskedCorners）
6. 高度保护和类查找回退
7. 边框 CAShapeLayer 缓存
8. 搜索框双 Hook 保障

---

## 附录 A：独立模块 `FUN_00021b3c` 概览

> 反编译版的独立模块，使用各自独立的配置键，不属于 Cell 列表圆角功能。

| 类名 | 配置键 | 说明 |
|------|--------|------|
| `WCImageView` | `TimelineMediaRoundCornerEnabled` | 朋友圈图片 |
| `WCImageFullScreenViewContainer` | — | 朋友圈全屏图片容器 |
| `WCSNSNodeVideoView` | — | 朋友圈视频 |
| `WCContentItemFinderView` | — | 朋友圈 Finder |
| `MMAssetView` | `AssetPickerRoundCornerEnabled` | 相册选择器 |
| `MMEmoticonView` | `EmoticonRoundCornerEnabled` | 表情视图 |
| `EmoticonViewWithPreview` | — | 表情预览 |
| `EmoticonCustomManageView` | — | 表情管理 |
| `MMHeadImageView` | `AvatarRoundCornerEnabled` | 头像 |
| `FakeHeadImageView` | — | 假头像 |
| `MMInputToolView` | `BottomTabRoundCornerEnabled` | 聊天输入工具栏 |
| `QuickReplyMsgNotifyView` | `QuickReplyRoundCornerEnabled` | 快捷回复 |
| `MenuButton` | `MainFrameSwipeMenuRoundCornerEnabled` | 菜单按钮 |
| `MMNewMsgContentNavBar` | `ChatNavBarRoundCornerEnabled` | 聊天导航栏新版 |
| `MMMsgContentNavBar` | `ChatNavBarRoundCornerEnabled` | 聊天导航栏旧版 |
| `WCSearchBar` | `SearchBoxRoundCornerEnabled` | 搜索框 |

> MioPlugin 部分对应：搜索框圆角在 Cell 列表圆角功能中已实现；`listMediaCornerEnabled` 对应部分媒体圆角；其余 14 个 Hook 均未实现。

---

## 附录 B：`MoreDiscoverListRoundCornerEnabled` 引用验证表

| 行号 | 函数 | Hook 目标 |
|------|------|----------|
| 9936 | FUN_00007b4c | MMUIButton (cardBg) |
| 10223 | FUN_00007b4c | (内部分支) |
| 11612 | FUN_0000b4cc | MMTableViewCell |
| 12311 | FUN_0000ca18 | NewMainFrameViewController::heightForHeader |
| 12347 | FUN_0000cae8 | NewMainFrameViewController::viewForHeader |
| 12377 | FUN_0000cbcc | MMTableSectionHeaderView::setBackgroundImageView |
| 12434 | FUN_0000cc74 | UIView (折叠视图) |
| 12642 | FUN_0000cc74 | (内部分支) |
| 12701 | FUN_0000cc74 | (内部分支) |
| 12787 | FUN_0000cc74 | (内部分支) |
| 12924 | FUN_0000d898 | MMUIButton (listCornerRadius) |

> 该配置键**从未出现在** `FUN_00021b3c` 范围内，确认该模块为独立功能。