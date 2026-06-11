# P1-4: ConfigDescriptor 工厂方法合并改造方案

> **当前状态**: 未修复 | **优先级**: P1（建议修复）
>
> **关联文件**:
> - `Core/ConfigDescriptor.h` — 5 个工厂方法声明
> - `Core/ConfigDescriptor.m` — 5 个工厂方法实现
> - 7 个 `*Config.m` 文件 — 所有调用方（共 ~67 个调用点）
>
> **总改动文件数**: 9 个（1 个头文件 + 1 个实现 + 7 个调用方）

---

## 1. 问题分析

### 1.1 当前代码

`ConfigDescriptor` 目前有 5 个工厂方法，方法体**几乎完全一样**，唯一的区别是 `type` 属性值的赋值：

```objc
// ConfigDescriptor.m — 5 个方法，结构 100% 相同
+ (instancetype)boolItem:(NSString *)key default:(NSNumber *)defaultValue {
    ConfigDescriptor *desc = [[ConfigDescriptor alloc] init];
    desc.key = key;
    desc.type = ConfigValueTypeBool;       // ← 唯一不同
    desc.defaultValue = defaultValue;
    return desc;
}

+ (instancetype)integerItem:(NSString *)key default:(NSNumber *)defaultValue {
    ConfigDescriptor *desc = [[ConfigDescriptor alloc] init];
    desc.key = key;
    desc.type = ConfigValueTypeInteger;    // ← 唯一不同
    desc.defaultValue = defaultValue;
    return desc;
}

// floatItem / stringItem / arrayItem — 同上，仅 type 不同
```

```objc
// ConfigDescriptor.h — 5 行声明，实际只需 1 行
+ (instancetype)boolItem:(NSString *)key default:(NSNumber *)defaultValue;
+ (instancetype)integerItem:(NSString *)key default:(NSNumber *)defaultValue;
+ (instancetype)floatItem:(NSString *)key default:(NSNumber *)defaultValue;
+ (instancetype)stringItem:(NSString *)key default:(NSString *)defaultValue;
+ (instancetype)arrayItem:(NSString *)key default:(NSArray *)defaultValue;
```

### 1.2 重复量化

| 文件 | `boolItem` | `integerItem` | `floatItem` | `stringItem` | `arrayItem` | 合计 |
|------|:----------:|:-------------:|:-----------:|:------------:|:-----------:|:----:|
| `ConfigDescriptor.m` 工厂方法 | 1 | 1 | 1 | 1 | 1 | 5 |
| `ConfigDescriptor.h` 声明 | 1 | 1 | 1 | 1 | 1 | 5 |
| `ListCornerRadiusConfig.m` | 6 | - | 4 | 4 | - | 14 |
| `ClearUnreadConfig.m` | 1 | - | - | - | - | 1 |
| `RevokeConfig.m` | 10 | - | 1 | 7 | - | 18 |
| `RedEnvelopConfig.m` | 7 | 1 | - | 2 | 2 | 12 |
| `CardBgConfig.m` | 7 | 3 | 7 | 5 | - | 22 |
| `PlaceholderTextConfig.m` | 2 | - | 2 | 2 | - | 6 |
| `MessageTimeConfig.m` | 4 | 1 | 5 | 10 | - | 20 |
| **总计** | **38** | **6** | **20** | **31** | **2** | **~97** |

### 1.3 这个重复带来的问题

| 问题 | 说明 |
|------|------|
| **违反 DRY** | 5 个同样的 alloc+init+assign 模式重复 5 次 |
| **增加认知负担** | 新模块接入要记 `boolItem:`/`integerItem:`/`floatItem:`/`stringItem:`/`arrayItem:` 5 个方法名 |
| **难以扩展** | 增加 `ConfigValueTypeDate` 或 `ConfigValueTypeColor` 就需要第 6 个工厂方法 |
| **调用方冗余** | 开发者自己需要确认参数类型与方法名匹配（比如 `integerItem:` 传 `@(0)` 没问题，但参数类型是 `NSNumber *`，编译器不检查） |

---

## 2. 改造方案

### 2.1 设计目标

