//
//  DayNightSwitch.m
//  MioPlugin
//
//  日月开关控件实现（借自 DayNightSwitch 项目，Finn Gaida 2016，MIT）。
//  原样搬运，仅按项目规范调整注释；太阳/月亮/星星/云全部由 CALayer 绘制，
//  唯一的外部资源是云朵贴图（imageNamed，微信主 bundle 无此图 → nil，安全跳过）。
//

#import "DayNightSwitch.h"

/// 配色常量（原项目实锤）
#define onKnobColor [UIColor colorWithRed: 0.882 green: 0.765 blue: 0.325 alpha: 1];
#define onSubviewColor [UIColor colorWithRed: 0.992 green: 0.875 blue: 0.459 alpha: 1];
#define offKnobColor [UIColor colorWithRed: 0.894 green: 0.902 blue: 0.788 alpha: 1];
#define offSubviewColor [UIColor colorWithRed: 1 green: 1 blue: 1 alpha: 1];
#define offColor [UIColor colorWithRed: 0.235 green: 0.255 blue: 0.271 alpha: 1];
#define offBorderColor [UIColor colorWithRed: 0.11 green: 0.11 blue: 0.11 alpha: 1];
#define onColor [UIColor colorWithRed: 0.627 green: 0.894 blue: 0.98 alpha: 1];
#define onBorderColor [UIColor colorWithRed: 0.533 green: 0.769 blue: 0.843 alpha: 1];

#pragma mark - Knob（月亮/太阳本体球）

@interface Knob : UIView

/// 视觉状态，动画切换
@property (nonatomic) BOOL on;

/// 按压时的横向拉伸态
@property (nonatomic) BOOL expanded;

/// 球内圆形子视图（月亮环形山）
@property (nonatomic) UIView *subview;

/// 关态 subview 上的环形山
@property (nonatomic) NSArray<UIView *> *craters;

@end

@implementation Knob

/// 球到环形山的边距
- (CGFloat)subviewMargin {
    return self.frame.size.height / 12;
}

- (UIView *)setupSubview {
    UIView *v = [[UIView alloc] initWithFrame: CGRectMake([self subviewMargin], [self subviewMargin], self.frame.size.width - [self subviewMargin] * 2, self.frame.size.height - [self subviewMargin] * 2)];
    v.layer.masksToBounds = YES;
    v.layer.cornerRadius = v.frame.size.height / 2;
    v.backgroundColor = offSubviewColor;

    for (UIView *c in [self setupCraters]) {
        [v addSubview:c];
    }

    self.subview = v;
    return v;
}

- (NSArray *)setupCraters {
    CGFloat w = self.frame.size.width;
    CGFloat h = self.frame.size.height;

    UIView *topLeft = [[UIView alloc] initWithFrame: CGRectMake(0, h * 0.1, w * 0.2, w * 0.2)];
    UIView *topRight = [[UIView alloc] initWithFrame: CGRectMake(w * 0.5, 0, w * 0.3, w * 0.3)];
    UIView *bottom = [[UIView alloc] initWithFrame: CGRectMake(w * 0.4, h * 0.5, w * 0.25, w * 0.25)];

    NSArray<UIView *> *all = @[topLeft, topRight, bottom];

    for (UIView *v in all) {
        v.backgroundColor = offSubviewColor;
        v.layer.masksToBounds = YES;
        v.layer.cornerRadius = v.frame.size.height / 2;

        UIColor *offC = offKnobColor;
        v.layer.borderColor = offC.CGColor;
        v.layer.borderWidth = [self subviewMargin];
    }

    self.craters = all;
    return all;
}

- (instancetype)initWithFrame:(CGRect)frame {
    self.on = NO;
    self.expanded = NO;
    self = [super initWithFrame:frame];

    self.layer.masksToBounds = YES;
    self.layer.cornerRadius = self.frame.size.height / 2;
    self.backgroundColor = offKnobColor;

    [self addSubview:[self setupSubview]];

    [self addObserver:self forKeyPath:@"on" options:0 context:nil];
    [self addObserver:self forKeyPath:@"expanded" options:0 context:nil];

    return self;
}

- (void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary<NSString *,id> *)change context:(void *)context {
    if ([keyPath isEqualToString:@"on"]) {
        [UIView animateWithDuration:0.8 delay:0 usingSpringWithDamping:1 initialSpringVelocity:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{

            if (self.on) {
                self.backgroundColor = onKnobColor;
                self.subview.backgroundColor = onSubviewColor;
            } else {
                self.backgroundColor = offKnobColor;
                self.subview.backgroundColor = offSubviewColor;
            }

            BOOL cache = self.expanded;
            self.expanded = cache;

        } completion:nil];

        [UIView animateWithDuration:0.4 delay:0 usingSpringWithDamping:1 initialSpringVelocity:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{

            self.subview.transform = CGAffineTransformMakeRotation(M_PI * ((self.on) ? 0.2 : -0.2));

        } completion: nil];
    } else if ([keyPath isEqualToString:@"expanded"]) {
        CGFloat newWidth = self.frame.size.height * (self.expanded ? 1.25 : 1);
        CGFloat x = (self.on) ? self.superview.frame.size.width - newWidth - [(DayNightSwitch *)self.superview knobMargin] : self.frame.origin.x;

        [UIView animateWithDuration:0.8 delay:0 usingSpringWithDamping:1 initialSpringVelocity:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{
            self.frame = CGRectMake(x, self.frame.origin.y, newWidth, self.frame.size.height);
            self.subview.center = CGPointMake((self.on) ? self.frame.size.width - self.frame.size.height / 2 : self.frame.size.height / 2, self.subview.center.y);

            for (UIView *v in self.craters) {
                v.alpha = (self.on) ? 0 : 1;
            }

        } completion: nil];
    }
}

