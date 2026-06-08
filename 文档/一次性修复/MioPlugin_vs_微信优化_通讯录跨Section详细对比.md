# MioPlugin vs 微信优化 — 通讯录跨 Section 分组圆角深度对比

> 基于双方完整源码/反编译代码的逐行对比分析

---

## 对比总览

| 对比维度 | MioPlugin | 微信优化 |
|---------|-----------|---------|
| 源码文件 | `ListCornerRadiusHook.m` (913行) | `wxyh1.6.5.dylib.c` (147,994行) |
| 核心函数 | `wp_applyCornerForContacts:` (line 626) | `FUN_0000b4cc` line 11963-12242 |
| 核心函数行数 | **88 行** (626-713) | **约 280 行** |
| 代码语言 | Objective-C | 反编译 C |
| 编码风格 | 清晰模块化 | 嵌套分支 + goto 跳转 |
| 汇总文档 | `/www/wwwroot/ios/微信通讯录cell圆角分组处理分析.md` | `/www/wwwroot/ios/微信优化通讯录跨Section分组圆角深度分析.md` |

---

## 第一章：整体架构对比

### MioPlugin 架构

```
replaced_MMTableViewCell_layoutSubviews (line 117)
  │
  ├── shouldApplyGlobalCorner(vc)           ← 总开关 + 三页独立开关
  ├── CornerResponsibility.isListCornerResponsible  ← 模块归属
  ├── 调整 cell.frame (margin)              ← 左右边距
  ├── 调用原始 layoutSubviews
  ├── 设置 backgroundColor (跳过19个VC)      ← 背景色
  │
  └── 分发
      ├── isContacts? → wp_applyCornerForContacts    ← 通讯录专用
      └── else → wp_applyStandardCorner               ← 标准 per-section
```

### 微信优化架构

```
FUN_0000b4cc (line 11555)
  │
  ├── NSUserDefaults → MoreDiscoverListRoundCornerEnabled  ← 单一总开关
  ├── responder chain → 找 VC
  ├── 18层嵌套类名匹配 → 设置/跳过背景色
  ├── 调整 cell.frame (margin)
  ├── 调用原始 layoutSubviews
  ├── 找 tableView + indexPath
  │
  └── 分支
      ├── iVar4 == 0 (非通讯录) → 标准 per-section (line 11819)
      └── iVar4 != 0 (通讯录)   → 跨 Section 特殊模式 (line 11963)
```

### 架构差异总结

| 特性 | MioPlugin | 微信优化 |
|------|-----------|---------|
| 开关机制 | 总开关 + 3个子开关（我的/联系人/发现） | 单一总开关 `MoreDiscoverListRoundCornerEnabled` |
| VC 匹配方式 | 模块归属 `CornerResponsibility` + NSSet 跳过列表 | 18层嵌套 `isEqualToString:` |
| 可扩展性 | ★★★★★ 修改数组即可 | ★★ 需修改嵌套 if |
| 代码复用度 | 高（标准/通讯录共用辅助方法） | 低（每个分支独立实现） |
| 流程图清晰度 | ★★★★ 线性顺序 | ★★ 多重 goto 跳转 |

---

## 第二章：通讯录跨 Section 算法 — 核心代码逐行对比

### 2.1 算法触发条件

#### MioPlugin 条件
```objc
// ListCornerRadiusHook.m:229
if (isContacts) {
    [self wp_applyCornerForContacts:...];
}
// isContacts = [className isEqualToString:@"ContactsViewController"];
// 无条件进入，不限 section 数
```

**触发器**：类名匹配 `ContactsViewController` 即可，**不检查 Section 0 行数**。

#### 微信优化条件
```c
// wxyh1.6.5.dylib.c:11964-11994
lVar14 = [indexPath section];         // section
if (section > 3) goto standard;       // Section >=4 降级

// 收集前 4 个 section 行数
NSMutableArray *rowCounts = ...;
for (NSInteger i = 0; i < MIN(totalSections, 4); i++) {
    [rowCounts addObject:@([tableView numberOfRowsInSection:i])];
}

// ★ 核心条件：Section 0 必须恰好 3 或 4 行
NSInteger rowsInSection0 = [rowCounts[0] integerValue];
if (rowsInSection0 != 3 && rowsInSection0 != 4) {
    goto standard;  // 降级
}
```

**触发器**：类名匹配 `ContactsViewController` **且** `section >= 0 && section <= 3` **且** `rowCounts[0] == 3 || rowCounts[0] == 4`。

**结论**：MioPlugin 无条件进入通讯录模式；微信优化有 3 道关卡（Section 范围 + Section 0 行数限制）。

