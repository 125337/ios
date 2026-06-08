# 通讯录页面圆角 Bug 修复文档（第三版）

> **Bug：** 通讯录页面前 N 个原生 section 每个只有 1 行，圆角被错误地分成多组。
> **根因：** 硬编码 `mergeSectionsCount = 7` 无法适应微信版本变化，且无法处理中间夹杂的多行 section（如"我的企业"）导致的组断裂。

---

## 一、现状分析

### 1.1 截图反映的实际效果

```
┌─────────────────────┐  ← 新的朋友（顶角）        ★ 第一组
│ 仅聊天的朋友          │       （无角）
│ 群聊                 │       （无角）
│ 标签                 │  ← 标签（底角）            ★ 组结束
                         ← 中间出现断裂间隙
┌─────────────────────┐  ← 公众号（顶角）           ★ 第二组
│ 服务号               │       （无角）
│ 企业微信联系人         │  ← 底角                   ★ 组结束

  ── 我的企业（header）──

┌─────────────────────┐  ← 二道区麦宛...（顶角）    ★ 第三组（per-section）
│ 清衫网络             │       （无角）
│ 小涵饱饱             │  ← 底角

  ── A（header）──

┌─────────────────────┐  ← $a 辉 3                  ★ 字母组
│ ·A· 糊涂灿👑         │
```

**问题：** 前 7 个原生 section 被分成了 **2 个独立的圆角组**，中间出现不应有的断裂。

### 1.2 为什么会断成两组？

第二版方案用 `mergeSectionsCount = 7` 固定合并前 7 个 section。但实际通讯录的 section 结构中：

| 可能情况 | 说明 |
|:---------|:------|
| **中间有空 section** | "通讯录安全助手"/"微信团队"在某些版本不存在，行数为 0 |
| **中间有多行 section** | "我的企业"可能在前面且有多行 row |
| **微信版本差异** | 不同版本原生 section 数量不同（6/7/8 个不等） |

当 `mergeSectionsCount = 7` 但实际结构不匹配时，可能出现：
- 空 section 不影响 `firstRealSection`/`lastRealSection` 查找（它们会被跳过）
- 但**多行 section 夹在中间**时，它的首行会被判为顶角、末行为底角，把前后截断成两组

---

## 二、最佳方案：动态连续单行合并

### 2.1 核心思路

**不再硬编码合并多少个 section，而是动态扫描：**

```
从 section 0 开始向后扫描：
  ├─ 如果当前 section 只有 1 行 → 加入当前合并组
  ├─ 如果当前 section 有多行（>1）→ 当前组合并结束，该 section 独立处理
  ├─ 如果当前 section 为空（0 行）→ 跳过，当前组合并结束
  └─ 继续下一个 section
```

这样无论微信有多少个原生 single-row section，都会被**自动合并为一组**；遇到多行 section（如"我的企业"列表）时自然断开，各自独立。

