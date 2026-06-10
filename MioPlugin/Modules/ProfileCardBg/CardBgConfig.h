#import <Foundation/Foundation.h>
#import "ConfigModule.h"

@interface CardBgConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL cardBgMaterialEnabled;
@property (nonatomic, assign) BOOL cardBgCornerEnabled;
@property (nonatomic, assign) BOOL cardBgCornerUseGlobal;
@property (nonatomic, assign) CGFloat cardBgCornerRadius;
@property (nonatomic, assign) CGFloat cardBgCornerMargin;
@property (nonatomic, copy) NSString *cardBgCornerBgColor;
@property (nonatomic, copy) NSString *cardBgCornerDarkBgColor;
@property (nonatomic, assign) CGFloat cardBgStrokeWidth;
@property (nonatomic, assign) BOOL cardBgHidden;
@property (nonatomic, assign) BOOL cardBgHideStateEnabled;
@property (nonatomic, assign) CGFloat cardBgListSpacing;
@property (nonatomic, copy) NSString *cardBgImagePath;
@property (nonatomic, assign) NSInteger cardBgFillMode;
@property (nonatomic, assign) NSInteger cardBgAlignment;
@property (nonatomic, assign) NSInteger cardBgLayer;
@property (nonatomic, assign) CGFloat cardBgOffsetY;
@property (nonatomic, assign) CGFloat cardBgOffsetX;

// ★ 资料卡边框（从 ListCornerRadiusConfig 迁移）
@property (nonatomic, assign) BOOL cardBgBorderEnabled;
@property (nonatomic, assign) CGFloat cardBgBorderWidth;
@property (nonatomic, copy) NSString *cardBgBorderColor;
@property (nonatomic, copy) NSString *cardBgBorderColorDarkHex;

// ★ 箭码隐藏（从 ListCornerRadiusConfig 迁移）
@property (nonatomic, assign) BOOL cardBgHideArrow;

+ (instancetype)shared;

@end