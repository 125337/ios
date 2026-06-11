#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface PlaceholderTextConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL placeholderTextEnabled;
@property (nonatomic, assign) BOOL placeholderTextBold;
@property (nonatomic, copy) NSString *placeholderTextText;
@property (nonatomic, assign) CGFloat placeholderTextFontSize;
@property (nonatomic, assign) CGFloat placeholderTextAlpha;
@property (nonatomic, copy) NSString *placeholderTextColorHex;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END