#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface GroupExitConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL enableGroupExitMonitor;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