---

### 2.2 数据收集策略

#### MioPlugin — 全量扫描 + 空 Section 检测
```objc
// line 654-668: 收集 ALL section 行数
NSMutableArray *sectionRowCounts = [NSMutableArray array];
for (NSInteger s = 0; s < totalSections; s++) {     // ← 扫描所有 section
    [sectionRowCounts addObject:@([tableView numberOfRowsInSection:s])];
}

// ★ 找到第一个和最后一个非空 section
NSInteger firstRealSection = -1;
NSInteger lastRealSection = -1;
for (NSInteger s = 0; s < totalSections; s++) {
    if ([sectionRowCounts[s] integerValue] > 0) {
        if (firstRealSection == -1) firstRealSection = s;
        lastRealSection = s;
    }
}
```

- 扫描**所有** section
- **跳过 0 行 section**（空 section 不计入合并范围）
- 记录 `firstRealSection` / `lastRealSection`

#### 微信优化 — 前 4 个 Section + 行数锁定
```c
// line 11966-11987: 只收集前 4 个
NSMutableArray *rowCounts = [NSMutableArray array];
NSInteger limit = MIN(totalSections, 4);               // ← 最多 4 个
for (NSInteger i = 0; i < limit; i++) {                // ← 只扫描前4个
    [rowCounts addObject:@([tableView numberOfRowsInSection:i])];
}

// 不跳过空 section，直接检查 rowCounts[0] 的值
// 行数非 3/4 则降级
```

- 扫描**前 4 个** section
- **不跳过空 section**
- 依赖 Section 0 行数的硬编码值（3 或 4）

#### 对比

| 特性 | MioPlugin | 微信优化 |
|------|-----------|---------|
| 扫描范围 | 全部 section | 前 4 个 |
| 空 section 跳过 | ✅ `firstRealSection/lastRealSection` | ❌ 不跳过 |
| 触发条件 | 无条件 | Section 0 行数 == 3 或 4 |

---

### 2.3 位置判断核心算法 — 最关键的差异

#### MioPlugin：firstRealSection / lastRealSection 合并模式

```objc
// line 670-697：基于 firstRealSection / lastRealSection 的决策
NSInteger cornerType = 0;

// ① 唯一非空 section 且只有 1 行 → 全角
if (firstRealSection == lastRealSection && rowInThisSection == 1) {
    cornerType = 3;  // 0xf
}
// ② 第一个非空 section 的首行 → 顶角
else if (section == firstRealSection && row == 0) {
    cornerType = 1;  // 0x3
}
// ③ 最后一个非空 section 的末行 → 底角
else if (section == lastRealSection && row == rowInThisSection - 1) {
    cornerType = 2;  // 0xc
}
// ④ 中间的单行 section → 无角
else if (rowInThisSection == 1) {
    cornerType = 0;
}
// ⑤ 多行 section 内部 → per-section 判断
else if (row == 0) {
    cornerType = 1;     // 顶部
} else if (row == rowInThisSection - 1) {
    cornerType = 2;     // 底部
} else {
    cornerType = 0;     // 中间
}
```

**核心思想**：**将 ≤3 个 section 合并成一个整体卡片**，只在整个卡片的最顶部行和最底部行应用圆角，中间行全部无角。

#### 微信优化：bVar1 + bVar2 + 从后扫描模式

```c
// 伪代码还原版

// Step 1: 计算 bVar2 — 当前 section 是否为单行
BOOL bVar2;
if (section == 0) {
    bVar2 = YES;  // Section 0 固定标记
} else if (section > 0 && section < collectedSections) {
    bVar2 = ([rowCounts[section] integerValue] == 1);
}

// Step 2: 计算 bVar1 — 前 3 个 section 是否全为 1 行
BOOL bVar1 = (collectedSections >= 4) &&
    ([rowCounts[1] integerValue] == 1) &&
    ([rowCounts[2] integerValue] == 1) &&
    ([rowCounts[3] integerValue] == 1);

// Step 3: 决策跳转
if (collectedSections >= 2 && !bVar1) goto standard;  // 降级

// Step 4: ★ 从后向前扫描连续单行 section
NSInteger scanIndex = MIN(collectedSections - 1, 3);
while (scanIndex > 0) {
    if ([rowCounts[scanIndex] integerValue] == 1) {
        scanIndex--;  // 继续扫描前一个
    } else {
        break;        // 遇到多行 section 停止
    }
}

// Step 5: 最终决策
if (section == 0) {
    // Section 0 → 内部 per-section
    // row 0 → top, middle → none, last → bottom
} else {
    // Section 1/2/3
    if (bVar2 && scannedToEnd) {
        // 单行 section + 全扫完 → 底部圆角
        cell.layer.maskedCorners = 0xc;
    } else if (!bVar2) {
        // 多行 section → 标准 per-section
    } else {
        // 中间单行 → 无圆角
        cell.layer.maskedCorners = 0;
    }
}
```

