#import "WPCommonUI.h"
#import <QuartzCore/QuartzCore.h>

/// UISwitch block 回调桥接（MRC 安全）
@interface _WPBlockSwitchTarget : NSObject
@property (nonatomic, copy) void(^action)(BOOL isOn);
@end
@implementation _WPBlockSwitchTarget
- (void)fire:(UISwitch *)sender {
    if (self.action) self.action(sender.on);
}
@end

const CGFloat kPad = 16.0;
const CGFloat kRadius = 10.0;
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

void WPAddSwitchRow(UIView *card, CGFloat cy, CGFloat cw, NSString *title, NSString *key, BOOL on, id target,
                    void(^onChanged)(BOOL isOn)) {
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kPad, cy, cw - kPad * 2 - 70, kRowH)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = WPT1();
    [card addSubview:tl];

    UISwitch *sw = [[UISwitch alloc] init];
    sw.on = on;
    sw.onTintColor = WPSwOn();
    sw.frame = CGRectMake(cw - kPad * 3 - 51, cy + 6.5, 51, 31);

    if (onChanged) {
        _WPBlockSwitchTarget *bridge = [[_WPBlockSwitchTarget alloc] init];
        bridge.action = onChanged;
        objc_setAssociatedObject(sw, "wp_bridge", bridge, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        [sw addTarget:bridge action:@selector(fire:) forControlEvents:UIControlEventValueChanged];
    } else {
        objc_setAssociatedObject(sw, "key", key, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        [sw addTarget:target action:@selector(switchChanged:) forControlEvents:UIControlEventValueChanged];
    }
    [card addSubview:sw];
}

#pragma mark - 公共箭头

void WPDrawDisclosureArrow(UIView *card, CGFloat cy, CGFloat containerW, CGFloat rightPadding) {
    CGFloat arrowW = 7, arrowH = 11;
    CGFloat arrowX = containerW - rightPadding - arrowW - 3;
    CGFloat arrowCY = cy + kRowH / 2;
    CAShapeLayer *arrow = [CAShapeLayer layer];
    UIBezierPath *path = [UIBezierPath bezierPath];
    [path moveToPoint:CGPointMake(1, 0)];
    [path addLineToPoint:CGPointMake(arrowW, arrowH / 2)];
    [path addLineToPoint:CGPointMake(1, arrowH)];
    arrow.path = path.CGPath;
    arrow.strokeColor = [UIColor colorWithRed:0.78 green:0.78 blue:0.80 alpha:1.0].CGColor;
    arrow.fillColor = [UIColor clearColor].CGColor;
    arrow.lineWidth = 2.0;
    arrow.lineCap = kCALineCapRound;
    arrow.lineJoin = kCALineJoinRound;
    arrow.frame = CGRectMake(arrowX, arrowCY - arrowH / 2, arrowW + 2, arrowH);
    [card.layer addSublayer:arrow];
}

void WPAddNavRow(UIView *card, CGFloat cy, CGFloat cw, NSString *title, NSString *action, id target) {
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kPad, cy, cw - kPad * 2 - 30, kRowH)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = WPT1();
    [card addSubview:tl];

    WPDrawDisclosureArrow(card, cy, cw, kPad * 3);

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

void WPAddTextFieldRow(UIView *card, CGFloat cy, CGFloat cw, NSString *title, NSString *placeholder) {
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kPad, cy, cw - kPad * 2 - 150, kRowH)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = WPT1();
    [card addSubview:tl];

    UITextField *tf = [[UITextField alloc] initWithFrame:CGRectMake(cw - kPad * 2 - 150, cy + 4, 140, kRowH - 8)];
    tf.placeholder = placeholder;
    tf.font = [UIFont systemFontOfSize:14];
    tf.textColor = WPT2();
    tf.textAlignment = NSTextAlignmentRight;
    tf.returnKeyType = UIReturnKeyDone;
    tf.autocorrectionType = UITextAutocorrectionTypeNo;
    [card addSubview:tf];
}

