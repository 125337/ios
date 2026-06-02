# MioPlugin 资料卡背景功能 — 技术文档

> **更新日期**: 2026-06-03 (v26 — fillMode 效果差异根因确认)
> **架构**: ListCornerRadiusHook（薄分发层） + ProfileCardBgHook（独立资料卡模块）

---

## 1. 当前 Bug

### 🔴 Bug I：fillMode 效果与微信优化完全不同 — 待修复

**现象**：
- fillMode=0（拉伸）：图片变形拉伸，微信优化中不会
- fillMode=2（填充）：图片被裁剪位置不对
- fillMode=3（顶部填充）：效果完全不同

**位置**：[ProfileCardBgHook.m L499-L504](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L499-L504)

#### 根因 1：contentMode 映射错误

当前代码的映射：

```objc
// ❌ 当前 MioPlugin 映射
switch (fillMode) {
    case 1: btnBgImg.contentMode = UIViewContentModeScaleAspectFit; break;
    case 2: btnBgImg.contentMode = UIViewContentModeScaleAspectFill; break;
    default: btnBgImg.contentMode = UIViewContentModeScaleToFill; break;  // fillMode=0,3
}
```

微信优化的映射（[123456.c L6550-L6555](file:///www/wwwroot/ios/插件/微信优化反编译最新/123456.c#L6550-L6555)）：

```c
lVar11 = (ulong)(ContentMode != 2) << 1;  // 默认值：≠2 → 2
if (ContentMode == 1) {
    lVar11 = 1;  // ==1 → 1
}
[imageView setContentMode:lVar11];
```

**微信优化的真实映射表**：

| 用户配置 ContentMode | 计算过程 | 实际 UIViewContentMode | 视觉效果 |
|:---:|:---:|:---:|:---:|
| 0（拉伸） | `0≠2 → 1<<1 = 2` | **ScaleAspectFill** | 等比填充裁剪 |
| 1（适应） | `1==1 → 1` | **ScaleAspectFit** | 等比适应留白 |
| 2（填充） | `2==2 → 0<<1 = 0` | **ScaleToFill** | 拉伸变形填满 |
| 3（顶部） | `3≠2 → 1<<1 = 2` | **ScaleAspectFill** | 等比填充裁剪 |

**对比**：

| 用户配置 | MioPlugin 当前 | 微信优化 | 差异 |
|:---:|:---:|:---:|:---:|
| 0（拉伸） | ScaleToFill（变形拉伸） | **ScaleAspectFill**（等比裁剪） | ❌ 完全不同 |
| 1（适应） | ScaleAspectFit | ScaleAspectFit | ✅ 一致 |
| 2（填充） | ScaleAspectFill（等比裁剪） | **ScaleToFill**（变形拉伸） | ❌ 完全反了 |
| 3（顶部） | ScaleToFill（变形拉伸） | **ScaleAspectFill**（等比裁剪） | ❌ 完全不同 |

**结论**：fillMode=0 和 fillMode=2 的映射**完全反了**，fillMode=3 也映射错了。

#### 根因 2：fillMode=3 的特殊行为不完整

微信优化中 fillMode=3 有**三个特殊行为**，MioPlugin 只实现了一个：

| 特殊行为 | 微信优化 | MioPlugin 当前 |
|---------|---------|:---:|
| ① contentMode = ScaleAspectFill | ✅ | ❌ 用了 ScaleToFill |
| ② 背景图不受 margin 影响（全宽） | ✅ | ✅ 已实现 |
| ③ **跳过圆角 + masksToBounds** | ✅ | ❌ 仍然设了圆角和 masksToBounds |

**微信优化 L9682 的关键判断**：

```c
// uVar1 = (ContentMode==3) ? cardBgEnabled : 0
if ((uVar1 & 1) == 0) {  // fillMode≠3 或 cardBgEnabled=NO 时
    // 设置圆角
    [self.layer setCornerRadius:radius];
    [self.layer setMasksToBounds:YES];
    // 设置边框...
}
// fillMode==3 且 cardBgEnabled=YES 时 → 跳过圆角和 masksToBounds
```

**为什么 fillMode=3 要跳过 masksToBounds**：
- fillMode=3 的目的是让背景图**溢出卡片边界**（顶部填充，覆盖整个 Cell 区域）
- 如果 `masksToBounds=YES`，背景图会被裁剪到 MMUIButton 的 bounds 内，无法溢出
- 微信优化中 fillMode=3 的背景图是**全宽**的（不受 margin 影响），且**不被圆角裁剪**

#### 根因 3：fillMode=3 时 Cell 透明化不完整

微信优化在 Cell Hook 中，当 fillMode=3 时会做额外的透明化处理：

```c
// Cell Hook 中（L6385-L6413）
// 遍历 Cell 的子视图，对非 MMHeadImageView 的子视图：
// 1. [subview setFrame:...]  → 清除 frame（让内容不遮挡背景）
// 2. [subview setBackgroundColor:[UIColor clearColor]]  → 透明背景
// 3. [cell setBackgroundColor:[UIColor clearColor]]  → Cell 透明
```

MioPlugin 的 `handleCellLayout:` 已经做了 Cell 透明化（`cellView.backgroundColor = clearColor` + `cellView.layer.masksToBounds = NO`），但**没有处理 MMUIButton 上的子视图透明化**。

---

## 2. 修复方案

### 修复 1：contentMode 映射（[L499-L504](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L499-L504)）

```objc
// ✅ 修正后的映射（与微信优化一致）
NSInteger fillMode = config.cardBgFillMode;
switch (fillMode) {
    case 1: btnBgImg.contentMode = UIViewContentModeScaleAspectFit; break;
    case 2: btnBgImg.contentMode = UIViewContentModeScaleToFill; break;
    default: btnBgImg.contentMode = UIViewContentModeScaleAspectFill; break;
    // fillMode=0 和 fillMode=3 都用 ScaleAspectFill
}
```

### 修复 2：fillMode=3 跳过圆角和 masksToBounds

在 `APPLY_CORNER` 区域（约 [L596-L597](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L596-L597)），已有 `skipMasksToBounds` 逻辑：

```objc
BOOL skipMasksToBounds = (config.cardBgEnabled && config.cardBgFillMode == 3);
button.layer.masksToBounds = skipMasksToBounds ? NO : YES;
```

但**圆角也需要跳过**。当前代码在 `skipMasksToBounds=YES` 时仍然设置了 `cornerRadius`，需要同步跳过：

```objc
if (!skipMasksToBounds) {
    button.layer.cornerRadius = radius;
    button.layer.masksToBounds = YES;
} else {
    button.layer.cornerRadius = 0;
    button.layer.masksToBounds = NO;
}
```

### 修复 3：分支A 中的 contentMode 也需要更新

[L477-L488](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L477-L488) 分支A（已存在 bgImageView）中，如果用户切换了 fillMode，contentMode 不会更新。需要在分支A 中也设置 contentMode：

```objc
// 分支A：更新 frame + contentMode
if (existingBgImg != nil && alreadyLoaded) {
    // 更新 contentMode
    NSInteger fillMode = config.cardBgFillMode;
    switch (fillMode) {
        case 1: existingBgImg.contentMode = UIViewContentModeScaleAspectFit; break;
        case 2: existingBgImg.contentMode = UIViewContentModeScaleToFill; break;
        default: existingBgImg.contentMode = UIViewContentModeScaleAspectFill; break;
    }
    // 更新 frame
    ...
}
```

---

## 3. 微信优化 fillMode 完整行为对照表

### 3.1 fillMode=0（拉伸/缩放填充）

| 行为 | 微信优化 | MioPlugin 应实现 |
|------|---------|----------------|
| contentMode | **ScaleAspectFill** | ScaleAspectFill |
| 圆角 | 有 | 有 |
| masksToBounds | YES | YES |
| 受 margin 影响 | 是（width -= margin*2） | 是 |
| 视觉效果 | 图片等比填充，超出部分被圆角裁剪 | 同左 |

### 3.2 fillMode=1（适应/等比适应）

| 行为 | 微信优化 | MioPlugin 应实现 |
|------|---------|----------------|
| contentMode | **ScaleAspectFit** | ScaleAspectFit |
| 圆角 | 有 | 有 |
| masksToBounds | YES | YES |
| 受 margin 影响 | 是 | 是 |
| 视觉效果 | 图片完整显示，可能有留白区域 | 同左 |

### 3.3 fillMode=2（填充/拉伸填充）

| 行为 | 微信优化 | MioPlugin 应实现 |
|------|---------|----------------|
| contentMode | **ScaleToFill** | ScaleToFill |
| 圆角 | 有 | 有 |
| masksToBounds | YES | YES |
| 受 margin 影响 | 是 | 是 |
| 视觉效果 | 图片拉伸变形填满整个区域 | 同左 |

### 3.4 fillMode=3（顶部填充/特殊模式）

| 行为 | 微信优化 | MioPlugin 应实现 |
|------|---------|----------------|
| contentMode | **ScaleAspectFill** | ScaleAspectFill |
| 圆角 | **❌ 无**（跳过） | 无 |
| masksToBounds | **❌ NO**（跳过） | NO |
| 受 margin 影响 | **❌ 否**（全宽） | 否 |
| Cell 透明化 | Cell+子视图全透明 | Cell 透明 |
| 视觉效果 | 背景图等比填充，溢出卡片边界，不被裁剪 | 同左 |

---

## 4. 视图层级

```
MMUITableViewCell (Cell Hook)
├── layer.cornerRadius = 18          ← 列表圆角
├── layer.masksToBounds = YES (普通) / NO (资料卡+卡片背景)
├── backgroundColor = 自定义色 (普通) / clearColor (资料卡+卡片背景)
│
└── contentView
    └── MMUIButton (ProfileCardBgHook)
        ├── layer.cornerRadius = 18      ← 资料卡圆角 (fillMode≠3)
        ├── layer.cornerRadius = 0       ← fillMode=3 时不设圆角
        ├── layer.masksToBounds = YES    ← fillMode≠3
        ├── layer.masksToBounds = NO     ← fillMode=3
        ├── backgroundColor = clearColor (卡片开) / 自定义色 (卡片关)
        ├── [0] UIImageView tag=999902   ← bgImageView
        ├── [1] UIView (DynamicProvider) ← hidden by FIX-WHITE
        └── MMHeadImageView             ← 头像
```

---

## 5. 配置项说明

| 配置项 | 类型 | 默认值 | 所属功能 |
|:------:|:-----:|:------:|:--------:|
| `listCornerRadiusEnabled` | BOOL | NO | 列表圆角 |
| `listCellCornerRadius` | CGFloat | 18 | 列表圆角 |
| `listCellMargin` | CGFloat | 0 | 列表圆角 |
| `listCellBorder` | BOOL | NO | 列表圆角 |
| `listCellBorderWidth` | CGFloat | 1.0 | 列表圆角 |
| `cardBgEnabled` | BOOL | NO | 资料卡背景 |
| `cardBgHidden` | BOOL | NO | 资料卡背景 (HideCard) |
| `cardBgFillMode` | NSInteger | 0 | 0=缩放填充(AspectFill) 1=等比适应(AspectFit) 2=拉伸填充(ScaleToFill) 3=顶部填充(AspectFill+无圆角) |
| `cardBgLight/DarkImagePath` | NSString* | nil | 资料卡背景 |
| `listCardLight/DarkBgColor` | NSString* | nil | 资料卡背景色 |

---

## 6. 历史踩坑记录

| # | 问题 | 根因 | 解决方式 |
|:-:|:-----|:-----|:---------|
| A | 图片文件不存在 | 用户未保存背景图 | picker 保存后文件存在 |
| B | 白色 UIView 遮挡 bgImageView | UIDynamicProviderColor 白色板 | FIX-WHITE 遍历隐藏 |
| C | 点"我"卡死 watchdog | setFrame: height 触发循环 | 移除 height 修改 |
| D | 第二次 orig 覆盖 | if 块内外各调一次 orig | 标志位模式 |
| E | v13 过渡期圆角边距全丢 | early return 跳过通用代码 | 删除 early return |
| F | 圆角不裁剪 | Cell 层 masksToBounds=NO | 改 MMUIButton 层做圆角 |
| G | bgImageView 全宽无边距 | margin 在 orig 之后 | margin 移到 orig 之前 |
| H | 普通 Cell 白底丢失 | needsCardBgTransparency 条件过宽 | 增加 isProfileCardCell 判断 |
| I | 只开卡片背景全部 Cell 加圆角 | 入口"或"关系无二次守卫 | 重构为独立模块 |
| J | 关闭卡片背景资料卡无圆角 | early return 返回过早 | 删除 return |
| K | position 语义错位 + 缺 case 0 | 一变量两用语义冲突 | 拆为 cornerType + borderType |
| L | skipMasksToFit 无守卫 | 只看 fillMode 没看 cardBgEnabled | 加 && config.cardBgEnabled |
| M | masksToBounds 覆盖 | handleCellLayout 在 masksToBounds=YES 之前 | 交换执行顺序 |
| N | 背景图 frame 高度 1704pt | superview.superview 不是 Cell | 改用 button.bounds |
| **O** | **fillMode 效果与微信优化不同** | **contentMode 映射反了 + fillMode=3 缺少跳过圆角** | **修正映射 + fillMode=3 跳过圆角** |
