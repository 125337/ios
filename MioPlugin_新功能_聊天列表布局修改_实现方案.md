# MioPlugin 实现方案：在"界面定制"下新增"修改布局"二级页面

> **目标**: 在 MioPlugin 的"界面定制"页面下，增加一个二级页面"修改布局"，提供两个子配置项  
> **功能来源**: 仿照黄白助手"修改布局"功能（仅含两个子配置：修改布局大小、修改聊天大小）  
> **注意**: 本功能与"头像框"完全独立，仅聚焦聊天列表 Cell 的字体大小和整体尺寸调整  
> **约束**: 仅提供方案，不涉及实际代码修改

---

## 一、MioPlugin 项目架构速览

### 1.1 "界面定制"页面的工作原理

MioPlugin 的"界面定制"页面由 [WPUIVC.m](file:///www/wwwroot/ios/MioPlugin/Modules/SettingEntry/WPUIVC.m) 实现，它继承自 `SettingCategoryController`。

**页面构建流程**：
```objc
// WPUIVC.m 的核心结构（line 18-86）

- (void)buildUI {
    // 1. 清空所有子视图
    // 2. 创建 Section Header
    // 3. 创建 TableGroup
    // 4. 遍历 items 数组，为每个 item 添加 NavRow
    NSArray *items = @[
        @[@"聊天顶栏", @(100)],
        @[@"附件布局", @(102)],
        @[@"文本占位", @(103)],
        // ...
    ];
    // 5. finishGroup
}

- (void)navigateTo:(UIButton *)sender {
    // 根据 sender.tag 跳转到对应 Controller
    switch (tag) {
        case 100: subVC = [[SettingChatTopBarController alloc] init]; break;
        case 102: subVC = [[NSClassFromString(@"WPUIAttachmentLayoutVC") alloc] init]; break;
        // ...
    }
    [self.navigationController pushViewController:subVC animated:YES];
}
```

### 1.2 功能模块注册机制

MioPlugin 使用 `MioModuleRegistry` 统一注册所有模块。每个模块包含 Config 类、Hook 类、Controller 类。

注册表示例（[MioModuleRegistry.m](file:///www/wwwroot/ios/MioPlugin/Registry/MioModuleRegistry.m)）：
```objc
[MioModuleDescriptor descriptorWithIdentifier:@"chatlayout"
                                        title:@"修改布局"
                                   configClass:[ChatLayoutConfig class]
                                   hookClasses:@[[ChatLayoutHook class]]
                               controllerClass:[SettingChatLayoutController class]
                                      subtitle:@"字体大小、聊天行高调整"
                                 sectionTitle:@"界面定制"],
```

### 1.3 配置管理机制

所有配置通过 `ConfigManager` + `ConfigDescriptor` 管理：

```objc
// Config 类需实现 +descriptors 方法
+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor descriptorWithKey:@"kChatLayoutFontSize"
                                      type:ConfigValueTypeFloat
                                  defaultValue:@(16.0f)],
        [ConfigDescriptor descriptorWithKey:@"kChatLayoutCellHeightAdjust"
                                      type:ConfigValueTypeFloat
                                  defaultValue:@(0.0f)],
    ];
}

// 读取配置
ChatLayoutConfig *config = [ChatLayoutConfig shared];
CGFloat fontSize = config.chatLayoutFontSize;

// 保存配置
config.chatLayoutFontSize = 18.0;
[[ConfigManager shared] saveAll];
```

---

## 二、新增文件清单

| 文件路径 | 类型 | 说明 |
|---------|:----:|------|
| `Modules/ChatLayout/ChatLayoutConfig.h/.m` | Config | 配置项定义（2 个 property） |
| `Modules/ChatLayout/ChatLayoutHook.h/.m` | Hook | 对 MMTableViewCell 的 setFrame:/layoutSubviews hook |
| `Modules/ChatLayout/SettingChatLayoutController.h/.m` | Controller | 修改布局的二级设置页面 |

**共 3 对文件（6 个）**，与现有模块结构完全一致。

---

## 三、Config 层：ChatLayoutConfig

### 3.1 配置项一览

| key | 类型 | 默认值 | 对应 UI 控件 | 对应黄白助手 |
|:----:|:----:|:-----:|:----------:|:----------:|
| `kChatLayoutFontSize` | Float | 16.0 | UISlider (12~24) | `editFontsetSizeLayout` |
| `kChatLayoutCellHeightAdjust` | Float | 0.0 | UISlider (-30~30) | "修改聊天大小"的配置 |

### 3.2 头文件结构

```objc
// ChatLayoutConfig.h
#import "ConfigModule.h"

@interface ChatLayoutConfig : NSObject <ConfigModule>

// 子配置1: 修改布局大小（消息字体大小）
@property (nonatomic, assign) CGFloat chatLayoutFontSize;       // 12 ~ 24，默认 16.0

// 子配置2: 修改聊天大小（Cell 高度调整）
@property (nonatomic, assign) CGFloat chatLayoutCellHeightAdjust; // -30 ~ 30，默认 0

@end
```

### 3.3 实现文件结构

```objc
// ChatLayoutConfig.m
@implementation ChatLayoutConfig

MIO_SINGLETON_IMPL(ChatLayoutConfig)

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        // 子配置1: 修改布局大小（对应黄白助手 editFontsetSizeLayout）
        [ConfigDescriptor descriptorWithKey:@"kChatLayoutFontSize"
                                      type:ConfigValueTypeFloat
                                  defaultValue:@(16.0f)],

        // 子配置2: 修改聊天大小（Cell 高度调整）
        [ConfigDescriptor descriptorWithKey:@"kChatLayoutCellHeightAdjust"
                                      type:ConfigValueTypeFloat
                                  defaultValue:@(0.0f)],
    ];
}

// 使用 @dynamic 让 ConfigManager 自动合成 property
@dynamic chatLayoutFontSize;
@dynamic chatLayoutCellHeightAdjust;

@end
```

---

## 四、Hook 层：ChatLayoutHook（核心）

### 4.1 Hook 逻辑总览

```
ChatLayoutHook.install()
  │
  ├─ 1. NSClassFromString(@"MMTableViewCell") → 获取目标类
  │
  ├─ 2. method_setImplementation(setFrame:) → hook_setFrame
  │     └─ 职责: 调整 Cell 高度（修改聊天大小）
  │
  └─ 3. method_setImplementation(layoutSubviews) → hook_layoutSubviews
        └─ 职责: 调整消息字体大小（修改布局大小）
```

> 使用 `method_setImplementation` 而非 `MSHookMessageEx`，与 MioPlugin 现有代码风格保持一致。

### 4.2 辅助方法：isInChatListView

```objc
/// 判断 Cell 是否在聊天列表中
/// 双重验证：superview 层级 + delegate 类型
static BOOL isInChatListView(id cell) {
    // 检查1: superview 是否为 UITableView
    UIView *superview = [cell superview];
    if (![superview isKindOfClass:[UITableView class]]) return NO;

    // 检查2: delegate 是否为聊天列表相关类
    UITableView *tv = (UITableView *)superview;
    id delegate = tv.delegate;
    if (!delegate) return NO;

    NSString *delegateClass = NSStringFromClass([delegate class]);
    if ([delegateClass hasPrefix:@"BaseMsgContent"] ||
        [delegateClass hasPrefix:@"Chat"] ||
        [delegateClass hasPrefix:@"MM"]) {
        return YES;
    }
    return NO;
}
```

### 4.3 hook_setFrame: — 实现"修改聊天大小"

```objc
static void (*orig_setFrame)(id, SEL, CGRect);

static void hook_setFrame(id self, SEL _cmd, CGRect frame) {
    // 1. 检查是否是聊天列表 Cell
    if (isInChatListView(self)) {
        // 2. 读取配置
        ChatLayoutConfig *config = [ChatLayoutConfig shared];

        // 3. 修改聊天大小：调整 Cell 高度
        CGFloat heightAdjust = config.chatLayoutCellHeightAdjust;
        if (fabs(heightAdjust) > 0.5) {  // 避免微小抖动
            frame.size.height += heightAdjust;
        }
    }

    // 4. 调用原始 setFrame:
    orig_setFrame(self, _cmd, frame);
}
```

### 4.4 hook_layoutSubviews — 实现"修改布局大小"

```objc
static void (*orig_layoutSubviews)(id, SEL);

static void hook_layoutSubviews(id self, SEL _cmd) {
    // 1. 调用原始 layoutSubviews（微信完成基础布局）
    orig_layoutSubviews(self, _cmd);

    // 2. 检查是否是聊天列表 Cell
    if (!isInChatListView(self)) return;

    // 3. 读取配置
    ChatLayoutConfig *config = [ChatLayoutConfig shared];
    CGFloat fontSize = config.chatLayoutFontSize;

    // 4. 修改布局大小：调整消息字体
    // 默认值 16.0 表示不做调整（与黄白助手逻辑一致）
    if (fabs(fontSize - 16.0) > 0.01) {
        // 遍历 contentView 中的 UILabel
        NSMutableArray *labels = [NSMutableArray array];
        [self collectLabelsInView:self.contentView into:labels];
        for (UILabel *label in labels) {
            UIFont *newFont = [label.font fontWithSize:fontSize];
            if (newFont) {
                label.font = newFont;
                [label sizeToFit];
            }
        }
    }
}

/// 递归收集所有 UILabel（处理嵌套子视图）
static void collectLabelsInView(UIView *view, NSMutableArray *labels) {
    for (UIView *subview in view.subviews) {
        if ([subview isKindOfClass:[UILabel class]]) {
            [labels addObject:(UILabel *)subview];
        }
        if (subview.subviews.count > 0) {
            collectLabelsInView(subview, labels);
        }
    }
}
```

> **注意**: 这里使用递归遍历代替黄白助手的单层遍历，因为微信聊天 Cell 中的 UILabel 可能嵌套在多层子视图中。

### 4.5 Hook 安装方法

```objc
@implementation ChatLayoutHook

+ (void)install {
    // 1. 获取目标类
    Class cellClass = NSClassFromString(@"MMTableViewCell");
    if (!cellClass) {
        WPLog(@"ChatLayout", @"ChatLayoutHook: MMTableViewCell not found");
        return;
    }

    // 2. Hook setFrame:
    Method setFrameMethod = class_getInstanceMethod(cellClass, @selector(setFrame:));
    if (setFrameMethod) {
        orig_setFrame = (void(*)(id, SEL, CGRect))method_getImplementation(setFrameMethod);
        method_setImplementation(setFrameMethod, (IMP)hook_setFrame);
    }

    // 3. Hook layoutSubviews
    Method layoutMethod = class_getInstanceMethod(cellClass, @selector(layoutSubviews));
    if (layoutMethod) {
        orig_layoutSubviews = (void(*)(id, SEL))method_getImplementation(layoutMethod);
        method_setImplementation(layoutMethod, (IMP)hook_layoutSubviews);
    }

    WPLog(@"ChatLayout", @"ChatLayoutHook installed on %@", NSStringFromClass(cellClass));
}

@end
```

---

## 五、UI 层：二级页面（SettingChatLayoutController）

### 5.1 控制器类结构

```objc
// SettingChatLayoutController.h
#import "SettingCategoryController.h"

@interface SettingChatLayoutController : SettingCategoryController
@end
```

### 5.2 实现文件

```objc
// SettingChatLayoutController.m
#import "SettingChatLayoutController.h"
#import "ChatLayoutConfig.h"
#import "ConfigManager.h"

@implementation SettingChatLayoutController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"修改布局";
    [self buildUI];
}

- (void)buildUI {
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;

    // ── Section 1: 修改布局大小（字体） ──
    y = [self addSectionHeader:@"修改布局大小" y:y width:w];

    UIView *group1 = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;

    cy = [self addInputRowInGroup:group1
                            title:@"消息字体大小"
                              key:@"kChatLayoutFontSize"
                            value:[NSString stringWithFormat:@"%.0f",
                                   [ChatLayoutConfig shared].chatLayoutFontSize]
                             hint:@"12 ~ 24（默认 16，设为 16 则不做调整）"
                        valueType:InputValueTypeNumber
                               cy:cy width:w];

    y = [self finishGroup:group1 atY:y height:cy];

    // ── Section 2: 修改聊天大小（Cell 高度） ──
    y = [self addSectionHeader:@"修改聊天大小" y:y width:w];

    UIView *group2 = [self addTableGroupAtY:y width:w];
    cy = 0;

    cy = [self addInputRowInGroup:group2
                            title:@"聊天 Cell 高度调整"
                              key:@"kChatLayoutCellHeightAdjust"
                            value:[NSString stringWithFormat:@"%.0f",
                                   [ChatLayoutConfig shared].chatLayoutCellHeightAdjust]
                             hint:@"-30 ~ 30（正数增大，负数减小，0 为默认）"
                        valueType:InputValueTypeNumber
                               cy:cy width:w];

    y = [self finishGroup:group2 atY:y height:cy];

    // ── Section 3: 说明 ──
    y = [self addSectionHeader:@"说明" y:y width:w];
    y = [self addHintRowInGroup:nil text:@"修改在重新进入聊天列表后生效。\n字体大小设为 16 表示使用微信默认字体。\nCell 高度调整设为 0 表示不做调整。" y:y width:w];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}

@end
```

### 5.3 UI 预览

```
┌──────────────────────────────────────┐
│  修改布局                      < 返回 │
├──────────────────────────────────────┤
│  ▎修改布局大小                        │
│  ┌────────────────────────────────┐  │
│  │ 消息字体大小    16       →    │  │
│  └────────────────────────────────┘  │
│                                      │
│  ▎修改聊天大小                        │
│  ┌────────────────────────────────┐  │
│  │ 聊天 Cell 高度调整  0     →    │  │
│  └────────────────────────────────┘  │
│                                      │
│  修改在重新进入聊天列表后生效。        │
│  字体大小设为 16 则不调整。           │
│  Cell 高度调整设为 0 则不调整。       │
└──────────────────────────────────────┘
```

---

## 六、"界面定制"页面入口添加方案

### 6.1 需要修改的文件

| 文件 | 修改内容 |
|------|---------|
| [MioModuleRegistry.m](file:///www/wwwroot/ios/MioPlugin/Registry/MioModuleRegistry.m) | 在"界面定制" section 添加 chatlayout descriptor |
| [WPUIVC.m](file:///www/wwwroot/ios/MioPlugin/Modules/SettingEntry/WPUIVC.m) | 在 items 数组新增 + 在 navigateTo: switch 新增 case |

### 6.2 MioModuleRegistry.m 修改

```objc
// 在 界面定制 section 的 descriptor 数组中添加：
[MioModuleDescriptor descriptorWithIdentifier:@"chatlayout"
                                        title:@"修改布局"
                                   configClass:[ChatLayoutConfig class]
                                   hookClasses:@[[ChatLayoutHook class]]
                               controllerClass:[SettingChatLayoutController class]
                                      subtitle:@"字体大小、聊天行高调整"
                                 sectionTitle:@"界面定制"],
```

### 6.3 WPUIVC.m 修改

**修改1**：在 `items` 数组中新增一行

```objc
// 在 @[@"隐藏头像", @(106)], 之后添加：
@[@"修改布局", @(107)],
```

**修改2**：在 `navigateTo:` switch 中新增一个 case

```objc
// 在 case 106: 之后添加：
case 107:
    subVC = [[SettingChatLayoutController alloc] init];
    break;
```

### 6.4 入口数据流

```
MioModuleRegistry.m
  └─ descriptor: @"chatlayout"
       ├─ configClass: ChatLayoutConfig     → 自动注册配置项
       ├─ hookClasses: @[ChatLayoutHook]    → 自动调用 +install
       └─ controllerClass: SettingChatLayoutController  → 用于设置页

WPUIVC.m
  └─ items 数组
       └─ tag: 107 → "修改布局"
            └─ navigateTo: case 107
                 └─ [[SettingChatLayoutController alloc] init]
                      └─ pushViewController
```

---

## 七、执行步骤

| 步骤 | 操作 | 涉及文件 |
|:----:|------|---------|
| 1 | 新建 `ChatLayoutConfig.h/.m`，声明 2 个 property，implement shared + descriptors | `Modules/ChatLayout/ChatLayoutConfig.*` |
| 2 | 新建 `ChatLayoutHook.h/.m`，实现 install + 2 个 hook 函数 + 2 个辅助函数 | `Modules/ChatLayout/ChatLayoutHook.*` |
| 3 | 新建 `SettingChatLayoutController.h/.m`，继承 SettingCategoryController，实现 buildUI | `Modules/ChatLayout/SettingChatLayoutController.*` |
| 4 | 在 `MioModuleRegistry.m` 注册 chatlayout 模块 | `Registry/MioModuleRegistry.m` |
| 5 | 在 `WPUIVC.m` 添加 @[@"修改布局", @(107)] + case 107 | `Modules/SettingEntry/WPUIVC.m` |
| 6 | `make clean && make` 编译验证 | — |

---

## 八、用户角度测试方案

### 8.1 测试矩阵

| 测试项 | 操作步骤 | 预期结果 |
|-------|---------|---------|
| **入口显示** | 进入 Mio助手 → 界面定制 | 看到"修改布局"入口 row |
| **页面跳转** | 点击"修改布局" | 进入设置页，显示 2 个 Section |
| **修改布局大小** | 设置字体为 18 → 进入聊天列表 | 消息字体变大 |
| **修改布局大小(变小)** | 设置字体为 14 → 进入聊天列表 | 消息字体变小 |
| **修改布局大小(默认值)** | 设置字体为 16 → 进入聊天列表 | 使用微信默认字体 |
| **修改聊天大小(增大)** | Cell 高度调整为 15 → 进入聊天列表 | Cell 间距变大 |
| **修改聊天大小(减小)** | Cell 高度调整为 -10 → 进入聊天列表 | Cell 间距变小 |
| **修改聊天大小(默认值)** | Cell 高度调整为 0 → 进入聊天列表 | 使用微信默认高度 |
| **同时调整两项** | 字体 18 + 高度 10 → 进入聊天列表 | 字体变大 + Cell 变高 |
| **配置持久化** | 修改 → 杀微信 → 重开 | 配置保持 |
| **兼容性** | 所有值设为默认 → 进入聊天列表 | 与原始微信无差异 |
| **与其他功能兼容** | 同时启用列表圆角等 → 进入聊天列表 | 互不干扰 |

### 8.2 边界场景

| 场景 | 预期 |
|------|------|
| 群聊聊天列表 | 生效 |
| 私聊聊天列表 | 生效 |
| 公众号聊天列表 | 生效 |
| 搜索聊天记录的 Cell | 不应生效（isInChatListView 返回 NO） |
| 朋友圈 | 不应生效（非 MMTableViewCell） |
| 快速滑动 | 不卡顿，UI 不闪烁 |

### 8.3 调试方法

```objc
+ (void)install {
    WPLog(@"ChatLayout", @"[Install] ChatLayoutHook 安装开始...");
    // ...
    WPLog(@"ChatLayout", @"[Install] Hook 安装完成");
}

static void hook_layoutSubviews(id self, SEL _cmd) {
    orig_layoutSubviews(self, _cmd);
    if (!isInChatListView(self)) return;

    ChatLayoutConfig *config = [ChatLayoutConfig shared];
    WPLogDebug(@"ChatLayout",
              @"[layout] Cell=%@ fontSize=%.1f heightAdjust=%.1f",
              self, config.chatLayoutFontSize, config.chatLayoutCellHeightAdjust);
}
```

查看日志：`log stream --debug --predicate 'subsystem contains "MioPlugin"'`

---

## 九、与黄白助手实现对比

| 维度 | 黄白助手 | MioPlugin 方案 | 差异原因 |
|:----:|:--------:|:-------------:|:--------:|
| **Hook API** | MSHookMessageEx + method_setImplementation | method_setImplementation | MioPlugin 统一用 runtime API |
| **配置管理** | HBConfigUtil（NSUserDefaults 封装） | ConfigManager + ConfigDescriptor | MioPlugin 统一配置体系 |
| **设置页面** | TheSpecialController 内联分组 | SettingCategoryController 二级页面 | MioPlugin 集中管理入口 |
| **Hook 注册** | constructor + 模块 ID 判断 | MioModuleRegistry 自动调用 | 统一生命周期管理 |
| **范围判断** | m_delegate 类型判断 | superview + delegate 双重判断 | 双重判断更可靠 |
| **字体遍历** | contentView.subviews 单层遍历 | 递归收集所有 UILabel | 兼容微信嵌套视图结构 |

---

## 十、风险与注意事项

1. **微信版本兼容性**：MMTableViewCell 的内部结构可能随微信版本变化，建议用 KVC 获取子视图
2. **fontSize == 16.0**：与黄白助手保持一致的逻辑，16.0 时不做字体调整
3. **heightAdjust 正负**：负值表示缩小 Cell，可能造成 Cell 内容显示不全；正值表示放大，可能导致内容区域变大
4. **与现有功能冲突**：如果同时启用"隐藏头像"等功能，需确保 Cell 布局修改不受影响
5. **性能**：layoutSubviews 被频繁调用，递归遍历 UILabel 应不产生副作用

---

*文档结束*