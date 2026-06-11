# P0-2 修复方案：CornerResponsibility 死代码清理

## 问题概述

`CornerResponsibility.h/.m` 中存在多处死代码，包括空数组、从未被调用的方法、以及项目其他位置从未引用的枚举值。

### 死代码清单

| 代码 | 类型 | 行号 | 说明 |
|------|------|------|------|
| `kProfileCardVCs[] = {}` | 空数组 | .m 第13行 | 空数组，`profileCardSet()` 永远返回空 NSSet |
| `profileCardSet()` | 死函数 | .m 第75-87行 | 从空数组构建集合，结果永远为空 |
| `kCornerModuleProfileCard` | 死枚举值 | .h 第15行 | 项目内无任何文件引用此值 |
| `kCornerModuleNone` | 死枚举值 | .h 第17行 | 项目内无任何文件引用此值（仅内部 switch 分支使用） |
| `isProfileCardResponsibleFor:` | 死方法 | .m 第150-152行 | 项目内**0处调用**，仅在 CornerResponsibility.m 自身被引用 |
| `isNoCornerResponsibleFor:` | 死方法 | .m 第154-156行 | 项目内**0处调用**，仅在 CornerResponsibility.m 自身被引用 |

### 实际使用的代码（需保留）

| 代码 | 说明 |
|------|------|
| `kCornerModuleList = 0` | 被 `ListCornerRadiusHook.m` 第152行的 `isListCornerResponsibleFor:` 使用 |
| `isListCornerResponsibleFor:` | 被 `ListCornerRadiusHook.m` 第152行调用 |
| `moduleForViewController:` | 被 `isListCornerResponsibleFor:` 内部调用，是核心路由方法 |
| `kSkipListVCs[]` | 列表圆角黑名单，配置了 40+ 个不支持的 VC 类名 |
| `kSkipPrefixList[]` | 前缀黑名单，配置了 4 个不支持的类名前缀 |
| `skipListSet()` | 从 `kSkipListVCs[]` 构建静态 NSSet |
| `isPrefixSkipped()` | 类名前缀匹配检查 |

---

## 目标

- 删除全部死代码（空数组、死函数、死方法、死枚举值）
- 保持 `moduleForViewController:` + `isListCornerResponsibleFor:` 的逻辑不变
- 保持所有 VC 黑名单配置不变

---

## 详细修改步骤

### Step 1：修改 CornerResponsibility.h

**文件**: `Modules/CornerResponsibility/CornerResponsibility.h`

**修改前**（第1-39行）：

```objc
//
//  CornerResponsibility.h
//  MioPlugin
//
//  功能：管理各 VC 的圆角模块归属，集中查询，避免判断分散。
//

#import <UIKit/UIKit.h>

/// 圆角模块枚举
typedef NS_ENUM(NSInteger, CornerModule) {
    /// 列表圆角模块（由 ListCornerRadiusHook 管理）
    kCornerModuleList = 0,
    /// 资料卡片美化模块（由 ProfileCardBgHook 管理）
    kCornerModuleProfileCard,
    /// 无圆角模块（当前不支持圆角的页面）
    kCornerModuleNone,
};

@interface CornerResponsibility : NSObject

/// 查询指定 VC 的圆角模块归属
/// @param vc 当前正在展示的 UIViewController 实例
/// @return CornerModule 枚举值
+ (CornerModule)moduleForViewController:(UIViewController *)vc;

/// 判断指定 VC 是否应由列表圆角模块处理
/// 等效于 moduleForViewController: == kCornerModuleList
+ (BOOL)isListCornerResponsibleFor:(UIViewController *)vc;

/// 判断指定 VC 是否应由资料卡片美化模块处理
/// 等效于 moduleForViewController: == kCornerModuleProfileCard
+ (BOOL)isProfileCardResponsibleFor:(UIViewController *)vc;

/// 判断指定 VC 是否不支持任何圆角
/// 等效于 moduleForViewController: == kCornerModuleNone
+ (BOOL)isNoCornerResponsibleFor:(UIViewController *)vc;

@end
```

**修改后**：

```objc
//
//  CornerResponsibility.h
//  MioPlugin
//
//  功能：管理各 VC 的圆角模块归属，集中查询，避免判断分散。
//

#import <UIKit/UIKit.h>

/// 圆角模块枚举
typedef NS_ENUM(NSInteger, CornerModule) {
    /// 列表圆角模块（由 ListCornerRadiusHook 管理）
    kCornerModuleList = 0,
};

@interface CornerResponsibility : NSObject

/// 判断指定 VC 是否应由列表圆角模块处理
/// 遍历黑名单 → 匹配则返回 NO，否则返回 YES（默认归列表圆角）
+ (BOOL)isListCornerResponsibleFor:(UIViewController *)vc;

@end
```

