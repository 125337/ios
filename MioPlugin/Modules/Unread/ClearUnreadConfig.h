#import <Foundation/Foundation.h>
#import "ConfigModule.h"

@interface ClearUnreadConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL clearUnreadEnabled;

+ (instancetype)shared;

@end