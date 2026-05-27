# UI 统一化执行步骤 - Round 2

> 目标：卡片容器、Section Header、导航行、可编辑行全面统一  
> 日期：2026-05-28  
> 风险等级：中（涉及 Setting*Controller 页面行为变更，需逐个验证）

---

## 一、现状速览

| 组件 | 当前评级 | WP*VC 方式 | Setting*Controller 方式 | 问题 |
|------|---------|-----------|------------------------|------|
| 2.2 卡片容器 | B | `WPMakeCard(y,w)` | `addTableGroupAtY:width:` | 代码重复，功能等效 |
| 2.3 Section Header | B | `WPMakeSectionHeader` | `addSectionHeader:y:width:` | 大写差异、4px缩进差异 |
| 2.4 导航行 | B | `WPAddNavRow` | `addNavRowInGroup:...` | subtitle/回调机制不同 |
| 2.5 可编辑行 | B | `WPAddEditableRowWithArrow` | `addInputRowInGroup:` | 弹窗 vs 内联，保存机制不同 |

---

## 二、2.2 卡片容器 — 统一为 WPMakeCard

### 难度：低（1 行改动）

`addTableGroupAtY:` 与 `WPMakeCard` 功能完全等效，只是多了一步自动 `addSubview` 到 `contentView`。直接让基类方法调用 `WPMakeCard`。

### 2.2.1 修改 SettingCategoryController.m

