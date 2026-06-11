#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface AttachLayoutConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL attachLayoutEnabled;
@property (nonatomic, copy, nullable) NSString *attachLayoutColumns;
@property (nonatomic, copy, nullable) NSString *attachLayoutRows;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
