# 颜色选择器 VC 组件化改造 · 剩余模块全部分拆

## 一、现状分析

WPHueSlider 和 WPSaturationBrightnessView 已独立，目前 VC 还剩：

```
WPHsvColorPickerController.m (约 790 行)
├── ✅ WPHueSlider                 已独立
├── ✅ WPSaturationBrightnessView  已独立
├── ✅ WPColorUtil                 已独立
│
├── ❌ 颜色预览块 + 模式切换         ~15 行 (简单)
├── ❌ Hex 输入区 (label+textfield) ~35 行
├── ❌ RGB 控制区 (R/G/B×3 组)     ~90 行  ★最大块
├── ❌ Alpha 控制区 (slider+field)  ~45 行
├── ❌ 预设/莫兰迪/历史色块          ~170 行 ★最复杂块
├── ❌ 键盘工具栏                   ~15 行
└── ❌ 布局约束 (setupConstraints)   ~130 行 ★最难维护
```

## 二、方案概览

新增 3 个组件，VC 从 **790 行 → ~300 行**：

```
Config/
├── WPColorUtil.h/.m              ✅ 已有
├── WPHueSlider.h/.m              ✅ 已有
├── WPSaturationBrightnessView.h/.m ✅ 已有
├── WPRGBAControl.h/.m            ● 新增—RGBA 4行 (替代 RGB控制区 + Alpha控制区)
├── WPHexInputView.h/.m           ● 新增—Hex输入 (替代 Hex区)
└── WPColorPaletteView.h/.m       ● 新增—预设莫兰迪历史 (替代 3个滚动色块区)

WPHsvColorPickerController.m 精简后:
├── viewDidLoad → 调 3 个工厂方法 + 约束
├── 颜色同步 → updateColorFromComponents / syncToComponents
└── 导航 + 键盘 + 回调 → 保留
```

---

## 三、组件 1：WPRGBAControl — RGBA 四行控制

> 替代 VC 中 `setupRGBControls` (272~360) + `setupAlphaControl` (400~439) 及其所有 action 方法

### WPRGBAControl.h

```objc
#import <UIKit/UIKit.h>
#import "WPColorUtil.h"

NS_ASSUME_NONNULL_BEGIN

@interface WPRGBAControl : UIView

/// 当前 RGBA 值 (R/G/B:0~255, A:0~1)
@property (nonatomic, assign) CGFloat red;
@property (nonatomic, assign) CGFloat green;
@property (nonatomic, assign) CGFloat blue;
@property (nonatomic, assign) CGFloat alpha;

/// 任一值变化回调
@property (nonatomic, copy) void(^rgbaDidChange)(CGFloat red, CGFloat green, CGFloat blue, CGFloat alpha);

/// 快速设置所有值（不触发回调）
- (void)setRed:(CGFloat)r green:(CGFloat)g blue:(CGFloat)b alpha:(CGFloat)a animated:(BOOL)animated;

@end

NS_ASSUME_NONNULL_END
```

### WPRGBAControl.m

