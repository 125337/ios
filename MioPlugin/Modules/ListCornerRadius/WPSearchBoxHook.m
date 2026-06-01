#import "WPSearchBoxHook.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/LogManager.h"
#import <substrate.h>
#import <objc/runtime.h>

static IMP _orig_UIView_layoutSubviews = NULL;

static UIViewController *wp_findParentVC(UIView *view) {
    UIResponder *r = view;
    while (r) {
        if ([r isKindOfClass:[UIViewController class]]) return (UIViewController *)r;
        r = [r nextResponder];
    }
    return nil;
}

static void replaced_UIView_layoutSubviews(id self, SEL _cmd) {
    if (_orig_UIView_layoutSubviews) {
        ((void (*)(id, SEL))_orig_UIView_layoutSubviews)(self, _cmd);
    }

    PluginConfig *config = [PluginConfig shared];
    if (!config.listCornerRadiusEnabled || !config.listSearchCornerRadius) return;

    UIView *view = (UIView *)self;

    NSString *clsName = NSStringFromClass([view class]);
    if (![clsName isEqualToString:@"UIView"]) return;

    UIViewController *vc = wp_findParentVC(view);
    if (!vc) return;

    NSString *vcName = NSStringFromClass([vc class]);
    if (![vcName isEqualToString:@"NewMainFrameViewController"] &&
        ![vcName isEqualToString:@"FTSHomeViewController"]) return;

    CGSize size = view.bounds.size;
    if (size.width < 200 || size.height < 30 || size.height > 60) return;

    CGFloat radius = config.listCellCornerRadius;
    if (radius == 0) radius = 18;

    view.layer.cornerRadius = radius;
    view.layer.masksToBounds = YES;
}

void WPInstallSearchBoxHook(void) {
    MSHookMessageEx(
        [UIView class],
        @selector(layoutSubviews),
        (IMP)replaced_UIView_layoutSubviews,
        &_orig_UIView_layoutSubviews
    );
    WPLog(@"ListCornerRadius", @"[OK] SearchBox: UIView::layoutSubviews hooked (class-filtered)");
}