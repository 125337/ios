# 一次性修复：通讯录 Section 0 和 Section 1 分离问题

## 问题现象

当前效果：
```
Section 0: [新朋友，仅聊天，群聊，标签] → 4 行（独立卡片）
Section 1: [公众号，服务号，企业微信] → 3 行（独立卡片）
```

期望效果（微信优化）：
```
Section 0 + Section 1 → 合并成一个大卡片（7 行）
```

---

## 根本原因

微信通讯录的真实 Section 结构：
```
Section 0: [新朋友，仅聊天，群聊，标签] → 4 行
Section 1: [公众号，服务号，企业微信联系人] → 3 行
Section 2: [我的企业] → 3 行（有 header "我的企业"）
Section 3: [A] → N 行
...
```

当前 MioPlugin 的逻辑：
- Section 0: per-section → 顶角 + 底角 ✓
- Section 1: per-section → 顶角 + 底角 ✓
- **问题**：Section 0 和 Section 1 之间有 header 分隔，看起来是两个卡片

---

## 解决方案：Section 0 和 Section 1 合并处理

### 核心思路

在 `wp_applyCornerForContacts:` 中增加一个检查：

```
如果 Section 0 有 4 行 且 Section 1 有 3 行 → 合并处理
  - Section 0 末行（标签）→ 无角（去掉底角）
  - Section 1 首行（公众号）→ 无角（去掉顶角）
  - Section 1 末行（企业微信）→ 底角
否则 → 保持现有逻辑
```

---

## 具体改动

### 文件：`MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m`

### 修改位置：`wp_applyCornerForContacts:` 方法（line 637-746）

### 改动内容

在 **Step 2: 检查 Section 0 行数** 之后，增加 **Step 2.5: 检查 Section 0+1 合并条件**：

```objc
// 在 line 686 之后增加：

// Step 2.5: 检查 Section 0 和 Section 1 是否需要合并
// 条件：Section 0 有 4 行 且 Section 1 有 3 行
NSInteger section1Rows = [rowCounts[1] integerValue];
if (section0Rows == 4 && section1Rows == 3) {
    // 合并 Section 0 和 Section 1
    NSInteger ct = 0, bt = 2;
    
    if (section == 0) {
        // Section 0
        if (rowInThisSection == 1) {
            // 只有 1 行 → 全角（不可能，因为 section0Rows==4）
            ct = 3; bt = 0;
        } else if (row == 0) {
            // 首行 → 顶角
            ct = 1; bt = 1;
        } else if (row == rowInThisSection - 1) {
            // 末行 → 无角（去掉底角，和 Section 1 连在一起）
            ct = 0; bt = 2;
        } else {
            // 中间行 → 无角
            ct = 0; bt = 2;
        }
    }
    else if (section == 1) {
        // Section 1
        if (row == 0) {
            // 首行 → 无角（去掉顶角，和 Section 0 连在一起）
            ct = 0; bt = 2;
        } else if (row == rowInThisSection - 1) {
            // 末行 → 底角
            ct = 2; bt = 3;
        } else {
            // 中间行 → 无角
            ct = 0; bt = 2;
        }
    }
    else {
        // Section 2+ → 标准 per-section
        [self wp_applyStandardCorner:cell ...];
        return;
    }
    
    // 应用圆角
    cell.layer.cornerRadius = (ct == 0) ? 0 : radius;
    cell.layer.maskedCorners = ct == 1 ? (kCALayerMinXMinYCorner|kCALayerMaxXMinYCorner)
                                 : ct == 2 ? (kCALayerMinXMaxYCorner|kCALayerMaxXMaxYCorner)
                                 : ct == 3 ? (kCALayerMinXMinYCorner|kCALayerMaxXMinYCorner|
                                              kCALayerMinXMaxYCorner|kCALayerMaxXMaxYCorner)
                                 : 0;
    [self wp_applyBorderAndBg:cell radius:radius position:bt isFTSHome:isFTSHome];
    return;
}
```

---

## 完整修改后的代码