```objc
#import "WPRGBAControl.h"

// ─── 颜色对 ───
#define RGBColor(r, g, b) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1]

static CGFloat const kRowHeight = 36;
static CGFloat const kRowSpacing = 6;
static CGFloat const kLabelWidth = 22;
static CGFloat const kFieldWidth = 54;

@interface WPRGBAControl ()
@property (nonatomic, strong) NSArray<UILabel *>   *labels;
@property (nonatomic, strong) NSArray<UISlider *>  *sliders;
@property (nonatomic, strong) NSArray<UITextField *> *fields;
@property (nonatomic, assign) BOOL suppressingCallback; // 防止 setter 触发回调导致死循环
@end

@implementation WPRGBAControl

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) [self commonInit];
    return self;
}

- (instancetype)initWithCoder:(NSCoder *)coder {
    self = [super initWithCoder:coder];
    if (self) [self commonInit];
    return self;
}

- (void)commonInit {
    _red   = 255;
    _green = 255;
    _blue  = 255;
    _alpha = 1.0;

    NSArray *configs = @[
        @{@"text": @"R", @"color": [UIColor systemRedColor],   @"max": @255, @"decimal": @0},
        @{@"text": @"G", @"color": [UIColor systemGreenColor], @"max": @255, @"decimal": @0},
        @{@"text": @"B", @"color": [UIColor systemBlueColor],  @"max": @255, @"decimal": @0},
        @{@"text": @"A", @"color": [UIColor secondaryLabelColor], @"max": @1, @"decimal": @2},
    ];

    NSMutableArray *labels = [NSMutableArray array];
    NSMutableArray *sliders = [NSMutableArray array];
    NSMutableArray *fields  = [NSMutableArray array];

    for (NSDictionary *cfg in configs) {
        // Label
        UILabel *l = [[UILabel alloc] init];
        l.text = cfg[@"text"];
        l.font = [UIFont monospacedDigitSystemFontOfSize:14 weight:UIFontWeightBold];
        l.textColor = cfg[@"color"];
        l.textAlignment = NSTextAlignmentCenter;

        // Slider
        UISlider *s = [[UISlider alloc] init];
        s.minimumValue = 0;
        s.maximumValue = [cfg[@"max"] floatValue];

        // TextField
        UITextField *f = [[UITextField alloc] init];
        f.font = [UIFont monospacedDigitSystemFontOfSize:14 weight:UIFontWeightRegular];
        f.textAlignment = NSTextAlignmentCenter;
        f.keyboardType = ([cfg[@"decimal"] integerValue] > 0) ? UIKeyboardTypeDecimalPad : UIKeyboardTypeNumberPad;
        f.layer.cornerRadius = 6;
        f.layer.borderWidth = 1;
        f.layer.borderColor = [UIColor separatorColor].CGColor;

        [self addSubview:l];
        [self addSubview:s];
        [self addSubview:f];

        [labels addObject:l];
        [sliders addObject:s];
        [fields addObject:f];
    }

    self.labels  = [labels copy];
    self.sliders = [sliders copy];
    self.fields  = [fields copy];

    // 绑定事件
    for (int i = 0; i < 4; i++) {
        UISlider *s = self.sliders[i];
        [s addTarget:self action:@selector(sliderChanged:) forControlEvents:UIControlEventValueChanged];

        UITextField *f = self.fields[i];
        [f addTarget:self action:@selector(fieldEditingEnded:) forControlEvents:UIControlEventEditingDidEnd];
        [self addToolbarToTextField:f];
    }

    [self syncUI];
}

#pragma mark - Layout

- (CGSize)intrinsicContentSize {
    return CGSizeMake(UIViewNoIntrinsicMetric, 4 * kRowHeight + 3 * kRowSpacing);
}

- (void)layoutSubviews {
    [super layoutSubviews];
    CGFloat w = self.bounds.size.width;
    CGFloat remaining = w - kLabelWidth - kFieldWidth - 16; // 16 = 间距总和
    CGFloat sliderW = MAX(0, remaining);

    for (int i = 0; i < 4; i++) {
        CGFloat y = i * (kRowHeight + kRowSpacing);
        self.labels[i].frame  = CGRectMake(0, y, kLabelWidth, kRowHeight);
        self.sliders[i].frame = CGRectMake(kLabelWidth + 8, y, sliderW, kRowHeight);
        self.fields[i].frame  = CGRectMake(w - kFieldWidth, y, kFieldWidth, kRowHeight);
    }
}

#pragma mark - 事件

- (IBAction)sliderChanged:(UISlider *)slider {
    NSInteger idx = [self.sliders indexOfObject:slider];
    if (idx == NSNotFound) return;

    [self updateValueFromUI:idx];
    [self notifyCallback];
}

- (void)fieldEditingEnded:(UITextField *)field {
    NSInteger idx = [self.fields indexOfObject:field];
    if (idx == NSNotFound) return;

    CGFloat val = [field.text floatValue];
    CGFloat max = (idx < 3) ? 255.0 : 1.0;
    val = MAX(0, MIN(max, val));
    field.text = [NSString stringWithFormat:((idx < 3) ? @"%.0f" : @"%.2f"), val];

    // 赋值
    switch (idx) {
        case 0: _red   = val; self.sliders[0].value = val; break;
        case 1: _green = val; self.sliders[1].value = val; break;
        case 2: _blue  = val; self.sliders[2].value = val; break;
        case 3: _alpha = val; self.sliders[3].value = val; break;
    }
    [self notifyCallback];
}

- (void)updateValueFromUI:(NSInteger)idx {
    CGFloat val = [self.sliders[idx] value];
    switch (idx) {
        case 0: _red   = val; break;
        case 1: _green = val; break;
        case 2: _blue  = val; break;
        case 3: _alpha = val; break;
    }
}

- (void)notifyCallback {
    if (self.suppressingCallback) return;
    if (self.rgbaDidChange) {
        self.rgbaDidChange(_red, _green, _blue, _alpha);
    }
}

#pragma mark - 外部设置

- (void)setRed:(CGFloat)r green:(CGFloat)g blue:(CGFloat)b alpha:(CGFloat)a animated:(BOOL)animated {
    _red   = r;
    _green = g;
    _blue  = b;
    _alpha = a;
    [self syncUI];
}

- (void)syncUI {
    NSArray *vals = @[@(_red), @(_green), @(_blue), @(_alpha)];
    NSArray *fmts = @[@"%.0f", @"%.0f", @"%.0f", @"%.2f"];
    for (int i = 0; i < 4; i++) {
        [self.sliders[i] setValue:[vals[i] floatValue] animated:NO];
        self.fields[i].text = [NSString stringWithFormat:fmts[i], [vals[i] floatValue]];
    }
}

#pragma mark - 键盘工具栏

- (void)addToolbarToTextField:(UITextField *)textField {
    UIToolbar *bar = [[UIToolbar alloc] initWithFrame:CGRectMake(0, 0, 0, 44)];
    UIBarButtonItem *flex = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemFlexibleSpace
                                                                          target:nil action:nil];
    UIBarButtonItem *done = [[UIBarButtonItem alloc] initWithTitle:@"完成"
                                                             style:UIBarButtonItemStyleDone
                                                            target:self action:@selector(dismissKeyboard)];
    bar.items = @[flex, done];
    textField.inputAccessoryView = bar;
}

- (void)dismissKeyboard {
    [self.window endEditing:YES];
}

@end
```

