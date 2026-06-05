# 搜索框圆角与 Cell 圆角合并改造方案

> **日期**: 2026-06-05
> **状态**: 待评审

---

## 1. 背景

### 1.1 问题描述

当前"列表圆角设置"中，**Cell圆角半径**（`listCellCornerRadius`）与**搜索框圆角半径**（`listSearchBoxCornerRadius`）是两个独立的数值输入配置项。实际上：

- 两者默认值相同（18px）
- 两者取值范围相同（5-30px）
- 两者语义相同——均表示"圆角半径"
- 资料卡圆角已经复用了 `listCellCornerRadius`

**搜索框圆角开关**（`listSearchCornerRadius`）需要保留，因为搜索框不属于普通 Cell，需要独立控制才能生效。只是半径值合并到同一个配置项。

### 1.2 当前现状

| 配置项 | 类型 | 默认值 | UI 位置 | 处理方式 |
|--------|------|--------|---------|---------|
| `listCornerRadiusEnabled` | BOOL 开关 | OFF | 圆角开关（主开关） | **保留** |
| `listSearchCornerRadius` | BOOL 开关 | OFF | 主开关下：搜索框圆角 | **保留**（独立控制） |
| `listCellCornerRadius` | 数值输入 | 18 | 主开关下：Cell圆角半径 | **保留**（统一使用） |
| `listSearchBoxCornerRadius` | 数值输入 | 18 | 主开关下：搜索框圆角半径 | **删除**（合并到 Cell 半径） |

### 1.3 当前使用方

| 使用位置 | 当前读取的配置 |
|----------|---------------|
| Cell 圆角（`replaced_MMTableViewCell_layoutSubviews`） | `listCellCornerRadius` |
| 资料卡圆角（`replaced_MMUIButton_layoutSubviews`） | `listCellCornerRadius`（已统一） |
| 搜索框圆角（`replaced_WCSearchBar_layoutSubviews`） | `listSearchBoxCornerRadius` + `listSearchCornerRadius` |

---

## 2. 改造目标

- **合并** 搜索框圆角半径的数值 → 复用 `listCellCornerRadius`
- **保留** 搜索框圆角开关（`listSearchCornerRadius`），保持独立控制能力
- **删除** 冗余的 `listSearchBoxCornerRadius` 属性及 UI
- **精简** 设置页面 UI，去掉多余的半径输入行

---

## 3. 改造方案

### 3.1 核心变更

```
Before:                        After:
┌─ 列表圆角设置 ─────────────┐  ┌─ 列表圆角设置 ─────────────┐
│ ☰ 圆角开关 [主开关]         │  │ ☰ 圆角开关 [主开关]         │
│ │                           │  │ │                           │
│ │ ○ 搜索框圆角 [开关]  ← 保 │  │ │ ○ 搜索框圆角 [开关]  ← 保留
│ │ ○ 隐藏右侧二维码 [开关]   │  │ │ ○ 隐藏右侧二维码 [开关]    │
│ │ ○ Cell边框开关 [开关]     │  │ │ ○ Cell边框开关 [开关]      │
│ │ ○ 媒体视图圆角 [开关]     │  │ │ ○ 媒体视图圆角 [开关]      │
│ │ ○ 禁用标签宽度调整 [开关] │  │ │ ○ 禁用标签宽度调整 [开关]  │
│ │ ──────────────────────── │  │ │ ──────────────────────── │
│ │ Cell圆角半径 [输入]       │  │ │ Cell圆角半径 [输入]  ← 共用
│ │ Cell左右边距 [输入]       │  │ │ Cell左右边距 [输入]       │
│ │ 搜索框圆角半径 [输入]←删  │  │ │ (其余配置项不变)...        │
│ │ 置顶会话距顶栏间距 [输入] │  │ └─────────────────────────────┘
│ │ ...                      │
└─────────────────────────────┘
```

### 3.2 涉及文件

