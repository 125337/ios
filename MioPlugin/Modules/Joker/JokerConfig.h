#import <Foundation/Foundation.h>
#import "ConfigModule.h"

@interface JokerConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL enableJoker;

+ (instancetype)shared;

@end