# X/Y 偏移深浅合并改造文档

## 现状

目前有4个偏移属性，区分浅色/深色模式：

```objc
@property (nonatomic, assign) CGFloat cardBgLightOffsetY;   // 浅色Y轴偏移
@property (nonatomic, assign) CGFloat cardBgDarkOffsetY;     // 深色Y轴偏移
@property (nonatomic, assign) CGFloat cardBgLightOffsetX;    // 浅色X轴偏移
@property (nonatomic, assign) CGFloat cardBgDarkOffsetX;     // 深色X轴偏移
```

在 `handleButtonLayout:` 中根据当前模式二选一：

```objc
// handleButtonLayout: 第441-442行
CGFloat ox = isDark ? config.cardBgDarkOffsetX : config.cardBgLightOffsetX;
CGFloat oy = isDark ? config.cardBgDarkOffsetY : config.cardBgLightOffsetY;

// 第521-524行（异步加载背景图）
CGFloat userOy = capturedIsDark ? cfg.cardBgDarkOffsetY : cfg.cardBgLightOffsetY;
```

**问题**：跟层级合并的理由一样——偏移量表示"背景图上下/左右偏移多少"，用户不会根据深浅模式分别设置。合并后减半参数数量，新 UI 也更简洁。

---

## 一、改动清单

### 1.1 属性定义

**PluginConfig.h**（第 204-207 行）— 替换为单个属性：

```objc
// 改前：
@property (nonatomic, assign) CGFloat cardBgLightOffsetY;
@property (nonatomic, assign) CGFloat cardBgDarkOffsetY;
@property (nonatomic, assign) CGFloat cardBgLightOffsetX;
@property (nonatomic, assign) CGFloat cardBgDarkOffsetX;

// 改后：
@property (nonatomic, assign) CGFloat cardBgOffsetY;
@property (nonatomic, assign) CGFloat cardBgOffsetX;
```

### 1.2 读写逻辑

**PluginConfig.m — loadDefaults**（第 511-514 行）：

```objc
// 改前：
_cardBgLightOffsetY = [d floatForKey:[kPluginPrefix stringByAppendingString:@"CardBgLightOffsetY"]];
_cardBgDarkOffsetY = [d floatForKey:[kPluginPrefix stringByAppendingString:@"CardBgDarkOffsetY"]];
_cardBgLightOffsetX = [d floatForKey:[kPluginPrefix stringByAppendingString:@"CardBgLightOffsetX"]];
_cardBgDarkOffsetX = [d floatForKey:[kPluginPrefix stringByAppendingString:@"CardBgDarkOffsetX"]];

// 改后：
_cardBgOffsetY = [d floatForKey:[kPluginPrefix stringByAppendingString:@"CardBgOffsetY"]];
_cardBgOffsetX = [d floatForKey:[kPluginPrefix stringByAppendingString:@"CardBgOffsetX"]];
```

**PluginConfig.m — save**（第 744-747 行）：

```objc
// 改前：
[d setFloat:_cardBgLightOffsetY forKey:[kPluginPrefix stringByAppendingString:@"CardBgLightOffsetY"]];
[d setFloat:_cardBgDarkOffsetY forKey:[kPluginPrefix stringByAppendingString:@"CardBgDarkOffsetY"]];
[d setFloat:_cardBgLightOffsetX forKey:[kPluginPrefix stringByAppendingString:@"CardBgLightOffsetX"]];
[d setFloat:_cardBgDarkOffsetX forKey:[kPluginPrefix stringByAppendingString:@"CardBgDarkOffsetX"]];

// 改后：
[d setFloat:_cardBgOffsetY forKey:[kPluginPrefix stringByAppendingString:@"CardBgOffsetY"]];
[d setFloat:_cardBgOffsetX forKey:[kPluginPrefix stringByAppendingString:@"CardBgOffsetX"]];
```

### 1.3 Hook 代码

**ProfileCardBgHook.m — handleButtonLayout:**（第 441-442 行）：

```objc
// 改前：
CGFloat ox = isDark ? config.cardBgDarkOffsetX : config.cardBgLightOffsetX;
CGFloat oy = isDark ? config.cardBgDarkOffsetY : config.cardBgLightOffsetY;

// 改后：
CGFloat ox = config.cardBgOffsetX;
CGFloat oy = config.cardBgOffsetY;
```

