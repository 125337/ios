#import "WPHsvColorPickerController.h"
#import "WPHueSlider.h"
#import "WPSaturationBrightnessView.h"

#pragma mark - 常量

static CGFloat const kMargin = 16.0;
static CGFloat const kControlHeight = 36.0;
static CGFloat const kSBViewRatio = 0.85;    // S/B 面板占 contentView 宽度比例
static CGFloat const kButtonSize = 36.0;
static CGFloat const kButtonSpacing = 10.0;
static NSInteger const kMaxHistory = 20;

#pragma mark - 私有属性

@interface WPHsvColorPickerController ()
@property (nonatomic, copy) void(^callback)(NSString *lightHex, NSString *darkHex);
@property (nonatomic, strong) WPHueSlider *hueSlider;
@property (nonatomic, strong) WPSaturationBrightnessView *sbView;
@end

#pragma mark - 初始化

@implementation WPHsvColorPickerController

- (instancetype)initWithLightHex:(NSString *)lightHex
                        darkHex:(NSString *)darkHex
                       callback:(void(^)(NSString *, NSString *))callback {
    self = [super init];
    if (self) {
        _currentLightHex = lightHex ?: @"#FFFFFF";
        _currentDarkHex  = darkHex  ?: @"#202020";
        _callback = callback;
        _isLightMode = YES;
        _singleColorMode = NO;
        _historyColors = [NSMutableArray array];
    }
    return self;
}

- (instancetype)initWithHex:(NSString *)hex callback:(void(^)(NSString *))callback {
    self = [super init];
    if (self) {
        _currentLightHex = hex ?: @"#FFFFFF";
        _currentDarkHex = _currentLightHex;
        _callback = ^(NSString *l, NSString *d) {
            if (callback) callback(l ?: d);
        };
        _isLightMode = YES;
        _singleColorMode = YES;
        _historyColors = [NSMutableArray array];
    }
    return self;
}

#pragma mark - 生命周期

- (void)viewDidLoad {
    [super viewDidLoad];

    self.view.backgroundColor = [UIColor systemGroupedBackgroundColor];
    self.title = @"颜色选择";

    [self setupNavigationBar];
    [self setupScrollView];
    [self setupUI];
    [self loadHistoryColors];

    // 根据 Hex 初始化当前颜色
    [self updateCurrentColorFromHex];
    [self syncToComponentsFromCurrentColor];

    // 键盘通知
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(keyboardWillShow:)
                                                 name:UIKeyboardWillShowNotification object:nil];
    [[NSNotificationCenter defaultCenter] addObserver:self
                                             selector:@selector(keyboardWillHide:)
                                                 name:UIKeyboardWillHideNotification object:nil];
}

- (void)dealloc {
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}

#pragma mark - Navigation Bar

- (void)setupNavigationBar {
    self.navigationItem.leftBarButtonItem =
        [[UIBarButtonItem alloc] initWithTitle:@"取消" style:UIBarButtonItemStylePlain
                                        target:self action:@selector(cancelTapped)];
    self.navigationItem.rightBarButtonItem =
        [[UIBarButtonItem alloc] initWithTitle:@"确认" style:UIBarButtonItemStyleDone
                                        target:self action:@selector(confirmTapped)];
}

