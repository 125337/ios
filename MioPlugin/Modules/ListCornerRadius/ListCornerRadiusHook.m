#import "ListCornerRadiusHook.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/LogManager.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <objc/message.h>

static IMP _orig_MMTableViewCell_layoutSubviews = NULL;

static UIColor *WPCellDefaultBackgroundColor(BOOL dark) {
    if (@available(iOS 13.0, *)) {
        if (dark) {
            return [UIColor colorWithRed:0.125 green:0.125 blue:0.125 alpha:1.0];
        } else {
            return [UIColor whiteColor];
        }
    }
    return [UIColor whiteColor];
}

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

static UIColor *WPColorFromHex(NSString *hex) {
    if (!hex || hex.length == 0) return nil;
    NSString *clean = [hex stringByReplacingOccurrencesOfString:@"#" withString:@""];
    if (clean.length < 6) return nil;
    unsigned int r = 0, g = 0, b = 0, a = 255;
    [[NSScanner scannerWithString:[clean substringWithRange:NSMakeRange(0, 2)]] scanHexInt:&r];
    [[NSScanner scannerWithString:[clean substringWithRange:NSMakeRange(2, 2)]] scanHexInt:&g];
    [[NSScanner scannerWithString:[clean substringWithRange:NSMakeRange(4, 2)]] scanHexInt:&b];
    if (clean.length >= 8) {
        [[NSScanner scannerWithString:[clean substringWithRange:NSMakeRange(6, 2)]] scanHexInt:&a];
    }
    return [UIColor colorWithRed:r / 255.0 green:g / 255.0 blue:b / 255.0 alpha:a / 255.0];
}

static UIColor *WPLoadDynamicColor(NSString *lightKey, NSString *darkKey, BOOL isDark) {
    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];
    NSString *hex = nil;
    if (isDark) {
        hex = [d stringForKey:darkKey];
    }
    if (!hex || hex.length == 0) {
        hex = [d stringForKey:lightKey];
    }
    if (hex && hex.length > 0) {
        return WPColorFromHex(hex);
    }
    return nil;
}

@interface ListCornerRadiusHook ()

+ (void)wp_applyStandardCorner:(UIView *)cell
                     tableView:(UITableView *)tableView
                     indexPath:(NSIndexPath *)indexPath
                       section:(NSInteger)section
                           row:(NSInteger)row
                         total:(NSInteger)totalRows
                  cornerRadius:(NSInteger)configuredRadius
                     isFTSHome:(BOOL)isFTSHome
                     className:(NSString *)className;

+ (void)wp_applyCornerForContacts:(UIView *)cell
                        tableView:(UITableView *)tableView
                        indexPath:(NSIndexPath *)indexPath
                          section:(NSInteger)section
                              row:(NSInteger)row
                            total:(NSInteger)rowInThisSection
                     cornerRadius:(NSInteger)radius
                         isFTSHome:(BOOL)isFTSHome;

+ (void)wp_applyBorderAndBg:(UIView *)cell
                     radius:(NSInteger)radius
                   position:(NSInteger)position
                  isFTSHome:(BOOL)isFTSHome;

+ (UIView *)wp_findFoldViewInSubviews:(NSArray<UIView *> *)subviews;

+ (CAShapeLayer *)wp_buildTopBorderPath:(CGRect)rect
                            borderWidth:(CGFloat)borderWidth
                            borderColor:(UIColor *)borderColor
                                 radius:(CGFloat)radius;

+ (CAShapeLayer *)wp_buildBottomBorderPath:(CGRect)rect
                               borderWidth:(CGFloat)borderWidth
                               borderColor:(UIColor *)borderColor
                                    radius:(CGFloat)radius;

+ (CAShapeLayer *)wp_buildSideLinePath:(CGRect)rect
                           borderWidth:(CGFloat)borderWidth
                           borderColor:(UIColor *)borderColor
                                  side:(NSString *)side;

@end

