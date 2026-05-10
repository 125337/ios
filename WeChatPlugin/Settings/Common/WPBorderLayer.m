#import "WPBorderLayer.h"
#import "../../Config/WPColors.h"
#import <objc/runtime.h>

#pragma mark - WPBorderLayer

@implementation WPBorderLayer

@dynamic borderWidth, cornerRadius;

+ (instancetype)mainBorderLayerWithWidth:(CGFloat)width
                          borderColorLight:(UIColor *)lightColor
                           borderColorDark:(UIColor *)darkColor
                             cornerRadius:(CGFloat)radius {
    WPBorderLayer *layer = [[WPBorderLayer alloc] init];
    layer.sides = WPBorderSideAll;
    layer.borderWidth = width;
    layer.borderColorLight = lightColor;
    layer.borderColorDark = darkColor;
    layer.cornerRadius = radius;
    layer.leftInset = 0;
    layer.hasBorder = YES;
    layer.fillColor = [UIColor clearColor].CGColor;
    layer.lineWidth = width;
    layer.strokeColor = lightColor.CGColor;
    layer.lineJoin = kCALineJoinRound;
    layer.masksToBounds = NO;
    return layer;
}

+ (instancetype)leftBorderLayerWithWidth:(CGFloat)width
                         borderColorLight:(UIColor *)lightColor
                          borderColorDark:(UIColor *)darkColor {
    WPBorderLayer *layer = [[WPBorderLayer alloc] init];
    layer.sides = WPBorderSideLeft;
    layer.borderWidth = width;
    layer.borderColorLight = lightColor;
    layer.borderColorDark = darkColor;
    layer.cornerRadius = 0;
    layer.leftInset = 0;
    layer.hasBorder = YES;
    layer.fillColor = [UIColor clearColor].CGColor;
    layer.lineWidth = width;
    layer.strokeColor = lightColor.CGColor;
    return layer;
}

+ (instancetype)rightBorderLayerWithWidth:(CGFloat)width
                          borderColorLight:(UIColor *)lightColor
                           borderColorDark:(UIColor *)darkColor {
    WPBorderLayer *layer = [[WPBorderLayer alloc] init];
    layer.sides = WPBorderSideRight;
    layer.borderWidth = width;
    layer.borderColorLight = lightColor;
    layer.borderColorDark = darkColor;
    layer.cornerRadius = 0;
    layer.leftInset = 0;
    layer.hasBorder = YES;
    layer.fillColor = [UIColor clearColor].CGColor;
    layer.lineWidth = width;
    layer.strokeColor = lightColor.CGColor;
    return layer;
}

+ (instancetype)bottomBorderLayerWithWidth:(CGFloat)width
                           borderColorLight:(UIColor *)lightColor
                            borderColorDark:(UIColor *)darkColor
                                 leftInset:(CGFloat)inset {
    WPBorderLayer *layer = [[WPBorderLayer alloc] init];
    layer.sides = WPBorderSideBottom;
    layer.borderWidth = width;
    layer.borderColorLight = lightColor;
    layer.borderColorDark = darkColor;
    layer.cornerRadius = 0;
    layer.leftInset = inset;
    layer.hasBorder = YES;
    layer.fillColor = [UIColor clearColor].CGColor;
    layer.lineWidth = width;
    layer.strokeColor = lightColor.CGColor;
    return layer;
}

+ (instancetype)separatorLayerWithLeftInset:(CGFloat)inset {
    return [self bottomBorderLayerWithWidth:0.5
                            borderColorLight:WPSeparatorColor()
                             borderColorDark:WPSeparatorColorDark()
                                  leftInset:inset];
}