**ProfileCardBgHook.m — 异步加载回调**（第 521-524 行）：

```objc
// 改前：
NSInteger alignment = capturedIsDark ? cfg.cardBgDarkAlignment : cfg.cardBgLightAlignment;
CGFloat userOy = capturedIsDark ? cfg.cardBgDarkOffsetY : cfg.cardBgLightOffsetY;

// 改后：
NSInteger alignment = capturedIsDark ? cfg.cardBgDarkAlignment : cfg.cardBgLightAlignment;
CGFloat userOy = cfg.cardBgOffsetY;  // 不再区分深浅
```

> 注意：`alignment`（对齐方式）仍然保留深浅区分，本次不改。

### 1.4 UI — 添加到新 UI

结合[旧 UI 删除方案](file:///www/wwwroot/ios/文档/WCRefine圆角功能分析/卡片背景页面新旧UI清理改造文档.md)，旧 UI 中4行偏移输入框会随旧 section 一并删除。需要在新 UI 的"使用背景素材"手风琴中补2行。

**SettingCardBackgroundController.m** — 在"使用背景素材"手风琴末尾（深色对齐方式之后，当前第112行之后）添加：

```objc
*e2y = [self addSeparatorInGroup:e2 cy:*e2y width:w];

CGFloat oy = cfg.cardBgOffsetY;
*e2y = [self addInputRowInGroup:e2
                          title:@"背景Y轴偏移"
                            key:@"cardBgOffsetY"
                          value:oy != 0 ? [NSString stringWithFormat:@"%.0f", oy] : nil
                           hint:@"0"
                     alertTitle:@"设置背景Y轴偏移"
                   alertMessage:@"请输入Y轴偏移值(-500~500像素)\n正值向上偏移，负值向下偏移"
                             cy:*e2y width:w];
*e2y = [self addSeparatorInGroup:e2 cy:*e2y width:w];

CGFloat ox = cfg.cardBgOffsetX;
*e2y = [self addInputRowInGroup:e2
                          title:@"背景X轴偏移"
                            key:@"cardBgOffsetX"
                          value:ox != 0 ? [NSString stringWithFormat:@"%.0f", ox] : nil
                           hint:@"0"
                     alertTitle:@"设置背景X轴偏移"
                   alertMessage:@"请输入X轴偏移值(-500~500像素)\n正值向右偏移，负值向左偏移"
                             cy:*e2y width:w];
```

---

## 二、执行步骤

| 步骤 | 文件 | 操作 | 行号 |
|------|------|------|------|
| 1 | PluginConfig.h | 4个旧属性 → 2个新属性 | 204-207 |
| 2 | PluginConfig.m:loadDefaults | 4行读 → 2行读 | 511-514 |
| 3 | PluginConfig.m:save | 4行写 → 2行写 | 744-747 |
| 4 | ProfileCardBgHook.m | 两处 `isDark ? dark : light` → 直接读 | 441-442, 521-524 |
| 5 | SettingCardBackgroundController.m | 新 UI "使用背景素材" 手风琴末尾添加2行 | ~112行后 |
| 6 | 验证编译 | `make package` 无报错 | - |

> 旧 UI 的4行偏移输入框随[旧 UI 删除方案](file:///www/wwwroot/ios/文档/WCRefine圆角功能分析/卡片背景页面新旧UI清理改造文档.md)一并清理，不需要单独处理。

---

## 三、不兼容旧数据

```objc
// ❌ 不要写迁移代码
```

旧 key `Mio_CardBgLightOffsetY`、`Mio_CardBgDarkOffsetY`、`Mio_CardBgLightOffsetX`、`Mio_CardBgDarkOffsetX` 残留在 NSUserDefaults 中，永远不会被读取。

---

## 四、合并前后对比

| | 改前 | 改后 |
|--|------|------|
| 属性数 | 4个（lightY + darkY + lightX + darkX） | 2个（Y + X） |
| UI 入口 | 旧 UI 中4个输入框 | 新 UI 中2个输入框 |
| Hook 代码 | `isDark ? dark : light` 三元 x2 | 直接读取 `cardBgOffsetX/Y` |
| 用户心智负担 | 需配置4次 | 配置2次即可 |