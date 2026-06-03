# MioPlugin 资料卡背景功能 — 技术文档

> **更新日期**: 2026-06-03 (v43 — VIEW-CHAIN 日志揭示真实层级：嵌套 UITableView + 滚动容器)
> **架构**: ListCornerRadiusHook（薄分发层） + ProfileCardBgHook（独立资料卡模块）

---

## 1. 当前 Bug：高度问题

### VIEW-CHAIN 日志铁证（plugin(56).log L99-109）

```
[0] MMUIButton         (0, 0, 393, 130)       ← 资料卡 button（我们 hook 的目标）
[1] TextStateProfileTableView (0, 0, 393, 772)  ← ★ UITableView 子类！bounds.y 滚动中变化
[2] MMUIButton         (0, y变, 393, 1704)   ← ★ 真正的容器，高度 1704pt
[3] MMUIHookView       (0, 0, 393, 852)
[4+] 标准导航/转场链路...
```

### 滚动证据

| 调用次序 | [1] bounds.origin.y | [2] frame.origin.y | 含义 |
|:-------:|:-------------------:|:------------------:|:-----|
| 1 | -98 | 0 | 初始：内容偏上 |
| 2 | -88 | -5 | 向下滚了一点 |
| 3 | -77 | -11 | 继续向下 |
| ... | ... | ... | 持续滚动 |
| 12 | -25 | -40 | 继续滚动 |
| 13 | -29 | -34 | 回弹 |
| 14 | +28 | +28 | 弹过中心点 |
| 最后 | -98 | 0 | 回到初始位置 |

**结论**：`[2] MMUIButton(h=1704)` 是可滚动内容区，`[1] TextStateProfileTableView(h=772)` 是可视窗口。这是一个**自定义滚动容器模式**。

### 为什么所有 7 种方案都失败

```
┌─ 主 UITableView (MoreVC 的表格)
│  ├─ heightForHeaderInSection:1 返回 179  ← 控制这里 ✓ 但...
│  │
│  └─ Section 1 Header（某容器）
│     └─ [2] MMUIButton (h=1704, 滚动内容区)
│        └─ [1] TextStateProfileTableView (h=772, 嵌套 UITableView)
│           └─ [0] MMUIButton (h=130, 资料卡)  ← 我们在这里改 frame
│
★ 问题：[0] 嵌套了 3 层才到主 UITableView 的 header
★ heightForHeader 控制的空间 → [2] 或其父级 → 不直接控制 [0]
★ 改 [0].frame.height → 被 [1] 的布局覆盖 → 改 [1] → 被 [2] 覆盖 → ...
```

### 微信优化为什么能工作

微信优化的 `FUN_00007b4c`（MMUIButton.layoutSubviews）中改 frame 后，微信 8.0.55 的 `TextStateProfileCardContentView.createOrUpdateLayout` 会响应式地重新计算并调整自身尺寸。这个响应式链路在我们的版本/环境下可能不触发。

### 最终方案：直接改 [2] MMUIButton 或 [1] TextStateProfileTableView

**方案 H：在 handleButtonLayout 中从 button 向上找到正确的容器并改高度**

```objc
// 在 handleButtonLayout 的 APPLY_CORNER: 之前添加
{
    CGFloat targetH = config.cardBgHeight;  // 170
    if (targetH <= 0 || button.frame.size.height >= targetH) return;

    // 向上找 TextStateProfileTableView（index [1]）
    UIView *tableView = button.superview;
    if (![NSStringFromClass([tableView class]) isEqualToString:@"TextStateProfileTableView"]) return;

    // 继续向上找 MMUIButton 容器（index [2]，h=1704）
    UIView *container = tableView.superview;
    if (![container isKindOfClass:NSClassFromString(@"MMUIButton")]) return;

    // ★ 改 button 自身高度
    CGRect bf = button.frame;
    bf.size.height = targetH;
    button.frame = bf;

    // ★ 同步修改容器的某个属性来让布局系统接受新尺寸
    // 可能需要：改 container 的 frame / 触发 tableView 的 reloadData / 等
    WPLog(@"CardBg-Diag", @"[HEIGHT-SET] button→%.0f, container=(%.0f,%.0f,%.0f,%.0f)",
          targetH,
          container.frame.origin.x, container.frame.origin.y,
          container.frame.size.width, container.frame.size.height);
}
```

**方案 I（更暴力但可能有效）：Hook TextStateProfileTableView.layoutSubviews**

既然 `[1]` 是 button 的直接父视图且是 UITableView 子类，Hook 它的 `layoutSubviews`，在里面强制设置 button 的高度：

```objc
static void (*_orig_tspLayout)(id, SEL);
static void _hooked_tspLayout(id self, SEL _cmd) {
    _orig_tspLayout(self, _cmd);

    PluginConfig *config = [PluginConfig shared];
    if (!config.cardBgEnabled || config.cardBgHeight <= 0) return;

    // 找到里面的资料卡 button
    for (UIView *sub in ((UIView *)self).subviews) {
        if ([sub isKindOfClass:NSClassFromString(@"MMUIButton")]) {
            for (UIView *sub2 in sub.subviews) {
                if ([sub2 isKindOfClass:NSClassFromString(@"MMHeadImageView")]) {
                    // 找到了！强制设高度
                    if (sub.frame.size.height < config.cardBgHeight) {
                        CGRect f = sub.frame;
                        f.size.height = config.cardBgHeight;
                        sub.frame = f;
                    }
                    break;
                }
            }
            break;
        }
    }
}
```

**为什么方案 I 可能更好**：
- 在 `TextStateProfileTableView` 自己的 `layoutSubviews` **之后**执行
- 此时它的子视图布局刚完成，我们做最终修正
- 比在外层 MMUIButton hook 里改更"接近"目标

---

## 2. 待修复汇总

| 优先级 | Bug | 方案 |
|:------:|:---:|:------|
| **P0** | **M** 资料卡高度 | 方案 I：Hook TextStateProfileTableView.layoutSubviews，在其 orig 之后改 button 高度 |
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
| `cardBgHeight` | CGFloat | 144 | ⚠️ 待方案 I |
| `cardBgListSpacing` | CGFloat | 9 | ⚠️ 需重新评估 |

---

## 5. 历史踩坑记录

| # | 问题 | 根因 | 状态 |
|:-:|:-----|:-----|:----:|
| A-O | 基础功能、圆角、边框、背景图等 | 已逐一修复 | ✅ |
| P | 对齐方式始终居中 | contentsRect 不对 | ✅ 已改 frame.origin.y |
| Q | 间距/高度不生效 | Hook 目标错误 | ✅ 已改 heightForHeader |
| R | 分支A切换对齐不生效 | 缺 alignmentOffset | ⚠️ |
| S-H | **高度问题（8种方案全部失败）** | **资料卡在嵌套 TextStateProfileTableView 内，不在标准 Section Header 中** | 🔄 待试方案 I |