**变更说明**:

| 变更 | 原因 |
|------|------|
| 删除 `kCornerModuleProfileCard` | 无任何外部引用，属于死代码 |
| 删除 `kCornerModuleNone` | 无任何外部引用，属于死代码 |
| 删除 `moduleForViewController:` 声明 | 改用 `isListCornerResponsibleFor:` 实现内部处理，无需对外暴露枚举和路由方法 |
| 删除 `isProfileCardResponsibleFor:` 声明 | 项目内0处调用 |
| 删除 `isNoCornerResponsibleFor:` 声明 | 项目内0处调用 |
| 保留 `kCornerModuleList = 0` | 枚举定义需要至少一个值才能保留枚举类型 |
| 保留 `CornerModule` 枚举类型 | 虽然现在只有一个值，但保留枚举类型以便未来扩展（如需加新模块只需加枚举值 + 扩展 `isListCornerResponsibleFor:`） |

---

### Step 2：修改 CornerResponsibility.m

**文件**: `Modules/CornerResponsibility/CornerResponsibility.m`

#### 2.1 删除空数组和死函数

**删除第8-14行（配置区注释和空数组）**：

```objc
/// ========== 配置区：在此维护各模块的 VC 归属 ==========

/// 资料卡片美化模块专属的 VC 类名列表
/// ★ MoreViewController 不再归为资料卡模块，它的列表 Cell 由列表圆角模块处理。
///   资料卡的识别在 handleButtonLayout 中通过 MMHeadImageView 子视图检查 + VC 类型检查完成。
static NSString *const kProfileCardVCs[] = {
};
```

**删除第74-87行（死函数 profileCardSet()）**：

```objc
/// 获取静态 NSSet（profileCardVCs）
static NSSet *profileCardSet(void) {
    static NSSet *set = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSMutableSet *mutableSet = [NSMutableSet set];
        NSUInteger count = sizeof(kProfileCardVCs) / sizeof(kProfileCardVCs[0]);
        for (NSUInteger i = 0; i < count; i++) {
            [mutableSet addObject:kProfileCardVCs[i]];
        }
        set = [mutableSet copy];
    });
    return set;
}
```

#### 2.2 保留黑名单配置和辅助函数

**保留**:

```objc
/// 列表圆角黑名单（不支持任何圆角的 VC 类名列表）
/// 这些 VC 的页面还不适配圆角
static NSString *const kSkipListVCs[] = {
    @"WCTimeLineViewController",
    // ... 41个其他类名 ...
};

/// 类名前缀黑名单（以这些前缀开头的 VC 也不支持任何圆角）
static NSString *const kSkipPrefixList[] = {
    @"WCRefine",
    @"WCPulse",
    @"Themebox",
    @"BubbleBox",
};
```

```objc
/// 获取静态 NSSet（skipListVCs）
static NSSet *skipListSet(void) { /* 不变 */ }

/// 检查类名是否匹配前缀黑名单
static BOOL isPrefixSkipped(NSString *cls) { /* 不变 */ }
```

#### 2.3 改造 @implementation 部分

**修改前**（第119-158行）：

```objc
@implementation CornerResponsibility

+ (CornerModule)moduleForViewController:(UIViewController *)vc {
    if (vc == nil) return kCornerModuleNone;

    NSString *cls = NSStringFromClass([vc class]);
    if (cls.length == 0) return kCornerModuleNone;

    // 1. 资料卡片美化专属 VC
    if ([profileCardSet() containsObject:cls]) {
        return kCornerModuleProfileCard;
    }

    // 2. 前缀黑名单
    if (isPrefixSkipped(cls)) {
        return kCornerModuleNone;
    }

    // 3. 列表圆角黑名单（暂不支持圆角的页面）
    if ([skipListSet() containsObject:cls]) {
        return kCornerModuleNone;
    }

    // 4. 默认都归列表圆角
    return kCornerModuleList;
}

+ (BOOL)isListCornerResponsibleFor:(UIViewController *)vc {
    return [self moduleForViewController:vc] == kCornerModuleList;
}

+ (BOOL)isProfileCardResponsibleFor:(UIViewController *)vc {
    return [self moduleForViewController:vc] == kCornerModuleProfileCard;
}

+ (BOOL)isNoCornerResponsibleFor:(UIViewController *)vc {
    return [self moduleForViewController:vc] == kCornerModuleNone;
}

@end
```

