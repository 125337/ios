# 圆角设置页面 UI 重组方案

## 现状 vs 目标

### 当前 UI 结构（两个 section）

```
┌─ 全局圆角 ──────────────────────────┐
│ ┌─ 主页圆角 (手风琴) ──────────────┐ │
│ │  ├─ 我的页面                      │ │
│ │  ├─ 联系人页面                    │ │
│ │  └─ 发现页面                      │ │
│ └────────────────────────────────────┘ │
└────────────────────────────────────────┘

┌─ 圆角参数 ──────────────────────────┐
│ ┌──────────────────────────────────┐ │
│ │ 搜索框圆角                        │ │
│ │ Cell边框开关                      │ │
│ │ Cell圆角半径                      │ │
│ │ Cell左右边距                      │ │
│ │ 边框宽度                          │ │
│ │ Cell背景色                        │ │
│ │ 边框颜色                          │ │
│ │ 资料卡边框                        │ │
│ │ 资料卡边框宽度                    │ │
│ │ 资料卡边框颜色                    │ │
│ └──────────────────────────────────┘ │
└────────────────────────────────────────┘
```

### 目标 UI 结构（一个 section，5 个卡片）

```
┌─ 全局圆角 ──────────────────────────┐
│                                      │
│ ┌─ 主页圆角 (手风琴) ──────────────┐ │
│ │  ├─ 我的页面                      │ │
│ │  ├─ 联系人页面                    │ │
│ │  └─ 发现页面                      │ │
│ └────────────────────────────────────┘ │
│                                        │
│ ┌─ 搜索框圆角 ─────────────────────┐ │
│ │ [搜索框圆角]                       │ │
│ └────────────────────────────────────┘ │
│                                        │
│ ┌─ Cell 边框 (手风琴) ────────────┐ │
│ │ [Cell边框]                       │ │  ← 主开关
│ │  ├─ 边框宽度 (input)             │ │
│ │  └─ 边框颜色 (color,支持深色)    │ │
│ └────────────────────────────────────┘ │
│                                        │
│ ┌─ Cell 外观 (平铺，无开关) ────┐ │
│ │  Cell圆角半径 (input)               │ │
│ │  Cell左右边距 (input)               │ │
│ │  Cell背景色 (color,支持深色)        │ │
│ └────────────────────────────────────┘ │
│                                        │
│ ┌─ 资料卡边框 (手风琴) ──────────┐ │
│ │ [资料卡边框]                     │ │  ← 主开关
│ │  ├─ 边框宽度 (input)             │ │
│ │  └─ 边框颜色 (color,支持深色)    │ │
│ └────────────────────────────────────┘ │
└────────────────────────────────────────┘
```

### 变更说明

| 项目 | 改前 | 改后 |
|------|------|------|
| 搜索框圆角 | 在圆角参数大组中，sub-switch | **独立一个卡片**，sub-switch |
| Cell 边框 | 在圆角参数大组中，sub-switch | **独立卡片 + 主开关手风琴**，子项：边框宽度、边框颜色 |
| 边框宽度 | 在"边框宽度"名称下 | 移入"Cell 边框"卡片内 |
| 边框颜色 | 在"边框颜色"名称下 | 移入"Cell 边框"卡片内 |
| Cell 外观 | 无独立卡片 | **新卡片「Cell 外观」**，平铺：圆角半径、边距、背景色 |
| Cell圆角半径 | 圆角参数中 | 移入"Cell 外观"卡片 |
| Cell左右边距 | 圆角参数中 | 移入"Cell 外观"卡片 |
| Cell背景色 | 圆角参数中 | 移入"Cell 外观"卡片 |
| 资料卡边框 | 在圆角参数大组中，sub-switch | **独立卡片 + 主开关手风琴**，子项：边框宽度、边框颜色 |
| 资料卡边框宽度 | 圆角参数中 | 移入"资料卡边框"卡片内 |
| 资料卡边框颜色 | 圆角参数中 | 移入"资料卡边框"卡片内 |
| 「圆角参数」section | 存在 | **删除**，所有内容并入「全局圆角」下 |

