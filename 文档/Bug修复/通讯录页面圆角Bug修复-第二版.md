# 通讯录页面圆角 Bug 修复文档（第二版）

> **Bug：** 通讯录页面前 7 个原生 section（新的朋友 → 企业微信联系人）每个 section 只有 1 行，导致所有 Cell 都被判定为四个角全圆角。

---

## 一、问题定位

### 1.1 触发条件

**不是所有通讯录联系人都有问题，只有前 7 个原生 section：**

| Section 索引 | 内容 | 行数 |
|:-----------:|:-----|:----:|
| 0 | 新的朋友 | 1 |
| 1 | 群聊 | 1 |
| 2 | 标签 | 1 |
| 3 | 公众号 | 1 |
| 4 | 通讯录安全助手 | 1 |
| 5 | 微信团队 | 1 |
| 6 | 企业微信联系人 | 1 |
| 7+ | A-Z 字母索引联系人 | 1-N（视联系人数量而定） |

前 7 个 section **每个只有 1 行**，而 Section 7+（字母索引联系人）有些有多个联系人，section 内存在多行。

### 1.2 根因

当前的 `wp_applyCornerForContacts` 对所有 section 都用同一套逻辑：
- `rowInThisSection == 1` → 检查相邻 section → 4 种布尔组合判定

前 7 个 section 每个都是 1 行，如果只看相邻 section，会出现：
- `prevIsSingle && nextIsSingle` → 都当成连续合并组的中间行 → 无圆角
- 但实际上这一组应该被视为一个有边界的整体，**第一个顶角、最后一个底角、中间无角**

---

## 二、现有代码缺陷

[wp_applyCornerForContacts L636-671](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L636)：

```objc
if (rowInThisSection == 1) {
    BOOL prevIsSingle = ...;  // 只有相邻
    BOOL nextIsSingle = ...;  // 只有相邻
    
    // prevIsLast 被赋值但从未使用 ← 一眼就能看出逻辑不完整
    
    if (!prevIsSingle && !nextIsSingle)      // 真正独立 → 全角  ✅
    else if (prevIsSingle && !nextIsSingle)  // 合并末行 → 底角  ✅
    else if (!prevIsSingle && nextIsSingle)  // 合并首行 → 顶角  ✅
    else                                     // 连续合并 → 无角  ✅
}
```

**核心问题：** `prevIsSingle` 和 `nextIsSingle` 只能检查**紧邻的上一个/下一个 section**，无法知道整个前 7 个 section 的全局边界。7 个 section 连续的单行排列中，除了第 0 个应该顶角、第 6 个应该底角外，中间 5 个应无角。但相邻检查无法区分"section 1"（中间）和"section 6"（底角）的区别。

---

## 三、修复方案

### 3.1 核心思路

给通讯录圆角方法增加一个**合并范围**的概念：

1. 前 `mergeSectionsCount = 7` 个 section **合并为一个圆角组**
2. 在合并组内：找 `firstRealSection` 和 `lastRealSection` 确定首/末行
3. 合并组外（section ≥ 7）：降级为标准 `wp_applyStandardCorner` 逐 section 判断
4. 当 `cornerType == 0` 时将 `cornerRadius` 设为 0，防止意外圆角

### 3.2 完整代码