```objc
+ (void)wp_applyCornerForContacts:(UIView *)cell
                        tableView:(UITableView *)tableView
                        indexPath:(NSIndexPath *)indexPath
                          section:(NSInteger)section
                              row:(NSInteger)row
                            total:(NSInteger)rowInThisSection
                     cornerRadius:(NSInteger)radius
                         isFTSHome:(BOOL)isFTSHome {

    // ─── 分支 A：section > 3 → 标准 per-section ───
    if (section > 3) {
        [self wp_applyStandardCorner:cell ...];
        return;
    }

    // ─── 分支 B：section <= 3 → 特殊算法 ───

    // Step 1: 收集 Section 0-3 的行数
    NSInteger totalSections = [tableView numberOfSections];
    NSMutableArray *rowCounts = [NSMutableArray array];
    for (NSInteger s = 0; s < MIN(4, totalSections); s++) {
        [rowCounts addObject:@([tableView numberOfRowsInSection:s])];
    }
    while (rowCounts.count < 4) {
        [rowCounts addObject:@0];
    }

    // Step 2: 检查 Section 0 行数（必须是 3 或 4 行）
    NSInteger section0Rows = [rowCounts[0] integerValue];
    if (section0Rows < 3 || section0Rows > 4) {
        [self wp_applyStandardCorner:cell ...];
        return;
    }

    // ★ Step 2.5: 检查 Section 0 和 Section 1 是否需要合并 ★
    NSInteger section1Rows = [rowCounts[1] integerValue];
    if (section0Rows == 4 && section1Rows == 3) {
        // 合并 Section 0 和 Section 1
        NSInteger ct = 0, bt = 2;
        
        if (section == 0) {
            if (row == 0) {
                ct = 1; bt = 1;  // 顶角
            } else if (row == rowInThisSection - 1) {
                ct = 0; bt = 2;  // 末行 → 无角（和 Section 1 连在一起）
            } else {
                ct = 0; bt = 2;  // 中间行
            }
        }
        else if (section == 1) {
            if (row == 0) {
                ct = 0; bt = 2;  // 首行 → 无角（和 Section 0 连在一起）
            } else if (row == rowInThisSection - 1) {
                ct = 2; bt = 3;  // 底角
            } else {
                ct = 0; bt = 2;  // 中间行
            }
        }
        else {
            [self wp_applyStandardCorner:cell ...];
            return;
        }
        
        cell.layer.cornerRadius = (ct == 0) ? 0 : radius;
        cell.layer.maskedCorners = ct == 1 ? (kCALayerMinXMinYCorner|kCALayerMaxXMinYCorner)
                                     : ct == 2 ? (kCALayerMinXMaxYCorner|kCALayerMaxXMaxYCorner)
                                     : ct == 3 ? (kCALayerMinXMinYCorner|kCALayerMaxXMinYCorner|
                                                  kCALayerMinXMaxYCorner|kCALayerMaxXMaxYCorner)
                                     : 0;
        [self wp_applyBorderAndBg:cell radius:radius position:bt isFTSHome:isFTSHome];
        return;
    }

    // Step 3: bVar1 检测 - section 1/2/3 是否都是 1 行
    BOOL bVar1 = ([rowCounts[1] integerValue] == 1 &&
                  [rowCounts[2] integerValue] == 1 &&
                  [rowCounts[3] integerValue] == 1);

    if (!bVar1) {
        [self wp_applyStandardCorner:cell ...];
        return;
    }

    // Step 4: 半合并模式（原有逻辑，不动）
    // ...
}
```

---

## 效果对比

### 修改前
```
Section 0（4 行）：
新朋友─────────────┐  ← 顶角
│仅聊天              │
│群聊                │
│标签                │  ← 底角
└────────────────────┘

Section 1（3 行）：
┌公众号──────────────┐  ← 顶角
│服务号              │
│企业微信            │  ← 底角
└────────────────────┘
```

### 修改后
```
Section 0 + Section 1（7 行）：
┌新朋友─────────────┐  ← 顶角
│仅聊天              │
│群聊                │
│标签                │  ← 无角（底角去掉）
│公众号              │  ← 无角（顶角去掉）
│服务号              │
│企业微信            │  ← 底角
└────────────────────┘
```

---

## 测试验证

重启微信后检查：
1. Section 0 和 Section 1 是否合并成一个卡片
2. Section 2（我的企业）是否保持独立卡片
3. Section 3+（A-Z 字母）是否正常 per-section

---

## 其他场景不影响

- Section 0 有 3 行 → 走原有 bVar1 逻辑
- Section 0 有 5 行+ → 降级 per-section
- Section 1 有其他行数 → 降级 per-section
- Section > 3 → 标准 per-section

---

*创建时间：2026-06-08*
*文档位置：`/www/wwwroot/ios/文档/一次性修复/通讯录 Section0+1 合并修复.md`*