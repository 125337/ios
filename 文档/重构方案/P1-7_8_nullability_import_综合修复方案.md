# P1-7 / P1-8 综合修复方案

> 基于 `/www/wwwroot/ios/MioPlugin` 代码仓库当前最新状态
> 排除 P1-9（已在 P1-9补充文档 中单独处理）

---

## P1-7: 补充 12 个 Config.h 的 `NS_ASSUME_NONNULL` 标注

### 问题

当前项目中 12 个 `*Config.h` 文件缺少 `NS_ASSUME_NONNULL_BEGIN/END` 标注。已有标注的 2 个文件（`ChatTopBarConfig.h`、`MessageTimeConfig.h`）为参考范例。

| 已有 `NS_ASSUME_NONNULL` | 缺失 `NS_ASSUME_NONNULL`（共 12 个） |
|-------------------------|-----------------------------------|
| `ChatTopBarConfig.h` ✅ | `CardBgConfig.h` |
| `MessageTimeConfig.h` ✅ | `ListCornerRadiusConfig.h` |
| | `ClearUnreadConfig.h` |
| | `RevokeConfig.h` |
| | `RedEnvelopConfig.h` |
| | `PlaceholderTextConfig.h` |
| | `UIPurifyConfig.h` |
| | `AttachLayoutConfig.h` |
| | `JokerConfig.h` |
| | `HideAvatarConfig.h` |
| | `GroupExitConfig.h` |
| | `AutoTransferConfig.h` |

### 修复方法

**对每个缺失的 `.h` 文件**：
1. 在最后一个 `#import` 之后、`@interface` 之前添加 `NS_ASSUME_NONNULL_BEGIN`
2. 在 `@end` 之后添加 `NS_ASSUME_NONNULL_END`
3. 对可能为 nil 的 `NSString *`、`NSArray *`、`NSMutableDictionary *` 属性添加 `nullable` 标注

**参考样式**（`MessageTimeConfig.h`）：

```objc
#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface MessageTimeConfig : NSObject <ConfigModule>

@property (nonatomic, copy, nullable) NSString *messageTimeFormat;
// ...其他属性...

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
```

---

### 详细改动（精确到行）

> **格式说明**：每项改动列出「文件路径」「改前代码（含行号）」「改后代码（含行号）」「nullable 分析」。

---

#### 文件 1：`Modules/ProfileCardBg/CardBgConfig.h`

**改前**（第 1-46 行）：

```objc
#import <Foundation/Foundation.h>
#import "ConfigModule.h"

@interface CardBgConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL cardBgMaterialEnabled;
@property (nonatomic, assign) BOOL cardBgCornerEnabled;
@property (nonatomic, assign) BOOL cardBgCornerUseGlobal;
@property (nonatomic, assign) CGFloat cardBgCornerRadius;
@property (nonatomic, assign) CGFloat cardBgCornerMargin;
@property (nonatomic, copy) NSString *cardBgCornerBgColor;
@property (nonatomic, copy) NSString *cardBgCornerDarkBgColor;
@property (nonatomic, assign) CGFloat cardBgStrokeWidth;
@property (nonatomic, assign) BOOL cardBgHidden;
@property (nonatomic, assign) BOOL cardBgHideStateEnabled;
@property (nonatomic, assign) CGFloat cardBgListSpacing;
@property (nonatomic, assign) NSInteger cardBgFillMode;
@property (nonatomic, assign) NSInteger cardBgAlignment;
@property (nonatomic, assign) NSInteger cardBgLayer;
@property (nonatomic, assign) CGFloat cardBgOffsetY;
@property (nonatomic, assign) CGFloat cardBgOffsetX;

// ★ 资料卡边框（从 ListCornerRadiusConfig 迁移）
@property (nonatomic, assign) BOOL cardBgBorderEnabled;
@property (nonatomic, assign) CGFloat cardBgBorderWidth;
@property (nonatomic, copy) NSString *cardBgBorderColor;
@property (nonatomic, copy) NSString *cardBgBorderColorDarkHex;

// ★ 箭码隐藏（从 ListCornerRadiusConfig 迁移）
@property (nonatomic, assign) BOOL cardBgHideArrow;

/// 是否存在背景图文件
+ (BOOL)hasBackgroundImage;
/// 获取背景图文件路径（GIF 优先，其次 PNG）
+ (NSString *)backgroundImagePath;
/// 获取背景图目录路径
+ (NSString *)backgroundImageDirectory;
/// 删除背景图文件
+ (void)deleteBackgroundImage;

+ (instancetype)shared;

@end
```

