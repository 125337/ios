# MioPlugin 资料卡背景功能 — 技术文档

> **更新日期**: 2026-06-03 (v44 — 方案 H 高度已生效但视觉不变，需触发布局重算)
> **架构**: ListCornerRadiusHook（薄分发层） + ProfileCardBgHook（独立资料卡模块）

---

## 1. 当前 Bug：高度问题

### 方案 H 实验结果（plugin(58).log）

| 指标 | 值 | 判定 |
|:-----|:---:|:-----:|
| `[HEIGHT-SET]` | **130 → 170** | ✅ button 高度确实改了 |
| `BGIMG-CREATE` frame | **(0,0,393,170)** | ✅ 第二次已是 170 |
| `HEIGHT-SKIP` | currentH=170 | ✅ 后续跳过正确 |
| `FIX-WHITE` frame.y | **170**（之前是 130） | ✅ 分隔线跟随移动了 |
| 视觉效果 | **仍有空白** | ❌ 表格未重算布局 |

### 根因确认：TextStateProfileTableView 是主表格

VIEW-CHAIN 层级（plugin(56).log）：

```
[2] MMUIButton         (0, 0, 393, 1704)   ← 可滚动内容区
[1] TextStateProfileTableView (0, 0, 393, 772)  ← ★ 这是主表格！包含卡片+所有列表项
[0] MMUIButton         (0, 0, 393, 130→170)  ← 资料卡 button
```

**关键理解**：`TextStateProfileTableView` 不是"嵌套的卡片专用表格"，它是**整个"我"页面的主表格**，同时包含：
- 资料卡区域（我们的 button [0]）
- 服务、收藏、朋友圈、订单与卡包、表情、插件、设置 等列表项

所以 `heightForHeaderInSection:` 控制的不是这个表格内部的空间分配，而是**外层容器给这个表格分配的空间**。我们在 `[0]` 上改了高度，但 `[1]` 表格内部的行高/section 高度计算没有被通知更新。

### 为什么微信优化能工作

微信优化的 `FUN_00007b4c` 在 MMUIButton.layoutSubviews 中改 button frame 后，**紧接着调用了 `createOrUpdateLayout` 或类似方法**，触发表格重新计算。或者微信 8.0.55 的表格使用了 auto-layout，会自动响应子视图尺寸变化。

### 修复：改完高度后触发布局重算

在方案 H 的代码中，改完 button.frame 后添加：

```objc
// 方案 H 改进版：改高度 + 触发重算
{
    CGFloat targetH = config.cardBgHeight;
    if (targetH <= 0 || button.frame.size.height >= targetH) return;

    UIView *tableView = button.superview;  // [1] TextStateProfileTableView
    if (![NSStringFromClass([tableView class]) isEqualToString:@"TextStateProfileTableView"]) return;

    // ① 改 button 高度
    CGRect bf = button.frame;
    bf.size.height = targetH;
    button.frame = bf;

    // ② ★ 触发表格重新布局
    if ([tableView isKindOfClass:[UITableView class]]) {
        dispatch_async(dispatch_get_main_queue(), ^{
            [(UITableView *)tableView beginUpdates];
            [(UITableView *)tableView endUpdates];
        });
    }

    WPLog(@"CardBg-Diag", @"[HEIGHT-SET] %.0f→%.0f, triggered reload",
          bf.size.height - targetH, targetH);
}
```

如果 `beginUpdates/endUpdates` 不够（因为这不是通过 dataSource 驱动的变化），尝试更暴力的方式：

```objc
// 备选：强制 setNeedsLayout + layoutIfNeeded
[tableView setNeedsLayout];
[tableView layoutIfNeeded];

// 或者：让父容器也重算
UIView *container = tableView.superview;  // [2] MMUIButton
[container setNeedsLayout];
[container layoutIfNeeded];
```

---

## 2. 待修复汇总

| 优先级 | Bug | 方案 |
|:------:|:---:|:------|
| **P0** | **M** 资料卡高度 | 方案 H + 触发 beginUpdates/endUpdates 或 setNeedsLayout |
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
| `cardBgHeight` | CGFloat | 144 | ⚠️ 方案 H 已生效，需加重算触发 |
| `cardBgListSpacing` | CGFloat | 9 | ⚠️ 需重新评估作用位置 |

---

## 5. 历史踩坑记录

| # | 问题 | 根因 | 状态 |
|:-:|:-----|:-----|:----:|
| A-O | 基础功能、圆角、边框、背景图等 | 已逐一修复 | ✅ |
| P | 对齐方式始终居中 | contentsRect 不对 | ✅ 已改 frame.origin.y |
| Q | 间距/高度不生效 | Hook 目标错误 | ✅ 已改 heightForHeader |
| R | 分支A切换对齐不生效 | 缺 alignmentOffset | ⚠️ |
| S-I | **高度问题（9种方案）** | **button 高度改了但表格不重算** | 🔄 需加 beginUpdates/setNeedsLayout |
