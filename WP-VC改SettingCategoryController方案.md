# WP*VC → SettingCategoryController 全面改造方案

> 目标：删除 `objc_allocateClassPair` 动态类模式，统一为 `SettingCategoryController` 子类  
> 日期：2026-05-28  
> 状态：**7/8 完成** — 2026-05-28 深度复查  
> 剩余：WPUISimplifyVC 未转换

---

## 一、改造范围

### 1.1 受影响文件

| 文件 | 类型 | 操作 |
|------|------|------|
| `WPUIVC.m` | 界面定制入口 | 改为 SettingCategoryController 子类 |
| `WPUIPurifyVC.m` | 界面净化 | 改为 SettingCategoryController 子类 |
| `WPUISimplifyVC.m` | 界面简化 | 改为 SettingCategoryController 子类 |
| `WPUIAttachmentLayoutVC.m` | 附件布局 | 改为 SettingCategoryController 子类 |
| `WPUIPlaceholderTextVC.m` | 文本占位 | 改为 SettingCategoryController 子类 |
| `WPOtherVC.m` | 其他设置 | 改为 SettingCategoryController 子类 |
| `WPAboutVC.m` | 关于 | 改为 SettingCategoryController 子类 |
| `WPBackupVC.m` | 备份 | 改为 SettingCategoryController 子类 |
| `SettingEntryHook.m` | 导航跳转 | 改用 `[[cls alloc] init]` |
| `build-standalone.yml` | 编译 | 更新文件路径 |

### 1.2 验证清单

| # | 检查项 | 结果 |
|---|--------|------|
| 1 | WPUIPurifyVC → SettingCategoryController 子类 | ✅ L5, buildUI |
| 2 | WPOtherVC → SettingCategoryController 子类 | ✅ L5, buildUI |
| 3 | WPAboutVC → SettingCategoryController 子类 | ✅ L7, buildUI |
| 4 | WPBackupVC → SettingCategoryController 子类 | ✅ L6, buildUI + buttonClicked |
| 5 | WPUIAttachmentLayoutVC → `addMasterSwitchRowInGroup` | ✅ L5-66 |
| 6 | WPUIPlaceholderTextVC → `addMasterSwitchRowInGroup` + 子开关 + 颜色 + 输入 | ✅ L5-97 |
| 7 | WPUIVC → SettingCategoryController 子类 + navigateTo: | ✅ L5-93 |
| 8 | **WPUISimplifyVC 未转换** | ❌ 仍用 C 函数+Helper+objc_allocateClassPair |
| 9 | SettingEntryHook.m 旧导航方法删除 | ✅ 0 matches |
| 10 | 全项目 Helper/makeVC 残留 | ✅ 0 matches |
| 11 | SettingEntryHook.m WPUIVC 改用 `[[cls alloc] init]` | ✅ L232-241 |
| 12 | WPUIVC.m 缺少 `SettingChatTopBarController.h` import | ⚠️ L65 直接引用，仅有 warning |

### 1.3 每个文件要删除的内容

- `@interface XXXVCHelper` 类 **删除**
- `+ (UIViewController *)makeVC` 方法 **删除**
- `objc_allocateClassPair` 代码 **删除**
- C 函数 `XXXViewDidLoad` / `XXXBuildUI` **改为实例方法**
- `WeChatPluginSwitchHandler` category **删除**（除了 onEditRowTap 保留）
- `WPMakeSV()` 调用 **删除**（基类自带 scrollView）

---

## 二、核心原理

### 2.1 当前模式 (WP*VC)

```
objc_allocateClassPair → 动态创建类
    ↓
class_addMethod("viewDidLoad:", C函数)
    ↓
Helper.makeVC → [[动态类 alloc] init]
    ↓
C 函数内部: WPMakeSV(vc) → 手动管理 ScrollView
```

### 2.2 目标模式 (SettingCategoryController)

