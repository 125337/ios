# 通讯录页面圆角 Bug 修复文档（第二版）

> **Bug：** 通讯录页面（`ContactsViewController`）所有 Cell 都是**四个角全圆角**，因为
> 每个联系人独占一个 section，`rowInThisSection == 1` 对所有 Cell 都成立。

---

## 一、问题现状分析

### 1.1 当前调用链（MioPlugin）

```
replaced_MMTableViewCell_layoutSubviews     [L117]
  → isContacts = [className isEqualToString:@"ContactsViewController"]  [L209]
  → wp_applyCornerForContacts:              [L230]
      → rowInThisSection = numberOfRowsInSection:  [传入]
      → 分支1: rowInThisSection == 1        [L636]
            → 检查相邻 section 行数          [L639-643]
            → 4 种布尔组合判定 cornerType    [L652-663]
      → 分支2: row == 0                     [L665]
      → 分支3: row == rowInThisSection - 1  [L667]
      → 分支4: else                         [L669]
```

### 1.2 现有代码的缺陷

[wp_applyCornerForContacts: 方法 L636-671](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L636)：

```objc
if (rowInThisSection == 1) {
    // ★ 检查相邻 section
    ...
    prevIsLast = YES;  // ❌ 无实际作用的赋值
    ...
    if (!prevIsSingle && !nextIsSingle) {
        // 真正独立的 Cell → 全角    ✅
    } else if (prevIsSingle && !nextIsSingle) {
        // 合并组最后一行 → 底角    ✅
    } else if (!prevIsSingle && nextIsSingle) {
        // 合并组首行 → 顶角         ✅
    } else {
        // 上下都是单行 → 无角       ✅
    }
}
```

**存在的问题：**
| # | 问题 | 严重性 |
|:-:|:-----|:------:|
| 1 | `prevIsLast` 变量赋值后从未使用 | 🌕 无害但代码冗余 |
| 2 | 当相邻 section 是**多行**时，只检查了是否单行，没检查当前行在相邻 section 的位置边界 | 🌗 边界 case 可能出错 |
| 3 | 无法处理**多个连续单行 section 后接多行 section** 的混合场景 | 🌑 复杂场景失效 |

### 1.3 微信优化反编译代码的参考

