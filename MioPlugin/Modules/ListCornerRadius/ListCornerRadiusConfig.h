#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface ListCornerRadiusConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL globalCornerRadiusEnabled;
@property (nonatomic, assign) BOOL globalCornerMyPageEnabled;
@property (nonatomic, assign) BOOL globalCornerContactsPageEnabled;
@property (nonatomic, assign) BOOL globalCornerDiscoverPageEnabled;
@property (nonatomic, assign) BOOL listSearchCornerRadius;
@property (nonatomic, assign) BOOL listCellBorder;
@property (nonatomic, assign) CGFloat listCellCornerRadius;
@property (nonatomic, assign) CGFloat listCellMargin;
@property (nonatomic, copy, nullable) NSString *listCellLightBgColor;
@property (nonatomic, copy, nullable) NSString *listCellDarkBgColor;
@property (nonatomic, assign) CGFloat listCellBorderWidth;
@property (nonatomic, copy, nullable) NSString *listCellBorderColor;
@property (nonatomic, copy, nullable) NSString *listCellBorderColorDarkHex;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