---

## 改动明细

### 文件：SettingListCornerRadiusController.m

#### 1. `buildUI` 方法重构

删除 `圆角参数` section（L62-160），在 `全局圆角 section` 下按顺序新增 4 个卡片。

**改后完整 `buildUI` 代码：**

```objc
- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }
    self.masterSwitchKeys = [NSMutableSet set];

    PluginConfig *config = [PluginConfig shared];
    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;

    // ════════════════════════════════════
    // ★ 全局圆角
    // ════════════════════════════════════
    y = [self addSectionHeader:@"全局圆角" y:y width:w];

    // ─── 卡片1：主页圆角（手风琴） ───
    // (保持不变，直接从原 L29-L60 迁移过来)
    UIView *globalGroup = [self addTableGroupAtY:y width:w];
    CGFloat gcy = 0;

    gcy = [self addMasterSwitchRowInGroup:globalGroup
                                     title:@"主页圆角"
                                       key:@"globalCornerRadiusEnabled"
                                      isOn:config.globalCornerRadiusEnabled
                                subBuilder:^(UIView *expand, CGFloat *ecy) {
        PluginConfig *cfg = [PluginConfig shared];

        *ecy = [self addSubSwitchRowInGroup:expand
                                      title:@"我的页面"
                                        key:@"globalCornerMyPageEnabled"
                                       isOn:cfg.globalCornerMyPageEnabled
                                         cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        *ecy = [self addSubSwitchRowInGroup:expand
                                      title:@"联系人页面"
                                        key:@"globalCornerContactsPageEnabled"
                                       isOn:cfg.globalCornerContactsPageEnabled
                                         cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        *ecy = [self addSubSwitchRowInGroup:expand
                                      title:@"发现页面"
                                        key:@"globalCornerDiscoverPageEnabled"
                                       isOn:cfg.globalCornerDiscoverPageEnabled
                                         cy:*ecy width:w];
    } cy:gcy width:w];

    y = [self finishGroup:globalGroup atY:y height:gcy];
    y += 8;

    // ─── 卡片2：搜索框圆角（普通开关） ───
    UIView *searchGroup = [self addTableGroupAtY:y width:w];
    CGFloat scy = 0;

    scy = [self addSubSwitchRowInGroup:searchGroup
                                 title:@"搜索框圆角"
                                   key:@"listSearchCornerRadius"
                                  isOn:config.listSearchCornerRadius
                                    cy:scy width:w];

    y = [self finishGroup:searchGroup atY:y height:scy];
    y += 8;

    // ─── 卡片3：Cell 边框（手风琴） ───
    UIView *borderGroup = [self addTableGroupAtY:y width:w];
    CGFloat bocy = 0;

    bocy = [self addMasterSwitchRowInGroup:borderGroup
                                     title:@"Cell 边框"
                                       key:@"listCellBorder"
                                      isOn:config.listCellBorder
                                subBuilder:^(UIView *expand, CGFloat *ecy) {
        PluginConfig *c3 = [PluginConfig shared];

        // 边框宽度
        NSString *bwStr = c3.listCellBorderWidth > 0
            ? [NSString stringWithFormat:@"%.1f", c3.listCellBorderWidth] : nil;
        *ecy = [self addInputRowInGroup:expand
                                  title:@"边框宽度"
                                    key:@"listCellBorderWidth"
                                  value:bwStr
                                   hint:@"2.0"
                             alertTitle:@"设置边框宽度"
                           alertMessage:@"请输入边框宽度(0.5-5.0)"
                                     cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        // 边框颜色（支持深色）
        *ecy = [self addColorRowInGroup:expand
                                  title:@"边框颜色"
                                    key:@"listCellBorderColor"
                                  value:c3.listCellBorderColor
                                     cy:*ecy width:w
                               darkKey:@"listCellBorderColorDarkHex"
                             darkValue:c3.listCellBorderColorDarkHex];

    } cy:bocy width:w];

    y = [self finishGroup:borderGroup atY:y height:bocy];
    y += 8;

    // ─── 卡片4：Cell 外观（平铺，无主开关） ───
    UIView *appearGroup = [self addTableGroupAtY:y width:w];
    CGFloat acy = 0;

    PluginConfig *c4 = [PluginConfig shared];

    NSString *crStr = c4.listCellCornerRadius > 0
        ? [NSString stringWithFormat:@"%.0f", c4.listCellCornerRadius] : nil;
    acy = [self addInputRowInGroup:appearGroup
                             title:@"Cell圆角半径"
                               key:@"listCellCornerRadius"
                             value:crStr
                              hint:@"18"
                        alertTitle:@"设置列表圆角半径"
                      alertMessage:@"请输入圆角半径(5-30像素)"
                                cy:acy width:w];
    acy = [self addSeparatorInGroup:appearGroup cy:acy width:w];

    NSString *lmStr = c4.listCellMargin > 0
        ? [NSString stringWithFormat:@"%.0f", c4.listCellMargin] : nil;
    acy = [self addInputRowInGroup:appearGroup
                             title:@"Cell左右边距"
                               key:@"listCellMargin"
                             value:lmStr
                              hint:@"9"
                        alertTitle:@"设置Cell左右边距"
                      alertMessage:@"请输入边距值(0-30像素)"
                                cy:acy width:w];
    acy = [self addSeparatorInGroup:appearGroup cy:acy width:w];

    // Cell 背景色（浅色+深色双预览）
    acy = [self addColorRowInGroup:appearGroup
                             title:@"Cell背景色"
                               key:@"listCellLightBgColor"
                             value:c4.listCellLightBgColor
                                cy:acy width:w
                          darkKey:@"listCellDarkBgColor"
                        darkValue:c4.listCellDarkBgColor];

    y = [self finishGroup:appearGroup atY:y height:acy];
    y += 8;

    // ─── 卡片5：资料卡边框（手风琴） ───
    UIView *pcBorderGroup = [self addTableGroupAtY:y width:w];
    CGFloat pcy = 0;

    pcy = [self addMasterSwitchRowInGroup:pcBorderGroup
                                     title:@"资料卡边框"
                                       key:@"listProfileCardBorderEnabled"
                                      isOn:config.listProfileCardBorderEnabled
                                subBuilder:^(UIView *expand, CGFloat *ecy) {
        PluginConfig *c5 = [PluginConfig shared];

        // 边框宽度
        NSString *bwStr = c5.listProfileCardBorderWidth > 0
            ? [NSString stringWithFormat:@"%.1f", c5.listProfileCardBorderWidth] : nil;
        *ecy = [self addInputRowInGroup:expand
                                  title:@"边框宽度"
                                    key:@"listProfileCardBorderWidth"
                                  value:bwStr
                                   hint:@"2.0"
                             alertTitle:@"设置资料卡边框宽度"
                           alertMessage:@"请输入边框宽度(0.5-5.0)"
                                     cy:*ecy width:w];
        *ecy = [self addSeparatorInGroup:expand cy:*ecy width:w];

        // 边框颜色（支持深色）
        *ecy = [self addColorRowInGroup:expand
                                  title:@"边框颜色"
                                    key:@"listProfileCardBorderColor"
                                  value:c5.listProfileCardBorderColor
                                     cy:*ecy width:w
                               darkKey:@"listProfileCardBorderColorDarkHex"
                             darkValue:c5.listProfileCardBorderColorDarkHex];

    } cy:pcy width:w];

    y = [self finishGroup:pcBorderGroup atY:y height:pcy];
    y += 8;

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
    WPLog(@"UI", @"[Sub] SettingListCornerRadiusController buildUI done");
}
```

