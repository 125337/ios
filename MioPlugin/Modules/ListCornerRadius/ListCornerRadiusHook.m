#import "ListCornerRadiusHook.h"
#import "../../Config/PluginConfig.h"
#import "../../Settings/Common/WPBorderLayer.h"
#import "../../Core/LogManager.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <objc/message.h>

static IMP _orig_MMTableViewCell_layoutSubviews = NULL;

static const void *kCornerRadiusAppliedKey = &kCornerRadiusAppliedKey;

static UITableView *findParentTableView(UIView *view) {
    UIView *superview = view.superview;
    while (superview) {
        if ([superview isKindOfClass:[UITableView class]]) {
            return (UITableView *)superview;
        }
        superview = superview.superview;
    }
    return nil;
}

static UIColor *colorFromHex(NSString *hexString, UIColor *defaultColor) {
    if (!hexString || hexString.length == 0) return defaultColor;

    NSString *clean = [hexString stringByReplacingOccurrencesOfString:@"#" withString:@""];
    if (clean.length != 6 && clean.length != 8) return defaultColor;

    unsigned int rgb = 0;
    NSScanner *scanner = [NSScanner scannerWithString:clean];
    [scanner scanHexInt:&rgb];

    CGFloat r = ((rgb >> 16) & 0xFF) / 255.0;
    CGFloat g = ((rgb >> 8) & 0xFF) / 255.0;
    CGFloat b = (rgb & 0xFF) / 255.0;
    CGFloat a = clean.length == 8 ? ((rgb >> 24) & 0xFF) / 255.0 : 1.0;

    return [UIColor colorWithRed:r green:g blue:b alpha:a];
}

static BOOL isDarkMode(void) {
    if (@available(iOS 13.0, *)) {
        if ([UITraitCollection currentTraitCollection].userInterfaceStyle == UIUserInterfaceStyleDark) {
            return YES;
        }
    }
    return NO;
}

static NSInteger cellPositionInSection(UITableViewCell *cell, UITableView *tableView) {
    if (!tableView) return -1;

    @try {
        NSIndexPath *indexPath = [tableView indexPathForCell:cell];
        if (!indexPath) return -1;

        NSInteger row = indexPath.row;
        NSInteger section = indexPath.section;
        NSInteger totalRows = [tableView numberOfRowsInSection:section];

        if (totalRows == 1) return 0;
        if (row == 0) return 1;
        if (row == totalRows - 1) return 3;
        return 2;
    } @catch (NSException *e) {
        return -1;
    }
}