| 文件 | 改动类型 | 说明 |
|------|---------|------|
| `MioPlugin/Config/PluginConfig.h` | **删除**属性 | 仅删除 `listSearchBoxCornerRadius`，保留 `listSearchCornerRadius` |
| `MioPlugin/Config/PluginConfig.m` | **删除**读写代码 | 仅删除 `listSearchBoxCornerRadius` 的读取和保存 |
| `MioPlugin/Settings/Controllers/SettingListCornerRadiusController.m` | **删除**UI行 | 仅删除"搜索框圆角半径"输入行，保留"搜索框圆角"开关 |
| `MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m` | **修改**读取逻辑 | 搜索框 Hook 改用 `listCellCornerRadius` |

---

## 4. 详细改动步骤

### Step 1: `PluginConfig.h` — 删除属性声明

```objc
// ❌ 仅删除这一行
@property (nonatomic, assign) NSInteger listSearchBoxCornerRadius;

// ✅ 保留不动
@property (nonatomic, assign) BOOL listSearchCornerRadius;
```

### Step 2: `PluginConfig.m` — 删除读取代码

在 `loadConfig` 方法中删除：

```objc
// ❌ 删除 L456-L457
NSInteger scr = [d integerForKey:[kPluginPrefix stringByAppendingString:@"ListSearchBoxCornerRadius"]];
_listSearchBoxCornerRadius = (scr > 0) ? scr : 18;

// ✅ 保留不动
_listSearchCornerRadius = [d boolForKey:[kPluginPrefix stringByAppendingString:@"ListSearchCornerRadius"]];
```

### Step 3: `PluginConfig.m` — 删除保存代码

在 `saveConfig` 方法中删除：

```objc
// ❌ 删除 L700
[d setInteger:_listSearchBoxCornerRadius forKey:[kPluginPrefix stringByAppendingString:@"ListSearchBoxCornerRadius"]];

// ✅ 保留不动
[d setBool:_listSearchCornerRadius forKey:[kPluginPrefix stringByAppendingString:@"ListSearchCornerRadius"]];
```

### Step 4: `SettingListCornerRadiusController.m` — 删除 UI 行

只删除「搜索框圆角半径」输入行（L134-L144），**保留**「搜索框圆角」开关行（L75-L80）：

```objc
// ❌ 仅删除这段：搜索框圆角半径 输入行
NSString *sbcrStr = cfg.listSearchBoxCornerRadius > 0
    ? [NSString stringWithFormat:@"%ld", (long)cfg.listSearchBoxCornerRadius] : nil;
*ecy = [self addInputRowInGroup:expand
                          title:@"搜索框圆角半径"
                            key:@"listSearchBoxCornerRadius"
                          value:sbcrStr
                           hint:@"18"
                     alertTitle:@"设置搜索框圆角半径"
                   alertMessage:@"请输入圆角半径(5-30像素)"
                             cy:*ecy width:w];
*ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

// ✅ 保留不动：搜索框圆角 开关行
*ecy = [self addSubSwitchRowInGroup:expand
                              title:@"搜索框圆角"
                                key:@"listSearchCornerRadius"
                               isOn:cfg.listSearchCornerRadius
                                 cy:*ecy width:w];
```

`switchChanged` 方法中的 `listSearchCornerRadius` 引用也**保留不动**。

### Step 5: `ListCornerRadiusHook.m` — 修改搜索框 Hook 读取逻辑

**改动前（L147-L151）：**

```objc
PluginConfig *config = [PluginConfig shared];
if (!config.listCornerRadiusEnabled || !config.listSearchCornerRadius) return;

NSInteger radius = config.listSearchBoxCornerRadius;
if (radius <= 0) radius = 18;
```

**改动后：**

```objc
PluginConfig *config = [PluginConfig shared];
if (!config.listCornerRadiusEnabled || !config.listSearchCornerRadius) return;

NSInteger radius = (NSInteger)config.listCellCornerRadius;  // ★ 复用 Cell 的圆角半径
if (radius <= 0) radius = 18;
```

---

## 5. 影响分析

### 5.1 功能影响

