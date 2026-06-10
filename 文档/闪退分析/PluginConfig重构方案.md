# PluginConfig 重构方案

## 现状分析

### 当前问题

| 问题 | 严重程度 | 说明 |
|------|---------|------|
| `loadDefaults` 460 行重复代码 | 高 | 每个属性从 NSUserDefaults 读取、判空、设默认值，全是手写重复逻辑 |
| `save` 230 行重复代码 | 高 | 每个属性写入 NSUserDefaults，`if (value)` 模式不统一，39 处缺 `removeObjectForKey` |
| 80+ 属性散落在一个类中 | 中 | 按 `#pragma mark` 松散分组，实际仍在一个头文件和一个实现文件里 |
| 新增属性流程繁琐 | 中 | 需要在 .h 加属性、loadDefaults 加读取、save 加写入，三处修改易遗漏 |
| 类型处理不一致 | 低 | BOOL 直接 `setBool`/`boolForKey`，CGFloat/float 混用，NSString 有的加 copy 有的不加 |

### 属性分布（按模块）

```
红包模块:        12 属性 (autoRedEnvelop ~ redEnvelopBlackList)
自动转账:        6 属性
消息时间:        11 属性 + 8 配色属性
聊天顶栏:        17 属性
界面净化:        6 属性
隐藏头像:        6 属性
文本占位:        5 属性
列表圆角:        15 属性
卡片背景:        12 属性
开发者工具:      4 属性
好友添加时间:    2 属性
通知撤回:        5 属性
附件布局:        3 属性
```

---

## 方案对比

### 方案 A：配置字典 + 动态属性（用户提出的方案）

```objc
// 思路：内部用 NSDictionary 存储，外部通过 keyPath 访问
@interface PluginConfig : NSObject
@property (nonatomic, strong) NSMutableDictionary *configDict;
- (id)objectForConfigKey:(NSString *)key;
- (void)setObject:(id)obj forConfigKey:(NSString *)key;
@end
```

| 优点 | 缺点 |
|------|------|
| 代码量极少，save/load 各 5 行 | ❌ **丧失编译期类型检查** — 拼错 key 无警告 |
| 新属性无需三处修改 | ❌ **无代码提示** — Xcode autocomplete 失效 |
| `removeObjectForKey` 天然统一 | ❌ **调用方耦合** — `[[PluginConfig shared] objectForConfigKey:@"xxx"]` 侵入性强 |
| | ❌ **BOOL/float 等值类型需包装** — 语法繁琐 |
| | ❌ **默认值管理** — 字典里没有 key 时需要在读的地方处理 |

**结论**：适合小型配置（< 10 项），80+ 项的规模不适合。

### 方案 B：模块化拆分（分拆为多个 Config 类）

```objc
// PluginConfig.h → 拆成多个文件
RedEnvelopConfig.h      // 红包
ChatTopBarConfig.h      // 聊天顶栏
MessageTimeConfig.h     // 消息时间 + 配色
ListCornerRadiusConfig.h // 列表圆角
CardBgConfig.h          // 卡片背景
HideAvatarConfig.h      // 隐藏头像
PlaceholderTextConfig.h // 文本占位
UIPurifyConfig.h        // 界面净化
DevToolsConfig.h        // 开发者工具
```

| 优点 | 缺点 |
|------|------|
| 模块边界清晰，每类 5-15 个属性 | ❌ **文件爆炸** — .h × N + .m × N |
| 每个模块可以独立管理默认值 | ❌ **调用方需知道去哪找** — `[ChatTopBarConfig shared].chatAvatarSize` |
| 新增模块不影响已有模块 | ❌ **模块间共享配置**（如配色跨模块使用）不易处理 |
| | ❌ 每个子类仍要写重复的 save/load |

**结论**：可读性好，但每个子类仍有绑定代码。

### 方案 C：配置描述符表（推荐）

**核心思路**：用**元数据表**统一描述所有配置项，save/load 由基类统一完成。

```objc
// 描述一个配置项
typedef struct {
    NSString *key;           // NSUserDefaults key suffix
    NSString *propertyName;  // @selector name (for setValue:forKey:)
    NSString *defaultValue;  // 默认值（nil = 无默认值）
    BOOL isNumber;           // YES=数值类型, NO=字符串类型
} ConfigItem;
```

| 优点 | 缺点 |
|------|------|
| ✅ 约 1000 行重复代码 → **40 行** | KVC 有极轻微性能开销（可忽略） |
| ✅ 新增属性 = 一行描述 + 一行 @property | 需要统一遵循 `setValue:forKey:` 命名 |
| ✅ `removeObjectForKey` 统一处理，零遗漏 | — |
| ✅ 保留编译期类型检查（@property 仍在 .h） | — |
| ✅ 调用方零修改 — `config.showChatAvatar` 写法不变 | — |