### 2.2 完整代码

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
    
    // ─── Step 1: 动态确定当前 section 所属的合并组范围 ───
    //     向前找：从当前 section 往回扫，找到合并组的起始位置
    //     向后找：从当前 section 往后扫，找到合并组的结束位置
    //     合并规则：连续的单行（rowInThisSection == 1）section 归为同一组
    
    NSInteger groupStart = section;   // 组起始 section
    NSInteger groupEnd = section;     // 组结束 section
    
    // 向前延伸：只要前面的 section 也是单行就继续
    for (NSInteger s = section - 1; s >= 0; s--) {
        NSInteger rows = [tableView numberOfRowsInSection:s];
        if (rows == 1) {
            groupStart = s;
        } else {
            break;  // 遇到多行或空 section，停止向前延伸
        }
    }
    
    // 向后延伸：只要后面的 section 也是单行就继续
    for (NSInteger s = section + 1; s < totalSections && s < section + 20; s++) {
        NSInteger rows = [tableView numberOfRowsInSection:s];
        if (rows == 1) {
            groupEnd = s;
        } else {
            break;  // 遇到多行或空 section，停止向后延伸
        }
    }
    
    // ─── Step 2: 在确定的组范围内判定 cornerType ───
    NSInteger cornerType = 0;
    NSInteger borderType = 0;
    
    BOOL isFirstInGroup = (section == groupStart);
    BOOL isLastInGroup = (section == groupEnd);
    BOOL isOnlyOneInGroup = (groupStart == groupEnd);
    
    if (isOnlyOneInGroup) {
        // 组内只有这一个 section → 全圆角（孤立卡片）
        cornerType = 3; borderType = 0;
    } else if (isFirstInGroup && row == 0) {
        // 组的首行的第一个 cell → 顶角
        cornerType = 1; borderType = 1;
    } else if (isLastInGroup && row == rowInThisSection - 1) {
        // 组的末行的最后一个 cell → 底角
        cornerType = 2; borderType = 3;
    } else if (rowInThisSection == 1) {
        // 组中间的单行 section → 无圆角
        cornerType = 0; borderType = 2;
    } else {
        // 多行 section 内部 → 标准首/中/末行
        if (row == 0) {
            cornerType = 1; borderType = 1;
        } else if (row == rowInThisSection - 1) {
            cornerType = 2; borderType = 3;
        } else {
            cornerType = 0; borderType = 2;
        }
    }
    
    // ─── Step 3: 应用圆角 ───
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
    
    // ─── Step 4: 应用边框 ───
    [self wp_applyBorderAndBg:cell
                       radius:(cornerType == 0 ? 0 : radius)
                     position:borderType
                    isFTSHome:isFTSHome];
}
```

---

## 三、方案优势

### 3.1 与第二版的对比

| 对比项 | 第二版（固定 mergeSectionsCount=7） | 第三版（动态连续扫描） |
|:-------|:-----------------------------------|:---------------------|
| **合并范围** | 硬编码前 7 个 | 动态检测连续单行 section |
| **微信版本适配** | ❌ 版本变了要改数字 | ✅ 自动适应任何版本 |
| **中间多行 section** | ❌ 会截断合并组 | ✅ 自然断开，各自独立 |
| **中间空 section** | ⚠️ 跳过但不影响边界 | ✅ 自然断开 |
| **性能开销** | 低（固定循环 7 次） | 低（双向扫描，最多 ~20 次） |
| **代码复杂度** | 中等 | 更简洁（无需数组收集） |

### 3.2 核心设计亮点

| 设计 | 说明 |
|:-----|:------|
| **双向延伸扫描** | 从当前 section 同时向前后扩展，精准定位合并组边界 |
| **`s < section + 20` 上限** | 防止极端情况下无限向后扫描（20 个足够覆盖所有原生 section） |
| **遇到多行即停** | 天然支持"我的企业"等多行 section 作为独立组 |
| **遇到空即停** | 不存在的 section 自动成为组分隔符 |
| **无需预收集数组** | 直接用 `numberOfRowAtIndexPath:` 实时查询，省去 NSMutableArray 开销 |

---

## 四、场景推演

### 4.1 正常通讯录（7 个单行 + 我的企业 + 字母索引）

```
Section 0:  新的朋友(1行)  ┐
Section 1:  仅聊天(1行)    │  ← 连续单行 → 合并为 1 组
Section 2:  群聊(1行)     │     groupStart=0, groupEnd=6
Section 3:  标签(1行)     │
Section 4:  公众号(1行)   │
Section 5:  服务号(1行)   │
Section 6:  企业微信(1行) ┘

Section 7:  我的企业(3行)  ← 多行 → 独立组（标准 per-section）

Section 8+: A/B/C...      ← 各自独立 per-section
```

**结果：**
```
┌─────────────────────┐  ← S0 新的朋友（顶角）
│ 仅聊天的朋友          │  ← S1（无角）
│ 群聊                 │  ← S2（无角）
│ 标签                 │  ← S3（无角）
│ 公众号               │  ← S4（无角）
│ 服务号               │  ← S5（无角）
│ 企业微信联系人         │  ← S6（底角）★ 一整组完成
└─────────────────────┘

  ── 我的企业 ──

┌─────────────────────┐  ← S7 row0（独立组顶角）
│ 企业A               │  ← S7 row1（无角）
│ 企业B               │  ← S7 row2（底角）
└─────────────────────┘
```

### 4.2 某些原生 section 缺失

```
Section 0:  新的朋友(1行)  ┐
Section 1:  (0行 - 不存在)  │ ← 空 section → 断开
Section 2:  群聊(1行)      │ ← 新组开始
Section 3:  标签(1行)      │
...
```

**结果：** "新的朋友"单独成一组（全角），后面从"群聊"开始新的一组。

### 4.3 只有 1 个联系人

```
Section 0:  $a 辉 3(1行)
```

**结果：** `groupStart == groupEnd == 0` → 四个角全圆角 ✅

---

## 五、验证清单

### 5.1 通讯录专项

| # | 场景 | 预期 |
|:-:|:-----|:-----|
| **V1** | 标准 7 个原生 + 我的企业 + 字母组 | 原生 7 个合成 1 组（顶→底），我的企业独立，字母组各自独立 |
| **V2** | 缺少部分原生 section（如没有群聊） | 剩余的连续单行合成 1 组，缺失处自然断开 |
| **V3** | 所有原生 section 都存在（8+ 个） | 全部连续单行合成 1 大组 |
| **V4** | 只有 1 个联系人 | 唯一 Cell 四个角全圆角 |
| **V5** | 我的企业在原生 section 中间（如果有这种情况） | 我的企业的多行 section 把前后截成两组 |

### 5.2 回归验证

| # | 场景 | 预期 |
|:-:|:-----|:-----|
| **R1** | 聊天列表 | 正常 |
| **R2** | 我的页面 | 正常 |
| **R3** | 发现页 | 正常 |
| **R4** | FTSHome | 正常 |

---

## 六、改动清单

| 文件 | 改动 |
|:-----|:-----|
| [ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m) L626-L740 | 替换 `wp_applyCornerForContacts:` 方法体为第三版代码 |

**只需改 1 个方法，方法签名不变，调用方无需修改。**