详情参考：[微信优化反编译数据集线](file:///www/wwwroot/ios/插件/微信优化反编译最新/wxyh1.6.5.dylib.c#L11963)

微信优化的通讯录路径处理逻辑（伪码还原）：

```c
if (isContacts) {
    NSInteger totalSections = [tableView numberOfSections];
    
    // ─── 分支 A：≤3 个 section — 多 Section 合并模式 ───
    if (totalSections <= 3) {
        // 收集前 3 个 section 的行数
        NSMutableArray *rowCounts = [NSMutableArray array];
        for (i = 0; i < MIN(totalSections, 4); i++) {
            [rowCounts addObject:@([tableView numberOfRowsInSection:i])];
        }
        
        // 分析 rowCounts 确定 cornerType：
        //   第 1 个非空 section 的首行 → 顶角
        //   最后 1 个非空 section 的末行 → 底角
        //   孤立单行 section → 全角
        //   多行 section 内 → 内部首/中/末行区分
        // 详细分析见第三-四节 ⬇
    }
    
    // ─── 分支 B：>3 个 section — 降级为每 Section 独立 ───
    else {
        goto standard_path; // 走标准 per-section 逻辑
    }
}
```

---

## 二、根因

通讯录页面 `ContactsViewController` 表结构的特点是**每个联系人独占一个 section**（1 行/section）。所以 `numberOfRowsInSection:` 对所有 section 都返回 1。

如果使用标准 `wp_applyStandardCorner` 的 section 内首/中/末行判断逻辑，由于 `rowInThisSection == 1` 对所有行成立，每个 Cell 都会被判定为 `cornerType == 3`（四个角全圆角）。

> **聊天列表等其他页面不同：** 一个 section 下有多个 row（例如「置顶会话」section 有 3 个联系人，「普通会话」section 有 10 个联系人），所以标准逻辑能正确区分首/中/末行。

---

## 三、微信优化修复方案详解

### 3.1 核心思路

将通讯录的前 N 个 section 合并为一个**虚拟分组**，在分组范围内：
- **第一个非空 section 的首行** → 顶部圆角（cornerType = 1）
- **最后一个非空 section 的末行** → 底部圆角（cornerType = 2）
- **分组内中间孤立单行** → 无圆角（cornerType = 0）
- **真正孤立的单行（上下都是多行 section）** → 四个角全圆角（cornerType = 3）

### 3.2 伪代码表示

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
    
    // ─── 降级路径：超过 3 个 section 就走标准 per-section ───
    //     （通讯录的 section 结构在第 4+ 个 section 时基本正常，
    //       不需要再合并了，直接按 section 独立判断）
    if (totalSections > 3) {
        // 走标准逻辑：行数决定的顶角/底角/无角
        // ... 等同于 wp_applyStandardCorner 的逻辑
    }
    
    // ─── 多 section 合并路径：1-3 个 section ───
    // 1. 收集每个 section 的行数 → 数组 rowCounts[]
    // 2. 找到第一个非空 section (firstRealSection)
    // 3. 找到最后一个非空 section (lastRealSection)
    // 4. 判断当前 cell 是否在 section 边界上：
    
    // 情形 A：当前 section 是唯一非空 section 且只有 1 行 → 全角
    if (firstRealSection == lastRealSection && rowInThisSection == 1) {
        cornerType = 3;  // 四个角全圆角
    }
    // 情形 B：当前行是第一个非空 section 的首行 → 顶角
    else if (section == firstRealSection && row == 0) {
        cornerType = 1;  // 顶部圆角
    }
    // 情形 C：当前行是最后一个非空 section 的末行 → 底角
    else if (section == lastRealSection && row == rowInThisSection - 1) {
        cornerType = 2;  // 底部圆角
    }
    // 情形 D：单行 section，既不靠前也不靠后 → 无圆角（合并组中间）
    else if (rowInThisSection == 1) {
        cornerType = 0;  // 无圆角
    }
    // 情形 E：多行 section 内部 → 按标准逻辑
    else if (row == 0) {
        cornerType = 1;  // 顶角
    } else if (row == rowInThisSection - 1) {
        cornerType = 2;  // 底角
    } else {
        cornerType = 0;  // 无角
    }
}
```

### 3.3 具体场景示例

**场景：通讯录有 3 个 section**

```
Section 0: 我 (1行)    → 第 1 个非空 section 的首行 → 顶角
Section 1: A 组 (3行)  → 多行 section 内部：
                            Alice (row 0) → 顶角
                            Andy  (row 1) → 无角
                            Amy   (row 2) → 无角（不是最后一个非空 section 的末行）
