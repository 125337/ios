# 卡片背景页面新旧 UI 清理改造文档

## 当前项目状态

> 更新日期：基于 2026-06-06 项目代码实测

### ✅ 已完成：背景显示层级合并

`cardBgLightLayer` + `cardBgDarkLayer` → 合并为单个 `cardBgLayer`，已在以下文件中完成：

| 文件 | 状态 |
|------|------|
| `PluginConfig.h` | `cardBgLayer` 单属性 ✅，无旧属性残留 |
| `PluginConfig.m: loadDefaults / save` | 只读写 `CardBgLayer` ✅ |
| `ProfileCardBgHook.m` | 无 `lightLayer`/`darkLayer` 引用 ✅ |
| `SettingCardBackgroundController.m` 新 UI（行 110-115） | 单行"背景显示层级" + `onLayerTap` ✅ |
| `SettingCardBackgroundController.m` 旧 UI（行 272-274） | 单行"背景显示层级" + `onLayerTap` ✅ |

> 注意：层级合并与旧 UI 清理是两个独立任务。层级合并已100%完成（新旧 UI 都已是 `cardBgLayer` 单属性）。旧 UI 清理是指删掉整个旧 UI section，与层级无关。

### ❌ 未完成：旧 UI 清理

旧 UI"卡片背景设置"section 仍然存在，以下遗留项待处理：

| 遗留项 | 位置 |
|--------|------|
| 旧 UI 完整 section | `SettingCardBackgroundController.m:221-299` |
| `cardBgEnabled` 属性 | `PluginConfig.h:188` |
| `cardBgEnabled` loadDefaults | `PluginConfig.m:483` |
| `cardBgEnabled` save | `PluginConfig.m:719-720`（注释 + setBool） |
| `_hooked_heightForHeader` 守卫 | `ProfileCardBgHook.m:16` ← 仍用 `cardBgEnabled` |

---

## 一、改动清单

### 1.1 SettingCardBackgroundController.m — 删除旧 UI

**删除范围**：第 221-299 行（从 `// ★ 旧 UI：卡片背景设置（暂留）` 到 `y = [self finishGroup:group atY:y height:cy];`）

具体删除内容：

| 行号 | 内容 |
|------|------|
| 221-223 | 旧 UI section header 注释 |
| 224 | `addSectionHeader:@"卡片背景设置"` |
| 226-298 | 旧 UI `addTableGroup` + master switch (`cardBgEnabled`) + 全部子项（高度、间距、背景图、填充、对齐方式、层级、Y偏移、X偏移） |
| 299 | `finishGroup` |

> ⚠️ 行 301-303（`contentView.frame` / `scrollView.contentSize` / `}`）**不属于旧 UI section，保留勿删**。

**删除后页面结构**：
- 页面只显示"资料卡片美化"一个 section
- 旧 UI 所有功能参数在新 UI 中均有对应入口（见下方对照表）

### 1.2 PluginConfig.h — 删除旧属性

**删除**第 188 行：

```objc
// 改前：
// 卡片背景（旧 UI）
@property (nonatomic, assign) BOOL cardBgEnabled;  // ← 删除

// 改后：直接删除这整行
```

### 1.3 PluginConfig.m — 删除读写逻辑

**loadDefaults**（第 483 行）：删除

```objc
// 改前：
// 卡片背景（旧 UI）
_cardBgEnabled = [d boolForKey:[kPluginPrefix stringByAppendingString:@"CardBgEnabled"]];  // ← 删除

// 改后：直接删除
```

**save**（第 719-720 行）：删除注释 + setBool

```objc
// 改前：
// 卡片背景（旧 UI）
[d setBool:_cardBgEnabled forKey:[kPluginPrefix stringByAppendingString:@"CardBgEnabled"]];  // ← 删除

// 改后：直接删除这两行
```

### 1.4 ProfileCardBgHook.m — 修改守卫条件

`_hooked_heightForHeader` 函数**仍然需要通过新 UI 的总开关控制** tableView section header 高度间距。

修改第 16 行：

```objc
// 改前：
if (!config.cardBgEnabled) return result;

// 改后：
if (!config.cardBgBeautifyEnabled) return result;
```

### ⚠️ 注意事项：无需删除 action 方法

经代码实测，**不存在**独立的 `onLightAlignmentTap`、`onDarkAlignmentTap`、`onLightOffsetYTap`、`onDarkOffsetYTap`、`onLightOffsetXTap`、`onDarkOffsetXTap`、`onLightImageTap`、`onDarkImageTap` 方法。

新旧 UI 共用以下 action 方法，删除旧 UI section **不需要删除也不应删除**这些方法：