- (void)updatePathInRect:(CGRect)rect {
    CGFloat hw = self.borderWidth / 2.0;
    UIBezierPath *path = [UIBezierPath bezierPath];

    if (self.sides == WPBorderSideAll && self.cornerRadius > 0) {
        path = [UIBezierPath bezierPathWithRoundedRect:CGRectInset(rect, hw, hw)
                                         cornerRadius:self.cornerRadius];
    } else {
        if (self.sides & WPBorderSideTop) {
            [path moveToPoint:CGPointMake(rect.origin.x, rect.origin.y + hw)];
            [path addLineToPoint:CGPointMake(CGRectGetMaxX(rect), rect.origin.y + hw)];
        }
        if (self.sides & WPBorderSideLeft) {
            [path moveToPoint:CGPointMake(rect.origin.x + hw, rect.origin.y)];
            [path addLineToPoint:CGPointMake(rect.origin.x + hw, CGRectGetMaxY(rect))];
        }
        if (self.sides & WPBorderSideBottom) {
            CGFloat startX = rect.origin.x + self.leftInset;
            [path moveToPoint:CGPointMake(startX, CGRectGetMaxY(rect) - hw)];
            [path addLineToPoint:CGPointMake(CGRectGetMaxX(rect), CGRectGetMaxY(rect) - hw)];
        }
        if (self.sides & WPBorderSideRight) {
            [path moveToPoint:CGPointMake(CGRectGetMaxX(rect) - hw, rect.origin.y)];
            [path addLineToPoint:CGPointMake(CGRectGetMaxX(rect) - hw, CGRectGetMaxY(rect))];
        }
    }

    self.path = path.CGPath;
}

- (void)updateAppearanceForDarkMode:(BOOL)isDark {
    UIColor *color = isDark ? self.borderColorDark : self.borderColorLight;
    self.strokeColor = color.CGColor;
    self.onBorderLayer.strokeColor = color.CGColor;
    self.offBorderLayer.strokeColor = color.CGColor;
}

- (void)setBorderEnabled:(BOOL)enabled animated:(BOOL)animated {
    self.hasBorder = enabled;
    if (animated) {
        CABasicAnimation *anim = [CABasicAnimation animationWithKeyPath:@"opacity"];
        anim.fromValue = @(enabled ? 0.0 : 1.0);
        anim.toValue = @(enabled ? 1.0 : 0.0);
        anim.duration = 0.25;
        [self addAnimation:anim forKey:@"opacityAnimation"];
    }
    self.opacity = enabled ? 1.0 : 0.0;
}

- (void)setupDualStateLayers {
    if (!self.onBorderLayer) {
        self.onBorderLayer = [CAShapeLayer layer];
        self.onBorderLayer.fillColor = [UIColor clearColor].CGColor;
        self.onBorderLayer.lineWidth = self.borderWidth;
        self.onBorderLayer.strokeColor = self.borderColorLight.CGColor;
        [self addSublayer:self.onBorderLayer];
    }
    if (!self.offBorderLayer) {
        self.offBorderLayer = [CAShapeLayer layer];
        self.offBorderLayer.fillColor = [UIColor clearColor].CGColor;
        self.offBorderLayer.lineWidth = self.borderWidth;
        self.offBorderLayer.strokeColor = self.borderColorLight.CGColor;
        self.offBorderLayer.opacity = 0.0;
        [self addSublayer:self.offBorderLayer];
    }
}

@end

#pragma mark - WPSectionBorderShape

@implementation WPSectionBorderShape

+ (instancetype)shapeWithCornerRadius:(CGFloat)radius
                          borderWidth:(CGFloat)width
                      borderColorLight:(UIColor *)lightColor
                       borderColorDark:(UIColor *)darkColor {
    WPSectionBorderShape *shape = [[WPSectionBorderShape alloc] init];
    shape.cornerRadius = radius;
    shape.borderWidth = width;
    shape.borderColorLight = lightColor;
    shape.borderColorDark = darkColor;
    shape.visibleSides = WPBorderSideAll;
    shape.roundedCorners = UIRectCornerAllCorners;
    return shape;
}

+ (instancetype)cardShape {
    UIColor *light = [UIColor colorWithWhite:0.85 alpha:0.3];
    UIColor *dark = [UIColor colorWithWhite:0.3 alpha:0.3];
    return [self shapeWithCornerRadius:10.0 borderWidth:0.5 borderColorLight:light borderColorDark:dark];
}

+ (instancetype)groupShape {
    UIColor *light = [UIColor colorWithWhite:0.85 alpha:0.25];
    UIColor *dark = [UIColor colorWithWhite:0.35 alpha:0.25];
    return [self shapeWithCornerRadius:12.0 borderWidth:0.5 borderColorLight:light borderColorDark:dark];
}

