#import "WPIslandToast.h"
#import "../../Core/LogManager.h"

// ---- 尺寸常量 ----
static const CGFloat kCollapsedW = 118.0;
static const CGFloat kCollapsedH = 34.0;
static const CGFloat kExpandedH  = 40.0;
static const CGFloat kMaxW       = 330.0;
static const CGFloat kPadX       = 18.0;
static const CGFloat kStaySec    = 2.5;
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

#pragma mark - 专属小窗（只有胶囊那么大，屏幕其余部分触摸天然落回微信窗口）

// log 29 教训：挂在微信 keyWindow 上的视图，生死不由自己——被外力摘掉后画面
// "闪没"而定时器照跑。改回专属窗根治；但窗体只做胶囊那一条（非全屏），
// 不存在挡滑动问题；hitTest 返回 nil 是双保险
@interface WPIslandWindow : UIWindow
@end
@implementation WPIslandWindow
- (UIView *)hitTest:(CGPoint)point withEvent:(UIEvent *)event { return nil; }
@end

// 常驻复用：一次创建，hidden 切换收/放，避免每次弹 toast 都建窗
static WPIslandWindow *_toastWin = nil;

#pragma mark - WPIslandToast

@interface WPIslandToast ()
@property (nonatomic, strong) UIWindow *hostWindow;     // 锚点窗（微信 keyWindow，仅用于取尺寸）
@property (nonatomic, strong) UIView *stage;            // 定位 + 外阴影（不裁剪）
@property (nonatomic, strong) WPIslandCapsuleView *capsule;
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

    // 实锤（log 28）：长按菜单点击回调触发的瞬间，keyWindow 还是菜单自己的浮层窗，
    // toast 挂上去会跟着菜单收起一起销毁——6 秒定时器照跑但画面"闪一下就没了"。
    // 对策双保险：① 跳到下一个主队列 tick，让菜单 teardown 先走完；② hostWindow
    // 只认有 rootViewController 的主窗（浮层窗没有 rootViewController，见下）
    dispatch_async(dispatch_get_main_queue(), ^{
        // 已有旧的，先收掉（新提示顶掉旧提示）
        if (_current) {
            [_current collapseAnimated:NO reason:@"被新提示顶掉"];
            _current = nil;
        }

        UIWindow *window = [self hostWindow];
        if (!window) return;

        WPIslandToast *toast = [WPIslandToast new];
        toast.hostWindow = window;
        _current = toast;
        [toast presentWithType:type message:message];
    });
}

+ (void)hide {
    if (!NSThread.isMainThread) {
        dispatch_async(dispatch_get_main_queue(), ^{ [self hide]; });
        return;
    }
    if (_current) {
        [_current collapseAnimated:YES reason:@"主动hide"];
        _current = nil;
    }
}

#pragma mark - Window

// 只认"主窗"：有 rootViewController 的窗（微信主窗/导航窗都有，菜单、键盘等浮层
// 窗没有 rootViewController）。优先 keyWindow，其次任意主窗，最后兜底第一扇窗
+ (UIWindow *)hostWindow {
    UIWindow *fallback = nil;
    for (UIScene *scene in UIApplication.sharedApplication.connectedScenes) {
        if (![scene isKindOfClass:UIWindowScene.class]) continue;
        for (UIWindow *w in ((UIWindowScene *)scene).windows) {
            if (!w.rootViewController) continue; // 浮层窗：跳过
            if (w.isKeyWindow) return w;
            if (!fallback) fallback = w;
        }
    }
    if (fallback) return fallback;
    return UIApplication.sharedApplication.windows.firstObject;
}

#pragma mark - 内容布局（纯文字居中）

- (void)layoutContentsForWidth:(CGFloat)width {
    CGSize s = self.capsule.bounds.size;
    self.msgLabel.frame = CGRectMake(kPadX, 0, MAX(0, width - kPadX * 2), s.height);
}

#pragma mark - Present