**核心思想**：**Section 0 内部 per-section，Sections 1-3 只在最后一个单行 section 底部圆角**，其他不做跨 section 合并。

---

### 2.4 算法对比 — 具体示例

#### 示例 A：3 个 Section，Section 0 有 4 行，Section 1/2 各 1 行

```
Section 0: [新朋友, 群聊, 标签, 公众号] (4行)
Section 1: [Adams] (1行)
Section 2: [Brown] (1行)
```

**MioPlugin 处理（≤3 section → 合并模式）**：
```
┌──────────────────────────┐  ← 顶部圆角 (Section 0 Row 0)
│ 新朋友                   │
├──────────────────────────┤
│ 群聊                    │
├──────────────────────────┤
│ 标签                    │
├──────────────────────────┤
│ 公众号                  │
├──────────────────────────┤
│ Adams                   │
├──────────────────────────┤
│ Brown                   │
└──────────────────────────┘  ← 底部圆角 (Section 2 Row 0)
```
→ **7 行合并成一个统一卡片**

**微信优化处理**：
```
┌──────────────────────────┐  ← 顶部圆角 (Section 0 Row 0)
│ 新朋友                   │
├──────────────────────────┤
│ 群聊                    │
├──────────────────────────┤
│ 标签                    │
├──────────────────────────┤
│ 公众号                  │
└──────────────────────────┘  ← 底部圆角 (Section 0 Row 3)

  ┌─Adams─┐  ← 无角 (bVar1=false, 只有2个section, collected<4)
  └─Brown─┘  ← 无角
```
→ **Section 0 独立，Section 1/2 无圆角**

#### 示例 B：4 个 Section，Section 0 有 4 行，Section 1/2/3 各 1 行

```
Section 0: [新朋友, 群聊, 标签, 公众号] (4行)
Section 1: [Adams] (1行)
Section 2: [Brown] (1行)
Section 3: [Charlie] (1行)
```

**MioPlugin 处理（>3 section → 降级 per-section）**：
```
┌──────────────────────────┐  ← 顶部圆角 (Section 0)
│ 新朋友/群聊/标签/公众号  │
└──────────────────────────┘  ← 底部圆角

┌─Adams─┐  ← 全圆角 (仅1行)
└───────┘

┌─Brown─┐  ← 全圆角
└───────┘

┌─Charlie─┐  ← 全圆角
└─────────┘
```
→ **4 个独立卡片**

**微信优化处理（bVar1=true, bVar2=true, collected=4）**：
```
┌──────────────────────────┐  ← 顶部圆角 (Section 0 Row 0)
│ 新朋友                   │
├──────────────────────────┤
│ 群聊                    │
├──────────────────────────┤
│ 标签                    │
├──────────────────────────┤
│ 公众号                  │
└──────────────────────────┘  ← 底部圆角 (Section 0 Row 3)

  ┌─Adams─┐  ← 无角 (中间单行)
  ├───────┤
  ┌─Brown─┐  ← 无角 (中间单行) 
  ├───────┤
  ┌─Charlie─┐  ← 底部圆角 (最后一个单行 section)
  └─────────┘
```
→ **Section 0 独立卡片 + Section 1/2 无角 + Section 3 底部圆角**

#### 示例 C：>4 个 Section（通讯录完整页，A-Z 字母分组）

```
Section 0: [新朋友, 群聊, 标签, 公众号] (4行)
Section 1: [A 开头...] (5行)
Section 2: [B 开头...] (3行)
Section 3: [C 开头...] (7行)
Section 4: [D 开头...] (2行)
...
Section 26: [Z 开头...] (1行)
```

**两者行为一致：全部 per-section**。
```
┌────────────────────┐  ← 顶部圆角
│ Section 0 (4行)    │
└────────────────────┘  ← 底部圆角

┌────────────────────┐  ← 顶部圆角
│ Section 1 A (5行)  │
└────────────────────┘  ← 底部圆角

┌────────────────────┐  ← 顶部圆角
│ Section 2 B (3行)  │
└────────────────────┘  ← 底部圆角

...
```
→ 每个字母分组独立成卡片

---

## 第三章：边距调整对比

