#import "WPAuxiliaryHooks.h"
#import "../../Config/PluginConfig.h"
#import <substrate.h>
#import <objc/runtime.h>

static void (*_orig_MFWebMMBtn_layoutSubviews)(id, SEL);
static void _hooked_MFWebMMBtn_layoutSubviews(id self, SEL _cmd) {
    _orig_MFWebMMBtn_layoutSubviews(self, _cmd);
    PluginConfig *config = [PluginConfig shared];
    if (!config.listCornerRadiusEnabled) return;

    UIView *view = (UIView *)self;
    NSInteger radius = (NSInteger)config.listCellCornerRadius;
    if (radius == 0) radius = 18;
    view.layer.cornerRadius = radius;
    view.layer.masksToBounds = YES;
}

static void (*_orig_MFBannerBtn_layoutSubviews)(id, SEL);
static void _hooked_MFBannerBtn_layoutSubviews(id self, SEL _cmd) {
    _orig_MFBannerBtn_layoutSubviews(self, _cmd);
    PluginConfig *config = [PluginConfig shared];
    if (!config.listCornerRadiusEnabled) return;

    UIView *view = (UIView *)self;
    NSInteger radius = (NSInteger)config.listCellCornerRadius;
    if (radius == 0) radius = 18;
    view.layer.cornerRadius = radius;
    view.layer.masksToBounds = YES;
}

static void (*_orig_FoldView_layoutSubviews)(id, SEL);
static void _hooked_FoldView_layoutSubviews(id self, SEL _cmd) {
    _orig_FoldView_layoutSubviews(self, _cmd);
    PluginConfig *config = [PluginConfig shared];
    if (!config.listCornerRadiusEnabled) return;

    UIView *view = (UIView *)self;
    NSInteger radius = (NSInteger)config.listCellCornerRadius;
    if (radius == 0) radius = 18;
    view.layer.cornerRadius = radius;
    view.layer.masksToBounds = YES;
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
        NSString *className = NSStringFromClass([view class]);
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