static void replaced_MMTableViewCell_layoutSubviews(id self, SEL _cmd) {
    if (_orig_MMTableViewCell_layoutSubviews) {
        ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews)(self, _cmd);
    }

    PluginConfig *config = [PluginConfig shared];
    if (!config.listCornerRadiusEnabled) return;

    if (objc_getAssociatedObject(self, kCornerRadiusAppliedKey)) return;
    objc_setAssociatedObject(self, kCornerRadiusAppliedKey,
                             @(YES), OBJC_ASSOCIATION_RETAIN_NONATOMIC);

    @try {
        UITableViewCell *cell = (UITableViewCell *)self;

        UITableView *tableView = findParentTableView(cell);
        NSInteger position = cellPositionInSection(cell, tableView);
        if (position < 0) return;

        CGFloat cornerRadius = config.listCellCornerRadius;
        CGFloat margin       = config.listCellMargin;
        CGFloat pinnedSpace  = config.listPinnedSessionTopSpacing;
        CGFloat normalSpace  = config.listNormalSessionSpacing;

        CGRect frame = cell.frame;
        frame.origin.x += margin;
        frame.size.width -= (margin * 2);

        NSIndexPath *indexPath = [tableView indexPathForCell:cell];
        BOOL isPinned = NO;
        if (@available(iOS 16.0, *)) {
            isPinned = (position <= 2);
        }
        CGFloat spacing = isPinned ? pinnedSpace : normalSpace;
        frame.size.height -= spacing;

        cell.frame = frame;

        cell.layer.masksToBounds = YES;
        cell.layer.cornerRadius = cornerRadius;

        switch (position) {
            case 0:
                cell.layer.maskedCorners = kCALayerMinXMinYCorner
                                         | kCALayerMaxXMinYCorner
                                         | kCALayerMinXMaxYCorner
                                         | kCALayerMaxXMaxYCorner;
                break;
            case 1:
                cell.layer.maskedCorners = kCALayerMinXMinYCorner
                                         | kCALayerMaxXMinYCorner;
                break;
            case 2:
                cell.layer.cornerRadius = 0;
                cell.layer.maskedCorners = 0;
                break;
            case 3:
                cell.layer.maskedCorners = kCALayerMinXMaxYCorner
                                         | kCALayerMaxXMaxYCorner;
                break;
        }

        BOOL dark = isDarkMode();
        NSString *bgHex = dark ? config.listCellDarkBgColor : config.listCellLightBgColor;
        UIColor *defaultBg = dark
            ? [UIColor colorWithRed:0.125 green:0.125 blue:0.125 alpha:1.0]
            : [UIColor whiteColor];
        cell.backgroundColor = colorFromHex(bgHex, defaultBg);

        if (config.listCellBorder) {
            NSMutableArray *borderLayers = [cell wp_borderLayers];
            for (WPBorderLayer *layer in [borderLayers copy]) {
                [layer removeFromSuperlayer];
            }
            [borderLayers removeAllObjects];

            UIColor *borderLightColor = colorFromHex(config.listCellLightBgColor,
                [UIColor colorWithRed:0.9 green:0.9 blue:0.9 alpha:1.0]);
            UIColor *borderDarkColor = colorFromHex(config.listCellDarkBgColor,
                [UIColor colorWithRed:0.25 green:0.25 blue:0.25 alpha:1.0]);

            WPBorderSide sides = WPBorderSideNone;
            UIRectCorner roundedCorners = 0;

            switch (position) {
                case 0:
                    sides = WPBorderSideAll;
                    roundedCorners = UIRectCornerAllCorners;
                    break;
                case 1:
                    sides = WPBorderSideTop | WPBorderSideLeft | WPBorderSideRight;
                    roundedCorners = UIRectCornerTopLeft | UIRectCornerTopRight;
                    break;
                case 2:
                    sides = WPBorderSideLeft | WPBorderSideRight;
                    roundedCorners = 0;
                    break;
                case 3:
                    sides = WPBorderSideLeft | WPBorderSideRight | WPBorderSideBottom;
                    roundedCorners = UIRectCornerBottomLeft | UIRectCornerBottomRight;
                    break;
            }

            WPBorderLayer *borderLayer = [[WPBorderLayer alloc] init];
            borderLayer.sides = sides;
            borderLayer.borderWidth = 1.0;
            borderLayer.borderColorLight = borderLightColor;
            borderLayer.borderColorDark = borderDarkColor;
            borderLayer.cornerRadius = cornerRadius;
            borderLayer.roundedCorners = roundedCorners;
            borderLayer.leftInset = 0;
            borderLayer.hasBorder = YES;
            borderLayer.fillColor = [UIColor clearColor].CGColor;
            borderLayer.lineWidth = 1.0;
            borderLayer.strokeColor = dark ? borderDarkColor.CGColor : borderLightColor.CGColor;
            borderLayer.lineJoin = kCALineJoinRound;
            borderLayer.masksToBounds = NO;

            [borderLayer updatePathInRect:cell.bounds];
            [cell.layer addSublayer:borderLayer];
            [borderLayers addObject:borderLayer];
        }

        if (config.listHideRightQRCode) {
            for (UIView *subview in cell.subviews) {
                NSString *className = NSStringFromClass([subview class]);
                if ([className containsString:@"QRCode"] ||
                    [className containsString:@"Qrcode"] ||
                    [className containsString:@"QR"]) {
                    subview.hidden = YES;
                    subview.alpha = 0;
                }
            }
        }

        [cell wp_updateBorderAppearanceForDarkMode:dark];

    } @catch (NSException *e) {
        WPLog(@"ListCornerRadius", @"[ERROR] layoutSubviews hook: %@", e);
    } @finally {
        objc_setAssociatedObject(self, kCornerRadiusAppliedKey,
                                 nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
}

@implementation ListCornerRadiusHook

+ (void)initListCornerRadiusHook {
    WPLog(@"ListCornerRadius", @"[INIT] Initializing ListCornerRadius hook...");

    Class MMTableViewCellClass = objc_getClass("MMTableViewCell");
    if (MMTableViewCellClass) {
        MSHookMessageEx(
            MMTableViewCellClass,
            @selector(layoutSubviews),
            (IMP)replaced_MMTableViewCell_layoutSubviews,
            &_orig_MMTableViewCell_layoutSubviews
        );
        WPLog(@"ListCornerRadius", @"[OK] Hook: MMTableViewCell::layoutSubviews");
    } else {
        WPLog(@"ListCornerRadius", @"[WARN] MMTableViewCell class not found!");
    }

    WPLog(@"ListCornerRadius", @"[INIT] ListCornerRadius hook initialized.");
}

@end