### 调用方式（VC 侧改动）

**setupUI 中**：
```objc
// ─── 替换 setupRGBControls + setupAlphaControl ───
self.rgbaControl = [[WPRGBAControl alloc] init];
__weak __typeof(self) weakSelf = self;
self.rgbaControl.rgbaDidChange = ^(CGFloat r, CGFloat g, CGFloat b, CGFloat a) {
    __strong __typeof(weakSelf) strongSelf = weakSelf;
    if (!strongSelf) return;
    strongSelf.currentHsv = [WPColorUtil hsvFromRed:r green:g blue:b alpha:a];
    [strongSelf syncToComponentsFromCurrentColor];
};
[self.contentView addSubview:self.rgbaControl];
```

**updateInputFields 中**：
```objc
// ─── 替换原来 RGB/Alpha 的赋值 ───
CGFloat r, g, b;
[WPColorUtil getRed:&r green:&g blue:&b fromHsv:self.currentHsv];
self.rgbaControl.red   = r;
self.rgbaControl.green = g;
self.rgbaControl.blue  = b;
self.rgbaControl.alpha = self.currentHsv.alpha;
// (控件内部的 setter 会自动刷新 UI)
```

**setupConstraints 中**：
```objc
// ─── 替换 rgbControlView + alphaControl 约 50 行约束 ───
self.rgbaControl.translatesAutoresizingMaskIntoConstraints = NO;
[NSLayoutConstraint activateConstraints:@[
    [self.rgbaControl.topAnchor constraintEqualToAnchor:prev.bottomAnchor constant:12],
    [self.rgbaControl.leadingAnchor constraintEqualToAnchor:cv.leadingAnchor constant:kMargin],
    [self.rgbaControl.trailingAnchor constraintEqualToAnchor:cv.trailingAnchor constant:-kMargin],
    [self.rgbaControl.heightAnchor constraintEqualToAnchor:self.rgbaControl.widthAnchor multiplier:0.52],
]];
prev = self.rgbaControl;
```

---

## 四、组件 2：WPHexInputView — Hex 输入

> 替代 VC 中 `setupHexInput` (364~396) + `hexTextFieldChanged:`

### WPHexInputView.h

```objc
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface WPHexInputView : UIView

@property (nonatomic, copy) NSString *hexString;
@property (nonatomic, copy) void(^hexDidChange)(NSString *hexString);

/// 验证并应用 Hex（无效时恢复旧值）
- (void)applyHex:(NSString *)hex;

@end

NS_ASSUME_NONNULL_END
```