**修改后**：

```objc
@implementation CornerResponsibility

+ (BOOL)isListCornerResponsibleFor:(UIViewController *)vc {
    if (vc == nil) return NO;

    NSString *cls = NSStringFromClass([vc class]);
    if (cls.length == 0) return NO;

    // 1. 前缀黑名单
    if (isPrefixSkipped(cls)) {
        return NO;
    }

    // 2. 列表圆角黑名单（暂不支持圆角的页面）
    if ([skipListSet() containsObject:cls]) {
        return NO;
    }

    // 3. 默认归列表圆角
    return YES;
}

@end
```

**变更说明**:

| 变更 | 代码 | 原因 |
|------|------|------|
| 删除 `moduleForViewController:` | 整个方法 | 简化判断逻辑，不再需要中间路由层。唯一外部调用者 `isListCornerResponsibleFor:` 现在直接在内部实现 |
| 删除 profile card 检查分支 | `if ([profileCardSet() containsObject:cls])` | 数组永远为空，分支永远不命中 |
| 删除 `kCornerModuleNone` 返回值 | 两处 `return kCornerModuleNone` | 枚举值已删除，改为直接返回 `NO` |
| 删除 `isProfileCardResponsibleFor:` | 整个方法 | 0处调用 |
| 删除 `isNoCornerResponsibleFor:` | 整个方法 | 0处调用 |
| 删除 `kCornerModuleList` 比较 | 原 `return [self moduleForViewController:vc] == kCornerModuleList` | 简化，直接用 `return YES` 表达"默认归列表圆角" |

---

### Step 3：验证调用方不受影响

**调用方**: `Modules/ListCornerRadius/ListCornerRadiusHook.m` 第152行

```objc
#import "../CornerResponsibility/CornerResponsibility.h"

// 使用处（第152行）:
if (![CornerResponsibility isListCornerResponsibleFor:vc]) {
    return;
}
```

| 检查项 | 结果 |
|--------|------|
| 是否引用了被删除的方法 | ❌ 否，它只用了 `isListCornerResponsibleFor:` |
| 是否引用 `kCornerModuleProfileCard` | ❌ 否 |
| 是否引用 `kCornerModuleNone` | ❌ 否 |
| `isListCornerResponsibleFor:` 的方法签名是否变化 | ❌ 否，依旧是 `+ (BOOL)isListCornerResponsibleFor:(UIViewController *)vc` |

**结论**: 调用方代码无需任何修改。

---

### Step 4：最终文件内容对照

#### CornerResponsibility.h 最终内容

```objc
//
//  CornerResponsibility.h
//  MioPlugin
//
//  功能：管理各 VC 的圆角模块归属，集中查询，避免判断分散。
//

#import <UIKit/UIKit.h>

/// 圆角模块枚举
typedef NS_ENUM(NSInteger, CornerModule) {
    /// 列表圆角模块（由 ListCornerRadiusHook 管理）
    kCornerModuleList = 0,
};

@interface CornerResponsibility : NSObject

/// 判断指定 VC 是否应由列表圆角模块处理
/// 遍历黑名单 → 匹配则返回 NO，否则返回 YES（默认归列表圆角）
+ (BOOL)isListCornerResponsibleFor:(UIViewController *)vc;

@end
```

**行数变化**: 39 行 → 20 行（-19 行）

#### CornerResponsibility.m 最终内容

