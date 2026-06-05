# 资料卡片美化 — 新 UI 替换旧 UI

> 旧 UI（卡片背景设置）整体删除，新 UI（资料卡片美化）接管全部功能。

---

## 一、总体变更一览

| 操作 | 涉及文件 |
|------|---------|
| 旧 UI 删除 | `SettingCardBackgroundController.m` — 删除整个旧分组 buildUI 代码 |
| Hook 守卫切换 | `ProfileCardBgHook.m` — `cardBgEnabled` → `cardBgBeautifyEnabled` |
| 旧属性清理（可选） | `PluginConfig.h/.m` — 可删 `cardBgEnabled`，也可留 |

---

## 二、SettingCardBackgroundController.m — 删除旧 UI

### 删除内容

在 `buildUI` 方法中，删除以下部分：

1. **`y = [self addSectionHeader:@"卡片背景设置" ...];`** 整行
2. **旧的分组 `addTableGroupAtY` → `finishGroup`** 整个 block（约 14 个子项）
3. `masterSwitchKeys` 中旧 key `cardBgEnabled` 相关的 addObject（如果有）
4. 旧 group 关联的分隔线代码

### 删除后保留的代码

```

- (void)buildUI {
    [self clearContent];
    self.masterSwitchKeys = [NSMutableSet set];

    PluginConfig *config = [PluginConfig shared];
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;

    // ========== ★ 资料卡片美化（唯一分组） ==========
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

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
}
```

---

## 三、ProfileCardBgHook.m — 守卫切换到新总开关

### 3.1 handleButtonLayout 守卫

```diff
  + (void)handleButtonLayout:(UIView *)button {
      PluginConfig *config = [PluginConfig shared];

-     if (!config.cardBgEnabled && !config.globalCornerRadiusEnabled) return;
+     if (!config.cardBgBeautifyEnabled && !config.globalCornerRadiusEnabled) return;
```

### 3.2 needsFullCardBg → needsNewCardBg

```diff
-     BOOL needsFullCardBg = config.cardBgEnabled;
+     BOOL needsNewCardBg = config.cardBgBeautifyEnabled;
```

然后把旧代码中所有 `needsFullCardBg` 引用替换为 `needsNewCardBg`。

### 3.3 cardBgMaterialEnabled 额外守卫（背景图加载部分）

```objc
// 在背景图加载代码前（约原第 400 行），加一道材料开关判断
if (needsNewCardBg && config.cardBgMaterialEnabled) {
    // ... 背景图加载逻辑 ...
}
```

### 3.4 删除新 UI 专有的代码块

如果之前按迁移文档加过这段代码，现在删掉：

```objc
// ★ 新 UI：隐藏信息卡片（旧 UI 不开时才执行，避免重复） ← 删掉整个 if block
```

因为现在只有新 UI，不再需要 `!config.cardBgEnabled` 的共存判断，隐藏卡片统一走原 HideCard 分支。

---

## 四、整体变更对照表

| 文件 | 改动 | 说明 |
|------|------|------|
| `SettingCardBackgroundController.m` | 删除 oldGroup 全部代码 | 旧 UI 消失 |
| `SettingCardBackgroundController.m` | 保留 newGroup 唯一分组 | 新 UI 独占 |
| `ProfileCardBgHook.m:364` | `cardBgEnabled` → `cardBgBeautifyEnabled` | 守卫切换到新总开关 |
| `ProfileCardBgHook.m:396` | `needsFullCardBg` → `needsNewCardBg` | 变量改名 |
| `ProfileCardBgHook.m:~400` | 背景图加载加 `cardBgMaterialEnabled` 守卫 | 材料开关控制背景图 |
| `ProfileCardBgHook.m` | 删除新 UI 兼容块（如果之前加过） | 不再需要 |
| `PluginConfig.h/.m` | `cardBgEnabled` 可删可不删 | 无引用后清理 |

---

## 五、执行后效果

```
┌─ 资料卡片美化 ───────────────────────────────┐
│  ☑ 资料卡片美化（总开关: cardBgBeautifyEnabled）│
│  ├─ ☑ 使用背景素材                          │
│  │    ├ 高度/间距/背景图/填充/对齐             │
│  ├─ ☑ 隐藏信息卡片                          │
│  └─ ☑ 开启资料圆角                          │
│       ├ 圆角/边距/背景色/描边                  │
└───────────────────────────────────────────────┘

旧 UI 完全删除，菜单入口名可改为「资料卡片美化」。
```