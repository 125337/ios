#import "WPIslandToast.h"
#import "../../Core/LogManager.h"

// ---- 尺寸常量 ----
static const CGFloat kCollapsedW = 118.0;
static const CGFloat kCollapsedH = 34.0;
static const CGFloat kExpandedH  = 40.0;
static const CGFloat kMaxW       = 330.0;
static const CGFloat kIconSize   = 22.0;
static const CGFloat kGap        = 10.0;
static const CGFloat kPadX       = 18.0;
static const CGFloat kStaySec    = 6.0;
// 顶部间距不再写死：真机灵动岛/刘海会压住固定 11pt 的位置，改为动态取
// safeAreaInsets.top（灵动岛机型 ≈54pt 自动避让，无刘海机型 ≈20/0 再加基础间距）
static const CGFloat kTopMargin  = 6.0;

#pragma mark - 胶囊容器（毛玻璃 + 高光 + 圆角同步）

@interface WPIslandCapsuleView : UIView
@property (nonatomic, strong) UIVisualEffectView *blurView;
@property (nonatomic, strong) CAGradientLayer *sheenLayer;
@end

@implementation WPIslandCapsuleView

- (instancetype)initWithFrame:(CGRect)frame {
    if (self = [super initWithFrame:frame]) {
        self.backgroundColor = [UIColor colorWithWhite:0 alpha:0.94];
        self.layer.cornerRadius = frame.size.height / 2.0;
        self.layer.masksToBounds = YES; // 阴影不能挂这里（会一起被裁），阴影交给 stage

        // 毛玻璃
        UIBlurEffect *effect = [UIBlurEffect effectWithStyle:UIBlurEffectStyleSystemUltraThinMaterialDark];
        _blurView = [[UIVisualEffectView alloc] initWithEffect:effect];
        _blurView.userInteractionEnabled = NO;
        _blurView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
        [self addSubview:_blurView];

        // 内描边（极淡，撑质感）
        self.layer.borderWidth = 1.0 / UIScreen.mainScreen.scale;
        self.layer.borderColor = [UIColor colorWithWhite:1 alpha:0.04].CGColor;

        // 高光：横向扫过的渐变亮带
        _sheenLayer = [CAGradientLayer layer];
        _sheenLayer.colors = @[
            (id)[UIColor colorWithWhite:1 alpha:0].CGColor,
            (id)[UIColor colorWithWhite:1 alpha:0.10].CGColor,
            (id)[UIColor colorWithWhite:1 alpha:0].CGColor
        ];
        _sheenLayer.locations = @[@0.3, @0.5, @0.7];
        _sheenLayer.startPoint = CGPointMake(0, 0.5);
        _sheenLayer.endPoint   = CGPointMake(1, 0.5);
        _sheenLayer.opacity = 0;
        [self.layer addSublayer:_sheenLayer];
    }
    return self;
}

- (void)layoutSubviews {
    [super layoutSubviews];
    _blurView.frame = self.bounds;
    _sheenLayer.frame = self.bounds;
    self.layer.cornerRadius = self.bounds.size.height / 2.0;
}

- (void)playSheen {
    _sheenLayer.opacity = 1;
    CABasicAnimation *anim = [CABasicAnimation animationWithKeyPath:@"transform.translation.x"];
    anim.fromValue = @(-self.bounds.size.width);
    anim.toValue   = @( self.bounds.size.width);
    anim.duration  = 1.1;
    anim.beginTime = CACurrentMediaTime() + 0.18;
    anim.timingFunction = [CAMediaTimingFunction functionWithName:kCAMediaTimingFunctionEaseInEaseOut];
    [_sheenLayer addAnimation:anim forKey:@"sheen"];
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.5 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        self->_sheenLayer.opacity = 0;
    });
}

@end

#pragma mark - 触摸穿透窗（hitTest 永远 nil：触摸全部落回下层微信窗口）

// 实测（log 27）：仅靠 rootViewController.view.userInteractionEnabled=NO 挡不住
// 触摸（toast 期间刷不动屏幕），直接重写 hitTest 一劳永逸
@interface WPIslandWindow : UIWindow
@end
@implementation WPIslandWindow
- (UIView *)hitTest:(CGPoint)point withEvent:(UIEvent *)event { return nil; }
@end

