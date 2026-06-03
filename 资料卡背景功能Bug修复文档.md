# MioPlugin 资料卡背景功能 — 技术文档

> **更新日期**: 2026-06-03 (v42 — setFrame: Hook 未触发根因分析，给出最终方案)
> **架构**: ListCornerRadiusHook（薄分发层） + ProfileCardBgHook（独立资料卡模块）

---

## 1. 当前 Bug：高度问题

### 日志铁证（plugin(54).log）

| 指标 | 值 | 判定 |
|:-----|:---:|:-----:|
| `MMTableSectionHeaderView::setFrame:` Hook | ✅ 已注册（L84） | 注册成功 |
| `[SETFRAME-HOOK]` 日志 | ❌ **0 条** | **函数从未被调用！** |
| button.frame.height | **130** | 没变 |
| heightForHeader 返回值 | **179.0** | 生效了 |

### 根因：资料卡不是通过 `MMTableSectionHeaderView` 放置的

**头文件证据**（[MoreViewController.h](file:///www/wwwroot/ios/插件/微信头文件/WeChatHeaders/8.0.55/MoreViewController.h)）：

```objc
@interface MoreViewController {
    TextStateProfileCardContentView *_textStateDetailView;  // ← 资料卡内容视图
    double _textStateDetailHeight;                          // ← 资料卡高度
    UIView *_frontView;                                     // ← 前景视图
    UITableView *_frontTableView;                           // ← 前景表格
    // ...
}
- (void)makeHeaderView;        // ← 创建 header
- (void)addProfileSection;     // ← 添加资料卡 section
- (id)findMainTableView;      // ← 找主表格
}
```

**`TextStateProfileCardContentView` 头文件**（[TextStateProfileCardContentView.h](file:///www/wwwroot/ios/插件/微信头文件/WeChatHeaders/8.0.55/TextStateProfileCardContentView.h)）：

```objc
@interface TextStateProfileCardContentView {
    double _bottomPadding;       // ← 底部间距
    UIView *_backgroundView;     // ← 背景视图
    // ...
}
- (void)setFrame:(CGRect)arg1;          // ← ★ 重写了 setFrame:
- (double)heightForWidth:(double)arg1;  // ← ★ 自定义高度计算
- (void)createOrUpdateLayout;           // ← 布局方法
- (void)createOrUpdateLayoutIfNeeded;
@end
```

**微信优化反编译证据**（[L8161-L8162](file:///www/wwwroot/ios/插件/微信优化反编译最新/123456.c#L8161-L8162)）：

```c
// 微信优化对 MMTableSectionHeaderView Hook 的是 setBackgroundImageView:（不是 setFrame:！）
uVar1 = _objc_getClass("MMTableSectionHeaderView");
_MSHookMessageEx(uVar1, "setBackgroundImage:", FUN_0000cbcc, &DAT_0013a9c8);
```

**结论**：资料卡的容器类不是 `MMTableSectionHeaderView`，而是 `TextStateProfileCardContentView`（或其父级容器）。所以 Hook `MMTableSectionHeaderView.setFrame:` 自然永远不会触发。

### 为什么微信优化不需要 Hook setFrame

微信优化的完整高度处理只有两步：

| 步骤 | 位置 | 做什么 |
|:----:|:-----|:------:|
| 1 | `MMUIButton.layoutSubviews` (FUN_00007b4c) | 先 orig → 读 ProfileCardHeight → `if (height < config) [button setFrame:]` |
| 2 | `WCTableViewManager.heightForHeaderInSection:` (FUN_00008874) | orig → section==1 → `result += spacing` |

**没有第三步**。没有 Hook setFrame、没有 autoresizing、没有 beginUpdates。

**为什么能工作**：微信 8.0.55 的 `TextStateProfileCardContentView` 内部实现了 `heightForWidth:` 和 `createOrUpdateLayout`，当子视图（button）frame 变化后，这些方法会在下一轮 layout 中自动重新计算内容高度并调整自身尺寸。整个容器链是"响应式"的。

**我们的情况不同**：可能在某些微信版本中这个响应式链路被断了，或者我们的修改时机/方式有细微差异导致链路没触发。

### 最终方案：先诊断再决定

**步骤 1**：在 handleButtonLayout 中打印完整 superview 链

```objc
// 在 handleButtonLayout 第 4 关之后添加
NSMutableString *chain = [NSMutableString string];
UIView *v = button;
while (v) {
    [chain appendFormat:@"\n  → %@ (%.0f,%.0f,%.0f,%.0f)",
     NSStringFromClass([v class]),
     v.frame.origin.x, v.frame.origin.y,
     v.frame.size.width, v.frame.size.height];
    v = v.superview;
}
WPLog(@"CardBg-Diag", @"[VIEW-CHAIN]%@", chain);
```

**目的**：确认资料卡的真实视图层级，特别是：
- button 的直接父视图是什么类？
- 向上到 tableView 之间经过哪些类？
- 是否存在 `TextStateProfileCardContentView`？
- 是 tableHeaderView 还是 section header？

**步骤 2**：根据诊断结果选择方案

| 诊断结果 | 方案 |
|:---------|:-----|
| 发现 `TextStateProfileCardContentView` | Hook 它的 `setFrame:` 或 `heightForWidth:` |
| 是 tableHeaderView（非 section header） | 改用 `tableView:estimatedHeightForHeaderInSection:` 或直接设 tableHeaderView 高度 |
| 是 section header 但容器类未知 | 在 handleButtonLayout 中改 button 后 `dispatch_async(beginUpdates)` |
| 容器链中有固定高度的 view | 从 button 向上逐级改 frame（带日志确认哪级生效） |

---

## 2. 待修复汇总

| 优先级 | Bug | 当前状态 |
|:------:|:---:|:--------|
| **P0** | **M** 资料卡高度 | 🔄 需先诊断视图层级（加 VIEW-CHAIN 日志） |
| **P1** | **L** 分支A缺少 alignment 偏移 | ⚠️ 待修 |
| **P2** | **G** 折叠置顶逻辑丢失 | ⚠️ 待修 |

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
| `cardBgHeight` | CGFloat | 144 | ⚠️ 待诊断 |
| `cardBgListSpacing` | CGFloat | 9 | ✅ |

---

## 5. 历史踩坑记录

| # | 问题 | 根因 | 状态 |
|:-:|:-----|:-----|:----:|
| A-O | 基础功能、圆角、边框、背景图等 | 已逐一修复 | ✅ |
| P | 对齐方式始终居中 | contentsRect 不对 | ✅ 已改 frame.origin.y |
| Q | 间距/高度不生效 | Hook 目标错误 | ✅ 已改 heightForHeader |
| R | 分支A切换对齐不生效 | 缺 alignmentOffset | ⚠️ |
| S-G | **高度问题（7种方案全部失败）** | **容器类不是 MMTableSectionHeaderView** | 🔄 需诊断视图层级 |