| 方法 | 用途 | 新 UI 引用行 |
|------|------|-------------|
| `onImageTap` | 背景图选择 | 行 80 |
| `onFillModeTap` | 背景填充模式选择 | 行 91 |
| `onAlignmentTap` | 对齐方式选择 | 行 102 |
| `onLayerTap` | 背景显示层级选择 | 行 114 |

---

## 二、参数对照（删除旧 UI 后）

删除旧 UI 后，每个参数在新 UI 的对应入口：

| 参数 | 旧 UI 位置 | 新 UI 位置 | 状态 |
|------|-----------|-----------|------|
| 总开关 | `cardBgEnabled`（信息卡片背景） | `cardBgBeautifyEnabled`（资料卡片美化） | **已迁移** |
| 信息卡片高度 | 旧 UI → 输入框 | 新 UI → 素材手风琴 → 输入框 | **已存在** |
| 列表向下间距 | 旧 UI → 输入框 | 新 UI → 素材手风琴 → 输入框 | **已存在** |
| 背景图 | 旧 UI → 导航（统一） | 新 UI → 素材手风琴 → 导航（统一） | **已存在** |
| 背景填充模式 | 旧 UI → 导航 | 新 UI → 素材手风琴 → 导航 | **已存在** |
| 对齐方式 | 旧 UI → 导航（统一） | 新 UI → 素材手风琴 → 导航（统一） | **已存在** ✅ |
| 背景显示层级 | 旧 UI → 导航 | 新 UI → 素材手风琴 → 导航 | **已存在** ✅ |
| 背景Y轴偏移 | 旧 UI → 输入框 | 新 UI → 素材手风琴 → 输入框 | **已存在** ✅ |
| 背景X轴偏移 | 旧 UI → 输入框 | 新 UI → 素材手风琴 → 输入框 | **已存在** ✅ |

> 新旧 UI 参数**完全对应**，新 UI 将原来浅/深分离的参数统一为单入口，功能无缺失。

---

## 三、Hook 代码影响分析

| Hook 函数 | 旧依赖 | 改后依赖 | 影响 |
|-----------|--------|---------|------|
| `handleButtonLayout:` | `cardBgBeautifyEnabled` | 不变 | **无影响** |
| `applyProfileCardCorner:` | `cardBgCornerEnabled` | 不变 | **无影响** |
| `_hooked_heightForHeader` | `cardBgEnabled` | → `cardBgBeautifyEnabled` | **需修改**（步骤 1.4） |
| `initCellHeightHook` | 无 | 不变 | **无影响** |

---

## 四、不做旧数据兼容

删除旧属性后，**不添加**任何迁移代码：

```objc
// ❌ 不要写这样的代码：
if ([d objectForKey:@"Mio_CardBgEnabled"] && ![d objectForKey:@"Mio_CardBgBeautifyEnabled"]) {
    _cardBgBeautifyEnabled = [d boolForKey:@"Mio_CardBgEnabled"]; // 不迁移
}
```

旧数据 `Mio_CardBgEnabled` 会一直残留在 NSUserDefaults 中，但永远不会被读取（属性已删除）。下次用户 `resetAllConfig` 或手动删除 App 数据时会自然清除。

---

## 五、执行步骤

| 步骤 | 文件 | 操作 | 精确行号 |
|------|------|------|---------|
| 1 | SettingCardBackgroundController.m | 删除旧 UI section（注释 + header + group + masterSwitch + subBuilder + finishGroup） | 221-299 |
| 2 | PluginConfig.h | 删除 `@property cardBgEnabled` | 188 |
| 3 | PluginConfig.m | 删除 loadDefaults 中读取 | 483 |
| 4 | PluginConfig.m | 删除 save 中写入（注释 + setBool 共两行） | 719-720 |
| 5 | ProfileCardBgHook.m | `cardBgEnabled` → `cardBgBeautifyEnabled` | 16 |
| 6 | 验证编译 | `make package` 无报错 | - |

> **注意**：不需要删除任何 action 方法（`onImageTap`、`onFillModeTap`、`onAlignmentTap`、`onLayerTap` 均为新旧 UI 共用）。

---

## 六、清理后的页面结构

```
卡片背景设置页面
└─ 资料卡片美化（总开关: cardBgBeautifyEnabled）
    ├─ 使用背景素材（子手风琴: cardBgMaterialEnabled）
    │   ├─ 信息卡片高度
    │   ├─ 列表向下间距
    │   ├─ 背景图
    │   ├─ 背景填充模式
    │   ├─ 对齐方式
    │   ├─ 背景Y轴偏移
    │   └─ 背景X轴偏移
    ├─ 背景显示层级（导航行）
    ├─ 隐藏信息卡片（平铺开关）
    └─ 开启资料圆角（子手风琴）
        ├─ 使用全局配置（平铺开关）
        └─ 圆角大小 / 边距大小 / 背景颜色 / 描边大小
```

干净、无冗余、无兼容负担。