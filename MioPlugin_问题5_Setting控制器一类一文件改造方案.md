# 问题5 改造方案：Setting 控制器一类一文件重构

> **关联文档**: [MioPlugin_架构深度分析报告.md](file:///www/wwwroot/ios/MioPlugin_架构深度分析报告.md)  
> **改造目标**: 将 Setting 页面的所有 Controller 从"多类混杂在一个文件"彻底改为 **一个 Controller 一个 `.h` + 一个 `.m`**  
> **方案类型**: 终极方案（结构化重构，非补丁）  
> **说明**: 本文档仅提供改造方案，不涉及实际代码修改。

---

## 一、现状分析

### 1.1 当前文件结构

```
Settings/
├── Common/
│   ├── SettingController.h       ← ★ 问题1: 声明了 10 个 Controller 接口
│   ├── SettingCategoryController.h/.m   ← 基类
│   └── WPBorderLayer.h/.m
│
└── Controllers/
    ├── SettingController.m       ← ★ 问题2: 实现 SettingController + SettingAboutController
    ├── SettingGeneralFunctionController.m  ← ★ 问题3: 实现 GeneralFunction + LayoutFunction
    ├── SettingRevokeController.m           ← 有 .m 无 .h
    ├── SettingAvatarHideController.m       ← 有 .m 无 .h
    ├── SettingRedEnvelopController.h/.m
    ├── SettingCornerRadiusController.h/.m
    ├── SettingListCornerRadiusController.h/.m
    ├── SettingCardBackgroundController.h/.m
    ├── SettingMessageTimeController.h/.m
    ├── SettingChatTopBarController.h/.m
    ├── ChatTopBarBlacklistEditorVC.h/.m
    └── MioTweakGroupSelectsController.h/.m
```

### 1.2 核心问题

| 问题 | 具体表现 | 违反原则 |
|------|---------|---------|
| **一个 .h 文件装 10 个类** | `SettingController.h` 声明了 SettingController、About、GeneralFunction、LayoutFunction、Revoke、Unread、Appearance、Notify、AvatarHide、RedEnvelop | **违反"一类一文件"** |
| **一个 .m 文件实现两个类** | `SettingController.m` = SettingController + SettingAboutController，用 `_isAboutPage` 做分支 | **违反"一类一文件"** |
| **一个 .m 文件实现两个类** | `SettingGeneralFunctionController.m` = GeneralFunction + LayoutFunction，用 `_isLayoutPage` 做分支 | **违反"一类一文件"** |
| **3 个类有声明无实现** | SettingUnreadController、SettingAppearanceController、SettingNotifyController 只声明在 .h 中，无 .m 文件，**从未被使用** | **死代码** |
| **5 个类有 .m 无 .h** | Revoke、AvatarHide、GeneralFunction、LayoutFunction、RedEnvelop 的 @interface 藏在 SettingController.h 中 | **缺乏独立头文件** |

### 1.3 混乱导致的后果

1. **寻路困难**：想改 `SettingLayoutFunctionController` 的实现，需要知道它在 `SettingGeneralFunctionController.m` 中，而不是同名的 `SettingLayoutFunctionController.m` 中
2. **初始化逻辑脆弱**：用 `[self isKindOfClass:]` 在 `init` 中设置分支标志，子类化时容易出错
3. **新增困惑**：新增一个 Setting 页面时，不知道该在哪个文件加、该不该在 SettingController.h 加声明
4. **导入膨胀**：任何用到这些 Controller 的地方（MioModuleRegistry、SettingEntryHook、WPUIVC 等）都 `#import "SettingController.h"`，无形中引入了 10 个类

---

## 二、改造方案：一类一文件

### 2.1 目标文件结构

```
Settings/
├── Common/
│   ├── SettingCategoryController.h/.m   ← 基类（不变）
│   └── WPBorderLayer.h/.m              ←（不变）
│
└── Controllers/
    ├── SettingController.h/.m            ← 只含 SettingController
    ├── SettingAboutController.h/.m       ← ★ 新增: 从 SettingController.m 拆出
    ├── SettingGeneralFunctionController.h/.m  ← ★ 新增 .h, 从混合 .m 拆出
    ├── SettingLayoutFunctionController.h/.m   ← ★ 新增: 从混合 .m 拆出
    ├── SettingRevokeController.h/.m           ← ★ 新增 .h
    ├── SettingAvatarHideController.h/.m       ← ★ 新增 .h
    ├── SettingRedEnvelopController.h/.m       ←（已有 .h/.m，不变）
    ├── SettingCornerRadiusController.h/.m     ←（不变）
    ├── SettingListCornerRadiusController.h/.m ←（不变）
    ├── SettingCardBackgroundController.h/.m   ←（不变）
    ├── SettingMessageTimeController.h/.m      ←（不变）
    ├── SettingChatTopBarController.h/.m       ←（不变）
    ├── ChatTopBarBlacklistEditorVC.h/.m       ←（不变）
    └── MioTweakGroupSelectsController.h/.m    ←（不变）
```

**删除**：
- `SettingController.h`（旧的大杂烩文件）
- `SettingController.m` 中 `SettingAboutController` 的 `@implementation` 代码块
- `SettingGeneralFunctionController.m` 中 `SettingLayoutFunctionController` 的 `@implementation` 代码块
- SettingUnreadController、SettingAppearanceController、SettingNotifyController 三个死类声明

### 2.2 变更总览

| 操作 | 文件 | 
|------|------|
| **删除** | `Settings/Common/SettingController.h` |
| **新增** | `Settings/Controllers/SettingController.h` |
| **新增** | `Settings/Controllers/SettingAboutController.h` |
| **新增** | `Settings/Controllers/SettingGeneralFunctionController.h` |
| **新增** | `Settings/Controllers/SettingLayoutFunctionController.h` |
| **新增** | `Settings/Controllers/SettingRevokeController.h` |
| **新增** | `Settings/Controllers/SettingAvatarHideController.h` |
| **改造** | `SettingController.m` → 只保留 SettingController，移除 AboutController 代码 |
| **改造** | `SettingGeneralFunctionController.m` → 只保留 GeneralFunction，移除 LayoutFunction 代码 |
| **新增** | `SettingAboutController.m` → SettingAboutController 独立实现（改造自旧分支代码） |
| **新增** | `SettingLayoutFunctionController.m` → LayoutFunctionController 独立实现（改造自旧分支代码） |
| **改导入** | `MioModuleRegistry.m` → 原 `#import "SettingController.h"` 拆分为各类独立 .h |
| **改导入** | `SettingEntryHook.m`、`WPUIVC.m` → 同类处理 |
| **改导入** | `SettingRevokeController.m`、`SettingAvatarHideController.m`、`SettingRedEnvelopController.m`、`SettingGeneralFunctionController.m`、`SettingController.m` | 

---

## 三、各文件详细改造

### 3.1 建立独立头文件

所有新增的头文件结构相同：

```objc
// ── SettingController.h（新建，只含 SettingController）──
#import "SettingCategoryController.h"

@interface SettingController : SettingCategoryController
@end
```

```objc
// ── SettingAboutController.h（新建）──
#import "SettingCategoryController.h"

@interface SettingAboutController : SettingCategoryController
@end
```

```objc
// ── SettingGeneralFunctionController.h（新建）──
#import "SettingCategoryController.h"

@interface SettingGeneralFunctionController : SettingCategoryController
- (void)buildUI;   // 公开给外部调用的 UI 刷新方法
@end
```

```objc
// ── SettingLayoutFunctionController.h（新建）──
#import "SettingCategoryController.h"

@interface SettingLayoutFunctionController : SettingCategoryController
- (void)onAvatarHideTap;    // 导航到隐藏头像页
@end
```

```objc
// ── SettingRevokeController.h（新建）──
#import "SettingCategoryController.h"

@interface SettingRevokeController : SettingCategoryController
@end
```

```objc
// ── SettingAvatarHideController.h（新建）──
#import "SettingCategoryController.h"

@interface SettingAvatarHideController : SettingCategoryController
@end
```

### 3.2 拆分 SettingGeneralFunctionController.m

这是改动量最大的文件。当前它在一个 .m 中用 `_isLayoutPage` 分支控制两个类的行为。

**改造核心思路**：把分支逻辑化为两个独立类，每个类只做自己的事。

```objc
// ── 改造前: SettingGeneralFunctionController.m ──

@implementation SettingLayoutFunctionController
- (void)onAvatarHideTap {
    SettingAvatarHideController *vc = [[SettingAvatarHideController alloc] init];
    [self.navigationController pushViewController:vc animated:YES];
}
@end

@implementation SettingGeneralFunctionController {
    BOOL _isLayoutPage;                   // ← 分支标志，脆弱
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _isLayoutPage = [self isKindOfClass:[SettingLayoutFunctionController class]];
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    if (_isLayoutPage) {
        self.title = @"界面布局";
        [self buildUI];
        return;
    }
    self.title = @"通用功能";
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    [self buildUI];
}

- (void)buildUI {
    // 清理
    for (UIView *v in self.contentView.subviews) [v removeFromSuperview];

    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 0;

    if (_isLayoutPage) {
        // ★ 布局页专属 UI
        UIView *group = [self addTableGroupAtY:y width:w];
        CGFloat cy = 0;
        cy = [self addNavRowInGroup:group title:@"隐藏头像" ... action:@selector(onAvatarHideTap) ...];
        y = [self finishGroup:group atY:y height:cy];
    }

    // ★ 通用功能 UI（两页都有）
    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;
    cy = [self addNavRowInGroup:group title:@"消息防撤回" ...];
    cy = [self addSeparatorInGroup:group cy:cy width:w];
    cy = [self addSwitchRowInGroup:group title:@"启用一键已读消息" key:@"clearUnreadEnabled" ...];
    // ... 更多公共行
    y = [self finishGroup:group atY:y height:cy];

    self.contentView.frame = ...;
    self.scrollView.contentSize = ...;
}
@end


// ── 改造后: SettingGeneralFunctionController.m（只含通用功能）──

#import "SettingGeneralFunctionController.h"
// 只 import 自己需要的模块
#import "../../Modules/Revoke/RevokeConfig.h"
#import "../../Modules/Unread/ClearUnreadConfig.h"
#import "../../Modules/Joker/JokerConfig.h"
#import "../../Modules/GroupExit/GroupExitConfig.h"
#import "../../Modules/MessageTime/MessageTimeConfig.h"
#import "../../Core/LogManager.h"
#import "SettingRevokeController.h"
#import "SettingMessageTimeController.h"

@implementation SettingGeneralFunctionController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"通用功能";
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    [self buildUI];
}

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) [v removeFromSuperview];

    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 0;

    // ===== 通用功能组 =====
    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    cy = [self addNavRowInGroup:group
                         title:@"消息防撤回"
                      subtitle:[RevokeConfig shared].preventRecall ? @"已开启" : @"已关闭"
                           tag:400
                        action:@selector(onRevokeSettingTap)
                            cy:cy width:w];

    cy = [self addSeparatorInGroup:group cy:cy width:w];

    cy = [self addSwitchRowInGroup:group
                            title:@"启用一键已读消息"
                             desc:nil
                              key:@"clearUnreadEnabled"
                             isOn:[ClearUnreadConfig shared].clearUnreadEnabled
                               cy:cy width:w];

    cy = [self addSeparatorInGroup:group cy:cy width:w];

    cy = [self addSwitchRowInGroup:group
                            title:@"启用修改文字(小丑功能)"
                             desc:nil
                              key:@"enableJoker"
                             isOn:[JokerConfig shared].enableJoker
                               cy:cy width:w];

    cy = [self addSeparatorInGroup:group cy:cy width:w];

    cy = [self addSwitchRowInGroup:group
                            title:@"启用退群检测"
                             desc:nil
                              key:@"enableGroupExitMonitor"
                             isOn:[GroupExitConfig shared].enableGroupExitMonitor
                               cy:cy width:w];

    cy = [self addSeparatorInGroup:group cy:cy width:w];

    NSString *timeStatus = [MessageTimeConfig shared].showMessageTime ? @"已开启" : @"已关闭";
    cy = [self addNavRowInGroup:group
                         title:@"显示消息时间"
                      subtitle:timeStatus
                           tag:300
                        action:@selector(onMessageTimeSettingTap)
                            cy:cy width:w];

    y = [self finishGroup:group atY:y height:cy];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

- (void)onMessageTimeSettingTap {
    SettingMessageTimeController *vc = [[SettingMessageTimeController alloc] init];
    [self.navigationController pushViewController:vc animated:YES];
}

- (void)onRevokeSettingTap {
    SettingRevokeController *vc = [[SettingRevokeController alloc] init];
    [self.navigationController pushViewController:vc animated:YES];
}

@end
```

```objc
// ── 改造后: SettingLayoutFunctionController.m（新建，只含界面布局）──

#import "SettingLayoutFunctionController.h"
// 只 import 自己的模块
#import "SettingAvatarHideController.h"
#import "../../Core/LogManager.h"

@implementation SettingLayoutFunctionController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"界面布局";
    [self buildUI];
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    [self buildUI];
}

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) [v removeFromSuperview];

    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 0;

    // ===== 界面布局组 =====
    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    cy = [self addNavRowInGroup:group
                         title:@"隐藏头像"
                      subtitle:@"私聊/群聊/公众号"
                           tag:500
                        action:@selector(onAvatarHideTap)
                            cy:cy width:w];

    y = [self finishGroup:group atY:y height:cy];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

- (void)onAvatarHideTap {
    SettingAvatarHideController *vc = [[SettingAvatarHideController alloc] init];
    [self.navigationController pushViewController:vc animated:YES];
}

@end
```

### 3.3 拆分 SettingController.m

当前 `SettingController.m` 用一个 `_isAboutPage` 标志来区分 SettingController（主页）和 SettingAboutController（关于页）。

```objc
// ── 改造后: SettingController.m（只含主页）──

#import "SettingController.h"
#import "../../Config/Constants.h"
#import "../../Config/WPColors.h"
#import "../../Core/LogManager.h"

@implementation SettingController

- (void)viewDidLoad {
    WPLog(@"Setting", @"[UI] SettingController viewDidLoad 开始");
    @try {
        [super viewDidLoad];
        self.title = @"Mio助手";
        
        CGFloat w = [UIScreen mainScreen].bounds.size.width;
        CGFloat y = 0;

        // ===== Hero 卡片 =====
        UIView *heroCard = [[UIView alloc] initWithFrame:CGRectMake(16, y, w - 32, 130)];
        heroCard.backgroundColor = WPCardBackgroundColor();
        heroCard.layer.cornerRadius = 10;
        if (@available(iOS 13.0, *)) heroCard.layer.cornerCurve = kCACornerCurveContinuous;
        heroCard.clipsToBounds = YES;
        [self.contentView addSubview:heroCard];

        UIView *avatar = [[UIView alloc] initWithFrame:CGRectMake((w - 32 - 80) / 2, 20, 80, 80)];
        avatar.backgroundColor = [UIColor colorWithRed:0.851 green:0.851 blue:0.859 alpha:1.0];
        avatar.layer.cornerRadius = 40;
        [heroCard addSubview:avatar];

        UILabel *heroName = [[UILabel alloc] initWithFrame:CGRectMake(0, 108, w - 32, 26)];
        heroName.text = @"Mio助手";
        heroName.font = [UIFont systemFontOfSize:22 weight:UIFontWeightBold];
        heroName.textColor = WPAccentColor();
        heroName.textAlignment = NSTextAlignmentCenter;
        [heroCard addSubview:heroName];
        y += 146;

        y = [self addSectionHeader:@"功能列表" y:y width:w];

        UILabel *footer = [[UILabel alloc] initWithFrame:CGRectMake(0, y + 12, w, 40)];
        footer.text = @"Mio助手 © 2024 ~ 2026\nDeveloped with <3\nAll Rights Reserved";
        footer.font = [UIFont systemFontOfSize:12];
        footer.textColor = WPTextTertiaryColor();
        footer.textAlignment = NSTextAlignmentCenter;
        footer.numberOfLines = 3;
        [self.contentView addSubview:footer];

        self.contentView.frame = CGRectMake(0, 0, w, y + 60);
        self.scrollView.contentSize = CGSizeMake(w, y + 60);
        WPLog(@"Setting", @"[UI] SettingController viewDidLoad 完成");
    } @catch (NSException *e) {
        WPLog(@"Setting", @"[UI] SettingController viewDidLoad 异常: %@ - %@", e.name, e.reason);
    }
}

@end
```

```objc
// ── 改造后: SettingAboutController.m（新建）──

#import "SettingAboutController.h"
#import "../../Config/Constants.h"
#import "../../Config/WPColors.h"
#import "../../Core/LogManager.h"

/// 关于页内部使用的架构行组件
@interface _AboutArchRow : NSObject
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *desc;
@end

@implementation _AboutArchRow
@end

@implementation SettingAboutController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"关于";
    [self loadAboutView];
}

- (void)loadAboutView {
    CGFloat w = [UIScreen mainScreen].bounds.size.width;
    CGFloat y = 0;

    // ===== Hero 卡片 =====
    UIView *heroCard = [[UIView alloc] initWithFrame:CGRectMake(16, y, w - 32, 120)];
    heroCard.backgroundColor = WPCardBackgroundColor();
    heroCard.layer.cornerRadius = 10;
    if (@available(iOS 13.0, *)) heroCard.layer.cornerCurve = kCACornerCurveContinuous;
    heroCard.clipsToBounds = YES;
    [self.contentView addSubview:heroCard];

    UILabel *heroName = [[UILabel alloc] initWithFrame:CGRectMake(0, 24, w - 32, 26)];
    heroName.text = @"Mio助手";
    heroName.font = [UIFont systemFontOfSize:22 weight:UIFontWeightBold];
    heroName.textColor = WPAccentColor();
    heroName.textAlignment = NSTextAlignmentCenter;
    [heroCard addSubview:heroName];

    UILabel *heroVersion = [[UILabel alloc] initWithFrame:CGRectMake(0, 54, w - 32, 18)];
    heroVersion.text = [NSString stringWithFormat:@"v%@", kPluginVersion];
    heroVersion.font = [UIFont systemFontOfSize:13];
    heroVersion.textColor = [UIColor colorWithRed:0.4 green:0.8 blue:0.451 alpha:1.0];
    heroVersion.textAlignment = NSTextAlignmentCenter;
    [heroCard addSubview:heroVersion];

    UILabel *heroDesc = [[UILabel alloc] initWithFrame:CGRectMake(20, 76, w - 52, 34)];
    heroDesc.text = @"模块化插件框架，支持防撤回、未读清零、外观自定义等功能";
    heroDesc.font = [UIFont systemFontOfSize:13];
    heroDesc.textColor = WPTextTertiaryColor();
    heroDesc.textAlignment = NSTextAlignmentCenter;
    heroDesc.numberOfLines = 2;
    [heroCard addSubview:heroDesc];
    y += 136;

    y = [self addSectionHeader:@"架构" y:y width:w];
    UIView *archGroup = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;
    NSArray *modules = @[
        @"RevokeHook", @"防撤回",
        @"ClearUnreadHook", @"未读清零",
        @"HookEngine", @"Hook引擎",
        @"MioPlugin", @"配置中心"
    ];

    for (NSUInteger i = 0; i < modules.count; i += 2) {
        if (i > 0) cy = [self addSeparatorInGroup:archGroup cy:cy width:w];
        cy = [self addArchRowInGroup:archGroup name:modules[i] desc:modules[i+1] cy:cy width:w];
    }
    y = [self finishGroup:archGroup atY:y height:cy];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

- (CGFloat)addArchRowInGroup:(UIView *)group name:(NSString *)name desc:(NSString *)desc cy:(CGFloat)cy width:(CGFloat)w {
    CGFloat gw = w - 16 * 2;
    UILabel *nl = [[UILabel alloc] initWithFrame:CGRectMake(16 + 10, cy + 4, 140, 36)];
    nl.text = name;
    nl.font = [UIFont systemFontOfSize:15 weight:UIFontWeightMedium];
    if (@available(iOS 13.0, *)) nl.textColor = [UIColor labelColor];
    else nl.textColor = [UIColor blackColor];
    [group addSubview:nl];

    UILabel *dl = [[UILabel alloc] initWithFrame:CGRectMake(gw - 16 - 140, cy + 4, 140, 36)];
    dl.text = desc;
    dl.font = [UIFont systemFontOfSize:13];
    if (@available(iOS 13.0, *)) dl.textColor = [UIColor secondaryLabelColor];
    else dl.textColor = [UIColor colorWithRed:0.56 green:0.56 blue:0.58 alpha:1.0];
    dl.textAlignment = NSTextAlignmentRight;
    [group addSubview:dl];
    return cy + 44;
}

@end
```

---

## 四、导入关系更新

### 4.1 哪些文件需要改 import

| 文件 | 旧 `#import` | 新 `#import` |
|------|-------------|-------------|
| [MioModuleRegistry.m](file:///www/wwwroot/ios/MioPlugin/Registry/MioModuleRegistry.m) | `#import "../Settings/Common/SettingController.h"` | `#import "../Settings/Controllers/SettingGeneralFunctionController.h"`<br>`#import "../Settings/Controllers/SettingLayoutFunctionController.h"`<br>`#import "../Settings/Controllers/SettingListCornerRadiusController.h"`<br>`#import "../Settings/Controllers/SettingCardBackgroundController.h"`<br>`#import "../Settings/Controllers/SettingRedEnvelopController.h"`<br>`#import "../Settings/Controllers/SettingAboutController.h"` |
| [SettingEntryHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/SettingEntry/SettingEntryHook.m) | `#import "../../Settings/Common/SettingController.h"` | `#import "../../Settings/Controllers/SettingRevokeController.h"`（或它实际用到的类，需检查） |
| [WPUIVC.m](file:///www/wwwroot/ios/MioPlugin/Modules/SettingEntry/WPUIVC.m) | `#import "../../Settings/Common/SettingController.h"` | `#import "../../Settings/Controllers/SettingRevokeController.h"`（或实际用到的类） |
| [SettingController.m](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingController.m) | `#import "../Common/SettingController.h"` | `#import "SettingController.h"`（当前目录下） |
| [SettingGeneralFunctionController.m](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingGeneralFunctionController.m) | `#import "../Common/SettingController.h"` | `#import "SettingGeneralFunctionController.h"` |
| [SettingRevokeController.m](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingRevokeController.m) | `#import "../Common/SettingController.h"` | `#import "SettingRevokeController.h"` |
| [SettingAvatarHideController.m](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingAvatarHideController.m) | `#import "../Common/SettingController.h"` | `#import "SettingAvatarHideController.h"` |
| [SettingRedEnvelopController.m](file:///www/wwwroot/ios/MioPlugin/Settings/Controllers/SettingRedEnvelopController.m) | `#import "../Common/SettingController.h"` | `#import "SettingRedEnvelopController.h"` |

### 4.2 被删除的 3 个死类

不再在任何地方引用：

- `SettingUnreadController` — 无 .m，无任何代码引用
- `SettingAppearanceController` — 无 .m，无任何代码引用
- `SettingNotifyController` — 无 .m，无任何代码引用

它们仅存在于旧 `SettingController.h` 中，删除该文件即自然移除。

---

## 五、改造前后对比

### 5.1 文件变化

| 指标 | 改造前 | 改造后 |
|------|:----:|:----:|
| .h 文件数 | 7 个（含 1 个大杂烩） | **12 个**（每个类独立） |
| .m 文件数 | 14 个（2 个混入多类） | **16 个**（均为单类） |
| 类声明文件 | 1 个 .h 含 10 个 @interface | 各 .h 含 1 个 @interface |
| 死类声明 | **3 个**（Unread, Appearance, Notify） | **0 个** |

### 5.2 代码复杂度变化

| 维度 | 改造前 | 改造后 |
|------|:----:|:----:|
| `_isAboutPage` / `_isLayoutPage` 分支标志 | **2 个** | **0 个** |
| 一个 .m 中 `@implementation` 块数 | 2 处超 1 | **全部为 1** |
| 初始化陷阱 | `isKindOfClass:` 判断父类/子类 | **不需要**（每个类独立 init） |

---

## 六、执行步骤

### Step 1: 新建 6 个头文件

```bash
touch Settings/Controllers/SettingController.h
touch Settings/Controllers/SettingAboutController.h
touch Settings/Controllers/SettingGeneralFunctionController.h
touch Settings/Controllers/SettingLayoutFunctionController.h
touch Settings/Controllers/SettingRevokeController.h
touch Settings/Controllers/SettingAvatarHideController.h
```

写入 3.1 节定义的简化 @interface。

### Step 2: 拆分 SettingGeneralFunctionController.m

1. 保留 `SettingGeneralFunctionController.m`，删除 `SettingLayoutFunctionController` 的 `@implementation` 块
2. 删除 `_isLayoutPage` 分支变量、分支判断逻辑
3. 删除 `-onAvatarHideTap` 方法
4. 删除 `if (_isLayoutPage)` 分支内的 UI 构建代码
5. 更新 import 为只 import GeneralFunction 所需的模块
6. 新建 `SettingLayoutFunctionController.m`，写入 LayoutFunction 的完整实现

### Step 3: 拆分 SettingController.m

1. 保留 `SettingController.m`，删除 `SettingAboutController` 的 `@implementation` 块
2. 删除 `_isAboutPage` 分支变量、分支判断逻辑、`-loadAboutView` 方法
3. 更新 import
4. 新建 `SettingAboutController.m`，写入 AboutController 完整实现

### Step 4: 更新所有 import 路径

逐一修改 4.1 表中的 8 个文件。

### Step 5: 删除旧文件

```bash
rm Settings/Common/SettingController.h
```

### Step 6: 编译验证

```bash
make clean && make
```

预期可能出现的错误及修复：

```
error: 'SettingController.h' file not found
→ 检查 SettingController.m 的第一行 import，改为 #import "SettingController.h"
```

```
error: 'SettingGeneralFunctionController' is unavailable
→ 检查 MioModuleRegistry.m 是否已改为 import "SettingGeneralFunctionController.h"
```

```
warning: 'SettingUnreadController' is deprecated / undefined
→ 确认代码中没有地方引用它，如果有则替换
```

---

## 七、测试方案

### 第 1 层：编译验证

```bash
make clean && make
```

零错误零 warning 为通过。

### 第 2 层：页面导航测试

安装到设备后逐页检查：

| 页面 | 入口操作 | 预期 |
|------|---------|------|
| Mio助手主页 | 微信 → 我 → 设置 → Mio助手 | 正常显示 Hero 卡片 + 功能列表 |
| 关于页 | 导航到关于页 | 显示版本号 + 架构信息 |
| 通用功能 | 点击"功能列表"中的通用功能 | 显示防撤回、未读、小丑、退群等行 |
| 界面布局 | 点击"界面布局" | 显示隐藏头像导航行 |
| 防撤回设置 | 点击"消息防撤回" | 进入防撤回设置页 |
| 隐藏头像 | 点击"隐藏头像" | 进入隐藏头像设置页 |
| 红包设置 | 点击红包相关行 | 进入红包设置页 |
| 颜色选择器 | 进入任何有颜色的设置页 | 颜色选择器正常打开 |

### 第 3 层：导航返回验证

```
1. Mio主页 → 通用功能 → 防撤回设置 → 返回 → 回到通用功能
2. 通用功能 → 返回 → 回到 Mio主页
3. 所有返回路径不崩溃
```

### 第 4 层：功能逻辑验证

```
1. 在通用功能页开关"修改文字" → 回到微信长按消息 → 功能生效
2. 在通用功能页开关"退群检测" → 功能生效
3. 在界面布局 → 进入隐藏头像页 → 修改设置 → 回到微信 → 头像被隐藏
```

---

## 八、设计决策说明

### 8.1 SettingLayoutFunctionController 为什么保留为独立类？

在旧代码中，它和 GeneralFunction 共享同一个 `buildUI` 方法（两页都显示通用功能行）。拆分为独立类后，LayoutFunction 可以只展示"界面布局"相关的 UI 行（隐藏头像、净化、附件布局等），而 GeneralFunction 只展示功能开关。

这是合理的拆分——两页面向不同用户需求，UI 内容不同，各自独立演进。

### 8.2 为什么会存在 3 个死类（Unread/Appearance/Notify）？

从命名看，它们可能是早期版本的占位或规划中的功能：
- `SettingUnreadController` — 可能曾计划独立未读设置页（但未读只用了一个开关，放在通用功能页）
- `SettingAppearanceController` — 可能曾计划外观设置页
- `SettingNotifyController` — 可能曾计划通知设置页

这些类从未实现过，也从未被引用，可以安全删除。

### 8.3 `SettingLayoutFunctionController` 被注册了 5 次

当前 MioModuleRegistry.m 中有 5 个模块（UIPurify、HideAvatar、AttachLayout、PlaceholderText、ChatTopBar）都指向同一个 `SettingLayoutFunctionController.class`。这是因为它们都在同一个设置页（界面布局）中管理。

拆分后这不受影响——5 个模块继续指向同一个 Controller 类。**之后的演进方向**可以是：

```
方式 A: 保持现状 → 5 个模块共享一个设置页（简单）
方式 B: 每个模块有自己的设置页 → 新建 4 个 Controller（灵活但复杂）
```

本方案采用方式 A，因为当前用户需求如此，不应过度设计。

---

### 8.4 `SettingAboutController` 的去向

旧代码中 AboutController 是 SettingController 的子类关系（`_isAboutPage = [self isKindOfClass:[SettingAboutController class]]`）。拆分为独立类后，AboutController 直接继承 SettingCategoryController，不再是 SettingController 的子类。

这使得：
- About 页的 UI 代码完全独立
- About 页的导航由 MioModuleRegistry 管理（与 FeatureModule 的 `controllerClass` 关联）
- SettingController 主页不再需要关心 About 页的存在

---

*文档结束*