```objc
+ (void)wp_applyCornerForContacts:(UIView *)cell
                        tableView:(UITableView *)tableView
                        indexPath:(NSIndexPath *)indexPath
                          section:(NSInteger)section
                              row:(NSInteger)row
                            total:(NSInteger)rowInThisSection
                     cornerRadius:(NSInteger)radius
                         isFTSHome:(BOOL)isFTSHome {
    
    // ★ 合并前 N 个 section 为一个圆角组
    NSInteger mergeSectionsCount = 7;
    // 前 7 个 = 新的朋友 / 群聊 / 标签 / 公众号 /
    //          通讯录安全助手 / 微信团队 / 企业微信联系人
    // 每个 section 只有 1 行，需要合并处理
    
    NSInteger totalSections = [tableView numberOfSections];
    
    // ─── 分支 A：section 超出合并范围 → 标准 per-section ───
    if (section >= mergeSectionsCount) {
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
    
    // ─── 分支 B：在合并范围内 → 多 Section 合并模式 ───
    
    // Step 1: 收集前 mergeSectionsCount 个 section 的行数
    NSMutableArray<NSNumber *> *sectionRowCounts = [NSMutableArray array];
    for (NSInteger i = 0; i < mergeSectionsCount; i++) {
        if (i < totalSections) {
            [sectionRowCounts addObject:@([tableView numberOfRowsInSection:i])];
        } else {
            [sectionRowCounts addObject:@0];  // 不存在的 section 视为 0 行
        }
    }
    
    // Step 2: 找到第一个和最后一个非空 section
    NSInteger firstRealSection = -1;
    NSInteger lastRealSection = -1;
    for (NSInteger i = 0; i < mergeSectionsCount; i++) {
        if ([sectionRowCounts[i] integerValue] > 0) {
            if (firstRealSection == -1) firstRealSection = i;
            lastRealSection = i;
        }
    }
    
    // 如果没有非空 section（理论上不会走到这里），回退
    if (firstRealSection == -1) {
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
    
    // Step 3: 判定 cornerType
    NSInteger cornerType = 0;
    NSInteger borderType = 0;
    
    // 唯一非空 section 且只有 1 行 → 全圆角
    if (firstRealSection == lastRealSection &&
        [sectionRowCounts[firstRealSection] integerValue] == 1) {
        cornerType = 3; borderType = 0;
    }
    // 第一个非空 section 的首行 → 顶角
    else if (section == firstRealSection && row == 0) {
        cornerType = 1; borderType = 1;
    }
    // 最后一个非空 section 的末行 → 底角
    else if (section == lastRealSection &&
             row == [sectionRowCounts[section] integerValue] - 1) {
        cornerType = 2; borderType = 3;
    }
    // 合并组中间的单行 section → 无圆角（只保留左右边框）
    else if (rowInThisSection == 1) {
        cornerType = 0; borderType = 2;
    }
    // 多行 section 内部 → 标准首/中/末行
    else if (row == 0) {
        cornerType = 1; borderType = 1;
    } else if (row == rowInThisSection - 1) {
        cornerType = 2; borderType = 3;
    } else {
        cornerType = 0; borderType = 2;
    }
    
    // Step 4: 应用圆角
    // ★ cornerType == 0 时 radius 设 0 —— 防止任何意外圆角
    cell.layer.cornerRadius = (cornerType == 0) ? 0 : radius;
    cell.layer.maskedCorners = 0;
    
    if (cornerType == 1) {
        cell.layer.maskedCorners = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner;
    } else if (cornerType == 2) {
        cell.layer.maskedCorners = kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
    } else if (cornerType == 3) {
        cell.layer.maskedCorners = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner |
                                   kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
    }
    
    // Step 5: 应用边框（同样当 cornerType == 0 时 radius 为 0）
    [self wp_applyBorderAndBg:cell
                       radius:(cornerType == 0 ? 0 : radius)
                     position:borderType
                    isFTSHome:isFTSHome];
}
```

---

## 四、代码亮点分析

| 设计 | 说明 |
|:-----|:------|
| **`mergeSectionsCount = 7`** | 精准匹配"新的朋友 → 企业微信联系人"的 7 个原生 section |
| **`cornerRadius = 0` when type=0** | 即使 `maskedCorners` 有残留位也不会显示圆角，双重保险 |
| **section ≥ 7 降级标准路径** | 字母索引联系人 section 按正常逻辑独立处理 |
| **firstRealSection / lastRealSection** | 通过收集行数数组，精准定位合并组的全局首尾边界 |
| **不存在 section 补 0** | `if (i < totalSections) ... else @0` 防止越界 |
| **无冗余变量** | 没有像旧代码的 `prevIsLast` 那样无用的赋值 |

---

## 五、场景对比

### 5.1 正常通讯录布局