### WPHexInputView.m

```objc
#import "WPHexInputView.h"
#import "WPColorUtil.h"

@interface WPHexInputView () <UITextFieldDelegate>
@property (nonatomic, strong) UILabel    *label;
@property (nonatomic, strong) UITextField *textField;
@end

@implementation WPHexInputView

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) [self commonInit];
    return self;
}

- (instancetype)initWithCoder:(NSCoder *)coder {
    self = [super initWithCoder:coder];
    if (self) [self commonInit];
    return self;
}

- (void)commonInit {
    // Label
    self.label = [[UILabel alloc] init];
    self.label.text = @"HEX";
    self.label.font = [UIFont systemFontOfSize:14 weight:UIFontWeightMedium];

    // TextField
    self.textField = [[UITextField alloc] init];
    UIFont *hexFont = [UIFont fontWithName:@"Menlo-Regular" size:16]
                      ?: [UIFont monospacedSystemFontOfSize:16 weight:UIFontWeightRegular];
    self.textField.font = hexFont;
    self.textField.textAlignment = NSTextAlignmentCenter;
    self.textField.autocapitalizationType = UITextAutocapitalizationTypeAllCharacters;
    self.textField.layer.cornerRadius = 6;
    self.textField.layer.borderWidth = 1;
    self.textField.layer.borderColor = [UIColor separatorColor].CGColor;
    self.textField.delegate = self;

    [self addSubview:self.label];
    [self addSubview:self.textField];
}

- (void)layoutSubviews {
    [super layoutSubviews];
    CGFloat h = self.bounds.size.height;
    self.label.frame   = CGRectMake(0, 0, 36, h);
    self.textField.frame = CGRectMake(self.bounds.size.width - 140, 0, 140, h);
}

- (CGSize)intrinsicContentSize {
    return CGSizeMake(UIViewNoIntrinsicMetric, 36);
}

#pragma mark - UITextFieldDelegate

- (void)textFieldDidEndEditing:(UITextField *)textField {
    [self applyHex:textField.text];
}

- (BOOL)textFieldShouldReturn:(UITextField *)textField {
    [textField resignFirstResponder];
    return YES;
}

#pragma mark - 公共方法

- (void)setHexString:(NSString *)hexString {
    _hexString = hexString;
    self.textField.text = [hexString uppercaseString];
}

- (void)applyHex:(NSString *)hex {
    if ([WPColorUtil isValidHexString:hex]) {
        _hexString = hex;
        if (self.hexDidChange) {
            self.hexDidChange(hex);
        }
    } else {
        // 恢复
        self.textField.text = [_hexString uppercaseString];
    }
}

@end
```

### 调用方式（VC 侧改动）

**setupUI 中**：
```objc
// ─── 替换 setupHexInput ───
self.hexInput = [[WPHexInputView alloc] init];
__weak __typeof(self) weakSelf = self;
self.hexInput.hexDidChange = ^(NSString *hex) {
    __strong __typeof(weakSelf) strongSelf = weakSelf;
    if (!strongSelf) return;
    UIColor *color = [WPColorUtil colorFromHexString:hex];
    strongSelf.currentHsv = [WPColorUtil hsvFromColor:color];
    [strongSelf syncToComponentsFromCurrentColor];
};
[self.contentView addSubview:self.hexInput];
```

**updateInputFields 中**：
```objc
NSString *hex = self.isLightMode ? self.currentLightHex : self.currentDarkHex;
self.hexInput.hexString = hex; // 自动 setter 刷新 UI
```

---

## 五、组件 3：WPColorPaletteView — 预设/莫兰迪/历史色块

> 替代 VC 中 `setupPresetColors` (475~563) + `makeColorScrollViewWithTitle:` + 历史色持久化 (567~629)
> 核心思路：一个组件管理三种色块列表，每种是一个 section

### WPColorPaletteView.h