### MioPlugin 的边距计算

```objc
// line 156-173
CGFloat margin = config.listCellMargin;  // 默认9
CGFloat currentX = cellView.frame.origin.x;
UIView *superview = cellView.superview;
CGFloat superX = superview ? superview.frame.origin.x : 0;
CGFloat targetX = (margin > superX) ? margin - superX : 0;
CGFloat containerW = superview ? superview.bounds.size.width : screenWidth;
CGFloat targetW = containerW - 2.0 * margin;

if (fabs(currentX - targetX) > 0.5 || fabs(currentW - targetW) > 0.5) {
    CGRect f = cellView.frame;
    f.origin.x = targetX;
    f.size.width = targetW;
    cellView.frame = f;
}
```

**特点**：
- 考虑 superview 的 frame.origin.x（cell 在嵌套视图中的偏移补偿）
- 使用 `fabs > 0.5` 阈值避免频繁 setFrame
- 边距可配置

### 微信优化的边距计算

```c
// line 11789-11803
dVar25 = (double)margin;    // 默认9
if (cellWidth + margin * -2.0 <= screenWidth) {
    dVar24 = margin;
    if (tableView != 0) {
        dVar23 = (double)tableViewWidth;
        if (margin - tableViewWidth >= 0.0) {
            dVar24 = margin - tableViewWidth;
        } else {
            dVar24 = 0.0;
        }
    }
    cell.frame = CGRectMake(dVar24, cell.y, cell.width - dVar24 * 2, cell.height);
}
```

**特点**：
- 考虑 tableView 本身宽度偏移
- 没有阈值判断，每次都会 setFrame
- 边距可配置

---

## 第四章：边框系统对比

### MioPlugin — 统一 CAShapeLayer + 缓存优化

```objc
// line 715-810
+ (void)wp_applyBorderAndBg:(UIView *)cell radius:(NSInteger)radius
                   position:(NSInteger)position isFTSHome:(BOOL)isFTSHome {
    // ★ 缓存键
    NSString *cacheKey = [NSString stringWithFormat:@"r%ld-p%ld-f%d-b%.1f",
                          radius, position, isFTSHome, config.listCellBorderWidth];
    if ([existingCacheKey isEqualToString:cacheKey]) return;  // 命中缓存 → 跳过

    // 移除旧的
    for (CALayer *sub in cell.layer.sublayers) {
        if ([sub.name isEqualToString:@"com.mio.cornerBorder"]) {
            [sub removeFromSuperlayer];
        }
    }

    // 按 position 添加不同方位的 CAShapeLayer
    switch (position) {
        case 0: top + bottom; break;   // 全角
        case 1: top; break;             // 顶角
        case 2: left + right; break;    // 中间
        case 3: bottom; break;          // 底角
    }
}
```

| 边框位置 | 图层类型 | 图层标识 |
|---------|---------|---------|
| top | CAShapeLayer | `com.mio.cornerBorder` |
| bottom | CAShapeLayer | `com.mio.cornerBorder` |
| left | CAShapeLayer | `com.mio.cornerBorder` |
| right | CAShapeLayer | `com.mio.cornerBorder` |

### 微信优化 — CAShapeLayer + CALayer 混合

```c
// FUN_0000e344 (line 13233-13370)
// position=0: 只设 borderWidth/颜色 (不额外加边框)
// position=1: FUN_0000eb00 → CAShapeLayer 顶部边框
// position=2: FUN_0000ee1c → CALayer 左右边框 (纯色背景)
// position=3: FUN_0000eb00 → CAShapeLayer 底部边框
```

| 边框位置 | 图层类型 | 图层标识 |
|---------|---------|---------|
| top | CAShapeLayer (UIBezierPath) | `CustomBorder` |
| bottom | CAShapeLayer (UIBezierPath) | `CustomBorder` |
| left | CALayer (`backgroundColor`) | `CustomBorder` |
| right | CALayer (`backgroundColor`) | `CustomBorder` |

### 边框系统对比

| 特性 | MioPlugin | 微信优化 |
|------|-----------|---------|
| 边框载体 | 全 CAShapeLayer | CAShapeLayer(水平) + CALayer(垂直) |
| 缓存机制 | ✅ `objc_setAssociatedObject` | ❌ 每次重建 |
| 缓存键粒度 | radius+position+isFTSHome+borderWidth | 无 |
| 水平边框绘制 | 弧线衔接圆角 | 弧线衔接圆角 |
| 垂直边框绘制 | 直线（无弧线） | 纯色 CALayer（更快） |
| 边框 Tag 名 | `com.mio.cornerBorder` | `CustomBorder` |
| 颜色配置 | 支持深色/浅色独立 | 支持深色/浅色独立 |