1. **5 个方法合并为 1 个**，不损失可读性
2. **编译器检查** — 用枚举代替隐式类型匹配，编译时发现问题
3. **易扩展** — 加新类型只需加枚举值，不改工厂方法
4. **调用方改动最小** — 每个调用点只是方法名 + 参数调整，不涉及逻辑变化

### 2.2 API 设计

```objc
// ConfigDescriptor.h — 改造后

typedef NS_ENUM(NSUInteger, ConfigValueType) {
    ConfigValueTypeBool,
    ConfigValueTypeInteger,
    ConfigValueTypeFloat,
    ConfigValueTypeString,
    ConfigValueTypeArray,
};

@interface ConfigDescriptor : NSObject
@property (nonatomic, copy)   NSString       *key;
@property (nonatomic, assign) ConfigValueType type;
@property (nonatomic, strong) id              defaultValue;

/// 统一工厂方法
/// @param key          配置键名
/// @param type         值类型枚举
/// @param defaultValue 默认值
+ (instancetype)itemWithKey:(NSString *)key
                       type:(ConfigValueType)type
                    default:(id)defaultValue;
@end
```

```objc
// ConfigDescriptor.m — 改造后（完整实现）

@implementation ConfigDescriptor

+ (instancetype)itemWithKey:(NSString *)key
                       type:(ConfigValueType)type
                    default:(id)defaultValue {
    ConfigDescriptor *desc = [[ConfigDescriptor alloc] init];
    desc.key = key;
    desc.type = type;
    desc.defaultValue = defaultValue;
    return desc;
}

@end
```

### 2.3 调用方改造示例

```objc
// 改造前
[ConfigDescriptor boolItem:@"globalCornerRadiusEnabled" default:@(NO)]
[ConfigDescriptor floatItem:@"listCellCornerRadius" default:@(18.0)]
[ConfigDescriptor stringItem:@"listCellLightBgColor" default:@"#FFFFFF"]
[ConfigDescriptor integerItem:@"redEnvelopDelay" default:@(0)]
[ConfigDescriptor arrayItem:@"redEnvelopBlackList" default:@[]]

// 改造后 — 保持几乎相同的可读性，但更一致
[ConfigDescriptor itemWithKey:@"globalCornerRadiusEnabled" type:ConfigValueTypeBool default:@(NO)]
[ConfigDescriptor itemWithKey:@"listCellCornerRadius" type:ConfigValueTypeFloat default:@(18.0)]
[ConfigDescriptor itemWithKey:@"listCellLightBgColor" type:ConfigValueTypeString default:@"#FFFFFF"]
[ConfigDescriptor itemWithKey:@"redEnvelopDelay" type:ConfigValueTypeInteger default:@(0)]
[ConfigDescriptor itemWithKey:@"redEnvelopBlackList" type:ConfigValueTypeArray default:@[]]
```

### 2.4 调用方逐文件改动清单

#### 文件 1：`ListCornerRadiusConfig.m` — 14 行

| 行号 | 原代码 | 改为 |
|:----:|--------|------|
| 21 | `boolItem:@"globalCornerRadiusEnabled" default:@(NO)` | `itemWithKey:@"globalCornerRadiusEnabled" type:ConfigValueTypeBool default:@(NO)` |
| 22 | `boolItem:@"globalCornerMyPageEnabled" default:@(NO)` | 同上 (`Bool`) |
| 23 | `boolItem:@"globalCornerContactsPageEnabled" default:@(NO)` | 同上 (`Bool`) |
| 24 | `boolItem:@"globalCornerDiscoverPageEnabled" default:@(NO)` | 同上 (`Bool`) |
| 25 | `boolItem:@"listSearchCornerRadius" default:@(NO)` | 同上 (`Bool`) |
| 26 | `boolItem:@"listCellBorder" default:@(NO)` | 同上 (`Bool`) |
| 27 | `floatItem:@"listCellCornerRadius" default:@(18.0)` | `itemWithKey:... type:ConfigValueTypeFloat default:@(18.0)` |
| 28 | `floatItem:@"listCellMargin" default:@(9.0)` | 同上 (`Float`) |
| 29 | `stringItem:@"listCellLightBgColor" default:@"#FFFFFF"` | `itemWithKey:... type:ConfigValueTypeString default:@"#FFFFFF"` |
| 30 | `stringItem:@"listCellDarkBgColor" default:@"#1C1C1E"` | 同上 (`String`) |
| 31 | `floatItem:@"listCellBorderWidth" default:@(2.0)` | `itemWithKey:... type:ConfigValueTypeFloat default:@(2.0)` |
| 32 | `stringItem:@"listCellBorderColor" default:@"#E5E5E5"` | `itemWithKey:... type:ConfigValueTypeString default:@"#E5E5E5"` |
| 33 | `stringItem:@"listCellBorderColorDarkHex" default:@"#3A3A3C"` | 同上 (`String`) |