static void replaced_MMTableViewCell_layoutSubviews(id self, SEL _cmd) {
    if (_orig_MMTableViewCell_layoutSubviews) {
        ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews)(self, _cmd);
    }

    PluginConfig *config = [PluginConfig shared];
    if (!config.listCornerRadiusEnabled) return;

    UIViewController *vc = findParentViewController((UIView *)self);
    if (!vc) return;
    NSString *className = NSStringFromClass([vc class]);

    BOOL isDark = NO;
    if (@available(iOS 13.0, *)) {
        isDark = (vc.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark);
    }

    static NSSet *bgSkipList = nil;
    static dispatch_once_t onceBgToken;
    dispatch_once(&onceBgToken, ^{
        bgSkipList = [NSSet setWithObjects:
            @"WCTimeLineViewController",
            @"WCAccountLoginUsersViewController",
            @"SessionSelectController",
            @"WCListViewController",
            @"BrandNotificationListViewController",
            @"BrandNewSessionViewController",
            @"BaseMsgContentViewController",
            @"BraceletRankProfileViewController",
            @"BraceletRankViewController",
            @"WCRedEnvelopesRedEnvelopesDetailViewController",
            @"MsgRecordDetailViewController",
            @"ChatRoomInfoViewController",
            @"ContactInfoViewController",
            @"AddFriendEntryViewController",
            @"AddContactToChatRoomViewController",
            @"SayHelloViewController",
            @"FTSHomeViewController",
            @"MMFinderPivotLiveViewController",
            @"WCSearchController",
            nil];
    });

    if (![bgSkipList containsObject:className]) {
        ((UIView *)self).backgroundColor = WPCellDefaultBackgroundColor(isDark);
    }

    BOOL isFTSHome = [className isEqualToString:@"FTSHomeViewController"];

    static NSSet *cornerExcludeList = nil;
    static dispatch_once_t onceCornerToken;
    dispatch_once(&onceCornerToken, ^{
        cornerExcludeList = [NSSet setWithObjects:
            @"WCTimeLineViewController",
            @"WCAccountLoginUsersViewController",
            @"SessionSelectController",
            @"WCListViewController",
            @"BrandNotificationListViewController",
            @"BrandNewSessionViewController",
            @"BaseMsgContentViewController",
            @"BraceletRankProfileViewController",
            @"BraceletRankViewController",
            @"WCRedEnvelopesRedEnvelopesDetailViewController",
            @"MsgRecordDetailViewController",
            @"ChatRoomInfoViewController",
            @"ContactInfoViewController",
            @"AddFriendEntryViewController",
            @"AddContactToChatRoomViewController",
            @"SayHelloViewController",
            @"MMFinderPivotLiveViewController",
            @"WCSearchController",
            nil];
    });

    if ([cornerExcludeList containsObject:className]) {
        return;
    }

    NSInteger cornerRadius = (NSInteger)config.listCellCornerRadius;
    if (cornerRadius == 0) cornerRadius = 18;

    CGFloat screenWidth = [UIScreen mainScreen].bounds.size.width;

    NSInteger margin = (NSInteger)config.listCellMargin;
    if (margin == 0) margin = 9;

    BOOL isContacts = [className isEqualToString:@"ContactsViewController"];

    UIView *cellView = (UIView *)self;
    CGFloat currentOriginX = cellView.frame.origin.x;
    UIView *superview = cellView.superview;
    CGFloat superviewOriginX = superview ? superview.frame.origin.x : 0;
    CGFloat targetX = (margin > superviewOriginX) ? margin - superviewOriginX : 0;

    if (currentOriginX - 2.0 * margin <= screenWidth) {
        CGRect frame = cellView.frame;
        frame.origin.x = targetX;
        cellView.frame = frame;
    }

    UIView *parent = cellView.superview;
    UITableView *tableView = nil;
    while (parent) {
        if ([parent isKindOfClass:[UITableView class]]) {
            tableView = (UITableView *)parent;
            break;
        }
        parent = parent.superview;
    }
    if (!tableView) return;

    NSIndexPath *indexPath = [tableView indexPathForCell:(UITableViewCell *)self];
    if (!indexPath) return;

    NSInteger section = indexPath.section;
    NSInteger row = indexPath.row;
    NSInteger totalRows = [tableView numberOfRowsInSection:section];

    if (isContacts) {
        [ListCornerRadiusHook wp_applyCornerForContacts:cellView
                                             tableView:tableView
                                             indexPath:indexPath
                                               section:section
                                                   row:row
                                                 total:totalRows
                                          cornerRadius:cornerRadius
                                              isFTSHome:isFTSHome];
    } else {
        [ListCornerRadiusHook wp_applyStandardCorner:cellView
                                          tableView:tableView
                                          indexPath:indexPath
                                            section:section
                                                row:row
                                              total:totalRows
                                       cornerRadius:cornerRadius
                                          isFTSHome:isFTSHome
                                          className:className];
    }

    cellView.layer.masksToBounds = YES;
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

