#import "WPCommonUI.h"

const CGFloat kPad = 18.0;
const CGFloat kRadius = 12.0;
const CGFloat kRowH = 44.0;

Class WPGetBaseClass(void) {
    Class cls = objc_getClass("MMUIViewController");
    if (cls) return cls;
    return objc_getClass("UIViewController");
}

UIScrollView *WPMakeSV(UIViewController *vc) {
    UIScrollView *sv = [[UIScrollView alloc] initWithFrame:vc.view.bounds];
    sv.backgroundColor = WPBgColor();
    sv.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    sv.alwaysBounceVertical = YES;
    if (@available(iOS 11.0, *)) {
        sv.contentInsetAdjustmentBehavior = UIScrollViewContentInsetAdjustmentAutomatic;
    }
    return sv;
}

UIView *WPMakeCard(CGFloat top, CGFloat w) {
    UIView *c = [[UIView alloc] initWithFrame:CGRectMake(kPad, top, w - kPad * 2, 0)];
    c.backgroundColor = WPCardBg();
    c.layer.cornerRadius = kRadius;
    if (@available(iOS 13.0, *)) c.layer.cornerCurve = kCACornerCurveContinuous;
    c.clipsToBounds = YES;
    return c;
}

UILabel *WPMakeSectionHeader(NSString *text, CGFloat top, CGFloat w) {
    UILabel *l = [[UILabel alloc] initWithFrame:CGRectMake(kPad + 4, top, w - kPad * 2 - 8, 20)];
    l.text = text;
    l.font = [UIFont systemFontOfSize:13 weight:UIFontWeightSemibold];
    l.textColor = WPT2();
    return l;
}

void WPAddSwitchRow(UIView *card, CGFloat cy, CGFloat cw, NSString *title, NSString *key, BOOL on, id target) {
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kPad, cy, cw - kPad * 2 - 70, kRowH)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = WPT1();
    [card addSubview:tl];

    UISwitch *sw = [[UISwitch alloc] init];
    sw.on = on;
    sw.onTintColor = WPSwOn();
    sw.frame = CGRectMake(cw - kPad * 2 - 51, cy + 6.5, 51, 31);
    objc_setAssociatedObject(sw, "key", key, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [sw addTarget:target action:@selector(switchChanged:) forControlEvents:UIControlEventValueChanged];
    [card addSubview:sw];
}

void WPAddNavRow(UIView *card, CGFloat cy, CGFloat cw, NSString *title, NSString *action, id target) {
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kPad, cy, cw - kPad * 2 - 30, kRowH)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = WPT1();
    [card addSubview:tl];

    UILabel *arrow = [[UILabel alloc] initWithFrame:CGRectMake(cw - kPad * 2 - 20, cy, 16, kRowH)];
    arrow.text = @"\u203A";
    arrow.font = [UIFont systemFontOfSize:20];
    arrow.textColor = WPT3();
    [card addSubview:arrow];

    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    btn.frame = CGRectMake(0, cy, cw - kPad * 2, kRowH);
    objc_setAssociatedObject(btn, "action", action, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [btn addTarget:target action:@selector(onNavigate:) forControlEvents:UIControlEventTouchUpInside];
    [card addSubview:btn];
}

void WPAddSep(UIView *card, CGFloat cy, CGFloat cw) {
    CGFloat cardW = cw - kPad * 2;
    CGFloat scale = [UIScreen mainScreen].scale;
    CGFloat pixelY = round(cy * scale) / scale;
    CGFloat onePixel = 1.0 / scale;
    UIView *sepView = [[UIView alloc] initWithFrame:CGRectMake(kPad, pixelY, cardW - kPad, onePixel)];
    sepView.backgroundColor = WPSepColor();
    [card addSubview:sepView];
}

void WPAddInfoRow(UIView *card, CGFloat cy, CGFloat cw, NSString *left, NSString *right) {
    UILabel *l = [[UILabel alloc] initWithFrame:CGRectMake(kPad, cy, 160, kRowH)];
    l.text = left;
    l.font = [UIFont systemFontOfSize:15 weight:UIFontWeightMedium];
    l.textColor = WPT1();
    [card addSubview:l];

    UILabel *r = [[UILabel alloc] initWithFrame:CGRectMake(cw - kPad * 2 - 160, cy, 144, kRowH)];
    r.text = right;
    r.font = [UIFont systemFontOfSize:13];
    r.textColor = WPT2();
    r.textAlignment = NSTextAlignmentRight;
    [card addSubview:r];
}

#pragma mark - 安全 present

UIViewController *WPGetTopVCForPresentation(void) {
    // 1. 遍历所有 window scene 找 keyWindow
    UIWindow *keyWindow = nil;
    for (UIWindowScene *scene in [UIApplication sharedApplication].connectedScenes) {
        if (![scene isKindOfClass:[UIWindowScene class]]) continue;
        for (UIWindow *w in scene.windows) {
            if (w.isKeyWindow) { keyWindow = w; break; }
        }
    }
    if (!keyWindow) {
        keyWindow = [[UIApplication sharedApplication].windows firstObject];
    }
    if (!keyWindow) return nil;

    // 2. 从 rootViewController 向下找 presentedViewController（复刻微信优化 getChatConfirmationTopViewController）
    UIViewController *top = keyWindow.rootViewController;
    while (top.presentedViewController) {
        top = top.presentedViewController;
    }
    // 3. 如果是 UINavigationController，取 topViewController
    if ([top isKindOfClass:[UINavigationController class]]) {
        top = [(UINavigationController *)top topViewController];
    }
    // 如果是 UITabBarController，取 selectedViewController
    if ([top isKindOfClass:[UITabBarController class]]) {
        top = [(UITabBarController *)top selectedViewController];
        if ([top isKindOfClass:[UINavigationController class]]) {
            top = [(UINavigationController *)top topViewController];
        }
    }
    return top;
}