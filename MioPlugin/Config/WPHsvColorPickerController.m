#import "WPHsvColorPickerController.h"
#import "WPHueSlider.h"
#import "WPSaturationBrightnessView.h"
#import "WPRGBAControl.h"
#import "WPHexInputView.h"
#import "WPColorPaletteView.h"

#pragma mark - 常量

static CGFloat const kMargin = 16.0;
static CGFloat const kControlHeight = 36.0;
static CGFloat const kSBViewRatio = 0.85;    // S/B 面板占 contentView 宽度比例

#pragma mark - 私有属性

@interface WPHsvColorPickerController ()
@property (nonatomic, copy) void(^callback)(NSString *lightHex, NSString *darkHex);
@property (nonatomic, strong) WPHueSlider *hueSlider;
@property (nonatomic, strong) WPSaturationBrightnessView *sbView;
@property (nonatomic, strong) WPRGBAControl *rgbaControl;
@property (nonatomic, strong) WPHexInputView *hexInput;
@property (nonatomic, strong) WPColorPaletteView *colorPalette;
- (void)loadHistoryColors;
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

    // ─── Hex 输入（独立组件） ───
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

    // ─── 色相条（独立组件） ───
    self.hueSlider = [[WPHueSlider alloc] init];
    self.hueSlider.hueDidChange = ^(CGFloat hue) {
        __strong __typeof(weakSelf) strongSelf = weakSelf;
        if (!strongSelf) return;
        WPHsvColor hsv = strongSelf.currentHsv;
        hsv.hue = hue;
        strongSelf.currentHsv = hsv;
        // 通知 S/B 面板色相变了
        strongSelf.sbView.hue = hue;
        // 更新输出
        [strongSelf updateColorFromComponents];
    };
    [self.contentView addSubview:self.hueSlider];

    // ─── S/B 面板（独立组件） ───
    self.sbView = [[WPSaturationBrightnessView alloc] init];
    self.sbView.sbDidChange = ^(CGFloat saturation, CGFloat brightness) {
        __strong __typeof(weakSelf) strongSelf = weakSelf;
        if (!strongSelf) return;
        WPHsvColor hsv = strongSelf.currentHsv;
        hsv.saturation = saturation;
        hsv.brightness = brightness;
        strongSelf.currentHsv = hsv;
        [strongSelf updateColorFromComponents];
    };
    [self.contentView addSubview:self.sbView];

    // ─── 颜色预览 ───
    self.colorDisplayView = [[UIView alloc] init];
    self.colorDisplayView.layer.cornerRadius = 8;
    self.colorDisplayView.layer.borderWidth = 1;
    self.colorDisplayView.layer.borderColor = [UIColor separatorColor].CGColor;
    [self.contentView addSubview:self.colorDisplayView];

    // ─── RGBA 控制（独立组件，替代 setupRGBControls + setupAlphaControl） ───
    self.rgbaControl = [[WPRGBAControl alloc] init];
    self.rgbaControl.rgbaDidChange = ^(CGFloat r, CGFloat g, CGFloat b, CGFloat a) {
        __strong __typeof(weakSelf) strongSelf = weakSelf;
        if (!strongSelf) return;
        strongSelf.currentHsv = [WPColorUtil hsvFromRed:r green:g blue:b alpha:a];
        [strongSelf syncToComponentsFromCurrentColor];
    };
    [self.contentView addSubview:self.rgbaControl];

    // ─── 色板（独立组件，替代 setupPresetColors） ───
    self.colorPalette = [[WPColorPaletteView alloc] init];
    [self.colorPalette setPresetColors:[self presetColorList]];
    [self.colorPalette setMorandiColors:[self morandiColorList]];
    [self.colorPalette setHistoryHexes:self.historyColors];
    self.colorPalette.colorDidTap = ^(UIColor *color) {
        __strong __typeof(weakSelf) strongSelf = weakSelf;
        if (!strongSelf) return;
        strongSelf.currentHsv = [WPColorUtil hsvFromColor:color];
        [strongSelf syncToComponentsFromCurrentColor];
    };
    [self.contentView addSubview:self.colorPalette];

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
    self.hexInput.hexString = hex;

    // RGBA
    CGFloat r, g, b;
    [WPColorUtil getRed:&r green:&g blue:&b fromHsv:self.currentHsv];
    [self.rgbaControl setRed:r green:g blue:b alpha:self.currentHsv.alpha animated:NO];
}