```objc
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface WPColorPaletteView : UIView

/// 设置预设色列表 (UIColor 数组)
- (void)setPresetColors:(NSArray<UIColor *> *)colors;

/// 设置莫兰迪色列表
- (void)setMorandiColors:(NSArray<UIColor *> *)colors;

/// 设置历史色列表 (Hex NSString 数组，内部解析)
- (void)setHistoryHexes:(NSArray<NSString *> *)hexes;

/// 添加颜色到历史（去重、上限 20）
- (void)addToHistory:(UIColor *)color;

/// 获取当前历史色 Hex 列表（存 UserDefaults 用）
- (NSArray<NSString *> *)historyHexes;

/// 任一色块被点击回调
@property (nonatomic, copy) void(^colorDidTap)(UIColor *color);

@end

NS_ASSUME_NONNULL_END
```

### WPColorPaletteView.m

```objc
#import "WPColorPaletteView.h"
#import "WPColorUtil.h"

static CGFloat const kButtonSize  = 36;
static CGFloat const kSpacing     = 10;
static CGFloat const kMaxHistory  = 20;
static CGFloat const kSectionGap  = 12;
static CGFloat const kLabelWidth  = 40;

@interface WPColorPaletteView ()
@property (nonatomic, strong) NSMutableArray<UIColor *> *presets;
@property (nonatomic, strong) NSMutableArray<UIColor *> *morandiColors;
@property (nonatomic, strong) NSMutableArray<UIColor *> *historyColors;
@property (nonatomic, strong) NSMutableArray<UIScrollView *> *scrollViews;
@property (nonatomic, strong) NSMutableArray<UILabel *> *sectionLabels;
@end

@implementation WPColorPaletteView

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        _presets      = [NSMutableArray array];
        _morandiColors = [NSMutableArray array];
        _historyColors = [NSMutableArray array];
        _scrollViews  = [NSMutableArray array];
        _sectionLabels = [NSMutableArray array];
    }
    return self;
}

- (instancetype)initWithCoder:(NSCoder *)coder {
    self = [super initWithCoder:coder];
    if (self) {
        _presets      = [NSMutableArray array];
        _morandiColors = [NSMutableArray array];
        _historyColors = [NSMutableArray array];
        _scrollViews  = [NSMutableArray array];
        _sectionLabels = [NSMutableArray array];
    }
    return self;
}

#pragma mark - 设置数据

- (void)setPresetColors:(NSArray<UIColor *> *)colors {
    [self.presets setArray:colors];
    [self rebuildAll];
}

- (void)setMorandiColors:(NSArray<UIColor *> *)colors {
    [self.morandiColors setArray:colors];
    [self rebuildAll];
}

- (void)setHistoryHexes:(NSArray<NSString *> *)hexes {
    [self.historyColors removeAllObjects];
    for (NSString *hex in hexes) {
        UIColor *c = [WPColorUtil colorFromHexString:hex];
        if (c) [self.historyColors addObject:c];
    }
    [self rebuildAll];
}

- (void)addToHistory:(UIColor *)color {
    // 去重：相似色不重复添加
    for (UIColor *existing in self.historyColors) {
        if ([WPColorUtil isColor:color similarToColor:existing]) {
            return;
        }
    }
    [self.historyColors insertObject:color atIndex:0];
    if (self.historyColors.count > kMaxHistory) {
        [self.historyColors removeLastObject];
    }
    [self rebuildHistoryOnly];
}

- (NSArray<NSString *> *)historyHexes {
    NSMutableArray *result = [NSMutableArray array];
    for (UIColor *c in self.historyColors) {
        [result addObject:[WPColorUtil hexStringFromColor:c]];
    }
    return [result copy];
}

- (UIColor *)colorAtIndex:(NSInteger)idx inScrollView:(UIScrollView *)sv {
    // 根据 UIScrollView 判断是哪个 section
    if (sv == self.scrollViews[0]) return self.presets[idx];
    if (self.scrollViews.count > 1 && sv == self.scrollViews[1]) return self.morandiColors[idx];
    if (self.scrollViews.count > 2 && sv == self.scrollViews[2]) return self.historyColors[idx];
    return nil;
}

#pragma mark - 重建 UI

- (void)rebuildAll {
    // 清理旧 UI
    for (UIView *v in self.subviews) [v removeFromSuperview];
    [self.scrollViews removeAllObjects];
    [self.sectionLabels removeAllObjects];

    NSArray *titles = @[@"预设", @"莫兰迪", @"历史"];
    NSArray *lists  = @[self.presets, self.morandiColors, self.historyColors];

    UIView *lastView = nil;
    for (int i = 0; i < 3; i++) {
        NSArray *colors = lists[i];
        if (colors.count == 0 && i < 2) continue; // 预设/莫兰迪为空时跳过

        // 容器
        UIView *row = [[UIView alloc] init];

        // Label
        UILabel *label = [[UILabel alloc] init];
        label.text = titles[i];
        label.font = [UIFont systemFontOfSize:13 weight:UIFontWeightMedium];
        label.textColor = [UIColor secondaryLabelColor];

        // ScrollView
        UIScrollView *sv = [[UIScrollView alloc] init];
        sv.showsHorizontalScrollIndicator = NO;

        // 色块
        UIView *inner = [[UIView alloc] init];
        CGFloat x = 0;
        for (UIColor *color in colors) {
            UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
            btn.frame = CGRectMake(x, 0, kButtonSize, kButtonSize);
            btn.backgroundColor = color;
            btn.layer.cornerRadius = kButtonSize / 2;
            btn.layer.borderWidth = 1;
            btn.layer.borderColor = [UIColor colorWithWhite:0.8 alpha:0.3].CGColor;
            btn.clipsToBounds = YES;
            [btn addTarget:self action:@selector(colorButtonTapped:) forControlEvents:UIControlEventTouchUpInside];
            [inner addSubview:btn];
            x += kButtonSize + kSpacing;
        }

        CGFloat totalW = MAX(0, x - kSpacing);
        inner.frame = CGRectMake(0, 0, totalW, kButtonSize);
        sv.contentSize = CGSizeMake(totalW, kButtonSize);
        [sv addSubview:inner];

        [row addSubview:label];
        [row addSubview:sv];
        [self addSubview:row];

        [self.scrollViews addObject:sv];
        [self.sectionLabels addObject:label];

        // ——— Row 的 Auto Layout ———
        row.translatesAutoresizingMaskIntoConstraints = NO;
        label.translatesAutoresizingMaskIntoConstraints = NO;
        sv.translatesAutoresizingMaskIntoConstraints = NO;

        [NSLayoutConstraint activateConstraints:@[
            [row.leadingAnchor constraintEqualToAnchor:self.leadingAnchor],
            [row.trailingAnchor constraintEqualToAnchor:self.trailingAnchor],
            [row.heightAnchor constraintEqualToConstant:44],

            [label.leadingAnchor constraintEqualToAnchor:row.leadingAnchor],
            [label.centerYAnchor constraintEqualToAnchor:row.centerYAnchor],
            [label.widthAnchor constraintEqualToConstant:kLabelWidth],

            [sv.leadingAnchor constraintEqualToAnchor:label.trailingAnchor constant:8],
            [sv.trailingAnchor constraintEqualToAnchor:row.trailingAnchor],
            [sv.topAnchor constraintEqualToAnchor:row.topAnchor],
            [sv.bottomAnchor constraintEqualToAnchor:row.bottomAnchor],
        ]];

        // 垂直位置
        [row.topAnchor constraintEqualToAnchor:lastView ? lastView.bottomAnchor : self.topAnchor
                                      constant:lastView ? 0 : 0].active = YES;
        lastView = row;
    }

    // 最后一个 row 的底部约束
    [lastView.bottomAnchor constraintEqualToAnchor:self.bottomAnchor].active = YES;
}

- (void)rebuildHistoryOnly {
    // 只刷新第 3 个 section（历史色）
    if (self.scrollViews.count < 3) {
        [self rebuildAll];
        return;
    }

    UIScrollView *sv = self.scrollViews[2];
    // 移除旧的 inner
    for (UIView *sub in sv.subviews) [sub removeFromSuperview];

    UIView *inner = [[UIView alloc] init];
    CGFloat x = 0;
    for (UIColor *color in self.historyColors) {
        UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
        btn.frame = CGRectMake(x, 0, kButtonSize, kButtonSize);
        btn.backgroundColor = color;
        btn.layer.cornerRadius = kButtonSize / 2;
        btn.layer.borderWidth = 1;
        btn.layer.borderColor = [UIColor colorWithWhite:0.8 alpha:0.3].CGColor;
        btn.clipsToBounds = YES;
        [btn addTarget:self action:@selector(colorButtonTapped:) forControlEvents:UIControlEventTouchUpInside];
        [inner addSubview:btn];
        x += kButtonSize + kSpacing;
    }

    CGFloat totalW = MAX(0, x - kSpacing);
    inner.frame = CGRectMake(0, 0, totalW, kButtonSize);
    sv.contentSize = CGSizeMake(totalW, kButtonSize);
    [sv addSubview:inner];
}

#pragma mark - 事件

- (void)colorButtonTapped:(UIButton *)btn {
    UIColor *color = btn.backgroundColor;
    if (!color || !self.colorDidTap) return;
    self.colorDidTap(color);
}

#pragma mark - 布局

- (CGSize)intrinsicContentSize {
    return CGSizeMake(UIViewNoIntrinsicMetric, 3 * 44); // 3 sections × 44
}

@end
```

