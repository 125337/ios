# 信息卡片背景 — 反编译版 vs MioPlugin 版 全面对比文档（v1 - 源码验证版）

> 对比基准：反编译版 `wxyh1.6.5.dylib.c`（Ghidra 反编译，版本 1.6.5） / MioPlugin 版 `ProfileCardBgHook.m` + `ListCornerRadiusHook.m` + `WPAuxiliaryHooks.m` + `PluginConfig` + `SettingCardBackgroundController.m`
>
> 专注范围：微信「我」页面的资料卡（Profile Card）背景功能，包括背景图替换、背景色、边框、圆角、间距、高度、隐藏、Label 处理、QR码隐藏、亮暗自适应等。
>
> 文档日期：2026-06-04

---

## 零、架构差异概述

| 维度 | 反编译版 | MioPlugin |
|------|---------|-----------|
| Hook 文件组织 | 单文件 `wxyh1.6.5.dylib.c`（10000+ 行） | 模块化：`ProfileCardBgHook.m` + `ListCornerRadiusHook.m` + `WPAuxiliaryHooks.m` |
| 入口调用方式 | 两个独立的 `MMUIButton::layoutSubviews` Hook | **薄分发层**：单个 `MMUIButton::layoutSubviews` Hook → `[ProfileCardBgHook handleButtonLayout:]` |
| 配置存储 | NSUserDefaults（`com.cyansmoke.wechattweak`）cf_* 键名 | PluginConfig 单例（包装 NSUserDefaults） |
| 核心架构 | 背景色始终设置 + 背景图作为附加层 | 背景图启用时背景色清为 clearColor，背景图禁用时才设背景色 |
| 额外 MMTableViewCell Hook | ✅ 共用 `FUN_0000b4cc`（列表圆角功能 Cell Hook，**不**处理资料卡逻辑） | ✅ 独立 `handleCellLayout:`（ProfileCardBgHook 专用于资料卡 Cell 透明化） |
| **Cell 透明化机制** | **仅在 Button Hook 中处理**：反编译版的 Cell Hook（FUN_0000b4cc）不涉及资料卡透明化。HideCard 逻辑在 Button Hook（FUN_00007b4c）中：清除 button 背景色 + 隐藏子视图。**没有 Cell 层透明化** | **无条件透明化**：每次 layoutSubviews 都透明化 Cell 全部四层 |

