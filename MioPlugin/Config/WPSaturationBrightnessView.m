#import "WPSaturationBrightnessView.h"

@interface WPSaturationBrightnessView ()
@property (nonatomic, strong) UIView *indicator;
@property (nonatomic, assign) BOOL needsRebuild;
@end

@implementation WPSaturationBrightnessView

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        [self commonInit];
    }
    return self;
}

- (instancetype)initWithCoder:(NSCoder *)coder {
    self = [super initWithCoder:coder];
    if (self) {
        [self commonInit];
    }
    return self;
}

- (void)commonInit {
    self.layer.cornerRadius = 8;
    self.clipsToBounds = YES;
    _hue = 0;
    _saturation = 1;
    _brightness = 1;

    // ─── 手势 ───
    UIPanGestureRecognizer *pan = [[UIPanGestureRecognizer alloc]
                                    initWithTarget:self action:@selector(handleGesture:)];
    [self addGestureRecognizer:pan];
    UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc]
                                    initWithTarget:self action:@selector(handleGesture:)];
    [self addGestureRecognizer:tap];

    // ─── 指示器 ───
    self.indicator = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 24, 24)];
    self.indicator.layer.cornerRadius = 12;
    self.indicator.backgroundColor = [UIColor whiteColor];
    self.indicator.layer.borderWidth = 2.5;
    self.indicator.layer.borderColor = [UIColor colorWithWhite:0.3 alpha:0.5].CGColor;
    self.indicator.layer.shadowColor = [UIColor blackColor].CGColor;
    self.indicator.layer.shadowOffset = CGSizeMake(0, 2);
    self.indicator.layer.shadowRadius = 3;
    self.indicator.layer.shadowOpacity = 0.4;
    self.indicator.userInteractionEnabled = NO;
    [self addSubview:self.indicator];
}

- (void)layoutSubviews {
    [super layoutSubviews];
    // ✅ 每次 layout 时重建渐变（尺寸变化自动适配）
    [self rebuildGradient];
    [self updateIndicatorPositionAnimated:NO];
}

#pragma mark - 渐变重建

- (void)rebuildGradient {
    if (self.bounds.size.width <= 0 || self.bounds.size.height <= 0) return;

    // 移除旧的 CAGradientLayer
    NSArray *oldLayers = [self.layer.sublayers copy];
    for (CALayer *layer in oldLayers) {
        if ([layer isKindOfClass:[CAGradientLayer class]]) {
            [layer removeFromSuperlayer];
        }
    }

    // 纯色（当前色相，100%饱和度+明度）
    UIColor *pureColor = [UIColor colorWithHue:self.hue
                                    saturation:1.0 brightness:1.0 alpha:1.0];

    // Layer 1：饱和度渐变（左→右：白 → 纯色）
    CAGradientLayer *satLayer = [CAGradientLayer layer];
    satLayer.frame = self.bounds;
    satLayer.startPoint = CGPointMake(0, 0.5);
    satLayer.endPoint = CGPointMake(1, 0.5);
    satLayer.colors = @[(id)[UIColor whiteColor].CGColor, (id)pureColor.CGColor];
    [self.layer addSublayer:satLayer];

    // Layer 2：明度渐变（下→上：黑 → 透明）
    CAGradientLayer *briLayer = [CAGradientLayer layer];
    briLayer.frame = self.bounds;
    briLayer.startPoint = CGPointMake(0.5, 1);
    briLayer.endPoint = CGPointMake(0.5, 0);
    briLayer.colors = @[(id)[UIColor blackColor].CGColor, (id)[UIColor clearColor].CGColor];
    [self.layer addSublayer:briLayer];
}

#pragma mark - 手势

- (void)handleGesture:(UIGestureRecognizer *)gesture {
    CGPoint loc = [gesture locationInView:self];
    CGFloat w = self.bounds.size.width;
    CGFloat h = self.bounds.size.height;
    if (w <= 0 || h <= 0) return;

    _saturation = MAX(0, MIN(1, loc.x / w));
    _brightness = MAX(0, MIN(1, 1.0 - loc.y / h));

    [self updateIndicatorPositionAnimated:NO];

    if (self.sbDidChange) {
        self.sbDidChange(_saturation, _brightness);
    }
}

#pragma mark - 属性

- (void)setHue:(CGFloat)hue {
    if (_hue == hue) return;
    _hue = hue;
    [self rebuildGradient]; // 色相变 → 面板渐变重绘
}

- (void)setSaturation:(CGFloat)saturation {
    _saturation = saturation;
    [self updateIndicatorPositionAnimated:YES];
}

- (void)setBrightness:(CGFloat)brightness {
    _brightness = brightness;
    [self updateIndicatorPositionAnimated:YES];
}

- (void)setIndicatorPositionAnimated:(BOOL)animated {
    [self updateIndicatorPositionAnimated:animated];
}

- (void)updateIndicatorPositionAnimated:(BOOL)animated {
    CGFloat x = self.saturation * self.bounds.size.width;
    CGFloat y = (1.0 - self.brightness) * self.bounds.size.height;

    if (animated) {
        [UIView animateWithDuration:0.15 animations:^{
            self.indicator.center = CGPointMake(x, y);
        }];
    } else {
        self.indicator.center = CGPointMake(x, y);
    }
}

@end