+ (void)wp_applyStandardCorner:(UIView *)cell
                     tableView:(UITableView *)tableView
                     indexPath:(NSIndexPath *)indexPath
                       section:(NSInteger)section
                           row:(NSInteger)row
                         total:(NSInteger)totalRows
                  cornerRadius:(NSInteger)configuredRadius
                     isFTSHome:(BOOL)isFTSHome
                     className:(NSString *)className {

    BOOL isNewMainFrame = [className isEqualToString:@"NewMainFrameViewController"];
    NSInteger indexSection = indexPath.section;

    if (totalRows == 1) {
        cell.layer.cornerRadius = configuredRadius;
        cell.layer.maskedCorners = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner
                                 | kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
        [self wp_applyBorderAndBg:cell radius:configuredRadius position:0 isFTSHome:isFTSHome];

    } else if (row == 0) {
        cell.layer.cornerRadius = configuredRadius;
        cell.layer.maskedCorners = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner;
        [self wp_applyBorderAndBg:cell radius:configuredRadius position:1 isFTSHome:isFTSHome];

    } else if (row == totalRows - 1) {
        if (isNewMainFrame && indexSection == 1) {
            UIView *foldView = [self wp_findFoldViewInSubviews:cell.subviews];
            if (foldView && [foldView respondsToSelector:@selector(isFolding)]) {
                NSNumber *folding = ((id (*)(id, SEL))objc_msgSend)(foldView, @selector(isFolding));
                if (folding && ![folding boolValue]) {
                    cell.layer.cornerRadius = 0;
                    cell.layer.maskedCorners = 0;
                    [self wp_applyBorderAndBg:cell radius:0 position:2 isFTSHome:isFTSHome];
                    return;
                }
            }
        }

        cell.layer.cornerRadius = configuredRadius;
        cell.layer.maskedCorners = kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
        [self wp_applyBorderAndBg:cell radius:configuredRadius position:3 isFTSHome:isFTSHome];

    } else {
        cell.layer.cornerRadius = 0;
        cell.layer.maskedCorners = 0;
        [self wp_applyBorderAndBg:cell radius:0 position:2 isFTSHome:isFTSHome];
    }
}

+ (void)wp_applyCornerForContacts:(UIView *)cell
                        tableView:(UITableView *)tableView
                        indexPath:(NSIndexPath *)indexPath
                          section:(NSInteger)section
                              row:(NSInteger)row
                            total:(NSInteger)rowInThisSection
                     cornerRadius:(NSInteger)radius
                         isFTSHome:(BOOL)isFTSHome {

    NSMutableArray<NSNumber *> *sectionRowCounts = [NSMutableArray array];
    NSInteger sectionCount = [tableView numberOfSections];
    NSInteger maxSections = MIN(sectionCount, 4);
    for (NSInteger i = 0; i < maxSections; i++) {
        NSInteger rows = [tableView numberOfRowsInSection:i];
        [sectionRowCounts addObject:@(rows)];
    }

    NSInteger firstNonEmptySection = -1;
    for (NSInteger i = 0; i < (NSInteger)sectionRowCounts.count; i++) {
        if ([sectionRowCounts[i] integerValue] > 0) {
            firstNonEmptySection = i;
            break;
        }
    }

    NSInteger lastNonEmptySection = -1;
    for (NSInteger i = (NSInteger)sectionRowCounts.count - 1; i >= 0; i--) {
        if ([sectionRowCounts[i] integerValue] > 0) {
            lastNonEmptySection = i;
            break;
        }
    }

    NSInteger sectionCount_effective = (NSInteger)sectionRowCounts.count;
    NSInteger firstSectionFirstRowCount = (firstNonEmptySection >= 0)
        ? [sectionRowCounts[firstNonEmptySection] integerValue] : 0;

    if (sectionCount_effective == 1 && firstSectionFirstRowCount == 1) {
        cell.layer.cornerRadius = radius;
        cell.layer.maskedCorners = (kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner
                                  | kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner);
        [self wp_applyBorderAndBg:cell radius:radius position:0 isFTSHome:isFTSHome];
    } else if (section == firstNonEmptySection && row == 0) {
        cell.layer.cornerRadius = radius;
        cell.layer.maskedCorners = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner;
        [self wp_applyBorderAndBg:cell radius:radius position:1 isFTSHome:isFTSHome];
    } else if (section == lastNonEmptySection
               && row == [sectionRowCounts[lastNonEmptySection] integerValue] - 1) {
        cell.layer.cornerRadius = radius;
        cell.layer.maskedCorners = kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
        [self wp_applyBorderAndBg:cell radius:radius position:3 isFTSHome:isFTSHome];
    } else {
        cell.layer.cornerRadius = 0;
        cell.layer.maskedCorners = 0;
        [self wp_applyBorderAndBg:cell radius:0 position:2 isFTSHome:isFTSHome];
    }
}

