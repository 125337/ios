# MioPlugin 资料卡背景功能 — 技术文档

> **更新日期**: 2026-06-03 (v37 — 深度分析高度问题根因：高度应在 layoutSubviews 改 button frame，而非 heightForHeader)
> **架构**: ListCornerRadiusHook（薄分发层） + ProfileCardBgHook（独立资料卡模块）

---

## 1. 当前 Bug

### 🔴 Bug M：资料卡高度不生效 / 高度 144 多出一截

**现象**（对照截图）：
- **我们的**（图1）：设置高度 144 → 资料卡和"服务"之间有大段空白，卡片本身大小正常
- **微信优化**（图2）：默认 144 显示正常；改大高度 → 卡片实际变大填满空间

#### 根因：高度修改位置错误

**微信优化的两阶段分离架构**：

| 阶段 | Hook 目标 | 做什么 | 配置项 |
|:----:|:---------:|:------:|:------:|
| **layoutSubviews** | `MMUIButton.layoutSubviews` | 读取 `ProfileCardHeight`，若 >0 且 button.height < 配置值 → **`[button setFrame:]` 改变按钮实际尺寸** | ProfileCardHeight |
| **heightForHeader** | `WCTableViewManager.heightForHeaderInSection:` | 只做 `result += spacing`，**不处理高度** | ProfileCardSpacing |

**反编译铁证**：

