#import "WPSearchBoxHook.h"
#import "../../Config/PluginConfig.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <objc/message.h>

static UIColor *WPSearchBoxDefaultBackgroundColor(BOOL dark) {
    if (@available(iOS 13.0, *)) {
        if (dark) {
            return [UIColor colorWithRed:0.125 green:0.125 blue:0.125 alpha:1.0];
        } else {
            return [UIColor whiteColor];
        }
    }
    return [UIColor whiteColor];
}

static id (*_orig_UIView_layoutSubviews)(id, SEL);

static void _hooked_UIView_layoutSubviews(id self, SEL _cmd) {
    _orig_UIView_layoutSubviews(self, _cmd);

    id responder = self;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) break;
        responder = [responder nextResponder];
    }
    if (!responder) return;

    if (![NSStringFromClass([responder class]) isEqualToString:@"NewMainFrameViewController"]) return;

    PluginConfig *config = [PluginConfig shared];
    if (!config.listCornerRadiusEnabled) return;

    UIView *view = (UIView *)self;
    NSString *viewClassName = NSStringFromClass([view class]);

    if (!config.listSearchCornerRadius) {
        if ([viewClassName isEqualToString:@"UIView"]) {
            UIView *superview = view.superview;
            if (superview) {
                NSString *superClassName = NSStringFromClass([superview class]);
                if ([superClassName containsString:@"MainFrameTableView"]) {
                    view.backgroundColor = [UIColor clearColor];
                }
            }
        }
        return;
    }

    NSInteger radius = (NSInteger)config.listCellCornerRadius;
    if (radius == 0) radius = 18;
    NSInteger margin = (NSInteger)config.listCellMargin;
    if (margin == 0) margin = 9;

    CGFloat screenWidth = [UIScreen mainScreen].bounds.size.width;
    if (view.frame.origin.x - 2 * margin <= screenWidth) {
        CGRect frame = view.frame;
        frame.origin.x = margin;
        view.frame = frame;
    }

    if ([view respondsToSelector:@selector(isFolding)]) {
        NSNumber *folding = ((id (*)(id, SEL))objc_msgSend)(view, @selector(isFolding));
        if (folding && [folding boolValue]) {
            view.layer.cornerRadius = radius;
            view.layer.maskedCorners = 0xF;
        } else {
            view.layer.cornerRadius = radius;
            view.layer.maskedCorners = 0xC;
        }
    } else {
        view.layer.cornerRadius = radius;
        view.layer.maskedCorners = 0xF;
    }

    BOOL isDark = NO;
    if (@available(iOS 13.0, *)) {
        UIViewController *vc = (UIViewController *)responder;
        isDark = (vc.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark);
    }
    view.backgroundColor = WPSearchBoxDefaultBackgroundColor(isDark);
    view.layer.masksToBounds = YES;
}

void WPInstallSearchBoxHook(void) {
    MSHookMessageEx([UIView class], @selector(layoutSubviews),
        (IMP)_hooked_UIView_layoutSubviews, (IMP *)&_orig_UIView_layoutSubviews);
}