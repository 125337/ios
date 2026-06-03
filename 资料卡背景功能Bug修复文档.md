# MioPlugin 资料卡背景功能 — 技术文档

> **更新日期**: 2026-06-03 (v38 — 修正高度方案：layoutSubviews + heightForHeader 双管齐下)
> **架构**: ListCornerRadiusHook（薄分发层） + ProfileCardBgHook（独立资料卡模块）

---

## 1. 当前 Bug

### 🔴 Bug M：资料卡高度 — 需两处协同修改

**现象演进**：

| 版本 | 现象 | 根因 |
|:----:|:-----|:-----|
| v37 前 | 高度不生效 / 多出空白间距 | 高度写在 heightForHeader 但 button 没变大 |
| v37 后 | 卡片变大了但**覆盖下面 cell** | button 变大了但 heightForHeader 没同步增大返回值 |
| **目标** | 卡片变大 + 正常间距 + 不覆盖 | **两处都需要处理高度** |

#### 根因分析

```
UITableView header 布局机制：
  heightForHeader 返回值 → 决定 UITableView 给 header 分配多少空间
  button.frame.height   → 决定按钮实际多大

  如果 返回值 < button.height → button 超出分配空间 → 覆盖下面 cell ✗
  如果 返回值 > button.height → 分配空间有多余 → 出现空白间隙 ✗
  如果 返回值 == button.height → 刚好 ✓
  如果 返回值 == button.height + spacing → 有间距 ✓
```

**当前代码的问题**（[L10-L41](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L10-L41)）：

```objc
// heightForHeader 中：只加 spacing，未保证 ≥ cardBgHeight
result = orig(...);           // 比如 150
result += spacing;            // 150 + 9 = 159
return result;                // ← 返回 159

// handleButtonLayout 中：button 被撑大到 200
button.frame.height = 200;    // ← 实际 200

// 结果：159 < 200 → 超出 41pt → 覆盖下面 cell ✗
```

#### 微信优化为什么不需要在 heightForHeader 中加高度？

反编译显示微信优化的 `FUN_00008874` 确实只做了 `result += spacing`。推测原因：

- 微信的 `orig(self, _cmd, tableView, section)` 返回的原始高度可能**已经考虑了内容尺寸**
- 当 layoutSubviews 改了 button frame 后，UITableView 可能在下一轮布局中重新调用 `heightForHeader:`，此时 orig 返回值已更新
- 或者微信的 header view 使用了 `sizeThatFits:` / auto-layout，UITableView 会自动根据内容调整

**我们的情况不同**：我们手动改 frame 是"外力干预"，UITableView 不知道 button 变大了，不会自动重新计算。所以我们必须在 `heightForHeader` 中显式保证返回值够大。

#### 修复方案：双管齐下

**步骤 1**：`_hooked_heightForHeader` 中同时保证高度和间距

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

    // ★ ① 保证空间 ≥ 自定义高度（防止 button 被截断或覆盖其他 cell）
    CGFloat customHeight = config.cardBgHeight;
    if (customHeight > 0 && result < customHeight) {
        result = customHeight;
    }

    // ★ ② 追加间距
    CGFloat spacing = config.cardBgListSpacing;
    if (spacing > 0) {
        result += spacing;
    }

    WPLog(@"CardBg-Diag", @"[HEIGHT-FOR-HEADER] section=%lld, result=%.1f, height=%.1f, spacing=%.1f",
          section, result, customHeight, spacing);

    return result;
}
```

**步骤 2**：`handleButtonLayout` 中改 button frame（保持不变）

```objc
// 在 APPLY_CORNER: 标签之前
{
    CGFloat customHeight = config.cardBgHeight;
    if (customHeight > 0 && button.frame.size.height < customHeight) {
        CGRect f = button.frame;
        f.size.height = customHeight;
        button.frame = f;
    }
}
APPLY_CORNER:
```

**数据流验证**（假设 original=150, cardBgHeight=200, spacing=9）：

```
① heightForHeader: result = max(150, 200) + 9 = 209  → UITableView 分配 209pt
② layoutSubviews:  button.height = max(当前, 200) = 200  → 按钮 200pt
③ 最终：209pt 空间 - 200pt 按钮 = 9pt 间距 ✓ 无覆盖、无空白溢出
```

---

### 🔴 Bug L：分支A缺少 alignment 偏移计算

**问题定位**：[L530](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m#L530)

分支A 只设了 `offsetY`，没有加 `alignmentOffset`。用户切换对齐方式后需重新进入页面才生效。

**修复方案**：在分支A复用 alignment 偏移计算逻辑（详见 v37 文档，此处不再重复）

---

## 2. 已修复 Bug

| Bug | 说明 |
|-----|------|
| ✅ A-D | position 语义拆分 / case 0 边框 / skipMasksToFit 守卫 / masksToBounds 顺序 |
| ✅ H | 背景图 frame 高度 1704pt → 改用 button.bounds |
| ✅ I | fillMode contentMode 映射反了 → 修正映射 + fillMode=3 跳过圆角 |
| ✅ J | 对齐方式改用 frame.origin.y 移动 + clipsToBounds=NO + 异步回调计算 alignment 偏移 |
| ✅ K | 间距 Hook 改为 `WCTableViewManager.tableView:heightForHeaderInSection:` |
| ✅ UI | alignment 映射统一为 0=底部 1=居中 2=顶部 |

---

## 3. 待修复汇总

| 优先级 | Bug | 改动量 | 方案 |
|:------:|:---:|:-----:|------|
| **P0** | **M** 高度覆盖下面 cell | ~3 行 | heightForHeader 加回 `max(result, cardBgHeight)` |
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
│ 4. 150 < 200 → [button setFrame:(x,y,w,200)]  ← 按钮变大了!    │
│ 5. 后续用 param_4=200 计算背景图 frame                           │
└──────────────────────────────────────────────────────────────────┘
                              ↓
┌─ heightForHeaderInSection: (WCTableViewManager hook) ───────────┐
│ 1. orig → 原始 header 高度                                     │
│ 2. section==1 && MoreViewController ✓                           │
│ 3. result += spacing(9)                                         │
│ 4. return result                                               │
│                                                                 │
│ ★ 微信优化的 orig 可能已包含内容高度，或 UITableView 自动重算      │
│ ★ 我们必须显式保证 result >= cardBgHeight                       │
└──────────────────────────────────────────────────────────────────┘
```

