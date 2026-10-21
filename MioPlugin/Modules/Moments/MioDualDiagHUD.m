#import "MioDualDiagHUD.h"
#import "MioDualTimelineStore.h"
#import "MioDualTimelineEngine.h"
#import "MioDualFeedBridge.h"

// 数据源诊断悬浮窗：native UIKit overlay（盖在面板 WebView 之上），只读各层指标。
// 刷新用 dispatch_after 自续链（NSTimer 失联教训同 Bridge 轮询）；拖动 target 用类对象
// （Class 也是 objc 对象，类方法可作 gesture action）。
static UIView *gHud = nil;
static UILabel *gLabel = nil;
static BOOL gTicking = NO;
static CGFloat gScale = 1.0;   // 显示倍率（点按循环 1.0 → 1.6 → 2.4 → 1.0）

// 主线程掉帧监测（探针 rAF 同原理）：CADisplayLink 60fps 心跳，主线程阻塞时回调
// 延迟，delta>50ms 记一帧冻结。HUD 每秒读窗口计数，滚动/切 tab 卡顿当场可见。
static CADisplayLink *gDLink = nil;
static NSInteger gJank1s = 0;       // 本 1s 窗口冻结帧数
static NSInteger gJankTotal = 0;    // 累计冻结帧数
static NSInteger gTick1s = 0;       // 本 1s 窗口 tick 数（≈fps）

static NSString *HUDDiagText(void) {
    MioDualTimelineStore *store = [MioDualTimelineStore shared];
    MioDualTimelineEngine *engine = [MioDualTimelineEngine shared];
    NSTimeInterval since = [MioDualFeedBridge secondsSinceLastPush];
    NSString *push = since < 0 ? @"—" : [NSString stringWithFormat:@"%.0fs", since];
    return [NSString stringWithFormat:
        @"窗:%lld  存:%lu  JS:%lu\n尾:%@  推:%@\n载:%@\n帧:%ld  冻:%ld(累%ld)",
        [store liveSourceCount],
        (unsigned long)[store accRowCount],
        (unsigned long)[MioDualFeedBridge jsRowCount],
        [engine tailStatus], push, [engine loadStatus],
        (long)gTick1s, (long)gJank1s, (long)gJankTotal];
}

static void HUDTick(void) {
    if (!gTicking) return;
    gLabel.text = HUDDiagText();
    gJank1s = 0;   // 窗口读后清零
    gTick1s = 0;
    gLabel.font = [UIFont monospacedDigitSystemFontOfSize:12 * gScale weight:UIFontWeightMedium];
    // sizeToFit 拿当前宽度当约束——初始 0 宽会把文本按字符折行成竖条且每次沿用
    // （真机截图实证）；改显式无限宽 hint 求 fit 尺寸，文本自带 \n 分两行
    CGSize fit = [gLabel sizeThatFits:CGSizeMake(CGFLOAT_MAX, CGFLOAT_MAX)];
    gLabel.frame = CGRectMake(0, 0, ceil(fit.width), ceil(fit.height));
    CGFloat pad = 8 * gScale;
    gHud.bounds = CGRectMake(0, 0, ceil(fit.width) + pad * 2, ceil(fit.height) + pad * 2);
    gLabel.center = CGPointMake(gHud.bounds.size.width / 2, gHud.bounds.size.height / 2);
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.0 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{
        HUDTick();
    });
}

@implementation MioDualDiagHUD

// CADisplayLink 心跳：主线程阻塞时回调延迟，delta>50ms 记一帧冻结
+ (void)dlinkTick:(CADisplayLink *)link {
    CFTimeInterval now = link.timestamp;
    static CFTimeInterval last = 0;
    if (last > 0 && now - last > 0.05) { gJank1s++; gJankTotal++; }
    last = now;
    gTick1s++;
}

+ (void)hudPan:(UIPanGestureRecognizer *)g {
    UIView *v = g.view;
    CGPoint t = [g translationInView:v.superview];
    v.center = CGPointMake(v.center.x + t.x, v.center.y + t.y);
    [g setTranslation:CGPointZero inView:v.superview];
}

// 点按缩放（拖动与点按手势并存不冲突）
+ (void)hudTap:(UITapGestureRecognizer *)g {
    gScale = (gScale < 1.2) ? 1.6 : (gScale < 2.0) ? 2.4 : 1.0;
    HUDTick();
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
        gLabel.numberOfLines = 0;   // 文本自带 \n 分两行，配合无限宽 hint 不折行
        [gHud addSubview:gLabel];
        [gHud addGestureRecognizer:
            [[UIPanGestureRecognizer alloc] initWithTarget:self action:@selector(hudPan:)]];
        [gHud addGestureRecognizer:
            [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(hudTap:)]];
    }
    if (gHud.superview != container) {
        [gHud removeFromSuperview];
        gHud.center = CGPointMake(90, 320);   // 初始位（标题区下方，可拖动）
        [container addSubview:gHud];
        [container bringSubviewToFront:gHud];
    }
    if (!gTicking) {
        gTicking = YES;
        if (!gDLink) {
            gDLink = [CADisplayLink displayLinkWithTarget:self selector:@selector(dlinkTick:)];
            [gDLink addToRunLoop:[NSRunLoop mainRunLoop] forMode:NSRunLoopCommonModes];
        }
        HUDTick();
    }
}

+ (void)detach {
    if (![NSThread isMainThread]) {
        dispatch_async(dispatch_get_main_queue(), ^{ [self detach]; });
        return;
    }
    gTicking = NO;
    [gDLink invalidate];
    gDLink = nil;
    [gHud removeFromSuperview];
}

@end