**文件**: [SettingCategoryController.m](file:///www/wwwroot/ios/WeChatPlugin/Settings/Common/SettingCategoryController.m#L160-L169)

```objc
// 修改前
- (UIView *)addTableGroupAtY:(CGFloat)y width:(CGFloat)w {
    UIView *group = [[UIView alloc] initWithFrame:CGRectMake(kPad, y, w - kPad * 2, 0)];
    group.backgroundColor = cardBgColor();
    group.layer.cornerRadius = kRadius;
    if (@available(iOS 13.0, *)) group.layer.cornerCurve = kCACornerCurveContinuous;
    group.clipsToBounds = YES;
    [self.contentView addSubview:group];
    [group release];
    return group;
}

// 修改后
- (UIView *)addTableGroupAtY:(CGFloat)y width:(CGFloat)w {
    UIView *group = WPMakeCard(y, w);
    [self.contentView addSubview:group];
    return group;
}
```

> WPMakeCard 已经设置了 `backgroundColor`、`cornerRadius`、`cornerCurve`、`clipsToBounds`，无需重复。`group` 由 WPMakeCard 返回时已 autorelease（MRC alloc → 调用方持有），`addSubview` 后由 contentView 持有，base SDK 会自动管理。

### 2.2.2 不影响调用方

所有 Setting*Controller 子类调用 `[self addTableGroupAtY:y width:w]` 无需修改，因为接口签名和行为完全不变。

### 验证

所有 Setting*Controller 页面卡片外观与修改前一致（颜色、圆角、内边距均相同）。

---

## 三、2.3 Section Header — 统一为 WPMakeSectionHeader

### 难度：中（需要处理 uppercase 差异）

核心差异：
- **uppercaseString**: Setting*Controller 有，WP*VC 没有
- **x 偏移**: WP*VC +4px
- **宽度**: WP*VC 窄 8px

### 方案：选择 WP*VC 样式，让 Setting*Controller 适配

理由：WP*VC 样式不带 `.uppercaseString` 更通用；`.uppercaseString` 可在调用方自行处理。

### 3.1 修改 WPMakeSectionHeader（可选：增加 uppercase 参数）

**如果**保留 Setting*Controller 的大写风格，增加 optional 参数：

**文件**: [WPCommonUI.h](file:///www/wwwroot/ios/WeChatPlugin/Modules/SettingEntry/WPCommonUI.h)

```objc
// L22 附近，修改声明
UILabel *WPMakeSectionHeader(NSString *text, CGFloat top, CGFloat w);
// 新增重载
UILabel *WPMakeSectionHeaderUppercase(NSString *text, CGFloat top, CGFloat w);
```

**文件**: [WPCommonUI.m](file:///www/wwwroot/ios/WeChatPlugin/Modules/SettingEntry/WPCommonUI.m)

```objc
// L48-54 之后添加
UILabel *WPMakeSectionHeaderUppercase(NSString *text, CGFloat top, CGFloat w) {
    UILabel *l = WPMakeSectionHeader(text, top, w);
    l.text = text.uppercaseString;
    return l;
}
```

### 3.2 修改 SettingCategoryController.m

**文件**: [SettingCategoryController.m](file:///www/wwwroot/ios/WeChatPlugin/Settings/Common/SettingCategoryController.m#L178-L186)

```objc
// 修改前
- (CGFloat)addSectionHeader:(NSString *)text y:(CGFloat)y width:(CGFloat)w {
    UILabel *l = [[UILabel alloc] initWithFrame:CGRectMake(kPad, y, w - kPad * 2, 20)];
    l.text = text.uppercaseString;
    l.font = [UIFont systemFontOfSize:13 weight:UIFontWeightSemibold];
    l.textColor = textSecondary();
    [self.contentView addSubview:l];
    [l release];
    return y + 32;
}

// 修改后
- (CGFloat)addSectionHeader:(NSString *)text y:(CGFloat)y width:(CGFloat)w {
    UILabel *l = WPMakeSectionHeaderUppercase(text, y, w);
    // 调整 x/w 以匹配原样式（WP*VC 默认有 +4px 偏移和 -8px 宽度）
    CGRect f = l.frame;
    f.origin.x = kPad;                  // 移除 +4 偏移
    f.size.width = w - kPad * 2;        // 移除 -8 宽度
    l.frame = f;
    [self.contentView addSubview:l];
    [l release];
    return y + 32;
}
```

**或者更简单的方案**：不新增函数，直接保留颜色但统一结构：

```objc
// 修改后（最简单方案）
- (CGFloat)addSectionHeader:(NSString *)text y:(CGFloat)y width:(CGFloat)w {
    UILabel *l = WPMakeSectionHeader(text, y, w);  // 复用统一创建
    l.text = text.uppercaseString;                   // 保留大写
    // 适配 x/w
    CGRect f = l.frame;
    f.origin.x = kPad;
    f.size.width = w - kPad * 2;
    l.frame = f;
    [self.contentView addSubview:l];
    [l release];
    return y + 32;
}
```

> 推荐此方案：不新增 API，最简洁。

### 验证

所有 Setting*Controller 页面 Section Header 外观不变（x=16, w=w-32, uppercase）

---

## 四、2.4 导航行 — 部分统一

### 难度评估

`addNavRowInGroup:` 的核心价值是 **subtitle 支持**（WPAddNavRow 没有）和 **不同的回调机制**（tag+selector vs action+onNavigate）。这两点无法简单抹平。

### 方案：不清零，仅视觉统一

1. `addNavRowInGroup:` 内部调用 `WPDrawDisclosureArrow`（**已在做** ✅）
2. 保留 subtitle 支持（Setting*Controller 特色功能）
3. 回调机制保持各自特色（tag+selector vs action+onNavigate）

**结论**：§2.4 已经足够统一（共用箭头、共用字体/颜色映射），**暂不改动**。

---

## 五、2.5 可编辑行 — 全部改为弹窗编辑

### 难度：中高（涉及保存机制切换）

目前状态：

| 系统 | 编辑方式 | 保存机制 | 使用页面 |
|------|---------|---------|---------|
| WP*VC | `WPAddEditableRowWithArrow` → UIAlertController 弹窗 | NSUserDefaults (editNSKey/editDictKey) | WPUIPlaceholderTextVC, WPUISimplifyVC, WPUIAttachmentLayoutVC |
| Setting*Controller | `addInputRowInGroup:` → UITextField 内联编辑 | PluginConfig KVC (autoSaveTextField:) | SettingRevokeController, SettingMessageTimeController, SettingRedEnvelopController |

### 方案

统一走 `WPAddEditableRowWithArrow` 弹窗编辑。Setting*Controller 的 `addInputRowInGroup:` 改为调用 `WPAddEditableRowWithArrow`，通过 associated object 传递 PluginConfig key，在现有的 `WeChatPluginSwitchHandler.onEditRowTap:` 中增加 PluginConfig 保存分支。

### 5.1 修改 WeChatPluginSwitchHandler.onEditRowTap:

**文件**: 涉及文件为 `WPUISimplifyVC.m`（WeChatPluginSwitchHandler category 在此文件中）

在 [WPUISimplifyVC.m](file:///www/wwwroot/ios/WeChatPlugin/Modules/SettingEntry/WPUISimplifyVC.m) 的 `onEditRowTap:` 方法末尾增加 PluginConfig 保存逻辑：

```objc
// 现有代码（L19-79）末尾，在 "[d synchronize];" 之后增加：

// 新增：支持 PluginConfig 保存（Setting*Controller 迁移用）
NSString *configKey = objc_getAssociatedObject(sender, "editConfigKey");
if (configKey && !needsRestart) {
    PluginConfig *config = [PluginConfig shared];
    @try {
        // 数值类型转换为 float
        if (newText && newText.length > 0) {
            [config setValue:@([newText floatValue]) forKey:configKey];
        }
    } @catch (NSException *e) {
        // 字符串类型 fallback
        [config setValue:newText forKey:configKey];
    }
    [config save];
}
```

> 注意：需要 `#import "../../Config/PluginConfig.h"` 在文件顶部。

### 5.2 修改 SettingCategoryController.m — addInputRowInGroup:

**文件**: [SettingCategoryController.m](file:///www/wwwroot/ios/WeChatPlugin/Settings/Common/SettingCategoryController.m#L284-L309)

```objc
// 修改前（284-309 行，UITextField 内联编辑）
- (CGFloat)addInputRowInGroup:(UIView *)group title:(NSString *)title key:(NSString *)key value:(NSString *)value hint:(NSString *)hint cy:(CGFloat)cy width:(CGFloat)w {
    CGFloat gw = w - kPad * 2;
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kCellHPadding, cy, 80, kRowH)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = textPrimary();
    [group addSubview:tl];
    [tl release];

    UITextField *tf = [[UITextField alloc] initWithFrame:CGRectMake(kCellHPadding + 84, cy, gw - kCellHPadding * 2 - 94, kRowH)];
    tf.font = [UIFont systemFontOfSize:14];
    tf.textColor = textSecondary();
    tf.placeholder = hint;
    tf.text = value;
    tf.textAlignment = NSTextAlignmentRight;
    tf.returnKeyType = UIReturnKeyDone;
    tf.clearButtonMode = UITextFieldViewModeWhileEditing;
    [tf addTarget:self action:@selector(textFieldChanged:) forControlEvents:UIControlEventEditingChanged];
    [tf addTarget:self action:@selector(textFieldDone:) forControlEvents:UIControlEventEditingDidEndOnExit];
    [tf addTarget:self action:@selector(textFieldDone:) forControlEvents:UIControlEventEditingDidEnd];
    objc_setAssociatedObject(tf, "key", key, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [group addSubview:tf];
    [tf release];
    self.inputFields[key] = tf;
    return cy + kRowH;
}

// 修改后（弹窗编辑）
- (CGFloat)addInputRowInGroup:(UIView *)group title:(NSString *)title key:(NSString *)key value:(NSString *)value hint:(NSString *)hint cy:(CGFloat)cy width:(CGFloat)w {
    id handler = [objc_getClass("WeChatPluginSwitchHandler") sharedInstance];
    NSString *displayValue = (value && value.length > 0) ? value : hint;

    UIButton *row = WPAddEditableRowWithArrow(group, cy, w, title, displayValue, handler);
    objc_setAssociatedObject(row, "editConfigKey", key, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    // 存储 hint 以便弹窗中使用
    objc_setAssociatedObject(row, "editConfigHint", hint, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    return cy + kRowH;
}
```

### 5.3 清理 SettingCategoryController 中不再需要的代码

`addInputRowInGroup:` 改为弹窗后，以下代码变为 dead code：

1. **`self.inputFields` 字典** — 不再需要记录 UITextField 引用。可安全删除（需要确认 `inputFields` 是否有其他用途）。
2. **`textFieldChanged:` 方法** (L482-484) — 可删除
3. **`textFieldDone:` 方法** (L507-510) — 可删除
4. **`autoSaveTextField:` 方法** (L512-544) — 可删除（最长的清理项）
5. **`touchesBegan:` 中的 `endEditing`** — 保留（其他页面可能用到）

### 5.4 影响范围

以下是使用 `addInputRowInGroup:` 的文件和调用数：

| 文件 | 调用数 | 涉及字段 |
|------|-------|---------|
| `SettingRevokeController.m` | 1 | 频率限制(秒) |
| `SettingMessageTimeController.m` | 4 | 字体大小、水平/垂直偏移、气泡扩展宽度 |
| `SettingRedEnvelopController.m` | 6 | 延迟时间、关键词、回复内容、确认延迟、金额上限、确认回复 |

共 **3 个文件、11 处调用**。

### 5.5 注意事项

1. **原 hint 信息保留**：原 `addInputRowInGroup:` 的 hint 参数作为默认显示文字。
2. **弹窗中显示 hint**：在 `WeChatPluginSwitchHandler.onEditRowTap:` 中读取 `editConfigHint` 作为 placeholder。
3. **空值处理**：当用户清空输入时，需要处理 PluginConfig 的默认值。建议在 `onEditRowTap:` 中增加 `editConfigDefault` associated key。
4. **`inputFields` 字典**：检查是否其他地方引用了 `self.inputFields`，如果有则需要保留或重构。目前看只有 `autoSaveTextField:` 使用，可以安全删除。

---

## 六、变更统计

| 文件 | 操作 | 行数变化 |
|------|------|---------|
| `SettingCategoryController.m` | addTableGroupAtY 内联 WPMakeCard | -9 行 |
| `SettingCategoryController.m` | addSectionHeader 内联 WPMakeSectionHeader | -5 行 |
| `SettingCategoryController.m` | addInputRowInGroup → WPAddEditableRowWithArrow | ~30 行（删除 autoSaveTextField 等方法） |
| `WPCommonUI.h` | (可选) WPMakeSectionHeaderUppercase 声明 | +1 行（或不加） |
| `WPCommonUI.m` | (可选) WPMakeSectionHeaderUppercase 实现 | +4 行（或不加） |
| `WPUISimplifyVC.m` | onEditRowTap 增加 PluginConfig 保存分支 | +10 行 |

**净效果**：净减约 50 行 + 统一 4 个组件。

---

## 七、推荐执行顺序

| 步骤 | 组件 | 风险 |
|------|------|------|
| 1 | 2.2 卡片容器 → WPMakeCard | 最低 |
| 2 | 2.3 Section Header → WPMakeSectionHeader | 低 |
| 3 | 2.5 可编辑行 → WPAddEditableRowWithArrow | 中 |
| 4 | 2.4 导航行 — **不改动** | 无 |

> 建议从低风险开始，每步编译验证后继续。