- (void)cancelTapped {
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (void)confirmTapped {
    if (self.callback) {
        self.callback(self.currentLightHex, self.currentDarkHex);
    }
    [self saveCurrentColorToHistory];
    [self dismissViewControllerAnimated:YES completion:nil];
}

#pragma mark - ScrollView

- (void)setupScrollView {
    self.scrollView = [[UIScrollView alloc] init];
    self.scrollView.showsVerticalScrollIndicator = YES;
    self.scrollView.keyboardDismissMode = UIScrollViewKeyboardDismissModeInteractive;
    [self.view addSubview:self.scrollView];

    self.contentView = [[UIView alloc] init];
    [self.scrollView addSubview:self.contentView];

    self.scrollView.translatesAutoresizingMaskIntoConstraints = NO;
    self.contentView.translatesAutoresizingMaskIntoConstraints = NO;

    [NSLayoutConstraint activateConstraints:@[
        [self.scrollView.topAnchor constraintEqualToAnchor:self.view.topAnchor],
        [self.scrollView.leadingAnchor constraintEqualToAnchor:self.view.leadingAnchor],
        [self.scrollView.trailingAnchor constraintEqualToAnchor:self.view.trailingAnchor],
        [self.scrollView.bottomAnchor constraintEqualToAnchor:self.view.bottomAnchor],

        [self.contentView.topAnchor constraintEqualToAnchor:self.scrollView.topAnchor],
        [self.contentView.leadingAnchor constraintEqualToAnchor:self.scrollView.leadingAnchor],
        [self.contentView.trailingAnchor constraintEqualToAnchor:self.scrollView.trailingAnchor],
        [self.contentView.bottomAnchor constraintEqualToAnchor:self.scrollView.bottomAnchor],
        [self.contentView.widthAnchor constraintEqualToAnchor:self.scrollView.widthAnchor],
    ]];
}

#pragma mark - UI 搭建

- (void)setupUI {
    // ─── 模式切换 ───
    [self setupModeControl];

    // ─── Hex 输入 ───
    [self setupHexInput];

    // ─── 色相条（独立组件，一行搞定） ───
    self.hueSlider = [[WPHueSlider alloc] init];
    __weak __typeof(self) weakSelf = self;
    self.hueSlider.hueDidChange = ^(CGFloat hue) {
        __strong __typeof(weakSelf) strongSelf = weakSelf;
        if (!strongSelf) return;
        strongSelf.currentHsv.hue = hue;
        // 通知 S/B 面板色相变了
        strongSelf.sbView.hue = hue;
        // 更新输出
        [strongSelf updateColorFromComponents];
    };
    [self.contentView addSubview:self.hueSlider];

    // ─── S/B 面板（独立组件，一行搞定） ───
    self.sbView = [[WPSaturationBrightnessView alloc] init];
    self.sbView.sbDidChange = ^(CGFloat saturation, CGFloat brightness) {
        __strong __typeof(weakSelf) strongSelf = weakSelf;
        if (!strongSelf) return;
        strongSelf.currentHsv.saturation = saturation;
        strongSelf.currentHsv.brightness = brightness;
        [strongSelf updateColorFromComponents];
    };
    [self.contentView addSubview:self.sbView];

    // ─── 颜色预览 ───
    self.colorDisplayView = [[UIView alloc] init];
    self.colorDisplayView.layer.cornerRadius = 8;
    self.colorDisplayView.layer.borderWidth = 1;
    self.colorDisplayView.layer.borderColor = [UIColor separatorColor].CGColor;
    [self.contentView addSubview:self.colorDisplayView];

    // ─── RGB ───
    [self setupRGBControls];

    // ─── Alpha ───
    [self setupAlphaControl];

    // ─── 预设色 ───
    [self setupPresetColors];

    // ─── 布局 ───
    [self setupConstraints];
}

- (void)setupModeControl {
    if (self.singleColorMode) return;
    self.modeSegmentedControl = [[UISegmentedControl alloc] initWithItems:@[@"浅色", @"深色"]];
    self.modeSegmentedControl.selectedSegmentIndex = self.isLightMode ? 0 : 1;
    [self.modeSegmentedControl addTarget:self action:@selector(modeChanged:) forControlEvents:UIControlEventValueChanged];
    [self.contentView addSubview:self.modeSegmentedControl];
}

- (void)modeChanged:(UISegmentedControl *)seg {
    self.isLightMode = seg.selectedSegmentIndex == 0;
    [self updateCurrentColorFromHex];
}

#pragma mark - 颜色更新核心链路

- (void)updateColorFromComponents {
    UIColor *color = [UIColor colorWithHue:self.currentHsv.hue
                                saturation:self.currentHsv.saturation
                                brightness:self.currentHsv.brightness
                                     alpha:self.currentHsv.alpha];
    NSString *hex = [WPColorUtil hexStringFromColor:color];

    if (self.isLightMode) {
        self.currentLightHex = hex;
    } else {
        self.currentDarkHex = hex;
    }

    [self updateColorDisplay];
    [self updateInputFields];
}

- (void)updateCurrentColorFromHex {
    NSString *hex = self.isLightMode ? self.currentLightHex : self.currentDarkHex;
    UIColor *color = [WPColorUtil colorFromHexString:hex];
    self.currentHsv = [WPColorUtil hsvFromColor:color];

    [self syncToComponentsFromCurrentColor];
}

- (void)syncToComponentsFromCurrentColor {
    self.hueSlider.hue = self.currentHsv.hue;          // 色相条指示器移动
    self.sbView.hue = self.currentHsv.hue;              // S/B 面板渐变重绘
    self.sbView.saturation = self.currentHsv.saturation;
    self.sbView.brightness = self.currentHsv.brightness;

    [self updateColorDisplay];
    [self updateInputFields];
}

- (void)updateColorDisplay {
    NSString *hex = self.isLightMode ? self.currentLightHex : self.currentDarkHex;
    self.colorDisplayView.backgroundColor = [WPColorUtil colorFromHexString:hex];
}

- (void)updateInputFields {
    // Hex
    NSString *hex = self.isLightMode ? self.currentLightHex : self.currentDarkHex;
    self.hexTextField.text = [hex uppercaseString];

    // RGB
    CGFloat r, g, b;
    [WPColorUtil getRed:&r green:&g blue:&b fromHsv:self.currentHsv];
    self.redSlider.value = r;
    self.greenSlider.value = g;
    self.blueSlider.value = b;
    self.redTextField.text = [NSString stringWithFormat:@"%.0f", r];
    self.greenTextField.text = [NSString stringWithFormat:@"%.0f", g];
    self.blueTextField.text = [NSString stringWithFormat:@"%.0f", b];

    // Alpha
    self.alphaSlider.value = self.currentHsv.alpha;
    self.alphaTextField.text = [NSString stringWithFormat:@"%.2f", self.currentHsv.alpha];
}

#pragma mark - RGB 控制区

- (void)setupRGBControls {
    self.rgbControlView = [[UIView alloc] init];
    [self.contentView addSubview:self.rgbControlView];

    // R
    self.redLabel = [self makeRGBLabelWithText:@"R" color:[UIColor systemRedColor]];
    self.redSlider = [self makeSlider];
    self.redTextField = [self makeRGBTextField];
    [self.redSlider addTarget:self action:@selector(redSliderChanged:) forControlEvents:UIControlEventValueChanged];
    [self.redTextField addTarget:self action:@selector(rgbTextFieldChanged:) forControlEvents:UIControlEventEditingDidEnd];

    // G
    self.greenLabel = [self makeRGBLabelWithText:@"G" color:[UIColor systemGreenColor]];
    self.greenSlider = [self makeSlider];
    self.greenTextField = [self makeRGBTextField];
    [self.greenSlider addTarget:self action:@selector(greenSliderChanged:) forControlEvents:UIControlEventValueChanged];
    [self.greenTextField addTarget:self action:@selector(rgbTextFieldChanged:) forControlEvents:UIControlEventEditingDidEnd];

    // B
    self.blueLabel = [self makeRGBLabelWithText:@"B" color:[UIColor systemBlueColor]];
    self.blueSlider = [self makeSlider];
    self.blueTextField = [self makeRGBTextField];
    [self.blueSlider addTarget:self action:@selector(blueSliderChanged:) forControlEvents:UIControlEventValueChanged];
    [self.blueTextField addTarget:self action:@selector(rgbTextFieldChanged:) forControlEvents:UIControlEventEditingDidEnd];

    // 添加到 rgbControlView
    NSArray *labels = @[self.redLabel, self.greenLabel, self.blueLabel];
    NSArray *sliders = @[self.redSlider, self.greenSlider, self.blueSlider];
    NSArray *fields  = @[self.redTextField, self.greenTextField, self.blueTextField];
    for (int i = 0; i < 3; i++) {
        [self.rgbControlView addSubview:labels[i]];
        [self.rgbControlView addSubview:sliders[i]];
        [self.rgbControlView addSubview:fields[i]];
    }
}

- (void)redSliderChanged:(UISlider *)slider {
    self.currentHsv = [WPColorUtil hsvFromRed:slider.value green:self.greenSlider.value
                                         blue:self.blueSlider.value alpha:self.alphaSlider.value];
    [self syncToComponentsFromCurrentColor];
}

- (void)greenSliderChanged:(UISlider *)slider {
    self.currentHsv = [WPColorUtil hsvFromRed:self.redSlider.value green:slider.value
                                         blue:self.blueSlider.value alpha:self.alphaSlider.value];
    [self syncToComponentsFromCurrentColor];
}

- (void)blueSliderChanged:(UISlider *)slider {
    self.currentHsv = [WPColorUtil hsvFromRed:self.redSlider.value green:self.greenSlider.value
                                         blue:slider.value alpha:self.alphaSlider.value];
    [self syncToComponentsFromCurrentColor];
}

- (void)rgbTextFieldChanged:(UITextField *)textField {
    CGFloat val = [textField.text integerValue];
    val = MAX(0, MIN(255, val));
    self.currentHsv = [WPColorUtil hsvFromRed:self.redSlider.value green:self.greenSlider.value
                                         blue:self.blueSlider.value alpha:self.alphaSlider.value];
    [self syncToComponentsFromCurrentColor];
}

- (UILabel *)makeRGBLabelWithText:(NSString *)text color:(UIColor *)color {
    UILabel *l = [[UILabel alloc] init];
    l.text = text;
    l.font = [UIFont monospacedDigitSystemFontOfSize:14 weight:UIFontWeightBold];
    l.textColor = color;
    l.textAlignment = NSTextAlignmentCenter;
    return l;
}

- (UISlider *)makeSlider {
    UISlider *s = [[UISlider alloc] init];
    s.minimumValue = 0;
    s.maximumValue = 255;
    return s;
}

- (UITextField *)makeRGBTextField {
    UITextField *tf = [[UITextField alloc] init];
    tf.font = [UIFont monospacedDigitSystemFontOfSize:14 weight:UIFontWeightRegular];
    tf.textAlignment = NSTextAlignmentCenter;
    tf.keyboardType = UIKeyboardTypeNumberPad;
    tf.layer.cornerRadius = 6;
    tf.layer.borderWidth = 1;
    tf.layer.borderColor = [UIColor separatorColor].CGColor;
    [self addInputAccessoryViewToTextField:tf];
    return tf;
}

#pragma mark - Hex 输入区

- (void)setupHexInput {
    self.hexLabel = [[UILabel alloc] init];
    self.hexLabel.text = @"HEX";
    self.hexLabel.font = [UIFont systemFontOfSize:14 weight:UIFontWeightMedium];
    [self.contentView addSubview:self.hexLabel];

    self.hexTextField = [[UITextField alloc] init];
    UIFont *hexFont = [UIFont fontWithName:@"Menlo-Regular" size:16]
                      ?: [UIFont monospacedSystemFontOfSize:16 weight:UIFontWeightRegular];
    self.hexTextField.font = hexFont;
    self.hexTextField.textAlignment = NSTextAlignmentCenter;
    self.hexTextField.autocapitalizationType = UITextAutocapitalizationTypeAllCharacters;
    self.hexTextField.layer.cornerRadius = 6;
    self.hexTextField.layer.borderWidth = 1;
    self.hexTextField.layer.borderColor = [UIColor separatorColor].CGColor;
    [self.hexTextField addTarget:self action:@selector(hexTextFieldChanged:)
                forControlEvents:UIControlEventEditingDidEnd];
    [self addInputAccessoryViewToTextField:self.hexTextField];
    [self.contentView addSubview:self.hexTextField];
}

- (void)hexTextFieldChanged:(UITextField *)textField {
    NSString *hex = textField.text;
    if (![WPColorUtil isValidHexString:hex]) {
        // 恢复旧值
        textField.text = [self.isLightMode ? self.currentLightHex : self.currentDarkHex uppercaseString];
        return;
    }
    UIColor *color = [WPColorUtil colorFromHexString:hex];
    self.currentHsv = [WPColorUtil hsvFromColor:color];

    [self syncToComponentsFromCurrentColor];
}

#pragma mark - Alpha 控制区

- (void)setupAlphaControl {
    self.alphaLabel = [[UILabel alloc] init];
    self.alphaLabel.text = @"A";
    self.alphaLabel.font = [UIFont systemFontOfSize:14 weight:UIFontWeightBold];
    self.alphaLabel.textColor = [UIColor secondaryLabelColor];
    self.alphaLabel.textAlignment = NSTextAlignmentCenter;
    [self.contentView addSubview:self.alphaLabel];

    self.alphaSlider = [[UISlider alloc] init];
    self.alphaSlider.minimumValue = 0;
    self.alphaSlider.maximumValue = 1;
    [self.alphaSlider addTarget:self action:@selector(alphaSliderChanged:)
               forControlEvents:UIControlEventValueChanged];
    [self.contentView addSubview:self.alphaSlider];

    self.alphaTextField = [[UITextField alloc] init];
    self.alphaTextField.font = [UIFont monospacedDigitSystemFontOfSize:14 weight:UIFontWeightRegular];
    self.alphaTextField.textAlignment = NSTextAlignmentCenter;
    self.alphaTextField.keyboardType = UIKeyboardTypeDecimalPad;
    self.alphaTextField.layer.cornerRadius = 6;
    self.alphaTextField.layer.borderWidth = 1;
    self.alphaTextField.layer.borderColor = [UIColor separatorColor].CGColor;
    [self.alphaTextField addTarget:self action:@selector(alphaTextFieldChanged:)
                  forControlEvents:UIControlEventEditingDidEnd];
    [self addInputAccessoryViewToTextField:self.alphaTextField];
    [self.contentView addSubview:self.alphaTextField];
}

- (void)alphaSliderChanged:(UISlider *)slider {
    _currentHsv.alpha = slider.value;
    [self updateColorFromComponents];
}

- (void)alphaTextFieldChanged:(UITextField *)textField {
    CGFloat alpha = [textField.text floatValue];
    alpha = MAX(0, MIN(1, alpha));
    _currentHsv.alpha = alpha;
    self.alphaSlider.value = alpha;
    [self updateColorFromComponents];
}

#pragma mark - 预设颜色

- (NSArray<UIColor *> *)presetColorList {
    return @[
        [WPColorUtil colorFromHexString:@"#FF0000"],  // 红
        [WPColorUtil colorFromHexString:@"#FF9500"],  // 橙
        [WPColorUtil colorFromHexString:@"#FFCC00"],  // 黄
        [WPColorUtil colorFromHexString:@"#34C759"],  // 绿
        [WPColorUtil colorFromHexString:@"#5AC8FA"],  // 浅蓝
        [WPColorUtil colorFromHexString:@"#007AFF"],  // 蓝
        [WPColorUtil colorFromHexString:@"#5856D6"],  // 紫
        [WPColorUtil colorFromHexString:@"#AF52DE"],  // 粉紫
        [WPColorUtil colorFromHexString:@"#FF2D55"],  // 粉红
        [WPColorUtil colorFromHexString:@"#000000"],  // 黑
        [WPColorUtil colorFromHexString:@"#888888"],  // 灰
        [WPColorUtil colorFromHexString:@"#FFFFFF"],  // 白
    ];
}

- (NSArray<UIColor *> *)morandiColorList {
    return @[
        [WPColorUtil colorFromHexString:@"#E8D5C4"],  // 米色
        [WPColorUtil colorFromHexString:@"#D4C5B5"],  // 浅褐
        [WPColorUtil colorFromHexString:@"#C4B8A8"],  // 灰褐
        [WPColorUtil colorFromHexString:@"#B8A99A"],  // 中褐
        [WPColorUtil colorFromHexString:@"#A89888"],  // 深褐
        [WPColorUtil colorFromHexString:@"#D5C8C0"],  // 粉灰
        [WPColorUtil colorFromHexString:@"#C5B8B0"],  // 紫灰
        [WPColorUtil colorFromHexString:@"#B5A8A0"],  // 灰紫
        [WPColorUtil colorFromHexString:@"#A0B0A8"],  // 绿灰
        [WPColorUtil colorFromHexString:@"#B0B8B0"],  // 灰绿
    ];
}

- (void)setupPresetColors {
    // 预设色
    self.presetColorScrollView = [self makeColorScrollViewWithTitle:@"预设色"
                                                              colors:[self presetColorList]
                                                              action:@selector(presetColorTapped:)];
    // 莫兰迪色
    self.morandiColorScrollView = [self makeColorScrollViewWithTitle:@"莫兰迪"
                                                              colors:[self morandiColorList]
                                                              action:@selector(morandiColorTapped:)];
    // 历史色
    self.historyColorScrollView = [self makeColorScrollViewWithTitle:@"历史"
                                                              colors:@[]
                                                              action:@selector(historyColorTapped:)];
}

- (UIScrollView *)makeColorScrollViewWithTitle:(NSString *)title
                                        colors:(NSArray<UIColor *> *)colors
                                        action:(SEL)action {
    UIView *container = [[UIView alloc] init];
    [self.contentView addSubview:container];

    UILabel *titleLabel = [[UILabel alloc] init];
    titleLabel.text = title;
    titleLabel.font = [UIFont systemFontOfSize:13 weight:UIFontWeightMedium];
    titleLabel.textColor = [UIColor secondaryLabelColor];
    [container addSubview:titleLabel];

    UIScrollView *scrollView = [[UIScrollView alloc] init];
    scrollView.showsHorizontalScrollIndicator = NO;
    [container addSubview:scrollView];

    UIView *innerView = [[UIView alloc] init];
    [scrollView addSubview:innerView];

    CGFloat x = 0;
    for (UIColor *color in colors) {
        UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
        btn.frame = CGRectMake(x, 0, kButtonSize, kButtonSize);
        btn.backgroundColor = color;
        btn.layer.cornerRadius = kButtonSize / 2;
        btn.layer.borderWidth = 1;
        btn.layer.borderColor = [UIColor colorWithWhite:0.8 alpha:0.3].CGColor;
        btn.clipsToBounds = YES;
        [btn addTarget:self action:action forControlEvents:UIControlEventTouchUpInside];
        [innerView addSubview:btn];
        x += kButtonSize + kButtonSpacing;
    }

    CGFloat totalW = x - kButtonSpacing;
    innerView.frame = CGRectMake(0, 0, totalW, kButtonSize);
    scrollView.contentSize = CGSizeMake(totalW, kButtonSize);

    // 布局 (Auto Layout)
    titleLabel.translatesAutoresizingMaskIntoConstraints = NO;
    scrollView.translatesAutoresizingMaskIntoConstraints = NO;
    [NSLayoutConstraint activateConstraints:@[
        [titleLabel.leadingAnchor constraintEqualToAnchor:container.leadingAnchor],
        [titleLabel.centerYAnchor constraintEqualToAnchor:container.centerYAnchor],
        [titleLabel.widthAnchor constraintEqualToConstant:40],

        [scrollView.leadingAnchor constraintEqualToAnchor:titleLabel.trailingAnchor constant:8],
        [scrollView.trailingAnchor constraintEqualToAnchor:container.trailingAnchor],
        [scrollView.topAnchor constraintEqualToAnchor:container.topAnchor],
        [scrollView.bottomAnchor constraintEqualToAnchor:container.bottomAnchor],
    ]];

    return scrollView;
}

- (void)presetColorTapped:(UIButton *)button {
    UIColor *color = button.backgroundColor;
    if (!color) return;
    self.currentHsv = [WPColorUtil hsvFromColor:color];
    [self syncToComponentsFromCurrentColor];
}

- (void)morandiColorTapped:(UIButton *)button {
    UIColor *color = button.backgroundColor;
    if (!color) return;
    self.currentHsv = [WPColorUtil hsvFromColor:color];
    [self syncToComponentsFromCurrentColor];
}

- (void)historyColorTapped:(UIButton *)button {
    UIColor *color = button.backgroundColor;
    if (!color) return;
    self.currentHsv = [WPColorUtil hsvFromColor:color];
    [self syncToComponentsFromCurrentColor];
}

#pragma mark - 历史颜色持久化

- (void)loadHistoryColors {
    NSArray *saved = [[NSUserDefaults standardUserDefaults] arrayForKey:@"WPColorPickerHistory"];
    if (saved) {
        self.historyColors = [saved mutableCopy];
    }
    [self updateHistoryColorButtons];
}

- (void)saveCurrentColorToHistory {
    UIColor *color = [UIColor colorWithHue:self.currentHsv.hue
                                saturation:self.currentHsv.saturation
                                brightness:self.currentHsv.brightness
                                     alpha:self.currentHsv.alpha];
    NSString *hex = [WPColorUtil hexStringFromColor:color];

    for (NSString *existing in self.historyColors) {
        if ([WPColorUtil isColor:color similarToColor:[WPColorUtil colorFromHexString:existing]]) {
            return;
        }
    }

    [self.historyColors insertObject:hex atIndex:0];
    if (self.historyColors.count > kMaxHistory) {
        [self.historyColors removeLastObject];
    }

    [[NSUserDefaults standardUserDefaults] setObject:self.historyColors
                                              forKey:@"WPColorPickerHistory"];
    [self updateHistoryColorButtons];
}

- (void)updateHistoryColorButtons {
    // 从 self.historyColors 重建历史色块
    UIView *container = self.historyColorScrollView.superview;
    if (!container) return;

    // 移除旧的 innerView
    for (UIView *sub in self.historyColorScrollView.subviews) {
        [sub removeFromSuperview];
    }

    UIView *innerView = [[UIView alloc] init];
    [self.historyColorScrollView addSubview:innerView];

    CGFloat x = 0;
    for (NSString *hex in self.historyColors) {
        UIColor *color = [WPColorUtil colorFromHexString:hex];
        UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
        btn.frame = CGRectMake(x, 0, kButtonSize, kButtonSize);
        btn.backgroundColor = color;
        btn.layer.cornerRadius = kButtonSize / 2;
        btn.layer.borderWidth = 1;
        btn.layer.borderColor = [UIColor colorWithWhite:0.8 alpha:0.3].CGColor;
        btn.clipsToBounds = YES;
        [btn addTarget:self action:@selector(historyColorTapped:) forControlEvents:UIControlEventTouchUpInside];
        [innerView addSubview:btn];
        x += kButtonSize + kButtonSpacing;
    }

    CGFloat totalW = x > 0 ? x - kButtonSpacing : 0;
    innerView.frame = CGRectMake(0, 0, totalW, kButtonSize);
    self.historyColorScrollView.contentSize = CGSizeMake(totalW, kButtonSize);
}

#pragma mark - 键盘处理

- (void)keyboardWillShow:(NSNotification *)note {
    CGRect frame = [note.userInfo[UIKeyboardFrameEndUserInfoKey] CGRectValue];
    self.scrollView.contentInset = UIEdgeInsetsMake(0, 0, frame.size.height, 0);
}

- (void)keyboardWillHide:(NSNotification *)note {
    self.scrollView.contentInset = UIEdgeInsetsZero;
}

- (void)addInputAccessoryViewToTextField:(UITextField *)textField {
    UIToolbar *toolbar = [[UIToolbar alloc] initWithFrame:CGRectMake(0, 0, 0, 44)];
    UIBarButtonItem *flex = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemFlexibleSpace
                                                                          target:nil action:nil];
    UIBarButtonItem *done = [[UIBarButtonItem alloc] initWithTitle:@"完成"
                                                             style:UIBarButtonItemStyleDone
                                                            target:self
                                                            action:@selector(dismissKeyboard)];
    toolbar.items = @[flex, done];
    textField.inputAccessoryView = toolbar;
}

