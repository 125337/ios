# MioPlugin 通讯录圆角改造 — 改法说明

> 只改 `ListCornerRadiusHook.m` 一个文件，默认启用，无设置项

---

## 改动位置

**文件**：`Modules/ListCornerRadius/ListCornerRadiusHook.m`

**方法**：`+ (void)wp_applyCornerForContacts:...`（当前 line 626-713）

**改动**：替换该方法中「分支 A：>3 section → 降级 per-section」的逻辑（当前 line 638-649），改为融合算法。

---

## 替换内容

### 删掉（当前 line 638-649）

```objc
    // ─── 分支 A：> 3 个 section → 降级为标准 per-section 模式 ───
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
```

### 替换为

```objc
    // ─── 分支 A：> 3 个 section → 增强合并模式 ───
    if (totalSections > 3) {
        // ① 找有效 section
        NSMutableArray *rowCounts = [NSMutableArray array];
        for (NSInteger s = 0; s < totalSections; s++) {
            [rowCounts addObject:@([tableView numberOfRowsInSection:s])];
        }
        NSInteger first = -1, last = -1;
        for (NSInteger s = 0; s < totalSections; s++) {
            if ([rowCounts[s] integerValue] > 0) {
                if (first == -1) first = s;
                last = s;
            }
        }
        if (first == -1) { [self wp_applyStandardCorner:cell ...]; return; }

        // ② bVar1：前 3 个 section（first 之后的）是否全是 1 行
        BOOL bVar1 = YES;
        NSInteger bLimit = MIN(first + 3, last);
        for (NSInteger s = first + 1; s <= bLimit; s++) {
            if ([rowCounts[s] integerValue] != 1) { bVar1 = NO; break; }
        }
        if (!bVar1) {
            [self wp_applyStandardCorner:cell ...];
            return;
        }

        // ③ 从后扫描连续单行 section，确定最后一个单行 section
        NSInteger scan = last;
        while (scan > first) {
            if ([rowCounts[scan] integerValue] == 1) { scan--; } else break;
        }
        // scan 停的位置：
        //   = first → first 之后全是单行 → 最后一个单行 = last
        //   > first → 停在非单行 section → 最后一个单行 = scan
        NSInteger lastOneRow = (scan == first) ? last : scan;

        // ④ 四路分发
        NSInteger ct = 0, bt = 2;
        if (section == first) {
            // 首个有效 section → per-section
            if (rowInThisSection == 1)            { ct = 3; bt = 0; }
            else if (row == 0)                     { ct = 1; bt = 1; }
            else if (row == rowInThisSection - 1)  { ct = 2; bt = 3; }
            else                                   { ct = 0; bt = 2; }
        }
        else if (section == lastOneRow && [rowCounts[section] integerValue] == 1) {
            // 最后一个单行 section → 底角
            ct = 2; bt = 3;
        }
        else if ([rowCounts[section] integerValue] == 1) {
            // 中间单行 section → 无角
            ct = 0; bt = 2;
        }
        else {
            // 后续多行 section → per-section
            if (row == 0)                       { ct = 1; bt = 1; }
            else if (row == rowInThisSection - 1) { ct = 2; bt = 3; }
            else                                  { ct = 0; bt = 2; }
        }

        // ⑤ 应用
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

## 替换后完整方法

替换完就是下面这样（line 626-713，红色是替换掉的部分，其他行不动）：

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

    // ─── 分支 A：> 3 个 section → 增强合并模式 ───
    if (totalSections > 3) {
        NSMutableArray *rowCounts = [NSMutableArray array];
        for (NSInteger s = 0; s < totalSections; s++)
            [rowCounts addObject:@([tableView numberOfRowsInSection:s])];

        NSInteger first = -1, last = -1;
        for (NSInteger s = 0; s < totalSections; s++) {
            if ([rowCounts[s] integerValue] > 0) {
                if (first == -1) first = s;
                last = s;
            }
        }
        if (first == -1) { [self wp_applyStandardCorner:cell ...]; return; }

        BOOL bVar1 = YES;
        NSInteger bLimit = MIN(first + 3, last);
        for (NSInteger s = first + 1; s <= bLimit; s++) {
            if ([rowCounts[s] integerValue] != 1) { bVar1 = NO; break; }
        }
        if (!bVar1) { [self wp_applyStandardCorner:cell ...]; return; }

        NSInteger scan = last;
        while (scan > first) {
            if ([rowCounts[scan] integerValue] == 1) scan--; else break;
        }
        NSInteger lastOneRow = (scan == first) ? last : scan;

        NSInteger ct = 0, bt = 2;
        if (section == first) {
            if (rowInThisSection == 1)            { ct = 3; bt = 0; }
            else if (row == 0)                    { ct = 1; bt = 1; }
            else if (row == rowInThisSection - 1) { ct = 2; bt = 3; }
            else                                  { ct = 0; bt = 2; }
        }
        else if (section == lastOneRow && [rowCounts[section] integerValue] == 1) {
            ct = 2; bt = 3;
        }
        else if ([rowCounts[section] integerValue] == 1) {
            ct = 0; bt = 2;
        }
        else {
            if (row == 0)                       { ct = 1; bt = 1; }
            else if (row == rowInThisSection - 1) { ct = 2; bt = 3; }
            else                                  { ct = 0; bt = 2; }
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

    // ─── 分支 B：≤ 3 个 section → 多 Section 合并模式 ───
    // [以下全部不动]
    NSMutableArray<NSNumber *> *sectionRowCounts = [NSMutableArray array];
    for (NSInteger s = 0; s < totalSections; s++)
        [sectionRowCounts addObject:@([tableView numberOfRowsInSection:s])];

    NSInteger firstRealSection = -1;
    NSInteger lastRealSection = -1;
    for (NSInteger s = 0; s < totalSections; s++) {
        if ([sectionRowCounts[s] integerValue] > 0) {
            if (firstRealSection == -1) firstRealSection = s;
            lastRealSection = s;
        }
    }

    NSInteger cornerType = 0;
    NSInteger borderType = 0;

    if (firstRealSection == lastRealSection && rowInThisSection == 1) {
        cornerType = 3; borderType = 0;
    }
    else if (section == firstRealSection && row == 0) {
        cornerType = 1; borderType = 1;
    }
    else if (section == lastRealSection && row == rowInThisSection - 1) {
        cornerType = 2; borderType = 3;
    }
    else if (rowInThisSection == 1) {
        cornerType = 0; borderType = 2;
    }
    else if (row == 0) {
        cornerType = 1; borderType = 1;
    } else if (row == rowInThisSection - 1) {
        cornerType = 2; borderType = 3;
    } else {
        cornerType = 0; borderType = 2;
    }

    cell.layer.cornerRadius = radius;
    cell.layer.maskedCorners = 0;

    if (cornerType == 1)
        cell.layer.maskedCorners = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner;
    else if (cornerType == 2)
        cell.layer.maskedCorners = kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
    else if (cornerType == 3)
        cell.layer.maskedCorners = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner |
                                   kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;

    [self wp_applyBorderAndBg:cell radius:radius position:borderType isFTSHome:isFTSHome];
}
```

---

## 总结

| 项目 | 内容 |
|:---|:---|
| 改什么文件 | `ListCornerRadiusHook.m` |
| 改什么方法 | `wp_applyCornerForContacts:` |
| 怎么改 | 把方法里 `totalSections > 3` 的降级 per-section 替换成上面的增强合并逻辑 |
| 删几行 | 删掉 12 行（原 line 638-649） |
| 加几行 | 加上面那段 ≈ 50 行 |
| 其他文件 | 一个都不用动 |

**行为变化**：
- 通讯录 section ≥ 4 时，如果前 3 个（first 后的）字母分组全是 1 行 → 自动半合并
- 否则 → 和旧版一样降级 per-section
- ≤ 3 section → 和旧版完全一样