> **⚠️ 重要纠正（v2）**：以下内容已过时，保留作为对比参考。
>
> 之前文档错误地认为：
> 1. 反编译版在 Cell 层处理透明化（FUN_0000b4cc Phase 2）
> 2. 反编译版的背景图插入 Cell 层
>
> **实际反编译代码分析确认**：
>
> - **反编译版的 Cell Hook（FUN_0000b4cc）仅处理列表圆角**，不处理资料卡逻辑
> - 所有资料卡逻辑（包括 HideCard + 背景图管理）全部在 **Button Hook（FUN_00007b4c）** 中处理
> - **背景图在 Button 层**（MMUIButton 的直接子视图，tag=9998/9999），**不是 Cell 层的子视图**
>
> 详见 [隐藏信息卡片_实现对比.md](file:///www/wwwroot/ios/文档/列表圆角功能/隐藏信息卡片_实现对比.md) 和 [HideCard保留背景图_实现分析与改造方案.md](file:///www/wwwroot/ios/文档/列表圆角功能/HideCard保留背景图_实现分析与改造方案.md)。
>

## 一、Hook 注册对比

### 1.1 反编译版 Hook

| 行号 | Hook 目标 | 方法 | 实现函数 | 说明 |
|------|----------|------|---------|------|
| 9550-9551 | `MMUIButton` | `layoutSubviews` | `FUN_00007b4c` | 背景图主入口（创建/复用 UIImageView + 高度 + 隐藏 + dispatch） |
| 9552-9553 | `WCTableViewManager` | `tableView:heightForHeaderInSection:` | `FUN_00008874` | 资料卡 Section 1 高度/间距 |
| **11533-11534** | **`MMTableViewCell`** | **`layoutSubviews`** | **`FUN_0000b4cc`** | **★ 列表圆角 Cell Hook（仅处理列表圆角，不涉及资料卡）** |
| 11548-11549 | `MMUIButton` | `layoutSubviews` | `FUN_0000d898` | 资料卡圆角/边框/背景色/隐藏/Label |

### 1.2 MioPlugin Hook

| 模块 | Hook 目标 | 方法 | 实现函数 | 源文件行号 |
|------|----------|------|---------|----------|
| ProfileCardBgHook | `WCTableViewManager` | `tableView:heightForHeaderInSection:` | `_hooked_heightForHeader` | .m:901-905 |
| ProfileCardBgHook | `MMTableViewCell` | `layoutSubviews` | `handleCellLayout:` | .m:774-830 |
| ListCornerRadiusHook | `MMUIButton` | `layoutSubviews` | `replaced_MMUIButton_layoutSubviews`（薄分发）→ `handleButtonLayout:` | .m:161-169 |
| WPAuxiliaryHooks | `MMUIButton` | `layoutSubviews` | `_hooked_MMUIButton_layoutSubviews` | .m:148-186 |

### 1.3 Hook 逐一对比

| # | 类名 | 方法 | 反编译版实现 | MioPlugin 实现 | 对比结论 |
|---|------|------|------------|--------------|---------|
| 1 | `MMUIButton` | `layoutSubviews`（cardBg 路径） | ✅ `FUN_00007b4c` | ✅ `ListCornerRadiusHook.m`（薄分发） | ★ 功能相同——MioPlugin 将两路 Hook 合并为单个薄分发层 |
| 2 | `MMUIButton` | `layoutSubviews`（listCornerRadius 路径） | ✅ `FUN_0000d898` | ✅ `ListCornerRadiusHook.m`（薄分发） | ★ 功能相同——同上，由同一薄分发层统一入口 |
| 3 | `WCTableViewManager` | `tableView:heightForHeaderInSection:` | ✅ `FUN_00008874` | ✅ `ProfileCardBgHook.m` | ★ 功能相同 |
| 4 | `MMUIButton` | `layoutSubviews`（辅助：Label/媒体/QR码） | ❌ 无 | ✅ `WPAuxiliaryHooks.m` | **MioPlugin 独有** |
| 5 | `MMTableViewCell` | `layoutSubviews`（列表圆角） | ✅ `FUN_0000b4cc`（**仅**处理列表圆角，不涉及资料卡） | ✅ `ProfileCardBgHook.m`（独立资料卡 Cell 透明化 Hook） | **架构不同**——反编译版 Cell Hook 仅做列表圆角；MioPlugin 用独立 Cell Hook 做资料卡透明化 |

> 反编译版 4 个 Hook 对应资料卡功能，MioPlugin 全部有对应实现。MioPlugin 额外提供 1 个增强 Hook（WPAuxiliaryHooks）。

---

## 二、配置键与默认值对比

### 2.1 核心开关

| 功能 | 反编译版配置键 | 反编译版默认值 | MioPlugin 配置键 | MioPlugin 默认值 | 结论 |
|------|-------------|-------------|----------------|----------------|------|
| 资料卡背景总开关 | `ProfileCardBackgroundEnabled` | — | `cardBgEnabled` | NO | ★ 相同 |
| 资料卡隐藏 | `ProfileCardHideCard` | — | `cardBgHidden` | NO | ★ 相同 |
| 资料卡高度 | `ProfileCardHeight` | **0** | `cardBgHeight` | **0** | ★ 相同 |
| 资料卡间距 | `ProfileCardSpacing` | **9pt** | `cardBgListSpacing` | **0pt** | ★ 策略不同（见下文） |
| 背景图填充模式 | `ProfileCardBackgroundContentMode` | **0** | `cardBgFillMode` | **0** | ★ 相同 |

### 2.2 背景图配置

| 功能 | 反编译版配置键 | 反编译版默认值 | MioPlugin 配置键 | MioPlugin 默认值 | 结论 |
|------|-------------|-------------|----------------|----------------|------|
| 亮色背景图路径 | `ProfileCardBackgroundLight` | — | `cardBgLightImagePath` | nil | ★ 相同 |
| 暗色背景图路径 | `ProfileCardBackgroundDark` | — | `cardBgDarkImagePath` | nil | ★ 相同 |
| 亮色图层级 | `ProfileCardBackgroundLightLayer` | — | `cardBgLightLayer` | **0** | ★ 相同 |
| 暗色图层级 | `ProfileCardBackgroundDarkLayer` | — | `cardBgDarkLayer` | **0** | ★ 相同 |
| 亮色 X 偏移 | `ProfileCardBackgroundLightXOffset` | **0** | `cardBgLightOffsetX` | **0** | ★ 相同 |
| 暗色 X 偏移 | `ProfileCardBackgroundDarkXOffset` | **0** | `cardBgDarkOffsetX` | **0** | ★ 相同 |
| 亮色 Y 偏移 | `ProfileCardBackgroundLightYOffset` | **0** | `cardBgLightOffsetY` | **0** | ★ 相同 |
| 暗色 Y 偏移 | `ProfileCardBackgroundDarkYOffset` | **0** | `cardBgDarkOffsetY` | **0** | ★ 相同 |
| 亮色对齐 | `ProfileCardBackgroundLightAlignment` | **1**（居中） | `cardBgLightAlignment` | **1**（居中） | ★ 相同 |
| 暗色对齐 | `ProfileCardBackgroundDarkAlignment` | **1**（居中） | `cardBgDarkAlignment` | **1**（居中） | ★ 相同 |

### 2.3 背景色配置

| 功能 | 反编译版配置键 | 反编译版默认值 | MioPlugin 配置键 | MioPlugin 默认值 | 结论 |
|------|-------------|-------------|----------------|----------------|------|
| 资料卡亮色背景 | `CardBackgroundColorLight` | #FFFFFF（whiteColor） | `listCardLightBgColor` | 无默认（可为 nil） | ★ 相同 |
| 资料卡暗色背景 | `CardBackgroundColorDark` | ~#202020 | `listCardDarkBgColor` | 无默认（可为 nil） | ★ 相同 |

### 2.4 圆角/边框配置

| 功能 | 反编译版配置键 | 反编译版默认值 | MioPlugin 配置键 | MioPlugin 默认值 | 结论 |
|------|-------------|-------------|----------------|----------------|------|
| 圆角半径 | `MoreDiscoverListCornerRadius` | **18pt** | `listCellCornerRadius` | **18pt** | ★ 相同 |
| 边框开关 | `ProfileCardBorderEnabled` | — | `listProfileCardBorderEnabled` | NO | ★ 相同 |
| 边框宽度 | `ProfileCardBorderWidth` | **2pt** | `listProfileCardBorderWidth` | **2pt** | ★ 相同 |
| 边框亮色 | `ProfileCardBorderColorLight` | blackColor | `listProfileCardBorderLightColor` | #E5E5E5 | ★ 相同 |
| 边框暗色 | `ProfileCardBorderColorDark` | whiteColor | `listProfileCardBorderDarkColor` | #3A3A3C | ★ 相同 |

### 2.5 其他配置

| 功能 | 反编译版配置键 | 反编译版默认值 | MioPlugin 配置键 | MioPlugin 默认值 | 结论 |
|------|-------------|-------------|----------------|----------------|------|
| Label 宽度禁用 | `DisableLabelWidthAdjustment` | — | `listDisableLabelWidthAdjustment` | NO | ★ 相同 |
| QR码隐藏 | `HideQRCodeButton` | — | `listHideRightQRCode` | NO | ★ 相同 |
| Cell 边距（共享） | `CellHorizontalMargin` | **9pt** | `listCellMargin` | **9pt** | ★ 相同 |

---

## 三、背景图加载对比

### 3.1 图片文件格式

| 维度 | 反编译版 | MioPlugin | 结论 |
|------|---------|-----------|------|
| 动图支持 | GIF（多帧动画） | GIF + 帧动画 | ★ 相同 |
| 静态图片 | JPG | PNG | **格式差异** |
| 文件命名 | `profile_background_light/dark_gif` + `.jpg`回退 | `MioCardBgLight/Dark.gif` + `.png` 回退 | 命名不同 |
| 存储目录 | `Documents/Preferences/WechatEnhance/` | `Documents/MioCardBackground/` | 目录不同 |

### 3.2 异步加载方式

| 维度 | 反编译版 | MioPlugin | 结论 |
|------|---------|-----------|------|
| 队列 | 专用串行队列 `com.wechattweak.backgroundimage`（dispatch_once 创建） | 全局并发队列 `dispatch_get_global_queue(DEFAULT, 0)` | MioPlugin 更标准 |
| 加载函数 | `FUN_00009070`（CGImageSource 读取） | `loadBackgroundImageSync:`（CGImageSource 读取） | ★ 逻辑相同 |
| 主线程回调 | `FUN_00008bbc`（dispatch_async(main_queue)） | `dispatch_async(dispatch_get_main_queue())` | ★ 相同 |
| 弱引用保护 | `_objc_copyWeak` / `_objc_loadWeakRetained` | `__weak UIImageView` / `__strong` 守卫 | ★ 同等效果 |

### 3.3 加载失败处理

| 维度 | 反编译版 | MioPlugin | 结论 |
|------|---------|-----------|------|
| 加载失败回退 | ❌ 无处理 | ✅ 回退到纯色背景（`listCardLightBgColor`/`listCardDarkBgColor`） | **MioPlugin 更优** |
| 图片 nil 时 | 仅 `removeFromSuperview` | 设置纯色背景 | **MioPlugin 更优** |

### 3.4 Tag 复用机制

| 维度 | 反编译版 | MioPlugin | 结论 |
|------|---------|-----------|------|
| Tag 值 | **9998**（亮色）/ **9999**（暗色）— 双 tag 按模式切换 | **999902**（固定值） | **设计差异** |
| 模式切换 | 搜索旧模式 tag → `removeFromSuperview` → 创建新 tag | 搜索固定 tag → 存在则复用 → 不存在则创建 | MioPlugin 更简单 |
| 加载状态标记 | ❌ 无 | ✅ `objc_setAssociatedObject` + `kMioBgLoadedKey` | **MioPlugin 更优** |
| 已加载复用 | 跳过创建（但 frame/contentMode 不更新） | 显式更新 contentMode + frame | **MioPlugin 更优** |

### 3.5 背景图缓存

| 维度 | 反编译版 | MioPlugin | 结论 |
|------|---------|-----------|------|
| ImageView 缓存 | tag 匹配 → 复用/移除 | tag 匹配 + `kMioBgLoadedKey` → 复用更新 | **MioPlugin 更优** |
| ImageView 复用率 | 每次 layoutSubviews 搜索 | 同左 + 加载完成后标记已加载 | 各有优劣 |

---

## 四、背景色/边框/圆角实现对比

### 4.1 背景色

| 维度 | 反编译版 | MioPlugin | 结论 |
|------|---------|-----------|------|
| 设置时机 | `FUN_0000d898` 中，`HideCard==NO` 时始终设置 | `applyProfileCardCorner` 中，**仅 `cardBgEnabled==NO` 时设置** | **架构差异** |
| 背景图启用时的行为 | 背景色 + 背景图**共存** | background → `clearColor`，背景图单独显示 | **反编译版共存，MioPlugin 互斥** |
| 亮暗自适应 | `UIColor colorWithDynamicProvider:` + `traitCollection` | `[config colorFromHex:isDark ? dark : light]` | 反编译版原生动态色 |
| 存储方式 | UIColor → NSKeyedArchiver → NSData | 十六进制字符串（#RRGGBB） | 各有优劣 |
| 默认值 | 亮=whiteColor, 暗=#202020 | 无默认值（可为 nil） | 反编译版有默认值 |

### 4.2 边框

| 维度 | 反编译版 | MioPlugin | 结论 |
|------|---------|-----------|------|
| 开关 | `ProfileCardBorderEnabled` | `listProfileCardBorderEnabled` | ★ 相同 |
| 宽度 | 默认 2pt | 默认 2pt | ★ 相同 |
| 颜色 | 亮暗自适应（blackColor/whiteColor） | 亮暗可配置（#E5E5E5 / #3A3A3C） | MioPlugin 有具体默认色 |
| 实现 | `layer.borderWidth` + `layer.borderColor` | `layer.borderWidth` + `layer.borderColor` | ★ 相同 |
| ContentMode 联动 | ContentMode==3 + bgEnabled 时**整个区块跳过**（含边框） | fillMode==3 + cardBgEnabled 时重置 `cornerRadius=0, masksToBounds=NO` | 效果相同，实现不同 |
| 边框清零 | 不设置边框（仅跳过） | 不启用时显式 `borderWidth=0, borderColor=nil` | MioPlugin 更干净 |

### 4.3 圆角

| 维度 | 反编译版 | MioPlugin | 结论 |
|------|---------|-----------|------|
| 半径配置 | `MoreDiscoverListCornerRadius`（默认 18） | `listCellCornerRadius`（默认 18） | ★ 相同 |
| masksToBounds | ✅ YES（始终设置） | ✅ 同左，但 fillMode==3 时重置为 NO | ★ 基本相同 |
| 圆角方式 | `layer.cornerRadius` | `layer.cornerRadius` | ★ 相同 |
| 分组圆角 | ❌ 全角 | ❌ 全角 | ★ 相同（资料卡无分组需求） |

### 4.4 ContentMode 联动

| 维度 | 反编译版 | MioPlugin | 结论 |
|------|---------|-----------|------|
| ContentMode==3 效果 | 跳过圆角+边框区块 | 重置 cornerRadius=0, masksToBounds=NO | 效果一致 |
| ContentMode 映射 | 0=AspectFill, 1=AspectFit, 2=ScaleToFill, 3=同0 | 0=AspectFill, 1=AspectFit, 2=ScaleToFill, 3=同0 | ★ 相同 |

---

## 五、资料卡高度和间距对比

### 5.1 heightForHeader

| 维度 | 反编译版 `FUN_00008874` | MioPlugin `_hooked_heightForHeader` | 结论 |
|------|------------------------|-------------------------------------|------|
| Section 过滤 | section == 1 | section == 1 | ★ 相同 |
| VC 检查 | ❌ 未检查 | ✅ MoreViewController 校验 | MioPlugin 更安全 |
| 间距追加 | 无条件默认 9pt | `spacing > 0` 时才追加（默认 0） | **MioPlugin 更谨慎** |
| 高度保护 | ❌ 无 | ✅ `result = max(result, customHeight)` | **MioPlugin 独有** |

### 5.2 Button 高度修改

| 维度 | 反编译版 `FUN_00007b4c` | MioPlugin `handleButtonLayout` 方案 H | 结论 |
|------|------------------------|--------------------------------------|------|
| 方式 | 直接 `setFrame:CGRectMake(... height)` | 通过视图链 `button → TextStateProfileTableView → MMUIButton` 修改 | **实现完全不同** |
| 边距同步 | 在高度修改后通过 margin 计算调整 | 在高度修改时同时调整 `origin.x += margin; width -= 2*margin` | **MioPlugin 更完整** |
| Label sizeToFit | ❌ 未与高度修改联动 | ✅ 在高度修改后对 UILabel 调用 sizeToFit | **MioPlugin 独有** |
| 高度条件 | `cardHeight > 0 && currentHeight < cardHeight` | `targetH > 0 && currentHeight < targetH` | ★ 相同 |

---

## 六、资料卡隐藏对比

| 维度 | 反编译版 | MioPlugin | 结论 |
|------|---------|-----------|------|
| 判断条件 | `ProfileCardHideCard == YES` | `cardBgHidden == YES` | ★ 相同 |
| **Cell 层透明化** | **❌ 无**（反编译版不在 Cell 层处理透明化，HideCard 在 Button Hook 中清除 button 背景色） | **✅ handleCellLayout：** cell + contentView + backgroundView + selectedBackgroundView 全透明 | **MioPlugin 有 Cell 透明化，反编译版没有** |
| Cell 层子视图隐藏 | ❌ 不在 Cell 层处理 | ❌ 不在 Cell 层处理（在 Button 层处理） | **相同：都不在 Cell 层操作** |
| 渐变色遮罩 | **✅ 对 UIImageView 设 CardBackgroundColor 遮罩** | ❌ 无 | **反编译版独有** |
| Button 背景色 | `setBackgroundColor:clearColor` + `layer setBackgroundColor:clearColor.CGColor` | `setBackgroundColor:clearColor` | ★ 相同 |
| Button 子视图隐藏 | 遍历全部 subviews，非 UIImageView→hidden，UIImageView 检查 tag，仅 tag=9998/9999 豁免隐藏（bg 保留），其他 UIImageView 也 hidden | 遍历**全部**子视图：`sub.hidden = YES` | **MioPlugin 更彻底，反编译版更精细** |
| 原生背景 ivar | ❌ 不清除 | ✅ `m_bgImageView` → setImage:nil + setHidden:YES + set to nil | **MioPlugin 独有** |
| masksToBounds/cornerRadius/borderWidth | ❌ 不清除 | ✅ 全部重置为 0/NO | **MioPlugin 更彻底** |
| FUN_0000d898 侧 | 仅跳过背景色设置 | ❌ 无第二个 Hook 隐藏 | 反编译版有三处隐藏 |

---

## 七、QR 码隐藏对比

| 维度 | 反编译版 | MioPlugin | 结论 |
|------|---------|-----------|------|
| 识别方式 | `isKindOfClass:[UIButton class]` 或 `[MMUIButton class]` | 类名包含 "Button" + `x > bounds.width * 0.7` | **实现不同** |
| 隐藏方式 | `setHidden:YES` | `setHidden:YES` | ★ 相同 |
| 递归搜索 | ❌ 仅检查直接子视图 | ✅ 递归调用 `hideQRButtonInSubviews:` | **MioPlugin 更彻底** |
| 位置保护 | ❌ 不检查位置 | ✅ 只隐藏 x > 70% 宽度的按钮 | **MioPlugin 更精准** |

---

## 八、Label 宽度调整对比

| 维度 | 反编译版 (`FUN_0000d898`) | MioPlugin (`WPAuxiliaryHooks.m`) | 结论 |
|------|--------------------------|----------------------------------|------|
| 触发条件 | `DisableLabelWidthAdjustment == NO` 且 `!(ContentMode==3 && bgEnabled)` | `listDisableLabelWidthAdjustment == NO` | ★ 相同 |
| 目标类 | MMCPLabel / MMUILabel | 任意 UILabel | MioPlugin 范围更广 |
| 文本检查 | `text.length > 0` | ❌ 不检查 | 反编译版更保守 |
| ContentMode 联动 | 与 ContentMode==3 联动（skip） | ❌ 无 ContentMode 联动 | 反编译版更完整 |

---

## 九、Cell 透明化对比

### 9.1 概述

**反编译版没有 Cell 层透明化处理**，MioPlugin 有：

- **反编译版**：Cell Hook（FUN_0000b4cc）仅处理列表圆角，不透明化 Cell。HideCard 时仅在 Button Hook（FUN_00007b4c）中清除 button 背景色。Cell 自身保持默认白色背景不变
- **MioPlugin**：`handleCellLayout:` 是**独立的资料卡 Cell 透明化 Hook**，在 `cardBgEnabled == YES` 时无条件执行（不论是否启用 hide）

### 9.2 MioPlugin handleCellLayout: 代码

```objc
cell.backgroundColor = [UIColor clearColor];
cell.layer.borderWidth = 0;
cell.layer.masksToBounds = NO;

cell.contentView.backgroundColor = [UIColor clearColor];
cell.contentView.layer.masksToBounds = NO;

cell.backgroundView.backgroundColor = [UIColor clearColor];
cell.backgroundView.hidden = YES;

cell.selectedBackgroundView.backgroundColor = [UIColor clearColor];
```

### 9.3 反编译版：不存在 Cell 透明化代码

反编译版的 Cell Hook（FUN_0000b4cc）中**没有**类似于 MioPlugin 的 Cell 透明化代码。HideCard 透明化实际发生在 **Button Hook（FUN_00007b4c）** 中：

```objc
// FUN_00007b4c（Button Hook）- HideCard 分支
if ([config boolForKey:@"ProfileCardHideCard"]) {
    // 清除 button 背景色（Cell 本身不做透明化）
    [button setBackgroundColor:[UIColor clearColor]];
    [button.layer setBackgroundColor:[UIColor clearColor].CGColor];

    // 检查 subviews[0]
    UIView *first = button.subviews.firstObject;
    if (first &&
        fabs(first.frame.size.width - button.frame.size.width) < 10.0 &&
        fabs(first.frame.size.height - button.frame.size.height) < 10.0) {
        [first setBackgroundColor:[UIColor clearColor]];
        [first.layer setBackgroundColor:[UIColor clearColor].CGColor];
    }
    // ★ 不退出！继续执行：子视图管理 + bg 生命周期
}

// 子视图管理（选择性隐藏/显示）
for (UIView *sub in button.subviews) {
    if ([sub isKindOfClass:[UIImageView class]] &&
        (sub.tag == 9998 || sub.tag == 9999)) {
        continue; // bg 图片保留可见
    }
    sub.hidden = ([config boolForKey:@"ProfileCardHideCard"]) ? YES : NO;
}

// bg 生命周期（始终执行）
UIImageView *bg = [self findBgInButton:button tag:isDark ? 9999 : 9998];
if (!bg) {
    bg = [self createBgInButton:button tag:isDark ? 9999 : 9998];
    [button insertSubview:bg atIndex:(button.subviews.count - 8)];
    // dispatch_async 异步加载
}
```

| 维度 | 反编译版 | MioPlugin |
|------|---------|-----------|
| **是否有透明化** | ✅ 有（在 Button Hook FUN_00007b4c 中清除 button 背景色，**不**透明化 Cell） | ✅ 有（handleCellLayout: 透明化 Cell 全部四层） |
| **透明化对象** | button.backgroundColor + button.layer.backgroundColor | cell + contentView + backgroundView + selectedBackgroundView |
| **透明化层数** | ⭐ 2 层（button + button.layer，均为 Button 层） | ⭐⭐⭐⭐⭐ 4 层（全部 Cell 层） |
| **子视图隐藏** | ✅ 遍历全部 subviews：非 UIImageView → hidden，UIImageView 按 tag 豁免（9998/9999 保留） | ❌ 不在 Cell 层处理（在 Button 层处理） |
| **渐变色遮罩** | ✅ 有 | ❌ 无 |
| **Hook 归属** | Button Hook FUN_00007b4c | 独立 ProfileCardBgHook 模块 |
| **设计哲学** | 最小化：仅清除 button 背景色，Cell 保持默认 | 防御式：始终透明 Cell，解决 all 场景 |

---

## 十、暗色模式检测对比

| 维度 | 反编译版 `FUN_00008a54` | MioPlugin | 结论 |
|------|------------------------|-----------|------|
| 检测方式 | `UIApplication.sharedApplication.connectedScenes → firstObject → traitCollection.userInterfaceStyle` | `vc.traitCollection.userInterfaceStyle`（直接取 button 所在 VC） | 反编译版用 WindowScene，MioPlugin 用 VC |
| 等效性 | ✅ 等效 | ✅ 等效 | ★ 相同 |

---

## 十一、图片加载核心对比

### 11.1 同步加载函数

| 维度 | 反编译版 `FUN_00009070` | MioPlugin `loadBackgroundImageSync:` | 结论 |
|------|-----------------------|--------------------------------------|------|
| 文件查找 | `NSSearchPathForDirectoriesInDomains` + `Preferences/WechatEnhance` | 配置路径优先 → 回退 `MioCardBackground/` 目录 | 路径不同 |
| GIF 单帧 | `CGImageSourceCreateImageAtIndex` + `UIImage imageWithCGImage:` | 同左 | ★ 相同 |
| GIF 多帧 | `NSMutableArray` + `animatedImageWithImages:duration:` | 同左 | ★ 相同 |
| 延迟时间 | `kCGImagePropertyGIFDelayTime` | `kCGImagePropertyGIFDelayTime` + `kCGImagePropertyGIFUnclampedDelayTime` 回退 | MioPlugin 更完整 |
| 静态图片 | `imageWithContentsOfFile:` | `imageWithContentsOfFile:` | ★ 相同 |

### 11.2 异步加载函数

| 维度 | 反编译版 `FUN_00008bbc` | MioPlugin `loadBackgroundImageForImageView:isDark:` | 结论 |
|------|------------------------|----------------------------------------------------|------|
| 背景图创建 | 主线程创建 UIImageView → 设置到 button | 主线程创建 UIImageView → insert at index 0 | ★ 相同 |
| 图片设置 | `setImage:`（主线程回调） | `dispatch_async(main_queue)` → `setImage:` | ★ 相同 |
| Alpha 恢复 | `setAlpha:1.0` | `setAlpha:1.0` + `hidden = NO` | ★ 相同 |
| 偏移计算 | `FUN_00008e48(button, image, isDark)` | 内联计算（基于 fillMode + alignment + offset） | 逻辑相同 |
| 已加载标记 | ❌ 无 | ✅ `objc_setAssociatedObject(button, kMioBgLoadedKey, @YES)` | **MioPlugin 独有** |

---

## 十二、FIX-WHITE 白色视图清理（MioPlugin 独有）

MioPlugin 的 `handleButtonLayout` 中有一个 FIX-WHITE 区块（ProfileCardBgHook.m:464-505），用于隐藏白色背景子视图：

```objc
// 跳过：tag=999902 的背景 imageView、MMHeadImageView、UILabel、MMCPLabel、MMUILabel、TextState*Button、有 tag 的 UIImageView
// 隐藏：DynamicProvider 背景、whiteColor 背景、纯 UIView + 有背景色
```

反编译版 ❌ 无此功能。

---

## 十三、偏移/对齐计算对比

| 维度 | 反编译版 `FUN_00008e48` | MioPlugin 内联计算 | 结论 |
|------|------------------------|-------------------|------|
| X 偏移 | 从配置读取 `*XOffset` | 从配置读取 `*OffsetX` | ★ 相同 |
| Y 偏移 | **读取但丢弃**（返回值固定为 0） | 正常读取并使用 | **MioPlugin 有效** |
| 对齐方式 | 亮暗分别配置，默认 1（居中） | 亮暗分别配置，默认 1（居中） | ★ 相同 |
| 未配置写入 | 写入默认值 1 到 NSUserDefaults | ❌ 不修改配置 | 各有优劣 |
| AspectFill 内边距计算 | ❌ 无 | ✅ 基于 `renderedH - viewH` 计算 overflow，对齐偏移补偿 | **MioPlugin 独有** |

---

## 十四、反编译版独有功能

| 功能 | 说明 | 反编译版实现 |
|------|------|------------|
| 双 tag 模式切换（9998/9999） | 亮暗模式使用不同 tag，模式切换时自动移除旧 imageView | `FUN_00007b4c` lines 9902-9908, 10010-10049 |
| 专用串行队列 | `com.wechattweak.backgroundimage` 通过 dispatch_once 创建 | `FUN_00007b4c` line 9996-9997 |
| ContentMode 位运算映射 | `(value != 2) << 1` 分支逻辑 | `FUN_00007b4c` lines 9928-9932 |
| 默认对齐值写入 | 读取 alignment 为 0 时写入默认值 1 | `FUN_00008e48` line 10310-10312 |

---

## 十五、MioPlugin 独有功能

| 功能 | 说明 | 源文件行号 |
|------|------|----------|
| HEIGHT 方案 H（视图链高度修改） | 通过 `button → TextStateProfileTableView → MMUIButton` 链修改高度 | `ProfileCardBgHook.m:694-747` |
| Cell 透明化 | `handleCellLayout:` 完整清除 Cell 背景 | `ProfileCardBgHook.m:774-830` |
| 图片加载失败回退 | 失败时设置纯色背景 | `ProfileCardBgHook.m:665-686` |
| 原生 `m_bgImageView` ivar 清除 | 通过 runtime 清除微信原生背景 | `ProfileCardBgHook.m:431-440, 452-462` |
| FIX-WHITE 白色视图清理 | 隐藏动态/白色背景的子视图 | `ProfileCardBgHook.m:464-505` |
| 已加载标记 | `kMioBgLoadedKey` 关联对象 | `ProfileCardBgHook.m:512, 598-599, 658-659` |
| 懒注册调度 | `MMUIButton` 首次触发时动态注册 Hook | `ListCornerRadiusHook.m:174-184` |
| Y 偏移有效 | 偏移量真正影响 imageView.frame | `ProfileCardBgHook.m:531, 583` |
| 手势处理关闭 | `userInteractionEnabled = NO` 避免背景图拦截触摸 | `ProfileCardBgHook.m:570` |
| WPLog 分级日志 | 便于调试 | 所有模块 |
| 子视图递归 QR 码隐藏 | 递归搜索所有层级 | `ProfileCardBgHook.m:125-136` |
| 位置保护的 QR 码隐藏 | 只隐藏 x > 70% 宽度的按钮 | `ProfileCardBgHook.m:117` |

---

## 十六、综合评价

| 评价维度 | 反编译版 | MioPlugin | 结论 |
|---------|---------|-----------|------|
| **Hook 数量** | 3 | 5 | MioPlugin 更多 |
| **功能覆盖度** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐⭐ | MioPlugin 更全面（回退/透明化/白视图/原生清除/Y偏移/日志） |
| **代码可读性** | ⭐⭐ | ⭐⭐⭐⭐⭐ | MioPlugin 模块化、命名清晰、注释完整 |
| **背景图加载** | ⭐⭐⭐ | ⭐⭐⭐⭐ | MioPlugin 有失败回退、已加载标记、明确缓存复用 |
| **背景色** | ⭐⭐⭐⭐ | ⭐⭐⭐ | 反编译版原生动态色自动适应；MioPlugin 背景图/背景色互斥 |
| **边框** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ | 基本相同，MioPlugin 有具体默认色 |
| **圆角** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ | 基本相同 |
| **资料卡隐藏** | ⭐⭐ | ⭐⭐⭐⭐⭐ | MioPlugin 全方位清理（子视图全部隐藏、原生 ivar、cornerRadius 重置等） |
| **QR 码隐藏** | ⭐⭐⭐ | ⭐⭐⭐⭐ | MioPlugin 递归 + 位置保护 |
| **高度控制** | ⭐⭐⭐ | ⭐⭐⭐⭐⭐ | MioPlugin 有高度保护 + 方案 H 视图链修改 |
| **性能优化** | ⭐⭐⭐ | ⭐⭐⭐⭐ | MioPlugin 有懒注册、已加载标记、关联对象缓存 |
| **稳定性** | ⭐⭐⭐ | ⭐⭐⭐⭐ | MioPlugin 有 VC 校验、失败回退、weak/strong 保护 |
| **调试** | ⭐ | ⭐⭐⭐⭐⭐ | MioPlugin 有 WPLog 分级日志系统 |
| **配置灵活性** | ⭐⭐⭐⭐ | ⭐⭐⭐⭐ | 双方配置键一一对应，MioPlugin 多出 FIX-WHITE |

---

## 十七、改进建议

### MioPlugin 可补充的反编译版功能：

1. **双 tag 模式切换**：当前 MioPlugin 使用固定 tag=999902，在切换亮暗模式时无法自动清理旧模式背景图。可参考反编译版的双 tag 策略（9998/9999 按模式切换），避免两个模式的背景图叠加

2. **原生动态背景色**：反编译版使用 `UIColor colorWithDynamicProvider:` 实现原生亮暗切换（无需重新读取配置），MioPlugin 当前用 VC 判断 isDark 后手动选择颜色

3. **ContentMode==3 完整跳过**：MioPlugin 当前在 fillMode==3 时仅跳过 masksToBounds/圆角，但边框仍被 applyProfileCardCorner 应用（`listProfileCardBorderEnabled`）。反编译版在 ContentMode==3 + bgEnabled 时**完整跳过整个圆角+边框区块**，边框也不会被设置

4. **默认对齐值写入**：反编译版在 alignment 未配置时写入默认值 1 到 NSUserDefaults

### 反编译版可借鉴 MioPlugin 的优化：

1. **图片加载失败回退**：当前反编译版在图片加载失败时仅 `removeFromSuperview`，无任何视觉反馈

2. **原生 `m_bgImageView` ivar 清除**：通过 runtime 清除微信自带的背景图，避免与自定义背景图叠加

3. **Cell 透明化**：反编译版当前架构（按钮始终有实色背景）下 Cell 透明化非必需。但如果未来参考 MioPlugin 采用"背景图启用时按钮 clearColor"架构，就需要同步实现 Cell 透明化，否则 Cell 默认白色背景会遮挡背景图

4. **FIX-WHITE 白色视图清理**：反编译版未处理 button 上可能存在的白色背景子视图

5. **有效 Y 偏移**：反编译版的 Y 偏移配置被读取但未生效（返回值固定为 0）

6. **UI 手势保护**：`userInteractionEnabled = NO` 避免背景图拦截触摸事件

7. **子视图递归搜索 QR 码**：反编译版仅检查直接子视图

---

## 附录 A：配置键完整对照表

### A.1 背景图

| 反编译版配置键 | MioPlugin 属性 | 默认值（反编译版） | 默认值（MioPlugin） | 一致性 |
|-------------|---------------|----------------|----------------|--------|
| `ProfileCardBackgroundEnabled` | `cardBgEnabled` | — | NO | ✅ |
| `ProfileCardBackgroundLight` | `cardBgLightImagePath` | — | nil | ✅ |
| `ProfileCardBackgroundDark` | `cardBgDarkImagePath` | — | nil | ✅ |
| `ProfileCardBackgroundContentMode` | `cardBgFillMode` | 0 | 0 | ✅ |
| `ProfileCardBackgroundLightLayer` | `cardBgLightLayer` | — | 0 | ✅ |
| `ProfileCardBackgroundDarkLayer` | `cardBgDarkLayer` | — | 0 | ✅ |
| `ProfileCardBackgroundLightXOffset` | `cardBgLightOffsetX` | 0 | 0 | ✅ |
| `ProfileCardBackgroundDarkXOffset` | `cardBgDarkOffsetX` | 0 | 0 | ✅ |
| `ProfileCardBackgroundLightYOffset` | `cardBgLightOffsetY` | 0（但无效） | 0 | ⚠️ 反编译版无效 |
| `ProfileCardBackgroundDarkYOffset` | `cardBgDarkOffsetY` | 0（但无效） | 0 | ⚠️ 反编译版无效 |
| `ProfileCardBackgroundLightAlignment` | `cardBgLightAlignment` | 1（居中） | 1（居中） | ✅ |
| `ProfileCardBackgroundDarkAlignment` | `cardBgDarkAlignment` | 1（居中） | 1（居中） | ✅ |

### A.2 背景色

| 反编译版配置键 | MioPlugin 属性 | 一致性 |
|-------------|---------------|--------|
| `CardBackgroundColorLight` | `listCardLightBgColor` | ✅ |
| `CardBackgroundColorDark` | `listCardDarkBgColor` | ✅ |

### A.3 边框

| 反编译版配置键 | MioPlugin 属性 | 一致性 |
|-------------|---------------|--------|
| `ProfileCardBorderEnabled` | `listProfileCardBorderEnabled` | ✅ |
| `ProfileCardBorderWidth` | `listProfileCardBorderWidth` | ✅ |
| `ProfileCardBorderColorLight` | `listProfileCardBorderLightColor` | ✅ |
| `ProfileCardBorderColorDark` | `listProfileCardBorderDarkColor` | ✅ |

### A.4 其他

| 反编译版配置键 | MioPlugin 属性 | 一致性 |
|-------------|---------------|--------|
| `ProfileCardHeight` | `cardBgHeight` | ✅ |
| `ProfileCardSpacing` | `cardBgListSpacing` | ✅ |
| `ProfileCardHideCard` | `cardBgHidden` | ✅ |
| `HideQRCodeButton` | `listHideRightQRCode` | ✅ |
| `DisableLabelWidthAdjustment` | `listDisableLabelWidthAdjustment` | ✅ |
| `MoreDiscoverListCornerRadius` | `listCellCornerRadius` | ✅ |
| `CellHorizontalMargin` | `listCellMargin` | ✅ |