### 调用方式（VC 侧改动）

**setupUI 中**：
```objc
// ─── 替换 setupPresetColors ───
self.colorPalette = [[WPColorPaletteView alloc] init];
[self.colorPalette setPresetColors:[self presetColorList]];
[self.colorPalette setMorandiColors:[self morandiColorList]];
[self.colorPalette setHistoryHexes:self.historyColors];
__weak __typeof(self) weakSelf = self;
self.colorPalette.colorDidTap = ^(UIColor *color) {
    __strong __typeof(weakSelf) strongSelf = weakSelf;
    if (!strongSelf) return;
    strongSelf.currentHsv = [WPColorUtil hsvFromColor:color];
    [strongSelf syncToComponentsFromCurrentColor];
};
[self.contentView addSubview:self.colorPalette];
```

**confirmTapped 中**：
```objc
- (void)confirmTapped {
    // 保存到历史（委托给 WPColorPaletteView）
    UIColor *color = [UIColor colorWithHue:self.currentHsv.hue
                                saturation:self.currentHsv.saturation
                                brightness:self.currentHsv.brightness
                                     alpha:self.currentHsv.alpha];
    [self.colorPalette addToHistory:color];

    // 持久化
    [[NSUserDefaults standardUserDefaults] setObject:[self.colorPalette historyHexes]
                                              forKey:@"WPColorPickerHistory"];

    if (self.callback) {
        self.callback(self.currentLightHex, self.currentDarkHex);
    }
    [self dismissViewControllerAnimated:YES completion:nil];
}
```