Section 2: B 组 (1行)  → 最后 1 个非空 section 的末行 → 底角
```

**视觉结果：**
```
┌─────────────────────┐  ← Section 0 (顶角)
│   我                  │
└─────────────────────┘
┌─────────────────────┐  ← Section 1 row 0 (顶角)
│   Alice              │
├─────────────────────┤  ← Section 1 row 1 (无角)
│   Andy               │
├─────────────────────┤  ← Section 1 row 2 (无角，不是末行)
│   Amy                │
└─────────────────────┘  ← Section 2 (底角)
│   Bob                │
└─────────────────────┘
```



---

## 四、MioPlugin 修复方案（推荐）

### 4.1 方案选择

| 方案 | 描述 | 工作量 | 风险 |
|:-----|:-----|:------:|:----:|
| **A** | 参考微信优化重写 `wp_applyCornerForContacts` | 中 | 低 |
| **B** | 修复现有 `wp_applyCornerForContacts` 的布尔逻辑 | 小 | 中（需验证边界） |
| **C** | 通讯录直接用 `wp_applyStandardCorner` | 最小 | 高（无跨 section 合并） |

### 4.2 推荐方案 A：参考微信优化实现

**改动位置：** [ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m) L626-L686，将原 `wp_applyCornerForContacts` 方法整体替换。

**核心逻辑：**

```objc
+ (void)wp_applyCornerForContacts:(UIView *)cell
                        tableView:(UITableView *)tableView
                        indexPath:(NSIndexPath *)indexPath
                          section:(NSInteger)section
                              row:(NSInteger)row
                            total:(NSInteger)rowInThisSection
                     cornerRadius:(NSInteger)radius
                         isFTSHome:(BOOL)isFTSHome {
    
    // ─── 获取全表 section 数 ───
    NSInteger totalSections = [tableView numberOfSections];
    
    // ─── 分支 A：> 3 个 section → 降级为标准 per-section 模式 ───
    //     方法：直接在当前 section 内部按首/中/末行判断
    //     原因：超过 3 个 section 时，通讯录结构已足够分化，
    //           继续合并反而可能产生视觉错误
    if (totalSections > 3) {
        [self wp_applyStandardCorner:cell
                          tableView:tableView
                          indexPath:indexPath
                            section:section
                                row:row
                              total:rowInThisSection
                       cornerRadius:radius
                          isFTSHome:isFTSHome
                          className:@"ContactsViewController"];
        return;
    }
    
    // ─── 分支 B：≤ 3 个 section → 多 Section 合并模式 ───
    
    // Step 1: 收集每个 section 的行数
    NSMutableArray<NSNumber *> *sectionRowCounts = [NSMutableArray array];
    for (NSInteger s = 0; s < totalSections; s++) {
        [sectionRowCounts addObject:@([tableView numberOfRowsInSection:s])];
    }
    
    // Step 2: 找到第一个和最后一个非空 section
    NSInteger firstRealSection = -1;
    NSInteger lastRealSection = -1;
    for (NSInteger s = 0; s < totalSections; s++) {
        if ([sectionRowCounts[s] integerValue] > 0) {
            if (firstRealSection == -1) firstRealSection = s;
            lastRealSection = s;
        }
    }
    
    // Step 3: 判断 cornerType
    NSInteger cornerType = 0;
    NSInteger borderType = 0;
    
    // 只有一个非空 section 且只有 1 行 → 全角
    if (firstRealSection == lastRealSection && rowInThisSection == 1) {
        cornerType = 3; borderType = 0;
    }
    // 当前是第一个非空 section 的首行 → 顶角
    else if (section == firstRealSection && row == 0) {
        cornerType = 1; borderType = 1;
    }
    // 当前是最后一个非空 section 的末行 → 底角
    else if (section == lastRealSection && row == rowInThisSection - 1) {
        cornerType = 2; borderType = 3;
    }
    // 单行 section 在中间位置 → 无角（合并组中间）
    else if (rowInThisSection == 1) {
        cornerType = 0; borderType = 2;
    }
    // 多行 section 内部 → 标准首/中/末行判断
    else if (row == 0) {
        cornerType = 1; borderType = 1;
    } else if (row == rowInThisSection - 1) {
        cornerType = 2; borderType = 3;
    } else {
        cornerType = 0; borderType = 2;
    }
    
    // Step 4: 应用圆角和边框（以下代码维持不变）
    cell.layer.cornerRadius = radius;
    cell.layer.maskedCorners = 0;
    
    if (cornerType == 1) {
        cell.layer.maskedCorners = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner;
    } else if (cornerType == 2) {
        cell.layer.maskedCorners = kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
    } else if (cornerType == 3) {
        cell.layer.maskedCorners = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner |
                                   kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
    }
    
    [self wp_applyBorderAndBg:cell radius:radius position:borderType isFTSHome:isFTSHome];
}
```

### 4.3 与现有代码的差异对比

| 对比项 | 现有代码（L636-671） | 修复方案 |
|:-------|:-------------------|:---------|
| **总 section ≤ 3 判断** | ❌ 无 | ✅ 增加 `totalSections > 3` 降级 |
| **降级处理** | ❌ 无 | ✅ `>3` → 调用 `wp_applyStandardCorner` |
| **非空 section 检测** | ❌ 只检查相邻 section | ✅ 找到全局第一个和最后一个非空 section |
| **`prevIsLast` 无用变量** | ❌ 有 | ✅ 删除 |
| **合并组中间行** | 4 种布尔组合 | ✅ 清晰的全局首/末 section 判断 |
| **多行 section 混合** | 有限 | ✅ 自然支持多行 section 在合并组中 |
| **边界计算** | 局部相邻 section | ✅ 全局 firstReal/lastReal |

---

## 五、场景对比表

| 通讯录结构 | 现有代码 | 修复后 | 
|:-----------|:--------|:-------|
| Section 0: 我(1行) | 上下无相邻 → 全角 ❌ | 首非空首行 → 顶角 ✅ |
| Section 1: A组(3行) row 0 | 行数=3 >1 → 顶角 ✅ | 非首非空 → 首行 → 顶角 ✅ |
| Section 1: A组(3行) row 1 | 行数=3 >1 → 无角 ✅ | 非首非空 → 中行 → 无角 ✅ |
| Section 2: B组(2行) row 1 | 行数=2 >1 → 底角 ✅ | 末非末行 → 底角 ✅ | 
| Section 0: 我(1行) + A组(1行) | 上下挨着 → 无角 ✅ | 首行→顶角 ✅ 末行→底角 ✅ |
| Section 0-4: 5个单行 | 全部全角 ❌ | section>3 → per-section → 全部全角（可接受） |
| Section 0: 我(1行) + A组(2行) + B组(1行) | prevIsLast 无用 → 期望底角？❌ | 末非空末行 → 底角 ✅ |

---

## 六、验证方法

| # | 场景 | 操作 | 预期 |
|:-:|:-----|:-----|:-----|
| 1 | 通讯录有 1 个联系人 | 进入通讯录 | 唯一 Cell 四个角全圆角 |
| 2 | 通讯录有 2-3 个联系人，各占 1 个 section | 进入通讯录 | 第 1 个顶角 + 最后 1 个底角 + 中间无角 |
| 3 | 通讯录首页"我" + 多个联系人 | 进入通讯录 | 首行顶角 + 末行底角（合并组模式） |
| 4 | 通讯录联系人很多（>3 个 section） | 进入通讯录 | 降级到 per-section，每个 section 独立 |
| 5 | 通讯录中某个字母分组有 2+ 联系人 | 进入该字母分组 | 组内首行顶角 + 末行底角 + 中间无角 |
| 6 | 聊天列表圆角 | 进入聊天列表 | 不受影响 ✅ |
| 7 | 我的页面圆角 | 进入我的页面 | 不受影响 ✅ |
| 8 | 发现页圆角 | 进入发现页面 | 不受影响 ✅ |

---

## 七、微信优化参考代码溯源

| 文件 | 位置 | 说明 |
|:-----|:-----|:------|
| [wxyh1.6.5.dylib.c](file:///www/wwwroot/ios/插件/微信优化反编译最新/wxyh1.6.5.dylib.c) | L11770-11771 | ContactsViewController 匹配 |
| [wxyh1.6.5.dylib.c](file:///www/wwwroot/ios/插件/微信优化反编译最新/wxyh1.6.5.dylib.c) | L11963-11965 | section 数检查（>3 降级） |
| [wxyh1.6.5.dylib.c](file:///www/wwwroot/ios/插件/微信优化反编译最新/wxyh1.6.5.dylib.c) | L11966-11987 | 收集前 4 个 section 行数 |
| [wxyh1.6.5.dylib.c](file:///www/wwwroot/ios/插件/微信优化反编译最新/wxyh1.6.5.dylib.c) | L11988-12088 | 非空 section 分析 + 边界判定 |
| [wxyh1.6.5.dylib.c](file:///www/wwwroot/ios/插件/微信优化反编译最新/wxyh1.6.5.dylib.c) | L12184-12200 | 降级后的标准 per-section 逻辑 |