**改后**（第 1-49 行）：

```objc
#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface CardBgConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL cardBgMaterialEnabled;
@property (nonatomic, assign) BOOL cardBgCornerEnabled;
@property (nonatomic, assign) BOOL cardBgCornerUseGlobal;
@property (nonatomic, assign) CGFloat cardBgCornerRadius;
@property (nonatomic, assign) CGFloat cardBgCornerMargin;
@property (nonatomic, copy, nullable) NSString *cardBgCornerBgColor;
@property (nonatomic, copy, nullable) NSString *cardBgCornerDarkBgColor;
@property (nonatomic, assign) CGFloat cardBgStrokeWidth;
@property (nonatomic, assign) BOOL cardBgHidden;
@property (nonatomic, assign) BOOL cardBgHideStateEnabled;
@property (nonatomic, assign) CGFloat cardBgListSpacing;
@property (nonatomic, assign) NSInteger cardBgFillMode;
@property (nonatomic, assign) NSInteger cardBgAlignment;
@property (nonatomic, assign) NSInteger cardBgLayer;
@property (nonatomic, assign) CGFloat cardBgOffsetY;
@property (nonatomic, assign) CGFloat cardBgOffsetX;

// ★ 资料卡边框（从 ListCornerRadiusConfig 迁移）
@property (nonatomic, assign) BOOL cardBgBorderEnabled;
@property (nonatomic, assign) CGFloat cardBgBorderWidth;
@property (nonatomic, copy, nullable) NSString *cardBgBorderColor;
@property (nonatomic, copy, nullable) NSString *cardBgBorderColorDarkHex;

// ★ 箭码隐藏（从 ListCornerRadiusConfig 迁移）
@property (nonatomic, assign) BOOL cardBgHideArrow;

/// 是否存在背景图文件
+ (BOOL)hasBackgroundImage;
/// 获取背景图文件路径（GIF 优先，其次 PNG）
+ (nullable NSString *)backgroundImagePath;
/// 获取背景图目录路径
+ (nullable NSString *)backgroundImageDirectory;
/// 删除背景图文件
+ (void)deleteBackgroundImage;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
```

**`nullable` 分析**：
| 属性 | 原因 |
|------|------|
| `cardBgCornerBgColor` | 16进制颜色字符串，用户未设置时返回 nil |
| `cardBgCornerDarkBgColor` | 同上 |
| `cardBgBorderColor` | 同上 |
| `cardBgBorderColorDarkHex` | 同上 |
| `backgroundImagePath` (返回值) | 无背景图时返回 nil |
| `backgroundImageDirectory` (返回值) | 同上 |

---

#### 文件 2：`Modules/ListCornerRadius/ListCornerRadiusConfig.h`

**改前**（第 1-22 行）：

```objc
#import <Foundation/Foundation.h>
#import "ConfigModule.h"

@interface ListCornerRadiusConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL globalCornerRadiusEnabled;
@property (nonatomic, assign) BOOL globalCornerMyPageEnabled;
@property (nonatomic, assign) BOOL globalCornerContactsPageEnabled;
@property (nonatomic, assign) BOOL globalCornerDiscoverPageEnabled;
@property (nonatomic, assign) BOOL listSearchCornerRadius;
@property (nonatomic, assign) BOOL listCellBorder;
@property (nonatomic, assign) CGFloat listCellCornerRadius;
@property (nonatomic, assign) CGFloat listCellMargin;
@property (nonatomic, copy) NSString *listCellLightBgColor;
@property (nonatomic, copy) NSString *listCellDarkBgColor;
@property (nonatomic, assign) CGFloat listCellBorderWidth;
@property (nonatomic, copy) NSString *listCellBorderColor;
@property (nonatomic, copy) NSString *listCellBorderColorDarkHex;

+ (instancetype)shared;

@end
```

**改后**（第 1-25 行）：

