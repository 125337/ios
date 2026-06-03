# MioPlugin 资料卡背景功能 — 技术文档

> **更新日期**: 2026-06-03 (v40 — 深度分析 autoresizingMask 方案可行性，给出完整实验方案)
> **架构**: ListCornerRadiusHook（薄分发层） + ProfileCardBgHook（独立资料卡模块）

---

## 1. 当前 Bug：高度问题（最终方案）

### 为什么之前所有方案都失败

| 方案 | 做法 | 结果 | 失败根因 |
|:----:|:-----|:-----|:-------:|
| A | 只改 heightForHeader | 空白 | header 变大了但 button 没跟随 |
| B | 只改 layoutSubviews button.frame | 覆盖 | button 变大了但空间没分配够 |
| C | 两处都改 | 回到空白 | button 的 frame 被后续布局覆盖 |
| D(方案2) | 改整条 superview 链 | 空白 | superview 的 frame 也被系统覆盖 |

**核心矛盾**：我们在 `layoutSubviews` 中手动设的 frame，会被微信内部后续的布局步骤重新计算并覆盖。微信的布局系统是**确定性的**——它会在自己的 `layoutSubviews` 中根据父视图 bounds 重新计算每个子视图的位置和大小。

### autoresizingMask 方案可行性深度分析

**原理**：

```
UITableView 设置 header frame（由 heightForHeader 返回值决定）
  ↓
MMTableSectionHeaderView.frame 变大
  ↓
UIKit 自动应用 autoresizing 到子视图
  ↓
contentView.height 随之变大（如果有 flexibleHeight）
  ↓
MMTableViewCell.height 随之变大
  ↓
MMUIButton.height 随之变大（如果有 flexibleHeight）✓
```

**关键条件链**：header → contentView → cell → button，每一级都需要 `flexibleHeight` 才能传递。

**可行性判断**：**高可行度**

理由：
1. `UITableViewHeaderFooterView` 的 `contentView` 默认就有 `flexibleWidth | flexibleHeight`
2. 微信优化反编译中 `FUN_00007b4c` 改完 button frame 后没有额外处理 superview 链——说明微信内部的布局系统确实会自动传播尺寸变化
3. 我们方案A失败的原因很可能就是 **button 缺少 flexibleHeight**，导致 autoresizing 在 button 这一层断了

**风险点**：
- 如果 `MMTableViewCell` 或中间某层用了 **auto-layout 约束**而非 autoresizing，autoresizing 不会生效
- 如果微信在 `MMTableSectionHeaderView.layoutSubviews` 或 `MMTableViewCell.layoutSubviews` 中**硬编码了子视图的高度**，会覆盖 autoresizing 的结果

### 实验方案：autoresizingMask（推荐先试）

**步骤 1**：`_hooked_heightForHeader` 恢复完整的高度+间距逻辑

```objc
static double _hooked_heightForHeader(id self, SEL _cmd, id tableView, long long section) {
    double result = _orig_heightForHeader(self, _cmd, tableView, section);

    PluginConfig *config = [PluginConfig shared];
    if (!config.cardBgEnabled) return result;
    if (section != 1) return result;

    // ... MoreVC 判断（保持不变） ...

    // ★ ① 保证 ≥ 自定义高度
    CGFloat customHeight = config.cardBgHeight;
    if (customHeight > 0 && result < customHeight) {
        result = customHeight;
    }

    // ★ ② 追加间距
    CGFloat spacing = config.cardBgListSpacing;
    if (spacing > 0) {
        result += spacing;
    }

    WPLog(@"CardBg-Diag", @"[HFH] section=%lld, orig→result=%.1f, h=%.1f, sp=%.1f",
          section, result, customHeight, spacing);
    return result;
}
```

**步骤 2**：`handleButtonLayout` 中删除按钮高度调整代码，改为设置 autoresizingMask

```objc
// ❌ 删除这段（APPLY_CORNER 前面的高度调整）：
// {
//     CGFloat customHeight = config.cardBgHeight;
//     if (customHeight > 0 && button.frame.size.height < customHeight) {
//         CGRect f = button.frame;
//         f.size.height = customHeight;
//         button.frame = f;
//     }
// }

// ★ 替换为：设置 autoresizingMask（让 button 跟随 header 自动拉伸）
button.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;

APPLY_CORNER:
```

**步骤 3**：加诊断日志确认 autoresizing 是否生效

在 `handleButtonLayout` 开头（第 4 关之后）添加：

```objc
WPLog(@"CardBg-Diag", @"[AUTO-RESIZE] button.frame=(%.0f,%.0f,%.0f,%.0f), "
      @"mask=%ld, superview=%@",
      button.frame.origin.x, button.frame.origin.y,
      button.frame.size.width, button.frame.size.height,
      (long)button.autoresizingMask,
      NSStringFromClass([button.superview class]));
```

### 如何判断实验结果

| 日志/现象 | 含义 | 下一步 |
|:---------|:-----|:------:|
| button.height 随 cardBgHeight 变大 | ✅ autoresizing 生效 | 成功！清理日志 |
| button.height 不变（=原始值） | ❌ autoresizing 未生效 | 尝试备选方案 |
| 出现空白但无覆盖 | ⚠️ 高度生效但 button 检测时机早 | 检查日志中的具体数值 |

### 备选方案：如果 autoresizing 不生效

**方案 E：Hook MMTableSectionHeaderView.setFrame:**

当 UITableView 设置 header frame 时，拦截并同步修改 button 的高度：

```objc
static void (*_orig_headerSetFrame)(id, SEL, CGRect);
static void _hooked_headerSetFrame(id self, SEL _cmd, CGRect newFrame) {
    _orig_headerSetFrame(self, _cmd, newFrame);

    // 只处理 MoreVC 的 Section 1 Header
    // 找到里面的 MMUIButton 并同步修改其高度
}
```

**方案 F：dispatch_async(beginUpdates/endUpdates)**

在 handleButtonLayout 中改完 button frame 后通知重算：

```objc
dispatch_async(dispatch_get_main_queue(), ^{
    [tableView beginUpdates];
    [tableView endUpdates];
});
```

---

## 2. 待修复汇总

| 优先级 | Bug | 当前方案 |
|:------:|:---:|:--------|
| **P0** | **M** 资料卡高度 | **实验 autoresizingMask 方案（见上方）** |
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
| `cardBgHeight` | CGFloat | 144 | ⚠️ 实验中 |
| `cardBgListSpacing` | CGFloat | 9 | ✅ |

---

## 5. 历史踩坑记录（精简）

| # | 问题 | 根因 | 状态 |
|:-:|:-----|:-----|:----:|
| A-O | 基础功能、圆角、边框、背景图等 | 已逐一修复 | ✅ |
| P | 对齐方式始终居中 | contentsRect 裁剪方式不对 | ✅ 已改 frame.origin.y |
| Q | 间距/高度不生效 | Hook 目标错误 | ✅ 已改 heightForHeader |
| R | 分支A切换对齐不生效 | 缺 alignmentOffset | ⚠️ 待修 |
| S-T | 高度问题（4种方案均失败） | 手动 frame 被微信布局覆盖 | 🔄 实验 autoresizingMask |