UIButton *WPAddEditableRow(UIView *card, CGFloat cy, CGFloat cw, NSString *title, NSString *value, id target) {
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kPad, cy, cw - kPad * 2 - 150, kRowH)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = WPT1();
    [card addSubview:tl];

    UILabel *vl = [[UILabel alloc] initWithFrame:CGRectMake(cw - kPad * 2 - 154, cy, 140, kRowH)];
    vl.text = value;
    vl.font = [UIFont systemFontOfSize:14];
    vl.textColor = WPT2();
    vl.textAlignment = NSTextAlignmentRight;
    [card addSubview:vl];

    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    btn.frame = CGRectMake(0, cy, cw - kPad * 2, kRowH);
    objc_setAssociatedObject(btn, "editTitle", title, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(btn, "editValueLabel", vl, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [btn addTarget:target action:@selector(onEditRowTap:) forControlEvents:UIControlEventTouchUpInside];
    [card addSubview:btn];
    return btn;
}

/// 带右箭头版本的 WPAddEditableRow（问题2：和导航条目样式一致）
UIButton *WPAddEditableRowWithArrow(UIView *card, CGFloat cy, CGFloat cw, NSString *title, NSString *value, id target) {
    // 标题
    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kPad, cy, cw - kPad * 2 - 168, kRowH)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = WPT1();
    [card addSubview:tl];

    // 值（箭头左侧）
    UILabel *vl = [[UILabel alloc] initWithFrame:CGRectMake(cw - kPad * 2 - 164, cy, 136, kRowH)];
    vl.text = value;
    vl.font = [UIFont systemFontOfSize:14];
    vl.textColor = WPT2();
    vl.textAlignment = NSTextAlignmentRight;
    [card addSubview:vl];

    WPDrawDisclosureArrow(card, cy, cw, kPad * 3);

    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    btn.frame = CGRectMake(0, cy, cw - kPad * 2, kRowH);
    objc_setAssociatedObject(btn, "editTitle", title, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(btn, "editValueLabel", vl, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [btn addTarget:target action:@selector(onEditRowTap:) forControlEvents:UIControlEventTouchUpInside];
    [card addSubview:btn];
    return btn;
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

#pragma mark - 导航栏外观统一

static char kNavSavedStandardKey;
static char kNavSavedScrollEdgeKey;

void WPApplyNavAppearance(UIViewController *vc) {
    UINavigationBar *navBar = vc.navigationController.navigationBar;
    if (!navBar) return;

    // 首次应用时保存原始外观（挂在共享 navBar 上，恢复后即清除）
    if (!objc_getAssociatedObject(navBar, &kNavSavedStandardKey)) {
        objc_setAssociatedObject(navBar, &kNavSavedStandardKey, navBar.standardAppearance, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(navBar, &kNavSavedScrollEdgeKey, navBar.scrollEdgeAppearance, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }

    UINavigationBarAppearance *app = [[UINavigationBarAppearance alloc] init];
    [app configureWithOpaqueBackground];
    app.backgroundColor = WPBgColor();
    app.shadowColor = [UIColor clearColor];
    app.shadowImage = [[UIImage alloc] init];
    navBar.standardAppearance = app;
    navBar.scrollEdgeAppearance = app;
}

void WPRestoreNavAppearance(UIViewController *vc) {
    UINavigationBar *navBar = vc.navigationController.navigationBar;
    if (!navBar) return;

    UINavigationBarAppearance *std = objc_getAssociatedObject(navBar, &kNavSavedStandardKey);
    UINavigationBarAppearance *edge = objc_getAssociatedObject(navBar, &kNavSavedScrollEdgeKey);
    if (std) navBar.standardAppearance = std;
    if (edge) navBar.scrollEdgeAppearance = edge;
    objc_setAssociatedObject(navBar, &kNavSavedStandardKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    objc_setAssociatedObject(navBar, &kNavSavedScrollEdgeKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}