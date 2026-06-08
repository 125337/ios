# 自定义 HSV 颜色选择器 · 搭建文档

> 参考 WCRefineColorPickerController 反编译分析
> 核心思路：HSVA 色相条 + 饱和度/亮度面板 + RGB/Hex/Alpha 输入 + 预设色

---

## 目录

1. [整体预览](#1-整体预览)
2. [文件清单与创建顺序](#2-文件清单与创建顺序)
3. [颜色工具类 WPColorUtil](#3-颜色工具类-wpcolorutil)
4. [核心数据模型](#4-核心数据模型)
5. [ViewController 骨架](#5-viewcontroller-骨架)
6. [色相条实现](#6-色相条实现)
7. [饱和度/亮度面板实现](#7-饱和度亮度面板实现)
8. [颜色更新核心链路](#8-颜色更新核心链路)
9. [RGB 控制区](#9-rgb-控制区)
10. [Hex 输入区](#10-hex-输入区)
11. [Alpha 控制区](#11-alpha-控制区)
12. [预设颜色 / 莫兰迪色 / 历史颜色](#12-预设颜色--莫兰迪色--历史颜色)
13. [键盘处理](#13-键盘处理)
14. [完整布局搭建](#14-完整布局搭建)
15. [测试与调试](#15-测试与调试)

---

## 1. 整体预览

```
┌──────────────────────────────────────┐
│  ◀ 取消          颜色选择       确认  │  ← NavigationBar
├──────────────────────────────────────┤
│  UIScrollView                        │
│  ┌──────────────────────────────────┐│
│  │  [浅色]  [深色]                   ││  ← UISegmentedControl
│  │                                  ││
│  │  HEX  #FF4500                    ││  ← UILabel + UITextField
│  │                                  ││
│  │  ┌──────────────────────────┐    ││  ← 色相条 (CAGradientLayer)
│  │  │ 🌈 红橙黄绿青蓝紫全光谱   │    ││     圆形指示器
│  │  └──────────────────────────┘    ││
│  │                                  ││
│  │  ┌──────────────────────┐        ││  ← 饱和度/亮度面板
│  │  │  ┌────────────────┐  │        ││     2×CAGradientLayer叠加
│  │  │  │ ● (指示器)      │  │        ││     X=饱和度 Y=明度
│  │  │  │                 │  │        ││
│  │  │  └────────────────┘  │        ││
│  │  └──────────────────────┘        ││
│  │                                  ││
│  │  ┌─ 当前颜色预览 ──────────┐     ││  ← UIView (背景色)
│  │  └─────────────────────────┘     ││
│  │                                  ││
│  │  R  ───●───────  [255]           ││  ← UISlider + UITextField
│  │  G  ──●────────  [128]           ││
│  │  B  ──────●────  [064]           ││
│  │  A  ────────●──  [1.0]           ││
│  │                                  ││
│  │  预设色  ○○○○○○○○○○○             ││  ← UIScrollView + 色块
│  │  莫兰迪  ○○○○○○○○○○○             ││
│  │  历史色  ○○○○○○○                 ││
│  └──────────────────────────────────┘│
└──────────────────────────────────────┘
```

---

## 2. 文件清单与创建顺序

按此顺序依次创建，每步完成后即可编译验证：

```
Config/
├── WPColorUtil.h / .m       ① 颜色工具（Hex↔UIColor、HSV 转换）
├── WPHsvColorPickerController.h  ② 头文件（数据模型 + 属性声明）
└── WPHsvColorPickerController.m   ③ 主实现（全部 UI + 交互逻辑）
```

**暂不需要 Category**（后续功能拆分开再说），第 ③ 步一个 .m 包含全部实现，约 500~800 行。

---

## 3. 颜色工具类 WPColorUtil

这是第 **① 步**，先构建底层工具，后续所有文件都依赖它。

### WPColorUtil.h

```objc
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// HSVA 颜色结构体
typedef struct {
    CGFloat hue;        // 色相     0.0 ~ 1.0
    CGFloat saturation; // 饱和度   0.0 ~ 1.0
    CGFloat brightness; // 明度     0.0 ~ 1.0
    CGFloat alpha;      // 透明度   0.0 ~ 1.0
} WPHsvColor;

@interface WPColorUtil : NSObject

/// #RRGGBB / #RRGGBBAA → UIColor
+ (UIColor *)colorFromHexString:(NSString *)hex;

/// UIColor → #RRGGBB（小写）
+ (NSString *)hexStringFromColor:(UIColor *)color;

/// 验证 Hex 是否合法（6 或 8 位十六进制，可选 # 前缀）
+ (BOOL)isValidHexString:(NSString *)hex;

/// HSVA → UIColor
+ (UIColor *)colorWithHue:(CGFloat)hue
               saturation:(CGFloat)saturation
               brightness:(CGFloat)brightness
                    alpha:(CGFloat)alpha;

/// UIColor → HSVA
+ (WPHsvColor)hsvFromColor:(UIColor *)color;

/// RGB(0~255) + Alpha(0~1) → WPHsvColor
+ (WPHsvColor)hsvFromRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha;

/// WPHsvColor → RGB(0~255)
+ (void)getRed:(CGFloat *)red green:(CGFloat *)green blue:(CGFloat *)blue fromHsv:(WPHsvColor)hsv;

/// 判断两个颜色是否相似（用于历史颜色去重，欧几里得距离 < 0.05）
+ (BOOL)isColor:(UIColor *)c1 similarToColor:(UIColor *)c2;

@end

NS_ASSUME_NONNULL_END
```

### WPColorUtil.m

```objc
#import "WPColorUtil.h"

@implementation WPColorUtil

#pragma mark - Hex ↔ UIColor

+ (UIColor *)colorFromHexString:(NSString *)hex {
    if (!hex || hex.length == 0) return [UIColor blackColor];

    // 移除 # 和空格
    hex = [[hex stringByReplacingOccurrencesOfString:@"#" withString:@""]
              stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]];

    if (hex.length == 6) {
        unsigned int rgb = 0;
        [[NSScanner scannerWithString:hex] scanHexInt:&rgb];
        return [UIColor colorWithRed:((rgb >> 16) & 0xFF) / 255.0
                               green:((rgb >> 8) & 0xFF) / 255.0
                                blue:(rgb & 0xFF) / 255.0
                               alpha:1.0];
    } else if (hex.length == 8) {
        unsigned long long rgba = 0;
        [[NSScanner scannerWithString:hex] scanHexLongLong:&rgba];
        return [UIColor colorWithRed:((rgba >> 24) & 0xFF) / 255.0
                               green:((rgba >> 16) & 0xFF) / 255.0
                                blue:((rgba >> 8) & 0xFF) / 255.0
                               alpha:(rgba & 0xFF) / 255.0];
    }
    return [UIColor blackColor];
}

+ (NSString *)hexStringFromColor:(UIColor *)color {
    if (!color) return @"#000000";
    CGFloat r = 0, g = 0, b = 0, a = 0;
    [color getRed:&r green:&g blue:&b alpha:&a];
    return [NSString stringWithFormat:@"#%02x%02x%02x",
            (int)(r * 255), (int)(g * 255), (int)(b * 255)];
}

+ (BOOL)isValidHexString:(NSString *)hex {
    if (!hex || hex.length == 0) return NO;
    hex = [hex stringByReplacingOccurrencesOfString:@"#" withString:@""];
    if (hex.length != 6 && hex.length != 8) return NO;
    NSCharacterSet *hexSet = [NSCharacterSet characterSetWithCharactersInString:@"0123456789abcdefABCDEF"];
    return [[hex stringByTrimmingCharactersInSet:hexSet] length] == 0;
}

#pragma mark - HSV ↔ UIColor

+ (UIColor *)colorWithHue:(CGFloat)hue saturation:(CGFloat)saturation
               brightness:(CGFloat)brightness alpha:(CGFloat)alpha {
    return [UIColor colorWithHue:hue saturation:saturation brightness:brightness alpha:alpha];
}

+ (WPHsvColor)hsvFromColor:(UIColor *)color {
    WPHsvColor hsv = {0, 0, 0, 1};
    [color getHue:&hsv.hue saturation:&hsv.saturation
        brightness:&hsv.brightness alpha:&hsv.alpha];
    return hsv;
}

#pragma mark - RGB ↔ HSV

+ (WPHsvColor)hsvFromRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha {
    UIColor *color = [UIColor colorWithRed:red/255.0 green:green/255.0 blue:blue/255.0 alpha:alpha];
    return [self hsvFromColor:color];
}

+ (void)getRed:(CGFloat *)red green:(CGFloat *)green blue:(CGFloat *)blue fromHsv:(WPHsvColor)hsv {
    UIColor *color = [UIColor colorWithHue:hsv.hue saturation:hsv.saturation
                                brightness:hsv.brightness alpha:hsv.alpha];
    [color getRed:red green:green blue:blue alpha:nil];
    if (red)   *red   = *red * 255;
    if (green) *green = *green * 255;
    if (blue)  *blue  = *blue * 255;
}

#pragma mark - 颜色相似度

+ (BOOL)isColor:(UIColor *)c1 similarToColor:(UIColor *)c2 {
    if (!c1 || !c2) return NO;
    CGFloat r1, g1, b1, a1, r2, g2, b2, a2;
    [c1 getRed:&r1 green:&g1 blue:&b1 alpha:&a1];
    [c2 getRed:&r2 green:&g2 blue:&b2 alpha:&a2];
    CGFloat dist = sqrt(pow(r1 - r2, 2) + pow(g1 - g2, 2) + pow(b1 - b2, 2));
    return dist < 0.05; // RGB 空间欧几里得距离 < ~12/255
}

@end
```

---

## 4. 核心数据模型

第 **② 步**：头文件声明数据结构和属性。

### WPHsvColorPickerController.h

```objc
#import <UIKit/UIKit.h>
#import "WPColorUtil.h"

NS_ASSUME_NONNULL_BEGIN

@interface WPHsvColorPickerController : UIViewController

// ═══════════════════════════════════════════
//  初始化
// ═══════════════════════════════════════════

/// 完整构造（浅色 + 深色双模式）
/// @param lightHex  浅色 Hex，nil 则默认 #FFFFFF
/// @param darkHex   深色 Hex，nil 则默认 #202020
/// @param callback  确认回调 (lightHex, darkHex)
- (instancetype)initWithLightHex:(nullable NSString *)lightHex
                        darkHex:(nullable NSString *)darkHex
                       callback:(nullable void(^)(NSString *lightHex, NSString *darkHex))callback;

/// 简易构造（单色模式，无浅深切换）
- (instancetype)initWithHex:(NSString *)hex
                  callback:(void(^)(NSString *hex))callback;

// ═══════════════════════════════════════════
//  颜色状态
// ═══════════════════════════════════════════

@property (nonatomic, assign) WPHsvColor currentHsv;
@property (nonatomic, copy)   NSString   *currentLightHex;
@property (nonatomic, copy)   NSString   *currentDarkHex;
@property (nonatomic, assign) BOOL       isLightMode;
@property (nonatomic, assign) BOOL       singleColorMode; // YES = 无浅深切换

// ═══════════════════════════════════════════
//  UI 组件（暴露给 Category / 调试用）
// ═══════════════════════════════════════════

@property (nonatomic, strong) UIScrollView        *scrollView;
@property (nonatomic, strong) UIView              *contentView;
@property (nonatomic, strong) UISegmentedControl  *modeSegmentedControl;

@property (nonatomic, strong) UIView *hueSliderView;                // 色相条容器
@property (nonatomic, strong) UIView *hueIndicator;                 // 色相指示器
@property (nonatomic, strong) UIView *saturationBrightnessView;     // S/B 面板容器
@property (nonatomic, strong) UIView *sbIndicator;                  // S/B 指示器

@property (nonatomic, strong) UIView *colorDisplayView;             // 颜色预览块

@property (nonatomic, strong) UILabel    *hexLabel;
@property (nonatomic, strong) UITextField *hexTextField;

@property (nonatomic, strong) UIView    *rgbControlView;
@property (nonatomic, strong) UISlider  *redSlider, *greenSlider, *blueSlider;
@property (nonatomic, strong) UITextField *redTextField, *greenTextField, *blueTextField;
@property (nonatomic, strong) UILabel   *redLabel, *greenLabel, *blueLabel;

@property (nonatomic, strong) UILabel    *alphaLabel;
@property (nonatomic, strong) UISlider   *alphaSlider;
@property (nonatomic, strong) UITextField *alphaTextField;

@property (nonatomic, strong) UIScrollView *presetColorScrollView;
@property (nonatomic, strong) UIScrollView *morandiColorScrollView;
@property (nonatomic, strong) UIScrollView *historyColorScrollView;
@property (nonatomic, strong) NSMutableArray<NSString *> *historyColors;

@end

NS_ASSUME_NONNULL_END
```

---

## 5. ViewController 骨架

第 **③ 步** 的开头部分。

### WPHsvColorPickerController.m 文件头

```objc
#import "WPHsvColorPickerController.h"

#pragma mark - 常量

static CGFloat const kMargin = 16.0;
static CGFloat const kControlHeight = 36.0;
static CGFloat const kSBViewRatio = 0.85;    // S/B 面板占 contentView 宽度比例
static CGFloat const kButtonSize = 36.0;
static CGFloat const kButtonSpacing = 10.0;
static NSInteger const kMaxHistory = 20;

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
```

### viewDidLoad

```objc
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
    [self updateColorDisplay];
    [self updateInputFields];
    [self updateIndicatorPositionsAnimated:NO];

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
```

### setupNavigationBar

```objc
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
```

### setupScrollView

```objc
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
```

---

## 6. 色相条实现

### setupUI 中的色相条创建

```objc
- (void)setupUI {
    // ─── 模式切换 ───
    [self setupModeControl];

    // ─── Hex 输入 ───
    [self setupHexInput];

    // ─── 色相条 ───
    self.hueSliderView = [[UIView alloc] init];
    self.hueSliderView.layer.cornerRadius = 6;
    self.hueSliderView.clipsToBounds = YES;
    [self.contentView addSubview:self.hueSliderView];
    [self setupHueSlider];

    // ─── 饱和度/亮度面板 ───
    self.saturationBrightnessView = [[UIView alloc] init];
    self.saturationBrightnessView.layer.cornerRadius = 8;
    self.saturationBrightnessView.clipsToBounds = YES;
    [self.contentView addSubview:self.saturationBrightnessView];
    [self setupSaturationBrightnessView];

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
```

### 色相渐变核心

```objc
- (void)setupHueSlider {
    // CAGradientLayer：横向色相渐变
    CAGradientLayer *gradient = [CAGradientLayer layer];
    gradient.frame = self.hueSliderView.bounds;
    gradient.startPoint = CGPointMake(0, 0.5);
    gradient.endPoint = CGPointMake(1, 0.5);
    gradient.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;

    // 每隔 30° 一个颜色 stop，共 13 个（0~360）
    NSMutableArray *colors = [NSMutableArray array];
    for (NSInteger i = 0; i <= 360; i += 30) {
        UIColor *c = [UIColor colorWithHue:i / 360.0 saturation:1.0 brightness:1.0 alpha:1.0];
        [colors addObject:(id)c.CGColor];
    }
    gradient.colors = colors;
    [self.hueSliderView.layer addSublayer:gradient];

    // 手势
    UIPanGestureRecognizer *pan = [[UIPanGestureRecognizer alloc]
                                    initWithTarget:self action:@selector(handleHueGesture:)];
    [self.hueSliderView addGestureRecognizer:pan];

    UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc]
                                    initWithTarget:self action:@selector(handleHueGesture:)];
    [self.hueSliderView addGestureRecognizer:tap];

    // 指示器
    self.hueIndicator = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 20, 20)];
    self.hueIndicator.layer.cornerRadius = 10;
    self.hueIndicator.layer.borderWidth = 2.5;
    self.hueIndicator.layer.borderColor = [UIColor whiteColor].CGColor;
    self.hueIndicator.layer.shadowColor = [UIColor blackColor].CGColor;
    self.hueIndicator.layer.shadowOffset = CGSizeMake(0, 1);
    self.hueIndicator.layer.shadowRadius = 2;
    self.hueIndicator.layer.shadowOpacity = 0.4;
    self.hueIndicator.userInteractionEnabled = NO;
    [self.hueSliderView addSubview:self.hueIndicator];
}
```

### 手势处理

```objc
- (void)handleHueGesture:(UIGestureRecognizer *)gesture {
    CGPoint loc = [gesture locationInView:self.hueSliderView];
    CGFloat hue = MAX(0, MIN(1, loc.x / self.hueSliderView.bounds.size.width));
    self.currentHsv.hue = hue;

    [self updateSaturationBrightnessBackground];
    [self updateColorFromComponents];
    [self updateIndicatorPositionsAnimated:NO];
}
```

---

## 7. 饱和度/亮度面板实现

### 创建面板与手势

```objc
- (void)setupSaturationBrightnessView {
    // 手势
    UIPanGestureRecognizer *pan = [[UIPanGestureRecognizer alloc]
                                    initWithTarget:self action:@selector(handleSBGesture:)];
    [self.saturationBrightnessView addGestureRecognizer:pan];

    UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc]
                                    initWithTarget:self action:@selector(handleSBGesture:)];
    [self.saturationBrightnessView addGestureRecognizer:tap];

    // S/B 指示器
    self.sbIndicator = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 24, 24)];
    self.sbIndicator.layer.cornerRadius = 12;
    self.sbIndicator.layer.borderWidth = 2.5;
    self.sbIndicator.layer.borderColor = [UIColor whiteColor].CGColor;
    self.sbIndicator.layer.shadowColor = [UIColor blackColor].CGColor;
    self.sbIndicator.layer.shadowOffset = CGSizeMake(0, 2);
    self.sbIndicator.layer.shadowRadius = 3;
    self.sbIndicator.layer.shadowOpacity = 0.4;
    self.sbIndicator.userInteractionEnabled = NO;
    [self.saturationBrightnessView addSubview:self.sbIndicator];

    // 初始绘制背景
    [self updateSaturationBrightnessBackground];
}
```

### 核心：两层 CAGradientLayer 叠加

> **关键原理**：每次色相改变时，移除旧 Layer，用新色相重建。

```objc
- (void)updateSaturationBrightnessBackground {
    // 1. 移除旧的 CAGradientLayer
    NSArray *oldLayers = [self.saturationBrightnessView.layer.sublayers copy];
    for (CALayer *layer in oldLayers) {
        if ([layer isKindOfClass:[CAGradientLayer class]]) {
            [layer removeFromSuperlayer];
        }
    }

    CGRect bounds = self.saturationBrightnessView.bounds;
    if (bounds.size.width <= 0 || bounds.size.height <= 0) return;

    // 2. 纯色 (当前色相，100% 饱和度 + 明度)
    UIColor *pureColor = [UIColor colorWithHue:self.currentHsv.hue
                                    saturation:1.0 brightness:1.0 alpha:1.0];

    // 3. Layer 1：饱和度渐变（左→右：白 → 纯色）
    CAGradientLayer *satLayer = [CAGradientLayer layer];
    satLayer.frame = bounds;
    satLayer.startPoint = CGPointMake(0, 0.5);
    satLayer.endPoint = CGPointMake(1, 0.5);
    satLayer.colors = @[(id)[UIColor whiteColor].CGColor, (id)pureColor.CGColor];
    [self.saturationBrightnessView.layer addSublayer:satLayer];

    // 4. Layer 2：明度渐变（下→上：黑色 → 透明）
    CAGradientLayer *briLayer = [CAGradientLayer layer];
    briLayer.frame = bounds;
    briLayer.startPoint = CGPointMake(0.5, 1);
    briLayer.endPoint = CGPointMake(0.5, 0);
    briLayer.colors = @[(id)[UIColor blackColor].CGColor, (id)[UIColor clearColor].CGColor];
    [self.saturationBrightnessView.layer addSublayer:briLayer];
}
```

### S/B 手势处理

```objc
- (void)handleSBGesture:(UIGestureRecognizer *)gesture {
    CGPoint loc = [gesture locationInView:self.saturationBrightnessView];
    CGFloat w = self.saturationBrightnessView.bounds.size.width;
    CGFloat h = self.saturationBrightnessView.bounds.size.height;
    if (w <= 0 || h <= 0) return;

    // 饱和度 → X 坐标比例
    CGFloat saturation = MAX(0, MIN(1, loc.x / w));
    // 明度 → 1 - (Y 坐标比例)
    CGFloat brightness = MAX(0, MIN(1, 1.0 - loc.y / h));

    self.currentHsv.saturation = saturation;
    self.currentHsv.brightness = brightness;

    [self updateColorFromComponents];
    [self updateIndicatorPositionsAnimated:NO];
}
```

### 指示器位置更新

```objc
- (void)updateIndicatorPositionsAnimated:(BOOL)animated {
    void (^update)(void) = ^{
        // S/B 指示器
        CGFloat sx = self.currentHsv.saturation * self.saturationBrightnessView.bounds.size.width;
        CGFloat sy = (1.0 - self.currentHsv.brightness) * self.saturationBrightnessView.bounds.size.height;
        self.sbIndicator.center = CGPointMake(sx, sy);

        // 色相指示器
        CGFloat hx = self.currentHsv.hue * self.hueSliderView.bounds.size.width;
        self.hueIndicator.center = CGPointMake(hx, self.hueSliderView.bounds.size.height / 2);
    };

    if (animated) {
        [UIView animateWithDuration:0.15 animations:update];
    } else {
        update();
    }
}
```

---

## 8. 颜色更新核心链路

> 所有颜色变更最终都走这里。

```
手势 / Slider / TextField / 预设色点击
    ↓
修改 currentHsv (hue/saturation/brightness/alpha)
    ↓
updateColorFromComponents()
    ├── UIColor *color = [UIColor colorWithHue:... saturation:... brightness:... alpha:...]
    ├── NSString *hex = [WPColorUtil hexStringFromColor:color]
    ├── 根据 isLightMode 更新 currentLightHex / currentDarkHex
    ├── updateColorDisplay()          → colorDisplayView.backgroundColor
    ├── updateInputFields()           → hexTextField.text + RGB/Alpha text + sliders
    ├── updateSaturationBrightnessBackground()  → 重绘 S/B 面板
    └── updateIndicatorPositionsAnimated:YES    → 移动指示器
```

### 代码实现

```objc
/// 从 currentHsv → 刷新所有 UI
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

/// 从 Hex → 解析出 HSVA → 刷新全部
- (void)updateCurrentColorFromHex {
    NSString *hex = self.isLightMode ? self.currentLightHex : self.currentDarkHex;
    UIColor *color = [WPColorUtil colorFromHexString:hex];
    self.currentHsv = [WPColorUtil hsvFromColor:color];

    [self updateSaturationBrightnessBackground];
    [self updateColorDisplay];
    [self updateInputFields];
    [self updateIndicatorPositionsAnimated:NO];
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
```

---

## 9. RGB 控制区

布局：每行 `[Label] + [Slider] + [TextField]`

```objc
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

// Slider 回调
- (void)redSliderChanged:(UISlider *)slider {
    self.currentHsv = [WPColorUtil hsvFromRed:slider.value green:self.greenSlider.value
                                         blue:self.blueSlider.value alpha:self.alphaSlider.value];
    [self updateSaturationBrightnessBackground];
    [self updateColorFromComponents];
    [self updateIndicatorPositionsAnimated:YES];
}

// (greenSliderChanged / blueSliderChanged 同理)

// TextField 回调
- (void)rgbTextFieldChanged:(UITextField *)textField {
    CGFloat val = [textField.text integerValue];
    val = MAX(0, MIN(255, val));
    self.currentHsv = [WPColorUtil hsvFromRed:self.redSlider.value green:self.greenSlider.value
                                         blue:self.blueSlider.value alpha:self.alphaSlider.value];
    [self updateSaturationBrightnessBackground];
    [self updateColorFromComponents];
    [self updateIndicatorPositionsAnimated:YES];
}

// 控件工厂方法
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
```

---

## 10. Hex 输入区

```objc
- (void)setupHexInput {
    self.hexLabel = [[UILabel alloc] init];
    self.hexLabel.text = @"HEX";
    self.hexLabel.font = [UIFont systemFontOfSize:14 weight:UIFontWeightMedium];
    [self.contentView addSubview:self.hexLabel];

    self.hexTextField = [[UITextField alloc] init];
    // 优先 Menlo-Regular，兜底 monospacedSystemFontOfSize
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

    [self updateSaturationBrightnessBackground];
    [self updateColorDisplay];
    [self updateIndicatorPositionsAnimated:YES];
    // 同步 RGB/Alpha 显示
    CGFloat r, g, b;
    [WPColorUtil getRed:&r green:&g blue:&b fromHsv:self.currentHsv];
    self.redSlider.value = r;   self.redTextField.text = [NSString stringWithFormat:@"%.0f", r];
    self.greenSlider.value = g; self.greenTextField.text = [NSString stringWithFormat:@"%.0f", g];
    self.blueSlider.value = b;  self.blueTextField.text = [NSString stringWithFormat:@"%.0f", b];
    self.alphaSlider.value = self.currentHsv.alpha;
    self.alphaTextField.text = [NSString stringWithFormat:@"%.2f", self.currentHsv.alpha];
}
```

---

## 11. Alpha 控制区

```objc
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
    self.currentHsv.alpha = slider.value;
    [self updateColorFromComponents];
}

- (void)alphaTextFieldChanged:(UITextField *)textField {
    CGFloat alpha = [textField.text floatValue];
    alpha = MAX(0, MIN(1, alpha));
    self.currentHsv.alpha = alpha;
    self.alphaSlider.value = alpha;
    [self updateColorFromComponents];
}
```

---

## 12. 预设颜色 / 莫兰迪色 / 历史颜色

### 预设颜色数组

```objc
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
```

### 色块区域搭建

```objc
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

/// 创建带标题的横向色块条
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

    return scrollView; // 暴露给 self 以便后续更新历史色
}
```

### 色块点击回调

```objc
- (void)presetColorTapped:(UIButton *)button {
    UIColor *color = button.backgroundColor;
    if (!color) return;
    self.currentHsv = [WPColorUtil hsvFromColor:color];

    [self updateSaturationBrightnessBackground];
    [self updateColorFromComponents];
    [self updateIndicatorPositionsAnimated:YES];
}

- (void)morandiColorTapped:(UIButton *)button {
    // 同 presetColorTapped:
}
```

### 历史颜色持久化

```objc
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

    // 去重
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
    // 从 self.historyColors 重建色块
    // ... (逻辑同 makeColorScrollViewWithTitle)
}
```

---

## 13. 键盘处理

```objc
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
```

---

## 14. 完整布局搭建

最终的所有组件垂直排列约束：

```objc
- (void)setupConstraints {
    UIView *cv = self.contentView;
    cv.translatesAutoresizingMaskIntoConstraints = NO;

    // ScrollView 已在 setupScrollView 中约束

    // ─── 辅助方法：将 subview 垂直排在 previous 下方 ───
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

    // 2. Hex 区 (一行：HEX 标签 + TextField)
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
    layout(self.hueSliderView, 32);

    // 4. S/B 面板 (正方形)
    self.saturationBrightnessView.translatesAutoresizingMaskIntoConstraints = NO;
    [NSLayoutConstraint activateConstraints:@[
        [self.saturationBrightnessView.topAnchor constraintEqualToAnchor:prev.bottomAnchor constant:12],
        [self.saturationBrightnessView.centerXAnchor constraintEqualToAnchor:cv.centerXAnchor],
        [self.saturationBrightnessView.widthAnchor constraintEqualToAnchor:cv.widthAnchor
                                                                 multiplier:kSBViewRatio],
        [self.saturationBrightnessView.heightAnchor constraintEqualToAnchor:self.saturationBrightnessView.widthAnchor],
    ]];
    prev = self.saturationBrightnessView;

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

    // RGB 内部布局 (3 行)
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

    // 8. 预设色 (title + scrollView 高度 44)
    // 9. 莫兰迪 (同上)
    // 10. 历史色 (同上)
    // 简化：预览色 scrollView 高度设 44，底部连到 cv.bottom
    UIView *lastView = prev;
    for (UIScrollView *sv in @[self.presetColorScrollView, self.morandiColorScrollView, self.historyColorScrollView]) {
        if (sv.superview) {
            // 已经在 makeColorScrollViewWithTitle 中添加了
            // 这里约束其容器高度
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

    // 底部
    [lastView.bottomAnchor constraintEqualToAnchor:cv.bottomAnchor constant:-20].active = YES;
}
```

---

## 15. 测试与调试

### 快速预览方法

在任意 VC 中调用以下代码即可弹出颜色选择器查看效果：

```objc
// 测试：弹出完整版（浅色/深色切换）
WPHsvColorPickerController *picker = [[WPHsvColorPickerController alloc]
    initWithLightHex:@"#FA5151" darkHex:@"#CC3333"
    callback:^(NSString *light, NSString *dark) {
        NSLog(@"浅色: %@  深色: %@", light, dark);
    }];
UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:picker];
[self presentViewController:nav animated:YES completion:nil];
```

```objc
// 测试：弹出单色版（无深浅切换）
WPHsvColorPickerController *picker = [[WPHsvColorPickerController alloc]
    initWithHex:@"#007AFF"
    callback:^(NSString *hex) {
        NSLog(@"选中颜色: %@", hex);
    }];
UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:picker];
[self presentViewController:nav animated:YES completion:nil];
```

### 递增式开发步骤

| 步骤 | 验证内容 |
|------|----------|
| 1. 创建 `WPColorUtil.h/.m` | 调用 `[WPColorUtil colorFromHexString:@"#FF0000"]` 返回红色 |
| 2. 创建 `WPHsvColorPickerController.h` | 编译通过 |
| 3. 实现 `viewDidLoad` + `setupScrollView` | 弹出空 ScrollView |
| 4. 实现色相条 | 看到彩虹渐变条，可拖动选择色相 |
| 5. 实现 S/B 面板 | 看到双渐变面板，色相切换时面板跟着变化 |
| 6. 实现颜色更新链路 | 色相/SB 拖动时预览块颜色实时变化 |
| 7. 实现 Hex 输入 | 输入 Hex 后面板和预览同步变化 |
| 8. 实现 RGB + Alpha | Slider 与面板双向同步 |
| 9. 实现预设色 | 点击色块跳转到对应颜色 |
| 10. 实现历史色 | 确认后保存，再次打开能看到 |

---

## 16. 接入实战：圆角设置的"Cell背景色"直接使用自定义颜色选择器

> `SettingListCornerRadiusController` 中的"Cell背景色"→ 点击后直接弹出 `WPHsvColorPickerController`，不走 iOS 原生

### 16.1 当前代码调用链路

```
SettingListCornerRadiusController.buildUI
  └── [self addColorRowInGroup:title:@"Cell背景色"
                          key:@"listCellBgColor" ...]        ① 创建 UIButton，action = colorButtonTapped:
                                                                |
  SettingCategoryController.colorButtonTapped:                 ② 点击后
    └── [WPColorPicker presentOnViewController:...]             弹出系统原生 UIColorPickerViewController
```

**只需改两处**：`SettingListCornerRadiusController.m` 拦截 `colorButtonTapped:`，WPColorPicker 加个快捷方法。

### 16.2 修改方案

#### ① SettingListCornerRadiusController.m — 直接重写 colorButtonTapped:

```objc
// SettingListCornerRadiusController.m
// 在 @implementation 中添加

- (void)colorButtonTapped:(UIButton *)sender {
    NSString *key = objc_getAssociatedObject(sender, "key");
    if (!key) return;

    if ([key isEqualToString:@"listCellBgColor"]) {
        // ─── Cell背景色 → 直接弹出自定义颜色选择器 ───
        PluginConfig *cfg = [PluginConfig shared];
        NSString *hex = cfg.listCellBgColor;

        WPHsvColorPickerController *picker = [[WPHsvColorPickerController alloc]
            initWithHex:hex ?: @"#FFFFFF"
            callback:^(NSString *selectedHex) {
                // 更新按钮颜色
                sender.backgroundColor = [WPColorUtil colorFromHexString:selectedHex];
                // 保存配置
                cfg.listCellBgColor = selectedHex;
                [cfg save];
            }];

        UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:picker];
        [self presentViewController:nav animated:YES completion:nil];
        return;
    }

    // ─── 其他颜色 key → 走父类默认（系统原生） ───
    [super colorButtonTapped:sender];
}
```

#### ② 不依赖父类改动

第 ① 步就是全部。父类 `SettingCategoryController` 完全不用动，`WPColorPicker` 也不需要加新方法。

### 16.3 所需文件清单

```
Config/
├── WPColorUtil.h  / .m         ① 先创建（颜色工具）
├── WPHsvColorPickerController.h ② 头文件
├── WPHsvColorPickerController.m  ③ 实现
└── WPColorPicker.h / .m        （不改）
Settings/Controllers/
└── SettingListCornerRadiusController.m  ← 改这一处
```

### 16.4 实现步骤

| 步骤 | 做什么 | 文件 |
|------|--------|------|
| 1 | 创建 `WPColorUtil`（Hex↔UIColor 转换） | 新文件 |
| 2 | 创建 `WPHsvColorPickerController`（全部 UI + 交互） | 新文件 |
| 3 | 在 `SettingListCornerRadiusController.m` 重写 `colorButtonTapped:` | 改 1 处 |
| 4 | 编译运行，点击"Cell背景色" → 弹出自定义颜色选择器 | — |

### 16.5 效果

进入 **微信 → MioPlugin → 列表圆角 → 圆角参数**，点击 **Cell背景色** 色块：

```
原来：弹出 iOS 系统面板（样式不可控，仅 iOS 14+ 可用）
现在：弹出自定义 HSV 颜色选择器
      ┌──────────────────────┐
      │ ◀ 取消  颜色选择  确认 │
      │ HEX  #FFFFFF         │
      │ ┌────────────────┐   │
      │ │ 色相条(彩虹渐变) │   │   ← 拖动选择色相
      │ └────────────────┘   │
      │ ┌────────────────┐   │
      │ │ S/B 面板       │   │   ← 拖动选择饱和度/明度
      │ │   ● (指示器)   │   │
      │ └────────────────┘   │
      │ ■ 预览               │
      │ R ───●────  255      │
      │ G ──●─────  128      │
      │ B ──●─────  064      │
      │ 预设色 ○○○○○○○○      │
      └──────────────────────┘
      点"确认"→ 保存到配置，色块和列表同步更新
```

### 16.6 逐步扩展（后续）

把自定义颜色选择器覆盖到更多颜色设置项，只需在 `colorButtonTapped:` 中加 key 判断：

```objc
- (void)colorButtonTapped:(UIButton *)sender {
    NSString *key = objc_getAssociatedObject(sender, "key");
    if (!key) { [super colorButtonTapped:sender]; return; }

    // 需要走自定义颜色选择器的 key 列表
    NSSet *customKeys = [NSSet setWithObjects:
        @"listCellBgColor",
        @"listCellBorderColor",     // ⬅ 加这个
        @"listCardBgColor",         // ⬅ 加这个
        nil];

    if ([customKeys containsObject:key]) {
        // 弹出自定义颜色选择器...
        // （和上面一样的逻辑，key 用来读写 config 属性）
        PluginConfig *cfg = [PluginConfig shared];
        NSString *hex = [cfg valueForKey:key];
        // ...弹出 picker，回调中 [cfg setValue:selectedHex forKey:key]; [cfg save];
    } else {
        [super colorButtonTapped:sender];
    }
}
```