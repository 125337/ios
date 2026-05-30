#import "ListCornerRadiusHook.h"
#import "../../Config/PluginConfig.h"
#import "../../Settings/Common/WPBorderLayer.h"
#import "../../Core/LogManager.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <objc/message.h>

static IMP _orig_MMTableViewCell_layoutSubviews = NULL;

static UIViewController *findParentViewController(UIView *view) {
    UIResponder *responder = view;
    while (responder) {
        if ([responder isKindOfClass:[UIViewController class]]) {
            return (UIViewController *)responder;
        }
        responder = [responder nextResponder];
    }
    return nil;
}

static NSInteger cellPositionInSection(UITableViewCell *cell, UITableView *tableView) {
    NSIndexPath *indexPath = [tableView indexPathForCell:cell];
    if (!indexPath) return -1;
    NSInteger row = indexPath.row;
    NSInteger totalRows = [tableView numberOfRowsInSection:indexPath.section];
    if (totalRows == 1) return 0;
    if (row == 0) return 1;
    if (row == totalRows - 1) return 3;
    return 2;
}

static void replaced_MMTableViewCell_layoutSubviews(id self, SEL _cmd) {
    if (_orig_MMTableViewCell_layoutSubviews) {
        ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews)(self, _cmd);
    }

    PluginConfig *config = [PluginConfig shared];
    if (!config.listCornerRadiusEnabled) return;

    UIViewController *parentVC = findParentViewController((UIView *)self);
    if (!parentVC) return;
    NSString *vcName = NSStringFromClass([parentVC class]);
    if (![vcName isEqualToString:@"NewMainFrameViewController"]) return;

    UITableViewCell *cell = (UITableViewCell *)self;

    UIView *superview = cell.superview;
    if (![superview isKindOfClass:[UITableView class]]) return;
    UITableView *tableView = (UITableView *)superview;

    NSInteger position = cellPositionInSection(cell, tableView);
    if (position < 0) return;

    CGFloat cornerRadius = config.listCellCornerRadius;
    CGFloat margin = config.listCellMargin;

    CGFloat superviewOriginX = superview.frame.origin.x;
    CGFloat targetX = (margin > superviewOriginX) ? margin - superviewOriginX : 0;

    if (cell.frame.origin.x != targetX) {
        CGRect frame = cell.frame;
        frame.origin.x = targetX;
        cell.frame = frame;
    }

    cell.layer.masksToBounds = YES;
    cell.layer.cornerRadius = cornerRadius;

    switch (position) {
        case 0: // 唯一 Cell → 四角
            cell.layer.maskedCorners = kCALayerMinXMinYCorner
                                     | kCALayerMaxXMinYCorner
                                     | kCALayerMinXMaxYCorner
                                     | kCALayerMaxXMaxYCorner;
            break;
        case 1: // 首行 → 顶部两角
            cell.layer.maskedCorners = kCALayerMinXMinYCorner
                                     | kCALayerMaxXMinYCorner;
            break;
        case 2: // 中间行 → 无圆角
            cell.layer.cornerRadius = 0;
            cell.layer.maskedCorners = 0;
            break;
        case 3: // 末行 → 底部两角
            cell.layer.maskedCorners = kCALayerMinXMaxYCorner
                                     | kCALayerMaxXMaxYCorner;
            break;
    }

    BOOL dark = NO;
    if (@available(iOS 13.0, *)) {
        dark = ([UITraitCollection currentTraitCollection].userInterfaceStyle == UIUserInterfaceStyleDark);
    }
    NSString *bgHex = dark ? config.listCellDarkBgColor : config.listCellLightBgColor;
    UIColor *defaultBg = dark
        ? [UIColor colorWithRed:0.125 green:0.125 blue:0.125 alpha:1.0]
        : [UIColor whiteColor];
    UIColor *bgColor = defaultBg;
    if (bgHex && bgHex.length > 0) {
        NSString *clean = [bgHex stringByReplacingOccurrencesOfString:@"#" withString:@""];
        if (clean.length == 6) {
            unsigned int rgb = 0;
            [[NSScanner scannerWithString:clean] scanHexInt:&rgb];
            bgColor = [UIColor colorWithRed:((rgb >> 16) & 0xFF) / 255.0
                                      green:((rgb >> 8) & 0xFF) / 255.0
                                       blue:(rgb & 0xFF) / 255.0
                                      alpha:1.0];
        }
    }
    cell.backgroundColor = bgColor;

    if (config.listCellBorder) {
        NSMutableArray *borderLayers = [cell wp_borderLayers];
        for (WPBorderLayer *layer in [borderLayers copy]) {
            [layer removeFromSuperlayer];
        }
        [borderLayers removeAllObjects];

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
        borderLayer.borderColorLight = [UIColor colorWithRed:0.9 green:0.9 blue:0.9 alpha:1.0];
        borderLayer.borderColorDark = [UIColor colorWithRed:0.25 green:0.25 blue:0.25 alpha:1.0];
        borderLayer.cornerRadius = cornerRadius;
        borderLayer.roundedCorners = roundedCorners;
        borderLayer.lineWidth = 1.0;
        borderLayer.strokeColor = dark
            ? [UIColor colorWithRed:0.25 green:0.25 blue:0.25 alpha:1.0].CGColor
            : [UIColor colorWithRed:0.9 green:0.9 blue:0.9 alpha:1.0].CGColor;
        borderLayer.lineJoin = kCALineJoinRound;

        [borderLayer updatePathInRect:cell.bounds];
        [cell.layer addSublayer:borderLayer];
        [borderLayers addObject:borderLayer];

        [cell wp_updateBorderAppearanceForDarkMode:dark];
    }

    if (config.listHideRightQRCode) {
        for (UIView *subview in cell.subviews) {
            NSString *className = NSStringFromClass([subview class]);
            if ([className containsString:@"QRCode"] || [className containsString:@"Qrcode"]) {
                subview.hidden = YES;
                subview.alpha = 0;
            }
        }
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
        WPLog(@"ListCornerRadius", @"[OK] MMTableViewCell::layoutSubviews");
    } else {
        WPLog(@"ListCornerRadius", @"[WARN] MMTableViewCell class not found!");
    }
}

@end