```
Section 0: 新的朋友（1行）           → 顶角（firstRealSection 首行）
Section 1: 群聊（1行）               → 无角（合并组中间单行）
Section 2: 标签（1行）               → 无角
Section 3: 公众号（1行）             → 无角
Section 4: 安全助手（1行）           → 无角
Section 5: 微信团队（1行）           → 无角
Section 6: 企业微信联系人（1行）     → 底角（lastRealSection 末行）

──────────────────────────────── 分裂线 ────────────────────────────────

Section 7+: 字母索引联系人           → 标准 per-section 独立判断
```

### 5.2 特殊布局（某 section 不存在）

如果通讯录里没有"群聊"（Section 1 行数为 0）：

```
Section 0: 新的朋友（1行）           → 顶角（firstRealSection）
Section 1: 群聊（0行）              → 视为空
Section 2: 标签（1行）               → 无角（合并组中间）
...
Section 6: 企业微信联系人（1行）     → 底角（lastRealSection）
```

### 5.3 日期全部禁用一个 section 不存在的情况

```
假设只有 Section 0-5（6 个 section）：
firstRealSection = 0 → 顶角
lastRealSection = 5  → 底角
中间 1-4 → 无角
```

---

## 六、验证清单

### 6.1 通讯录专项验证

| # | 场景 | 操作 | 预期 |
|:-:|:-----|:-----|:-----|
| **A1** | 前 7 个原生 section 全部存在 | 进入通讯录 | Section 0 顶角 + Section 6 底角 + 中间无角 |
| **A2** | 前 7 个中有 section 行数为 0 | 进入通讯录 | firstRealSection/lastRealSection 自适应 |
| **A3** | 仅 1 个非空原生 section | 进入通讯录 | 唯一行四个角全圆角 |
| **A4** | 只有 1 个联系人在 A 组（Section 7） | 进入通讯录 | Section 7 降级走 per-section → 四个角全圆角 |
| **A5** | 多个联系人在 B 组（Section 8） | 进入通讯录 | Section 8 per-section → 首行顶角 + 末行底角 |
| **A6** | 原生 section 7 个 + 多个字母组 | 进入通讯录 | 前 7 个合并组 + 后面各自独立 |

### 6.2 回归验证

| # | 场景 | 操作 | 预期 |
|:-:|:-----|:-----|:-----|
| **B1** | 聊天列表圆角 | 进入聊天列表 | 正常 |
| **B2** | 我的页面圆角 | 进入我的页面 | 正常 |
| **B3** | 发现页圆角 | 进入发现页面 | 正常 |
| **B4** | 搜索框圆角（如已实现） | 进入搜索结果页 | 正常 |
| **B5** | FTSHome 圆角 | 进入搜索首页 | 正常 |

### 6.3 开关验证

| # | 场景 | 操作 | 预期 |
|:-:|:-----|:-----|:-----|
| **C1** | 通讯录圆角关闭 | 关闭 `globalCornerContactsPageEnabled` | 通讯录恢复原生无圆角 |
| **C2** | 全局圆角关闭 | 关闭 `listCornerRadiusEnabled` | 所有列表恢复原生 |
| **C3** | 边框开关 | 开启/关闭 `listCellBorder` | 圆角正常、边框跟随 |
| **C4** | 边框粗细调整 | 修改 `listCellBorderWidth` | 边框宽度变化 |

---

## 七、与旧方案对比

| 对比项 | 旧代码（L636-671） | 新方案 |
|:-------|:-----------------|:-------|
| **合并范围** | 相邻 section（局部） | 前 7 个 section（全局） |
| **无用变量** | `prevIsLast` 未使用 | ✅ 无冗余 |
| **cornerRadius 清零** | ❌ 无 | ✅ type=0 时 radius=0 |
| **越界保护** | ❌ 无 | ✅ 不存在 section 补 0 |
| **section 7+ 处理** | 同样走 contacts 逻辑 | ✅ 降级为标准 per-section |
| **代码可读性** | 4 种布尔组合 | ✅ 清晰的 globalFirst/Last 判定 |