> 格式说明：为保持可读性，建议每条拆为多行（如下），而非单行长行。但具体格式风格由开发者决定。

```objc
// 推荐的格式化风格 — 每行一个参数
[ConfigDescriptor itemWithKey:@"globalCornerRadiusEnabled"
                         type:ConfigValueTypeBool
                      default:@(NO)],
```

#### 文件 2：`ClearUnreadConfig.m` — 1 行

| 当前 | 改为 |
|------|------|
| `boolItem:@"clearUnreadEnabled" default:@(NO)` | `itemWithKey:@"clearUnreadEnabled" type:ConfigValueTypeBool default:@(NO)` |

#### 文件 3：`RevokeConfig.m` — 18 行

| 行号 | 当前 | 改为类型 |
|:----:|------|:--------:|
| 35-44（10 个） | `boolItem:...` → `itemWithKey:... type:ConfigValueTypeBool` |
| 47-52（3 个） | `stringItem:...` → `itemWithKey:... type:ConfigValueTypeString` |
| 47-52（4 个） | `stringItem:...`（其他）→ `itemWithKey:... type:ConfigValueTypeString` |
| 55-56（2 个） | `boolItem:` → `Bool`；`stringItem:` → `String` |
| 57 | `floatItem:@"notifySenderCooldown" default:@(0.0)` → `ConfigValueTypeFloat` |

具体逐行映射：

| 行 | 原方法 | 新 type |
|:--:|--------|:-------:|
| 35 | `boolItem:@"preventRecall"` | `ConfigValueTypeBool` |
| 36 | `boolItem:@"debugLogging"` | `ConfigValueTypeBool` |
| 37 | `boolItem:@"hideContent"` | `ConfigValueTypeBool` |
| 38 | `boolItem:@"noTip"` | `ConfigValueTypeBool` |
| 39 | `boolItem:@"bottomPosition"` | `ConfigValueTypeBool` |
| 40 | `boolItem:@"sendInterceptedContent"` | `ConfigValueTypeBool` |
| 41 | `boolItem:@"interceptNotifyEnabled"` | `ConfigValueTypeBool` |
| 42 | `boolItem:@"customNotifyEnabled"` | `ConfigValueTypeBool` |
| 43 | `boolItem:@"hideDiscoverBadge"` | `ConfigValueTypeBool` |
| 44 | `boolItem:@"hideEnterpriseBadge"` | `ConfigValueTypeBool` |
| 47 | `stringItem:@"notifyFormat"` | `ConfigValueTypeString` |
| 48 | `stringItem:@"dateFormat"` | `ConfigValueTypeString` |
| 49 | `stringItem:@"customText"` | `ConfigValueTypeString` |
| 50 | `stringItem:@"interceptNotifyTemplate"` | `ConfigValueTypeString` |
| 51 | `stringItem:@"customNotifyFormat"` | `ConfigValueTypeString` |
| 52 | `stringItem:@"revokeTemplate"` | `ConfigValueTypeString` |
| 55 | `boolItem:@"notifySender"` | `ConfigValueTypeBool` |
| 56 | `stringItem:@"notifySenderTemplate"` | `ConfigValueTypeString` |
| 57 | `floatItem:@"notifySenderCooldown"` | `ConfigValueTypeFloat` |

#### 文件 4：`RedEnvelopConfig.m` — 12 行