---

## 5. alignment 偏移计算原理

### 核心机制：clipsToBounds = NO + frame.origin.y 移动

```
imageView.clipsToBounds = NO   ← 图片可以溢出 imageView 的 frame
button.masksToBounds = YES     ← button 裁剪溢出部分
```

图示（button 高 100pt，AspectFill 后图片高 200pt，overflow=100pt）：

```
居中（origin.y = 0）：可见像素 50~150 ✅
顶部对齐（origin.y = +50）：可见像素 0~100 ✅
底部对齐（origin.y = -50）：可见像素 100~200 ✅
```

### 计算公式

```objc
CGFloat scale = viewW / imgW;
CGFloat renderedH = imgH * scale;
CGFloat overflow = renderedH - viewH;

if (overflow > 0) {
    switch (alignment) {
        case 0:  alignmentOffset = -overflow / 2.0; break;  // 底部
        case 2:  alignmentOffset =  overflow / 2.0; break;  // 顶部
        default: alignmentOffset = 0;                break;  // 居中
    }
}
frame.origin.y = userOffsetY + alignmentOffset;
```

---

## 6. 视图层级

```
MoreViewController
└── WCTableViewManager
      ├── tableView:heightForHeaderInSection: ← 保证返回值 ≥ cardBgHeight + spacing
      └── UITableView
            └── Section 1 Header:
                └── MMUITableViewCell
                    └── contentView → MMUIButton (★ layoutSubviews 改 frame.height)
                        ├── UIImageView tag=999902 (bgImageView)
                        │   ├── clipsToBounds = NO
                        │   ├── contentMode = AspectFill
                        │   └── frame.origin.y ← alignment 控制
                        └── MMHeadImageView
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
| `cardBgLight/DarkOffsetX/Y` | CGFloat | 0 | ✅ | X/Y 偏移 |
| `cardBgHeight` | CGFloat | 144 | ⚠️ | 需同时在 layoutSubviews 和 heightForHeader 处理 |
| `cardBgListSpacing` | CGFloat | 9 | ✅ | 通过 heightForHeader Hook 生效 |

---

## 8. 历史踩坑记录

| # | 问题 | 根因 | 解决方式 |
|:-:|:-----|:-----|:---------|
| A-I | （略） | ... | ... |
| J-K | （略） | ... | ... |
| L | skipMasksToFit / masksToBounds / frame 1704pt / fillMode | ... | ... |
| O-P | 对齐方式 contentsRect 裁剪不对 | 改用 frame.origin.y + clipsToBounds=NO | |
| Q | 间距/高度不生效 | Hook 目标错误 | Hook WCTableViewManager 的 heightForHeaderInSection: |
| R | 分支A切换对齐不生效 | 缺少 alignmentOffset 计算 | 分支A复用计算 |
| S | **高度144多一截** | **只在 heightForHeader 写高度，button 没变大** | **layoutSubviews 也改 button frame** |
| **T** | **高度生效但覆盖下面 cell** | **button 变大但 heightForHeader 返回值没跟上** | **heightForHeader 加回 max(result, cardBgHeight)** |