@end

#pragma mark - DayNightSwitch

@interface DayNightSwitch ()

/// 白色球
@property (nonatomic) Knob *knob;

/// 本次触摸是否发生拖动
@property (nonatomic) BOOL moved;

/// 防止点按手势与拖动互相干扰
@property (nonatomic) BOOL dragging;

@end

@implementation DayNightSwitch

/// 背景深色描边宽度
- (CGFloat)borderWidth {
    return self.frame.size.height / 7;
}

/// 描边与球的间距
- (CGFloat)knobMargin {
    return self.frame.size.height / 10;
}

- (Knob *)setupKnob {
    CGFloat w = self.frame.size.height - [self knobMargin] * 2;
    Knob *v = [[Knob alloc] initWithFrame: CGRectMake([self knobMargin], [self knobMargin], w, w)];
    self.knob = v;
    return v;
}

- (NSArray *)setupBorders {
    CAShapeLayer *b1 = [CAShapeLayer layer];
    CAShapeLayer *b2 = [CAShapeLayer layer];
    UIBezierPath *path = [UIBezierPath bezierPathWithRoundedRect: CGRectMake(0, 0, self.frame.size.width, self.frame.size.height) cornerRadius: self.frame.size.height / 2];

    b1.path = path.CGPath;
    b1.fillColor = [UIColor clearColor].CGColor;

    UIColor *onC = onBorderColor;
    b1.strokeColor = onC.CGColor;
    b1.lineWidth = [self borderWidth];
    self.onBorder = b1;

    b2.path = path.CGPath;
    b2.fillColor = [UIColor clearColor].CGColor;

    UIColor *offC = offBorderColor;
    b2.strokeColor = offC.CGColor;
    b2.lineWidth = [self borderWidth];
    self.offBorder = b2;

    return @[b1, b2];
}

- (NSArray *)setupStars {
    CGFloat w = self.frame.size.width;
    CGFloat h = self.frame.size.height;

    CGFloat x = h * 0.05;
    UIView *s1 = [[UIView alloc] initWithFrame: CGRectMake(w * 0.5, h * 0.16, x, x)];
    UIView *s2 = [[UIView alloc] initWithFrame: CGRectMake(w * 0.62, h * 0.33, x * 0.6, x * 0.6)];
    UIView *s3 = [[UIView alloc] initWithFrame: CGRectMake(w * 0.7, h * 0.15, x, x)];
    UIView *s4 = [[UIView alloc] initWithFrame: CGRectMake(w * 0.83, h * 0.39, x * 1.4, x * 1.4)];
    UIView *s5 = [[UIView alloc] initWithFrame: CGRectMake(w * 0.7, h * 0.54, x * 0.8, x * 0.8)];
    UIView *s6 = [[UIView alloc] initWithFrame: CGRectMake(w * 0.52, h * 0.73, x * 1.3, x * 1.3)];
    UIView *s7 = [[UIView alloc] initWithFrame: CGRectMake(w * 0.82, h * 0.66, x * 1.1, x * 1.1)];

    NSArray *all = @[s1, s2, s3, s4, s5, s6, s7];

    for (UIView *s in all) {
        s.layer.masksToBounds = YES;
        s.layer.cornerRadius = s.frame.size.height / 2;
        s.backgroundColor = [UIColor whiteColor];
    }

    self.stars = all;
    return all;
}

- (UIImageView *)setupCloud {
    UIImageView *v = [[UIImageView alloc] initWithFrame: CGRectMake(self.frame.size.width / 3, self.frame.size.height * 0.4, self.frame.size.width / 3, self.frame.size.width * 0.23)];
    // dylib 无图片资源，原版 imageNamed:@"cloud" 拿不到图 → 改矢量绘制一朵云（三个圆 + 底部封条）
    CGFloat cw = v.frame.size.width;
    CGFloat ch = v.frame.size.height;
    UIBezierPath *p = [UIBezierPath bezierPath];
    [p appendPath:[UIBezierPath bezierPathWithArcCenter:CGPointMake(cw * 0.28, ch * 0.65) radius:ch * 0.32 startAngle:0 endAngle:M_PI * 2 clockwise:YES]];
    [p appendPath:[UIBezierPath bezierPathWithArcCenter:CGPointMake(cw * 0.55, ch * 0.45) radius:ch * 0.48 startAngle:0 endAngle:M_PI * 2 clockwise:YES]];
    [p appendPath:[UIBezierPath bezierPathWithArcCenter:CGPointMake(cw * 0.80, ch * 0.68) radius:ch * 0.30 startAngle:0 endAngle:M_PI * 2 clockwise:YES]];
    [p appendPath:[UIBezierPath bezierPathWithRoundedRect:CGRectMake(cw * 0.10, ch * 0.62, cw * 0.85, ch * 0.35) cornerRadius:ch * 0.17]];
    CAShapeLayer *cloudLayer = [CAShapeLayer layer];
    cloudLayer.path = p.CGPath;
    cloudLayer.fillColor = [UIColor whiteColor].CGColor;
    [v.layer addSublayer:cloudLayer];

    v.transform = CGAffineTransformMakeScale(0, 0);

    self.cloud = v;
    return v;
}