```objc
#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface ListCornerRadiusConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL globalCornerRadiusEnabled;
@property (nonatomic, assign) BOOL globalCornerMyPageEnabled;
@property (nonatomic, assign) BOOL globalCornerContactsPageEnabled;
@property (nonatomic, assign) BOOL globalCornerDiscoverPageEnabled;
@property (nonatomic, assign) BOOL listSearchCornerRadius;
@property (nonatomic, assign) BOOL listCellBorder;
@property (nonatomic, assign) CGFloat listCellCornerRadius;
@property (nonatomic, assign) CGFloat listCellMargin;
@property (nonatomic, copy, nullable) NSString *listCellLightBgColor;
@property (nonatomic, copy, nullable) NSString *listCellDarkBgColor;
@property (nonatomic, assign) CGFloat listCellBorderWidth;
@property (nonatomic, copy, nullable) NSString *listCellBorderColor;
@property (nonatomic, copy, nullable) NSString *listCellBorderColorDarkHex;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
```

**`nullable` 分析**：
| 属性 | 原因 |
|------|------|
| `listCellLightBgColor` | 16进制颜色字符串，未设置时返回 nil |
| `listCellDarkBgColor` | 同上 |
| `listCellBorderColor` | 同上 |
| `listCellBorderColorDarkHex` | 同上 |

---

#### 文件 3：`Modules/Unread/ClearUnreadConfig.h`

**改前**（第 1-10 行）：

```objc
#import <Foundation/Foundation.h>
#import "ConfigModule.h"

@interface ClearUnreadConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL clearUnreadEnabled;

+ (instancetype)shared;

@end
```

**改后**（第 1-12 行）：

```objc
#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface ClearUnreadConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL clearUnreadEnabled;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
```

**`nullable` 分析**：无对象类型属性，不需要添加 `nullable`。

---

#### 文件 4：`Modules/Revoke/RevokeConfig.h`

**改前**（第 1-50 行）：

```objc
#import <Foundation/Foundation.h>
#import "../../Core/ConfigModule.h"
#import "../../Config/Constants.h"

@interface RevokeConfig : NSObject <ConfigModule>

#pragma mark - 基础开关
@property (nonatomic, assign) BOOL preventRecall;
@property (nonatomic, assign) BOOL debugLogging;
@property (nonatomic, assign) BOOL hideContent;
@property (nonatomic, assign) BOOL noTip;
@property (nonatomic, assign) BOOL bottomPosition;
@property (nonatomic, assign) BOOL sendInterceptedContent;
@property (nonatomic, assign) BOOL interceptNotifyEnabled;
@property (nonatomic, assign) BOOL customNotifyEnabled;
@property (nonatomic, assign) BOOL hideDiscoverBadge;
@property (nonatomic, assign) BOOL hideEnterpriseBadge;

#pragma mark - 格式配置
@property (nonatomic, copy) NSString *notifyFormat;
@property (nonatomic, copy) NSString *dateFormat;
@property (nonatomic, copy) NSString *customText;
@property (nonatomic, copy) NSString *interceptNotifyTemplate;
@property (nonatomic, copy) NSString *customNotifyFormat;
@property (nonatomic, copy) NSString *revokeTemplate;

#pragma mark - 通知撤回者
@property (nonatomic, assign) BOOL notifySender;
@property (nonatomic, copy) NSString *notifySenderTemplate;
@property (nonatomic, assign) double notifySenderCooldown;

#pragma mark - 动态格式存储 (NSKeyedArchiver)
@property (nonatomic, strong) NSMutableDictionary<NSString *, NSString *> *sessionFormats;
@property (nonatomic, strong) NSMutableDictionary<NSString *, NSString *> *userFormats;

#pragma mark - ConfigModule Protocol
+ (NSArray<ConfigDescriptor *> *)descriptors;
+ (NSString *)modulePrefix;
+ (instancetype)shared;

#pragma mark - Archived Data Methods
+ (void)loadArchivedData;
+ (void)saveArchivedData;

#pragma mark - Helper Methods
- (NSString *)notifyFormatForSession:(NSString *)session user:(NSString *)user;
- (NSString *)applyTemplate:(NSString *)tmpl time:(NSString *)time name:(NSString *)name content:(NSString *)content;
- (NSString *)applyRevokeTemplate:(NSString *)tmpl name:(NSString *)name content:(NSString *)content createTime:(unsigned int)createTime;

@end
```

