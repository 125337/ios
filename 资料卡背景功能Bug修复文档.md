# MioPlugin 资料卡背景功能 Bug 修复文档

> **更新日期**: 2026-06-03 (v13 — 最终根因确认版)
> **当前状态**: 隐藏信息卡片 ✅ 已修复 | 背景图不显示 ❌ | 圆角 ✅ 正常 | 边距 ❌ 无 | 点"我"卡死 ❌ 已知（frame问题）
> **根因（v13 最终确认）**: Cell Hook 中 `orig` 被调用两次，第二次覆盖了透明化设置

---

## 目录

- [0. 当前状态（截图证据）](#0-当前状态截图证据)
- [1. v13 根因：double-orig 覆盖问题](#1-v13-根因double-orig-覆盖问题)
- [2. 完整执行流追踪（带行号）](#2-完整执行流追踪带行号)
- [3. 为什么圆角正常但背景图不显示](#3-为什么圆角正常但背景图不显示)
- [4. 三大症状统一解释](#4-三大症状统一解释)
- [5. 修复方案（唯一正确做法）](#5-修复方案唯一正确做法)
- [6. 完整修复后的代码结构](#6-完整修复后的代码结构)
- [7. 实施检查清单](#7-实施检查清单)

---

## 0. 当前状态（截图证据）

从用户提供的截图可以确认：

```
┌──────────────────────────────────────────┐
│  ┌────────────────────────────────────┐  │
│  │ 📷 啊哲                     >    │  │  ← 绿色边框 ✅
│  │   微信号: gb1236542580           │  │  ← 圆角 ✅
│  │   + 状态  👥 2个朋友 ●         │  │
│  └────────────────────────────────────┘  │
│                                        │
│  ✓ 服务                           >     │  ← 圆角 ✅
│  □ 收藏                           >     │  ← 圆角 ✅
│  □ 朋友圈                         >     │  ← 圆角 ✅
│  □ 订单与卡包    [推荐]东鹏特饮...  >     │  ← 圆角 ✅
│  □ 表情                           >     │
│  □ 插件                           >     │
│                                        │
│  ⚙ 设置                           >     │  ← 圆角 ✅
└──────────────────────────────────────────┘
```

| 功能 | 状态 | 证据 |
|:----:|:----:|:-----|
| 列表圆角（其他Cell） | ✅ 正常 | 服务、收藏、朋友圈等都有圆角 |
| 资料卡圆角+边框 | ✅ 正常 | 截图中绿色边框 + 圆角清晰可见 |
| **资料卡背景图** | **❌ 不显示** | 显示的是默认白/灰色背景 |
| **资料卡间距** | **❌ 没有** | 卡片之间无额外间距 |
| 点击"我"卡死 | ❓ 未测试 | 上次因 frame 修改导致 |

---

## 1. v13 根因：double-orig 覆盖问题

### 1.1 问题代码

[ListCornerRadiusHook.m 第482-515行](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L482-L515)：

```objc
// 第482行：进入 MoreVC + cardBgEnabled 分支
if (isMoreVC && config.cardBgEnabled) {

    // ★ 第1次调用 orig（第484行）
    if (_orig_MMTableViewCell_layoutSubviews) {
        ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews(self, _cmd);
    }

    // 设置透明（第488行）
    cellView.backgroundColor = [UIColor clearColor];      // ← 设置了！
    cellView.layer.borderWidth = 0;
    cellView.layer.masksToBounds = NO;
    // ... contentView 透明化 ...
    // ... backgroundView 隐藏 ...

    // ★ 第510行：注释说 "不 return，继续往下执行"
    // ★ 问题就在这里！往下走会再次调用 orig！
}

// ★★★ 第513-515行：所有 Cell 都会走到这里 ★★★
if (_orig_MMTableViewCell_layoutSubviews) {
    ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews(self, _cmd);  // ← 第2次调用 orig！
}
```

### 1.2 执行时序

```
MoreVC 的资料卡 Cell 进入 layoutSubviews：
│
├─ 第482行：isMoreVC && cardBgEnabled → YES，进入分支
│   ├─ 第484行：orig() 第1次          ← 微信设置初始样式
│   │   └─ 微信内部：cell.backgroundColor = [UIColor whiteColor]
│   │       cell.backgroundView = grayView
│   │       ...
│   │
│   ├─ 第488行：backgroundColor = clearColor    ← ★ 我们设为透明 ★
│   ├─ 第490行：masksToBounds = NO
│   ├─ 第494行：contentView.backgroundColor = clearColor
│   ├─ 第500行：backgroundView.hidden = YES
│   │
│   │   ═══ 此时 Cell 是透明的，bgImageView 应该可见 ═══
│   │
│   └─ 第511行：（没有 return，继续往下走）
│
├─ 第513行：★ 又到了这里！（因为没 return）
│   └─ 第514行：orig() 第2次             ← ★ 微信重新设置样式！★
│       └─ 微信内部：cell.backgroundColor = [UIColor whiteColor]  ← ★ 覆盖了！★
│           cell.backgroundView = <重建或恢复>
│           cell.layer.borderWidth = ...
│           ...
│
│   ═══ 此时 Cell 又变回不透明的了！═══
│
├─ 第518-533行：margin 逻辑（修改 x, width）
├─ 第562-578行：backgroundColor 逻辑（又设一次颜色）
├─ 第581-624行：corner 逻辑（设置 cornerRadius）
└─ 第626行：masksToBounds = YES
```

### 1.3 关键证据

**为什么圆角正常？**

因为圆角逻辑在 **第581-624行**，在 **两次 orig 之后** 执行。所以圆角"赢了最后一场"——它覆盖了 orig 设置的默认圆角值。

**为什么背景图不显示？**

因为透明化逻辑在 **第488行**，在 **第一次 orig 之后、第二次 orig 之前** 执行。第二次 orig（第514行）把 backgroundColor 重置回白色/灰色，**覆盖了我们的透明设置**。

**这是一个经典的"执行顺序错误"——透明化设得太早，被后面的 orig 覆盖了。**

---

## 2. 完整执行流追踪（带行号）

### 2.1 MMUIButton Hook（第177-431行）— 正常工作

```
MMUIButton layoutSubviews 被调用：
│
├─ L185: needsCardBg = YES (用户开启了)
├─ L196: orig() ← 微信创建 MMHeadImageView 等子视图
├─ L201: !needsCardBg? → NO (需要资料卡)
├─ L210-221: VC 类型 → MoreViewController ✅
├─ L224-231: foundHead → MMHeadImageView 存在 ✅
├─ L234-235: height > 50 ✅
│
├─ L247: HideCard? → NO (用户没开启隐藏)
│
├─ L275: self.backgroundColor = clearColor ✅
├─ L278-287: 清除 m_bgImageView ✅
│
├─ L296-304: 查找已有 bgImageView → 首次，nil
├─ L307: 分支A跳过（不存在）
├─ L329: 创建 btnBgImg ✅
├─ L341: insertSubview:atIndex:0 ✅
├─ L348: 设置 frame ✅
├─ L355: kMioBgLoadedKey = NO
├─ L363: dispatch_async(加载图片) ✅ （后台线程）
│
├─ L410: goto APPLY_CORNER
├─ L416: wp_applyProfileCardCorner → 设置圆角+边框 ✅
├─ L426: masksToBounds = YES
│
└─ 返回
    结果：✅ 圆角有、✅ 边框有、⏳ bgImageView 创建了等图片加载
```

→ **MMUIButton 层面一切正常。bgImageView 已创建并插入，图片正在异步加载。**

### 2.2 Cell Hook（第433-628行）— 有 bug

```
Cell (MoreVC资料卡) layoutSubviews 被调用：
│
├─ L434-445: lazy register MMUIButton hook（已注册则跳过）
├─ L447: config 读取
│
├─ L478: isMoreVC = YES
├─ L482: isMoreVC && cardBgEnabled → YES，进入分支
│   ├─ L484: orig() 【第1次】← 微信设置 Cell 初始样式
│   ├─ L488: backgroundColor = clearColor  ★ 设好了
│   ├─ L490: masksToBounds = NO
│   ├─ L494: contentView.backgroundColor = clearColor ★
│   ├─ L500: backgroundView.hidden = YES ★
│   └─ L511: （无 return，继续）
│
├─ L513: ★ 又到这里了
│   └─ L514: orig() 【第2次】← ★ 覆盖了上面的透明化！★
│       └─ backgroundColor 回到 white/gray
│       └─ backgroundView 可能被恢复
│
├─ L518-533: margin 逻辑（只改 x 和 width）
├─ L562-578: bgColorSkipList 检查 → MoreVC 不在 skipList
│   └─ 设置 backgroundColor（又一次覆盖）
│
├─ L581: cornerRadius 设置
├─ L587-624: wp_applyStandardCorner 或 skip
│   └─ ★ 但注意：isMoreVC 分支在上面已经处理过，
│        这里会再走一遍通用圆角逻辑
│
└─ L626: masksToBounds = YES
    结果：❌ 透明化被覆盖 → bgImageView 被遮挡
         ✅ 圆角在最后设置 → 有效
```

---

## 3. 为什么圆角正常但背景图不显示

### 视图层叠分析

```
MoreViewController 的资料卡区域视图层级：
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
UITableView
 └─ UITableViewCell (Cell)
     │  ← backgroundColor 被 orig#2 设为 white
     │  ← masksToBounds = YES (L626)
     │
     ├─ contentView
     │   │  ← backgroundColor 在 L494 设为 clearColor
     │   │     但 contentView 本身可能不占满 Cell
     │   │
     │   └─ MMUIButton (我们的目标)
     │       │  ← backgroundColor = clearColor (L275)
     │       │  ← cornerRadius = 18 (L958)
     │       │  ← borderWidth = green (L983)
     │       │  ← masksToBounds = YES (L959, L426)
     │       │
     │       ├── UIImageView (bgImageView) ← 我们创建的
     │       │   └─ tag=999902, atIndex:0
     │       │   └─ image = (异步加载中...)
     │       │
     │       ├── MMHeadImageView (头像)
     │       ├── UILabel (名字)
     │       ├── UILabel (微信号)
     │       └─ ... 其他子视图
     │
     └─ backgroundView (可能被微信 orig#2 恢复)
         └─ 可能是不透明白色
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
```

**关键路径**：眼睛看到的光线

```
光线路径：
屏幕 ← Cell.backgroundColor (white/gray ← orig#2设置的!)
       ↑ 这个颜色挡住了下面的所有东西！

如果 Cell.backgroundColor = clearColor（我们想设的）：
屏幕 ← Cell (透明) ← contentView (透明) ← MMUIButton (透明) ← bgImageView (有图!) ✅
```

**但因为 orig#2 把 Cell.backgroundColor 改回了 white，所以：**
```
屏幕 ← Cell (white 不透明!) ← 挡住了 bgImageView ❌
```

而圆角之所以能生效，是因为 `cell.layer.cornerRadius` 和 `cell.layer.masksToBounds` 是在 **L581-L626** 设置的（两次 orig 之后），最终值"赢"了。

---

## 4. 三大症状统一解释

| 症状 | 原因 | 代码位置 |
|:----:|------|---------|
| **背景图不显示** | Cell.backgroundColor 被 orig#2 覆盖为白色，挡住 MMUIButton 层的 bgImageView | [L514 覆盖 L488](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L514) |
| **资料卡间距没了** | cardBgHeight/cardBgListSpacing 的 frame 修改已被注释掉（防卡死），且无替代实现 | [L507-509](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L507) |
| **圆角正常** | cornerRadius 在 L581-626 设置（两次 orig 之后），最终值有效 | [L581-624](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L581) |
| **之前卡死** | setFrame: 修改 Cell 自身 frame 触发 UIKit 反馈循环（已通过注释掉解决） | （已移除） |

**一句话总结：透明化设得太早（orig#1 之后），被 orig#2 覆盖；圆角设得够晚（orig#2 之后），所以有效。**

---

## 5. 修复方案（唯一正确做法）

### 5.1 核心原则

> **对于 MoreVC + cardBgEnabled 的 Cell：透明化必须在最后一次 orig 之后执行。**

### 5.2 方案：将透明化移到函数末尾（推荐）

```objc
static void replaced_MMUITableViewCell_layoutSubviews(id self, SEL _cmd) {
    // ... lazy register (不变) ...

    PluginConfig *config = [PluginConfig shared];

    // ★★★ 通用流程（不变）★★★
    if (!config.listCornerRadiusEnabled && !config.cardBgEnabled) {
        orig(); return;
    }

    UIViewController *vc = findParentViewController((UIView *)self);
    if (!vc) { orig(); return; }
    NSString *className = NSStringFromClass([vc class]);
    if (shouldSkipCorner(vc)) { orig(); return; }

    UIView *cellView = (UIView *)self;
    BOOL isMoreVC = [className isEqualToString:@"MoreViewController"];

    // ★★★ 关键改变：不再在这里做透明化 ★★★
    // 只记录是否是 MoreVC + cardBgEnabled，后面统一处理
    BOOL needsCardBgTransparency = (isMoreVC && config.cardBgEnabled);

    // ★★★ 只调一次 orig（所有 Cell 统一）★★★
    if (_orig_MMTableViewCell_layoutSubviews) {
        ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews(self, _cmd);
    }

    // ★★★ 通用 margin / bgColor / corner 逻辑（不变）★★★
    CGFloat margin = config.listCellMargin;
    if (margin > 0 && config.listCornerRadiusEnabled) { /* ... */ }

    // ... bgColorSkipList / backgroundColor ...

    // ★★★ 圆角逻辑 ★★★
    if (isMoreVC && needsCardBgTransparency) {
        // MoreVC 资料卡：使用 wp_applyProfileCardCorner（由 MMUIButton Hook 负责）
        // 或者在这里也设置一下圆角（双重保险）
    } else {
        // 其他 Cell：通用圆角
        // ... wp_applyStandardCorner ...
    }

    cellView.layer.masksToBounds = YES;

    // ═══════════════════════════════════════════════════
    // ★★★ 最后：资料卡透明化（在所有 orig 和样式之后！）★★★
    // ═══════════════════════════════════════════════════
    if (needsCardBgTransparency) {
        cellView.backgroundColor = [UIColor clearColor];     // ← 最后设，不会被覆盖
        cellView.layer.borderWidth = 0;
        cellView.layer.masksToBounds = NO;                  // ← 注意：下面又设了YES，需要调整顺序

        UIView *cv = [(UITableViewCell *)cellView contentView];
        if (cv) {
            cv.backgroundColor = [UIColor clearColor];
            cv.layer.masksToBounds = NO;
        }

        if ([cellView respondsToSelector:@selector(backgroundView)]) {
            UIView *bgv = [(id)cellView backgroundView];
            if (bgv) { bgv.backgroundColor = [UIColor clearColor]; bgv.hidden = YES; }
        }
        if ([cellView respondsToSelector:@selector(selectedBackgroundView)]) {
            UIView *sbgv = [(id)cellView selectedBackgroundView];
            if (sbgv) { sbgv.backgroundColor = [UIColor clearColor]; }
        }

        // ★ 如果上面 masksToBounds=NO，这里不需要再设 YES
        // ★ 让 MMUIButton 自身的 masksToBounds 来裁剪即可
    }
}
```

### 5.3 关于 masksToBounds 的冲突

当前代码有一个细微的 masksToBounds 冲突：

```
L490:  Cell Hook 中: cellView.layer.masksToBounds = NO    （让 bgImageView 可见）
L626:  Cell Hook 末尾: cellView.layer.masksToBounds = YES   （通用逻辑）
L426:  MMUIButton Hook: self.layer.masksToBounds = YES        （裁剪圆角）
L959:  wp_applyProfileCardCorner: cell.layer.masksToBounds = YES
```

**如果 Cell.masksToBounds = YES**，且 Cell 的 bounds 小于 bgImageView 的实际范围，bgImageView 会被裁剪。

**正确的 masksToBounds 策略**：
- **Cell 层**：`masksToBounds = NO`（让 MMUIButton 层的内容可以稍微溢出，或者至少不被 Cell 裁剪）
- **MMUIButton 层**：`masksToBounds = YES`（由 `wp_applyProfileCardCorner` 设置，负责圆角裁剪）

### 5.4 关于资料卡间距（cardBgListSpacing）

由于不能在 layoutSubviews 中修改 frame（会导致卡死），间距功能需要在别处实现：

**选项 A（推荐）：暂时禁用**
- 在 Settings UI 中隐藏此选项
- 或者在代码中保留但不生效（加注释说明原因）

**选项 B：dispatch_async 延迟**
```objc
// 在透明化之后，用 dispatch_async 延迟修改 spacing
dispatch_async(dispatch_get_main_queue(), ^{
    if (config.cardBgListSpacing > 0) {
        CGRect f = cellView.frame;
        f.size.height += config.cardBgListSpacing;
        f.origin.y -= config.cardBgListSpacing / 2.0;
        cellView.frame = f;
    }
});
```
风险：仍可能触发额外的 layout pass，但不在当前调用栈内。

**选项 C（正确做法）：Hook heightForRowAtIndexPath:**
```objc
// Hook UITableViewDelegate 的 heightForRowAtIndexPath:
// 对于 MoreViewController 的资料卡 row 返回原始高度 + spacing
// 这是 Apple 推荐的做法
```

---

## 6. 完整修复后的代码结构

### 6.1 Cell Hook 伪代码

```
replaced_MMUITableViewCell_layoutSubviews(self, _cmd):
│
│ ① lazy register MMUIButton hook
│
│ ② 快速拒绝：!corner && !cardBg → orig → return
│
│ ③ find VC → nil → orig → return
│ ④ shouldSkipCorner → orig → return
│
│ ⑤ 记录标志位：needsCardBgTransparency = (isMoreVC && cardBgEnabled)
│
│ ⑥ ★ orig() — 只调用一次，所有 Cell 统一
│
│ ⑦ margin 逻辑（不改 height/y，只改 x/width）
│
│ ⑧ backgroundColor 逻辑（非 skipList 的 VC）
│
│ ⑨ 圆角逻辑
│    ├─ isMoreVC && needsCardBgTransparency → 跳过通用圆角（MMUIButton负责）
│    └─ 其他 → wp_applyStandardCorner
│
│ ⑩ ★★★ 资料卡透明化（在所有操作之后！）★★★
│    if (needsCardBgTransparency):
│        Cell.backgroundColor = clearColor
│        Cell.masksToBounds = NO
│        contentView.backgroundColor = clearColor
│        backgroundView.hidden = YES
│        // ★ 不设 masksToBounds=YES（让 MMUIButton 层负责裁剪）★
│
│ ⑪ return
```

### 6.2 MMUIButton Hook 保持不变

MMUIButton Hook（第177-431行）已经是对标微信优化重构过的版本，**不需要改动**：
- 极速拒绝链 ✅
- 单次创建 + 去重 ✅
- 异步加载 ✅
- 圆角 + 边框 ✅

---

## 7. 实施检查清单

### Phase 1：修复 double-orig 覆盖问题（P0 — 解决背景图不显示）

- [ ] **1.1** 删除 `if (isMoreVC && config.cardBgEnabled)` 分支内的 orig 调用（第483-485行）
- [ ] **1.2** 删除该分支内的透明化代码（第487-505行），改为只设置标志位
- [ ] **1.3** 将透明化代码移到函数末尾（orig + margin + corner + bgColor 之后）
- [ ] **1.4** 确保 Cell 层 `masksToBounds = NO`（当 needsCardBgTransparency 时）
- [ ] **1.5** 编译测试，背景图能显示

### Phase 2：验证（P1）

- [ ] **2.1** 点击"我"不卡死
- [ ] **2.2** 背景图正常显示
- [ ] **2.3** 圆角正常（资料卡 + 其他页面）
- [ ] **2.4** HideCard 正常
- [ ] **2.5** 列表边距正常（其他页面）
- [ ] **2.6** 8 插件共存时不卡死

### Phase 3：资料卡间距（P2 — 低优先级）

- [ ] **3.1** 实现 dispatch_async 延迟方案 或 heightForRowAtIndexPath: Hook
- [ ] **3.2** 或暂时禁用该功能

---

## 附录：历史崩溃回顾（已解决的问题）

| 版本 | 问题 | 状态 |
|:----:|------|:----:|
| v9 | MMUIButton Hook 过重，25+步操作/次，无去重 | ✅ 已解决（v11 重构） |
| v9 | 文件 I/O 在主线程 | ✅ 已解决（移到 dispatch_async） |
| v11 | Cell Hook 中修改 Cell.frame 导致反馈循环 | ✅ 已解决（注释掉 frame 修改） |
| v12 | Cell Hook 中 `return` 太早导致圆角/边距丢失 | ✅ 已解决（去掉 return） |
| **v13** | **Cell Hook 中 orig 被调用2次，第2次覆盖透明化** | **⏳ 待实施** |
