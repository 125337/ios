#import "WPHueSlider.h"

@interface WPHueSlider ()
@property (nonatomic, strong) UIView *indicator;
@property (nonatomic, strong) CAGradientLayer *gradientLayer;
@property (nonatomic, assign) BOOL needsRebuildGradient;
@end

@implementation WPHueSlider

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
    self.layer.cornerRadius = 6;
    self.clipsToBounds = YES;

    // ─── 手势 ───
    UIPanGestureRecognizer *pan = [[UIPanGestureRecognizer alloc]
                                    initWithTarget:self action:@selector(handleGesture:)];
    [self addGestureRecognizer:pan];
    UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc]
                                    initWithTarget:self action:@selector(handleGesture:)];
    [self addGestureRecognizer:tap];

    // ─── 指示器 ───
    self.indicator = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 20, 20)];
    self.indicator.layer.cornerRadius = 10;
    self.indicator.layer.borderWidth = 2.5;
    self.indicator.layer.borderColor = [UIColor whiteColor].CGColor;
    self.indicator.layer.shadowColor = [UIColor blackColor].CGColor;
    self.indicator.layer.shadowOffset = CGSizeMake(0, 1);
    self.indicator.layer.shadowRadius = 2;
    self.indicator.layer.shadowOpacity = 0.4;
    self.indicator.userInteractionEnabled = NO;
    [self addSubview:self.indicator];
}

- (void)layoutSubviews {
    [super layoutSubviews];
    // ✅ 每次 layout 时保证 gradient 尺寸正确，彻底解决时序问题
    [self rebuildGradientIfNeeded];
    [self updateIndicatorPositionAnimated:NO];
}

#pragma mark - 渐变层

- (void)rebuildGradientIfNeeded {
    if (self.bounds.size.width <= 0 || self.bounds.size.height <= 0) return;

    // 如果已有 gradient 且尺寸匹配，不重建
    if (self.gradientLayer && CGRectEqualToRect(self.gradientLayer.frame, self.bounds)) {
        return;
    }

    // 移除旧的
    [self.gradientLayer removeFromSuperlayer];

    self.gradientLayer = [CAGradientLayer layer];
    self.gradientLayer.frame = self.bounds;  // ✅ 此时 bounds 始终正确
    self.gradientLayer.startPoint = CGPointMake(0, 0.5);
    self.gradientLayer.endPoint = CGPointMake(1, 0.5);

    NSMutableArray *colors = [NSMutableArray array];
    for (NSInteger i = 0; i <= 360; i += 30) {
        UIColor *c = [UIColor colorWithHue:i / 360.0 saturation:1.0 brightness:1.0 alpha:1.0];
        [colors addObject:(id)c.CGColor];
    }
    self.gradientLayer.colors = colors;
    [self.layer insertSublayer:self.gradientLayer atIndex:0];
}

#pragma mark - 手势

- (void)handleGesture:(UIGestureRecognizer *)gesture {
    CGPoint loc = [gesture locationInView:self];
    CGFloat hue = MAX(0, MIN(1, loc.x / self.bounds.size.width));
    self.hue = hue;
    if (self.hueDidChange) {
        self.hueDidChange(hue);
    }
}

#pragma mark - 属性

- (void)setHue:(CGFloat)hue {
    _hue = hue;
    [self updateIndicatorPositionAnimated:YES];
}

- (void)setIndicatorPositionAnimated:(BOOL)animated {
    [self updateIndicatorPositionAnimated:animated];
}

- (void)updateIndicatorPositionAnimated:(BOOL)animated {
    CGFloat x = self.hue * self.bounds.size.width;
    CGFloat cy = self.bounds.size.height / 2;

    if (animated) {
        [UIView animateWithDuration:0.15 animations:^{
            self.indicator.center = CGPointMake(x, cy);
        }];
    } else {
        self.indicator.center = CGPointMake(x, cy);
    }
}

@end