**改后**（第 1-55 行）：

```objc
#import <Foundation/Foundation.h>
#import "ConfigModule.h"
#import "Constants.h"

NS_ASSUME_NONNULL_BEGIN

@interface RevokeConfig : NSObject <ConfigModule>

#pragma mark - 基础开关
@property (nonatomic, assign) BOOL preventRecall;
@property (nonatomic, assign) BOOL debugLogging;
@property (nonatomic, assign) BOOL hideContent;
@property (nonatomic, assign) BOOL noTip;
@property (nonatomic, assign) BOOL bottomPosition;
@property (nonatomic, assign) BOOL sendInterceptedContent;
@property (nonatomic, assign) BOOL interceptNotifyEnabled;
@property (nonatomic, assign) BOOL customNotifyEnabled;
@property (nonatomic, assign) BOOL hideDiscoverBadge;
@property (nonatomic, assign) BOOL hideEnterpriseBadge;

#pragma mark - 格式配置
@property (nonatomic, copy, nullable) NSString *notifyFormat;
@property (nonatomic, copy, nullable) NSString *dateFormat;
@property (nonatomic, copy, nullable) NSString *customText;
@property (nonatomic, copy, nullable) NSString *interceptNotifyTemplate;
@property (nonatomic, copy, nullable) NSString *customNotifyFormat;
@property (nonatomic, copy, nullable) NSString *revokeTemplate;

#pragma mark - 通知撤回者
@property (nonatomic, assign) BOOL notifySender;
@property (nonatomic, copy, nullable) NSString *notifySenderTemplate;
@property (nonatomic, assign) double notifySenderCooldown;

#pragma mark - 动态格式存储 (NSKeyedArchiver)
@property (nonatomic, strong, nullable) NSMutableDictionary<NSString *, NSString *> *sessionFormats;
@property (nonatomic, strong, nullable) NSMutableDictionary<NSString *, NSString *> *userFormats;

#pragma mark - ConfigModule Protocol
+ (NSArray<ConfigDescriptor *> *)descriptors;
+ (NSString *)modulePrefix;
+ (instancetype)shared;

#pragma mark - Archived Data Methods
+ (void)loadArchivedData;
+ (void)saveArchivedData;

#pragma mark - Helper Methods
- (nullable NSString *)notifyFormatForSession:(NSString *)session user:(NSString *)user;
- (NSString *)applyTemplate:(NSString *)tmpl time:(NSString *)time name:(NSString *)name content:(NSString *)content;
- (NSString *)applyRevokeTemplate:(NSString *)tmpl name:(NSString *)name content:(NSString *)content createTime:(unsigned int)createTime;

@end

NS_ASSUME_NONNULL_END
```

**`nullable` 分析**：
| 属性/方法 | 原因 |
|-----------|------|
| `notifyFormat` | 用户未设置格式时返回 nil |
| `dateFormat` | 同上 |
| `customText` | 同上 |
| `interceptNotifyTemplate` | 同上 |
| `customNotifyFormat` | 同上 |
| `revokeTemplate` | 同上 |
| `notifySenderTemplate` | 同上 |
| `sessionFormats` | NSKeyedArchiver 加载，可能为 nil |
| `userFormats` | 同上 |
| `notifyFormatForSession:user:` (返回值) | 可能找不到对应格式 |

> **注意**：此文件同时涉及 P1-8（import 路径修改），见下一节。

---

#### 文件 5：`Modules/RedEnvelop/RedEnvelopConfig.h`

**改前**（第 1-22 行）：

```objc
#import <Foundation/Foundation.h>
#import "ConfigModule.h"

@interface RedEnvelopConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL autoRedEnvelop;
@property (nonatomic, assign) BOOL redEnvelopCatchMe;
@property (nonatomic, assign) BOOL personalRedEnvelopEnable;
@property (nonatomic, assign) unsigned int redEnvelopDelay;
@property (nonatomic, assign) BOOL redEnvelopeDetail;
@property (nonatomic, assign) BOOL redEnvelopTextFilterEnabled;
@property (nonatomic, copy) NSString *redEnvelopTextFilter;
@property (nonatomic, assign) BOOL redEnvelopGroupFilterEnabled;
@property (nonatomic, copy) NSArray *redEnvelopGroupFilterList;
@property (nonatomic, assign) BOOL redEnvelopAutoReply;
@property (nonatomic, assign) BOOL redEnvelopAutoReplyInGroup;
@property (nonatomic, copy) NSString *redEnvelopAutoReplyStr;
@property (nonatomic, copy) NSArray *redEnvelopBlackList;

+ (instancetype)shared;

@end
```