| 场景 | 改动前 | 改动后 | 说明 |
|------|--------|--------|------|
| 主开关 ON + 搜索框开关 ON + 半径已设 | 各自独立半径 | 搜索框复用 Cell 半径 | 半径值同步 |
| 主开关 ON + 搜索框开关 ON + 修改 Cell 半径 | 搜索框半径不变 | 搜索框同步变化 | 行为变化 |
| 主开关 ON + 搜索框开关 OFF | 搜索框无圆角 | 搜索框无圆角 | **不变** ✅ |
| 主开关 OFF | 全部无圆角 | 全部无圆角 | **不变** ✅ |

### 5.2 用户体验变化

- **设置页面更简洁**：减少 1 行输入框
- **减少配置困惑**：用户只需在"Cell圆角半径"一处设置，搜索框、Cell、资料卡三者圆角半径统一
- **控制力不变**：仍可通过"搜索框圆角"开关独立控制搜索框是否启用圆角

### 5.3 数据兼容

无需兼容旧数据，旧配置中的 `ListSearchBoxCornerRadius` 键值在下次保存时不再写入，自然过期。**不会导致 crash 或异常**。

---

## 6. 改造前后对比

### 6.1 设置页 UI 对比

```
改造前（展开状态）：                改造后（展开状态）：
┌─────────────────────────────┐   ┌─────────────────────────────┐
│ 列表圆角设置                  │   │ 列表圆角设置                  │
├─────────────────────────────┤   ├─────────────────────────────┤
│ ☰ 圆角开关           [ON]   │   │ ☰ 圆角开关           [ON]   │
│ │                           │   │ │                           │
│ │ ○ 搜索框圆角       [ON]  │   │ │ ○ 搜索框圆角       [ON]  │
│ │ ──────────────────────── │   │ │ ──────────────────────── │
│ │ ○ 隐藏右侧二维码    [OFF] │   │ │ ○ 隐藏右侧二维码    [OFF] │
│ │ ○ Cell边框开关     [OFF] │   │ │ ○ Cell边框开关     [OFF] │
│ │ ○ 媒体视图圆角     [OFF] │   │ │ ○ 媒体视图圆角     [OFF] │
│ │ ○ 禁用标签宽度调整  [OFF] │   │ │ ○ 禁用标签宽度调整  [OFF] │
│ │ ──────────────────────── │   │ │ ──────────────────────── │
│ │ Cell圆角半径       [18]  │   │ │ Cell圆角半径       [18]  │
│ │ Cell左右边距       [9]   │   │ │ Cell左右边距       [9]   │
│ │ 搜索框圆角半径     [18]  │ ← 删│ │ (其余配置项不变)...       │
│ │ 置顶会话距顶栏间距  [15]  │   │ └─────────────────────────────┘
│ │ ...                      │
└─────────────────────────────┘
```

### 6.2 代码改动量统计

| 文件 | 删除行 | 修改行 | 新增行 |
|------|--------|--------|--------|
| `PluginConfig.h` | 1 | 0 | 0 |
| `PluginConfig.m` | 2 | 0 | 0 |
| `SettingListCornerRadiusController.m` | ~9 | 0 | 0 |
| `ListCornerRadiusHook.m` | 0 | 1 | 0 |
| **合计** | **~12** | **1** | **0** |

> 纯删减 + 一行改动，共计改动约 13 行。

---

## 7. 回滚方案

通过 git revert 即可干净回滚，涉及文件：

1. `PluginConfig.h` — 恢复 `listSearchBoxCornerRadius` 属性声明
2. `PluginConfig.m` — 恢复读取和保存代码
3. `SettingListCornerRadiusController.m` — 恢复被删除的 UI 行
4. `ListCornerRadiusHook.m` — 恢复原读取逻辑

---

## 8. 验收清单

- [ ] 编译通过，无 warning
- [ ] 开启"圆角开关"+"搜索框圆角"后，搜索框与 Cell 均有圆角效果
- [ ] 关闭"搜索框圆角"后，搜索框无圆角，Cell 仍保持圆角
- [ ] 修改"Cell圆角半径"后，搜索框与 Cell 的圆角同步变化
- [ ] 设置页面不再显示"搜索框圆角半径"输入框
- [ ] "搜索框圆角"开关行仍然显示并可正常控制
- [ ] "资料卡圆角"半径也同步使用同一个值
- [ ] 旧的已保存配置不会导致异常行为