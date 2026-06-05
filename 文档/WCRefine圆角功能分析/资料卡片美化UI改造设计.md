# 资料卡片美化 UI 改造设计文档

> 改造方式：在同一个 VC（SettingCardBackgroundController.m）中新增 UI，旧 UI 暂留，逐步迭代删除。

---

## 一、改造前后对比

### 现有 UI（暂留）

```
┌─ 卡片背景设置 ──────────────────────────┐
│  ☑ 信息卡片背景（总开关：cardBgEnabled）   │
│  ├ ☑ 隐藏信息卡片                        │
│  ├ 信息卡片高度 [144]                    │
│  ├ 列表向下间距 [9]                      │
│  ├ 浅色背景图 →                          │
│  ├ 深色背景图 →                          │
│  ├ 背景填充模式 →                        │
│  ├ 浅色模式对齐方式 →                    │
│  ├ 深色模式对齐方式 →                    │
│  ├ 浅色背景显示层级 →                    │
│  ├ 深色背景显示层级 →                    │
│  ├ 浅色背景Y轴偏移 [0]                  │
│  ├ 深色背景Y轴偏移 [0]                  │
│  ├ 浅色背景X轴偏移 [0]                  │
│  └ 深色背景X轴偏移 [0]                  │
└──────────────────────────────────────────┘
```

### 新增 UI（在旧 UI 上方）

```
┌─ 资料卡片美化 ───────────────────────────┐
│  ☑ 资料卡片美化（总开关: cardBgBeautify）  │
│                                          │
│  ┌─ ☑ 使用背景素材 ─────────────────┐    │
│  │  信息卡片高度 [144]               │    │
│  │  列表向下间距 [9]                 │    │
│  │  浅色背景图 → [已设置/未设置]      │    │
│  │  深色背景图 → [已设置/未设置]      │    │
│  │  背景填充模式 → [填充模式]         │    │
│  │  深色模式对齐方式 → [底部对齐]      │    │
│  └──────────────────────────────────┘    │
│                                          │
│  ☑ 隐藏信息卡片                          │  ← 平铺开关，没有子参数
│                                          │
│  ┌─ ☑ 开启资料圆角 ─────────────────┐    │
│  │  圆角大小 [18]  ← 弹窗输入框       │    │
│  │  边距大小 [9]   ← 弹窗输入框       │    │
│  │  背景颜色 ■     ← 现有选色器       │    │
│  │  描边大小 [2.0] ← 弹窗输入框       │    │
│  └──────────────────────────────────┘    │
└──────────────────────────────────────────┘
```

### 共存时的页面布局

```
┌─ 资料卡片美化 ───────────────────── ← 新
├─ 卡片背景设置 ───────────────────── ← 旧（暂留）
└───────────────────────────────────
```

---

## 二、新增 Config 属性

在 `PluginConfig.h / .m` 中增加：

```objc
// ===== 资料卡片美化（新 UI） =====
@property (nonatomic, assign) BOOL cardBgBeautifyEnabled;    // 总开关
@property (nonatomic, assign) BOOL cardBgMaterialEnabled;    // 使用背景素材
@property (nonatomic, assign) BOOL cardBgCornerEnabled;      // 开启资料圆角
@property (nonatomic, assign) CGFloat cardBgCornerRadius;    // 圆角大小
@property (nonatomic, assign) CGFloat cardBgCornerMargin;    // 边距大小
@property (nonatomic, copy) NSString *cardBgCornerBgColor;   // 背景颜色
@property (nonatomic, assign) CGFloat cardBgStrokeWidth;     // 描边大小
```

**复用已有的属性：**

| 新 UI 的项 | 复用旧属性 |
|-----------|-----------|
| 信息卡片高度 | `cardBgHeight` |
| 列表向下间距 | `cardBgListSpacing` |
| 浅色背景图 | `cardBgLightImagePath` |
| 深色背景图 | `cardBgDarkImagePath` |
| 背景填充模式 | `cardBgFillMode` |
| 深色模式对齐方式 | `cardBgDarkAlignment` |
| 隐藏信息卡片 | `cardBgHidden` |

---

## 三、buildUI 改造

在 `SettingCardBackgroundController.m` 的 `buildUI` 中，在旧 UI 上方插入新 UI 代码。

### 代码结构