**改后**（第 1-25 行）：

```objc
#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface RedEnvelopConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL autoRedEnvelop;
@property (nonatomic, assign) BOOL redEnvelopCatchMe;
@property (nonatomic, assign) BOOL personalRedEnvelopEnable;
@property (nonatomic, assign) unsigned int redEnvelopDelay;
@property (nonatomic, assign) BOOL redEnvelopeDetail;
@property (nonatomic, assign) BOOL redEnvelopTextFilterEnabled;
@property (nonatomic, copy, nullable) NSString *redEnvelopTextFilter;
@property (nonatomic, assign) BOOL redEnvelopGroupFilterEnabled;
@property (nonatomic, copy, nullable) NSArray *redEnvelopGroupFilterList;
@property (nonatomic, assign) BOOL redEnvelopAutoReply;
@property (nonatomic, assign) BOOL redEnvelopAutoReplyInGroup;
@property (nonatomic, copy, nullable) NSString *redEnvelopAutoReplyStr;
@property (nonatomic, copy, nullable) NSArray *redEnvelopBlackList;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
```

**`nullable` 分析**：
| 属性 | 原因 |
|------|------|
| `redEnvelopTextFilter` | 用户未设置时返回 nil |
| `redEnvelopGroupFilterList` | 数组类型，未设置时返回 nil |
| `redEnvelopAutoReplyStr` | 用户未设置时返回 nil |
| `redEnvelopBlackList` | 数组类型，未设置时返回 nil |

---

#### 文件 6：`Modules/PlaceholderText/PlaceholderTextConfig.h`

**改前**（第 1-15 行）：

```objc
#import <Foundation/Foundation.h>
#import "ConfigModule.h"

@interface PlaceholderTextConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL placeholderTextEnabled;
@property (nonatomic, assign) BOOL placeholderTextBold;
@property (nonatomic, copy) NSString *placeholderTextText;
@property (nonatomic, assign) CGFloat placeholderTextFontSize;
@property (nonatomic, assign) CGFloat placeholderTextAlpha;
@property (nonatomic, copy) NSString *placeholderTextColorHex;

+ (instancetype)shared;

@end
```

**改后**（第 1-18 行）：

```objc
#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface PlaceholderTextConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL placeholderTextEnabled;
@property (nonatomic, assign) BOOL placeholderTextBold;
@property (nonatomic, copy, nullable) NSString *placeholderTextText;
@property (nonatomic, assign) CGFloat placeholderTextFontSize;
@property (nonatomic, assign) CGFloat placeholderTextAlpha;
@property (nonatomic, copy, nullable) NSString *placeholderTextColorHex;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
```

**`nullable` 分析**：
| 属性 | 原因 |
|------|------|
| `placeholderTextText` | 用户未设置占位文本时返回 nil |
| `placeholderTextColorHex` | 未设置颜色时返回 nil |

---

#### 文件 7：`Modules/Layout/UIPurifyConfig.h`

**改前**（第 1-15 行）：

```objc
#import <Foundation/Foundation.h>
#import "ConfigModule.h"

@interface UIPurifyConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL hideSeparatorLine;
@property (nonatomic, assign) BOOL hideRevokeHint;
@property (nonatomic, assign) BOOL hidePatHint;
@property (nonatomic, assign) BOOL hideVoiceRedDot;
@property (nonatomic, assign) BOOL hideBubbleBackground;
@property (nonatomic, assign) BOOL disableDictation;

+ (instancetype)shared;

@end
```

**改后**（第 1-17 行）：

```objc
#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface UIPurifyConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL hideSeparatorLine;
@property (nonatomic, assign) BOOL hideRevokeHint;
@property (nonatomic, assign) BOOL hidePatHint;
@property (nonatomic, assign) BOOL hideVoiceRedDot;
@property (nonatomic, assign) BOOL hideBubbleBackground;
@property (nonatomic, assign) BOOL disableDictation;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
```