---

## 推荐方案：配置描述符表（方案 C）

### 架构设计

```
┌──────────────────────────────────────────────────┐
│                  PluginConfig                    │
│  (facade, backward-compatible @property access)  │
├──────────────────────────────────────────────────┤
│  + (instancetype)shared                          │
│  - (void)loadDefaults  ← 遍历描述符表            │
│  - (void)save           ← 遍历描述符表            │
│  - (void)resetAllConfig                          │
│  @property ... (80+ properties)                  │
│  + (NSArray<ConfigItem *> *)configDescriptors    │
└──────────────────────────────────────────────────┘
```

### 核心：配置描述符定义

#### 1. 类型枚举

```objc
typedef NS_ENUM(NSUInteger, ConfigType) {
    ConfigTypeBool,      // BOOL
    ConfigTypeInteger,   // NSInteger / unsigned int
    ConfigTypeFloat,     // CGFloat / float
    ConfigTypeDouble,    // double
    ConfigTypeString,    // NSString * (copy)
    ConfigTypeArray,     // NSArray *
    ConfigTypeData,      // NSData (archived object)
};
```

#### 2. 配置描述符

```objc
@interface ConfigDescriptor : NSObject
@property (nonatomic, copy)   NSString     *key;          // NSUserDefaults key suffix
@property (nonatomic, copy)   NSString     *propertyName; // @property name (for KVC)
@property (nonatomic, assign) ConfigType    type;          // 数据类型
@property (nonatomic, strong) id            defaultValue;  // 默认值 (nil = 无)
@property (nonatomic, copy)   NSString     *module;       // 所属模块名（日志分组用）
@end
```

#### 3. 描述符表定义