**关键差异**：MioPlugin 的缓存机制避免了参数不变时重复重建边框 layer，这是微信优化没有的性能优化。

---

## 第五章：背景色处理对比

### MioPlugin — 跳过列表（黑名单）

```objc
// line 183-203: 19 个 VC 不设置背景色
static NSSet *bgColorSkipList = [NSSet setWithObjects:
    @"WCTimeLineViewController", ..., @"WCSearchController", nil];

if (![bgColorSkipList containsObject:className]) {
    UIColor *customBg = [config colorFromHex:config.listCellBgColor];
    cell.backgroundColor = customBg ?: wp_cellDefaultBgColor(isDark);
}
```

**过滤方式**：过滤掉 19 个不需要背景色的 VC（保持原生透明），**其他所有 VC 都设置自定义背景色**。

### 微信优化 — 白名单（18个支持 VC）

```c
// line 11639-11722: 18 层 if 匹配
if (![vcName isEqualToString:@"WCTimeLineViewController"]) {
    if (![vcName isEqualToString:@"WCAccountLoginUsersViewController"]) {
        // ... 18 层嵌套 ...
        if (![vcName isEqualToString:@"WCSearchController"]) {
            // ★ 未匹配 → 设置自定义背景色
            FUN_0000e02c(uVar5, 0);  // 读取 CellBackgroundColorLight/Dark
            cell.backgroundColor = color;
        }
    }
}
```

**过滤方式**：匹配不到 18 个支持 VC 的**才设置背景色**（与 MioPlugin 相反的过滤逻辑！）。

### 背景色对比

| 特性 | MioPlugin | 微信优化 |
|------|-----------|---------|
| 过滤方式 | 黑名单（19个不设背景） | 白名单（18个不处理） |
| 存储方式 | Hex 字符串 | NSKeyedArchiver 序列化 UIColor |
| 深色模式 | `traitCollection` 手动判断 | UIColor 动态颜色（自动切换） |
| 默认颜色 | 白/深灰 | 默认 UIColor |

---

## 第六章：折叠/展开支持对比

两者都支持聊天列表的置顶折叠分组，逻辑完全相同：

| 步骤 | MioPlugin | 微信优化 |
|------|-----------|---------|
| Hook 对象 | `MainFrameSectionFoldView::layoutSubviews` | 在 per-section 最后行检查 |
| 查找方法 | 递归 `containsString:` + `isFolding` | `respondsToSelector("isFolding")` |
| 展开行为 | 该行无圆角+左右边框 (position=2) | 该行无圆角+左右边框 (position=2) |
| 折叠行为 | 该行底部圆角 (position=3) | 该行底部圆角 (position=3) |

**无实质差异**。

---

## 第七章：设置页面对比

### MioPlugin 圆角相关配置

| 设置项 | 键名 | 默认值 |
|--------|------|--------|
| 全局圆角总开关 | `globalCornerRadiusEnabled` | OFF |
| 我的页面圆角 | `globalCornerMyPageEnabled` | ON |
| 联系人页面圆角 | `globalCornerContactsPageEnabled` | ON |
| 发现页面圆角 | `globalCornerDiscoverPageEnabled` | ON |
| 搜索框圆角 | `listSearchCornerRadius` | OFF |
| Cell 边框开关 | `listCellBorder` | OFF |
| Cell 圆角半径 | `listCellCornerRadius` | 18 |
| Cell 左右边距 | `listCellMargin` | 9 |
| 置顶会话距顶栏间距 | `listPinnedSessionSpacing` | 15 |
| 普通会话间距 | `listNormalSessionSpacing` | 15 |
| 边框宽度 | `listCellBorderWidth` | 2.0 |
| Cell 背景色 | `listCellBgColor` | nil（白/深灰） |
| 边框颜色 | `listCellBorderColor` | nil（浅灰/深灰） |
| 卡片背景色 | `listCardBgColor` | nil |
| 媒体视图圆角 | `listMediaCornerRadiusEnabled` | OFF |
| 禁用标签宽度调整 | `listDisableLabelResize` | OFF |

### 微信优化圆角相关配置

