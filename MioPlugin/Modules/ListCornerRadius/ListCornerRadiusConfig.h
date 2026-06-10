#import <Foundation/Foundation.h>
#import "ConfigModule.h"

@interface ListCornerRadiusConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL globalCornerRadiusEnabled;
@property (nonatomic, assign) BOOL globalCornerMyPageEnabled;
@property (nonatomic, assign) BOOL globalCornerContactsPageEnabled;
@property (nonatomic, assign) BOOL globalCornerDiscoverPageEnabled;
@property (nonatomic, assign) BOOL listSearchCornerRadius;
@property (nonatomic, assign) BOOL myPageHideArrow;
@property (nonatomic, assign) BOOL listCellBorder;
@property (nonatomic, assign) CGFloat listCellCornerRadius;
@property (nonatomic, assign) CGFloat listCellMargin;
@property (nonatomic, copy) NSString *listCellLightBgColor;
@property (nonatomic, copy) NSString *listCellDarkBgColor;
@property (nonatomic, assign) CGFloat listCellBorderWidth;
@property (nonatomic, copy) NSString *listCellBorderColor;
@property (nonatomic, copy) NSString *listCellBorderColorDarkHex;
@property (nonatomic, assign) BOOL listProfileCardBorderEnabled;
@property (nonatomic, assign) CGFloat listProfileCardBorderWidth;
@property (nonatomic, copy) NSString *listProfileCardBorderColor;
@property (nonatomic, copy) NSString *listProfileCardBorderColorDarkHex;

+ (instancetype)shared;

@end