```objc
- (void)buildUI {
    [self clearContent];
    self.masterSwitchKeys = [NSMutableSet set];

    PluginConfig *config = [PluginConfig shared];
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;

    // ════════════════════════════════════
    // ★ 新增：资料卡片美化
    // ════════════════════════════════════
    y = [self addSectionHeader:@"资料卡片美化" y:y width:w];

    UIView *newGroup = [self addTableGroupAtY:y width:w];
    CGFloat ncy = 0;

    ncy = [self addMasterSwitchRowInGroup:newGroup
                                    title:@"资料卡片美化"
                                      key:@"cardBgBeautifyEnabled"
                                     isOn:config.cardBgBeautifyEnabled
                               subBuilder:^(UIView *expand, CGFloat *ecy) {

        PluginConfig *cfg = [PluginConfig shared];

        // ─── 子手风琴1：使用背景素材 ───
        *ecy = [self addMasterSwitchRowInGroup:expand
                                         title:@"使用背景素材"
                                           key:@"cardBgMaterialEnabled"
                                          isOn:cfg.cardBgMaterialEnabled
                                    subBuilder:^(UIView *e2, CGFloat *e2y) {

            CGFloat h = cfg.cardBgHeight > 0 ? cfg.cardBgHeight : 144.0;
            *e2y = [self addInputRowInGroup:e2
                                      title:@"信息卡片高度"
                                        key:@"cardBgHeight"
                                      value:[NSString stringWithFormat:@"%.0f", h]
                                       hint:@"144"
                                 alertTitle:@"设置信息卡片高度"
                               alertMessage:@"请输入高度值(144-500像素)"
                                         cy:*e2y width:w];
            *e2y = [self addSeparatorInGroup:e2 cy:*e2y width:w];

            CGFloat sp = cfg.cardBgListSpacing > 0 ? cfg.cardBgListSpacing : 9.0;
            *e2y = [self addInputRowInGroup:e2
                                      title:@"列表向下间距"
                                        key:@"cardBgListSpacing"
                                      value:[NSString stringWithFormat:@"%.0f", sp]
                                       hint:@"9"
                                 alertTitle:@"设置列表向下间距"
                               alertMessage:@"请输入间距值(1-550像素)"
                                         cy:*e2y width:w];
            *e2y = [self addSeparatorInGroup:e2 cy:*e2y width:w];

            NSString *lightSub = cfg.cardBgLightImagePath.length > 0 ? @"已设置" : @"未设置";
            *e2y = [self addNavRowInGroup:e2
                                    title:@"浅色背景图"
                                  subtitle:lightSub
                                      tag:200
                                   action:@selector(onLightImageTap)
                                       cy:*e2y width:w];
            *e2y = [self addSeparatorInGroup:e2 cy:*e2y width:w];

            NSString *darkSub = cfg.cardBgDarkImagePath.length > 0 ? @"已设置" : @"未设置";
            *e2y = [self addNavRowInGroup:e2
                                    title:@"深色背景图"
                                  subtitle:darkSub
                                      tag:201
                                   action:@selector(onDarkImageTap)
                                       cy:*e2y width:w];
            *e2y = [self addSeparatorInGroup:e2 cy:*e2y width:w];

            NSArray *fillNames = @[@"填充模式", @"适应模式", @"拉伸填充", @"顶部填充"];
            NSString *fillSub = (cfg.cardBgFillMode >= 0 && cfg.cardBgFillMode < (NSInteger)fillNames.count)
                ? fillNames[cfg.cardBgFillMode] : @"填充模式";
            *e2y = [self addNavRowInGroup:e2
                                    title:@"背景填充模式"
                                  subtitle:fillSub
                                      tag:202
                                   action:@selector(onFillModeTap)
                                       cy:*e2y width:w];
            *e2y = [self addSeparatorInGroup:e2 cy:*e2y width:w];

            NSArray *alignNames = @[@"底部对齐", @"居中对齐", @"顶部对齐"];
            NSString *alignSub = (cfg.cardBgDarkAlignment >= 0 && cfg.cardBgDarkAlignment < (NSInteger)alignNames.count)
                ? alignNames[cfg.cardBgDarkAlignment] : @"底部对齐";
            *e2y = [self addNavRowInGroup:e2
                                    title:@"深色模式对齐方式"
                                  subtitle:alignSub
                                      tag:206
                                   action:@selector(onDarkAlignmentTap)
                                       cy:*e2y width:w];
        }];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        // ─── 隐藏信息卡片（平铺开关，无子参数） ───
        *ecy = [self addSubSwitchRowInGroup:expand
                                      title:@"隐藏信息卡片"
                                        key:@"cardBgHidden"
                                       isOn:cfg.cardBgHidden
                                         cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        // ─── 子手风琴3：开启资料圆角 ───
        *ecy = [self addMasterSwitchRowInGroup:expand
                                         title:@"开启资料圆角"
                                           key:@"cardBgCornerEnabled"
                                          isOn:cfg.cardBgCornerEnabled
                                    subBuilder:^(UIView *e3, CGFloat *e3y) {

            CGFloat cr = cfg.cardBgCornerRadius > 0 ? cfg.cardBgCornerRadius : 18.0;
            *e3y = [self addInputRowInGroup:e3
                                      title:@"圆角大小"
                                        key:@"cardBgCornerRadius"
                                      value:[NSString stringWithFormat:@"%.0f", cr]
                                       hint:@"18"
                                 alertTitle:@"设置圆角大小"
                               alertMessage:@"请输入圆角大小(5-30像素)"
                                         cy:*e3y width:w];
            *e3y = [self addSeparatorInGroup:e3 cy:*e3y width:w];

            CGFloat cm = cfg.cardBgCornerMargin > 0 ? cfg.cardBgCornerMargin : 9.0;
            *e3y = [self addInputRowInGroup:e3
                                      title:@"边距大小"
                                        key:@"cardBgCornerMargin"
                                      value:[NSString stringWithFormat:@"%.0f", cm]
                                       hint:@"9"
                                 alertTitle:@"设置边距大小"
                               alertMessage:@"请输入边距值(0-30像素)"
                                         cy:*e3y width:w];
            *e3y = [self addSeparatorInGroup:e3 cy:*e3y width:w];

            *e3y = [self addColorRowInGroup:e3
                                      title:@"背景颜色"
                                        key:@"cardBgCornerBgColor"
                                      value:cfg.cardBgCornerBgColor
                                         cy:*e3y width:w];
            *e3y = [self addSeparatorInGroup:e3 cy:*e3y width:w];

            CGFloat sw = cfg.cardBgStrokeWidth > 0 ? cfg.cardBgStrokeWidth : 2.0;
            *e3y = [self addInputRowInGroup:e3
                                      title:@"描边大小"
                                        key:@"cardBgStrokeWidth"
                                      value:[NSString stringWithFormat:@"%.1f", sw]
                                       hint:@"2.0"
                                 alertTitle:@"设置描边大小"
                               alertMessage:@"请输入描边宽度(0.5-5.0)"
                                         cy:*e3y width:w];
        }];
    } cy:ncy width:w];

    y = [self finishGroup:newGroup atY:y height:ncy];
    y += 8;  // 组间距

    // ════════════════════════════════════
    // ★ 旧 UI：卡片背景设置（暂留）
    // ════════════════════════════════════
    // 原有第30~146行代码保持不动
    // ...

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}
```

