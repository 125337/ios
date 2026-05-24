#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, WPBorderSide) {
    WPBorderSideNone   = 0,
    WPBorderSideTop    = 1 << 0,
    WPBorderSideLeft   = 1 << 1,
    WPBorderSideBottom = 1 << 2,
    WPBorderSideRight  = 1 << 3,
    WPBorderSideAll    = WPBorderSideTop | WPBorderSideLeft | WPBorderSideBottom | WPBorderSideRight
};

@interface WPBorderLayer : CAShapeLayer

@property (nonatomic, assign) WPBorderSide sides;
@property (assign) CGFloat borderWidth;
@property (nonatomic, retain) UIColor *borderColorLight;
@property (nonatomic, retain) UIColor *borderColorDark;
@property (assign) CGFloat cornerRadius;
@property (nonatomic, assign) UIRectCorner roundedCorners;
@property (nonatomic, assign) CGFloat leftInset;
@property (nonatomic, assign) BOOL hasBorder;

+ (instancetype)mainBorderLayerWithWidth:(CGFloat)width
                          borderColorLight:(UIColor *)lightColor
                           borderColorDark:(UIColor *)darkColor
                             cornerRadius:(CGFloat)radius;

- (void)updatePathInRect:(CGRect)rect;
- (void)updateAppearanceForDarkMode:(BOOL)isDark;

@end

@interface UIView (WPBorder)

@property (nonatomic, retain, readonly) NSMutableArray<WPBorderLayer *> *wp_borderLayers;

- (void)wp_updateBorderAppearanceForDarkMode:(BOOL)isDark;

@end