+ (instancetype)cellShape {
    return [self shapeWithCornerRadius:0 borderWidth:0.5 borderColorLight:WPSeparatorColor() borderColorDark:WPSeparatorColorDark()];
}

- (NSArray<WPBorderLayer *> *)createBorderLayersForRect:(CGRect)rect {
    NSMutableArray<WPBorderLayer *> *layers = [NSMutableArray array];
    
    if (self.visibleSides == WPBorderSideAll) {
        WPBorderLayer *mainLayer = [WPBorderLayer mainBorderLayerWithWidth:self.borderWidth
                                                           borderColorLight:self.borderColorLight
                                                            borderColorDark:self.borderColorDark
                                                              cornerRadius:self.cornerRadius];
        mainLayer.frame = rect;
        [mainLayer updatePathInRect:rect];
        [layers addObject:mainLayer];
    } else {
        if (self.visibleSides & WPBorderSideTop) {
            WPBorderLayer *top = [WPBorderLayer bottomBorderLayerWithWidth:self.borderWidth
                                                           borderColorLight:self.borderColorLight
                                                            borderColorDark:self.borderColorDark
                                                                 leftInset:0];
            top.sides = WPBorderSideTop;
            top.frame = rect;
            [top updatePathInRect:rect];
            [layers addObject:top];
        }
        if (self.visibleSides & WPBorderSideLeft) {
            WPBorderLayer *left = [WPBorderLayer leftBorderLayerWithWidth:self.borderWidth
                                                         borderColorLight:self.borderColorLight
                                                          borderColorDark:self.borderColorDark];
            left.frame = rect;
            [left updatePathInRect:rect];
            [layers addObject:left];
        }
        if (self.visibleSides & WPBorderSideBottom) {
            WPBorderLayer *bottom = [WPBorderLayer bottomBorderLayerWithWidth:self.borderWidth
                                                             borderColorLight:self.borderColorLight
                                                              borderColorDark:self.borderColorDark
                                                                   leftInset:0];
            bottom.frame = rect;
            [bottom updatePathInRect:rect];
            [layers addObject:bottom];
        }
        if (self.visibleSides & WPBorderSideRight) {
            WPBorderLayer *right = [WPBorderLayer rightBorderLayerWithWidth:self.borderWidth
                                                           borderColorLight:self.borderColorLight
                                                            borderColorDark:self.borderColorDark];
            right.frame = rect;
            [right updatePathInRect:rect];
            [layers addObject:right];
        }
    }
    
    return [layers copy];
}

@end

#pragma mark - WPSeparatorConfiguration

@implementation WPSeparatorConfiguration

+ (instancetype)defaultConfiguration {
    WPSeparatorConfiguration *config = [[WPSeparatorConfiguration alloc] init];
    config.separatorType = WPSeparatorTypeNone;
    config.separatorSize = 0.5;
    config.leftInset = 16.0;
    config.tapToSettings = NO;
    config.separatorColorLight = WPSeparatorColor();
    config.separatorColorDark = WPSeparatorColorDark();
    return config;
}

+ (instancetype)imageConfigurationWithImage:(UIImage *)image size:(CGFloat)size {
    WPSeparatorConfiguration *config = [self defaultConfiguration];
    config.separatorType = WPSeparatorTypeImage;
    config.separatorImage = image;
    config.separatorSize = size;
    return config;
}

+ (instancetype)textConfigurationWithText:(NSString *)text size:(CGFloat)size {
    WPSeparatorConfiguration *config = [self defaultConfiguration];
    config.separatorType = WPSeparatorTypeText;
    config.separatorText = text;
    config.separatorSize = size;
    return config;
}

@end

#pragma mark - WPModuleBorderConfig

@implementation WPModuleBorderConfig

+ (instancetype)configForModule:(NSString *)name
                    cornerRadius:(CGFloat)radius
                     borderWidth:(CGFloat)width
                 borderColorLight:(UIColor *)lightColor
                  borderColorDark:(UIColor *)darkColor {
    WPModuleBorderConfig *config = [[WPModuleBorderConfig alloc] init];
    config.moduleName = name;
    config.cornerRadius = radius;
    config.borderWidth = width;
    config.borderColorLight = lightColor;
    config.borderColorDark = darkColor;
    config.borderEnabled = YES;
    return config;
}

