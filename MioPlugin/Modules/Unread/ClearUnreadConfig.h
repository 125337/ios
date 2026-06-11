#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface ClearUnreadConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL clearUnreadEnabled;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