| 设置项 | 键名 | 默认值 |
|--------|------|--------|
| 列表圆角总开关 | `MoreDiscoverListRoundCornerEnabled` | - |
| 圆角半径 | `MoreDiscoverListCornerRadius` | 18 |
| 搜索框圆角 | `SearchBoxRoundCornerEnabled` | - |
| 搜索框圆角半径 | `SearchBoxCornerRadius` | - |
| 水平边距 | `CellHorizontalMargin` | 9 |
| 边框开关 | `CellBorderEnabled` | - |
| 边框宽度 | `CellBorderWidth` | - |
| 边框颜色（浅色）| `CellBorderColorLight` | - |
| 边框颜色（深色）| `CellBorderColorDark` | - |
| Cell 背景色（浅色）| `CellBackgroundColorLight` | - |
| Cell 背景色（深色）| `CellBackgroundColorDark` | - |
| 卡片背景色（浅色）| `CardBackgroundColorLight` | - |
| 卡片背景色（深色）| `CardBackgroundColorDark` | - |

### 核心功能差异

| 功能 | MioPlugin | 微信优化 |
|------|-----------|---------|
| 三主页独立开关 | ✅ 我的/联系人/发现 | ❌ 仅发现页 |
| 置顶会话间距 | ✅ | ❌ |
| 普通会话间距 | ✅ | ❌ |
| 媒体视图圆角 | ✅ | ❌ |
| 禁用标签调整 | ✅ | ❌ |
| 深色/浅色独立颜色 | ✅ | ✅ |
| 资料卡边框独立配置 | ✅ | ✅ |

---

## 第八章：完整代码对比 — 通讯录核心算法

### MioPlugin — `wp_applyCornerForContacts:` (88行)

```objc
+ (void)wp_applyCornerForContacts:(UIView *)cell
                        tableView:(UITableView *)tableView
                        indexPath:(NSIndexPath *)indexPath
                          section:(NSInteger)section
                              row:(NSInteger)row
                            total:(NSInteger)rowInThisSection
                     cornerRadius:(NSInteger)radius
                         isFTSHome:(BOOL)isFTSHome {

    // ── 分支 A：>3 section → 标准 per-section
    NSInteger totalSections = [tableView numberOfSections];
    if (totalSections > 3) {
        [self wp_applyStandardCorner:cell ...];
        return;
    }

    // ── 分支 B：≤3 section → 跨 Section 合并模式
    // Step 1: 收集所有 section 行数
    NSMutableArray<NSNumber *> *sectionRowCounts = [NSMutableArray array];
    for (NSInteger s = 0; s < totalSections; s++) {
        [sectionRowCounts addObject:@([tableView numberOfRowsInSection:s])];
    }

    // Step 2: 找第一个和最后一个非空 section
    NSInteger firstRealSection = -1;
    NSInteger lastRealSection = -1;
    for (NSInteger s = 0; s < totalSections; s++) {
        if ([sectionRowCounts[s] integerValue] > 0) {
            if (firstRealSection == -1) firstRealSection = s;
            lastRealSection = s;
        }
    }

    // Step 3: 位置判断
    NSInteger cornerType = 0;
    NSInteger borderType = 0;

    if (firstRealSection == lastRealSection && rowInThisSection == 1) {
        cornerType = 3; borderType = 0;  // 全角
    } else if (section == firstRealSection && row == 0) {
        cornerType = 1; borderType = 1;  // 顶角
    } else if (section == lastRealSection && row == rowInThisSection - 1) {
        cornerType = 2; borderType = 3;  // 底角
    } else if (rowInThisSection == 1) {
        cornerType = 0; borderType = 2;  // 中间单行 → 无角
    } else if (row == 0) {
        cornerType = 1; borderType = 1;  // 顶部
    } else if (row == rowInThisSection - 1) {
        cornerType = 2; borderType = 3;  // 底部
    } else {
        cornerType = 0; borderType = 2;  // 中间
    }

    // Step 4: 应用圆角
    cell.layer.cornerRadius = radius;
    cell.layer.maskedCorners = (cornerType==1 ? 0x3 : cornerType==2 ? 0xc :
                                cornerType==3 ? 0xf : 0);
    [self wp_applyBorderAndBg:cell radius:radius position:borderType isFTSHome:isFTSHome];
}
```

### 微信优化 — `FUN_0000b4cc` 通讯录分支 (约280行)