| 行 | 原方法 | 新 type |
|:--:|--------|:-------:|
| 21 | `boolItem:@"autoRedEnvelop"` | `ConfigValueTypeBool` |
| 22 | `boolItem:@"redEnvelopCatchMe"` | `ConfigValueTypeBool` |
| 23 | `boolItem:@"personalRedEnvelopEnable"` | `ConfigValueTypeBool` |
| 24 | `integerItem:@"redEnvelopDelay"` | `ConfigValueTypeInteger` |
| 25 | `boolItem:@"redEnvelopeDetail"` | `ConfigValueTypeBool` |
| 26 | `boolItem:@"redEnvelopTextFilterEnabled"` | `ConfigValueTypeBool` |
| 27 | `stringItem:@"redEnvelopTextFilter"` | `ConfigValueTypeString` |
| 28 | `boolItem:@"redEnvelopGroupFilterEnabled"` | `ConfigValueTypeBool` |
| 29 | `arrayItem:@"redEnvelopGroupFilterList"` | `ConfigValueTypeArray` |
| 30 | `boolItem:@"redEnvelopAutoReply"` | `ConfigValueTypeBool` |
| 31 | `boolItem:@"redEnvelopAutoReplyInGroup"` | `ConfigValueTypeBool` |
| 32 | `stringItem:@"redEnvelopAutoReplyStr"` | `ConfigValueTypeString` |
| 33 | `arrayItem:@"redEnvelopBlackList"` | `ConfigValueTypeArray` |

#### 文件 5：`CardBgConfig.m` — 22 行

| 行 | 原方法 | 新 type |
|:--:|--------|:-------:|
| 21 | `boolItem:@"cardBgMaterialEnabled"` | `ConfigValueTypeBool` |
| 22 | `boolItem:@"cardBgCornerEnabled"` | `ConfigValueTypeBool` |
| 23 | `boolItem:@"cardBgCornerUseGlobal"` | `ConfigValueTypeBool` |
| 24 | `floatItem:@"cardBgCornerRadius"` | `ConfigValueTypeFloat` |
| 25 | `floatItem:@"cardBgCornerMargin"` | `ConfigValueTypeFloat` |
| 26 | `stringItem:@"cardBgCornerBgColor"` | `ConfigValueTypeString` |
| 27 | `stringItem:@"cardBgCornerDarkBgColor"` | `ConfigValueTypeString` |
| 28 | `floatItem:@"cardBgStrokeWidth"` | `ConfigValueTypeFloat` |
| 29 | `boolItem:@"cardBgHidden"` | `ConfigValueTypeBool` |
| 30 | `boolItem:@"cardBgHideStateEnabled"` | `ConfigValueTypeBool` |
| 31 | `floatItem:@"cardBgListSpacing"` | `ConfigValueTypeFloat` |
| 32 | `integerItem:@"cardBgFillMode"` | `ConfigValueTypeInteger` |
| 33 | `integerItem:@"cardBgAlignment"` | `ConfigValueTypeInteger` |
| 34 | `integerItem:@"cardBgLayer"` | `ConfigValueTypeInteger` |
| 35 | `floatItem:@"cardBgOffsetY"` | `ConfigValueTypeFloat` |
| 36 | `floatItem:@"cardBgOffsetX"` | `ConfigValueTypeFloat` |
| 39 | `boolItem:@"cardBgBorderEnabled"` | `ConfigValueTypeBool` |
| 40 | `floatItem:@"cardBgBorderWidth"` | `ConfigValueTypeFloat` |
| 41 | `stringItem:@"cardBgBorderColor"` | `ConfigValueTypeString` |
| 42 | `stringItem:@"cardBgBorderColorDarkHex"` | `ConfigValueTypeString` |
| 45 | `boolItem:@"cardBgHideArrow"` | `ConfigValueTypeBool` |

#### 文件 6：`PlaceholderTextConfig.m` — 6 行

| 行 | 原方法 | 新 type |
|:--:|--------|:-------:|
| 21 | `boolItem:@"placeholderTextEnabled"` | `ConfigValueTypeBool` |
| 22 | `boolItem:@"placeholderTextBold"` | `ConfigValueTypeBool` |
| 23 | `stringItem:@"placeholderTextText"` | `ConfigValueTypeString` |
| 24 | `floatItem:@"placeholderTextFontSize"` | `ConfigValueTypeFloat` |
| 25 | `floatItem:@"placeholderTextAlpha"` | `ConfigValueTypeFloat` |
| 26 | `stringItem:@"placeholderTextColorHex"` | `ConfigValueTypeString` |

#### 文件 7：`MessageTimeConfig.m` — 20 行

