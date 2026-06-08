# 通讯录页面圆角 Bug 修复文档

> **Bug：** 通讯录页面（`ContactsViewController`）所有 Cell 都是**四个角全圆角**，没有按行位置区分首行/中行/末行的圆角样式。

---

## 一、问题现象

通讯录页面中，每个联系人 Cell 都显示为**四个角全圆角**的独立卡片：
- 同一个字母分组下的联系人之间没有「首行顶圆角 → 中间行无圆角 → 末行底圆角」的区分
- 所有 Cell 视觉效果一致，看起来像是每个 section 只有 1 行

**正确期望：**
```
同一字母分组（同一个 section）：
  ┌─────────────────────┐   ← 首行：仅顶部圆角
  │   Alice              │
  ├─────────────────────┤   ← 中间行：无圆角
  │   Andy               │
  ├─────────────────────┤
  │   Amy                │
  └─────────────────────┘   ← 末行：仅底部圆角
```

**实际错误：**
```
  ┌─────────────────────┐
  │   Alice              │  ← 四个角全圆角
  └─────────────────────┘
  ┌─────────────────────┐
  │   Andy               │  ← 四个角全圆角
  └─────────────────────┘
  ┌─────────────────────┐
  │   Amy                │  ← 四个角全圆角
  └─────────────────────┘
```

---

## 二、代码分析

### 2.1 调用链路

```
replaced_MMTableViewCell_layoutSubviews   [ListCornerRadiusHook.m L117]
  → isContacts = YES                        [L209]
  → wp_applyCornerForContacts:             [L230]
      → rowInThisSection = totalRows        [参数传入]
      → 根据 rowInThisSection 判断 cornerType  [L636-644]
```

### 2.2 圆角类型判断逻辑

[ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m) L636-644：

```objc
if (rowInThisSection == 1) {
    cornerType = 3; // 四个角全圆角
} else if (row == 0) {
    cornerType = 1; // 顶部圆角
} else if (row == rowInThisSection - 1) {
    cornerType = 2; // 底部圆角
} else {
    cornerType = 0; // 无圆角
}
```

### 2.3 rowInThisSection 来源

[ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m) L227：

```objc
NSInteger totalRows = [tableView numberOfRowsInSection:section];
```

### 2.4 根因分析

通讯录页面所有 Cell 都是 `cornerType == 3`（四个角全圆角），说明每一行进入 `wp_applyCornerForContacts` 时 `rowInThisSection == 1`。

这意味着 `[tableView numberOfRowsInSection:section]` 对每个 section 都返回 1，即**微信通讯录的每个 section 都只有 1 行**。

**原因：**
`ContactsViewController` 的表结构采用**每个联系人占用独立 section**（而不是按字母分组统一 section）。微信通讯录实现中，每个联系人的字母索引条（A-Z）通过 section index 实现导航跳转，实际数据模型中每个 section 只包含 1 个联系人 row + 1 个 section header（字母索引项）。

> 这与聊天列表（`NewMainFrameViewController`）不同，聊天列表的 section 是按类型分组（置顶/普通），每个 section 下有多个 row。

---

## 三、修复方案

### 方案 A（推荐）：通讯录独立走「连续列表」模式

**思路：** 通讯录页面不用 section 边界来决定圆角，而是将整个通讯录表格视为一个**连续列表**，只由**全局首行/末行**决定圆角样式。

**改动文件：** [ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m)

**修改位置：** `replaced_MMTableViewCell_layoutSubviews` 中 L229-237，替换为：

```objc
if (isContacts) {
    // ★ 通讯录：连续列表模式，不用 section 边界
    //   获取整个 table 的总 row 数（跨所有 section）
    NSInteger totalSections = [tableView numberOfSections];
    // 计算当前 cell 在所有 section 中的全局 row 索引
    NSInteger globalRow = 0;
    for (NSInteger s = 0; s < section; s++) {
        globalRow += [tableView numberOfRowsInSection:s];
    }
    globalRow += row;
    // 计算总行数
    NSInteger grandTotal = 0;
    for (NSInteger s = 0; s < totalSections; s++) {
        grandTotal += [tableView numberOfRowsInSection:s];
    }
    
    [ListCornerRadiusHook wp_applyCornerForContacts:cellView
                                         tableView:tableView
                                         indexPath:indexPath
                                           section:section
                                               row:row
                                             total:totalRows   // ★ 保持原参传入，但内部可忽略
                                      cornerRadius:cornerRadius
                                          isFTSHome:isFTSHome
                                        globalRow:globalRow
                                      grandTotal:grandTotal];
}
```

然后在 `wp_applyCornerForContacts` 中新增参数，改用 `globalRow` 和 `grandTotal` 来判断：

