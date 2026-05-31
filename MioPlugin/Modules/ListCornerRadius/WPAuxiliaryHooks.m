#import "WPAuxiliaryHooks.h"
#import "../../Config/PluginConfig.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <objc/message.h>

static UIViewController *wp_findViewController(UIView *view) {
    UIResponder *responder = view;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            return (UIViewController *)responder;
        }
        responder = [responder nextResponder];
    }
    return nil;
}

static UIColor *wp_defaultBgColor(BOOL dark) {
    if (@available(iOS 13.0, *)) {
        return dark
            ? [UIColor colorWithRed:0.125 green:0.125 blue:0.125 alpha:1.0]
            : [UIColor whiteColor];
    }
    return [UIColor whiteColor];
}

static void (*_orig_MFWebMMBtn_layoutSubviews)(id, SEL);
static void _hooked_MFWebMMBtn_layoutSubviews(id self, SEL _cmd) {
    _orig_MFWebMMBtn_layoutSubviews(self, _cmd);

    PluginConfig *config = [PluginConfig shared];
    if (!config.listCornerRadiusEnabled) return;

    UIViewController *vc = wp_findViewController((UIView *)self);
    if (!vc) return;
    if (![NSStringFromClass([vc class]) isEqualToString:@"NewMainFrameViewController"]) return;

    BOOL isDark = NO;
    if (@available(iOS 13.0, *)) {
        isDark = (vc.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark);
    }

    UIColor *customBg = [config colorFromHex:isDark
        ? config.listCellDarkBgColor : config.listCellLightBgColor];
    ((UIView *)self).backgroundColor = customBg ?: wp_defaultBgColor(isDark);
}

static void (*_orig_MFBannerBtn_layoutSubviews)(id, SEL);
static void _hooked_MFBannerBtn_layoutSubviews(id self, SEL _cmd) {
    _orig_MFBannerBtn_layoutSubviews(self, _cmd);

    PluginConfig *config = [PluginConfig shared];
    if (!config.listCornerRadiusEnabled) return;

    UIViewController *vc = wp_findViewController((UIView *)self);
    if (!vc) return;
    if (![NSStringFromClass([vc class]) isEqualToString:@"NewMainFrameViewController"]) return;

    BOOL isDark = NO;
    if (@available(iOS 13.0, *)) {
        isDark = (vc.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark);
    }

    UIColor *customBg = [config colorFromHex:isDark
        ? config.listCellDarkBgColor : config.listCellLightBgColor];
    ((UIView *)self).backgroundColor = customBg ?: wp_defaultBgColor(isDark);
}

static void (*_orig_FoldView_layoutSubviews)(id, SEL);
static void _hooked_FoldView_layoutSubviews(id self, SEL _cmd) {
    _orig_FoldView_layoutSubviews(self, _cmd);

    UIViewController *vc = wp_findViewController((UIView *)self);
    if (!vc) return;
    if (![NSStringFromClass([vc class]) isEqualToString:@"NewMainFrameViewController"]) return;

    PluginConfig *config = [PluginConfig shared];
    if (!config.listCornerRadiusEnabled) return;

    UIView *view = (UIView *)self;
    NSInteger radius = (NSInteger)config.listCellCornerRadius;
    if (radius == 0) radius = 18;

    NSInteger margin = (NSInteger)config.listCellMargin;
    if (margin == 0) margin = 9;

    CGFloat screenWidth = [UIScreen mainScreen].bounds.size.width;
    CGRect frame = view.frame;
    CGFloat currentOriginX = frame.origin.x;
    if (currentOriginX - 2.0 * margin <= screenWidth) {
        frame.origin.x = (CGFloat)margin;
        frame.size.width = frame.size.width - 2.0 * ((CGFloat)margin);
        view.frame = frame;
    }

    if ([view respondsToSelector:@selector(isFolding)]) {
        NSNumber *folding = ((id (*)(id, SEL))objc_msgSend)(view, @selector(isFolding));
        if (folding && [folding boolValue]) {
            view.layer.cornerRadius = radius;
            view.layer.maskedCorners = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner
                                     | kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
        } else {
            view.layer.cornerRadius = radius;
            view.layer.maskedCorners = kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
        }
    } else {
        view.layer.cornerRadius = radius;
        view.layer.maskedCorners = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner
                                 | kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
    }

    BOOL isDark = NO;
    if (@available(iOS 13.0, *)) {
        isDark = (vc.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark);
    }
    UIColor *customBg = [config colorFromHex:isDark
        ? config.listCellDarkBgColor : config.listCellLightBgColor];
    view.backgroundColor = customBg ?: wp_defaultBgColor(isDark);
}

static void (*_orig_MMUIButton_layoutSubviews)(id, SEL);
static void _hooked_MMUIButton_layoutSubviews(id self, SEL _cmd) {
    _orig_MMUIButton_layoutSubviews(self, _cmd);

    PluginConfig *config = [PluginConfig shared];
    if (!config.listCornerRadiusEnabled) return;

    if (config.listMediaCornerEnabled) {
        UIView *view = (UIView *)self;
        NSInteger radius = (NSInteger)config.listCellCornerRadius;
        if (radius == 0) radius = 18;
        view.layer.cornerRadius = radius;
        view.layer.masksToBounds = YES;
    }

    if (config.listHideRightQRCode) {
        UIView *view = (UIView *)self;
        Class cls = [view class];
        NSString *className = NSStringFromClass(cls);
        if ([className containsString:@"QRCode"] || [className containsString:@"Qrcode"]) {
            view.hidden = YES;
            view.alpha = 0;
        }
    }

    if (config.listDisableLabelWidthAdjustment) {
        UIView *view = (UIView *)self;
        for (UIView *subview in view.subviews) {
            if ([subview isKindOfClass:[UILabel class]]) {
                UILabel *label = (UILabel *)subview;
                [label sizeToFit];
            }
        }
    }
}

void WPInstallAuxiliaryHooks(void) {
    Class c1 = objc_getClass("MFWebMMBtn");
    if (c1) {
        MSHookMessageEx(c1, @selector(layoutSubviews),
            (IMP)_hooked_MFWebMMBtn_layoutSubviews, (IMP *)&_orig_MFWebMMBtn_layoutSubviews);
    }

    Class c2 = objc_getClass("MFBannerBtn");
    if (c2) {
        MSHookMessageEx(c2, @selector(layoutSubviews),
            (IMP)_hooked_MFBannerBtn_layoutSubviews, (IMP *)&_orig_MFBannerBtn_layoutSubviews);
    }

    Class c3 = objc_getClass("MainFrameSectionFoldView");
    if (c3) {
        MSHookMessageEx(c3, @selector(layoutSubviews),
            (IMP)_hooked_FoldView_layoutSubviews, (IMP *)&_orig_FoldView_layoutSubviews);
    }

    Class c4 = objc_getClass("MMUIButton");
    if (c4) {
        MSHookMessageEx(c4, @selector(layoutSubviews),
            (IMP)_hooked_MMUIButton_layoutSubviews, (IMP *)&_orig_MMUIButton_layoutSubviews);
    }
}