```
@interface XXXVC : SettingCategoryController
@end

@implementation XXXVC
- (void)buildUI {
    // [super buildUI] 已创建 self.scrollView / self.contentView
    // 直接用基类方法构建 UI
    [self addSectionHeader:...];
    UIView *group = [self addTableGroupAtY:...];
    [self addSwitchRowInGroup:group ...];
    [self finishGroup:group ...];
}
@end
```

### 2.3 ScrollView 自动管理

`SettingCategoryController.viewDidLoad` 自动：
- 创建 `self.scrollView` 
- 创建 `self.contentView` 
- 设置 contentSize

子类只需实现 `buildUI`，往 `self.contentView` 上添加视图即可。

---

## 三、API 映射表

| 旧 API (WP*VC) | 新 API (SettingCategoryController) |
|----------------|-----------------------------------|
| `WPMakeSV(vc)` | 基类自动创建 → `self.scrollView` / `self.contentView` |
| `WPMakeSectionHeader(text, y, w)` | `y = [self addSectionHeader:text y:y width:w]` |
| `WPMakeCard(y, w)` + 手动 addSubview | `UIView *g = [self addTableGroupAtY:y width:w]` |
| `WPAddSwitchRow(card, cy, w, title, key, on, handler, NULL)` | `cy = [self addSwitchRowInGroup:group title:title desc:nil key:key isOn:on cy:cy width:w]` |
| `WPAddSwitchRow(card, cy, w, title, ..., nil, ^block)` | `cy = [self addMasterSwitchRowInGroup:group title:title key:key isOn:on subBuilder:^block cy:cy width:w]` |
| `WPAddNavRow(card, cy, w, title, action, handler)` | `cy = [self addNavRowInGroup:group title:title subtitle:nil tag:tag action:@selector(method:) cy:cy width:w]` |
| `WPAddEditableRowWithArrow(card, cy, w, title, value, handler)` | `cy = [self addInputRowInGroup:group title:title key:key value:value hint:hint cy:cy width:w]` |
| `WPAddSep(card, cy, w)` | `cy = [self addSeparatorInGroup:group cy:cy width:w]` |
| `WPColorPicker` 手动调用 | `cy = [self addColorRowInGroup:group title:title key:key value:hex cy:cy width:w]` |
| `WPAddEditableRow` 手动创建 | `cy = [self addButtonRowInGroup:group title:title hint:hint key:key cy:cy width:w]` |
| `CGRect cf = card.frame; cf.size.height = cy; card.frame = cf;` | `[self finishGroup:group atY:<group.y> height:cy]` |

---

## 四、逐页面改造方案

### 4.1 WPUIPurifyVC（最简单 — 6 个功能开关）

**当前实现**：C 函数 `WPUIPurifyViewDidLoad` — SectionHeader + Card + 6 个 WPAddSwitchRow

**改造**：

```objc
@interface WPUIPurifyVC : SettingCategoryController
@end

@implementation WPUIPurifyVC

- (void)buildUI {
    [super buildUI];
    
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;
    
    y = [self addSectionHeader:@"界面净化" y:y width:w];
    
    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;
    
    NSArray *items = @[
        @[@"隐藏分割线",     @"purify_hideSeparator"],
        @[@"隐藏撤回提示",   @"purify_hideRevokeHint"],
        @[@"隐藏小绿点",     @"purify_hideGreenDot"],
        @[@"隐藏小红点",     @"purify_hideRedDot"],
        @[@"隐藏推荐",       @"purify_hideRecommend"],
        @[@"隐藏搜索",       @"purify_hideSearch"],
    ];
    
    PluginConfig *config = [PluginConfig shared];
    for (NSUInteger i = 0; i < items.count; i++) {
        if (i > 0) {
            cy = [self addSeparatorInGroup:group cy:cy width:w];
        }
        NSString *key = items[i][1];
        BOOL on = [[config valueForKey:key] boolValue];
        cy = [self addSwitchRowInGroup:group title:items[i][0] desc:nil 
                                   key:key isOn:on cy:cy width:w];
    }
    
    [self finishGroup:group atY:y height:cy];
}
```

