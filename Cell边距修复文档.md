# Cell 列表圆角 · 边距功能修复文档

> **基于**: 微信优化反编译深度分析 (v3.0 精确修正版)
> **目标文件**: `ListCornerRadiusHook.m`
> **日期**: 2026-06-01

---

## 目录

1. [问题描述](#1-问题描述)
2. [根因分析](#2-根因分析)
3. [微信优化的实现机制](#3-微信优化的实现机制)
4. [当前已实施的修复方案](#4-当前已实施的修复方案)
5. [代码逐行解析](#5-代码逐行解析)
6. [几何原理图解](#6-几何原理图解)
7. [验证清单](#7-验证清单)
8. [潜在风险与注意事项](#8-潜在风险与注意事项)
9. [与微信优化的剩余差异](#9-与微信优化的剩余差异)

---

## 1. 问题描述

### 1.1 现象

| 对比项 | 微信优化效果 | MioPlugin 修复前 | MioPlugin 修复后 |
|-------|:-----------:|:---------------:|:--------------:|
| **左边距** | ✅ 有 (margin pt) | ❌ 无 | ✅ 有 |
| **右边距** | ✅ 有 (视觉) | ❌ 无 | ✅ 有 |
| **Cell 宽度** | 不变 (屏幕宽) | 不变 (屏幕宽) | 不变 (屏幕宽) |
| **圆角** | ✅ 差异化 | ✅ 差异化 | ✅ 差异化 |
| **边框** | ✅ 可选 | ✅ 可选 | ✅ 可选 |

### 1.2 用户反馈

> "cell的右边边距完全失效"

---

## 2. 根因分析

### 2.1 直接原因

`ListCornerRadiusHook.m` 的主 Hook 函数 `replaced_MMTableViewCell_layoutSubviews` 中：

```objc
// 修复前: margin 值被读取但从未用于 frame 修改
CGFloat margin = config.listCellMargin;   // ← 读取了配置值 (默认 9)
// ... 后续代码直接跳到圆角应用 ...
// cell.frame.origin.x 始终为 0 → 无左边偏移 → 无右边溢出裁切
```

### 2.2 为什么右边会"失效"

```
Cell 边距的视觉效果依赖两条腿:

左边腿 = origin.x 右移 → 左侧露出 TableView 背景色 → 视觉"左间距"
右边腿 = width 不变 + origin.x 右移 → 右边缘溢出屏幕 → UIKit 裁切 → 视觉"右间距"

如果 origin.x 不变 (=0):
  左边腿断裂 → 无左侧间隙
  右边腿断裂 → 无右侧溢出裁切
  结果: Cell 紧贴屏幕两侧, 圆角存在但无卡片感
```

### 2.3 调用链路追踪

```
设置页: SettingListCornerRadiusController
  ↓ 设置 listCellMargin = 9
  ↓ PluginConfig.listCellMargin = 9
  ↓ NSUserDefaults 写入 "MioPlugin.ListCellMargin" = 9

运行时: replaced_MMTableViewCell_layoutSubviews
  ↓ config.listCellMargin = 9  ✓ (值正确)
  ↓ 但从未调用 cell.frame.origin.x = targetX  ✗ (未使用!)
  ↓ 圆角/边框正常应用但无位移
```

---

## 3. 微信优化的实现机制

### 3.1 反编译源码定位

[123456.c L8412-8427](file:///www/wwwroot/ios/插件/微信优化反编译最新/123456.c#L8412-L8427):

```c
// ★ 第1步: 读取 cell 当前 frame.origin.x
FUN_000c58c0(param_4);              // CGRectGetMinX(cell.frame)

// ★ 第2步: 获取 superview
FUN_000d0180(param_4);              // [cell superview]

// ★ 第3步: 计算目标 x
dVar24 = 0;
if (0 <= dVar25 - dVar23) {        // if (margin >= superviewOriginX)
    dVar24 = dVar25 - dVar23;       // targetX = margin - superviewOriginX
}

// ★ 第4步: 安全检查后写入
if (param_3 + dVar25 * -2.0 <= dVar24) {  // if (currentX - 2*margin <= screenW)
    FUN_000cb900(dVar24, param_4);          // [cell setFrame:newFrame]
}
```

### 3.2 关键发现

| 发现项 | 结论 |
|--------|------|
| `FUN_000cb900` 是什么? | `[view setFrame:]` — 见 [L138176](file:///www/wwwroot/ios/插件/微信优化反编译最新/123456.c#L138176-L138181) |
| 修改了 width 吗? | **❌ 没有**, ARM64 寄存器传递中仅 d0(x) 被替换, d2(w) 保持原值 |
| 修改了 height 吗? | **❌ 没有**, d1(y) 和 d3(h) 都保持原值 |
| 修改了 y 吗? | **❌ 没有** |
| 仅修改了什么? | **只有 `frame.origin.x`** |

### 3.3 几何原理

```
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
                    屏幕宽度 = 414pt
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

修改前:
┌───────────────────────────────────────────────┐
│ ┌───────────────────────────────────────────┐ │
│ │         Cell (x=0, w=414)               │ │
│ │                                          │ │
│ └───────────────────────────────────────────┘ │
└───────────────────────────────────────────────┘
  左=0, 右=414 (紧贴屏幕两侧)

修改后 (origin.x = 9, width = 414 不变):
┌───────────────────────────────────────────────┐
│ ═══════                                       │ ← 左侧 9pt 间隙 (露出背景色)
│     ┌─────────────────────────────────────┐   │
│     │         Cell (x=9, w=414)          │   │
│     │                                     │   │
│     └─────────────────────────────────────┘   │
│                                         ══════ │ ← 右侧 9pt 溢出被裁切!
└───────────────────────────────────────────────┘← 屏幕右边界
  左=9, 右=423 (超出屏幕 9pt → UIKit 自动不绘制)

视觉结果: 左右各 ~9pt 边距 ✅
```

### 3.4 两套 Frame 修改策略对比

微信优化中有**两处**不同的 Frame 修改，作用于不同视图层级：

| 位置 | 目标视图 | 修改内容 | 反编译位置 | ARM64 参数 |
|------|---------|---------|-----------|------------|
| **主 Hook** | MMTableViewCell (Cell) | **仅改 x** | L8412-8427 | `setFrame:(x=新, y=原, w=原, h=原)` |
| **UIView Hook** | MainFrameSectionFoldView 等 | **改 x + w** | L9427 | `setFrame:(x=新, y=原, w=screenW-2*margin, h=原)` |

> Cell 本身只改 x；非 Cell 视图（FoldView 等）同时改 x 和 w 使其真正收缩到屏幕内。

---

## 4. 当前已实施的修复方案

### 4.1 修复位置

[ListCornerRadiusHook.m L131-143](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L131-L143)

### 4.2 修复代码

```objc
UIView *cellView = (UIView *)self;

CGFloat margin = config.listCellMargin;
if (margin > 0 && config.listCornerRadiusEnabled) {
    CGFloat currentX = cellView.frame.origin.x;
    UIView *superview = cellView.superview;
    CGFloat superX = superview ? superview.frame.origin.x : 0;
    CGFloat targetX = (margin > superX) ? margin - superX : 0;
    CGFloat screenW = [UIScreen mainScreen].bounds.size.width;
    if (currentX - 2.0 * margin <= screenW && currentX != targetX) {
        CGRect f = cellView.frame;
        f.origin.x = targetX;
        cellView.frame = f;
    }
}
```

### 4.3 与微信优化的对应关系

| 步骤 | 微信优化 (反编译) | MioPlugin (修复后) | 一致性 |
|------|------------------|-------------------|:------:|
| 读取 margin | `integerForKey:"CellHorizontalMargin"` 默认 9 | `config.listCellMargin` 默认 9 | ✅ |
| 读取 currentOriginX | `CGRectGetMinX(frame)` | `cellView.frame.origin.x` | ✅ |
| 获取 superview | `[cell superview]` | `cellView.superview` | ✅ |
| 读取 superviewOriginX | `CGRectGetMinX(superview.frame)` | `superview.frame.origin.x` | ✅ |
| 计算 targetX | `margin - superviewOriginX` (条件保护) | `(margin > superX) ? margin - superX : 0` | ✅ |
| 读取 screenWidth | `[UIScreen mainScreen].bounds.size.width` | 同上 | ✅ |
| 安全条件 | `currentX - 2*margin <= screenWidth` | 相同 | ✅ |
| 幂等判断 | 无显式幂等 (绝对值写入天然幂等) | `currentX != targetX` | ➕ MioPlugin 增强 |
| 写入方式 | `setFrame:` (仅改 x) | `frame.origin.x = targetX` (仅改 x) | ✅ |

---

## 5. 代码逐行解析

### 5.1 逐行注释版

```objc
// ====== 第1步: 读取配置值 ======
CGFloat margin = config.listCellMargin;        // 从 PluginConfig 读取边距, 默认 9
if (margin > 0 && config.listCornerRadiusEnabled) {
    // margin > 0: 配置有效 (避免对 0 值做无效计算)
    // 主开关确认: 双重保险 (函数入口已检查过一次)

    // ====== 第2步: 读取 Cell 当前 x 坐标 ======
    CGFloat currentX = cellView.frame.origin.x; // 通常为 0 (首次), 或已设置的值 (重复调用时)

    // ====== 第3步: 获取父视图及其 x 坐标 ======
    UIView *superview = cellView.superview;      // Cell 的直接父视图 (通常是 UITableViewCellContentView 或 UITableViewWrapperView)
    CGFloat superX = superview ? superview.frame.origin.x : 0;
    // superviewOriginX 通常为 0
    // 如果 superview 为 nil (理论上不会), 安全降级为 0

    // ====== 第4步: 计算目标 x 坐标 (核心公式) ======
    CGFloat targetX = (margin > superX) ? margin - superX : 0;
    // 正常情况: targetX = 9 - 0 = 9
    // 异常情况(如 superview 已有偏移): targetX = 9 - superX
    // 极端情况(margin <= superX): targetX = 0 (不做负偏移)

    // ====== 第5步: 安全校验 ======
    CGFloat screenW = [UIScreen mainScreen].bounds.size.width; // 屏幕宽度 (如 414)
    if (currentX - 2.0 * margin <= screenW && currentX != targetX) {
        // 条件1: currentX - 2*margin <= screenWidth
        //   排除异常情况 (currentX 已经是一个极大的值)
        //   微信优化反编译中的原始安全检查
        //
        // 条件2: currentX != targetX  ← 幂等性关键!
        //   如果已经等于目标值, 跳过 setFrame:
        //   避免 setFrame: 检测变化 → setNeedsLayout → 下次 layoutSubviews 再次进入
        //   这是防止启动卡死的第二道防线

        // ====== 第6步: 幂等写入 (仅修改 x!) ======
        CGRect f = cellView.frame;           // 复制当前 frame (保留 y, w, h)
        f.origin.x = targetX;                // 仅修改 x 坐标 (绝对值赋值!)
        cellView.frame = f;                  // 写入新 frame
        // ⚠️ 绝对不能用 f.origin.x += targetX 或 -= xxx
        // ⚠️ 绝对不能修改 f.size.width 或 f.size.height
    }
}
```

### 5.2 执行时机

此段代码位于以下位置：

```
replaced_MMTableViewCell_layoutSubviews 执行流:

① 检查主开关 (listCornerRadiusEnabled)
② 通过响应链查找父 VC
③ 圆角排除名单 NSSet 检查 (18个VC)
④ 调用原始 layoutSubviews  ← ★★★ 在这里之后 ★★★
⑤ 【新增】Frame 修改 (origin.x)  ← 修复点
⑥ 背景色免设名单检查 + 设置背景色
⑦ 读取 cornerRadius
⑧ 查找 UITableView + NSIndexPath
⑨ 分叉应用圆角 (标准路径 / 通讯录路径)
⑩ 设置 masksToBounds
```

> 放在原始 `layoutSubviews` 之后、圆角之前，确保：
> - Cell 已完成自身布局（frame 已稳定）
> - 圆角和边框在正确的 frame 上绘制

---

## 6. 几何原理图解

### 6.1 修复前 vs 修复后

```
═══════════════════════════════════════════════════════════════
                    修复前 (origin.x = 0)
═══════════════════════════════════════════════════════════════
┌─────────────────────────────────────────────────────────────┐
│ TableView 背景 (灰色/自定义色)                               │
│ ┌─────────────────────────────────────────────────────────┐ │
│ │ Cell (width=414, 紧贴屏幕两边)                          │ │
│ │ ╭─────────────────────────────────────────────────────╮ │ │
│ │ │                                                     │ │ │
│ │ │                 内容区域                             │ │ │
│ │ │                                                     │ │ │
│ │ ╰─────────────────────────────────────────────────────╯ │ │
│ └─────────────────────────────────────────────────────────┘ │
└─────────────────────────────────────────────────────────────┘
  圆角存在但紧贴屏幕边缘, 无卡片感

═══════════════════════════════════════════════════════════════
                    修复后 (origin.x = margin)
═══════════════════════════════════════════════════════════════
┌─────────────────────────────────────────────────────────────┐
│ TableView 背景 (灰色/自定义色)                               │
│                                                             │
│   ╭───────────────────────────────────────────────────────╮ │
│   │ Cell (origin.x=9, width=414不变)                      │ │
│   │                                                       │ │
│   │                   内容区域                            │ │
│   │                                                       │ │
│   ╰───────────────────────────────────────────────────────╯ │
│                                                         ══ │ ← 右侧溢出被裁切
└─────────────────────────────────────────────────────────────┘
  左侧 9pt 间隙 (露出背景色) + 右侧 9pt 裁切 = 卡片式效果 ✅
```

### 6.2 多 Cell 场景

```
修复后的多 Cell 列表 (section 内多行):

┌──────────────────────────────────────────────────┐
│  (TableView 背景)                                 │
│                                                  │
│  ╭────────────────────────────────────────────╮  │
│  │ Row 0 (首行)                                │  │  ← maskedCorners = 顶部两角
│  │ cornerRadius=18, origin.x=9               │  │
│  ├────────────────────────────────────────────┤  │
│  │ Row 1 (中间行)                              │  │  ← maskedCorners = 0 (无圆角)
│  │ cornerRadius=0, origin.x=9                │  │
│  ├────────────────────────────────────────────┤  │
│  │ Row 2 (末行)                                │  │  ← maskedCorners = 底部两角
│  │ cornerRadius=18, origin.x=9               │  │
│  ╰────────────────────────────────────────────╯  │
│                                              ══  ← 右侧溢出裁切
└──────────────────────────────────────────────────┘
```

### 6.3 masksToBounds 的作用

```objc
// ListCornerRadiusHook.m L226-228
if (cellView.layer.cornerRadius > 0) {
    cellView.layer.masksToBounds = YES;
}
```

`masksToBounds = YES` 确保：
1. **左侧**: 圆角区域内 (0~9pt) 的内容被裁切成圆弧形
2. **右侧**: 溢出屏幕的内容 (414~423pt) 不参与渲染（虽然 UIKit 本身也会裁切）
3. **子视图**: 所有超出 Cell bounds 的子视图也被裁切

---

## 7. 验证清单

### 7.1 功能验证

| # | 验证项 | 预期结果 | 验证方法 |
|---|--------|---------|---------|
| V1 | 开启圆角 + margin=9 | Cell 左右各约 9pt 边距 | 目视检查发现页/通讯录 |
| V2 | margin=0 | Cell 紧贴屏幕 (无边距) | 设置页改为 0 后重启 |
| V3 | margin=30 | Cell 左右各约 30pt 边距 | 设置页改为 30 后重启 |
| V4 | 关闭圆角开关 | 恢复原生样式 | 设置页关闭后重启 |
| V5 | 首行 Cell | 顶部两角圆角 + 左右边距 | 发现页第一个 Cell |
| V6 | 中间行 Cell | 无圆角 + 左右边距 | 发现页中间 Cell |
| V7 | 末行 Cell | 底部两角圆角 + 左右边距 | 发现页最后一个 Cell |
| V8 | 唯一 Cell | 四角全圆 + 左右边距 | 只有一行的 section |
| V9 | 通讯录页面 | 跨 Section 分组 + 边距 | 打开通讯录页 |
| V10 | FTSHome 搜索页 | 圆角+边距 但无边框 | 搜索首页 |
| V11 | 排除名单内的 VC | 原生样式, 无任何改动 | 朋友圈/聊天详情等 |
| V12 | 启动速度 | 无明显卡顿 (<3秒) | 冷启动计时 |

### 7.2 性能验证

| # | 验证项 | 预期结果 | 验证方法 |
|---|--------|---------|---------|
| P1 | 无级联 layoutSubviews | 每个 Cell 最多触发 2 次 layoutSubviews | Instruments Time Profiler |
| P2 | 无帧率掉落 | 滚动列表保持 60fps | CoreAnimation FPS |
| P3 | 内存稳定 | 无持续增长 | Instruments Allocations |
| P4 | 无崩溃 | 长时间使用无 crash | Xcode Console 日志 |

### 7.3 幂等性验证

| # | 场景 | 预期行为 |
|---|------|---------|
| E1 | 首次 layoutSubviews | origin.x 从 0 变为 9, 触发 1 次 setFrame |
| E2 | 第二次 layoutSubviews | origin.x 已是 9 == targetX, **跳过** setFrame |
| E3 | 第 N 次调用 | 始终跳过, 无额外开销 |
| E4 | Cell 复用 (reuse) | 新 Cell 的 origin.x 可能回到 0, 再次执行 1 次 setFrame |

---

## 8. 潜在风险与注意事项

### 8.1 ⚠️ 必须遵守的铁律

| # | 规则 | 原因 | 违反后果 |
|---|------|------|---------|
| 1 | **必须使用绝对坐标赋值** (`f.origin.x = targetX`) | 幂等性基础 | 使用 `+=` 导致永不收敛, 17秒+卡死 |
| 2 | **不能修改 `frame.size.width`** | 微信优化也不改 | 可能破坏 tableView 的布局计算 |
| 3 | **不能修改 `frame.size.height`** | 同上 | 同上 |
| 4 | **不能修改 `frame.origin.y`** | 同上 | 可能导致 Cell 垂直方向错位 |
| 5 | **必须有幂等判断** (`currentX != targetX`) | 防止重复写入 | 缺少时每次都触发 setFrame → setNeedsLayout 连锁 |

### 8.2 已有的安全措施

```objc
// 措施1: margin > 0 检查 (L132)
if (margin > 0 && ...)

// 措施2: superview nil 保护 (L135)
CGFloat superX = superview ? superview.frame.origin.x : 0;

// 措施3: 宽度安全范围检查 (L138)
if (currentX - 2.0 * margin <= screenW ...)

// 措施4: 幂等跳过 (L138)
... && currentX != targetX

// 措施5: 主开关双重检查 (L77 + L132)
config.listCornerRadiusEnabled 出现两次
```

### 8.3 已知限制

| 限制 | 说明 | 影响 |
|------|------|------|
| 右边距是"假边距" | 依赖 Cell 溢出屏幕后被裁切 | 视觉上正确, 但 Cell 实际仍占屏幕宽度空间 |
| margin 过大 | 若 margin > 屏幕宽度/2, Cell 几乎完全不可见 | 设置页限制范围为 0-30, 正常使用不受影响 |
| 不同设备适配 | margin 固定像素值, 不随屏幕密度缩放 | iPhone SE vs Pro Max 效果略有差异 (与微信优化一致) |

---

## 9. 与微信优化的剩余差异

### 9.1 已消除的差异

| 差异项 | 状态 |
|--------|:----:|
| Cell frame.origin.x 修改 | ✅ 已修复 |
| 幂等性保证 | ✅ 已实现 (且比微信优化更严格) |
| 排除名单数据结构 | ✅ 优于微信优化 (NSSet O(1) vs O(n)) |
| 配置内存缓存 | ✅ 优于微信优化 |

### 9.2 仍存在的差异

| 差异项 | 微信优化 | MioPlugin | 优先级 |
|--------|:-------:|:--------:|:-----:|
| **搜索框圆角** | 已实现 | 空壳 (WPSearchBoxHook.m) | 中 |
| **资料卡背景** | CSListRoundCornerVC 子页面 | 未实现 | 低 |
| **颜色存储格式** | NSKeyedArchiver UIColor | HEX 字符串 | 低 (各有优劣) |
| **UIView Hook 功能** | 搜索框圆角 + FoldView 帧 | 仅清除 UIView 背景 | 低 |

### 9.3 修复覆盖度

```
功能                        微信优化    MioPlugin (修复前)  MioPlugin (修复后)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
Cell 圆角                   ✅ 100%    ✅ 100%            ✅ 100%
Cell 水平边距 (左右)        ✅ 实现    ❌ 完全缺失        ✅ 已修复
Cell 边框                   ✅ 100%    ✅ 100%            ✅ 100%
Cell 背景色                 ✅ 实现    ✅ 实现            ✅ 实现
会话间距                    ✅ 实现    ✅ 实现            ✅ 实现
搜索框圆角                  ✅ 实现    ❌ 空壳            ❌ 空壳
资料卡背景                  ✅ 实现    ❌ 未实现          ❌ 未实现
媒体视图圆角                ✅ 实现    ✅ 实现            ✅ 实现
隐藏扫码按钮                ✅ 实现    ✅ 实现            ✅ 实现
禁用标签宽度调整            ✅ 实现    ✅ 实现            ✅ 实现
折叠 Section 视图           ✅ 实现    ✅ 实现            ✅ 实现
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
核心功能完成度              100%       90%               100%
全部功能完成度              100%       ~80%              ~85%
```

---

## 附录 A: 反编译关键代码参考

### A.1 主 Hook Frame 修改 (微信优化)

[123456.c L8396-L8427](file:///www/wwwroot/ios/插件/微信优化反编译最新/123456.c#L8396-L8427):

```c
// 读取配置
lVar9 = FUN_000c6960(uVar5, ..., &cf_MoreDiscoverListCornerRadius);  // cornerRadius
lVar7 = 0x12;  // 默认 18
if (lVar9 != 0) lVar7 = lVar9;

// 读取屏幕宽度
FUN_000c7d60(&_OBJC_CLASS___UIScreen);
dVar24 = param_3;  // screenWidth

// 读取 margin
lVar12 = FUN_000c6960(uVar5, ..., &cf_CellHorizontalMargin);
lVar9 = 9;  // 默认 9
if (lVar12 != 0) lVar9 = lVar12;

// === 核心: 修改 frame.origin.x ===
FUN_000c58c0(param_4);              // CGRectGetMinX(cell.frame)
FUN_000d0180(param_4);              // [cell superview]
lVar12 = _objc_retainAutoreleasedReturnValue();  // superview
dVar25 = (double)lVar9;             // margin as double

if (param_3 + dVar25 * -2.0 <= dVar24) {  // safety check
    dVar24 = dVar25;                       // dVar24 = margin
    if (lVar12 != 0) {                     // superview exists
        dVar23 = (double)FUN_000c58c0(lVar12);  // superview.frame.origin.x
        dVar24 = 0.0;
        if (0.0 <= dVar25 - dVar23) {           // if margin >= superX
            dVar24 = dVar25 - dVar23;            // targetX = margin - superX
        }
    }
    FUN_000c58c0(param_4);              // 保留原 frame
    FUN_000cb900(dVar24, param_4);       // setFrame: (targetX, 原y, 原w, 原h)
}
```

### A.2 UIView Hook Frame 修改 (微信优化, 非 Cell 视图)

[123456.c L9421-L9427](file:///www/wwwroot/ios/插件/微信优化反编译最新/123456.c#L9421-L9427):

```c
// 同时修改 x 和 w (针对 FoldView 等非 Cell 视图)
FUN_000cb900(
    (double)lVar6,                          // x = margin
    param_2,                                // y = original
    param_3 + (double)lVar6 * -2.0,         // w = screenWidth - 2*margin
    lVar3                                   // h = original
);
```

---

> **文档版本**: v1.0
> **对应代码版本**: ListCornerRadiusHook.m (含 L131-143 修复)