| 行 | 原方法 | 新 type |
|:--:|--------|:-------:|
| 22 | `boolItem:@"showMessageTime"` | `ConfigValueTypeBool` |
| 23 | `floatItem:@"messageTimeFontSize"` | `ConfigValueTypeFloat` |
| 24 | `boolItem:@"messageTimeBoldFont"` | `ConfigValueTypeBool` |
| 25 | `stringItem:@"messageTimeFormat"` | `ConfigValueTypeString` |
| 26 | `stringItem:@"messageTimeCustomFormat"` | `ConfigValueTypeString` |
| 27 | `integerItem:@"messageTimePosition"` | `ConfigValueTypeInteger` |
| 28 | `floatItem:@"messageTimeOffsetX"` | `ConfigValueTypeFloat` |
| 29 | `floatItem:@"messageTimeOffsetY"` | `ConfigValueTypeFloat` |
| 30 | `stringItem:@"messageTimeTextColor"` | `ConfigValueTypeString` |
| 31 | `floatItem:@"messageTimeBubbleExtWidth"` | `ConfigValueTypeFloat` |
| 32 | `floatItem:@"messageTimeCornerRadius"` | `ConfigValueTypeFloat` |
| 33 | `boolItem:@"disableLabelWidthAdjustment"` | `ConfigValueTypeBool` |
| 36 | `stringItem:@"senderTextColorHex"` | `ConfigValueTypeString` |
| 37 | `stringItem:@"senderTextColorDarkHex"` | `ConfigValueTypeString` |
| 38 | `stringItem:@"senderBackgroundColorHex"` | `ConfigValueTypeString` |
| 39 | `stringItem:@"senderBackgroundColorDarkHex"` | `ConfigValueTypeString` |
| 40 | `stringItem:@"receiverTextColorHex"` | `ConfigValueTypeString` |
| 41 | `stringItem:@"receiverTextColorDarkHex"` | `ConfigValueTypeString` |
| 42 | `stringItem:@"receiverBackgroundColorHex"` | `ConfigValueTypeString` |

---

## 3. 最终状态对比

### 改造前

```objc
// ConfigDescriptor.h: 25 行 + ConfigDescriptor.m: 45 行 = 70 行，5 个方法
```

### 改造后

```objc
// ConfigDescriptor.h: 18 行 + ConfigDescriptor.m: 15 行 = 33 行，1 个方法
// 净减 37 行，去掉了 4 个冗余方法
```

### 调用方可读性对比

**改造前** — 开发者需要从 5 个方法名中挑：

```objc
[ConfigDescriptor boolItem:@"enabled" default:@(NO)]
[ConfigDescriptor integerItem:@"delay" default:@(0)]
[ConfigDescriptor floatItem:@"radius" default:@(18.0)]
[ConfigDescriptor stringItem:@"color" default:@"#FFF"]
[ConfigDescriptor arrayItem:@"list" default:@[]]
```

**改造后** — 统一的方法名 + 枚举，清晰且编译器可查：

```objc
[ConfigDescriptor itemWithKey:@"enabled" type:ConfigValueTypeBool default:@(NO)]
[ConfigDescriptor itemWithKey:@"delay" type:ConfigValueTypeInteger default:@(0)]
[ConfigDescriptor itemWithKey:@"radius" type:ConfigValueTypeFloat default:@(18.0)]
[ConfigDescriptor itemWithKey:@"color" type:ConfigValueTypeString default:@"#FFF"]
[ConfigDescriptor itemWithKey:@"list" type:ConfigValueTypeArray default:@[]]
```

---

## 4. 改动清单