**关键变化**：
- `WeChatPluginSwitchHandler` target → `self` （基类 `switchChanged:` 自动处理保存）
- `WPAddSwitchRow(..., handler, NULL)` → `addSwitchRowInGroup:title:desc:key:isOn:`
- 需为每个 key 在 PluginConfig 中建立映射（如已存在则无需改动）

---

### 4.2 WPOtherVC（类似 — 3 个开关）

**当前实现**：同 PurityVC 模式，3 个开关 + 1 个文本行

```objc
@interface WPOtherVC : SettingCategoryController
@end

@implementation WPOtherVC

- (void)buildUI {
    [super buildUI];
    
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;
    
    y = [self addSectionHeader:@"其他设置" y:y width:w];
    
    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;
    
    PluginConfig *config = [PluginConfig shared];
    
    // 一键已读
    cy = [self addSwitchRowInGroup:group title:@"一键已读" desc:nil
                               key:@"other_oneTapRead" isOn:[[config valueForKey:@"other_oneTapRead"] boolValue] 
                               cy:cy width:w];
    cy = [self addSeparatorInGroup:group cy:cy width:w];
    
    // Debug 日志
    cy = [self addSwitchRowInGroup:group title:@"Debug 日志" desc:nil
                               key:@"other_debugLog" isOn:[[config valueForKey:@"other_debugLog"] boolValue] 
                               cy:cy width:w];
    cy = [self addSeparatorInGroup:group cy:cy width:w];
    
    // 不提示
    cy = [self addSwitchRowInGroup:group title:@"不提示" desc:nil
                               key:@"other_noTip" isOn:[[config valueForKey:@"other_noTip"] boolValue] 
                               cy:cy width:w];
    
    [self finishGroup:group atY:y height:cy];
}
```

---

### 4.3 WPUISimplifyVC（中等 — 主控开关 + 可编辑行 + 导航行）

**当前实现**：C 函数 `WPUISimplifyViewDidLoad` + `WPUISimplifyBuildUI(self, NULL)` 手动重建 UI

**改造**：使用 `addMasterSwitchRowInGroup` 自动处理展开/收起

```objc
@interface WPUISimplifyVC : SettingCategoryController
@end

@implementation WPUISimplifyVC

- (void)buildUI {
    [super buildUI];
    
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;
    
    y = [self addSectionHeader:@"界面简化" y:y width:w];
    
    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;
    
    // 主控开关（开启时展开子配置）
    cy = [self addMasterSwitchRowInGroup:group 
                                   title:@"界面名称简化"
                                     key:@"SimplifyEnabled"
                                    isOn:[[NSUserDefaults standardUserDefaults] boolForKey:@"SimplifyEnabled"]
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        // 子配置区域 — 在主开关开启时显示
        NSUserDefaults *ud = [NSUserDefaults standardUserDefaults];
        
        *ecy = [self addSubSectionLabelInGroup:expand text:@"自定义名称" cy:*ecy width:w];
        
        *ecy = [self addInputRowInGroup:expand title:@"首页"
                                    key:@"Simplify_TabHome"
                                  value:[ud stringForKey:@"Simplify_TabHome"]
                                   hint:@"微信"
                                    cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        
        *ecy = [self addInputRowInGroup:expand title:@"通讯录"
                                    key:@"Simplify_TabContact"
                                  value:[ud stringForKey:@"Simplify_TabContact"]
                                   hint:@"通讯录"
                                    cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        
        // ... 其他可编辑行
    } cy:cy width:w];
    
    [self finishGroup:group atY:y height:cy];
}
```