- (void)dismissKeyboard {
    [self.view endEditing:YES];
}

#pragma mark - 完整布局

- (void)setupConstraints {
    UIView *cv = self.contentView;
    cv.translatesAutoresizingMaskIntoConstraints = NO;

    __block UIView *prev = nil;
    void (^layout)(UIView *, CGFloat) = ^(UIView *view, CGFloat height) {
        view.translatesAutoresizingMaskIntoConstraints = NO;
        [NSLayoutConstraint activateConstraints:@[
            [view.leadingAnchor constraintEqualToAnchor:cv.leadingAnchor constant:kMargin],
            [view.trailingAnchor constraintEqualToAnchor:cv.trailingAnchor constant:-kMargin],
            [view.topAnchor constraintEqualToAnchor:prev ? prev.bottomAnchor : cv.topAnchor
                                           constant:prev ? 12 : 0],
            [view.heightAnchor constraintEqualToConstant:height],
        ]];
        prev = view;
    };

    // 1. 模式切换
    if (!self.singleColorMode) {
        self.modeSegmentedControl.translatesAutoresizingMaskIntoConstraints = NO;
        layout(self.modeSegmentedControl, 32);
    }

    // 2. Hex 区
    self.hexLabel.translatesAutoresizingMaskIntoConstraints = NO;
    self.hexTextField.translatesAutoresizingMaskIntoConstraints = NO;
    [NSLayoutConstraint activateConstraints:@[
        [self.hexLabel.leadingAnchor constraintEqualToAnchor:cv.leadingAnchor constant:kMargin],
        [self.hexLabel.centerYAnchor constraintEqualToAnchor:self.hexTextField.centerYAnchor],
        [self.hexLabel.widthAnchor constraintEqualToConstant:36],

        [self.hexTextField.trailingAnchor constraintEqualToAnchor:cv.trailingAnchor constant:-kMargin],
        [self.hexTextField.topAnchor constraintEqualToAnchor:prev ? prev.bottomAnchor : cv.topAnchor
                                                    constant:prev ? 12 : 0],
        [self.hexTextField.heightAnchor constraintEqualToConstant:kControlHeight],
        [self.hexTextField.widthAnchor constraintEqualToConstant:140],
    ]];
    prev = self.hexTextField;

    // 3. 色相条
    layout(self.hueSlider, 32);

    // 4. S/B 面板 (正方形)
    self.sbView.translatesAutoresizingMaskIntoConstraints = NO;
    [NSLayoutConstraint activateConstraints:@[
        [self.sbView.topAnchor constraintEqualToAnchor:prev.bottomAnchor constant:12],
        [self.sbView.centerXAnchor constraintEqualToAnchor:cv.centerXAnchor],
        [self.sbView.widthAnchor constraintEqualToAnchor:cv.widthAnchor multiplier:kSBViewRatio],
        [self.sbView.heightAnchor constraintEqualToAnchor:self.sbView.widthAnchor],
    ]];
    prev = self.sbView;

    // 5. 颜色预览
    layout(self.colorDisplayView, 44);

    // 6. RGB 控制区
    self.rgbControlView.translatesAutoresizingMaskIntoConstraints = NO;
    [NSLayoutConstraint activateConstraints:@[
        [self.rgbControlView.topAnchor constraintEqualToAnchor:prev.bottomAnchor constant:12],
        [self.rgbControlView.leadingAnchor constraintEqualToAnchor:cv.leadingAnchor constant:kMargin],
        [self.rgbControlView.trailingAnchor constraintEqualToAnchor:cv.trailingAnchor constant:-kMargin],
        [self.rgbControlView.heightAnchor constraintEqualToConstant:3 * kControlHeight + 2 * 8],
    ]];

    NSArray *labels = @[self.redLabel, self.greenLabel, self.blueLabel];
    NSArray *sliders = @[self.redSlider, self.greenSlider, self.blueSlider];
    NSArray *fields  = @[self.redTextField, self.greenTextField, self.blueTextField];
    for (int i = 0; i < 3; i++) {
        UIView *l = labels[i], *s = sliders[i], *f = fields[i];
        l.translatesAutoresizingMaskIntoConstraints = NO;
        s.translatesAutoresizingMaskIntoConstraints = NO;
        f.translatesAutoresizingMaskIntoConstraints = NO;
        CGFloat y = i * (kControlHeight + 8);
        [NSLayoutConstraint activateConstraints:@[
            [l.leadingAnchor constraintEqualToAnchor:self.rgbControlView.leadingAnchor],
            [l.widthAnchor constraintEqualToConstant:20],
            [l.centerYAnchor constraintEqualToAnchor:self.rgbControlView.topAnchor constant:y + kControlHeight/2],

            [s.leadingAnchor constraintEqualToAnchor:l.trailingAnchor constant:8],
            [s.centerYAnchor constraintEqualToAnchor:l.centerYAnchor],

            [f.leadingAnchor constraintEqualToAnchor:s.trailingAnchor constant:8],
            [f.trailingAnchor constraintEqualToAnchor:self.rgbControlView.trailingAnchor],
            [f.widthAnchor constraintEqualToConstant:54],
            [f.centerYAnchor constraintEqualToAnchor:l.centerYAnchor],
            [f.heightAnchor constraintEqualToConstant:kControlHeight],
        ]];
    }
    prev = self.rgbControlView;

    // 7. Alpha 控制区
    self.alphaLabel.translatesAutoresizingMaskIntoConstraints = NO;
    self.alphaSlider.translatesAutoresizingMaskIntoConstraints = NO;
    self.alphaTextField.translatesAutoresizingMaskIntoConstraints = NO;
    [NSLayoutConstraint activateConstraints:@[
        [self.alphaLabel.leadingAnchor constraintEqualToAnchor:cv.leadingAnchor constant:kMargin],
        [self.alphaLabel.widthAnchor constraintEqualToConstant:20],
        [self.alphaLabel.centerYAnchor constraintEqualToAnchor:self.alphaSlider.centerYAnchor],

        [self.alphaSlider.leadingAnchor constraintEqualToAnchor:self.alphaLabel.trailingAnchor constant:8],
        [self.alphaSlider.centerYAnchor constraintEqualToAnchor:self.alphaTextField.centerYAnchor],

        [self.alphaTextField.leadingAnchor constraintEqualToAnchor:self.alphaSlider.trailingAnchor constant:8],
        [self.alphaTextField.widthAnchor constraintEqualToConstant:54],
        [self.alphaTextField.trailingAnchor constraintEqualToAnchor:cv.trailingAnchor constant:-kMargin],
        [self.alphaTextField.heightAnchor constraintEqualToConstant:kControlHeight],

        [self.alphaTextField.topAnchor constraintEqualToAnchor:prev.bottomAnchor constant:12],
    ]];
    prev = self.alphaTextField;

    // 8. 预设色 / 莫兰迪 / 历史色
    UIView *lastView = prev;
    for (UIScrollView *sv in @[self.presetColorScrollView, self.morandiColorScrollView, self.historyColorScrollView]) {
        if (sv.superview) {
            UIView *container = sv.superview;
            container.translatesAutoresizingMaskIntoConstraints = NO;
            [NSLayoutConstraint activateConstraints:@[
                [container.topAnchor constraintEqualToAnchor:lastView.bottomAnchor constant:12],
                [container.leadingAnchor constraintEqualToAnchor:cv.leadingAnchor constant:kMargin],
                [container.trailingAnchor constraintEqualToAnchor:cv.trailingAnchor constant:-kMargin],
                [container.heightAnchor constraintEqualToConstant:44],
            ]];
            lastView = container;
        }
    }

    [lastView.bottomAnchor constraintEqualToAnchor:cv.bottomAnchor constant:-20].active = YES;
}

@end