#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, WPBorderSide) {
    WPBorderSideNone   = 0,
    WPBorderSideTop    = 1 << 0,
    WPBorderSideLeft   = 1 << 1,
    WPBorderSideBottom = 1 << 2,
    WPBorderSideRight  = 1 << 3,
    WPBorderSideAll    = WPBorderSideTop | WPBorderSideLeft | WPBorderSideBottom | WPBorderSideRight
};

typedef NS_ENUM(NSInteger, WPSeparatorType) {
    WPSeparatorTypeNone = 0,
    WPSeparatorTypeImage,
    WPSeparatorTypeText
};

@interface WPBorderLayer : CAShapeLayer

@property (nonatomic, assign) WPBorderSide sides;
@property (assign) CGFloat borderWidth;
@property (nonatomic, strong) UIColor *borderColorLight;
@property (nonatomic, strong) UIColor *borderColorDark;
@property (assign) CGFloat cornerRadius;
@property (nonatomic, assign) UIRectCorner roundedCorners;
@property (nonatomic, assign) CGFloat leftInset;
@property (nonatomic, assign) BOOL hasBorder;
@property (nonatomic, strong) CAShapeLayer *onBorderLayer;
@property (nonatomic, strong) CAShapeLayer *offBorderLayer;

+ (instancetype)mainBorderLayerWithWidth:(CGFloat)width
                          borderColorLight:(UIColor *)lightColor
                           borderColorDark:(UIColor *)darkColor
                             cornerRadius:(CGFloat)radius;

+ (instancetype)leftBorderLayerWithWidth:(CGFloat)width
                         borderColorLight:(UIColor *)lightColor
                          borderColorDark:(UIColor *)darkColor;

+ (instancetype)rightBorderLayerWithWidth:(CGFloat)width
                          borderColorLight:(UIColor *)lightColor
                           borderColorDark:(UIColor *)darkColor;

+ (instancetype)bottomBorderLayerWithWidth:(CGFloat)width
                           borderColorLight:(UIColor *)lightColor
                            borderColorDark:(UIColor *)darkColor
                                 leftInset:(CGFloat)inset;

+ (instancetype)separatorLayerWithLeftInset:(CGFloat)inset;

- (void)updatePathInRect:(CGRect)rect;
- (void)updateAppearanceForDarkMode:(BOOL)isDark;
- (void)setBorderEnabled:(BOOL)enabled animated:(BOOL)animated;

@end

@interface WPSectionBorderShape : NSObject

@property (nonatomic, assign) CGFloat cornerRadius;
@property (nonatomic, assign) CGFloat borderWidth;
@property (nonatomic, strong) UIColor *borderColorLight;
@property (nonatomic, strong) UIColor *borderColorDark;
@property (nonatomic, assign) WPBorderSide visibleSides;
@property (nonatomic, assign) UIRectCorner roundedCorners;

+ (instancetype)shapeWithCornerRadius:(CGFloat)radius
                          borderWidth:(CGFloat)width
                      borderColorLight:(UIColor *)lightColor
                       borderColorDark:(UIColor *)darkColor;

+ (instancetype)cardShape;
+ (instancetype)groupShape;
+ (instancetype)cellShape;

- (NSArray<WPBorderLayer *> *)createBorderLayersForRect:(CGRect)rect;

@end

@interface WPSeparatorConfiguration : NSObject

@property (nonatomic, assign) WPSeparatorType separatorType;
@property (nonatomic, assign) CGFloat separatorSize;
@property (nonatomic, strong) UIImage *separatorImage;
@property (nonatomic, copy) NSString *separatorText;
@property (nonatomic, strong) UIColor *separatorColorLight;
@property (nonatomic, strong) UIColor *separatorColorDark;
@property (nonatomic, assign) CGFloat leftInset;
@property (nonatomic, assign) BOOL tapToSettings;

+ (instancetype)defaultConfiguration;
+ (instancetype)imageConfigurationWithImage:(UIImage *)image size:(CGFloat)size;
+ (instancetype)textConfigurationWithText:(NSString *)text size:(CGFloat)size;

@end

@interface WPModuleBorderConfig : NSObject

@property (nonatomic, copy) NSString *moduleName;
@property (nonatomic, assign) CGFloat cornerRadius;
@property (nonatomic, assign) CGFloat borderWidth;
@property (nonatomic, strong) UIColor *borderColorLight;
@property (nonatomic, strong) UIColor *borderColorDark;
@property (nonatomic, assign) BOOL borderEnabled;

+ (instancetype)configForModule:(NSString *)name
                    cornerRadius:(CGFloat)radius
                     borderWidth:(CGFloat)width
                 borderColorLight:(UIColor *)lightColor
                  borderColorDark:(UIColor *)darkColor;

@end

@interface WPBorderManager : NSObject

@property (nonatomic, strong, readonly) NSMutableDictionary<NSString *, WPModuleBorderConfig *> *moduleConfigs;
@property (nonatomic, strong, readonly) WPSeparatorConfiguration *separatorConfig;

+ (instancetype)sharedManager;

- (WPModuleBorderConfig *)configForModule:(NSString *)name;
- (void)registerModule:(NSString *)name config:(WPModuleBorderConfig *)config;
- (void)setSeparatorConfig:(WPSeparatorConfiguration *)config;

- (void)updateAllBordersForDarkMode:(BOOL)isDark;

@end

@interface UIView (WPBorder)

@property (nonatomic, strong, readonly) NSMutableArray<WPBorderLayer *> *wp_borderLayers;
@property (nonatomic, assign) BOOL wp_hasBorder;

- (void)wp_setupBordersWithConfig:(WPModuleBorderConfig *)config;
- (void)wp_addBorderLayer:(WPBorderLayer *)layer;
- (void)wp_addSeparatorWithType:(WPSeparatorType)type config:(WPSeparatorConfiguration *)config;
- (void)wp_addImageSeparator:(UIImage *)image size:(CGFloat)size;
- (void)wp_addTextSeparator:(NSString *)text size:(CGFloat)size color:(UIColor *)color;
- (void)wp_addSeparatorWithLeftInset:(CGFloat)inset;
- (void)wp_addRoundedBorderWithWidth:(CGFloat)width color:(UIColor *)color radius:(CGFloat)radius;
- (void)wp_addBorderWithSides:(WPBorderSide)sides width:(CGFloat)width color:(UIColor *)color cornerRadius:(CGFloat)cornerRadius;
- (void)wp_addFourSideBordersWithWidth:(CGFloat)width
                                 color:(UIColor *)color
                               radius:(CGFloat)radius
                            top:(BOOL)top left:(BOOL)left bottom:(BOOL)bottom right:(BOOL)right;
- (void)wp_updateBorderAppearanceForDarkMode:(BOOL)isDark;
- (void)wp_setBorderEnabled:(BOOL)enabled animated:(BOOL)animated;
- (void)wp_removeAllBorderLayers;
- (void)wp_layoutBorderLayers;

@end