```objc
+ (void)wp_applyCornerForContacts:(UIView *)cell
                        tableView:(UITableView *)tableView
                        indexPath:(NSIndexPath *)indexPath
                          section:(NSInteger)section
                              row:(NSInteger)row
                            total:(NSInteger)rowInThisSection
                     cornerRadius:(NSInteger)radius
                         isFTSHome:(BOOL)isFTSHome
                       globalRow:(NSInteger)globalRow
                     grandTotal:(NSInteger)grandTotal {
    NSInteger cornerType = 0;
    NSInteger borderType = 0;
    
    if (grandTotal == 1) {
        cornerType = 3; borderType = 0;  // 整个表只有 1 行 → 全角
    } else if (globalRow == 0) {
        cornerType = 1; borderType = 1;  // 全局首行 → 顶部圆角
    } else if (globalRow == grandTotal - 1) {
        cornerType = 2; borderType = 3;  // 全局末行 → 底部圆角
    } else {
        cornerType = 0; borderType = 2;  // 中间行 → 无圆角
    }
    
    // ... 后续逻辑保持不变
}
```

**效果：**
```
通讯录所有联系人视为一个连续列表：
  ┌─────────────────────┐
  │   第 1 个联系人       │  ← 仅顶部圆角（全局首行）
  ├─────────────────────┤
  │   第 2 个联系人       │  ← 无圆角
  ├─────────────────────┤
  │   第 3 个联系人       │  ← 无圆角
  ├─────────────────────┤
  │   ...               │
  ├─────────────────────┤
  │   最后 1 个联系人     │  ← 仅底部圆角（全局末行）
  └─────────────────────┘
```

> **注意：** 这种方案会丢失按字母分组的分组感（每个 section 分组之间没有视觉间隔），但可以通过 section header 的显示来弥补分组感。

---

### 方案 B（轻量）：通讯录跳过 section 圆角判断，只给首行/末行样式

**思路：** 不改方法签名，在 `wp_applyCornerForContacts` 内部直接计算全局首行/末行。

**改动位置：** [ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m) L626-L659，局部修改：

```objc
+ (void)wp_applyCornerForContacts:(UIView *)cell
                        tableView:(UITableView *)tableView
                        indexPath:(NSIndexPath *)indexPath
                          section:(NSInteger)section
                              row:(NSInteger)row
                            total:(NSInteger)rowInThisSection
                     cornerRadius:(NSInteger)radius
                         isFTSHome:(BOOL)isFTSHome {
    // ★ 通讯录：每个 section 只有 1 行，改用全局行号判断
    NSInteger totalSections = [tableView numberOfSections];
    NSInteger totalAllRows = 0;
    NSInteger currentGlobalRow = 0;
    for (NSInteger s = 0; s < totalSections; s++) {
        NSInteger rowsInSection = [tableView numberOfRowsInSection:s];
        if (s < section) {
            currentGlobalRow += rowsInSection;
        }
        totalAllRows += rowsInSection;
    }
    currentGlobalRow += row;
    
    // ★ 改用全局行号判断，而不是 section 内行号
    NSInteger cornerType = 0;
    NSInteger borderType = 0;
    if (totalAllRows == 1) {
        cornerType = 3; borderType = 0;
    } else if (currentGlobalRow == 0) {
        cornerType = 1; borderType = 1;
    } else if (currentGlobalRow == totalAllRows - 1) {
        cornerType = 2; borderType = 3;
    } else {
        cornerType = 0; borderType = 2;
    }
    
    // ... 后续不变
}
```

**效果：** 同上，但改动范围更小、不涉及方法签名变化。

---

### 方案 C（保守）：通讯录不走圆角

**思路：** 如果通讯录每个 section 只有 1 行的情况无法避免，且连续列表模式不适合，可以直接让通讯录页面不应用圆角。

**改动位置：** [ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m) L229：

```objc
// 改前
if (isContacts) {
    [ListCornerRadiusHook wp_applyCornerForContacts:...];
    
// 改后
if (isContacts) {
    // ★ 通讯录页面跳过圆角（每个 section 只有 1 行，圆角效果不理想）
    // 留空白，不设置任何圆角
```

---

## 四、方案对比

| 方案 | 工作量 | 效果 | 风险 |
|:-----|:------:|:-----|:-----|
| **A（连续列表）** | 中（修改方法签名 + 调用方） | 最好的视觉效果，整个通讯录融合 | 需要同步更新 header |
| **B（轻量方案）** | 小（仅改函数内部） | 同 A，但不影响外部调用 | 低，仅在 wp_applyCornerForContacts 内部 |
| **C（跳过通讯录）** | 最小（改一行） | 通讯录无圆角，恢复到微信原生 | 最低，但功能缺失 |

---

## 五、验证方法

| # | 测试项 | 预期 |
|:-:|:-------|:-----|
| 1 | 通讯录页面第一个联系人 | 仅顶部圆角 |
| 2 | 通讯录页面中间的联系人 | 无圆角（方角） |
| 3 | 通讯录页面最后一个联系人 | 仅底部圆角 |
| 4 | 通讯录只有 1 个联系人时 | 四个角全圆角 |
| 5 | 通讯录联系人超过 2 个 | 首行顶圆角 + 末行底圆角 + 中间无圆角 |
| 6 | 聊天列表圆角不受影响 | 保持原有的 section 分组圆角 |
| 7 | 我的页面圆角不受影响 | 保持原有圆角 |
| 8 | 发现页面圆角不受影响 | 保持原有圆角 |