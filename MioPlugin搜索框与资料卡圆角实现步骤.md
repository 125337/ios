# MioPlugin 搜索框圆角 & 资料卡圆角 实现步骤

> **日期**: 2026-06-02（二次验证修订版）
> **文档位置**: `/www/wwwroot/ios/MioPlugin搜索框与资料卡圆角实现步骤.md`
> **参考分析**: [微信优化搜索框与资料卡圆角深度分析.md](file:///www/wwwroot/ios/微信优化搜索框与资料卡圆角深度分析.md)
> **目标文件**: [ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m)

---

## 目录

1. [二次验证结论](#1-二次验证结论)
2. [微信优化资料卡功能职责划分](#2-微信优化资料卡功能职责划分)
3. [MioPlugin 现状分析](#3-mioplugin-现状分析)
4. [功能一: 搜索框圆角](#4-功能一-搜索框圆角)
5. [功能二: 资料卡圆角（Cell Hook 中处理的部分）](#5-功能二-资料卡圆角cell-hook-中处理的部分)
6. [改动总览](#6-改动总览)

---

## 1️⃣ 二次验证结论

### 1.1 搜索框圆角 — 验证通过 ✅

重新逐行确认 [FUN_00025530](file:///www/wwwroot/ios/插件/微信优化反编译最新/123456.c#L22883-L22926) 的反编译代码：

| 行号 | 反编译代码 | 还原含义 | 验证结果 |
|------|----------|---------|:-------:|
| L22893 | `(*DAT_0013ab90)();` | 调用原 `layoutSubviews` | ✅ |
| L22894-95 | `_objc_alloc(&NSUserDefaults)` + `initWithSuiteName:` | 创建 NSUserDefaults | ✅ |
| L22897 | `boolForKey:@"SearchBoxRoundCornerEnabled"` | 读取开关 | ✅ |
| L22899 | `integerForKey:@"SearchBoxCornerRadius"` | 读取圆角半径 | ✅ |
| L22900 | `lVar1 = 0x12` | 默认值 18 | ✅ |
| L22904 | `FUN_000c9c60(param_1)` | → `[self searchBoxContainer]` | ✅ 已确认函数映射 |
| L22910 | `FUN_000c71e0()` | → `[view layer]` | ✅ 已确认 |
| L22912 | `FUN_000cb180((double)lVar1)` | → `[layer setCornerRadius:radius]` | ✅ 已确认 |
| L22919 | `FUN_000cc8c0(auVar6, 1)` | → `[layer setMasksToBounds:YES]` | ✅ 已确认 |

**修正**: 之前分析认为是 `[self valueForKey:@"searchField"]`，实际是 `[self searchBoxContainer]`。`searchBoxContainer` 是 `WCSearchBar` 的一个属性，返回搜索框的容器视图（包含内部 UITextField）。设置圆角的对象是 **searchBoxContainer 的 layer**，不是 searchField 的 layer。

**还原后的精确伪代码**:
```objc
- (void)hooked_layoutSubviews {
    [orig layoutSubviews];
    
    NSUserDefaults *defaults = [[NSUserDefaults alloc] initWithSuiteName:@"com.cyansmoke.wechattweak"];
    if (![defaults boolForKey:@"SearchBoxRoundCornerEnabled"]) return;
    
    long radius = [defaults integerForKey:@"SearchBoxCornerRadius"];
    if (radius == 0) radius = 18;
    
    UIView *container = [self searchBoxContainer];
    if (container) {
        container.layer.cornerRadius = radius;
        container.layer.masksToBounds = YES;
    }
}
```

### 1.2 资料卡圆角 — 验证通过 ✅

重新逐行确认 [L9682-L9721](file:///www/wwwroot/ios/插件/微信优化反编译最新/123456.c#L9682-L9721)：

| 行号 | 反编译代码 | 还原含义 | 验证结果 |
|------|----------|---------|:-------:|
| L9683 | `integerForKey:@"MoreDiscoverListCornerRadius"` | 读取圆角半径（复用列表配置） | ✅ |
| L9684 | `lVar8 = 0x12` | 默认值 18 | ✅ |
| L9693 | `FUN_000c58c0(lVar6)` | → `[cell frame]` | ✅ |
| L9694 | `FUN_000cb900(lVar6)` | → `[cell setFrame:]` | ✅ |
| L9695-96 | `FUN_000c71e0(lVar6)` | → `[cell layer]` | ✅ |
| L9697 | `FUN_000cb180((double)lVar8)` | → `[layer setCornerRadius:radius]` | ✅ |
| L9701 | `FUN_000cc8c0(auVar21, 1)` | → `[layer setMasksToBounds:YES]` | ✅ |
| L9703 | `boolForKey:@"ProfileCardBorderEnabled"` | 读取边框开关 | ✅ |
| L9705 | `floatForKey:@"ProfileCardBorderWidth"` | 读取边框宽度 | ✅ |
| L9706 | `dVar19 = 2.0` | 默认边框宽度 2.0 | ✅ |
| L9710 | `FUN_0000e80c(LightKey, DarkKey)` | 获取边框颜色（支持深浅模式） | ✅ |
| L9712-13 | `FUN_000c71e0(lVar6)` | → `[cell layer]` | ✅ |
| L9714 | `FUN_000caa60(dVar19)` | → `[layer setBorderWidth:bw]` | ✅ |
| L9720 | `FUN_000ca9a0(auVar21, uVar14)` | → `[layer setBorderColor:color]` | ✅ |

**结论**: 资料卡圆角使用 `layer.cornerRadius` + `layer.borderWidth` + `layer.borderColor`，与搜索框一样使用原生属性，不需要 CAShapeLayer。

---

## 2️⃣ 微信优化资料卡功能职责划分

### 2.1 核心发现

微信优化的资料卡功能**不是全部在列表 Cell Hook 中实现的**，而是分布在**两个不同的 Hook/页面**中：

| 功能 | 所在 Hook | 设置页面 | MioPlugin 是否实现 |
|------|:---------:|:-------:|:-----------------:|
| **资料卡圆角** | 列表 Cell Hook | 页面 A (CSCellRoundCornerVC) | ✅ 本次实现 |
| **卡片背景色** | 列表 Cell Hook | 页面 A (CSCellRoundCornerVC) | ✅ 已有配置 |
| **隐藏右侧二维码** | 列表 Cell Hook | 页面 A (CSCellRoundCornerVC) | ✅ 已有配置 |
| **资料卡边框** | 列表 Cell Hook | 页面 B (CSListRoundCornerVC) | ✅ 本次实现 |
| **资料卡背景图** | **另一个 Hook** | 页面 B (CSListRoundCornerVC) | ❌ 不实现 |
| **资料卡高度** | **另一个 Hook** | 页面 B (CSListRoundCornerVC) | ❌ 不实现 |
| **资料卡间距** | **另一个 Hook** | 页面 B (CSListRoundCornerVC) | ❌ 不实现 |
| **隐藏资料卡** | **另一个 Hook** | 页面 B (CSListRoundCornerVC) | ❌ 不实现 |

### 2.2 列表 Cell Hook 中处理的资料卡功能（本次实现范围）

在列表 Cell 的 `layoutSubviews` Hook 中，资料卡**只处理以下功能**：

1. ✅ **资料卡圆角** — `layer.cornerRadius` + `masksToBounds`
2. ✅ **卡片背景色** — `CardBackgroundColorLight/Dark`
3. ✅ **隐藏右侧二维码** — `HideQRCodeButton`
4. ✅ **资料卡边框** — `layer.borderWidth` + `borderColor`

### 2.3 另一个 Hook 中处理的资料卡功能（不在本次范围）

以下功能在微信优化的**另一个 Hook** 中实现（[L6284-L6743](file:///www/wwwroot/ios/插件/微信优化反编译最新/123456.c#L6284-L6743)），**不在本次实现范围内**：

1. ❌ **资料卡背景图** — 需要图片加载/缓存/深浅模式切换/对齐/偏移，复杂度高
2. ❌ **资料卡高度调整** — 修改 Cell frame 可能与微信内部布局冲突
3. ❌ **资料卡间距调整** — 依赖 Cell margin 整体逻辑
4. ❌ **隐藏资料卡** — 需要清除圆角/边框/背景色，恢复原始外观

---

## 3️⃣ MioPlugin 现状分析

### 3.1 已有的配置项

从 [PluginConfig.h](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.h) 和 [SettingListCornerRadiusController.m](file:///www/root/ios/MioPlugin/Settings/Controllers/SettingListCornerRadiusController.m)：

| 配置项 | 类型 | 当前状态 | 说明 |
|-------|------|:-------:|------|
| `listSearchCornerRadius` | BOOL | ✅ 已有配置 | 搜索框圆角开关 |
| `listSearchBoxCornerRadius` | NSInteger | ✅ 已有配置 | 搜索框圆角半径 |
| `listHideRightQRCode` | BOOL | ✅ 已有配置 | 隐藏右侧二维码 |
| `listCardLightBgColor` | NSString | ✅ 已有配置 | 卡片浅色背景色 |
| `listCardDarkBgColor` | NSString | ✅ 已有配置 | 卡片深色背景色 |

### 3.2 缺少的配置项

| 配置项 | 类型 | 微信优化对应 | 说明 |
|-------|------|------------|------|
| `listProfileCardBorderEnabled` | BOOL | `ProfileCardBorderEnabled` | 资料卡边框开关 |
| `listProfileCardBorderWidth` | CGFloat | `ProfileCardBorderWidth` | 资料卡边框宽度 |
| `listProfileCardBorderLightColor` | NSString | `ProfileCardBorderColorLight` | 资料卡边框浅色 |
| `listProfileCardBorderDarkColor` | NSString | `ProfileCardBorderColorDark` | 资料卡边框深色 |
| `listProfileCardHeight` | CGFloat | `ProfileCardHeight` | 资料卡高度 |
| `listProfileCardSpacing` | CGFloat | `ProfileCardSpacing` | 资料卡间距 |

### 3.3 缺少的 Hook

| Hook | 微信优化 | MioPlugin | 说明 |
|------|---------|:---------:|------|
| `WCSearchBar.layoutSubviews` | ✅ FUN_00025530 | ❌ 未实现 | 搜索框圆角 |
| 资料卡识别 (MoreViewController + MMHeadImageView) | ✅ 在列表 Hook 内 | ❌ 未实现 | 资料卡圆角 |

### 3.4 现有代码结构

```
ListCornerRadiusHook.m
├── replaced_MMTableViewCell_layoutSubviews()   ← 唯一 Hook 入口
│   ├── 读取配置
│   ├── shouldSkipCorner(vc) 判断
│   ├── 设置 Cell margin
│   ├── 设置 Cell 背景色
│   ├── wp_applyStandardCorner / wp_applyCornerForContacts
│   └── cellView.layer.masksToBounds = YES
│
├── wp_applyStandardCorner()                    ← 标准 Cell 圆角
│   ├── position=0 (单行)
│   ├── position=1 (首行)
│   ├── position=2 (中间)
│   └── position=3 (末行)
│
├── wp_applyBorderAndBg()                       ← 边框+背景色
│
├── wp_buildUnifiedBorderLayer()                ← 统一边框路径
│
└── shouldSkipCorner()                          ← 排除名单
```

---

## 4️⃣ 功能一: 搜索框圆角

### 4.1 实现思路

微信优化 Hook 的是 `WCSearchBar.layoutSubviews`，在布局时设置 `searchBoxContainer.layer.cornerRadius` 和 `masksToBounds`。

MioPlugin 的做法应该类似，但需要注意：
1. MioPlugin 使用 Method Swizzling 而非 Substrate 的 `_MSHookMessageEx`
2. 配置从 `PluginConfig` 读取，不是 NSUserDefaults
3. 已有 `listSearchCornerRadius` (开关) 和 `listSearchBoxCornerRadius` (半径) 配置

### 5.2 改动步骤

#### 步骤 1: 在 ListCornerRadiusHook.m 中添加 Hook 函数

**位置**: [L270-L287](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L270-L287) 附近（`@implementation ListCornerRadiusHook` 区域内）

**添加代码**:

```objc
static void (*_orig_WCSearchBar_layoutSubviews)(id, SEL);

static void replaced_WCSearchBar_layoutSubviews(id self, SEL _cmd) {
    if (_orig_WCSearchBar_layoutSubviews) {
        _orig_WCSearchBar_layoutSubviews(self, _cmd);
    }

    PluginConfig *config = [PluginConfig shared];
    if (!config.listCornerRadiusEnabled || !config.listSearchCornerRadius) return;

    NSInteger radius = config.listSearchBoxCornerRadius;
    if (radius <= 0) radius = 18;

    UIView *container = nil;
    @try {
        container = [self valueForKey:@"searchBoxContainer"];
    } @catch (NSException *e) {
        return;
    }

    if (container) {
        container.layer.cornerRadius = radius;
        container.layer.masksToBounds = YES;
    }
}
```

**要点**:
- `searchBoxContainer` 是 `WCSearchBar` 的属性，返回搜索框容器视图
- 用 `@try/@catch` 包裹 `valueForKey:`，防止属性不存在时崩溃
- 圆角半径默认 18，与微信优化一致

#### 步骤 2: 在 initListCornerRadiusHook 中注册 Hook

**位置**: [L273-L287](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L273-L287)

**在现有 Hook 注册代码后面追加**:

```objc
+ (void)initListCornerRadiusHook {
    // ... 现有 MMTableViewCell Hook 代码 ...

    Class WCSearchBarClass = objc_getClass("WCSearchBar");
    if (WCSearchBarClass) {
        MSHookMessageEx(WCSearchBarClass,
            @selector(layoutSubviews),
            (IMP)replaced_WCSearchBar_layoutSubviews,
            (IMP *)&_orig_WCSearchBar_layoutSubviews
        );
        WPLog(@"ListCornerRadius", @"[OK] WCSearchBar::layoutSubviews");
    } else {
        WPLog(@"ListCornerRadius", @"[WARN] WCSearchBar class not found!");
    }
}
```

#### 步骤 3: 验证配置项已就绪

**已有配置**（无需改动）:
- `listSearchCornerRadius` (BOOL) — 开关 ✅
- `listSearchBoxCornerRadius` (NSInteger) — 半径 ✅

**已有设置界面**（无需改动）:
- [SettingListCornerRadiusController.m L38-L42](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingListCornerRadiusController.m#L38-L42) — 搜索框圆角开关 ✅
- [SettingListCornerRadiusController.m L97-L106](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingListCornerRadiusController.m#L97-L106) — 搜索框圆角半径输入 ✅

### 5.3 改动量

| 改动 | 位置 | 行数 |
|------|------|:----:|
| 新增 Hook 函数 | L270 附近 | ~20 行 |
| 注册 Hook | L287 后 | ~10 行 |
| **合计** | | **~30 行** |

### 5.4 测试验证

- [ ] 微信首页搜索框有圆角
- [ ] 圆角半径与配置一致（默认 18）
- [ ] 关闭开关后搜索框恢复原样
- [ ] 修改圆角半径后重启生效
- [ ] 搜索框功能正常（点击、输入、取消）
- [ ] 深色模式下搜索框圆角正常

---

## 5️⃣ 功能二: 资料卡圆角（Cell Hook 中处理的部分）

### 5.1 实现思路

微信优化在列表 Cell 圆角的主 Hook 中，通过识别 `MoreViewController` + `MMHeadImageView` 来特殊处理资料卡。资料卡使用 `layer.cornerRadius` + `layer.borderWidth` + `layer.borderColor` 原生属性。

**重要**: 根据职责划分（见 §2），在列表 Cell Hook 中，资料卡只处理以下 4 个功能：
1. 资料卡圆角
2. 卡片背景色
3. 隐藏右侧二维码
4. 资料卡边框

其他功能（背景图、高度、间距、隐藏资料卡）在微信优化的**另一个 Hook** 中处理，不在本次实现范围。

MioPlugin 的 `replaced_MMTableViewCell_layoutSubviews` 已经 Hook 了 `MMTableViewCell.layoutSubviews`，只需要在其中添加资料卡识别和处理逻辑。

### 4.2 改动步骤

#### 步骤 1: 在 PluginConfig 中添加资料卡边框配置项

**位置**: [PluginConfig.h](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.h)

**添加属性**:

```objc
@property (nonatomic, assign) BOOL listProfileCardBorderEnabled;
@property (nonatomic, assign) CGFloat listProfileCardBorderWidth;
@property (nonatomic, copy) NSString *listProfileCardBorderLightColor;
@property (nonatomic, copy) NSString *listProfileCardBorderDarkColor;
```

**位置**: [PluginConfig.m](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m) 的 `loadDefaults` 方法中

**添加默认值**:

```objc
_listProfileCardBorderEnabled = NO;
_listProfileCardBorderWidth = 2.0;
_listProfileCardBorderLightColor = @"#E5E5E5";
_listProfileCardBorderDarkColor = @"#3A3A3C";
```

#### 步骤 2: 在设置界面添加资料卡边框设置项

**位置**: [SettingListCornerRadiusController.m](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingListCornerRadiusController.m)

**在 `buildUI` 方法的 subBuilder block 中添加**（在"卡片深色模式背景色"之后）:

```objc
*ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

*ecy = [self addSubSwitchRowInGroup:expand
                              title:@"资料卡边框"
                                key:@"listProfileCardBorderEnabled"
                               isOn:cfg.listProfileCardBorderEnabled
                                 cy:*ecy width:w];
*ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

NSString *pcbwStr = cfg.listProfileCardBorderWidth > 0
    ? [NSString stringWithFormat:@"%.1f", cfg.listProfileCardBorderWidth] : nil;
*ecy = [self addInputRowInGroup:expand
                          title:@"资料卡边框宽度"
                            key:@"listProfileCardBorderWidth"
                          value:pcbwStr
                           hint:@"2.0"
                     alertTitle:@"设置资料卡边框宽度"
                   alertMessage:@"请输入边框宽度(0.5-5.0)"
                             cy:*ecy width:w];
*ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

*ecy = [self addColorRowInGroup:expand
                          title:@"资料卡边框浅色"
                            key:@"listProfileCardBorderLightColor"
                          value:cfg.listProfileCardBorderLightColor
                             cy:*ecy width:w];
*ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

*ecy = [self addColorRowInGroup:expand
                          title:@"资料卡边框深色"
                            key:@"listProfileCardBorderDarkColor"
                          value:cfg.listProfileCardBorderDarkColor
                             cy:*ecy width:w];
```

**同时更新 `switchChanged:` 方法**，在重启提示的 key 列表中添加 `listProfileCardBorderEnabled`:

```objc
if ([key isEqualToString:@"listCornerRadiusEnabled"]
    || [key isEqualToString:@"listSearchCornerRadius"]
    || [key isEqualToString:@"listCellBorder"]
    || [key isEqualToString:@"listHideRightQRCode"]
    || [key isEqualToString:@"listDisableLabelWidthAdjustment"]
    || [key isEqualToString:@"listMediaCornerEnabled"]
    || [key isEqualToString:@"listProfileCardBorderEnabled"]) {  // ★ 新增
    [MioRestartHelper showRestartAlertFromVC:self];
}
```

#### 步骤 3: 在 ListCornerRadiusHook.m 中添加资料卡处理函数

**位置**: [ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m) `@implementation` 区域内

**添加方法**:

```objc
+ (BOOL)wp_isProfileCard:(UIView *)cell {
    BOOL found = NO;
    for (UIView *subview in cell.subviews) {
        NSString *cn = NSStringFromClass([subview class]);
        if ([cn isEqualToString:@"MMHeadImageView"]) {
            found = YES;
            break;
        }
        for (UIView *sub2 in subview.subviews) {
            NSString *cn2 = NSStringFromClass([sub2 class]);
            if ([cn2 isEqualToString:@"MMHeadImageView"]) {
                found = YES;
                break;
            }
        }
        if (found) break;
    }
    return found;
}

+ (void)wp_applyProfileCardCorner:(UIView *)cell
                         cornerRadius:(NSInteger)radius
                          isDark:(BOOL)isDark {
    PluginConfig *config = [PluginConfig shared];

    cell.layer.cornerRadius = radius;
    cell.layer.masksToBounds = YES;

    UIColor *cardBg = [config colorFromHex:isDark
        ? config.listCardDarkBgColor : config.listCardLightBgColor];
    if (cardBg) {
        cell.backgroundColor = cardBg;
    }

    if (config.listProfileCardBorderEnabled) {
        CGFloat bw = config.listProfileCardBorderWidth;
        if (bw <= 0) bw = 2.0;

        UIColor *borderColor = [config colorFromHex:isDark
            ? config.listProfileCardBorderDarkColor
            : config.listProfileCardBorderLightColor];
        if (!borderColor) {
            borderColor = isDark
                ? [UIColor colorWithRed:0.25 green:0.25 blue:0.25 alpha:1.0]
                : [UIColor colorWithRed:0.9 green:0.9 blue:0.9 alpha:1.0];
        }

        cell.layer.borderWidth = bw;
        cell.layer.borderColor = borderColor.CGColor;
    } else {
        cell.layer.borderWidth = 0;
        cell.layer.borderColor = nil;
    }
}
```

#### 步骤 4: 在 replaced_MMTableViewCell_layoutSubviews 中添加资料卡判断

**位置**: [L155-L160](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L155-L160)（`shouldSkipCorner` 判断之后、调用原方法之前）

**添加资料卡识别逻辑**:

```objc
// 在 shouldSkipCorner 判断之后添加:

BOOL isMoreVC = [className isEqualToString:@"MoreViewController"];
if (isMoreVC && [ListCornerRadiusHook wp_isProfileCard:cellView]) {
    if (_orig_MMTableViewCell_layoutSubviews) {
        ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews)(self, _cmd);
    }

    BOOL isDark = NO;
    if (@available(iOS 13.0, *)) {
        isDark = (vc.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark);
    }

    NSInteger radius = (NSInteger)config.listCellCornerRadius;
    if (radius == 0) radius = 18;

    [ListCornerRadiusHook wp_applyProfileCardCorner:cellView
                                      cornerRadius:radius
                                           isDark:isDark];

    if (config.listHideRightQRCode) {
        [ListCornerRadiusHook wp_hideQRButtonInCell:cellView];
    }

    cellView.layer.masksToBounds = YES;
    return;
}
```

#### 步骤 5: 添加隐藏二维码按钮的辅助函数

**位置**: [ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m) `@implementation` 区域内

**添加方法**:

```objc
+ (void)wp_hideQRButtonInCell:(UIView *)cell {
    NSArray<UIView *> *subs = cell.subviews;
    for (UIView *sub in subs) {
        NSString *cn = NSStringFromClass([sub class]);
        if ([cn containsString:@"Button"]) {
            sub.hidden = YES;
        }
        [self wp_hideQRButtonInSubviews:sub.subviews];
    }
}

+ (void)wp_hideQRButtonInSubviews:(NSArray<UIView *> *)subviews {
    for (UIView *sub in subviews) {
        NSString *cn = NSStringFromClass([sub class]);
        if ([cn containsString:@"Button"]) {
            CGFloat x = sub.frame.origin.x;
            if (x > sub.superview.bounds.size.width * 0.7) {
                sub.hidden = YES;
            }
        }
        [self wp_hideQRButtonInSubviews:sub.subviews];
    }
}
```

### 4.3 改动量

| 改动 | 文件 | 行数 |
|------|------|:----:|
| 新增配置属性 | PluginConfig.h | +4 行 |
| 新增配置默认值 | PluginConfig.m | +4 行 |
| 新增设置界面项 | SettingListCornerRadiusController.m | +30 行 |
| 新增资料卡识别函数 | ListCornerRadiusHook.m | +25 行 |
| 新增资料卡圆角函数 | ListCornerRadiusHook.m | +30 行 |
| 新增隐藏二维码函数 | ListCornerRadiusHook.m | +20 行 |
| 修改 layoutSubviews Hook | ListCornerRadiusHook.m | +20 行 |
| 更新 switchChanged | SettingListCornerRadiusController.m | +1 行 |
| **合计** | | **~134 行** |

### 4.4 测试验证

- [ ] "我"页面资料卡有圆角
- [ ] 资料卡圆角半径与列表圆角一致
- [ ] 资料卡背景色使用卡片配置（不是 Cell 配置）
- [ ] 开启资料卡边框后显示边框
- [ ] 边框宽度和颜色与配置一致
- [ ] 关闭资料卡边框后边框消失
- [ ] 深色模式下资料卡正常
- [ ] 开启"隐藏右侧二维码"后资料卡右侧按钮隐藏
- [ ] 资料卡下方的列表 Cell 仍然正常（不受资料卡逻辑影响）
- [ ] 其他页面的列表不受影响

---

## 6️⃣ 改动总览

### 6.1 文件改动清单

| 文件 | 改动类型 | 行数 | 说明 |
|------|:-------:|:----:|------|
| [PluginConfig.h](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.h) | 修改 | +4 | 新增资料卡边框配置属性 |
| [PluginConfig.m](file:///www/wwwroot/ios/MioPlugin/Config/PluginConfig.m) | 修改 | +4 | 新增资料卡边框默认值 |
| [SettingListCornerRadiusController.m](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingListCornerRadiusController.m) | 修改 | +31 | 新增资料卡边框设置项 + switchChanged 更新 |
| [ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m) | 修改 | +105 | 搜索框 Hook + 资料卡识别/圆角/隐藏二维码 |

**总改动量**: ~144 行

### 6.2 实施顺序

```
Phase 1: 搜索框圆角（简单，独立）
├── 1. 添加 replaced_WCSearchBar_layoutSubviews 函数
├── 2. 在 initListCornerRadiusHook 中注册 Hook
└── 3. 测试验证

Phase 2: 资料卡圆角（中等，依赖 Phase 1 的配置结构）
├── 1. PluginConfig 添加配置属性
├── 2. SettingListCornerRadiusController 添加设置项
├── 3. ListCornerRadiusHook 添加资料卡识别和圆角函数
├── 4. replaced_MMTableViewCell_layoutSubviews 中添加资料卡分支
└── 5. 测试验证
```

### 6.3 风险评估

| 风险 | 可能性 | 影响 | 缓解措施 |
|------|:-----:|:----:|---------|
| `WCSearchBar` 类名在新版微信中变化 | 低 | 高 | Hook 注册时检查 class 是否存在，不存在则跳过 |
| `searchBoxContainer` 属性不存在 | 低 | 中 | 用 `@try/@catch` 包裹 |
| `MMHeadImageView` 类名变化 | 低 | 中 | 遍历 subviews 时找不到就跳过，不影响普通 Cell |
| 资料卡识别误判 | 中 | 中 | 同时检查 `MoreViewController` + `MMHeadImageView` + `cellHeight > 50` |
| 资料卡边框与 Cell 边框冲突 | 低 | 低 | 资料卡使用独立配置，互不影响 |
| 隐藏二维码误隐藏其他按钮 | 中 | 低 | 只隐藏 x > 70% 宽度的按钮 |

### 6.4 回退方案

每个 Phase 独立，可以单独回退：
- Phase 1 回退: 删除 `replaced_WCSearchBar_layoutSubviews` 和注册代码
- Phase 2 回退: 删除资料卡相关函数和 `isMoreVC` 分支

### 6.5 与微信优化的差异

| 对比项 | 微信优化 | MioPlugin (本方案) |
|-------|---------|-----------------|
| **搜索框圆角对象** | `searchBoxContainer` | `searchBoxContainer` (一致) |
| **搜索框圆角方式** | `layer.cornerRadius` | `layer.cornerRadius` (一致) |
| **资料卡识别** | `MoreViewController` + `MMHeadImageView` | `MoreViewController` + `MMHeadImageView` (一致) |
| **资料卡圆角方式** | `layer.cornerRadius` | `layer.cornerRadius` (一致) |
| **资料卡边框方式** | `layer.borderWidth` | `layer.borderWidth` (一致) |
| **资料卡圆角配置** | 复用 `MoreDiscoverListCornerRadius` | 复用 `listCellCornerRadius` (一致) |
| **资料卡边框配置** | 独立 `ProfileCardBorder*` | 独立 `listProfileCardBorder*` (一致) |
| **资料卡背景色** | 独立 `CardBackgroundColor*` | 复用 `listCardLightBgColor/DarkBgColor` (已有) |
| **资料卡背景图** | 支持 `ProfileCardBackground*` | ❌ 不实现（复杂度高，优先级低） |
| **资料卡高度调整** | 支持 `ProfileCardHeight` | ❌ 不实现（风险高，优先级低） |
| **资料卡间距调整** | 支持 `ProfileCardSpacing` | ❌ 不实现（依赖 Cell margin 逻辑） |
| **配置存储** | NSUserDefaults (suite) | PluginConfig (MMKV/plist) |

**不实现的功能及原因**:
- **资料卡背景图**: 需要处理图片加载、缓存、深浅模式切换、对齐方式等，复杂度高
- **资料卡高度调整**: 修改 Cell frame 可能与微信内部布局冲突
- **资料卡间距调整**: 依赖 Cell margin 的整体逻辑，单独处理资料卡间距可能导致布局异常
