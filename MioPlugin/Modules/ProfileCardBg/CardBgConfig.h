#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface CardBgConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL cardBgMaterialEnabled;
@property (nonatomic, assign) BOOL cardBgCornerEnabled;
@property (nonatomic, assign) BOOL cardBgCornerUseGlobal;
@property (nonatomic, assign) CGFloat cardBgCornerRadius;
@property (nonatomic, assign) CGFloat cardBgCornerMargin;
@property (nonatomic, copy, nullable) NSString *cardBgCornerBgColor;
@property (nonatomic, copy, nullable) NSString *cardBgCornerDarkBgColor;
@property (nonatomic, assign) CGFloat cardBgStrokeWidth;
@property (nonatomic, assign) BOOL cardBgHidden;
@property (nonatomic, assign) BOOL cardBgHideStateEnabled;
@property (nonatomic, assign) CGFloat cardBgListSpacing;
@property (nonatomic, assign) NSInteger cardBgFillMode;
@property (nonatomic, assign) NSInteger cardBgAlignment;
@property (nonatomic, assign) NSInteger cardBgLayer;
@property (nonatomic, assign) CGFloat cardBgOffsetY;
@property (nonatomic, assign) CGFloat cardBgOffsetX;

// ★ 资料卡边框（从 ListCornerRadiusConfig 迁移）
@property (nonatomic, assign) BOOL cardBgBorderEnabled;
@property (nonatomic, assign) CGFloat cardBgBorderWidth;
@property (nonatomic, copy, nullable) NSString *cardBgBorderColor;
@property (nonatomic, copy, nullable) NSString *cardBgBorderColorDarkHex;

// ★ 箭码隐藏（从 ListCornerRadiusConfig 迁移）
@property (nonatomic, assign) BOOL cardBgHideArrow;

/// 是否存在背景图文件
+ (BOOL)hasBackgroundImage;
/// 获取背景图文件路径（GIF 优先，其次 PNG）
+ (nullable NSString *)backgroundImagePath;
/// 获取背景图目录路径
+ (nullable NSString *)backgroundImageDirectory;
/// 删除背景图文件
+ (void)deleteBackgroundImage;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