```objc
+ (NSArray<ConfigDescriptor *> *)configDescriptors {
    return @[
        // === 红包模块 ===
        [ConfigDescriptor boolItem:@"PreventRecall"          property:@"preventRecall"          default:@YES],
        [ConfigDescriptor boolItem:@"AutoRedEnvelop"         property:@"autoRedEnvelop"         default:@NO],
        [ConfigDescriptor boolItem:@"RedEnvelopCatchMe"       property:@"redEnvelopCatchMe"       default:@NO],
        [ConfigDescriptor boolItem:@"PersonalRedEnvelopEnable" property:@"personalRedEnvelopEnable" default:@NO],
        [ConfigDescriptor boolItem:@"RedEnvelopeDetail"       property:@"redEnvelopeDetail"       default:@NO],
        [ConfigDescriptor boolItem:@"RedEnvelopTextFilterEnabled"   property:@"redEnvelopTextFilterEnabled"   default:@NO],
        [ConfigDescriptor boolItem:@"RedEnvelopGroupFilterEnabled"  property:@"redEnvelopGroupFilterEnabled"  default:@NO],
        [ConfigDescriptor boolItem:@"RedEnvelopAutoReply"     property:@"redEnvelopAutoReply"     default:@NO],
        [ConfigDescriptor boolItem:@"RedEnvelopAutoReplyInGroup" property:@"redEnvelopAutoReplyInGroup" default:@NO],
        [ConfigDescriptor integerItem:@"RedEnvelopDelay"     property:@"redEnvelopDelay"         default:@0],
        [ConfigDescriptor stringItem:@"RedEnvelopTextFilter" property:@"redEnvelopTextFilter"   default:@""],
        [ConfigDescriptor stringItem:@"RedEnvelopAutoReplyStr" property:@"redEnvelopAutoReplyStr" default:@"谢谢老板"],
        [ConfigDescriptor arrayItem:@"RedEnvelopBlackList"    property:@"redEnvelopBlackList"    default:@[]],
        [ConfigDescriptor arrayItem:@"RedEnvelopGroupFilterList" property:@"redEnvelopGroupFilterList" default:@[]],

        // === 自动转账模块 ===
        [ConfigDescriptor boolItem:@"AutoConfirmTransfer"          property:@"autoConfirmTransfer"          default:@NO],
        [ConfigDescriptor boolItem:@"AutoConfirmTransferPersonal"  property:@"autoConfirmTransferPersonal"  default:@NO],
        [ConfigDescriptor boolItem:@"AutoConfirmTransferGroup"     property:@"autoConfirmTransferGroup"     default:@NO],
        [ConfigDescriptor boolItem:@"AutoConfirmTransferAutoReply" property:@"autoConfirmTransferAutoReply" default:@NO],
        [ConfigDescriptor integerItem:@"AutoConfirmTransferDelay"  property:@"autoConfirmTransferDelay"     default:@0],
        [ConfigDescriptor stringItem:@"AutoConfirmTransferAutoReplyStr" property:@"autoConfirmTransferAutoReplyStr" default:@"已收到款项，谢谢！"],

        // === 聊天顶栏模块 ===
        [ConfigDescriptor boolItem:@"ShowChatAvatar"        property:@"showChatAvatar"        default:@NO],
        [ConfigDescriptor boolItem:@"AvatarTapFeedback"     property:@"avatarTapFeedback"     default:@NO],
        [ConfigDescriptor boolItem:@"ShowAddTime"           property:@"showAddTime"           default:@NO],
        [ConfigDescriptor boolItem:@"ShowGroupMemberCount"  property:@"showGroupMemberCount"  default:@NO],
        [ConfigDescriptor integerItem:@"ChatDisplayMode"    property:@"chatDisplayMode"       default:@3],
        [ConfigDescriptor floatItem:@"ChatAvatarSize"       property:@"chatAvatarSize"        default:@30.0],
        [ConfigDescriptor floatItem:@"ChatAvatarSpacing"    property:@"chatAvatarSpacing"     default:@6.0],
        [ConfigDescriptor floatItem:@"ChatAvatarCornerRadius" property:@"chatAvatarCornerRadius" default:@100.0],
        [ConfigDescriptor floatItem:@"ChatNicknameFontSize" property:@"chatNicknameFontSize"  default:@9.0],
        [ConfigDescriptor floatItem:@"ChatSeparatorSize"    property:@"chatSeparatorSize"     default:@30.0],
        [ConfigDescriptor floatItem:@"ChatTitleViewWidth"   property:@"chatTitleViewWidth"    default:@210.0],
        [ConfigDescriptor floatItem:@"ChatVerticalOffset"   property:@"chatVerticalOffset"    default:@0],
        [ConfigDescriptor floatItem:@"ChatHorizontalOffset" property:@"chatHorizontalOffset"  default:@0],
        [ConfigDescriptor floatItem:@"ChatNicknameOffsetY"  property:@"chatNicknameOffsetY"   default:@0],
        [ConfigDescriptor floatItem:@"ChatNicknameOffsetX"  property:@"chatNicknameOffsetX"   default:@0],
        [ConfigDescriptor stringItem:@"ChatSeparatorText"   property:@"chatSeparatorText"     default:@""],
        [ConfigDescriptor stringItem:@"ChatGroupMemberCountSuffix" property:@"chatGroupMemberCountSuffix" default:@"%u人"],
        [ConfigDescriptor stringItem:@"ChatAddTimeSuffixFormat"   property:@"chatAddTimeSuffixFormat"   default:@"%ld天"],
        [ConfigDescriptor stringItem:@"ChatSeparatorIcon"   property:@"chatSeparatorIcon"     default:nil],
        [ConfigDescriptor stringItem:@"ChatSeparatorGIF"    property:@"chatSeparatorGIF"      default:nil],
        [ConfigDescriptor stringItem:@"ChatAvatarBlacklist" property:@"chatAvatarBlacklist"   default:nil],

        // === 消息时间模块 ===
        [ConfigDescriptor boolItem:@"ShowMessageTime"         property:@"showMessageTime"         default:@NO],
        [ConfigDescriptor floatItem:@"MessageTimeFontSize"    property:@"messageTimeFontSize"    default:@7.0],
        [ConfigDescriptor boolItem:@"MessageTimeBoldFont"     property:@"messageTimeBoldFont"     default:@NO],
        [ConfigDescriptor stringItem:@"MessageTimeFormat"     property:@"messageTimeFormat"      default:@"HH:mm:ss"],
        [ConfigDescriptor stringItem:@"CustomFormat"          property:@"messageTimeCustomFormat" default:nil],
        // ... (全量列表见完整实现)

        // === 列表圆角模块 (省略，模式相同) ===
        // === 卡片背景模块 (省略，模式相同) ===
        // === 隐藏头像模块 (省略，模式相同) ===
        // === 文本占位模块 (省略，模式相同) ===
        // === 界面净化模块 (省略，模式相同) ===
        // === 开发者工具模块 (省略，模式相同) ===
    ];
}
```

### 核心：统一 save / load 实现

