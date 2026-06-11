#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface JokerConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL enableJoker;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