**`nullable` 分析**：无对象类型属性，不需要添加 `nullable`。

---

#### 文件 8：`Modules/Layout/AttachLayoutConfig.h`

**改前**（第 1-12 行）：

```objc
#import <Foundation/Foundation.h>
#import "ConfigModule.h"

@interface AttachLayoutConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL attachLayoutEnabled;
@property (nonatomic, copy) NSString *attachLayoutColumns;
@property (nonatomic, copy) NSString *attachLayoutRows;

+ (instancetype)shared;

@end
```

**改后**（第 1-15 行）：

```objc
#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface AttachLayoutConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL attachLayoutEnabled;
@property (nonatomic, copy, nullable) NSString *attachLayoutColumns;
@property (nonatomic, copy, nullable) NSString *attachLayoutRows;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
```

**`nullable` 分析**：
| 属性 | 原因 |
|------|------|
| `attachLayoutColumns` | 字符串类型，未设置时返回 nil |
| `attachLayoutRows` | 同上 |

---

#### 文件 9：`Modules/Joker/JokerConfig.h`

**改前**（第 1-9 行）：

```objc
#import <Foundation/Foundation.h>
#import "ConfigModule.h"

@interface JokerConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL enableJoker;

+ (instancetype)shared;

@end
```

**改后**（第 1-11 行）：

```objc
#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface JokerConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL enableJoker;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
```

**`nullable` 分析**：无对象类型属性，不需要添加 `nullable`。

---

#### 文件 10：`Modules/HideAvatar/HideAvatarConfig.h`

**改前**（第 1-15 行）：

```objc
#import <Foundation/Foundation.h>
#import "ConfigModule.h"

@interface HideAvatarConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL hideC2COtherAvatar;
@property (nonatomic, assign) BOOL hideC2CSelfAvatar;
@property (nonatomic, assign) BOOL hideGroupOtherAvatar;
@property (nonatomic, assign) BOOL hideGroupSelfAvatar;
@property (nonatomic, assign) BOOL hideOAOtherAvatar;
@property (nonatomic, assign) BOOL hideOASelfAvatar;

+ (instancetype)shared;

@end
```

**改后**（第 1-17 行）：

```objc
#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface HideAvatarConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL hideC2COtherAvatar;
@property (nonatomic, assign) BOOL hideC2CSelfAvatar;
@property (nonatomic, assign) BOOL hideGroupOtherAvatar;
@property (nonatomic, assign) BOOL hideGroupSelfAvatar;
@property (nonatomic, assign) BOOL hideOAOtherAvatar;
@property (nonatomic, assign) BOOL hideOASelfAvatar;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
```

**`nullable` 分析**：无对象类型属性，不需要添加 `nullable`。

---

#### 文件 11：`Modules/GroupExit/GroupExitConfig.h`

**改前**（第 1-9 行）：

```objc
#import <Foundation/Foundation.h>
#import "ConfigModule.h"

@interface GroupExitConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL enableGroupExitMonitor;

+ (instancetype)shared;

@end
```

**改后**（第 1-11 行）：

```objc
#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface GroupExitConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL enableGroupExitMonitor;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
```

**`nullable` 分析**：无对象类型属性，不需要添加 `nullable`。

---

#### 文件 12：`Modules/AutoTransfer/AutoTransferConfig.h`

**改前**（第 1-14 行）：

```objc
#import <Foundation/Foundation.h>
#import "ConfigModule.h"

@interface AutoTransferConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL autoConfirmTransfer;
@property (nonatomic, assign) BOOL autoConfirmTransferPersonal;
@property (nonatomic, assign) BOOL autoConfirmTransferGroup;
@property (nonatomic, assign) unsigned int autoConfirmTransferDelay;
@property (nonatomic, assign) long long autoConfirmTransferMaxAmount;
@property (nonatomic, assign) BOOL autoConfirmTransferAutoReply;
@property (nonatomic, copy) NSString *autoConfirmTransferAutoReplyStr;

+ (instancetype)shared;

@end
```

**改后**（第 1-17 行）：