**viewDidLoad 中**：
```objc
- (void)loadHistoryColors {
    NSArray *saved = [[NSUserDefaults standardUserDefaults] arrayForKey:@"WPColorPickerHistory"];
    if (saved) {
        self.historyColors = [saved mutableCopy];
        [self.colorPalette setHistoryHexes:self.historyColors];
    }
}
```

---

## 六、改造前后对比

### 删 / 改对照表

| 原方法 / 属性 | 操作 | 替代 |
|---|---|---|
| `setupRGBControls` | **删除** | WPRGBAControl 初始化 |
| `redSliderChanged:` | **删除** | WPRGBAControl.rgbaDidChange |
| `greenSliderChanged:` | **删除** | 同上 |
| `blueSliderChanged:` | **删除** | 同上 |
| `rgbTextFieldChanged:` | **删除** | 同上 |
| `makeRGBLabelWithText:color:` | **删除** | WPRGBAControl 内部 |
| `makeSlider` | **删除** | 同上 |
| `makeRGBTextField` | **删除** | 同上 |
| `setupAlphaControl` | **删除** | WPRGBAControl 包含 Alpha |
| `alphaSliderChanged:` | **删除** | WPRGBAControl.rgbaDidChange |
| `alphaTextFieldChanged:` | **删除** | 同上 |
| `setupHexInput` | **删除** | WPHexInputView 初始化 |
| `hexTextFieldChanged:` | **删除** | WPHexInputView.hexDidChange |
| `setupPresetColors` | **删除** | WPColorPaletteView |
| `makeColorScrollViewWithTitle:colors:action:` | **删除** | WPColorPaletteView 内部 |
| `presetColorTapped:` | **删除** | WPColorPaletteView.colorDidTap |
| `morandiColorTapped:` | **删除** | 同上 |
| `historyColorTapped:` | **删除** | 同上 |
| `loadHistoryColors` | **精简** | 只保留 UserDefaults 读取 |
| `saveCurrentColorToHistory` | **删除** | WPColorPaletteView.addToHistory |
| `updateHistoryColorButtons` | **删除** | WPColorPaletteView 内部管理 |
| `historyColors` 属性 | **保留** | 只存读入，不再管理 UI |
| `setupConstraints` 中 RGB/Alpha/色块相关 | **删除** | 各组件 `intrinsicContentSize` 自动撑开 |

