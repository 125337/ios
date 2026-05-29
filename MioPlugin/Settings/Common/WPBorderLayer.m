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
}

@end

#pragma mark - UIView (WPBorder)

static NSString *const kWPBorderLayersKey = @"wp_borderLayers";

@implementation UIView (WPBorder)

- (NSMutableArray<WPBorderLayer *> *)wp_borderLayers {
    NSMutableArray *layers = objc_getAssociatedObject(self, (__bridge const void *)kWPBorderLayersKey);
    if (!layers) {
        layers = [NSMutableArray array];
        objc_setAssociatedObject(self, (__bridge const void *)kWPBorderLayersKey, layers, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return layers;
}

- (void)wp_updateBorderAppearanceForDarkMode:(BOOL)isDark {
    for (WPBorderLayer *layer in [self wp_borderLayers]) {
        [layer updateAppearanceForDarkMode:isDark];
    }
    for (UIView *subview in self.subviews) {
        [subview wp_updateBorderAppearanceForDarkMode:isDark];
    }
}

@end