```objc
#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface AutoTransferConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL autoConfirmTransfer;
@property (nonatomic, assign) BOOL autoConfirmTransferPersonal;
@property (nonatomic, assign) BOOL autoConfirmTransferGroup;
@property (nonatomic, assign) unsigned int autoConfirmTransferDelay;
@property (nonatomic, assign) long long autoConfirmTransferMaxAmount;
@property (nonatomic, assign) BOOL autoConfirmTransferAutoReply;
@property (nonatomic, copy, nullable) NSString *autoConfirmTransferAutoReplyStr;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
```

**`nullable` 分析**：
| 属性 | 原因 |
|------|------|
| `autoConfirmTransferAutoReplyStr` | 用户未设置时返回 nil |

---

### P1-7 改动汇总

| # | 文件 | 改动内容 |
|:-:|------|---------|
| 1 | `Modules/ProfileCardBg/CardBgConfig.h` | `NS_ASSUME_NONNULL_BEGIN/END` + 4 个 `nullable` + 2 个返回值 `nullable` |
| 2 | `Modules/ListCornerRadius/ListCornerRadiusConfig.h` | `NS_ASSUME_NONNULL_BEGIN/END` + 4 个 `nullable` |
| 3 | `Modules/Unread/ClearUnreadConfig.h` | `NS_ASSUME_NONNULL_BEGIN/END`（无 nullable 需要） |
| 4 | `Modules/Revoke/RevokeConfig.h` | `NS_ASSUME_NONNULL_BEGIN/END` + 9 个 `nullable` + 1 个返回值 `nullable`（同时包含 P1-8 import 修改） |
| 5 | `Modules/RedEnvelop/RedEnvelopConfig.h` | `NS_ASSUME_NONNULL_BEGIN/END` + 4 个 `nullable` |
| 6 | `Modules/PlaceholderText/PlaceholderTextConfig.h` | `NS_ASSUME_NONNULL_BEGIN/END` + 2 个 `nullable` |
| 7 | `Modules/Layout/UIPurifyConfig.h` | `NS_ASSUME_NONNULL_BEGIN/END`（无 nullable 需要） |
| 8 | `Modules/Layout/AttachLayoutConfig.h` | `NS_ASSUME_NONNULL_BEGIN/END` + 2 个 `nullable` |
| 9 | `Modules/Joker/JokerConfig.h` | `NS_ASSUME_NONNULL_BEGIN/END`（无 nullable 需要） |
| 10 | `Modules/HideAvatar/HideAvatarConfig.h` | `NS_ASSUME_NONNULL_BEGIN/END`（无 nullable 需要） |
| 11 | `Modules/GroupExit/GroupExitConfig.h` | `NS_ASSUME_NONNULL_BEGIN/END`（无 nullable 需要） |
| 12 | `Modules/AutoTransfer/AutoTransferConfig.h` | `NS_ASSUME_NONNULL_BEGIN/END` + 1 个 `nullable` |

**总计**：12 个文件，新增 24 行（每文件 `BEGIN` + `END`），新增 26 个 `nullable` 标注。

---

## P1-8: 统一 RevokeConfig.h 的 import 路径

### 问题

`RevokeConfig.h` 使用相对路径导入，而其他所有 13 个 `*Config.h` 使用直接引用：

```objc
// RevokeConfig.h — 当前（第 2-3 行）
#import "../../Core/ConfigModule.h"   // 相对路径
#import "../../Config/Constants.h"     // 相对路径

// 其他所有 Config.h — 直接引用
#import "ConfigModule.h"
```

### 修复方法

#### 步骤 1：修改 `RevokeConfig.h` 第 1-3 行

**改前**（第 1-3 行）：

```objc
#import <Foundation/Foundation.h>
#import "../../Core/ConfigModule.h"
#import "../../Config/Constants.h"
```

**改后**（第 1-3 行）：

```objc
#import <Foundation/Foundation.h>
#import "ConfigModule.h"
#import "Constants.h"
```

**注意**：此修改同时会移除第 1 行的空行，合并为连续 3 行 `#import`。

#### 步骤 2：配置 Build Settings

因为 `Constants.h` 位于 `MioPlugin/Config/` 目录，而 `#import "Constants.h"` 是直接引用方式（不带路径），所以需要在 Xcode 的 **User Header Search Paths** 中添加搜索路径。

在 Xcode → **Build Settings** → **User Header Search Paths** 中添加：

