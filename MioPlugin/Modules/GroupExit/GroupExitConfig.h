#import <Foundation/Foundation.h>
#import "ConfigModule.h"

@interface GroupExitConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL enableGroupExitMonitor;

+ (instancetype)shared;

@end