```c
// line 11963-12242 的完整伪代码还原

// ── 1. Section 范围检查
NSInteger section = [indexPath section];
if (section > 3) goto LAB_standard;  // 降级

// ── 2. 收集前4个section行数
NSMutableArray *rowCounts = [NSMutableArray array];
NSInteger limit = MIN([tableView numberOfSections], 4);
for (NSInteger i = 0; i < limit; i++) {
    [rowCounts addObject:@([tableView numberOfRowsInSection:i])];
}

// ── 3. Section 0 行数检查
if (rowCounts.count == 0 || [rowCounts[0] integerValue] < 3 ||
    [rowCounts[0] integerValue] > 4) goto LAB_standard;

// ── 4. 计算 bVar2
BOOL bVar2 = NO;
if (section == 0) {
    bVar2 = YES;
} else if (section > 0 && section < rowCounts.count) {
    bVar2 = ([rowCounts[section] integerValue] == 1);
}

// ── 5. 计算 bVar1 (至少4个section时才计算)
BOOL bVar1 = NO;
if (rowCounts.count >= 4) {
    bVar1 = ([rowCounts[1] integerValue] == 1 &&
             [rowCounts[2] integerValue] == 1 &&
             [rowCounts[3] integerValue] == 1);
}

// ── 6. 决策
if (rowCounts.count >= 2 && !bVar1) goto LAB_standard;

// ── 7. 从后扫描连续单行 section
NSInteger scanIdx = MIN(rowCounts.count - 1, 3);
while (scanIdx > 0) {
    if ([rowCounts[scanIdx] integerValue] == 1) {
        scanIdx--;
    } else break;
}

// ── 8. 判断当前位置
if (section == 0) {
    // Section 0 → per-section
    [self applyStandardPerSection:cell ...];
}
else if (section > 0 && section < 4) {
    if (bVar2) {
        // 单行 section
        if (section == lastSingleSection) {
            // ★ 最后一个是单行 → 底部圆角
            cell.maskedCorners = 0xc;
            position = 3;
        } else {
            // ★ 中间单行 → 无圆角
            cell.maskedCorners = 0;
            position = 2;
        }
    } else {
        // 多行 section → per-section
        goto LAB_standard;
    }
}

// ── 9. 应用
cell.layer.cornerRadius = cornerRadius;
cell.layer.maskedCorners = ...;
FUN_0000e344(cornerRadius, cell, position, ...);
```

---

## 第九章：关键差异总表

### 算法层面

| 差异项 | MioPlugin | 微信优化 |
|--------|-----------|---------|
| 合并策略 | ≤3 section 全部合并成一个卡片 | Section 0 独立，Section 1/2/3 条件合并 |
| Section 0 行数 | 不检查 | 必须 3 或 4 |
| 空 section 跳过 | ✅ `firstRealSection/lastRealSection` | ❌ 不跳过 |
| 扫描范围 | 全部 section | 前 4 个 |
| 标志体系 | `firstRealSection/lastRealSection` | `bVar1 + bVar2 + 从后扫描` |
| 中间单行处理 | 无角（融入合并组） | 无角（或底部圆角，取决于是否最后单行） |
| 多行 section 内部 | per-section | per-section |
| Section ≥4 | per-section | per-section |

### 代码质量

| 差异项 | MioPlugin | 微信优化 |
|--------|-----------|---------|
| 函数行数 | 88 行 | ~280 行 |
| 分支嵌套深度 | ≤3 层 | ≥5 层 + goto |
| 可读性 | ★★★★★ | ★★ |
| 可维护性 | 高（修改 firstRealSection/lastRealSection 逻辑即可） | 低（反编译代码，修改需理解 bVar1/bVar2 组合） |
| 缓存机制 | ✅ 边框缓存 | ❌ 无 |
| 日志系统 | ✅ WPLog | ❌ 无 |

### 功能特性

| 差异项 | MioPlugin | 微信优化 |
|--------|-----------|---------|
| 三主页独立开关 | ✅ | ❌ |
| 联系人页面专属开关 | ✅ | ❌ |
| 置顶会话间距 | ✅ | ❌ |
| 媒体视图圆角 | ✅ | ❌ |
| 间距配置 | ✅ | ❌ |
| 深色/浅色独立颜色 | ✅ | ✅ |
| Section Header 透明化 | ❌ | ❌ (未做) |
| 索引条处理 | ❌ | ❌ (未做) |

---

## 第十章：性能对比

| 操作 | MioPlugin | 微信优化 |
|------|-----------|---------|
| layoutSubviews 执行 | 每 cell 每次布局 | 每 cell 每次布局 |
| 边框重建 | 缓存命中时跳过 | 每次都重建 |
| 背景色设置 | 每次设置（skip list 检查） | 每次设置（18层 if 匹配） |
| VC 匹配 | 1次 NSSet 查找 | 最多 18 次 isEqualToString |
| 额外 Hook | MFWebMMBtn/MFBannerBtn/UIView/FoldView/MMUIButton | MFWebMMBtn/MFBannerBtn/MMTableSectionHeader/NewMainFrameVC/UIView |

