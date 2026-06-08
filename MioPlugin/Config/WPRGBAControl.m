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