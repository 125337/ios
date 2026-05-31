#import "ListCornerRadiusHook.h"
#import "../../Config/PluginConfig.h"
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

static UIColor *wp_cellDefaultBgColor(BOOL isDark) {
    if (@available(iOS 13.0, *)) {
        if (isDark) {
            return [UIColor colorWithRed:0.125 green:0.125 blue:0.125 alpha:1.0];
        }
    }
    return [UIColor whiteColor];
}

static void replaced_MMTableViewCell_layoutSubviews(id self, SEL _cmd) {
    PluginConfig *config = [PluginConfig shared];
    if (!config.listCornerRadiusEnabled) {
        if (_orig_MMTableViewCell_layoutSubviews) {
            ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews)(self, _cmd);
        }
        return;
    }

    UIViewController *vc = findParentViewController((UIView *)self);
    if (!vc) {
        if (_orig_MMTableViewCell_layoutSubviews) {
            ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews)(self, _cmd);
        }
        return;
    }
    NSString *className = NSStringFromClass([vc class]);

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
        if (_orig_MMTableViewCell_layoutSubviews) {
            ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews)(self, _cmd);
        }
        return;
    }

    if (_orig_MMTableViewCell_layoutSubviews) {
        ((void (*)(id, SEL))_orig_MMTableViewCell_layoutSubviews)(self, _cmd);
    }

    NSInteger margin = (NSInteger)config.listCellMargin;
    if (margin == 0) margin = 9;

    UIView *cellView = (UIView *)self;
    UIView *superview = cellView.superview;

    CGFloat newWidth = superview.bounds.size.width - 2.0 * margin;
    if (newWidth > 0) {
        CGRect frame = cellView.frame;
        if (frame.origin.x != margin || frame.size.width != newWidth) {
            frame.origin.x = margin;
            frame.size.width = newWidth;
            cellView.frame = frame;
        }
    }

    BOOL isDark = NO;
    if (@available(iOS 13.0, *)) {
        isDark = (vc.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark);
    }
    UIColor *customBg = [config colorFromHex:isDark
        ? config.listCellDarkBgColor : config.listCellLightBgColor];
    ((UIView *)self).backgroundColor = customBg ?: wp_cellDefaultBgColor(isDark);

    NSInteger cornerRadius = (NSInteger)config.listCellCornerRadius;
    if (cornerRadius == 0) cornerRadius = 18;

    BOOL isContacts = [className isEqualToString:@"ContactsViewController"];
    BOOL isFTSHome = [className isEqualToString:@"FTSHomeViewController"];

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

    if (cellView.layer.cornerRadius > 0) {
        cellView.layer.masksToBounds = YES;
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
        return;
    }

    if (row == 0) {
        cell.layer.cornerRadius = configuredRadius;
        cell.layer.maskedCorners = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner;
        [self wp_applyBorderAndBg:cell radius:configuredRadius position:1 isFTSHome:isFTSHome];
        return;
    }

    if (row != totalRows - 1) {
        cell.layer.cornerRadius = 0;
        cell.layer.maskedCorners = 0;
        [self wp_applyBorderAndBg:cell radius:0 position:2 isFTSHome:isFTSHome];
        return;
    }

    if (isNewMainFrame && indexSection == 1) {
        UIView *foldView = [self wp_findFoldViewInSubviews:tableView.subviews];
        if (foldView) {
            if ([foldView respondsToSelector:@selector(isFolding)]) {
                BOOL folding = ((BOOL (*)(id, SEL))objc_msgSend)(foldView, @selector(isFolding));
                if (!folding) {
                    cell.layer.cornerRadius = 0;
                    cell.layer.maskedCorners = 0;
                    [self wp_applyBorderAndBg:cell radius:0 position:2 isFTSHome:isFTSHome];
                    return;
                }
            }
        }
    }

    cell.layer.cornerRadius = configuredRadius;
    cell.layer.maskedCorners = kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner;
    [self wp_applyBorderAndBg:cell radius:configuredRadius position:3 isFTSHome:isFTSHome];
}

+ (void)wp_applyCornerForContacts:(UIView *)cell
                        tableView:(UITableView *)tableView
                        indexPath:(NSIndexPath *)indexPath
                          section:(NSInteger)section
                              row:(NSInteger)row
                            total:(NSInteger)rowInThisSection
                     cornerRadius:(NSInteger)radius
                         isFTSHome:(BOOL)isFTSHome {

    if (section > 3) {
        [self wp_applyStandardCornerPerSection:cell
                                            row:row
                                          total:rowInThisSection
                                   cornerRadius:radius
                                      isFTSHome:isFTSHome];
        return;
    }

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

+ (void)wp_applyStandardCornerPerSection:(UIView *)cell
                                     row:(NSInteger)row
                                   total:(NSInteger)totalRows
                            cornerRadius:(NSInteger)radius
                               isFTSHome:(BOOL)isFTSHome {
    if (totalRows == 1) {
        cell.layer.cornerRadius = radius;
        cell.layer.maskedCorners = (kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner
                                  | kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner);
        [self wp_applyBorderAndBg:cell radius:radius position:0 isFTSHome:isFTSHome];
    } else if (row == 0) {
        cell.layer.cornerRadius = radius;
        cell.layer.maskedCorners = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner;
        [self wp_applyBorderAndBg:cell radius:radius position:1 isFTSHome:isFTSHome];
    } else if (row == totalRows - 1) {
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

+ (void)applyBorderToView:(UIView *)view radius:(NSInteger)radius position:(NSInteger)position isFTSHome:(BOOL)isFTSHome {
    [self wp_applyBorderAndBg:view radius:radius position:position isFTSHome:isFTSHome];
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