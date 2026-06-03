# MioPlugin 资料卡背景功能 — 技术文档

> **更新日期**: 2026-06-03 (v39 — 高度方案最终分析：cellHeightFor: 不可行，给出可行方案)
> **架构**: ListCornerRadiusHook（薄分发层） + ProfileCardBgHook（独立资料卡模块）

---

## 1. 当前 Bug：高度问题（最终分析）

### 为什么 `cellHeightFor:` 不可行

**铁证**：资料卡在 Section 1 的 **Header** 中，不是 Cell。

```
UITableView
├── Section 0 Header / Cells
├── Section 1
│   ├── ★ Header ← 资料卡在这里（MMTableViewCell 作为 headerView）
│   └── Cells: 服务、收藏、朋友圈...
└── Section 2+
```

| 方法 | 控制对象 | 对资料卡生效？ |
|:-----|:--------:|:------------:|
| `tableView:heightForHeaderInSection:` | Section Header 高度 | ✅ |
| `tableView:heightForRowAtIndexPath:` | Cell 行高 | ❌ |
| `WCTableViewCellManager.cellHeightFor:` | Cell 行高（内部方法） | ❌ |

`cellHeightFor:` 是 `WCTableViewCellManager` 的方法，只被 Cell 高度计算调用。**Header 的高度走的是完全独立的代码路径**，不会经过 `cellHeightFor:`。

### 三种已尝试的方案及其结果

| 方案 | heightForHeader | layoutSubviews 改 button | 结果 |
|:----:|:--------------:|:----------------------:|:-----:|
| A | `max(orig, 144) + 9` | 不改 | 卡片正常大小，底部多一截空白 ❌ |
| B | `orig + 9` | button.height = 200 | 卡片变大但覆盖下面 cell ❌ |
| C | `max(orig, 200) + 9` | button.height = 200 | 回到方案A的效果（空白）❌ |

### 根因：鸡生蛋问题

```
布局循环：
  ① UITableView 调用 heightForHeader → 得到返回值 → 分配 header 空间
  ② header 空间变化 → 触发 header view 的 layoutSubviews
  ③ layoutSubviews 中改 button.frame → button 变大
  ④ 但第①步已经完成了！header 空间不会因为③自动重算
  ⑤ 除非触发新一轮布局循环 → 可能导致 watchdog 卡死（Bug C）
```

**方案A 失败原因**：空间变大了（比如 209pt），但 button 没有变大（还是 150pt）→ 59pt 空白。button 没变大是因为它可能依赖父视图的 bounds 来确定自己的尺寸，而父视图虽然空间大了但内部子视图没有重新布局。

**方案B 失败原因**：button 变大了（200pt），但分配的空间只有 159pt → 41pt 溢出覆盖。

**方案C 失败原因**：同方案A——说明 button 的 frame 修改在 layoutSubviews 中被后续布局步骤覆盖了，或者 button 的尺寸由其 superview 决定而非自身 frame。

### 微信优化为什么能工作

微信优化的 `FUN_00007b4c`（layoutSubviews hook）中改 button frame 后，**紧接着还修改了 superview 链的尺寸**。而且微信优化可能在改完 frame 后触发了 `[tableView reloadData]` 或 `[tableView beginUpdates/endUpdates]` 让 UITableView 重新计算。

另外关键区别：微信优化的 layoutSubviews hook 可能是在 **orig 之前** 执行的（MSHookMessageEx 可以控制执行顺序），而我们的 `handleButtonLayout:` 是在 **orig 之后** 执行的。

### 可行方案（按推荐顺序）

#### 方案 1：只用 heightForHeader + 让 button 自动撑满（最简）

**原理**：如果 button 设置了正确的 `autoresizingMask`（如 `UIViewAutoresizingFlexibleHeight`），当 header 容器变大时 button 会自动跟随变大。

```objc
// _hooked_heightForHeader：控制总高度
static double _hooked_heightForHeader(id self, SEL _cmd, id tableView, long long section) {
    double result = _orig_heightForHeader(self, _cmd, tableView, section);

    PluginConfig *config = [PluginConfig shared];
    if (!config.cardBgEnabled || section != 1) return result;

    // ... MoreVC 判断（保持不变） ...

    CGFloat customHeight = config.cardBgHeight;
    if (customHeight > 0 && result < customHeight) {
        result = customHeight;
    }
    CGFloat spacing = config.cardBgListSpacing;
    if (spacing > 0) {
        result += spacing;
    }
    return result;
}

// handleButtonLayout：删除按钮高度调整代码，改为设置 autoresizingMask
// 在创建 bgImageView 之后添加：
button.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
```