@end

#pragma mark - WPBorderManager

@implementation WPBorderManager

+ (instancetype)sharedManager {
    static WPBorderManager *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[WPBorderManager alloc] init];
    });
    return instance;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _moduleConfigs = [NSMutableDictionary dictionary];
        _separatorConfig = [WPSeparatorConfiguration defaultConfiguration];
        [self setupDefaultModules];
    }
    return self;
}

- (void)setupDefaultModules {
    UIColor *cardLight = [UIColor colorWithWhite:0.85 alpha:0.3];
    UIColor *cardDark = [UIColor colorWithWhite:0.3 alpha:0.3];
    
    [self registerModule:@"Card" config:[WPModuleBorderConfig configForModule:@"Card"
                                                                 cornerRadius:10.0
                                                                  borderWidth:0.5
                                                              borderColorLight:cardLight
                                                               borderColorDark:cardDark]];
    
    [self registerModule:@"Group" config:[WPModuleBorderConfig configForModule:@"Group"
                                                                 cornerRadius:12.0
                                                                  borderWidth:0.5
                                                              borderColorLight:cardLight
                                                               borderColorDark:cardDark]];
    
    [self registerModule:@"Separator" config:[WPModuleBorderConfig configForModule:@"Separator"
                                                                      cornerRadius:0
                                                                       borderWidth:0.5
                                                                   borderColorLight:WPSeparatorColor()
                                                                    borderColorDark:WPSeparatorColorDark()]];
    
    UIColor *previewLight = [UIColor colorWithWhite:0.85 alpha:0.5];
    UIColor *previewDark = [UIColor colorWithWhite:0.4 alpha:0.5];
    [self registerModule:@"ColorPreview" config:[WPModuleBorderConfig configForModule:@"ColorPreview"
                                                                          cornerRadius:6.0
                                                                           borderWidth:0.5
                                                                       borderColorLight:previewLight
                                                                        borderColorDark:previewDark]];
}

- (WPModuleBorderConfig *)configForModule:(NSString *)name {
    return self.moduleConfigs[name] ?: self.moduleConfigs[@"Card"];
}

- (void)registerModule:(NSString *)name config:(WPModuleBorderConfig *)config {
    self.moduleConfigs[name] = config;
}

- (void)setSeparatorConfig:(WPSeparatorConfiguration *)config {
    _separatorConfig = config;
}

- (void)updateAllBordersForDarkMode:(BOOL)isDark {
    [[NSNotificationCenter defaultCenter] postNotificationName:@"WPBorderAppearanceDidChange"
                                                      object:nil
                                                    userInfo:@{@"isDark": @(isDark)}];
}

@end

#pragma mark - UIView (WPBorder)

static NSString *const kWPBorderLayersKey = @"wp_borderLayers";
static NSString *const kWPHasBorderKey = @"wp_hasBorder";

@implementation UIView (WPBorder)

