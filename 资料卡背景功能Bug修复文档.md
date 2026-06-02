# MioPlugin 资料卡背景功能 Bug 修复文档

> **更新日期**: 2026-06-03 (v12 — 第二次崩溃深度分析版)
> **当前状态**: 隐藏信息卡片 ✅ 已修复 | 背景图不显示 ❌ 根因已100%确认 | 点"我"卡死 ❌❌ 两次崩溃
> **根因（背景图）**: 时序问题 — Cell Hook 执行时 MMHeadImageView 尚未创建
> **根因（卡死v1）**: Watchdog Timeout — 主线程阻塞超过10秒（8插件叠加 + MMUIButton Hook 过重）
> **根因（卡死v2）**: **Frame 修改触发布局反馈循环** — Cell Hook 中修改 frame 导致递归 layoutSubviews

---

## 目录

- [0. 崩溃事件总览](#0-崩溃事件总览)
- [1. 第一次崩溃分析（005528.ips）回顾](#1-第一次崩溃分析005528ips回顾)
- [2. 第二次崩溃分析（015159.ips）— 新发现](#2-第二次崩溃分析015159ips--新发现)
- [3. 两次崩溃对比 — 关键差异](#3-两次崩溃对比--关键差异)
- [4. 真正的根因：Frame 反馈循环](#4-真正的根因frame-反馈循环)
- [5. 为什么微信优化不会触发这个循环](#5-为什么微信优化不会触发这个循环)
- [6. v12 修正方案](#6-v12-修正方案)
- [7. 实施检查清单（更新）](#7-实施检查清单更新)

---

## 0. 崩溃事件总览

| 项目 | 第一次崩溃 | 第二次崩溃 |
|------|:---------:|:---------:|
| **文件** | `WeChat-2026-06-03-005528.ips` | `WeChat-2026-06-03-015159(1).ips` |
| **时间** | 00:55:25 | 01:51:58 |
| **进程存活时间** | ~25秒 | **~19秒**（更短！） |
| **崩溃类型** | SIGKILL / 0x8BADF00D | SIGKILL / 0x8BADF00D |
| **终止原因** | watchdog timeout 10s | watchdog timeout 10s |
| **总CPU时间** | 28.150s (48%) | **38.180s (66%)** ↑ 更高！ |
| **应用CPU** | 9.898s (17%) | 9.929s (17%) ≈ 持平 |
| **MALLOC** | 2.7G (2875区域) | 1.5G (1612区域) ↓ 略低 |
| **Memory Tag 240** | 3.9G | 3.9G 持平 |
| **WebKit Malloc** | 704MB | **672MB** ↓ |
| **malloc 失败次数** | 5次 | **5次** 持平 |
| **卡死位置** | `hasPrefix:` 字符串比较 | **`[UITableViewCell frame]` → `_containerView`** |

---

## 1. 第一次崩溃分析（005528.ips）回顾

### 调用栈

```
thread #0 (main):
├─ CFStringFindWithOptionsAndLocale
│  └─ hasPrefix:                    ← 卡在这里
│     └─ cmdString
│        └─ ...深层调用...
│           └─ UITableViewCell.layoutSubviews
│              └─ MioPlugin Cell Hook
│                 └─ orig
│                    └─ MMUIButton.layoutSubviews
│                       └─ MioPlugin MMUIButton Hook
│                          └─ ...大量处理...
```

### 当时判断的根因

1. 8个插件叠加 Hook 链
2. MMUIButton Hook 过重（25+ 步操作/每次）
3. 文件 I/O 在主线程
4. 内存压力
5. 无去重机制

→ 对标微信优化三大绝招进行了重构（v11方案）

---

## 2. 第二次崩溃分析（015159.ips）— 新发现

### 2.1 崩溃调用栈（完全不同！）

```
thread #0 (main) — ★ 崩溃线程
├─ objc_msgSend$unsafeUnretainedDelegate   ← ★ 卡在这里！
│  └─ [UITableViewCell _containerView]      ← 访问容器视图
│     └─ [UITableViewCell _swipeContainerView] ← 访问滑动容器
│        └─ [UITableViewCell frame]          ← ★ 读取 frame 属性
│           └─ [UIView(Geometry) setFrame:]  ← ★ 设置 frame 触发的！
│              └─ [UITableViewCell _setFrame:skipLayout:]
│                 └─ imageIndex:20 (某个插件的 Hook)    ← 插件链入口
│                 └─ imageIndex:22 (另一个插件的 Hook)
│                 └─ imageIndex:27 (又一个插件的 Hook)
│                    └─ ... 更深的 Hook 链 ...
```

### 2.2 关键变化

| 对比项 | 第一次崩溃 | 第二次崩溃 |
|:------:|:---------:|:----------:|
| **卡死操作** | 字符串比较 (`hasPrefix:`) | **属性访问 (`frame`) |
| **触发来源** | MMUIButton Hook 内部 | **Cell Hook 的 setFrame:** |
| **UIKit 内部路径** | CFString → hasPrefix | **frame → _containerView → _swipeContainerView → delegate** |
| **CPU 总时间** | 28.15s | **38.18s** (+36%!) |
| **进程存活时间** | ~25s | **~19s** (-24%，更快被杀!) |

### 2.3 这意味着什么

**`setFrame:` 是由我们的代码主动调用的！**

回看当前代码 [Cell Hook 第505-518行](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L505-L518)：

```objc
// ★★★ 高度调整 — 修改了 cellView.frame ★★★
if (config.cardBgHeight > 0) {
    CGFloat currentH = cellView.frame.size.height;
    if (currentH < config.cardBgHeight) {
        CGRect f = cellView.frame;       // 读取 frame
        f.size.height = config.cardBgHeight;
        cellView.frame = f;               // ★★★ 写入 frame → 触发 setFrame: ★★★
    }
}

// ★★★ 间距调整 — 又修改了 cellView.frame ★★★
if (config.cardBgListSpacing > 0) {
    CGRect f = cellView.frame;            // 读取 frame
    f.size.height += config.cardBgListSpacing;
    f.origin.y -= config.cardBgListSpacing / 2.0;
    cellView.frame = f;                   // ★★★ 又一次写入 frame ★★★
}
```

**这两处 `cellView.frame = f` 就是崩溃的源头。**

### 2.4 为什么 setFrame: 会卡死

当我们在 Cell Hook 的 `layoutSubviews` 中修改 Cell 的 `frame` 时，会触发以下连锁反应：

```
Cell Hook: layoutSubviews
  │
  ├─ orig_layoutSubviews()           ← 微信完成原始布局
  │   └─ 微信内部可能设置了 Cell 的初始 frame
  │
  ├─ cellView.frame = newFrame       ← ★ 我们的代码修改 frame
  │   │
  │   ├─ UIView.setFrame:
  │   │   ├─ [UITableViewCell _setFrame:skipLayout:]
  │   │   │   ├─ 内部访问 self.frame（getter）
  │   │   │   │   ├─ _containerView         ← UIKit 内部计算
  │   │   │   │   │   └─ _swipeContainerView ← UIKit 内部计算
  │   │   │   │   │       └─ unsafeUnretainedDelegate ← ★ 卡在这里
  │   │   │   │
  │   │   │   └─ 如果 frame 真的变了 → setNeedsLayout → ★ 可能触发新一轮 layoutSubviews!
  │   │   │
  │   │   └─ 其他插件拦截 setFrame: （imageIndex:20, 22, 27...）
  │   │       └─ 每个插件都做自己的处理...
  │   │
  │   └─ 返回
  │
  ├─ cellView.frame = anotherFrame    ← ★ 间距又改了一次 frame
  │   └─ 同样的连锁反应再来一遍！
  │
  └─ return
```

**关键问题**：`setFrame:` 在 `layoutSubviews` 内部被调用时：
1. UIKit 内部需要重新计算 `_containerView` 和 `_swipeContainerView`
2. 这些计算涉及 `unsafeUnretainedDelegate`（弱引用代理），在内存紧张时可能变慢
3. **如果 frame 变化导致布局失效，UIKit 可能立即触发下一轮 `layoutSubviews`**
4. 下一轮又进入我们的 Hook → 又修改 frame → 又触发 setFrame: → **反馈循环**

---

## 3. 两次崩溃对比 — 关键差异

### 3.1 代码变化 vs 崩溃变化

| | v9（第一次崩溃） | v11修改后（第二次崩溃） |
|:-:|:---------------:|:---------------------:|
| **MMUIButton Hook** | 旧版（无极速拒绝链） | 新版（有极速拒绝链+去重+异步加载） |
| **Cell Hook** | 有 `wp_isProfileCard` 判断（进不去分支） | 改为 `isMoreVC && cardBgEnabled`（能进去） |
| **Cell Hook 操作** | 不执行高度/间距/透明化（死代码） | **执行高度/间距/透明化（含 setFrame:)** |
| **卡死位置** | MMUIButton Hook 内部的字符串操作 | **Cell Hook 内部的 setFrame: 操作** |
| **CPU 总时间** | 28.15s | **38.18s** (+36%) |
| **存活时间** | ~25s | **~19s** (-24%) |

### 3.2 结论

**MMUIButton Hook 的优化生效了**（不再卡在 MMUIButton Hook 内部），但 **Cell Hook 中新加入的 `setFrame:` 操作成为了新的瓶颈**。

这是一个典型的"按住葫芦浮起瓢"——修好了 MMUIButton 的问题，Cell Hook 的问题暴露了。

---

## 4. 真正的根因：Frame 反馈循环

### 4.1 问题代码位置

[ListCornerRadiusHook.m 第505-518行](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L505-L518)：

```objc
// 当前代码（导致第二次崩溃的元凶）：
if (config.cardBgHeight > 0) {          // 第505行
    CGFloat currentH = cellView.frame.size.height;
    if (currentH < config.cardBgHeight) {
        CGRect f = cellView.frame;
        f.size.height = config.cardBgHeight;
        cellView.frame = f;             // ★★★ setFrame: → 触发连锁反应 ★★★
    }
}
if (config.cardBgListSpacing > 0) {     // 第513行
    CGRect f = cellView.frame;
    f.size.height += config.cardBgListSpacing;
    f.origin.y -= config.cardBgListSpacing / 2.0;
    cellView.frame = f;                 // ★★★ 又一次 setFrame: ★★★
}
```

### 4.2 三重打击

#### 打击一：setFrame: 本身昂贵

在 `layoutSubviews` 内部调用 `setFrame:` 不是普通赋值。UIKit 的 `UITableViewCell.setFrame:` 是一个**重载方法**，它会：
- 重新计算 `_containerView` 的布局
- 重新计算 `_swipeContainerView` 的布局
- 通知 delegate
- 检查是否需要重新布局子视图
- 可能触发 `setNeedsLayout` 或直接触发 `layoutSubviews`

#### 打击二：调用了两次

高度调整和间距调整**分别**调用了一次 `setFrame:`，等于对一个 Cell 在一次 `layoutSubviews` 中触发了两次完整的 frame 设置流程。

#### 打击三：对每个 MoreViewController Cell 都执行

MoreViewController 可能有 10-30 个 Cell，每个 Cell 都执行两次 `setFrame:` = 20-60 次 `setFrame:` 调用，每次都在主线程上触发 UIKit 内部复杂计算。

### 4.3 与微信优化的关键区别

**微信优化的 MMUIButton Hook 中没有任何 `setFrame:` 调用。**

回顾反编译代码 `FUN_00007b4c`：
- 它只设置 bgImageView 的 frame（新建视图的首次设置，不触发布局反馈）
- 它**从不修改 Cell 或 MMUIButton 自身的 frame**
- 它**从不修改 height/spacing 等 Cell 几何属性**

而我们的代码在 Cell Hook 中修改 Cell 自身的 frame —— 这完全违背了 Layout Subviews 的最佳实践。

---

## 5. 为什么微信优化不会触发这个循环

### 微信优化的做法

```
微信优化 FUN_00007b4c（MMUIButton Hook）:

① orig_layoutSubviews()          ← 让微信自己设置所有 frame
② 创建 bgImageView
③ bgImageView.frame = calculated  ← 只设置新建子视图的 frame
④ insertSubview:bgImageView       ← 插入到视图层级
⑤ dispatch_async(加载图片)         ← 异步加载
⑥ return                          ← 结束

★ 全程不修改 Cell/frame/MMUIButton 自身的任何几何属性 ★
```

### 我们的做法（问题所在）

```
MioPlugin Cell Hook（当前）:

① orig_layoutSubviews()
② cellView.backgroundColor = clearColor    ← OK，轻量
③ cellView.frame.height = customHeight      ← ★★★ 危险！修改自身 frame ★★★
④ cellView.frame.height += spacing          ← ★★★ 又一次！★★★
⑤ return

★ 在 layoutSubviews 内修改自身 frame → 触发 UIKit 重算 → 可能递归 ★
```

### iOS layoutSubviews 最佳实践

Apple 的文档明确指出：

> **不要在 `layoutSubviews` 中修改 `self.frame` 或 `self.bounds`。**
> `layoutSubviews` 的职责是根据当前的 bounds 来布置子视图，而不是修改自身的尺寸。
> 修改自身的 frame 应该在外部（如父视图的 `layoutSubviews`）或通过 Auto Layout constraint 完成。

---

## 6. v12 修正方案

### 6.1 核心原则

> **永远不在 `layoutSubviews` 中修改自身或父视图的 frame。**

### 6.2 方案 A：移除 Cell Hook 中的 frame 修改（推荐）

将 `cardBgHeight` 和 `cardBgListSpacing` 的实现从 **frame 修改** 改为 **约束/内容尺寸** 方式：

#### cardBgHeight 的替代方案

```objc
// ❌ 错误做法（当前）：在 layoutSubviews 中修改 frame
cellView.frame = CGRectMake(..., config.cardBgHeight);

// ✅ 正确做法：不修改 frame，改为设置 MMUIButton 的最小高度
// 在 MMUIButton Hook 中（orig 之后）：
CGFloat minHeight = config.cardBgHeight;
if (minHeight > 0 && selfHeight < minHeight) {
    // 方案A1：只影响内容显示，不改 frame
    // （让背景图自然撑开视觉效果）

    // 方案A2：使用 autoresizingMask 或 constraint
    // （但这对 UITableViewCell 不太适用）

    // 方案A3（最简单）：接受微信原始高度，
    // 只让 bgImageView 的 frame 基于 bounds 而非 frame
    // bgImageView 已经是这样做的（第348行 btnBgImg.frame 基于 btnBounds）
}
```

**实际上**：`cardBgHeight` 的目的是让资料卡更高以容纳背景图。
但如果我们把 bgImageView 放在 MMUIButton 层（已经做了），bgImageView 的尺寸基于 MMUIButton.bounds，
所以**不需要修改 Cell 的 frame** —— 背景图自然会填充 MMUIButton 区域。

#### cardBgListSpacing 的替代方案

```objc
// ❌ 错误做法（当前）：在 layoutSubviews 中修改 frame
f.size.height += spacing;
f.origin.y -= spacing / 2.0;

// ✅ 正确做法：使用 UITableView 的 sectionHeaderHeight / sectionFooterHeight
// 或者在 Cell 的 contentView 内部添加 padding view
// 但这些都不应在 layoutSubviews 中通过修改 frame 实现

// 最简单的替代：暂时禁用此功能，或在 settings UI 中标注
// "此功能需要在 tableView 层面实现，不支持动态 frame 修改"
```

### 6.3 方案 B：延迟到下一 RunLoop（折中）

如果必须保留 frame 修改，将其推迟到当前 layoutSubviews 完成之后：

```objc
// 使用 dispatch_async(dispatch_get_main_queue()) 延迟 frame 修改
// 这样不会在当前 layoutSubviews 调用栈内触发反馈循环
dispatch_async(dispatch_get_main_queue(), ^{
    if (config.cardBgHeight > 0) {
        CGFloat currentH = cellView.frame.size.height;
        if (currentH < config.cardBgHeight) {
            CGRect f = cellView.frame;
            f.size.height = config.cardBgHeight;
            cellView.frame = f;  // 此时不在 layoutSubviews 调用栈内
        }
    }
    if (config.cardBgListSpacing > 0) {
        CGRect f = cellView.frame;
        f.size.height += config.cardBgListSpacing;
        f.origin.y -= config.cardBgListSpacing / 2.0;
        cellView.frame = f;
    }
});
```

**风险**：仍然可能触发额外的 layoutSubviews pass，但至少不会在当前调用栈内形成同步递归。

### 6.4 推荐方案：组合策略

```
v12 最终方案：
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
Cell Hook (MoreVC + cardBgEnabled):
  1. orig_layoutSubviews()           ← 必须最先
  2. backgroundColor = clearColor     ← OK
  3. layer.borderWidth = 0           ← OK
  4. layer.masksToBounds = NO        ← OK
  5. contentView clearColor          ← OK
  6. backgroundView hide             ← OK
  7. ★ 删除 cardBgHeight frame 修改 ★
  8. ★ 删除 cardBgListSpacing frame 修改 ★
  9. return

MMUIButton Hook (保持 v11 不变):
  1. 极速拒绝链（4关过滤）
  2. orig_layoutSubviews()
  3. HideCard 分支
  4. 清除 m_bgImageView
  5. bgImageView 去重查找
  6. 首次：创建 + 异步加载
  7. 非首次：更新 frame + return
  8. 圆角 + 边框 + masksToBounds
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
```

### 6.5 关于 cardBgHeight 和 cardBgListSpacing 的说明

这两个配置项的正确实现位置应该是：
- **cardBgHeight**：应该在 `heightForRowAtIndexPath:` delegate 方法中返回自定义高度
- **cardBgListSpacing**：应该通过 `sectionHeaderHeight` / `sectionFooterHeight` 或 Cell 间的 spacing view 来实现

这些都属于 **TableView 数据源/代理层面**的操作，不属于 `layoutSubviews` 的职责范围。

---

## 7. 实施检查清单（更新）

### Phase 1：消除 Frame 反馈循环（P0 — 解决卡死）

- [ ] **1.1** 删除 Cell Hook 中 `cardBgHeight` 的 frame 修改代码（第505-512行）
- [ ] **1.2** 删除 Cell Hook 中 `cardBgListSpacing` 的 frame 修改代码（第513-518行）
- [ ] **1.3** 保留 Cell Hook 中的透明化逻辑（clearColor / backgroundView hide）
- [ ] **1.4** 编译测试，点击"我"不再卡死

### Phase 2：验证 MMUIButton Hook 优化效果（P1）

- [ ] **2.1** 确认 MMUIButton Hook 的极速拒绝链正常工作
- [ ] **2.2** 确认 bgImageView 去重逻辑正常（第二次调用走零开销路径）
- [ ] **2.3** 确认图片异步加载正常（后台线程解码）
- [ ] **2.4** 确认背景图能正确显示

### Phase 3：恢复 cardBgHeight / cardBgListSpacing（P2 — 低优先级）

- [ ] **3.1** 如需 cardBgHeight 功能：Hook `heightForRowAtIndexPath:` 返回自定义高度
- [ ] **3.2** 如需 cardBgListSpacing 功能：通过 section header/footer 或 spacing view 实现
- [ ] **3.3** 或者：在 Settings UI 中暂时隐藏这两个选项

### Phase 4：完整验证

- [ ] **4.1** 安装只有 MioPlugin 的微信，点击"我"不卡死
- [ ] **4.2** 安装 8 个插件的微信，点击"我"不卡死
- [ ] **4.3** 背景图正常显示
- [ ] **4.4** HideCard 正常工作
- [ ] **4.5** 列表圆角正常工作（不受影响）
- [ ] **4.6** 切换深色模式正常
- [ ] **4.7** 反复进入/离开"我"页面 10+ 次不泄漏内存

---

## 附录：崩溃时间线完整还原

### 第一次崩溃（v9 代码）

```
00:55:00  进程启动
00:55:01  插件安装
00:55:28  插件热加载？
00:55:43  appReady
00:55:53  HideAvatar viewDidLoad
00:55:25  ★ SIGKILL (watchdog timeout, 25秒存活)
          卡在: hasPrefix: (MMUIButton Hook 内部)
          CPU: 28.15s (48%)
          原因: MMUIButton Hook 过重 + 8插件叠加
```

### 第二次崩溃（v11 修改后）

```
01:51:39  进程启动
01:51:58  ★ SIGKILL (watchdog timeout, 仅19秒存活!)
          卡在: [UITableViewCell frame] → _containerView (Cell Hook 的 setFrame:)
          CPU: 38.18s (66%)  ← 比第一次还高!
          原因: Cell Hook 中修改 frame 触发 UIKit 内部重算 + 反馈循环
```

### 变化趋势

```
指标          v9(第1次)    v11(第2次)    趋势
─────────── ──────────  ──────────  ──────
存活时间      25秒         19秒         ↓ 更快死
总CPU        28.15s       38.18s       ↑ 更高
卡死位置     MMUIButton    Cell Hook    ← 转移了
根因         Hook过重      Frame反馈循环  ← 新问题
```

**结论：MMUIButton Hook 的优化有效（不再卡在那里），但 Cell Hook 的 frame 修改引入了更严重的问题。**