#### 2. `switchChanged:` 方法调整

**变动原因**：`listCellBorder` 和 `listProfileCardBorderEnabled` 从 sub-switch 升级为 master switch，需要 `addMasterSwitchRowInGroup` 展开/折叠子项。而父类的 master switch 展开/折叠由 `switchChanged` 中的 `self.masterSwitchKeys` + `[self buildUI]` 触发。

但当前的 `switchChanged` 只调 `showRestartAlert`，没有调 `buildUI`。master switch 变化后必须 rebuild 才能正确展开/折叠。

```objc
- (void)switchChanged:(UISwitch *)sender {
    [super switchChanged:sender];

    NSString *key = objc_getAssociatedObject(sender, "key");
    if (!key) return;

    // ★ 需要重启的开关（值变化后需重启微信才能生效）
    if ([key isEqualToString:@"globalCornerRadiusEnabled"]
        || [key isEqualToString:@"globalCornerMyPageEnabled"]
        || [key isEqualToString:@"globalCornerContactsPageEnabled"]
        || [key isEqualToString:@"globalCornerDiscoverPageEnabled"]
        || [key isEqualToString:@"listSearchCornerRadius"]) {
        [MioRestartHelper showRestartAlertFromVC:self];
        return;
    }

    // ★ 主开关手风琴（需要 rebuild 展开/折叠子项 + 重启生效）
    if ([key isEqualToString:@"listCellBorder"]
        || [key isEqualToString:@"listProfileCardBorderEnabled"]) {
        [self buildUI];
        [MioRestartHelper showRestartAlertFromVC:self];
        return;
    }
}
```