+ (void)wp_applyBorderAndBg:(UIView *)cell
                     radius:(NSInteger)radius
                   position:(NSInteger)position
                  isFTSHome:(BOOL)isFTSHome {

    PluginConfig *config = [PluginConfig shared];
    if (!config.listCellBorder || isFTSHome) {
        return;
    }

    CGFloat borderWidth = config.listCellBorderWidth;
    if (borderWidth == 0) borderWidth = 2.0;

    BOOL isDark = config.isDarkMode;

    UIColor *borderColor = [config colorFromHex:isDark ? config.listCellBorderDarkColor : config.listCellBorderLightColor];
    if (!borderColor) {
        borderColor = isDark
            ? [UIColor colorWithRed:0.25 green:0.25 blue:0.25 alpha:1.0]
            : [UIColor colorWithRed:0.9 green:0.9 blue:0.9 alpha:1.0];
    }

    UIColor *bgColor = [config colorFromHex:isDark ? config.listCellDarkBgColor : config.listCellLightBgColor];
    if (bgColor) {
        cell.backgroundColor = bgColor;
    }

    NSArray *sublayers = [cell.layer.sublayers copy];
    for (CALayer *layer in sublayers) {
        if ([layer.name isEqualToString:@"com.mio.cornerBorder"]) {
            [layer removeFromSuperlayer];
        }
    }

    switch (position) {
        case 0: {
            cell.layer.borderColor = borderColor.CGColor;
            cell.layer.borderWidth = borderWidth;
            break;
        }
        case 1: {
            CAShapeLayer *shape = [self wp_buildTopBorderPath:cell.bounds
                                                  borderWidth:borderWidth
                                                  borderColor:borderColor
                                                       radius:radius];
            shape.name = @"com.mio.cornerBorder";
            [cell.layer addSublayer:shape];
            break;
        }
        case 2: {
            CAShapeLayer *left = [self wp_buildSideLinePath:cell.bounds
                                                borderWidth:borderWidth
                                                borderColor:borderColor
                                                       side:@"left"];
            CAShapeLayer *right = [self wp_buildSideLinePath:cell.bounds
                                                 borderWidth:borderWidth
                                                 borderColor:borderColor
                                                        side:@"right"];
            left.name = @"com.mio.cornerBorder";
            right.name = @"com.mio.cornerBorder";
            [cell.layer addSublayer:left];
            [cell.layer addSublayer:right];
            break;
        }
        case 3: {
            CAShapeLayer *shape = [self wp_buildBottomBorderPath:cell.bounds
                                                     borderWidth:borderWidth
                                                     borderColor:borderColor
                                                          radius:radius];
            shape.name = @"com.mio.cornerBorder";
            [cell.layer addSublayer:shape];
            break;
        }
    }
}