```objc
- (void)loadDefaults {
    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];
    for (ConfigDescriptor *desc in [[self class] configDescriptors]) {
        id raw = [d objectForKey:[kPluginPrefix stringByAppendingString:desc.key]];

        if (raw) {
            // key 存在 → 使用存储值
            switch (desc.type) {
                case ConfigTypeBool:
                    [self setValue:[d boolForKey:...] ? @YES : @NO forKey:desc.propertyName];
                    break;
                case ConfigTypeInteger:
                    [self setValue:@([d integerForKey:...]) forKey:desc.propertyName];
                    break;
                case ConfigTypeFloat:
                    [self setValue:@([d floatForKey:...]) forKey:desc.propertyName];
                    break;
                case ConfigTypeString: {
                    NSString *v = [d stringForKey:...];
                    [self setValue:(v.length > 0 ? v : desc.defaultValue) forKey:desc.propertyName];
                    break;
                }
                case ConfigTypeArray: {
                    NSArray *v = [d arrayForKey:...];
                    [self setValue:(v ?: desc.defaultValue) forKey:desc.propertyName];
                    break;
                }
                // ...
            }
        } else {
            // key 不存在 → 使用默认值
            [self setValue:desc.defaultValue forKey:desc.propertyName];
        }
    }
    // SessionFormats / UserFormats 特殊处理（NSKeyedArchiver）
    // ...
}

- (void)save {
    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];
    for (ConfigDescriptor *desc in [[self class] configDescriptors]) {
        id value = [self valueForKey:desc.propertyName];
        NSString *fullKey = [kPluginPrefix stringByAppendingString:desc.key];

        if (value) {
            switch (desc.type) {
                case ConfigTypeBool:    [d setBool:[value boolValue]  forKey:fullKey]; break;
                case ConfigTypeInteger: [d setInteger:[value integerValue] forKey:fullKey]; break;
                case ConfigTypeFloat:   [d setFloat:[value floatValue] forKey:fullKey]; break;
                case ConfigTypeString:  [d setObject:value forKey:fullKey]; break;
                case ConfigTypeArray:   [d setObject:value forKey:fullKey]; break;
                // ...
            }
        } else {
            [d removeObjectForKey:fullKey]; // ← 统一处理数据残留
        }
    }
    // SessionFormats / UserFormats 特殊处理
    [d synchronize];
}
```

### 描述符工厂方法（Convenience Constructors）

```objc
@implementation ConfigDescriptor

+ (instancetype)boolItem:(NSString *)key property:(NSString *)property default:(NSNumber *)defaultValue {
    ConfigDescriptor *d = [ConfigDescriptor new];
    d.key = key; d.propertyName = property; d.type = ConfigTypeBool;
    d.defaultValue = defaultValue; d.module = @"General";
    return d;
}

+ (instancetype)floatItem:(NSString *)key property:(NSString *)property default:(NSNumber *)defaultValue {
    ConfigDescriptor *d = [ConfigDescriptor new];
    d.key = key; d.propertyName = property; d.type = ConfigTypeFloat;
    d.defaultValue = defaultValue; d.module = @"General";
    return d;
}

+ (instancetype)stringItem:(NSString *)key property:(NSString *)property default:(NSString *)defaultValue {
    ConfigDescriptor *d = [ConfigDescriptor new];
    d.key = key; d.propertyName = property; d.type = ConfigTypeString;
    d.defaultValue = [defaultValue copy]; d.module = @"General";
    return d;
}
// ... integerItem, arrayItem, dataItem
```

### 步骤与工作量

```
Phase 1: 新增 ConfigDescriptor 类       — 1 个文件, ~60 行代码
Phase 2: 提取 configDescriptors 表      — 1 个方法, ~200 行（80+ 配置项各 1 行）
Phase 3: 重写 loadDefaults → 遍历描述符  — ~30 行代码（替换原 ~460 行）
Phase 4: 重写 save → 遍历描述符          — ~30 行代码（替换原 ~230 行）
Phase 5: 删除原 loadDefaults / save      — 删除 ~690 行代码
Phase 6: 保留所有 @property（不改调用方） — 0 行改动
```

### 迁移策略

**向后兼容方案**：逐步替换

```
Step 1: 新增 ConfigDescriptor 类 + 描述符表（不影响现有功能）
Step 2: 在 save 方法中并列运行新版 + 旧版（验证一致性）
Step 3: 日志对比新旧 save 结果，确认一致后切换到新版
Step 4: 删除旧版代码
```

**调用方零影响** — 所有 `[PluginConfig shared].xxx` 的写法保持不变。

---

## 结论

| 方案 | 代码减少 | 类型安全 | 调用方影响 | 推荐 |
|------|---------|---------|-----------|------|
| A. 配置字典 | ~90% | ❌ 无 | 需重写所有调用 | ✗ |
| B. 模块拆分 | ~50%（每个子类仍有重复） | ✅ | 需修改 import | △ |
| **C. 描述符表** | **~95%** | **✅** | **零修改** | **★** |

**推荐方案 C — 配置描述符表**，核心收益：

1. ~690 行重复代码消失（save + loadDefaults）
2. `removeObjectForKey` 统一处理，数据残留问题根治
3. 新增一个配置项 = 加一行描述符 + 一行 @property（不用改 save/load）
4. 迁移风险最低 — 调用方一行代码不用动