---

## 四、switchChanged 处理

```objc
- (void)switchChanged:(UISwitch *)sender {
    [super switchChanged:sender];

    NSString *key = objc_getAssociatedObject(sender, "key");
    if (!key) return;

    // ★ 新增：新 UI 的开关需要 rebuild UI（展开/折叠子项）
    if ([key isEqualToString:@"cardBgBeautifyEnabled"]
        || [key isEqualToString:@"cardBgMaterialEnabled"]
        || [key isEqualToString:@"cardBgCornerEnabled"]
        || [key isEqualToString:@"cardBgHidden"]) {
        [self buildUI];
        return;
    }

    // 旧 UI 原有的 switchChanged 逻辑（保持不变）
    // ...
}
```

---

## 五、Hook 层改造（后续迭代）

### 5.1 handleButtonLayout 中的守卫

在 `ProfileCardBgHook.m` 中，新增新总开关的守卫：

```objc
// 改前
if (!config.cardBgEnabled && !config.globalCornerRadiusEnabled) return;

// 改后
if (!config.cardBgEnabled && !config.cardBgBeautifyEnabled
    && !config.globalCornerRadiusEnabled) return;
```

### 5.2 背景素材和圆角的判断

```objc
// 是否启用背景素材
BOOL needsMaterial = config.cardBgBeautifyEnabled ? config.cardBgMaterialEnabled
                                                   : config.cardBgEnabled;

// 是否启用资料圆角（新 UI 独有）
BOOL needsCorner = config.cardBgCornerEnabled;
```

---

## 六、迭代删除计划

| 阶段 | 动作 | 完成条件 |
|------|------|---------|
| 1 | 新增 Config 属性（7 个） | PluginConfig.h/.m |
| 2 | 在 SettingCardBackgroundController.m 中 buildUI 头部插入新 UI 代码 | 页面显示两个分组 |
| 3 | switchChanged 增加新 key 的 buildUI 触发 | 新 UI 开关交互正常 |
| 4 | 测试新 UI 功能：背景素材、隐藏卡片、资料圆角 | 功能验证通过 |
| 5 | 改造 ProfileCardBgHook.m 支持新开关 | 新总开关能控制功能 |
| 6 | 删除旧 UI 代码（第30~146行 + 旧 masterSwitchKeys 中 cardBgEnabled 相关逻辑） | 旧分组消失 |
| 7 | 清理 Config 中不再需要的旧属性 | 最终清理 |

---

## 七、UI 速查表

```
┌─ 资料卡片美化 ───────────────────────────────┐  ← 新增
│ cardBgBeautifyEnabled                         │
│  ├─ cardBgMaterialEnabled                     │
│  │   ├─ cardBgHeight (input, 复用)            │
│  │   ├─ cardBgListSpacing (input, 复用)       │
│  │   ├─ cardBgLightImagePath (nav, 复用)      │
│  │   ├─ cardBgDarkImagePath (nav, 复用)       │
│  │   ├─ cardBgFillMode (nav, 复用)            │
│  │   └─ cardBgDarkAlignment (nav, 复用)       │
│  ├─ cardBgHidden (switch, 复用)               │
│  └─ cardBgCornerEnabled                       │
│      ├─ cardBgCornerRadius (input, 新增)      │
│      ├─ cardBgCornerMargin (input, 新增)       │
│      ├─ cardBgCornerBgColor (color, 新增)      │
│      └─ cardBgStrokeWidth (input, 新增)       │
├────────────────────────────────────────────────┤
│ 卡片背景设置                                 │  ← 旧，暂留
│ cardBgEnabled + 14 个子项（全部不变）          │
└────────────────────────────────────────────────┘
```