**注意**：`[self buildUI]` 必须放在 `[super switchChanged:sender]` 之后，因为父类方法会更新配置值，buildUI 需要读取最新的配置值来确定手风琴的展开/折叠状态。

---

## 涉及文件

| 文件 | 改动类型 | 说明 |
|------|:--------:|------|
| `SettingListCornerRadiusController.m` | 重构 | `buildUI` 方法、`switchChanged` 方法 |
| 其他文件 | 无 | 纯 UI 调整，不涉及 Config/Hook |

**0 个新增属性，0 个删除属性，0 处逻辑变更。** 只是 UI 布局重组。

---

## 改后场景验证

| 操作 | 预期行为 |
|------|---------|
| 打开「圆角设置」页面 | 显示「全局圆角」一个 section，5 个卡片 |
| 点击「主页圆角」主开关 | 展开/折叠子项（我的页面、联系人页面、发现页面），弹出重启提示 |
| 点击「搜索框圆角」 | 开关实时响应，弹出重启提示 |
| 点击「Cell 边框」主开关 | 展开/折叠子项（边框宽度、边框颜色），弹出重启提示 |
| 修改「边框宽度」 | 输入框保存值，生效需重启 |
| 修改「边框颜色」 | 颜色选择器保存值，生效需重启 |
| 「Cell 外观」区域 | 始终显示 Cell圆角半径、左右边距、背景色三个行（无折叠） |
| 点击「资料卡边框」主开关 | 展开/折叠子项（边框宽度、边框颜色），弹出重启提示 |
| 修改资料卡边框值 | 输入框/颜色选择器正常保存 |

---

## 注意事项

1. `listCellBorder` 和 `listProfileCardBorderEnabled` 升级为 master switch 后，原有的 `addSubSwitchRowInGroup` 调用改为 `addMasterSwitchRowInGroup`，父类的 `masterSwitchKeys` set 会自动记录这些 key 用于展开/折叠
2. `[self buildUI]` 必须在 `[super switchChanged:]` 之后调用，确保 `super` 已更新配置值
3. 「搜索框圆角」在 switchChanged 中保留原有重启逻辑，不改为 buildUI 方式（它没有子项，无需折叠）
4. 由于 `listProfileCardBorderEnabled` 等属性在 Hook 代码中**从未被读取**，开启此主开关并重启后仍**不会产生边框效果**。这是一个独立的问题，不在本次 UI 重组范围内。