### 约束简化效果

```
setupConstraints 改造前: ~130 行
setupConstraints 改造后: ~50 行
改动的部分:
  - rgbControlView (20行)     → rgbaControl (5行)
  - alphaControl (20行)       → 已合并到 rgbaControl
  - 预设/莫兰迪/历史 (25行)    → colorPalette (5行)
  - hex 区 (10行)             → hexInput (5行)
```

### VC 属性精简

```
改造前: 22 个 UI 属性 (label/slider/textField 逐个声明)
改造后:  5 个组件属性 (rgbaControl, hexInput, colorPalette, hueSlider, sbView)
```

---

## 七、改造步骤（安全渐进式）

### 第 1 步：创建 WPRGBAControl

- 新建 `WPRGBAControl.h/.m`
- 编译通过 ✅

### 第 2 步：替换 VC 的 RGB + Alpha

- `setupUI` 中将 `setupRGBControls` + `setupAlphaControl` 换成 `self.rgbaControl = [[WPRGBAControl alloc] init]`
- 删除 `redSliderChanged:` / `greenSliderChanged:` / `blueSliderChanged:` / `rgbTextFieldChanged:` / `alphaSliderChanged:` / `alphaTextFieldChanged:`
- 删除 `makeRGBLabelWithText:color:` / `makeSlider` / `makeRGBTextField`
- 删除 `redLabel` / `redSlider` / `redTextField` / `greenLabel` / ... / `alphaTextField` 属性
- 修改 `updateInputFields` 中 RGB/Alpha 赋值
- 修改 `setupConstraints` 中 rgbControlView + alphaControl 部分
- 编译运行，确认 RGBA 控制正常 ✅

### 第 3 步：创建 WPHexInputView

- 新建 `WPHexInputView.h/.m`
- 编译通过 ✅

### 第 4 步：替换 VC 的 Hex 输入

- `setupUI` 中替换
- 删除 `setupHexInput` / `hexTextFieldChanged:`
- 删除 `hexLabel` / `hexTextField` 属性
- 修改 `updateInputFields` 中 Hex 赋值
- 修改约束
- 编译运行，确认 Hex 输入正常 ✅

### 第 5 步：创建 WPColorPaletteView

- 新建 `WPColorPaletteView.h/.m`
- 编译通过 ✅

### 第 6 步：替换 VC 的预设/莫兰迪/历史

- `setupUI` 中替换
- 删除 `setupPresetColors` / `makeColorScrollViewWithTitle:colors:action:` / `presetColorTapped:` / `morandiColorTapped:` / `historyColorTapped:` / `saveCurrentColorToHistory` / `updateHistoryColorButtons`
- 删除 `presetColorScrollView` / `morandiColorScrollView` / `historyColorScrollView` 属性
- 修改 `confirmTapped` 中的历史保存
- 修改约束
- 编译运行，确认色块选择正常 ✅

### 第 7 步：最终清理

- 删除不再需要的私有属性（`rgbControlView`, `redLabel` 等声明）
- 确认无 warning
- 全面测试

---

## 八、最终目录结构

```
Config/
├── WPColorUtil.h / .m                   ② 颜色工具 (~100行)
├── WPHueSlider.h / .m                   ③ 色相条   (~120行)
├── WPSaturationBrightnessView.h / .m    ④ S/B 面板 (~150行)
├── WPRGBAControl.h / .m                 ⑤ RGBA     (~200行) ★新增
├── WPHexInputView.h / .m                ⑥ Hex输入  (~100行) ★新增
├── WPColorPaletteView.h / .m            ⑦ 色块集合 (~250行) ★新增
├── WPHsvColorPickerController.h                              (~20行)
└── WPHsvColorPickerController.m                               (~300行)
```

VC 从 **790 行** → **~300 行**，新建 3 个文件共 ~550 行。总代码量变化不大，但结构从"一个人干所有事"变成了 6 个独立组件各司其职。