**关键突破**：原先的 `onSimplifySwitch:` + `WPUISimplifyBuildUI(self, NULL)` 手动重建模式，被 `addMasterSwitchRowInGroup` 的 `subBuilder` 完全替代。基类 `switchChanged:` 检测到 master key 后自动调用 `[self buildUI]`，展开/收起由 `finishExpandContainer` 和 `setExpanded:animated:` 动画处理。

---

### 4.4 WPUIAttachmentLayoutVC（类似 SimplifyVC）

```objc
@interface WPUIAttachmentLayoutVC : SettingCategoryController
@end

@implementation WPUIAttachmentLayoutVC

- (void)buildUI {
    [super buildUI];
    
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;
    
    y = [self addSectionHeader:@"附件布局" y:y width:w];
    
    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;
    
    cy = [self addMasterSwitchRowInGroup:group
                                   title:@"附件布局优化"
                                     key:kAttachLayoutEnabledKey
                                    isOn:[[NSUserDefaults standardUserDefaults] boolForKey:kAttachLayoutEnabledKey]
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        NSUserDefaults *ud = [NSUserDefaults standardUserDefaults];
        
        *ecy = [self addInputRowInGroup:expand title:@"列数"
                                    key:@"AttachLayout_Columns"
                                  value:[ud stringForKey:@"AttachLayout_Columns"]
                                   hint:@"3"
                                    cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        
        *ecy = [self addInputRowInGroup:expand title:@"行数"
                                    key:@"AttachLayout_Rows"
                                  value:[ud stringForKey:@"AttachLayout_Rows"]
                                   hint:@"自动"
                                    cy:*ecy width:w];
    } cy:cy width:w];
    
    [self finishGroup:group atY:y height:cy];
}
```

---

### 4.5 WPUIPlaceholderTextVC（最复杂 — 主控开关 + 子开关 + 颜色 + 可编辑行）

**当前 API 映射**：

| 旧实现 | 新 API |
|-------|-------|
| `WPAddSwitchRow(switchCard, ..., ^block)` 主开关 | `addMasterSwitchRowInGroup:title:key:isOn:subBuilder:` |
| `WPAddSwitchRow(contentCard, ..., ^block)` 粗体子开关 | `addSubSwitchRowInGroup:title:key:isOn:` |
| `WPColorPicker makeColorButtonWithColor:` | `addColorRowInGroup:title:key:value:` |
| `WPAddEditableRowWithArrow(...)` 字号/透明度 | `addInputRowInGroup:title:key:value:hint:` |
| 手动 `CGRect cf = ...`  | `finishExpandContainer:currentCy:` |

```objc
@interface WPUIPlaceholderTextVC : SettingCategoryController
@end

@implementation WPUIPlaceholderTextVC

- (void)buildUI {
    [super buildUI];
    
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;
    
    y = [self addSectionHeader:@"文本占位" y:y width:w];
    
    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;
    
    // 主控开关
    cy = [self addMasterSwitchRowInGroup:group
                                   title:@"显示占位文本"
                                     key:kPlaceholderTextEnabledKey
                                    isOn:[[NSUserDefaults standardUserDefaults] boolForKey:kPlaceholderTextEnabledKey]
                              subBuilder:^(UIView *expand, CGFloat *ecy) {
        NSUserDefaults *ud = [NSUserDefaults standardUserDefaults];
        
        // 粗体子开关
        *ecy = [self addSubSwitchRowInGroup:expand 
                                      title:@"使用粗体文字"
                                        key:@"PlaceholderText_Bold"
                                       isOn:[ud boolForKey:@"PlaceholderText_Bold"]
                                         cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        
        // 文字颜色
        NSString *colorHex = [ud stringForKey:@"PlaceholderText_Color"];
        *ecy = [self addColorRowInGroup:expand
                                  title:@"文字颜色"
                                    key:@"PlaceholderText_Color"
                                  value:colorHex
                                     cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        
        // 字号
        *ecy = [self addInputRowInGroup:expand
                                  title:@"字号"
                                    key:@"PlaceholderText_FontSize"
                                  value:[ud stringForKey:@"PlaceholderText_FontSize"]
                                   hint:@"14"
                                     cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];
        
        // 透明度
        *ecy = [self addInputRowInGroup:expand
                                  title:@"透明度"
                                    key:@"PlaceholderText_Alpha"
                                  value:[ud stringForKey:@"PlaceholderText_Alpha"]
                                   hint:@"1.0"
                                     cy:*ecy width:w];
    } cy:cy width:w];
    
    [self finishGroup:group atY:y height:cy];
}
```