#pragma mark - WPIslandToast

@interface WPIslandToast ()
@property (nonatomic, strong) UIWindow *hostWindow;     // 专属宿主窗（自己创建，不寄微信窗口）
@property (nonatomic, strong) UIView *stage;            // 定位 + 外阴影（不裁剪）
@property (nonatomic, strong) WPIslandCapsuleView *capsule;
@property (nonatomic, strong) UILabel *iconLabel;       // 彩色圆形图标
@property (nonatomic, strong) UILabel *msgLabel;
@property (nonatomic, assign) BOOL isShowing;
@property (nonatomic, assign) NSTimeInterval startedAt; // 弹出时刻（实测全程用）
@property (nonatomic, assign) CGFloat topInset;         // 弹出时定格的顶部间距（收起复用）
@end

@implementation WPIslandToast

static WPIslandToast *_current = nil;

#pragma mark - Public

+ (void)showWithType:(WPIslandToastType)type message:(NSString *)message {
    if (message.length == 0) return;
    if (!NSThread.isMainThread) {
        dispatch_async(dispatch_get_main_queue(), ^{
            [self showWithType:type message:message];
        });
        return;
    }

    // 已有旧的，先收掉（新提示顶掉旧提示）
    if (_current) {
        [_current collapseAnimated:NO];
        _current = nil;
    }

    UIWindow *window = [self keyWindow];
    if (!window) return;

    WPIslandToast *toast = [WPIslandToast new];
    toast.hostWindow = window;
    _current = toast;
    [toast presentWithType:type message:message];
}

+ (void)hide {
    if (!NSThread.isMainThread) {
        dispatch_async(dispatch_get_main_queue(), ^{ [self hide]; });
        return;
    }
    if (_current) {
        [_current collapseAnimated:YES];
        _current = nil;
    }
}

#pragma mark - Window

+ (UIWindow *)keyWindow {
    UIWindow *window = nil;
    for (UIScene *scene in UIApplication.sharedApplication.connectedScenes) {
        if (![scene isKindOfClass:UIWindowScene.class]) continue;
        for (UIWindow *w in ((UIWindowScene *)scene).windows) {
            if (w.isKeyWindow) { window = w; break; }
        }
        if (window) break;
    }
    if (!window) window = UIApplication.sharedApplication.windows.firstObject;
    return window;
}

#pragma mark - 内容布局（展开态：图标 + 间距 + 文字水平排列，垂直居中）

- (void)layoutContentsForWidth:(CGFloat)width {
    CGSize s = self.capsule.bounds.size;
    self.iconLabel.frame = CGRectMake(kPadX, (s.height - kIconSize) / 2.0, kIconSize, kIconSize);
    CGFloat msgX = CGRectGetMaxX(self.iconLabel.frame) + kGap;
    CGFloat msgW = MAX(0, width - msgX - kPadX);
    self.msgLabel.frame = CGRectMake(msgX, 0, msgW, s.height);
}

#pragma mark - Present

