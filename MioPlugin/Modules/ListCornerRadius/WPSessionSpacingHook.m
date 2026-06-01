#import "WPSessionSpacingHook.h"
#import "../../Config/PluginConfig.h"
#import <substrate.h>
#import <objc/runtime.h>

static CGFloat (*_orig_NMFVC_heightForHeader)(id, SEL, id, NSInteger);
static CGFloat _hooked_NMFVC_heightForHeader(id self, SEL _cmd, id tableView, NSInteger section) {
    CGFloat height = _orig_NMFVC_heightForHeader(self, _cmd, tableView, section);

    PluginConfig *config = [PluginConfig shared];
    if (!config.listCornerRadiusEnabled) return height;

    if (section == 1) {
        NSInteger spacing = (NSInteger)config.listPinnedSessionTopSpacing;
        height += (spacing > 0) ? spacing : 15;
    } else if (section >= 2) {
        NSInteger spacing = (NSInteger)config.listNormalSessionSpacing;
        height += (spacing > 0) ? spacing : 15;
    }
    return height;
}

static id (*_orig_NMFVC_viewForHeader)(id, SEL, id, NSInteger);
static id _hooked_NMFVC_viewForHeader(id self, SEL _cmd, id tableView, NSInteger section) {
    PluginConfig *config = [PluginConfig shared];
    if (config.listCornerRadiusEnabled && section > 0) {
        return [[UIView alloc] initWithFrame:CGRectZero];
    }
    return _orig_NMFVC_viewForHeader(self, _cmd, tableView, section);
}

static void (*_orig_setBgImageView)(id, SEL, id);
static void _hooked_setBgImageView(id self, SEL _cmd, id imageView) {
    PluginConfig *config = [PluginConfig shared];
    if (!config.listCornerRadiusEnabled) {
        _orig_setBgImageView(self, _cmd, imageView);
    }
}

static BOOL _wp_isTableViewClass(NSString *name) {
    return [name isEqualToString:@"MMTableView"] ||
           [name isEqualToString:@"MMMainTableView"] ||
           [name isEqualToString:@"MainFrameTableView"] ||
           [name isEqualToString:@"TextStateProfileTableView"];
}

static void (*_orig_UIView_layoutSubviews)(id, SEL);
static void _hooked_UIView_layoutSubviews(id self, SEL _cmd) {
    _orig_UIView_layoutSubviews(self, _cmd);

    PluginConfig *config = [PluginConfig shared];
    if (!config.listCornerRadiusEnabled) return;

    if (![NSStringFromClass([self class]) isEqualToString:@"UIView"]) return;

    UIView *view = (UIView *)self;

    if (view.bounds.size.height < 1.0) return;

    UIView *parent = view.superview;
    if (!parent) return;

    if (_wp_isTableViewClass(NSStringFromClass([parent class]))) {
        BOOL isDark = NO;
        if (@available(iOS 13.0, *)) {
            isDark = (parent.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark);
        }
        UIColor *bgColor = nil;
        NSString *lightHex = [config valueForKey:@"listCellLightBgColor"];
        NSString *darkHex = [config valueForKey:@"listCellDarkBgColor"];
        if (isDark && darkHex.length > 0) {
            bgColor = [config colorFromHex:darkHex];
        } else if (!isDark && lightHex.length > 0) {
            bgColor = [config colorFromHex:lightHex];
        }
        view.backgroundColor = bgColor ?: (isDark
            ? [UIColor colorWithRed:0.125 green:0.125 blue:0.125 alpha:1.0]
            : [UIColor clearColor]);
        return;
    }

    UIView *gp = parent.superview;
    if (gp && _wp_isTableViewClass(NSStringFromClass([gp class]))) {
        BOOL isDark = NO;
        if (@available(iOS 13.0, *)) {
            isDark = (gp.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark);
        }
        UIColor *bgColor = nil;
        NSString *lightHex = [config valueForKey:@"listCellLightBgColor"];
        NSString *darkHex = [config valueForKey:@"listCellDarkBgColor"];
        if (isDark && darkHex.length > 0) {
            bgColor = [config colorFromHex:darkHex];
        } else if (!isDark && lightHex.length > 0) {
            bgColor = [config colorFromHex:lightHex];
        }
        view.backgroundColor = bgColor ?: (isDark
            ? [UIColor colorWithRed:0.125 green:0.125 blue:0.125 alpha:1.0]
            : [UIColor clearColor]);
    }
}

static void (*_orig_NMFVC_viewDidLayoutSubviews)(id, SEL);
static void _wp_clearPlainUIViewBackgrounds(UIView *root) {
    PluginConfig *config = [PluginConfig shared];
    for (UIView *subview in root.subviews) {
        if ([subview isKindOfClass:[UITableView class]]) {
            BOOL isDark = NO;
            if (@available(iOS 13.0, *)) {
                isDark = (subview.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark);
            }
            UIColor *bgColor = nil;
            NSString *lightHex = [config valueForKey:@"listCellLightBgColor"];
            NSString *darkHex = [config valueForKey:@"listCellDarkBgColor"];
            if (isDark && darkHex.length > 0) {
                bgColor = [config colorFromHex:darkHex];
            } else if (!isDark && lightHex.length > 0) {
                bgColor = [config colorFromHex:lightHex];
            }
            UIColor *targetBg = bgColor ?: (isDark
        ? [UIColor colorWithRed:0.125 green:0.125 blue:0.125 alpha:1.0]
        : [UIColor clearColor]);
            for (UIView *child in subview.subviews) {
                if ([NSStringFromClass([child class]) isEqualToString:@"UIView"]) {
                    child.backgroundColor = targetBg;
                }
            }
        }
        _wp_clearPlainUIViewBackgrounds(subview);
    }
}

static void _hooked_NMFVC_viewDidLayoutSubviews(id self, SEL _cmd) {
    _orig_NMFVC_viewDidLayoutSubviews(self, _cmd);

    PluginConfig *config = [PluginConfig shared];
    if (!config.listCornerRadiusEnabled) return;

    _wp_clearPlainUIViewBackgrounds(((UIViewController *)self).view);
}

void WPInstallSessionSpacingHooks(void) {
    Class uiView = objc_getClass("UIView");
    if (uiView) {
        MSHookMessageEx(uiView, @selector(layoutSubviews),
            (IMP)_hooked_UIView_layoutSubviews, (IMP *)&_orig_UIView_layoutSubviews);
    }
    Class nmfvc = objc_getClass("NewMainFrameViewController");
    if (nmfvc) {
        MSHookMessageEx(nmfvc, @selector(tableView:heightForHeaderInSection:),
            (IMP)_hooked_NMFVC_heightForHeader, (IMP *)&_orig_NMFVC_heightForHeader);
        MSHookMessageEx(nmfvc, @selector(tableView:viewForHeaderInSection:),
            (IMP)_hooked_NMFVC_viewForHeader, (IMP *)&_orig_NMFVC_viewForHeader);
        MSHookMessageEx(nmfvc, @selector(viewDidLayoutSubviews),
            (IMP)_hooked_NMFVC_viewDidLayoutSubviews, (IMP *)&_orig_NMFVC_viewDidLayoutSubviews);
    }
    Class header = objc_getClass("MMTableSectionHeaderView");
    if (header) {
        MSHookMessageEx(header, @selector(setBackgroundImageView:),
            (IMP)_hooked_setBgImageView, (IMP *)&_orig_setBgImageView);
    }
}