**特殊处理**：颜色选择器保存的 hex 值需映射到 PluginConfig。如果颜色保存走 NSUserDefaults，基类 `addColorRowInGroup:` 的回调 `colorButtonTapped:` 保存到 PluginConfig KVC。**需要确保 key 在 PluginConfig 中有映射**，或改为 NSUserDefaults 保存（需修改 `colorButtonTapped:` 逻辑）。

---

### 4.6 WPAboutVC（静态页面）

```objc
@interface WPAboutVC : SettingCategoryController
@end

@implementation WPAboutVC

- (void)buildUI {
    [super buildUI];
    
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;
    
    y = [self addSectionHeader:@"关于" y:y width:w];
    
    // 使用 addHintRowInGroup 替代手动 UILabel
    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;
    
    cy = [self addHintRowInGroup:group text:@"Mio 助手 v1.0" cy:cy width:w];
    cy = [self addSeparatorInGroup:group cy:cy width:w];
    cy = [self addHintRowInGroup:group text:@"微信增强插件" cy:cy width:w];
    
    [self finishGroup:group atY:y height:cy];
}
```

> 如果 About 页面需要特殊的 logo 或自定义布局，可以混用基类方法 + 手动创建。

---

### 4.7 WPBackupVC（按钮 + 确认）

```objc
@interface WPBackupVC : SettingCategoryController
@end

@implementation WPBackupVC

- (void)buildUI {
    [super buildUI];
    
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;
    
    y = [self addSectionHeader:@"备份与重置" y:y width:w];
    
    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;
    
    PluginConfig *config = [PluginConfig shared];
    NSString *backupInfo = [NSString stringWithFormat:@"配置项数: %lu", (unsigned long)[config allKeys].count];
    cy = [self addHintRowInGroup:group text:backupInfo cy:cy width:w];
    cy = [self addSeparatorInGroup:group cy:cy width:w];
    
    cy = [self addButtonRowInGroup:group title:@"重置所有配置" 
                              hint:@"此操作不可撤销"
                               key:@"backup_reset" 
                                cy:cy width:w];
    
    [self finishGroup:group atY:y height:cy];
}

// 按钮点击回调
- (void)buttonClicked:(NSString *)key {
    if ([key isEqualToString:@"backup_reset"]) {
        // 原有的重置逻辑
    }
    [super buttonClicked:key];
}
```

---

### 4.8 WPUIVC（界面定制入口 — 需要最大改动）

**特殊挑战**：当前 C 函数 `WPUIViewDidLoad` 创建 nav rows，点击事件在 `SettingEntryHook.m` 的 `WeChatPluginSwitchHandler` category 中处理。

