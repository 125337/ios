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
| `SettingCardBackgroundController.m` 新 UI（行 116-127） | 单行"背景显示层级" + `onLayerTap` ✅ |
| `SettingCardBackgroundController.m` 旧 UI（行 268-270） | 单行"背景显示层级" + `onLayerTap` ✅ |

> 注意：层级合并与旧 UI 清理是两个独立任务。层级合并已100%完成（新旧 UI 都已是 `cardBgLayer` 单属性）。旧 UI 清理是指删掉整个旧 UI section，与层级无关。

### ❌ 未完成：旧 UI 清理

旧 UI"卡片背景设置"section 仍然存在，以下遗留项待处理：

| 遗留项 | 位置 |
|--------|------|
| 旧 UI 完整 section | `SettingCardBackgroundController.m:209-317` |
| `cardBgEnabled` 属性 | `PluginConfig.h:188` |
| `cardBgEnabled` loadDefaults | `PluginConfig.m:483` |
| `cardBgEnabled` save | `PluginConfig.m:728` |
| `_hooked_heightForHeader` 守卫 | `ProfileCardBgHook.m:16` ← 仍用 `cardBgEnabled` |

---

## 一、改动清单

### 1.1 SettingCardBackgroundController.m — 删除旧 UI

**删除范围**：第 209-317 行（从 `// ★ 旧 UI：卡片背景设置（暂留）` 到 `y = [self finishGroup:group atY:y height:cy];`）

具体删除内容：

| 行号 | 内容 |
|------|------|
| 209-211 | 旧 UI section header 注释 + 文字「卡片背景设置」 |
| 212-315 | 旧 UI master switch (`cardBgEnabled`) + 全部子项（高度、间距、背景图、填充、对齐方式x2、层级、偏移x4） |
| 317 | `finishGroup` |

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

**save**（第 728 行）：删除

```objc
// 改前：
// 卡片背景（旧 UI）
[d setBool:_cardBgEnabled forKey:[kPluginPrefix stringByAppendingString:@"CardBgEnabled"]];  // ← 删除

// 改后：直接删除
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

### 1.5 SettingCardBackgroundController.m — 删除旧 UI 专有 action 方法

旧 UI 删除后，以下 action 方法不再被任何 UI 引用，一并清理：

| 方法 | 用途 | 是否被新 UI 使用 |
|------|------|----------------|
| `onLightAlignmentTap` | 浅色模式对齐方式选择 | ❌ 仅旧 UI |
| `onLightOffsetYTap` / `onDarkOffsetYTap` | Y轴偏移输入 | ❌ 仅旧 UI |
| `onLightOffsetXTap` / `onDarkOffsetXTap` | X轴偏移输入 | ❌ 仅旧 UI |

> 保留的方法：`onLightImageTap`、`onDarkImageTap`、`onFillModeTap`、`onDarkAlignmentTap`、`onLayerTap` — 这些被新 UI 继续使用。

---

## 二、参数对照（删除旧 UI 后）

删除旧 UI 后，每个参数在新 UI 的对应入口：

| 参数 | 旧 UI 位置 | 新 UI 位置 | 状态 |
|------|-----------|-----------|------|
| 总开关 | `cardBgEnabled`（信息卡片背景） | `cardBgBeautifyEnabled`（资料卡片美化） | **已迁移** |
| 信息卡片高度 | 旧手风琴 → 输入框 | 资料美化 → 素材手风琴 → 输入框 | **已存在** |
| 列表向下间距 | 旧手风琴 → 输入框 | 资料美化 → 素材手风琴 → 输入框 | **已存在** |
| 浅色背景图 | 旧手风琴 → 导航 | 资料美化 → 素材手风琴 → 导航 | **已存在** |
| 深色背景图 | 旧手风琴 → 导航 | 资料美化 → 素材手风琴 → 导航 | **已存在** |
| 背景填充模式 | 旧手风琴 → 导航 | 资料美化 → 素材手风琴 → 导航 | **已存在** |
| 浅色模式对齐方式 | 旧手风琴 → 导航 | **新 UI 缺失** | ⚠️ |
| 深色模式对齐方式 | 旧手风琴 → 导航 | 资料美化 → 素材手风琴 → 导航 | **已存在** |
| 背景显示层级 | 旧手风琴 → 导航 | 资料美化 → 平铺行（素材手风琴外） | **已存在** ✅ |
| X/Y 偏移（浅/深） | 旧手风琴 → 4行输入框 | **新 UI 缺失** | ⚠️ |

> ⚠️ **新 UI 缺失的参数**：浅色对齐方式、X/Y 偏移（浅/深共4个）。  
> 这些参数在 `handleButtonLayout:` 中**仍然被实际使用**，如果新 UI 不提供入口则用户无法调节。默认值（align=0, offset=0）表现为"底部对齐/无偏移"，对大多数用户可接受。  
> 建议后续在"使用背景素材"手风琴中补充这些缺失的参数入口。

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
| 1 | SettingCardBackgroundController.m | 删除旧 UI section（header + masterSwitch + subBuilder + finishGroup） | 209-317 |
| 2 | SettingCardBackgroundController.m | 删除旧 UI 专有 action 方法 | `onLightAlignmentTap` + 4个 offset 方法 |
| 3 | PluginConfig.h | 删除 `@property cardBgEnabled` | 188 |
| 4 | PluginConfig.m | 删除 loadDefaults 中读取 | 483 |
| 5 | PluginConfig.m | 删除 save 中写入 | 728 |
| 6 | ProfileCardBgHook.m | `cardBgEnabled` → `cardBgBeautifyEnabled` | 16 |
| 7 | 验证编译 | `make package` 无报错 | - |

---

## 六、清理后的页面结构

```
卡片背景设置页面
└─ 资料卡片美化（总开关: cardBgBeautifyEnabled）
    ├─ 使用背景素材（子手风琴: cardBgMaterialEnabled → 空壳）
    │   ├─ 信息卡片高度
    │   ├─ 列表向下间距
    │   ├─ 浅色背景图
    │   ├─ 深色背景图
    │   ├─ 背景填充模式
    │   └─ 深色模式对齐方式
    ├─ 背景显示层级（平铺行）
    ├─ 隐藏信息卡片（平铺开关）
    └─ 开启资料圆角（子手风琴）
        ├─ 使用全局配置（平铺开关）
        └─ 圆角大小 / 边距大小 / 背景颜色 / 描边大小
```

干净、无冗余、无兼容负担。