**优点**：简单，不涉及手动 frame 操作
**风险**：如果 button 没有设 flexibleHeight，或 superview 用了 auto-layout 约束，可能不生效

#### 方案 2：layoutSubviews 中改整个 superview 链（与微信优化一致）

在 `handleButtonLayout` 的 APPLY_CORNER 之前，不只改 button，而是**向上传播**：

```objc
{
    CGFloat customHeight = config.cardBgHeight;
    if (customHeight > 0 && button.frame.size.height < customHeight) {
        // 从 button 向上逐级改 frame
        UIView *current = button;
        while (current && current.frame.size.height < customHeight) {
            CGRect f = current.frame;
            f.size.height = customHeight;
            current.frame = f;
            current = current.superview;
            // 只改到 MMUITableViewCell 层就停止（不改 header 的 frame，让系统处理）
            if ([NSStringFromClass([current class]) isEqualToString:@"MMUITableViewCell"]) break;
        }
    }
}
APPLY_CORNER:
```

**优点**：确保整条链路都变大
**风险**：可能触发布局循环（需测试）

#### 方案 3：改完 frame 后通知 UITableView 重算

```objc
{
    CGFloat customHeight = config.cardBgHeight;
    if (customHeight > 0 && button.frame.size.height < customHeight) {
        CGRect f = button.frame;
        f.size.height = customHeight;
        button.frame = f;

        // ★ 通知 UITableView 重算布局
        UITableView *tv = nil;
        UIView *v = button.superview;
        while (v) {
            if ([v isKindOfClass:[UITableView class]]) {
                tv = (UITableView *)v; break;
            }
            v = v.superview;
        }
        if (tv) {
            dispatch_async(dispatch_get_main_queue(), ^{
                [tv beginUpdates];
                [tv endUpdates];
            });
        }
    }
}
APPLY_CORNER:
```

**优点**：让 UITableView 在下一轮循环中重新调用 heightForHeader，拿到正确值
**风险**：可能导致短暂闪烁；频繁触发影响性能

---

## 2. 待修复汇总

| 优先级 | Bug | 方案 |
|:------:|:---:|:------|
| **P0** | **M** 资料卡高度 | 先试方案1（autoresizingMask），不行试方案2 或 3 |
| **P1** | **L** 分支A缺少 alignment 偏移 | 分支A复用 alignment 偏移计算 |
| **P2** | **G** 折叠置顶逻辑丢失 | wp_applyStandardCorner 中插入折叠检测 |

---

## 3. alignment 偏移计算原理

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

## 4. 配置项说明

| 配置项 | 类型 | 默认值 | 状态 | 说明 |
|:------:|:-----:|:------:|:---:|------|
| `cardBgEnabled` | BOOL | NO | ✅ | 总开关 |
| `cardBgHidden` | BOOL | NO | ✅ | 隐藏卡片内容 |
| `cardBgFillMode` | NSInteger | 0 | ✅ | 0=AspectFill 1=AspectFit 2=ScaleToFill 3=AspectFill+无圆角 |
| `cardBgLight/DarkImagePath` | NSString* | nil | ✅ | 背景图路径 |
| `cardBgLight/DarkAlignment` | NSInteger | 0 | ✅ | 垂直对齐 0=底部 1=居中 2=顶部 |
| `cardBgLight/DarkLayer` | NSInteger | 0 | ✅ | 图层位置 0=底层 1=顶层 |
| `cardBgLight/DarkOffsetX/Y` | CGFloat | 0 | ✅ | X/Y 偏移 |
| `cardBgHeight` | CGFloat | 144 | ⚠️ | 高度方案待定（见 Bug M） |
| `cardBgListSpacing` | CGFloat | 9 | ✅ | 通过 heightForHeader Hook 生效 |

---

## 5. 历史踩坑记录（精简版）

| # | 问题 | 根因 | 状态 |
|:-:|:-----|:-----|:----:|
| A-O | （基础功能、圆角、边框、背景图加载等） | 已逐一修复 | ✅ |
| P | 对齐方式始终居中 | contentsRect 裁剪方式不对 | ✅ 改为 frame.origin.y |
| Q | 间距/高度不生效 | Hook 目标错误 | ✅ 改为 heightForHeader |
| R | 分支A切换对齐不生效 | 缺少 alignmentOffset | ⚠️ 待修复 |
| S-T | **高度问题** | **forHeader 和 layoutSubviews 双方冲突** | ⚠️ 待修复（见上方3个方案） |