```objc
@interface WPUIVC : SettingCategoryController
@end

@implementation WPUIVC

- (void)buildUI {
    [super buildUI];
    
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;
    
    y = [self addSectionHeader:@"界面定制" y:y width:w];
    
    UIView *group = [self addTableGroupAtY:y width:w];
    CGFloat cy = 0;
    
    NSArray *items = @[
        @[@"聊天顶栏",   @(100)],
        @[@"名字颜色",   @(101)],
        @[@"附件布局",   @(102)],
        @[@"文本占位",   @(103)],
        @[@"界面简化",   @(104)],
        @[@"界面净化",   @(105)],
        @[@"隐藏头像",   @(106)],
    ];
    
    for (NSUInteger i = 0; i < items.count; i++) {
        if (i > 0) {
            cy = [self addSeparatorInGroup:group cy:cy width:w];
        }
        NSInteger tag = [items[i][1] integerValue];
        cy = [self addNavRowInGroup:group 
                              title:items[i][0] 
                           subtitle:nil 
                                tag:tag 
                             action:@selector(navigateTo:) 
                                 cy:cy width:w];
    }
    
    [self finishGroup:group atY:y height:cy];
}

- (void)navigateTo:(UIButton *)sender {
    NSInteger tag = sender.tag;
    UIViewController *subVC = nil;
    
    switch (tag) {
        case 100: subVC = [[NSClassFromString(@"SettingChatTopBarController") alloc] init]; break;
        case 101: subVC = [[NSClassFromString(@"SettingNameColorController") alloc] init]; break;
        case 102: subVC = [[NSClassFromString(@"WPUIAttachmentLayoutVC") alloc] init]; break;
        case 103: subVC = [[NSClassFromString(@"WPUIPlaceholderTextVC") alloc] init]; break;
        case 104: subVC = [[NSClassFromString(@"WPUISimplifyVC") alloc] init]; break;
        case 105: subVC = [[NSClassFromString(@"WPUIPurifyVC") alloc] init]; break;
        case 106: subVC = [[NSClassFromString(@"SettingAvatarHideController") alloc] init]; break;
    }
    
    if (subVC) {
        [self.navigationController pushViewController:subVC animated:YES];
        [subVC release];
    }
}
```

---

## 五、SettingEntryHook.m 改动

### 5.1 删除 WeChatPluginSwitchHandler category 中的导航方法

`SeettingEntryHook.m` 中 `WeChatPluginSwitchHandler (WPUICustomization)` category 的方法：
- `- openChatTopBar:`
- `- openNameColor:`
- `- openAttachLayout:`
- `- openPlaceholderText:`
- `- openUISimplify:`
- `- openUIPurify:`
- `- openAvatarHide:`

全部改为 `SeettingEntryHook.m` 中的简单 `[[cls alloc] init]` 调用（如果还存在的话）。

### 5.2 保留的内容

- `WeChatPluginSwitchHandler` category 中的 `onEditRowTap:` **保留**（可编辑行弹窗）
- `SeettingEntryHook.m` 的 `pluginEntryViewDidLoad` / `pluginEntryViewWillAppear` **保留**（主入口）
- 如果主入口 `pluginEntryViewWillAppear` 中引用了 `WPUIVC`，改为 `[[WPUIVC alloc] init]`

---

## 六、编译配置更新

### 6.1 build-standalone.yml

文件路径不变（.m 文件在同目录），但需要确保新创建的 .h 文件能被找到。

**不需要新增 .m 文件** — 所有 8 个 WP*VC.m 文件已存在，只需修改内容。

### 6.2 头文件搜索路径

已在 build-standalone.yml 中：
```yaml
-IWeChatPlugin/Modules/SettingEntry
-IWeChatPlugin/Settings/Common
```

足够找到 `SettingCategoryController.h` 和 `WPCommonUI.h`。

---

## 七、推荐执行顺序

| 步骤 | 页面 | 难度 | 状态 |
|------|------|------|------|
| 1 | `WPOtherVC` | 低 | ✅ 完成 |
| 2 | `WPUIPurifyVC` | 低 | ✅ 完成 |
| 3 | `WPAboutVC` | 低 | ✅ 完成 |
| 4 | `WPBackupVC` | 低 | ✅ 完成 |
| 5 | `WPUIAttachmentLayoutVC` | 中 | ✅ 完成 |
| 6 | `WPUIPlaceholderTextVC` | 中高 | ✅ 完成 |
| 7 | `WPUIVC` | 高 | ✅ 完成 |
| 8 | **`WPUISimplifyVC`** | 中 | **❌ 未转换** |
| 9 | `SettingEntryHook.m` | 中 | ✅ 完成 |

