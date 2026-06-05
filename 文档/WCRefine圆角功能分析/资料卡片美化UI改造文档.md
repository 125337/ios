# 资料卡片美化 UI 改造文档

> 只加 UI，不改功能。旧 UI 不动，新 UI 只是占位展示。

---

## 一、需要改的文件

| 文件 | 改动 |
|------|------|
| `PluginConfig.h` | 声明 7 个新属性 |
| `PluginConfig.m` | 实现 7 个属性的 loadDefaults / save |
| `SettingCardBackgroundController.m` | buildUI 头部插入新 UI 代码 |
| **不改** | ProfileCardBgHook.m、switchChanged、菜单入口 |

---

## 二、新增 Config 属性

### PluginConfig.h

```objc
// ===== 资料卡片美化（新 UI，功能尚未迁移） =====
@property (nonatomic, assign) BOOL cardBgBeautifyEnabled;    // 总开关
@property (nonatomic, assign) BOOL cardBgMaterialEnabled;    // 使用背景素材
@property (nonatomic, assign) BOOL cardBgCornerEnabled;      // 开启资料圆角
@property (nonatomic, assign) CGFloat cardBgCornerRadius;    // 圆角大小
@property (nonatomic, assign) CGFloat cardBgCornerMargin;    // 边距大小
@property (nonatomic, copy) NSString *cardBgCornerBgColor;   // 背景颜色
@property (nonatomic, assign) CGFloat cardBgStrokeWidth;     // 描边大小
```

### PluginConfig.m — loadDefaults

```objc
_cardBgBeautifyEnabled = [d boolForKey:@"MioCardBgBeautifyEnabled"];
_cardBgMaterialEnabled = [d boolForKey:@"MioCardBgMaterialEnabled"];
_cardBgCornerEnabled = [d boolForKey:@"MioCardBgCornerEnabled"];
_cardBgCornerRadius = [d floatForKey:@"MioCardBgCornerRadius"];
if (_cardBgCornerRadius <= 0) _cardBgCornerRadius = 18;
_cardBgCornerMargin = [d floatForKey:@"MioCardBgCornerMargin"];
if (_cardBgCornerMargin <= 0) _cardBgCornerMargin = 9;
_cardBgCornerBgColor = [d stringForKey:@"MioCardBgCornerBgColor"];
if (!_cardBgCornerBgColor) _cardBgCornerBgColor = @"#FFFFFF";
_cardBgStrokeWidth = [d floatForKey:@"MioCardBgStrokeWidth"];
if (_cardBgStrokeWidth <= 0) _cardBgStrokeWidth = 2.0;
```

### PluginConfig.m — save

```objc
[d setBool:_cardBgBeautifyEnabled forKey:@"MioCardBgBeautifyEnabled"];
[d setBool:_cardBgMaterialEnabled forKey:@"MioCardBgMaterialEnabled"];
[d setBool:_cardBgCornerEnabled forKey:@"MioCardBgCornerEnabled"];
[d setFloat:_cardBgCornerRadius forKey:@"MioCardBgCornerRadius"];
[d setFloat:_cardBgCornerMargin forKey:@"MioCardBgCornerMargin"];
[d setObject:_cardBgCornerBgColor ?: @"#FFFFFF" forKey:@"MioCardBgCornerBgColor"];
[d setFloat:_cardBgStrokeWidth forKey:@"MioCardBgStrokeWidth"];
```

---

## 三、buildUI 插入新 UI

在 `SettingCardBackgroundController.m` 的 `buildUI` 中，在 **旧 UI 代码之前**插入以下代码。

### 插入位置

```objc
- (void)buildUI {
    [self clearContent];
    self.masterSwitchKeys = [NSMutableSet set];

    PluginConfig *config = [PluginConfig shared];
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;

    // ════════════════════════════════════
    // ★ 在此处插入新 UI 代码（见下方）
    // ════════════════════════════════════

    // ... 原有的旧 UI 代码（第 30 行起）保持不变 ...
```

### 新 UI 代码（可直接复制）

```objc
    // ========== 资料卡片美化 ==========
    y = [self addSectionHeader:@"资料卡片美化" y:y width:w];

    UIView *newGroup = [self addTableGroupAtY:y width:w];
    CGFloat ncy = 0;

    ncy = [self addMasterSwitchRowInGroup:newGroup
                                    title:@"资料卡片美化"
                                      key:@"cardBgBeautifyEnabled"
                                     isOn:config.cardBgBeautifyEnabled
                               subBuilder:^(UIView *expand, CGFloat *ecy) {

        PluginConfig *cfg = [PluginConfig shared];

        // ─── 子手风琴：使用背景素材 ───
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

        // ─── 隐藏信息卡片（平铺开关） ───
        *ecy = [self addSubSwitchRowInGroup:expand
                                      title:@"隐藏信息卡片"
                                        key:@"cardBgHidden"
                                       isOn:cfg.cardBgHidden
                                         cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        // ─── 子手风琴：开启资料圆角 ───
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
    y += 8;

    // ════════════════════════════════════
    // 以下为原有的旧 UI 代码，保持不动
    // ════════════════════════════════════
```

---

## 四、注意事项

### 4.1 旧事件方法已存在

`onLightImageTap:`、`onDarkImageTap:`、`onFillModeTap:`、`onDarkAlignmentTap:` 这些方法在旧 VC 中已经实现，新 UI 直接使用相同的 **tag + action** 即可，无需重复声明。

### 4.2 新 UI 开关不产生实际功能

新 UI 加完后，切换任意开关：
- Config 中的属性值会正常读写
- 但 Hook 层 (`ProfileCardBgHook.m`) 仍然只读 `cardBgEnabled`，不读新属性
- 所以开关切换不会影响实际的资料卡片显示

### 4.3 后续迁移功能时再做的

- `switchChanged` 中增加新 key 触发 `buildUI`
- `ProfileCardBgHook.m` 守卫增加 `cardBgBeautifyEnabled`
- 资料圆角的 Hook 实现
- 删旧 UI

---

## 五、最终页面效果

```
┌─ 资料卡片美化 ───────────────────────────┐  ← 新增，功能暂空
│  ☑ 资料卡片美化（总开关）                 │
│  ├─ ☑ 使用背景素材                       │
│  │     信息卡片高度 [144]                │
│  │     列表向下间距 [9]                  │
│  │     浅色背景图 → [已设置/未设置]       │
│  │     深色背景图 → [已设置/未设置]       │
│  │     背景填充模式 → [填充模式]          │
│  │     深色模式对齐方式 → [底部对齐]       │
│  ├─ ☑ 隐藏信息卡片                       │
│  └─ ☑ 开启资料圆角                       │
│        圆角大小 [18]                     │
│        边距大小 [9]                      │
│        背景颜色 ■                        │
│        描边大小 [2.0]                    │
├──────────────────────────────────────────┤
│ 卡片背景设置 ───────────────────────────  │  ← 旧的正常能用
│  ☑ 信息卡片背景 + 14 项                  │
└──────────────────────────────────────────┘
```