- (NSMutableArray<WPBorderLayer *> *)wp_borderLayers {
    NSMutableArray *layers = objc_getAssociatedObject(self, (__bridge const void *)kWPBorderLayersKey);
    if (!layers) {
        layers = [NSMutableArray array];
        objc_setAssociatedObject(self, (__bridge const void *)kWPBorderLayersKey, layers, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return layers;
}

- (BOOL)wp_hasBorder {
    return [objc_getAssociatedObject(self, (__bridge const void *)kWPHasBorderKey) boolValue];
}

- (void)setWp_hasBorder:(BOOL)wp_hasBorder {
    objc_setAssociatedObject(self, (__bridge const void *)kWPHasBorderKey, @(wp_hasBorder), OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}

- (void)wp_setupBordersWithConfig:(WPModuleBorderConfig *)config {
    [self wp_removeAllBorderLayers];
    
    WPBorderLayer *borderLayer = [WPBorderLayer mainBorderLayerWithWidth:config.borderWidth
                                                         borderColorLight:config.borderColorLight
                                                          borderColorDark:config.borderColorDark
                                                            cornerRadius:config.cornerRadius];
    borderLayer.frame = self.bounds;
    [borderLayer updatePathInRect:self.bounds];
    [self.layer addSublayer:borderLayer];
    [[self wp_borderLayers] addObject:borderLayer];
    self.wp_hasBorder = YES;
}

- (void)wp_addBorderLayer:(WPBorderLayer *)layer {
    layer.frame = self.bounds;
    [layer updatePathInRect:self.bounds];
    [self.layer addSublayer:layer];
    [[self wp_borderLayers] addObject:layer];
}

- (void)wp_addSeparatorWithType:(WPSeparatorType)type config:(WPSeparatorConfiguration *)config {
    switch (type) {
        case WPSeparatorTypeImage:
            [self wp_addImageSeparator:config.separatorImage size:config.separatorSize];
            break;
        case WPSeparatorTypeText:
            [self wp_addTextSeparator:config.separatorText size:config.separatorSize color:config.separatorColorLight];
            break;
        default:
            [self wp_addSeparatorWithLeftInset:config.leftInset];
            break;
    }
}

- (void)wp_addImageSeparator:(UIImage *)image size:(CGFloat)size {
    if (!image) return;
    
    UIImageView *imageView = [[UIImageView alloc] initWithImage:image];
    imageView.contentMode = UIViewContentModeScaleAspectFit;
    imageView.frame = CGRectMake(0, 0, self.bounds.size.width, size);
    imageView.tag = 9999;
    [self addSubview:imageView];
}

- (void)wp_addTextSeparator:(NSString *)text size:(CGFloat)size color:(UIColor *)color {
    if (!text) return;
    
    UILabel *label = [[UILabel alloc] initWithFrame:CGRectMake(16, 0, self.bounds.size.width - 32, size)];
    label.text = text;
    label.font = [UIFont systemFontOfSize:12];
    label.textColor = color ?: [UIColor secondaryLabelColor];
    label.textAlignment = NSTextAlignmentCenter;
    label.tag = 9998;
    [self addSubview:label];
}

- (void)wp_addSeparatorWithLeftInset:(CGFloat)inset {
    WPBorderLayer *sepLayer = [WPBorderLayer separatorLayerWithLeftInset:inset];
    sepLayer.frame = self.bounds;
    [sepLayer updatePathInRect:self.bounds];
    [self.layer addSublayer:sepLayer];
    [[self wp_borderLayers] addObject:sepLayer];
}

- (void)wp_addRoundedBorderWithWidth:(CGFloat)width color:(UIColor *)color radius:(CGFloat)radius {
    WPBorderLayer *borderLayer = [WPBorderLayer mainBorderLayerWithWidth:width
                                                         borderColorLight:color
                                                          borderColorDark:color
                                                            cornerRadius:radius];
    borderLayer.frame = self.bounds;
    [borderLayer updatePathInRect:self.bounds];
    [self.layer addSublayer:borderLayer];
    [[self wp_borderLayers] addObject:borderLayer];
    self.wp_hasBorder = YES;
}

- (void)wp_addBorderWithSides:(WPBorderSide)sides width:(CGFloat)width color:(UIColor *)color cornerRadius:(CGFloat)cornerRadius {
    if (sides == WPBorderSideNone) return;
    
    if (sides == WPBorderSideAll) {
        [self wp_addRoundedBorderWithWidth:width color:color radius:cornerRadius];
        return;
    }
    
    if (sides & WPBorderSideTop) {
        WPBorderLayer *topLayer = [WPBorderLayer bottomBorderLayerWithWidth:width
                                                           borderColorLight:color
                                                            borderColorDark:color
                                                                 leftInset:0];
        topLayer.sides = WPBorderSideTop;
        topLayer.frame = self.bounds;
        [topLayer updatePathInRect:self.bounds];
        [self.layer addSublayer:topLayer];
        [[self wp_borderLayers] addObject:topLayer];
    }
    if (sides & WPBorderSideLeft) {
        WPBorderLayer *leftLayer = [WPBorderLayer leftBorderLayerWithWidth:width
                                                         borderColorLight:color
                                                          borderColorDark:color];
        leftLayer.frame = self.bounds;
        [leftLayer updatePathInRect:self.bounds];
        [self.layer addSublayer:leftLayer];
        [[self wp_borderLayers] addObject:leftLayer];
    }
    if (sides & WPBorderSideBottom) {
        WPBorderLayer *bottomLayer = [WPBorderLayer bottomBorderLayerWithWidth:width
                                                               borderColorLight:color
                                                                borderColorDark:color
                                                                     leftInset:0];
        bottomLayer.frame = self.bounds;
        [bottomLayer updatePathInRect:self.bounds];
        [self.layer addSublayer:bottomLayer];
        [[self wp_borderLayers] addObject:bottomLayer];
    }
    if (sides & WPBorderSideRight) {
        WPBorderLayer *rightLayer = [WPBorderLayer rightBorderLayerWithWidth:width
                                                           borderColorLight:color
                                                            borderColorDark:color];
        rightLayer.frame = self.bounds;
        [rightLayer updatePathInRect:self.bounds];
        [self.layer addSublayer:rightLayer];
        [[self wp_borderLayers] addObject:rightLayer];
    }
    self.wp_hasBorder = YES;
}

- (void)wp_addFourSideBordersWithWidth:(CGFloat)width
                                 color:(UIColor *)color
                               radius:(CGFloat)radius
                                top:(BOOL)top left:(BOOL)left bottom:(BOOL)bottom right:(BOOL)right {
    if (top) {
        WPBorderLayer *topLayer = [WPBorderLayer bottomBorderLayerWithWidth:width
                                                           borderColorLight:color
                                                            borderColorDark:color
                                                                 leftInset:0];
        topLayer.sides = WPBorderSideTop;
        topLayer.frame = self.bounds;
        [topLayer updatePathInRect:self.bounds];
        [self.layer addSublayer:topLayer];
        [[self wp_borderLayers] addObject:topLayer];
    }
    if (left) {
        WPBorderLayer *leftLayer = [WPBorderLayer leftBorderLayerWithWidth:width
                                                         borderColorLight:color
                                                          borderColorDark:color];
        leftLayer.frame = self.bounds;
        [leftLayer updatePathInRect:self.bounds];
        [self.layer addSublayer:leftLayer];
        [[self wp_borderLayers] addObject:leftLayer];
    }
    if (bottom) {
        WPBorderLayer *bottomLayer = [WPBorderLayer bottomBorderLayerWithWidth:width
                                                               borderColorLight:color
                                                                borderColorDark:color
                                                                     leftInset:0];
        bottomLayer.frame = self.bounds;
        [bottomLayer updatePathInRect:self.bounds];
        [self.layer addSublayer:bottomLayer];
        [[self wp_borderLayers] addObject:bottomLayer];
    }
    if (right) {
        WPBorderLayer *rightLayer = [WPBorderLayer rightBorderLayerWithWidth:width
                                                           borderColorLight:color
                                                            borderColorDark:color];
        rightLayer.frame = self.bounds;
        [rightLayer updatePathInRect:self.bounds];
        [self.layer addSublayer:rightLayer];
        [[self wp_borderLayers] addObject:rightLayer];
    }
    self.wp_hasBorder = YES;
}

- (void)wp_updateBorderAppearanceForDarkMode:(BOOL)isDark {
    for (WPBorderLayer *layer in [self wp_borderLayers]) {
        [layer updateAppearanceForDarkMode:isDark];
    }
    for (UIView *subview in self.subviews) {
        [subview wp_updateBorderAppearanceForDarkMode:isDark];
    }
}

- (void)wp_setBorderEnabled:(BOOL)enabled animated:(BOOL)animated {
    for (WPBorderLayer *layer in [self wp_borderLayers]) {
        [layer setBorderEnabled:enabled animated:animated];
    }
    self.wp_hasBorder = enabled;
}

- (void)wp_removeAllBorderLayers {
    for (WPBorderLayer *layer in [self wp_borderLayers]) {
        [layer removeFromSuperlayer];
    }
    [[self wp_borderLayers] removeAllObjects];
    self.wp_hasBorder = NO;
}

- (void)wp_layoutBorderLayers {
    for (WPBorderLayer *layer in [self wp_borderLayers]) {
        layer.frame = self.bounds;
        [layer updatePathInRect:self.bounds];
    }
}

@end
