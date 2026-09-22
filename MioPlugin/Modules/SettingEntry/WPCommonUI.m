#import "WPCommonUI.h"
#import <QuartzCore/QuartzCore.h>

const CGFloat kPad = 15.0;    // 插件页面统一边距（写死，不读用户配置）
const CGFloat kRadius = 15.0; // 插件页面统一圆角（写死，不读用户配置）
const CGFloat kRowH = 44.0;

Class WPGetBaseClass(void) {
    Class cls = objc_getClass("MMUIViewController");
    if (cls) return cls;
    return objc_getClass("UIViewController");
}

UIView *WPMakeCard(CGFloat top, CGFloat w) {
    UIView *c = [[UIView alloc] initWithFrame:CGRectMake(kPad, top, w - kPad * 2, 0)];
    c.backgroundColor = WPCardBg();
    c.layer.cornerRadius = kRadius;
    if (@available(iOS 13.0, *)) c.layer.cornerCurve = kCACornerCurveContinuous;
    c.clipsToBounds = YES;
    return c;
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

#pragma mark - 轻量 toast

void WPShowToast(NSString *message) {
    if (message.length == 0) return;
    UIWindow *window = nil;
    for (UIWindowScene *scene in [UIApplication sharedApplication].connectedScenes) {
        if (![scene isKindOfClass:[UIWindowScene class]]) continue;
        for (UIWindow *w in scene.windows) {
            if (w.isKeyWindow) { window = w; break; }
        }
        if (window) break;
    }
    if (!window) window = [[UIApplication sharedApplication].windows firstObject];
    if (!window) return;

    UILabel *label = [[UILabel alloc] init];
    label.text = message;
    label.font = [UIFont systemFontOfSize:13];
    label.textColor = UIColor.whiteColor;
    label.textAlignment = NSTextAlignmentCenter;
    label.numberOfLines = 0;
    [label sizeToFit];

    UIView *toast = [[UIView alloc] initWithFrame:CGRectMake((window.bounds.size.width - label.frame.size.width - 24) / 2,
                                                             window.bounds.size.height * 0.45,
                                                             label.frame.size.width + 24,
                                                             label.frame.size.height + 16)];
    toast.backgroundColor = [UIColor colorWithWhite:0 alpha:0.78];
    toast.layer.cornerRadius = 8;
    toast.layer.masksToBounds = YES;
    label.frame = CGRectMake(12, 8, label.frame.size.width, label.frame.size.height);
    [toast addSubview:label];
    [window addSubview:toast];
    toast.alpha = 0;
    [UIView animateWithDuration:0.2 animations:^{ toast.alpha = 1; }];
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [UIView animateWithDuration:0.25 animations:^{ toast.alpha = 0; }
                         completion:^(BOOL finished) { [toast removeFromSuperview]; }];
    });
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
