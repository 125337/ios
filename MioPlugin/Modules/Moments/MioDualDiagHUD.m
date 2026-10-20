#import "MioDualDiagHUD.h"
#import "MioDualTimelineStore.h"
#import "MioDualFeedBridge.h"

// 数据源诊断悬浮窗：native UIKit overlay（盖在面板 WebView 之上），只读各层指标。
// 刷新用 dispatch_after 自续链（NSTimer 失联教训同 Bridge 轮询）；拖动 target 用类对象
// （Class 也是 objc 对象，类方法可作 gesture action）。
static UIView *gHud = nil;
static UILabel *gLabel = nil;
static BOOL gTicking = NO;

static NSString *HUDDiagText(void) {
    MioDualTimelineStore *store = [MioDualTimelineStore shared];
    NSTimeInterval since = [MioDualFeedBridge secondsSinceLastPush];
    NSString *push = since < 0 ? @"—" : [NSString stringWithFormat:@"%.0fs", since];
    return [NSString stringWithFormat:
        @"窗:%lld  存:%lu  JS:%lu\n尾:%@  推:%@",
        [store liveSourceCount],
        (unsigned long)[store accRowCount],
        (unsigned long)[MioDualFeedBridge jsRowCount],
        [store tailStatus], push];
}

static void HUDTick(void) {
    if (!gTicking) return;
    gLabel.text = HUDDiagText();
    [gLabel sizeToFit];
    CGFloat pad = 8;
    gHud.bounds = CGRectMake(0, 0, gLabel.frame.size.width + pad * 2,
                             gLabel.frame.size.height + pad * 2);
    gLabel.center = CGPointMake(gHud.bounds.size.width / 2, gHud.bounds.size.height / 2);
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.0 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        HUDTick();
    });
}

@implementation MioDualDiagHUD

+ (void)hudPan:(UIPanGestureRecognizer *)g {
    UIView *v = g.view;
    CGPoint t = [g translationInView:v.superview];
    v.center = CGPointMake(v.center.x + t.x, v.center.y + t.y);
    [g setTranslation:CGPointZero inView:v.superview];
}

+ (void)attachToView:(UIView *)container {
    if (![NSThread isMainThread]) {
        dispatch_async(dispatch_get_main_queue(), ^{ [self attachToView:container]; });
        return;
    }
    if (!gHud) {
        gHud = [[UIView alloc] init];
        gHud.backgroundColor = [UIColor colorWithWhite:0 alpha:0.75];
        gHud.layer.cornerRadius = 8;
        gHud.layer.masksToBounds = YES;
        gLabel = [[UILabel alloc] init];
        gLabel.textColor = UIColor.greenColor;
        gLabel.font = [UIFont monospacedDigitSystemFontOfSize:10 weight:UIFontWeightMedium];
        gLabel.numberOfLines = 2;
        [gHud addSubview:gLabel];
        [gHud addGestureRecognizer:
            [[UIPanGestureRecognizer alloc] initWithTarget:self action:@selector(hudPan:)]];
    }
    if (gHud.superview != container) {
        [gHud removeFromSuperview];
        gHud.center = CGPointMake(80, 170);   // 初始位（可拖动）
        [container addSubview:gHud];
        [container bringSubviewToFront:gHud];
    }
    if (!gTicking) {
        gTicking = YES;
        HUDTick();
    }
}

+ (void)detach {
    if (![NSThread isMainThread]) {
        dispatch_async(dispatch_get_main_queue(), ^{ [self detach]; });
        return;
    }
    gTicking = NO;
    [gHud removeFromSuperview];
}

@end