| # | 文件 | 操作 | 内容 | 改行数 |
|:-:|------|:----:|------|:------:|
| 1 | `Core/ConfigDescriptor.h` | 修改 | 5 行声明 → 1 行；保留枚举定义 | ~-4 行 |
| 2 | `Core/ConfigDescriptor.m` | 修改 | 5 个方法 → 1 个方法 | ~-30 行 |
| 3 | `Modules/ListCornerRadius/ListCornerRadiusConfig.m` | 修改 | 14 个调用点统一方法名 + type 参数 | 14 行 |
| 4 | `Modules/Unread/ClearUnreadConfig.m` | 修改 | 1 个调用点 | 1 行 |
| 5 | `Modules/Revoke/RevokeConfig.m` | 修改 | 18 个调用点 | 18 行 |
| 6 | `Modules/RedEnvelop/RedEnvelopConfig.m` | 修改 | 12 个调用点 | 12 行 |
| 7 | `Modules/ProfileCardBg/CardBgConfig.m` | 修改 | 22 个调用点 | 22 行 |
| 8 | `Modules/PlaceholderText/PlaceholderTextConfig.m` | 修改 | 6 个调用点 | 6 行 |
| 9 | `Modules/MessageTime/MessageTimeConfig.m` | 修改 | 20 个调用点 | 20 行 |

**总计**: 9 个文件，~97 行调用点调整，~34 行声明/实现删除，净减 ~34 行。

---

## 5. 用户测试方法

### 5.1 测试原理

**本次重构是纯粹的符号替换**：将 `boolItem:default:` → `itemWithKey:type:ConfigValueTypeBool default:`。不涉及任何业务逻辑改动。每个配置项在运行时创建 `ConfigDescriptor` 对象时，`type`、`key`、`defaultValue` 三个属性值**完全一致**。

因此测试的核心是验证：**合并后所有配置项的行为与合并前完全一致**。

### 5.2 测试流程

#### 测试 1：启动加载 —— 验证所有模块注册正确

| 步骤 | 操作 | 预期结果 |
|:----:|------|---------|
| 1 | 编译插件 → 安装到微信 | 编译无警告、无错误 |
| 2 | 启动微信 | 微信正常启动，不闪退 |
| 3 | 进入插件全部设置页面（依次检查所有 Tab） | 每个设置项正常显示，没有显示错误 |
| 4 | 重复杀死 → 重启微信 3 次 | 每次都能正常启动，功能正常 |

**核验点**: 如果某个配置项的类型枚举值（`ConfigValueTypeBool/Integer/Float/String/Array`）与默认值的 ObjC 类型不匹配，插件加载 `descriptors` 数组时会在 `type` 属性赋值时触发 KVC validate 警告，但不崩溃。启动不报错即说明所有类型匹配正确。

#### 测试 2：功能验证 —— 每个模块的核心功能

按模块逐一验证，每个模块选择一个代表性配置项操作：

| 模块 | 测试操作 | 验证点 |
|------|---------|--------|
| **列表圆角** | 开启 → 关闭"全局圆角"（Bool） | 聊天列表 cell 圆角变化 |
| **列表圆角** | 修改"列表圆角边框宽度"为 3.0（Float） | 边框宽度变化 |
| **列表圆角** | 修改"列表浅色背景色"为 #FF0000（String） | 背景颜色变为红色 |
| **防撤回** | 开启"防撤回"（Bool） | 消息撤回时正常拦截 |
| **防撤回** | 修改"通知模板"内容（String） | 撤回通知文字变化 |
| **红包** | 开启"自动抢红包"（Bool） | 红包消息自动点击 |
| **红包** | 修改"延迟抢红包"为 2000（Integer） | 延迟变化 |
| **红包** | 添加群过滤列表（Array） | 过滤功能生效 |
| **资料卡** | 修改"圆角半径"为 25.0（Float） | 资料卡圆角大小变化 |
| **资料卡** | 切换"填充模式"（Integer） | 背景填充效果变化 |
| **占位文本** | 输入自定义占位文字（String） | 聊天输入框占位文字变化 |
| **占位文本** | 调整文字透明度（Float） | 占位文字透明度变化 |
| **消息时间** | 开启"显示消息时间"（Bool） | 消息上方显示时间标签 |
| **消息时间** | 修改字号为 10.0（Float） | 时间标签字号变化 |
| **消息时间** | 修改时间格式为 `HH时mm分ss秒`（String） | 时间显示格式变化 |
| **清空未读** | 开启"清除未读"（Bool） | 未读消息图标状态变化 |

**核验点**: 每个配置项修改 → 退出设置页 → 查看功能生效 → 回到设置页确认配置保持。

#### 测试 3：验证所有 `ConfigValueType` 枚举值的实际用法