**性能差异不大**，MioPlugin 的边框缓存是其独特优势。

---

## 第十一章：总结与建议

### MioPlugin 的优势

1. **算法更通用**：`firstRealSection/lastRealSection` 模式不依赖特定 section 行数，适用于任何 ≤3 section 的场景
2. **代码更清晰**：88 行函数 + 明确的条件分支，远优于微信优化的 280 行 goto 嵌套
3. **空 section 跳过**：自动跳过 0 行 section，微信优化无此能力
4. **缓存机制**：边框缓存避免重复绘制
5. **配置更丰富**：三主页独立开关、间距配置、媒体圆角等
6. **模块化架构**：CornerResponsibility 责任分离，易于扩展

### 微信优化可借鉴的点

1. **bVar1 前 3 个 section 全部单行检测**：当 A/B/C 字母分组都只有 1 个联系人时，可以触发更统一的圆角效果
2. **从后扫描连续单行 section**：识别"最后一个单行 section"并分配底部圆角的思路巧妙
3. **Section 0 行数锁定**：虽然限制了通用性，但对通讯录场景的命中率很高
4. **深色模式 UIColor 动态颜色**：比手动 `traitCollection` 判断更简洁

### 建议的融合方案

结合两者优势的最优算法：

```objc
+ (void)wp_applyCornerForContacts:(UIView *)cell
                        tableView:(UITableView *)tableView
                        indexPath:(NSIndexPath *)indexPath
                          section:(NSInteger)section
                              row:(NSInteger)row
                            total:(NSInteger)rowInThisSection
                     cornerRadius:(NSInteger)radius
                         isFTSHome:(BOOL)isFTSHome {

    NSInteger totalSections = [tableView numberOfSections];

    // ★ 保留 MioPlugin 的 firstRealSection/lastRealSection 空 section 跳过
    NSMutableArray *sectionRowCounts = [NSMutableArray array];
    for (NSInteger s = 0; s < totalSections; s++) {
        [sectionRowCounts addObject:@([tableView numberOfRowsInSection:s])];
    }
    NSInteger firstRealSection = -1, lastRealSection = -1;
    for (NSInteger s = 0; s < totalSections; s++) {
        if ([sectionRowCounts[s] integerValue] > 0) {
            if (firstRealSection == -1) firstRealSection = s;
            lastRealSection = s;
        }
    }

    // ★ 保留 MioPlugin 的 ≤3 合并模式
    if (totalSections > 3) {
        [self wp_applyStandardCorner:cell ...];
        return;
    }

    // ★ 引入微信优化的 bVar1 检测：前3个字母section是否都是1行
    BOOL bVar1 = (totalSections >= 4 &&
                  [sectionRowCounts[1] integerValue] == 1 &&
                  [sectionRowCounts[2] integerValue] == 1 &&
                  [sectionRowCounts[3] integerValue] == 1);

    // ★ 引入微信优化的"最后一个单行 section"检测
    BOOL isLastOneRowSection = ...;  // 从后扫描

    // ★ 决策：保留 MioPlugin 的 firstRealSection/lastRealSection 合并逻辑
    // 同时吸收 bVar1 的额外处理
    ...
}
```

### 最终结论

| 维度 | 优胜方 | 原因 |
|------|--------|------|
| 算法通用性 | **MioPlugin** | firstRealSection/lastRealSection 不受 Section 0 行数限制 |
| 代码可读性 | **MioPlugin** | 88 行 vs 280 行，无 goto |
| 通讯录场景特化 | **微信优化** | bVar1/bVar2 + 从后扫描更精确 |
| 性能 | **MioPlugin** | 边框缓存 + 单次 NSSet 查找 |
| 配置灵活性 | **MioPlugin** | 三主页独立开关 + 间距配置 |
| 空 section 处理 | **MioPlugin** | 自动跳过 |
| Section Header 处理 | **平手** | 两者都未处理 |

**总体**：MioPlugin 在通用性、可维护性、代码质量上明显优于微信优化。微信优化在通讯录场景特化上有其独特性（bVar1/bVar2 + 从后扫描），但这是以牺牲通用性和代码清晰度为代价的。

推荐：**以 MioPlugin 的 firstRealSection/lastRealSection 合并算法为主干，吸收微信优化的 bVar1 + 从后扫描思路**，实现更完善的分组圆角效果。

---

*本文档基于 `/www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m` 完整源码和 `/www/wwwroot/ios/插件/微信优化反编译最新/wxyh1.6.5.dylib.c` line 11527-12293 反编译代码生成。*