```objc
//
//  CornerResponsibility.m
//  MioPlugin
//

#import "CornerResponsibility.h"

/// 列表圆角黑名单（不支持任何圆角的 VC 类名列表）
static NSString *const kSkipListVCs[] = {
    @"WCTimeLineViewController",
    @"WCAccountLoginUsersViewController",
    @"SessionSelectController",
    @"WCListViewController",
    @"BrandNotificationListViewController",
    @"BrandNewSessionViewController",
    @"BaseMsgContentViewController",
    @"BraceletRankProfileViewController",
    @"BraceletRankViewController",
    @"WCRedEnvelopesRedEnvelopesDetailViewController",
    @"MsgRecordDetailViewController",
    @"ChatRoomInfoViewController",
    @"ContactInfoViewController",
    @"AddFriendEntryViewController",
    @"AddContactToChatRoomViewController",
    @"SayHelloViewController",
    @"MMFinderPivotLiveViewController",
    @"WCSearchController",
    @"WCPluginsViewController",
    @"AccountDetailViewController",
    @"SpecificPageLockViewController",
    @"ThemeExchangeViewController",
    @"RepeatEnhanceViewController",
    @"NewHBALLSettingController",
    @"DisableWeChatController",
    @"TheMessageController",
    @"TheVoiceController",
    @"VoiceCenterSettingController",
    @"TheGroupController",
    @"TheTimeLineController",
    @"AutoChangeWallpaperController",
    @"TheAutoMationController",
    @"TheSpecialController",
    @"KeyBoardMainController",
    @"WCAvatarFrameMainController",
    @"ChatFunctionsinfoController",
    @"WCEhanceViewController",
    @"WCUIBeautifyController",
    @"WCCustomNameController",
    @"WCHideToolController",
    @"WCVersionFakeController",
    @"WCEnhanceToolController",
    @"WCAboutController",
};

/// 类名前缀黑名单（以这些前缀开头的 VC 也不支持任何圆角）
static NSString *const kSkipPrefixList[] = {
    @"WCRefine",
    @"WCPulse",
    @"Themebox",
    @"BubbleBox",
};

/// 获取静态 NSSet（skipListVCs）
static NSSet *skipListSet(void) {
    static NSSet *set = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSMutableSet *mutableSet = [NSMutableSet set];
        NSUInteger count = sizeof(kSkipListVCs) / sizeof(kSkipListVCs[0]);
        for (NSUInteger i = 0; i < count; i++) {
            [mutableSet addObject:kSkipListVCs[i]];
        }
        set = [mutableSet copy];
    });
    return set;
}

/// 检查类名是否匹配前缀黑名单
static BOOL isPrefixSkipped(NSString *cls) {
    static dispatch_once_t onceToken;
    static NSUInteger count = 0;
    dispatch_once(&onceToken, ^{
        count = sizeof(kSkipPrefixList) / sizeof(kSkipPrefixList[0]);
    });
    for (NSUInteger i = 0; i < count; i++) {
        if ([cls hasPrefix:kSkipPrefixList[i]]) {
            return YES;
        }
    }
    return NO;
}

@implementation CornerResponsibility

+ (BOOL)isListCornerResponsibleFor:(UIViewController *)vc {
    if (vc == nil) return NO;

    NSString *cls = NSStringFromClass([vc class]);
    if (cls.length == 0) return NO;

    // 1. 前缀黑名单
    if (isPrefixSkipped(cls)) {
        return NO;
    }

    // 2. 列表圆角黑名单（暂不支持圆角的页面）
    if ([skipListSet() containsObject:cls]) {
        return NO;
    }

    // 3. 默认归列表圆角
    return YES;
}

@end
```

**行数变化**: 158 行 → 72 行（-86 行）

---

## 代码量变化汇总

| 文件 | 修改前 | 修改后 | 减少 |
|------|--------|--------|------|
| `CornerResponsibility.h` | 39行 | 20行 | **-19行** |
| `CornerResponsibility.m` | 158行 | 72行 | **-86行** |
| `ListCornerRadiusHook.m` | 不变 | 不变 | **0行** |
| **合计** | **197行** | **92行** | **-105行** |

---

## 测试验证

### 功能测试

| 测试用例 | 操作 | 预期结果 |
|---------|------|---------|
| 1. 白名单列表VC | 进入 `MMTabBarController`（非黑名单VC） | `isListCornerResponsibleFor:` 返回 YES，列表 Cell 渲染圆角 |
| 2. 黑名单列表VC | 进入 `ContactInfoViewController` | `isListCornerResponsibleFor:` 返回 NO，列表 Cell 不渲染圆角 |
| 3. 前缀黑名单VC | 进入任何 `WCRefine*` VC | `isListCornerResponsibleFor:` 返回 NO |
| 4. nil参数 | 传 nil 给 `isListCornerResponsibleFor:` | 返回 NO，不崩溃 |
| 5. 回归测试 | 进入全部 40+ 个黑名单VC | 都返回 NO，与修改前行为一致 |

每个测试用例只需在 `ListCornerRadiusHook.m` 第152行断点，检查调用结果与预期是否一致。

### 回归测试

| 操作 | 受影响功能 | 验证方法 |
|------|-----------|---------|
| 进入微信聊天列表 | 列表Cell圆角渲染 | 观察Cell圆角、边距、边框样式 |
| 进入通讯录 | 通讯录列表圆角 | 观察列表样式 |
| 进入朋友圈 | 无圆角（WCTimeLineViewController在黑名单） | 确认没有圆角 |
| 进入各种设置页面 | 所有黑名单VC | 确认没有异常圆角渲染 |