+ (UIView *)wp_findFoldViewInSubviews:(NSArray<UIView *> *)subviews {
    for (UIView *subview in subviews) {
        if ([NSStringFromClass([subview class]) containsString:@"MainFrameSectionFoldView"]) {
            return subview;
        }
        UIView *found = [self wp_findFoldViewInSubviews:subview.subviews];
        if (found) return found;
    }
    return nil;
}

+ (CAShapeLayer *)wp_buildTopBorderPath:(CGRect)rect
                            borderWidth:(CGFloat)borderWidth
                            borderColor:(UIColor *)borderColor
                                 radius:(CGFloat)radius {
    CAShapeLayer *shape = [CAShapeLayer layer];
    shape.fillColor = [UIColor clearColor].CGColor;
    shape.strokeColor = borderColor.CGColor;
    shape.lineWidth = borderWidth;
    shape.lineJoin = kCALineJoinRound;

    CGFloat hw = borderWidth / 2.0;
    CGFloat w = rect.size.width;
    CGFloat h = rect.size.height;

    UIBezierPath *path = [UIBezierPath bezierPath];
    [path moveToPoint:CGPointMake(hw, h)];
    [path addLineToPoint:CGPointMake(hw, radius)];
    [path addArcWithCenter:CGPointMake(hw + radius, radius)
                    radius:radius
                startAngle:M_PI
                  endAngle:M_PI * 1.5
                 clockwise:YES];
    [path addArcWithCenter:CGPointMake(w - hw - radius, radius)
                    radius:radius
                startAngle:M_PI * 1.5
                  endAngle:0
                 clockwise:YES];
    [path addLineToPoint:CGPointMake(w - hw, h)];
    shape.path = path.CGPath;
    return shape;
}

+ (CAShapeLayer *)wp_buildBottomBorderPath:(CGRect)rect
                               borderWidth:(CGFloat)borderWidth
                               borderColor:(UIColor *)borderColor
                                    radius:(CGFloat)radius {
    CAShapeLayer *shape = [CAShapeLayer layer];
    shape.fillColor = [UIColor clearColor].CGColor;
    shape.strokeColor = borderColor.CGColor;
    shape.lineWidth = borderWidth;
    shape.lineJoin = kCALineJoinRound;

    CGFloat hw = borderWidth / 2.0;
    CGFloat w = rect.size.width;
    CGFloat h = rect.size.height;

    UIBezierPath *path = [UIBezierPath bezierPath];
    [path moveToPoint:CGPointMake(hw, 0)];
    [path addLineToPoint:CGPointMake(hw, h - radius)];
    [path addArcWithCenter:CGPointMake(hw + radius, h - radius)
                    radius:radius
                startAngle:M_PI
                  endAngle:M_PI * 0.5
                 clockwise:NO];
    [path addArcWithCenter:CGPointMake(w - hw - radius, h - radius)
                    radius:radius
                startAngle:M_PI * 0.5
                  endAngle:0
                 clockwise:NO];
    [path addLineToPoint:CGPointMake(w - hw, 0)];
    shape.path = path.CGPath;
    return shape;
}

+ (CAShapeLayer *)wp_buildSideLinePath:(CGRect)rect
                           borderWidth:(CGFloat)borderWidth
                           borderColor:(UIColor *)borderColor
                                  side:(NSString *)side {
    CAShapeLayer *shape = [CAShapeLayer layer];
    shape.fillColor = [UIColor clearColor].CGColor;
    shape.strokeColor = borderColor.CGColor;
    shape.lineWidth = borderWidth;
    shape.lineJoin = kCALineJoinRound;

    CGFloat hw = borderWidth / 2.0;
    CGFloat w = rect.size.width;
    CGFloat h = rect.size.height;

    UIBezierPath *path = [UIBezierPath bezierPath];
    if ([side isEqualToString:@"left"]) {
        [path moveToPoint:CGPointMake(hw, 0)];
        [path addLineToPoint:CGPointMake(hw, h)];
    } else {
        [path moveToPoint:CGPointMake(w - hw, 0)];
        [path addLineToPoint:CGPointMake(w - hw, h)];
    }
    shape.path = path.CGPath;
    return shape;
}

@end