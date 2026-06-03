# MioPlugin 资料卡背景功能 — 技术文档

> **更新日期**: 2026-06-03 (v41 — autoresizingMask 实验失败，日志铁证，给出最终方案)
> **架构**: ListCornerRadiusHook（薄分发层） + ProfileCardBgHook（独立资料卡模块）

---

## 1. 当前 Bug：高度问题（实验结论）

### 日志铁证（plugin(53).log）

| 指标 | 值 | 判定 |
|:-----|:---:|:-----:|
| `heightForHeader` 返回值 | **179.0** (orig=170 + spacing=9) | heightForHeader 生效 ✓ |
| button.frame.height | **130** | ❌ 没有跟随变大 |
| autoresizingMask | **18** (FlexibleWidth\|FlexibleHeight) | 设置正确 ✓ 但无效 |
| button.superview | **TextStateProfileTableView** | ⚠️ 非标准 header 链路 |

**结论**：autoresizingMask 方案**不生效**。mask=18 已正确设置，但 button 高度仍为 130pt，没有跟随 header 的 179pt 变大。

### 为什么 autoresizing 不生效

从日志看，button.superview 是 `TextStateProfileTableView`（即 MoreVC 的 UITableView 本身），而不是预期的 `MMTableSectionHeaderView → contentView → MMUITableViewCell → MMUIButton` 链路。可能原因：

1. 微信用了 **auto-layout 约束**控制 button 尺寸 → autoresizing 对约束视图无效
2. 或者在 `layoutSubviews` 中有代码硬编码了子视图高度 → 覆盖 autoresizing 结果
3. 或者资料卡不是通过标准 Section Header 放置的（superview 直接是 tableView）

### 已排除的方案（均失败）

| # | 方案 | 结果 | 失败原因 |
|:-:|:-----|:-----|:---------|
| A | 只改 heightForHeader (max+spacing) | 空白 | button 没变大 |
| B | 只改 layoutSubviews button.frame | 覆盖 cell | 空间没分配够 |
| C | 两处都改 | 回到空白 | frame 被后续布局覆盖 |
| D | 改整条 superview 链 | 空白 | superview frame 也被覆盖 |
| E | autoresizingMask (flexibleHeight) | **假改** | mask 正确但微信用了约束/硬编码 |

### 最终方案：Hook `MMTableSectionHeaderView.setFrame:`

**原理**：在 UITableView 设置 header frame 之后、布局传播之前，手动同步修改 button 高度。

```objc
static void (*_orig_headerSetFrame)(id, SEL, CGRect);
static void _hooked_headerSetFrame(id self, SEL _cmd, CGRect newFrame) {
    _orig_headerSetFrame(self, _cmd, newFrame);

    // 只处理 MoreVC 的资料卡 header
    // 通过 nextResponder 链判断是否在 MoreViewController 中
    // 遍历子视图找到 MMUIButton（含 MMHeadImageView）
    // 同步修改其 frame.height = newFrame.height - spacing
}
```

**为什么这个方案能行**：
- 在系统设置完 header frame 之后立即执行，时机最准
- 不依赖 autoresizing / auto-layout 机制
- 与微信优化在 layoutSubviews 中改 button frame 的思路一致（都是"在正确的时机设 frame"）

---

## 2. 待修复汇总

| 优先级 | Bug | 方案 |
|:------:|:---:|:------|
| **P0** | **M** 资料卡高度 | Hook `MMTableSectionHeaderView.setFrame:` 同步传高度 |
| **P1** | **L** 分支A缺少 alignment 偏移 | 分支A复用 alignment 偏移计算 |
| **P2** | **G** 折叠置顶逻辑丢失 | wp_applyStandardCorner 中插入折叠检测 |

---

## 3. alignment 偏移计算

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

## 4. 配置项说明

| 配置项 | 类型 | 默认值 | 状态 |
|:------:|:-----:|:------:|:----:|
| `cardBgEnabled` | BOOL | NO | ✅ |
| `cardBgHidden` | BOOL | NO | ✅ |
| `cardBgFillMode` | NSInteger | 0 | ✅ |
| `cardBgLight/DarkImagePath` | NSString* | nil | ✅ |
| `cardBgLight/DarkAlignment` | NSInteger | 0 | ✅ |
| `cardBgLight/DarkLayer` | NSInteger | 0 | ✅ |
| `cardBgLight/DarkOffsetX/Y` | CGFloat | 0 | ✅ |
| `cardBgHeight` | CGFloat | 144 | ⚠️ 待 setFrame: 方案 |
| `cardBgListSpacing` | CGFloat | 9 | ✅ |

---

## 5. 历史踩坑记录（精简）

| # | 问题 | 根因 | 状态 |
|:-:|:-----|:-----|:----:|
| A-O | 基础功能、圆角、边框、背景图等 | 已逐一修复 | ✅ |
| P | 对齐方式始终居中 | contentsRect 裁剪不对 | ✅ 已改 frame.origin.y |
| Q | 间距/高度不生效 | Hook 目标错误 | ✅ 已改 heightForHeader |
| R | 分支A切换对齐不生效 | 缺 alignmentOffset | ⚠️ 待修 |
| S-E | **高度问题（6种方案全部失败）** | 手动frame被覆盖 / autoresizing无效 | 🔄 待试 setFrame: Hook |