- (void)presentWithType:(WPIslandToastType)type message:(NSString *)message {
    UIWindow *anchor = [WPIslandToast keyWindow];
    if (!anchor) return;

    // 顶部间距按锚点窗（真实屏幕参数）定格；后面自己建窗用
    CGFloat topInset = anchor.safeAreaInsets.top + kTopMargin;
    self.topInset = topInset;
    CGSize screen = anchor.bounds.size;
    CGRect collapsed = CGRectMake((screen.width - kCollapsedW) / 2.0, topInset,
                                  kCollapsedW, kCollapsedH);

    // ---- 专属宿主窗：不挂在微信的 keyWindow 上 ----
    // 实测（log 26）：挂微信窗口时，长按菜单收起会连带把 toast 视图带走——计时器
    // 照跑 6 秒但画面早就没了（"闪一下"）。自己建高窗 + 触摸穿透，生命周期自管
    UIWindowScene *scene = anchor.windowScene;
    if (!scene) return;
    UIWindow *toastWindow = [[WPIslandWindow alloc] initWithWindowScene:scene];
    toastWindow.windowLevel = UIWindowLevelAlert + 1000.0; // 压过微信自己的浮层窗
    toastWindow.frame = scene.coordinateSpace.bounds;
    toastWindow.backgroundColor = UIColor.clearColor;
    toastWindow.rootViewController = [UIViewController new];
    toastWindow.rootViewController.view.userInteractionEnabled = NO; // 双保险（主穿透在 hitTest）
    self.hostWindow = toastWindow;
    toastWindow.hidden = NO;

    // stage：负责外阴影（capsule masksToBounds 会裁阴影，两者分离）
    UIView *stage = [[UIView alloc] initWithFrame:collapsed];
    stage.backgroundColor = UIColor.clearColor;
    stage.userInteractionEnabled = NO;
    stage.layer.shadowColor = UIColor.blackColor.CGColor;
    stage.layer.shadowOpacity = 0.45;
    stage.layer.shadowRadius = 12;
    stage.layer.shadowOffset = CGSizeMake(0, 8);
    self.stage = stage;

    WPIslandCapsuleView *capsule = [[WPIslandCapsuleView alloc] initWithFrame:stage.bounds];
    capsule.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    self.capsule = capsule;
    [stage addSubview:capsule];
    [toastWindow.rootViewController.view addSubview:stage];

    // ---- 图标（初始缩小+透明，弹出时弹簧浮现）----
    UILabel *icon = [[UILabel alloc] initWithFrame:CGRectMake((kCollapsedW - kIconSize) / 2.0,
                                                              (kCollapsedH - kIconSize) / 2.0,
                                                              kIconSize, kIconSize)];
    icon.backgroundColor = [self iconColorForType:type];
    icon.textColor = UIColor.whiteColor;
    icon.font = [UIFont systemFontOfSize:12 weight:UIFontWeightBold];
    icon.textAlignment = NSTextAlignmentCenter;
    icon.text = [self glyphForType:type];
    icon.layer.cornerRadius = kIconSize / 2.0;
    icon.layer.masksToBounds = YES;
    icon.alpha = 0;
    icon.transform = CGAffineTransformMakeScale(0.6, 0.6);
    self.iconLabel = icon;
    [capsule addSubview:icon];

    // ---- 文案 ----
    UILabel *msg = [[UILabel alloc] init];
    msg.text = message;
    msg.font = [UIFont systemFontOfSize:14 weight:UIFontWeightMedium];
    msg.textColor = UIColor.whiteColor;
    msg.numberOfLines = 1;
    msg.lineBreakMode = NSLineBreakByTruncatingTail;
    msg.alpha = 0;
    self.msgLabel = msg;
    [capsule addSubview:msg];

    // ---- 计算展开尺寸（文字实测宽度 + 图标 + 内边距，封顶 kMaxW）----
    CGFloat maxTextW = kMaxW - kIconSize - kGap - kPadX * 2;
    CGSize textSize = [msg sizeThatFits:CGSizeMake(maxTextW, kExpandedH)];
    CGFloat textW = ceil(MIN(textSize.width, maxTextW));
    CGFloat targetW = MIN(textW + kIconSize + kGap + kPadX * 2, kMaxW);
    CGRect expanded = CGRectMake((screen.width - targetW) / 2.0, topInset,
                                 targetW, kExpandedH);

    self.isShowing = YES;
    self.startedAt = CACurrentMediaTime();
    WPLog(@"UI", @"[Toast] ┌ 弹出：%@", message);

    // ---- 主弹簧：stage 从药丸展开为胶囊；内容在同一个动画块里摆到最终位置 ----
    [UIView animateWithDuration:0.52
                          delay:0
         usingSpringWithDamping:0.78
          initialSpringVelocity:0.6
                        options:UIViewAnimationOptionCurveEaseOut
                     animations:^{
        self.stage.frame = expanded;
        self.capsule.frame = CGRectMake(0, 0, targetW, kExpandedH);
        [self layoutContentsForWidth:targetW];
    } completion:nil];

    // capsule 圆角随宽高同步（CASpringAnimation 保证圆角不脱节）
    [self springChangeCapsuleToSize:CGSizeMake(targetW, kExpandedH)];

    // 图标延迟浮现
    [UIView animateWithDuration:0.42
                          delay:0.08
         usingSpringWithDamping:0.6
          initialSpringVelocity:0.5
                        options:UIViewAnimationOptionCurveEaseOut
                     animations:^{
        icon.alpha = 1;
        icon.transform = CGAffineTransformIdentity;
    } completion:nil];

    // 文字延迟淡入
    [UIView animateWithDuration:0.3
                          delay:0.12
                        options:UIViewAnimationOptionCurveEaseOut
                     animations:^{
        msg.alpha = 1;
    } completion:nil];

    // 高光扫过
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.18 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        [self.capsule playSheen];
    });

    // 停留后收起
    __weak typeof(self) weakSelf = self;
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(kStaySec * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        __strong typeof(weakSelf) self = weakSelf;
        if (!self || !self.isShowing) return;
        [self collapseAnimated:YES];
        if (_current == self) _current = nil;
    });
}