| 枚举值 | 验证配置项示例 | 验证方法 |
|:------:|--------------|---------|
| `ConfigValueTypeBool` | `preventRecall` (RevokeConfig) | 开关 → 防撤回生效/关闭 |
| `ConfigValueTypeInteger` | `redEnvelopDelay` (RedEnvelopConfig) | 设 3 → 抢红包延迟约 3 秒 |
| `ConfigValueTypeFloat` | `listCellCornerRadius` (ListCornerRadiusConfig) | 设 30 → 圆角变大（默认 18，30 更圆润） |
| `ConfigValueTypeString` | `placeholderTextText` (PlaceholderTextConfig) | 输入文字 → 聊天输入框显示该文字 |
| `ConfigValueTypeArray` | `redEnvelopGroupFilterList` (RedEnvelopConfig) | 添加群 → 该群红包不被自动抢 |

#### 测试 4：持久化验证

| 步骤 | 操作 | 预期结果 |
|:----:|------|---------|
| 1 | 修改每个模块至少 2 个配置项 | 功能生效 |
| 2 | 杀掉微信进程（不要用 Xcode stop，从 App Switcher 划掉） | — |
| 3 | 重新打开微信 → 进入插件设置页 | 所有配置项保持修改后的值 |
| 4 | 验证修改的功能仍然生效 | 功能正常 |

#### 测试 5：回归场景

| 场景 | 操作 | 预期结果 |
|------|------|---------|
| **全部开启** | 所有模块的所有开关功能全部开启 | 不崩溃，不卡死 |
| **全部重置** | 所有配置项恢复默认值 | 功能正确按默认值运行 |
| **极端值** | Float 设极小值 (0.01) 和极大值 (50) | 不崩溃，布局正常 |
| **空字符串** | String 配置项设为空 | 不崩溃，对应功能使用默认值/无效果 |
| **空数组** | Array 配置项清空 | 不崩溃，过滤功能恢复正常（不过滤） |

### 5.3 测试通过标准

| 标准 | 说明 |
|------|------|
| ✅ 编译无警告 | `clang` / Xcode 编译不报 warning |
| ✅ 启动无闪退 | 安装后微信正常启动 |
| ✅ 所有配置项可读 | 设置页所有 Tab 的配置项正常显示 |
| ✅ 所有配置项可写 | 修改配置后功能生效，设置值保持 |
| ✅ 持久化正确 | 杀进程重启后配置保持 |
| ✅ ConfigValueType 与 default 类型匹配 | Bool/Integer/Float 用 `@(...)`，String 用 `@""`，Array 用 `@[]` |
| ✅ 无新增崩溃 | 压测场景（全部开启、极端值）不崩溃 |

### 5.4 与旧方案对比

| 对比项 | 改造前 | 改造后 |
|--------|--------|--------|
| 工厂方法数 | 5 个（`boolItem`/`integerItem`/`floatItem`/`stringItem`/`arrayItem`） | 1 个（`itemWithKey:type:default:`） |
| ConfigDescriptor 文件大小 | .h 25 行 + .m 45 行 = 70 行 | .h 18 行 + .m 15 行 = 33 行 |
| 扩展新类型的成本 | 新增 1 个工厂方法（声明 + 实现） | 枚举加 1 行，无需新增方法 |
| 调用方类型安全性 | 编译器不检查（方法名约定） | 编译器检查（枚举 + 参数类型） |
| 调用方行数 | 每行约 50 字符 | 每行约 70 字符（含 `itemWithKey:type:ConfigValueTypeXxx default:`） |
| 模块接入学习成本 | 记 5 个方法名 | 记 1 个方法名 + 5 个枚举值 |

### 5.5 影响范围评估

| 影响范围 | 说明 |
|---------|------|
| **文件数** | 9 个（ConfigDescriptor.h/.m + 7 个 `*Config.m`） |
| **运行时行为** | 完全一致（`type` 属性值相同） |
| **持久化** | 不受影响（`NSUserDefaults` 的 key/value 不涉及 `type`） |
| **其他模块** | 不涉及（没有任何其他文件引用 `ConfigDescriptor` 的工厂方法） |
| **二进制体积** | 减小 ~34 行源码对应编译产物 |
| **向后兼容** | 旧 UserDefaults 数据不受影响（`loadArchivedData`/`saveArchivedData` 逻辑不变） |