#pragma mark - 预设色列表

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
    self.hexInput.translatesAutoresizingMaskIntoConstraints = NO;
    [NSLayoutConstraint activateConstraints:@[
        [self.hexInput.topAnchor constraintEqualToAnchor:prev ? prev.bottomAnchor : cv.topAnchor
                                                constant:prev ? 12 : 0],
        [self.hexInput.leadingAnchor constraintEqualToAnchor:cv.leadingAnchor constant:kMargin],
        [self.hexInput.trailingAnchor constraintEqualToAnchor:cv.trailingAnchor constant:-kMargin],
        [self.hexInput.heightAnchor constraintEqualToConstant:kControlHeight],
    ]];
    prev = self.hexInput;

    // 3. 色相条
    layout(self.hueSlider, 32);

    // 4. S/B 面板 (正方形)
    self.sbView.translatesAutoresizingMaskIntoConstraints = NO;
    [NSLayoutConstraint activateConstraints:@[
        [self.sbView.topAnchor constraintEqualToAnchor:prev.bottomAnchor constant:12],
        [self.sbView.centerXAnchor constraintEqualToAnchor:cv.centerXAnchor],
        [self.sbView.widthAnchor constraintEqualToAnchor:cv.widthAnchor multiplier:kSBViewRatio],
        [self.sbView.heightAnchor constraintEqualToAnchor:self.sbView.widthAnchor multiplier:kSBAspectRatio],
    ]];
    prev = self.sbView;

    // 5. 颜色预览
    layout(self.colorDisplayView, 44);

    // 6. RGBA 控制区（替代 RGB + Alpha）
    self.rgbaControl.translatesAutoresizingMaskIntoConstraints = NO;
    [NSLayoutConstraint activateConstraints:@[
        [self.rgbaControl.topAnchor constraintEqualToAnchor:prev.bottomAnchor constant:12],
        [self.rgbaControl.leadingAnchor constraintEqualToAnchor:cv.leadingAnchor constant:kMargin],
        [self.rgbaControl.trailingAnchor constraintEqualToAnchor:cv.trailingAnchor constant:-kMargin],
        [self.rgbaControl.heightAnchor constraintEqualToAnchor:self.rgbaControl.widthAnchor multiplier:0.52],
    ]];
    prev = self.rgbaControl;

    // 7. 色板（预设/莫兰迪/历史，替代 3 个 scrollView）
    self.colorPalette.translatesAutoresizingMaskIntoConstraints = NO;
    [NSLayoutConstraint activateConstraints:@[
        [self.colorPalette.topAnchor constraintEqualToAnchor:prev.bottomAnchor constant:12],
        [self.colorPalette.leadingAnchor constraintEqualToAnchor:cv.leadingAnchor constant:kMargin],
        [self.colorPalette.trailingAnchor constraintEqualToAnchor:cv.trailingAnchor constant:-kMargin],
        [self.colorPalette.heightAnchor constraintEqualToConstant:3 * 44],
    ]];
    prev = self.colorPalette;

    [prev.bottomAnchor constraintEqualToAnchor:cv.bottomAnchor constant:-20].active = YES;
}

#pragma mark - 历史颜色加载

- (void)loadHistoryColors {
    NSArray *saved = [[NSUserDefaults standardUserDefaults] arrayForKey:@"WPColorPickerHistory"];
    if (saved) {
        self.historyColors = [saved mutableCopy];
        [self.colorPalette setHistoryHexes:self.historyColors];
    }
}

@end