#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

// 默认色单一来源：descriptors 与 hook 兜底共用——"清空颜色"（走兜底）与"从未配置"
// （走默认值）呈现一致，色值只允许定义在这一处
extern NSString * const MioDefaultCellLightBgColor;   // #FFFFFF
extern NSString * const MioDefaultCellDarkBgColor;    // #1C1C1E
extern NSString * const MioDefaultBorderColorLight;   // #E5E5E5
extern NSString * const MioDefaultBorderColorDark;    // #3A3A3C

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