### 7.1 WPUISimplifyVC 转换难点

这是最复杂的页面，目前仍使用旧模式：
- C 函数 `WPUISimplifyViewDidLoad` / `WPUISimplifyBuildUI(self, NULL)` 
- `WPUISimplifyVCHelper.makeVC` + `objc_allocateClassPair`
- `WPMakeSV(vc)` 手动 scrollView
- `WeChatPluginSwitchHandler (WPUISimplify)` category 含 `onEditRowTap:`
- 4 个独立 card（总开关、顶部标签、菜单名称、底部标签）
- 大量 `WPAddEditableRowWithArrow` + NSUserDefaults dictKey 保存
- `WeChatRestartHelper` 重启提示

转换为 SettingCategoryController 子类需要：
1. 所有 `WPAddEditableRowWithArrow` → `addInputRowInGroup:title:key:value:hint:`
2. 手动 card 创建 → `addTableGroupAtY:` + `finishGroup:`
3. 手动 section header → `addSectionHeader:y:width:`
4. 主控开关 block 回调 → `addMasterSwitchRowInGroup:subBuilder:`
5. `onEditRowTap:` category 可保留（其他已转换页面仍需 NSUserDefaults 编辑）

---

## 八、剩余遗漏

### 8.1 WPUIVC.m 缺少头文件 import

[WPUIVC.m L65-68](file:///www/wwwroot/ios/WeChatPlugin/Modules/SettingEntry/WPUIVC.m#L65-L68) 直接使用 `SettingChatTopBarController` 和 `SettingNameColorController`，但未 import 对应头文件。需添加：

```objc
#import "../../Settings/Controllers/SettingChatTopBarController.h"
#import "../../Settings/Controllers/SettingNameColorController.h"
```

> `SettingAvatarHideController` 已在 `SettingController.h` 中声明，无需额外 import。

---

## 八、注意事项

### 8.1 PluginConfig key 映射

`addSwitchRowInGroup:` 和 `addColorRowInGroup:` 保存时通过 `configPropertyForKey(key)` 映射到 PluginConfig 属性。需确认所有用到的 key 在 PluginConfig 中有对应属性。如缺失，会直接无法保存

*建议先在 PluginConfig 中添加缺失的属性映射，再改页面*。

### 8.2 NSUserDefaults 保存的 switch/key

部分 WP*VC 页面用 NSUserDefaults 保存（如 kPlaceholderTextEnabledKey、kAttachLayoutEnabledKey 等）。两种处理方式：
- **方案 A**：改为 PluginConfig 保存（统一），需要在 PluginConfig 中添加对应属性
- **方案 B**：在 `switchChanged:` 中增加 NSUserDefaults 分支（不推荐，增加复杂度）

**建议选 A**，把 NSUserDefaults 的数据迁移到 PluginConfig。

### 8.3 颜色选择器保存

`addColorRowInGroup:` 的 `colorButtonTapped:` 保存到 PluginConfig。但 WPUIPlaceholderTextVC 的颜色保存到 NSUserDefaults。需要统一保存目标。

### 8.4 MRC 内存管理

`SettingCategoryController` 基类已正确处理 MRC（alloc/release 配对）。子类使用 `[[SomeClass alloc] init]` + `release` 模式即可。

### 8.5 Helper 类和动态类

删除所有 `XXXVCHelper` 类后，不再需要 `objc_allocateClassPair`。但如果 `openUIPurify:` 等被其他地方引用，注意更新引用方。

---

## 九、预估工作量

| 项目 | 行数变化 |
|------|---------|
| 8 个 .m 文件重写 / 新建 .h | - |
| 辅助类/动态类删除 | - |
| total | 净减约 50 行 |