- (void)presentWithType:(WPIslandToastType)type message:(NSString *)message {
    UIWindow *anchor = self.hostWindow ?: [WPIslandToast hostWindow];
    if (!anchor) return;

    // 顶部间距按锚点窗（真实屏幕参数）定格；后面自己建窗用
    CGFloat topInset = anchor.safeAreaInsets.top + kTopMargin;
    self.topInset = topInset;
    CGSize screen = anchor.bounds.size;
    CGRect collapsed = CGRectMake((screen.width - kCollapsedW) / 2.0, topInset,
                                  kCollapsedW, kCollapsedH);

    // ---- 宿主：专属小窗（只盖顶部胶囊那一条）----
    // 外力摘除免疫（闪没根治）+ 非全屏不挡滑动 + 高 level 压过微信浮层。
    // 常驻复用，hidden 控制显隐
    UIWindowScene *scene = anchor.windowScene;
    if (!scene) return;
    CGFloat winH = topInset + kExpandedH + 30.0; // 窗高盖住胶囊 + 阴影余量
    if (!_toastWin || !_toastWin.windowScene) {
        _toastWin = [[WPIslandWindow alloc] initWithWindowScene:scene];
        _toastWin.windowLevel = UIWindowLevelAlert + 1000.0;
        _toastWin.backgroundColor = UIColor.clearColor;
        _toastWin.userInteractionEnabled = NO;
    }
    _toastWin.frame = CGRectMake(0, 0, screen.width, winH);
    self.hostWindow = _toastWin;

    // stage：负责外阴影（capsule masksToBounds 会裁阴影，两者分离）
    UIView *stage = [[UIView alloc] initWithFrame:collapsed];
    stage.backgroundColor = UIColor.clearColor;
    stage.userInteractionEnabled = NO;
    stage.tag = 0x24f6da;              // WCR 同款防重 tag：万一有残留，下次 show 先摘掉
    stage.layer.shadowColor = UIColor.blackColor.CGColor;
    stage.layer.shadowOpacity = 0.45;
    stage.layer.shadowRadius = 12;
    stage.layer.shadowOffset = CGSizeMake(0, 8);
    self.stage = stage;

    WPIslandCapsuleView *capsule = [[WPIslandCapsuleView alloc] initWithFrame:stage.bounds];
    capsule.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    capsule.userInteractionEnabled = NO;
    self.capsule = capsule;
    [stage addSubview:capsule];
    [_toastWin addSubview:stage];
    _toastWin.hidden = NO;

    // ---- 文案 ----
    UILabel *msg = [[UILabel alloc] init];
    msg.text = message;
    msg.font = [UIFont systemFontOfSize:14 weight:UIFontWeightMedium];
    msg.textColor = UIColor.whiteColor;
    msg.textAlignment = NSTextAlignmentCenter;
    msg.numberOfLines = 1;
    msg.lineBreakMode = NSLineBreakByTruncatingTail;
    msg.alpha = 0;
    self.msgLabel = msg;
    [capsule addSubview:msg];

    // ---- 计算展开尺寸（文字实测宽度 + 左右内边距，封顶 kMaxW）----
    CGFloat maxTextW = kMaxW - kPadX * 2;
    CGSize textSize = [msg sizeThatFits:CGSizeMake(maxTextW, kExpandedH)];
    CGFloat textW = ceil(MIN(textSize.width, maxTextW));
    CGFloat targetW = MIN(textW + kPadX * 2, kMaxW);
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
        [self collapseAnimated:YES reason:@"定时到点"];
        if (_current == self) _current = nil;
    });
}

#pragma mark - Collapse

- (void)collapseAnimated:(BOOL)animated reason:(NSString *)reason {
    if (!self.stage) return;
    self.isShowing = NO;
    // stage 已被外力摘除（不在任何窗口上）时特别标注——这是排查"闪没"的关键证据
    BOOL orphaned = (self.stage.superview == nil);
    WPLog(@"UI", @"[Toast] └ 收起(%@)：全程 %.2f 秒%@",
          reason, CACurrentMediaTime() - self.startedAt,
          orphaned ? @"⚠️ stage已被外力移除" : @"");

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
        self.msgLabel.alpha = 0;
    }];

    [UIView animateWithDuration:0.4
                          delay:0.04
                        options:UIViewAnimationOptionCurveEaseIn
                     animations:^{
        self.stage.frame = collapsed;
    } completion:^(BOOL finished) {
        [self.stage removeFromSuperview];
        self.stage = nil;
        // 窗里已经没有别的 toast 在用时才收窗（防止误伤刚弹出的新 toast）
        if (_toastWin && _toastWin.subviews.count == 0) _toastWin.hidden = YES;
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

@end