```
$(SRCROOT)/MioPlugin/Config
```

> 为什么不需要添加 `Core/` 路径？因为其他 13 个 Config.h 已经使用 `#import "ConfigModule.h"`（位于 `Core/`）且编译通过，说明 `$(SRCROOT)/MioPlugin/Core` 已在搜索路径中。

#### 验证方法

修改后执行完整编译，如果编译通过且无错误，说明配置正确。

---

### P1-8 改动汇总

| # | 操作 | 文件/位置 | 改动内容 |
|:-:|:----|:---------:|---------|
| 1 | 修改 import | `Modules/Revoke/RevokeConfig.h`（第 2-3 行） | `#import "../../Core/ConfigModule.h"` → `#import "ConfigModule.h"` |
| | | | `#import "../../Config/Constants.h"` → `#import "Constants.h"` |
| 2 | 添加搜索路径 | Xcode Build Settings → User Header Search Paths | 添加 `$(SRCROOT)/MioPlugin/Config` |

---

## 用户测试方法

### P1-7 测试（nullability 标注 — 只需编译验证）

nullability 标注属于编译期指令，不影响运行时行为。测试重点是**编译通过 + 功能无退化**。

| 步骤 | 操作 | 预期结果 |
|:----:|------|---------|
| 1 | 执行完整编译 | ✅ 编译通过，无 Warning |
| 2 | 打开微信 → 进入插件设置页 | ✅ 所有模块配置页正常显示 |
| 3 | 逐个检查每个模块的 *Config.h 涉及的配置项 | ✅ 数据显示正常 |
| 4 | Bool 开关类 | ✅ 开启/关闭生效 |
| 5 | Integer 数值类 | ✅ 设置后保存正确 |
| 6 | Float 数值类 | ✅ 设置后保存正确 |
| 7 | String 文字类（文本过滤、占位文字、自动回复等） | ✅ 文字显示正确，保存正常 |
| 8 | Array 列表类（群过滤列表、黑名单等） | ✅ 列表功能正常 |
| 9 | 设置后杀进程重开 | ✅ 配置保持 |

### P1-8 测试（import 路径变更）

| 步骤 | 操作 | 预期结果 |
|:----:|------|---------|
| 1 | 确认 Header Search Paths 中已有 `$(SRCROOT)/MioPlugin/Config` | ✅ |
| 2 | 执行完整编译 | ✅ 编译通过 |
| 3 | 打开微信 → 进入插件设置 → **防撤回设置** | ✅ 设置页正常显示 |
| 4 | 修改防撤回开关：开启 → 保存 | ✅ 生效 |
| 5 | 修改通知格式：输入自定义格式 → 保存 | ✅ 生效 |
| 6 | 修改日期格式 → 保存 | ✅ 生效 |
| 7 | 发一条消息 → 让对方撤回 | ✅ 防撤回功能正常 |
| 8 | 重新进入防撤回设置页 | ✅ 配置项保持修改后的值 |

---

## 影响范围汇总

| 项目 | P1-7 | P1-8 |
|------|:----:|:----:|
| **修改文件数** | 12 个 `.h` 文件 | 1 个 `.h` 文件 |
| **新增行数** | 24 行（BEGIN/END） + `nullable` 标注 | 0 行（替换 2 行） |
| **运行时影响** | 无（编译期标注） | 无（编译期路径） |
| **编译验证** | 需要 | 需要 |
| **功能验证** | 间接（配置项功能正常） | 需要（重点防撤回） |
| **回滚难度** | 极低（每文件删 2 行 + 恢复 `nullable`） | 极低（改回旧 import） |
| **编译警告** | 如果存在未标记 `nullable` 的对象属性可能会出现 warning | 无 |

---

## 回滚方法

### P1-7 回滚

对每个修改过的 `.h` 文件：
1. 删除 `NS_ASSUME_NONNULL_BEGIN`
2. 删除 `NS_ASSUME_NONNULL_END`
3. 从所有 `@property` 中删除 `nullable` 标注
4. 从方法返回值中删除 `nullable` 标注

可使用 `git checkout -- <文件名>` 恢复单个文件。

### P1-8 回滚

```objc
// 改回
#import "../../Core/ConfigModule.h"
#import "../../Config/Constants.h"
```