**layoutSubviews 中改 button frame**（[L6334-L6346](file:///www/wwwroot/ios/插件/微信优化反编译最新/123456.c#L6334-L6346)）：
```c
// FUN_00007b4c (MMUIButton layoutSubviews hook) 中：
auVar26 = FUN_000c6960(uVar9, ..., &cf_ProfileCardHeight);  // 读取配置
if (0 < (long)auVar26._0_8_) {   // if ProfileCardHeight > 0
    FUN_000c58c0(param_5);        // [button bounds]
    dVar24 = (double)auVar26._0_8_;  // dVar24 = ProfileCardHeight
    if (param_4 < dVar24) {       // if 当前按钮高度 < 配置高度
        FUN_000c58c0(param_5);    // [button bounds]
        FUN_000cb900(param_5);    // ★ [button setFrame:] ← 直接改按钮 frame！
        param_4 = dVar24;         // 更新高度变量供后续使用
    }
}
```

**heightForHeader 中只加间距**（[L6691-L6752](file:///www/wwwroot/ios/插件/微信优化反编译最新/123456.c#L6691-L6752)）：
```c
// FUN_00008874 中：
d8 = orig(self, _cmd, tableView, section);  // 调用原始方法
// ... section==1 && MoreViewController 判断 ...
if (ProfileCardBackgroundEnabled) {
    spacing = ProfileCardSpacing;  // 默认 9
    d8 = d8 + (double)spacing;     // ★ 只加间距，不做高度处理！
}
return d8;
```

**我们当前的错误做法**（[L31-L39](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L31-L39)）：
```objc
// ❌ 错误：在 heightForHeader 中强制最小高度
CGFloat customHeight = config.cardBgHeight;  // 144
if (customHeight > 0 && result < customHeight) {
    result = customHeight;  // 告诉 UITableView 分配更多空间...
}

// ❌ 错误：总是追加间距
CGFloat spacing = config.cardBgListSpacing;  // 9
if (spacing > 0) {
    result += spacing;  // ...但 button 本身没变大！
}
```

#### 为什么会出问题

```
UITableView 分配 header 空间（由 heightForHeader 返回值决定）
├── 我们的做法：
│   ├── heightForHeader 返回 original + 9(spacing) [+ 可能强制144]
│   └── handleButtonLayout：button.frame 保持原样不变
│   结果：button(原高) + 空白间隙 = 总高度 ✗ 多余空白！
│
└── 微信优化的做法：
    ├── layoutSubviews：button.frame.height = max(当前, ProfileCardHeight) ← 按钮实际变大
    └── heightForHeader 返回 original + spacing ← 只追加间距
    结果：button(已放大) + 间距 = 总高度 ✓ 无多余空白
```

**具体到两个现象的解释**：

1. **高度 144 多出一截**：默认情况下 original header 高度可能已经 ≥ 144（比如 150pt），所以 `result < 144` 不触发。但 `spacing=9` 始终执行 → `result = 150 + 9 = 159pt`。button 保持 150pt → 底部 9pt 空白。
2. **改高度像间距**：设 cardBgHeight=200 时，`heightForHeader` 返回 max(original, 200) + 9 = 209pt。但 button 仍保持 original 大小（如 150pt）→ 59pt 全是空白，看起来像"加了很大的间距"。

#### 修复方案

**步骤 1**：从 `_hooked_heightForHeader` 中移除 customHeight 逻辑，只保留 spacing

```objc
static double _hooked_heightForHeader(id self, SEL _cmd, id tableView, long long section) {
    double result = _orig_heightForHeader(self, _cmd, tableView, section);

    PluginConfig *config = [PluginConfig shared];
    if (!config.cardBgEnabled) return result;

    if (section != 1) return result;

    UIResponder *responder = [tableView nextResponder];
    UIViewController *vc = nil;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            vc = (UIViewController *)responder;
            break;
        }
        responder = [responder nextResponder];
    }
    if (!vc || ![NSStringFromClass([vc class]) isEqualToString:@"MoreViewController"]) {
        return result;
    }

    // ★ 只加间距，不做高度处理（高度在 layoutSubviews 中处理）
    CGFloat spacing = config.cardBgListSpacing;
    if (spacing > 0) {
        result += spacing;
    }

    WPLog(@"CardBg-Diag", @"[HEIGHT-FOR-HEADER] section=%lld, result=%.1f, spacing=%.1f",
          section, result, spacing);

    return result;
}
```

**步骤 2**：在 `handleButtonLayout` 的背景图分支末尾、`APPLY_CORNER:` 标签之前，添加 button 高度调整

```objc
// ★ 在 APPLY_CORNER: 标签之前添加（约 L664 行）
// 资料卡高度调整（与微信优化一致：在 layoutSubviews 中改 button frame）
{
    CGFloat customHeight = config.cardBgHeight;
    if (customHeight > 0 && button.frame.size.height < customHeight) {
        CGRect f = button.frame;
        f.size.height = customHeight;
        button.frame = f;
        WPLog(@"CardBg-Diag", @"[CARD-HEIGHT] %.0f → %.0f",
              button.frame.size.height, customHeight);
    }
}

APPLY_CORNER:
```

**注意**：之前 Bug C（watchdog 卡死）是因为直接在 layoutSubviews 中无条件改 height 触发了布局循环。现在的方案有守卫条件 `button.frame.size.height < customHeight`，只在需要放大时才改，不会触发循环。

---

### 🔴 Bug L：分支A缺少 alignment 偏移计算

**现状**：异步回调（分支B）中已正确计算 alignment 偏移并修改 `frame.origin.y`，但分支A（已存在且已加载的背景图）只设了 `offsetY`（用户配置偏移），没有加 `alignmentOffset`。

**问题定位**：[L530](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L530)

```objc
// 分支A 当前代码：
existingBgImg.frame = CGRectMake(offsetX, offsetY, imgW, imgH);
//                                  ✅        ❌ 缺少 alignmentOffset
```

**影响**：用户切换对齐方式后，需重新进入"我"页面才能生效。

**修复方案**：在分支A中复用 alignment 偏移计算逻辑

```objc
// 在分支A的 L519-L530 之间插入：
NSInteger fillMode = config.cardBgFillMode;
NSInteger alignment = isDark ? config.cardBgDarkAlignment : config.cardBgLightAlignment;
CGFloat offsetY = isDark ? config.cardBgDarkOffsetY : config.cardBgLightOffsetY;

CGFloat alignmentOffset = 0;
if ((fillMode == 0 || fillMode == 3) && existingBgImg.image &&
    existingBgImg.image.size.width > 0) {
    CGFloat iW = existingBgImg.image.size.width;
    CGFloat iH = existingBgImg.image.size.height;
    CGFloat vW = button.bounds.size.width;
    CGFloat vH = button.bounds.size.height;

    CGFloat scale = vW / iW;
    CGFloat renderedH = iH * scale;
    CGFloat overflow = renderedH - vH;

    if (overflow > 0) {
        switch (alignment) {
            case 0:  alignmentOffset = -overflow / 2.0; break;
            case 2:  alignmentOffset = overflow / 2.0;  break;
            default: alignmentOffset = 0;                break;
        }
    }
}

existingBgImg.frame = CGRectMake(offsetX, offsetY + alignmentOffset, imgW, imgH);
```

---

## 2. 已修复 Bug

| Bug | 说明 |
|-----|------|
| ✅ A-D | position 语义拆分 / case 0 边框 / skipMasksToFit 守卫 / masksToBounds 顺序 |
| ✅ H | 背景图 frame 高度 1704pt → 改用 button.bounds |
| ✅ I | fillMode contentMode 映射反了 → 修正映射 + fillMode=3 跳过圆角 |
| ✅ J | 对齐方式改用 frame.origin.y 移动 + clipsToBounds=NO + 异步回调计算 alignment 偏移 |
| ✅ K | 间距 Hook 改为 `WCTableViewManager.tableView:heightForHeaderInSection:` |
| ✅ UI | alignment 映射统一为 0=底部 1=居中 2=顶部（与微信优化一致） |

---

## 3. 待修复汇总

| 优先级 | Bug | 改动量 | 方案 |
|:------:|:---:|:-----:|------|
| **P0** | **M** 资料卡高度不生效 | ~10 行 | height 移入 `handleButtonLayout` 改 button frame，heightForHeader 只保留 spacing |
| **P1** | **L** 分支A缺少 alignment 偏移 | ~15 行 | 分支A复用 alignment 偏移计算 |
| **P2** | **G** 折叠置顶逻辑丢失 | ~12 行 | wp_applyStandardCorner 中插入折叠检测 |

---

## 4. 微信优化高度处理的完整流程

```
用户设置 ProfileCardHeight = 200, ProfileCardSpacing = 9

┌─ layoutSubviews (MMUIButton hook) ─────────────────────────────┐
│ 1. 找到 MMHeadImageView → 确认是资料卡                          │
│ 2. 读取 ProfileCardHeight = 200                                 │
│ 3. button.height 当前 = 150                                     │
│ 4. 150 < 200 → [button setFrame:(x, y, w, 200)]  ← 按钮变大了! │
│ 5. 后续用 param_4=200 计算背景图 frame                           │
└──────────────────────────────────────────────────────────────────┘
                              ↓
┌─ heightForHeaderInSection: (WCTableViewManager hook) ───────────┐
│ 1. orig → 原始 header 高度（如 150）                            │
│ 2. section==1 && MoreViewController ✓                           │
│ 3. 读取 ProfileCardSpacing = 9                                  │
│ 4. return 150 + 9 = 159                                         │
└──────────────────────────────────────────────────────────────────┘

最终效果：
  button 实际高度 = 200pt（由 layoutSubviews 控制）
  header 分配空间 = 159pt（由 heightForHeader 控制）
  → button 超出 header 的部分被裁剪？不，header 会自适应 button 尺寸
  → 或者：heightForHeader 的返回值 >= button.height 才不会截断
  → 所以实际上 WeChat 的 heightForHeader 返回值应该 >= ProfileCardHeight
```

**关键理解**：`heightForHeaderInSection:` 的返回值决定了 UITableView 给 header 分配多少空间。如果这个值小于 button 的实际高度，button 会被截断。所以微信优化的逻辑是：
- `layoutSubviews` 把 button 撑大到 `ProfileCardHeight`
- `heightForHeaderInSection:` 返回 `original + spacing`，其中 `original` 是微信自己计算的（通常 >= button 需要的高度）

如果用户设置的 `ProfileCardHeight` 很大（如 300），而 `original + spacing` 只有 160，那 button 会被截断。但微信优化的 `FUN_00008874` 不处理这种情况——它假设 `original` 已经足够大，或者 UITableView 会在 layout 之后重新计算。

**对我们的启示**：稳妥的做法是在 `handleButtonLayout` 中改 button frame，同时在 `_hooked_heightForHeader` 中也确保返回值足够大（取 `max(result, cardBgHeight)` + spacing）。这样既保证 button 能完整显示，又保证间距正确。

---

## 5. alignment 偏移计算原理

### 核心机制：clipsToBounds = NO + frame.origin.y 移动

```
imageView.clipsToBounds = NO   ← 图片可以溢出 imageView 的 frame
button.masksToBounds = YES     ← button 裁剪溢出部分

AspectFill 模式下：
  图片高度 > imageView 高度时，图片上下各溢出 overflow/2
  默认（居中）：图片上下均等溢出，显示中间部分
  移动 frame.origin.y → 改变图片在 button 内的可见区域
```

图示（button 高 100pt，AspectFill 后图片高 200pt，overflow=100pt）：

```
居中（origin.y = 0）：
  图片范围：y=-50 到 y=150 → 裁剪后可见像素 50~150 ✅ 居中

顶部对齐（origin.y = +50）：
  图片范围：y=0 到 y=200 → 裁剪后可见像素 0~100 ✅ 顶部

底部对齐（origin.y = -50）：
  图片范围：y=-100 到 y=100 → 裁剪后可见像素 100~200 ✅ 底部
```

### 计算公式

```objc
CGFloat scale = viewW / imgW;           // AspectFill 缩放比
CGFloat renderedH = imgH * scale;       // 渲染高度
CGFloat overflow = renderedH - viewH;   // 垂直溢出量

if (overflow > 0) {
    switch (alignment) {
        case 0:  alignmentOffset = -overflow / 2.0; break;  // 底部：上移
        case 2:  alignmentOffset =  overflow / 2.0; break;  // 顶部：下移
        default: alignmentOffset = 0;                break;  // 居中：不动
    }
}
frame.origin.y = userOffsetY + alignmentOffset;
```

---

## 6. 视图层级

```
MoreViewController
└── WCTableViewManager (m_tableViewMgr)
      ├── tableView:heightForRowAtIndexPath:  ← 普通设置行高度
      ├── tableView:heightForHeaderInSection: ← 只控制间距（section 1）
      └── UITableView
            ├── Section 0: 其他内容
            ├── Section 1:
            │   ├── Header ← 资料卡（MMTableViewCell 作为 headerView）
            │   │   └── contentView → MMUIButton (★ layoutSubviews 中改 frame.height)
            │   │       ├── UIImageView tag=999902 (bgImageView)
            │   │       │   ├── clipsToBounds = NO
            │   │       │   ├── contentMode = AspectFill
            │   │       │   └── frame.origin.y ← alignment 控制
            │   │       └── MMHeadImageView (头像)
            │   └── Cells: 服务、收藏、朋友圈...
            └── Section 2+: 更多设置项
```

---

## 7. 配置项说明

| 配置项 | 类型 | 默认值 | 状态 | 说明 |
|:------:|:-----:|:------:|:---:|------|
| `cardBgEnabled` | BOOL | NO | ✅ | 总开关 |
| `cardBgHidden` | BOOL | NO | ✅ | 隐藏卡片内容 |
| `cardBgFillMode` | NSInteger | 0 | ✅ | 0=AspectFill 1=AspectFit 2=ScaleToFill 3=AspectFill+无圆角 |
| `cardBgLight/DarkImagePath` | NSString* | nil | ✅ | 背景图路径 |
| `cardBgLight/DarkAlignment` | NSInteger | 0 | ✅ | 垂直对齐 0=底部 1=居中 2=顶部 |
| `cardBgLight/DarkLayer` | NSInteger | 0 | ✅ | 图层位置 0=底层 1=顶层 |
| `cardBgLight/DarkOffsetX` | CGFloat | 0 | ✅ | X 偏移 |
| `cardBgLight/DarkOffsetY` | CGFloat | 0 | ✅ | Y 偏移（alignment 偏移在此基础上叠加） |
| `cardBgHeight` | CGFloat | 144 | ⚠️ | 应在 layoutSubviews 改 button frame，非 heightForHeader |
| `cardBgListSpacing` | CGFloat | 9 | ✅ | 通过 heightForHeaderInSection: Hook 生效 |

---

## 8. 历史踩坑记录

| # | 问题 | 根因 | 解决方式 |
|:-:|:-----|:-----|:---------|
| A | 图片文件不存在 | 用户未保存背景图 | picker 保存后文件存在 |
| B | 白色 UIView 遮挡 bgImageView | UIDynamicProviderColor 白色板 | FIX-WHITE 遍历隐藏 |
| C | 点"我"卡死 watchdog | setFrame: height 触发循环 | 加守卫条件 `current < customHeight` 才改 |
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
| O | fillMode 效果与微信优化不同 | contentMode 映射反了 + fillMode=3 缺跳过圆角 | 修正映射 + fillMode=3 跳过圆角 |
| P | 对齐方式始终居中 | contentsRect 裁剪方式不对 | 改用 frame.origin.y 移动 + clipsToBounds=NO |
| Q | 间距/高度不生效 | Hook 了 cellHeightFor: 而非 heightForHeaderInSection: | Hook WCTableViewManager 的 heightForHeaderInSection: |
| R | 分支A切换对齐不生效 | 分支A只设 offsetY 没加 alignmentOffset | 分支A复用 alignment 偏移计算 |
| **S** | **高度144多一截 / 改高度像间距** | **高度写在 heightForHeader 而非 layoutSubviews** | **高度移入 handleButtonLayout 改 button frame，heightForHeader 只留 spacing** |