#pragma mark - Collapse

- (void)collapseAnimated:(BOOL)animated {
    if (!self.stage) return;
    self.isShowing = NO;
    WPLog(@"UI", @"[Toast] └ 收起：全程 %.2f 秒（设计值 2.40 弹出 + 0.44 收尾）",
          CACurrentMediaTime() - self.startedAt);

    if (!animated) {
        [self.stage removeFromSuperview];
        self.stage = nil;
        return;
    }

    CGSize screen = self.hostWindow.bounds.size;
    CGRect collapsed = CGRectMake((screen.width - kCollapsedW) / 2.0,
                                  self.topInset - 2,
                                  kCollapsedW, kCollapsedH);

    // 内容先淡出
    [UIView animateWithDuration:0.18 animations:^{
        self.iconLabel.alpha = 0;
        self.msgLabel.alpha = 0;
    }];

    [UIView animateWithDuration:0.4
                          delay:0.04
                        options:UIViewAnimationOptionCurveEaseIn
                     animations:^{
        self.stage.frame = collapsed;
    } completion:^(BOOL finished) {
        self.hostWindow.hidden = YES; // 专属窗自管生命周期：隐藏即收
        [self.stage removeFromSuperview];
        self.stage = nil;
    }];

    [self springChangeCapsuleToSize:CGSizeMake(kCollapsedW, kCollapsedH)];
}

#pragma mark - Helpers

// capsule 宽高/圆角三路 CASpringAnimation，和 stage 的 UIView 弹簧同节奏
- (void)springChangeCapsuleToSize:(CGSize)size {
    WPIslandCapsuleView *capsule = self.capsule;
    if (!capsule) return;

    CGRect old = capsule.bounds;
    capsule.bounds = CGRectMake(0, 0, size.width, size.height);
    [capsule setNeedsLayout];
    [capsule layoutIfNeeded];

    void (^addSpring)(NSString *, CGFloat, CGFloat) = ^(NSString *path, CGFloat from, CGFloat to) {
        CASpringAnimation *a = [CASpringAnimation animationWithKeyPath:path];
        a.fromValue = @(from);
        a.toValue   = @(to);
        a.damping   = 12;
        a.stiffness = 180;
        a.mass      = 1;
        a.duration  = a.settlingDuration;
        [capsule.layer addAnimation:a forKey:path];
    };
    addSpring(@"bounds.size.width",  old.size.width,  size.width);
    addSpring(@"bounds.size.height", old.size.height, size.height);
    addSpring(@"cornerRadius", old.size.height / 2.0, size.height / 2.0);
}

- (UIColor *)iconColorForType:(WPIslandToastType)type {
    switch (type) {
        case WPIslandToastTypeSuccess: return [UIColor colorWithRed:0.20 green:0.78 blue:0.35 alpha:1];
        case WPIslandToastTypeError:   return [UIColor colorWithRed:1.00 green:0.27 blue:0.23 alpha:1];
        case WPIslandToastTypeWarning: return [UIColor colorWithRed:1.00 green:0.62 blue:0.04 alpha:1];
        case WPIslandToastTypeInfo:
        default:                       return [UIColor colorWithRed:0.04 green:0.52 blue:1.00 alpha:1];
    }
}

- (NSString *)glyphForType:(WPIslandToastType)type {
    switch (type) {
        case WPIslandToastTypeSuccess: return @"✓";
        case WPIslandToastTypeError:   return @"✕";
        case WPIslandToastTypeWarning: return @"!";
        case WPIslandToastTypeInfo:
        default:                       return @"i";
    }
}

@end
