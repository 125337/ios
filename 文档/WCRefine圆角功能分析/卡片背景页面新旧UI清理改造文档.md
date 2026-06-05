# 卡片背景页面新旧 UI 清理改造文档

## 现状

卡片背景设置页面（SettingCardBackgroundController）存在两套 UI：

```
SettingCardBackgroundController.m
├─ 新 UI:  资料卡片美化（lines 30-193） ✅ 保留
│   ├─ 总开关: cardBgBeautifyEnabled
│   ├─ 子开关: cardBgMaterialEnabled（空壳）
│   ├─ 子开关: cardBgHidden
│   └─ 子开关: cardBgCornerEnabled → 圆角参数
│
└─ 旧 UI:  卡片背景设置（lines 195-307） ❌ 删除
    ├─ 总开关: cardBgEnabled
    ├─ 高度 / 间距 / 背景图 / 填充 / 对齐 / 层级 / 偏移
    └─ 与新 UI 共用同一套 config 属性
```

旧 UI 尽管有"信息卡片背景"开关（`cardBgEnabled`），但实际上该开关**只控制** tableView section header 高度的 Hook，而 `handleButtonLayout:` 的入口已经完全被新 UI 的 `cardBgBeautifyEnabled` 接管。

---

## 一、改动清单

### 1.1 SettingCardBackgroundController.m — 删除旧 UI

**删除范围**：第 195-307 行（从 `// ═══════════ 旧 UI ═══════════` 到 `y = [self finishGroup:group atY:y height:cy];`）

具体删除内容：

| 行号 | 内容 |
|------|------|
| 195-197 | 旧 UI section header「卡片背景设置」 |
| 200-305 | 旧 UI master switch + subBuilder（信息卡片背景、高度、间距、背景图、填充、对齐、层级、偏移） |
| 307 | finishGroup |

**删除后效果**：
- 页面只显示"资料卡片美化"一个 section
- 旧 UI 的所有子项（高度、间距、背景图等）**仍然存在**于新 UI 的"使用背景素材"手风琴下
- 用户通过新 UI 即可操控所有参数

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

**save**（第 729 行）：删除

```objc
// 改前：
// 卡片背景（旧 UI）
[d setBool:_cardBgEnabled forKey:[kPluginPrefix stringByAppendingString:@"CardBgEnabled"]];  // ← 删除

// 改后：直接删除
```

### 1.4 ProfileCardBgHook.m — 修改守卫条件

`_hooked_heightForHeader` 函数**仍然需要通过新 UI 的总开关控制**。

修改第 16 行：

```objc
// 改前：
if (!config.cardBgEnabled) return result;

// 改后：
if (!config.cardBgBeautifyEnabled) return result;
```

这样 tableView section header 高度的间距机制仍然生效，但控制权改为新 UI 的"资料卡片美化"总开关。

---

## 二、新旧 UI 参数对照

下面的对照表说明：删除旧 UI 后，每个参数在新 UI 的哪个位置调节。

| 参数 | 旧 UI 位置 | 新 UI 位置 | 状态 |
|------|-----------|-----------|------|
| 信息卡片背景总开关 | `cardBgEnabled` | `cardBgBeautifyEnabled`（资料卡片美化） | **迁移** |
| 信息卡片高度 | 旧手风琴内 → 输入框 | 资料美化 → 素材手风琴 → 输入框 | **已存在** |
| 列表向下间距 | 旧手风琴内 → 输入框 | 资料美化 → 素材手风琴 → 输入框 | **已存在** |
| 浅色背景图 | 旧手风琴内 → 导航 | 资料美化 → 素材手风琴 → 导航 | **已存在** |
| 深色背景图 | 旧手风琴内 → 导航 | 资料美化 → 素材手风琴 → 导航 | **已存在** |
| 背景填充模式 | 旧手风琴内 → 导航 | 资料美化 → 素材手风琴 → 导航 | **已存在** |
| 浅色模式对齐方式 | 旧手风琴内 → 导航 | **新 UI 缺失** | ⚠️ 见后续 |
| 深色模式对齐方式 | 旧手风琴内 → 导航 | 资料美化 → 素材手风琴 → 导航 | **已存在** |
| 浅色/深色背景显示层级 | 旧手风琴内 → 导航 | **新 UI 缺失** | ⚠️ 见后续 |
| 浅色/深色 X/Y 偏移 | 旧手风琴内 → 输入框 | **新 UI 缺失** | ⚠️ 见后续 |

> ⚠️ **新 UI 缺失的参数**：浅色对齐方式、层级（浅/深）、偏移（X/Y 浅/深）。  
> 这些参数在 `handleButtonLayout:` 中**仍然被实际使用**，如果新 UI 不提供入口，用户将无法调节它们，但默认值（align=0, layer=0, offset=0）的表现为"底部对齐/底层显示/无偏移"，对大多数用户可接受。  
> **建议**：后续在"使用背景素材"手风琴中补充这些缺失的参数入口。

---

## 三、Hook 代码影响分析

| Hook 函数 | 旧依赖 | 改后依赖 | 影响 |
|-----------|--------|---------|------|
| `handleButtonLayout:` | `cardBgBeautifyEnabled` | 不变 | **无影响**，本来就是新 UI 总开关 |
| `applyProfileCardCorner:` | `cardBgCornerEnabled` | 不变 | **无影响**，独立开关 |
| `_hooked_heightForHeader` | `cardBgEnabled` | → `cardBgBeautifyEnabled` | **需修改守卫条件** |
| `initCellHeightHook` | 无 | 不变 | **无影响**，只注册 Hook |

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

| 步骤 | 文件 | 操作 |
|------|------|------|
| 1 | [SettingCardBackgroundController.m](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingCardBackgroundController.m) | 删除第 195-307 行（旧 UI 完整 section） |
| 2 | [PluginConfig.h](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.h) | 删除第 188 行 `@property (nonatomic, assign) BOOL cardBgEnabled;` |
| 3 | [PluginConfig.m](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m) | 删除第 483 行（loadDefaults 中读取 cardBgEnabled） |
| 4 | [PluginConfig.m](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m) | 删除第 729 行（save 中写入 cardBgEnabled） |
| 5 | [ProfileCardBgHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ProfileCardBg/ProfileCardBgHook.m) | 第 16 行：`cardBgEnabled` → `cardBgBeautifyEnabled` |
| 6 | 验证编译 | `make package` 无报错 |

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
    ├─ 隐藏信息卡片（平铺开关）
    └─ 开启资料圆角（子手风琴）
        ├─ 使用全局配置（平铺开关）
        ├─ 圆角大小 / 边距大小 / 背景颜色 / 描边大小
        └─ ...（非全局独有参数）
```

干净、无冗余、无兼容负担。