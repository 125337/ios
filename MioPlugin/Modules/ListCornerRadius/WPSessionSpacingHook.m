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

void WPInstallSessionSpacingHooks(void) {
    Class nmfvc = objc_getClass("NewMainFrameViewController");
    if (nmfvc) {
        MSHookMessageEx(nmfvc, @selector(tableView:heightForHeaderInSection:),
            (IMP)_hooked_NMFVC_heightForHeader, (IMP *)&_orig_NMFVC_heightForHeader);
        MSHookMessageEx(nmfvc, @selector(tableView:viewForHeaderInSection:),
            (IMP)_hooked_NMFVC_viewForHeader, (IMP *)&_orig_NMFVC_viewForHeader);
    }
    Class header = objc_getClass("MMTableSectionHeaderView");
    if (header) {
        MSHookMessageEx(header, @selector(setBackgroundImageView:),
            (IMP)_hooked_setBgImageView, (IMP *)&_orig_setBgImageView);
    }
}