#pragma mark 触摸处理

- (void)proccessTouches:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    if (!self.moved) { self.on = !self.on; return; }
    CGFloat x = [(UITouch *)touches.allObjects.lastObject locationInView:self].x;

    if (x > self.frame.size.width / 2 && !self.on) {
        self.on = YES;
    } else if (x < self.frame.size.width / 2 && self.on) {
        self.on = NO;
    }
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    self.dragging = YES;
    self.knob.expanded = YES;
}

- (void)touchesMoved:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    self.moved = YES;
    [self proccessTouches:touches withEvent:event];
}

- (void)touchesEnded:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    [self proccessTouches:touches withEvent:event];
    self.knob.expanded = NO;
    self.dragging = NO;
    self.moved = NO;
}

- (void)touchesCancelled:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    [self touchesEnded:touches withEvent:event];
}

#pragma mark 初始化

- (instancetype)initWithCenter:(CGPoint)center {
    CGFloat height = 30;
    CGFloat width = height * 1.75;

    self = [super initWithFrame: CGRectMake(center.x - width / 2, center.y - height / 2, width, height)];
    [self commonInit];

    return self;
}

/// 各初始化器的公共入口，默认关态
- (void)commonInit {
    self.moved = NO;
    self.dragging = NO;
    self.layer.masksToBounds = YES;
    self.layer.cornerRadius = self.frame.size.height / 2;
    self.backgroundColor = [UIColor colorWithRed: 0.235 green: 0.255 blue: 0.271 alpha: 1];

    NSArray *borders = [self setupBorders];
    [self.layer addSublayer:borders[0]];
    [self.layer addSublayer:borders[1]];

    for (UIView *v in [self setupStars]) {
        [self addSubview:v];
    }

    [self addSubview:[self setupKnob]];
    [self addSubview:[self setupCloud]];

    [self addObserver:self forKeyPath:@"on" options:0 context:nil];
}

- (instancetype)initWithCoder:(NSCoder *)aDecoder {
    self = [super initWithCoder:aDecoder];
    [self commonInit];
    return self;
}

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    [self commonInit];
    return self;
}

#pragma mark 状态切换动画（KVO on）

- (void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary<NSString *,id> *)change context:(void *)context {
    if ([keyPath isEqualToString:@"on"]) {
        // 状态变化先回调业务方（写回 UISwitch）；程序化同步（suppressCallback）不回调，防循环
        if (self.changeAction && !self.suppressCallback) { self.changeAction(self.on); }

        self.knob.on = self.on;

        [UIView animateWithDuration:0.4 delay:0 usingSpringWithDamping:1 initialSpringVelocity:0 options:UIViewAnimationOptionAllowUserInteraction animations:^{

            CGFloat knobRadius = self.knob.frame.size.width / 2;

            if (self.on) {
                self.knob.center = CGPointMake(self.frame.size.width - knobRadius - [self knobMargin], self.knob.center.y);

                self.backgroundColor = onColor;
                self.offBorder.strokeStart = 1.0;
                self.cloud.transform = CGAffineTransformIdentity;
            } else {
                self.knob.center = CGPointMake(knobRadius + [self knobMargin], self.knob.center.y);

                self.backgroundColor = offColor;
                self.offBorder.strokeEnd = 1.0;
                self.cloud.transform = CGAffineTransformMakeScale(0, 0);
            }

            for (int i = 0; i < self.stars.count; i++) {
                UIView *star = self.stars[i];
                star.alpha = (self.on) ? 0 : 1;

                dispatch_after(dispatch_time(DISPATCH_TIME_NOW, 0.1 * i * NSEC_PER_SEC), dispatch_get_main_queue(), ^{
                    star.transform = CGAffineTransformMakeScale(1.5, 1.5);

                    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, 0.05 * NSEC_PER_SEC), dispatch_get_main_queue(), ^{
                        star.transform = CGAffineTransformIdentity;
                    });
                });
            }

        } completion:^(BOOL finished) {

            // 收尾重置描边绘制区间
            if (self.on) {
                self.offBorder.strokeStart = 0.0;
                self.offBorder.strokeEnd = 0.0;
            } else {
                self.offBorder.strokeStart = 0.0;
                self.offBorder.strokeEnd = 1.0;
            }
        }];
    }
}

@end
