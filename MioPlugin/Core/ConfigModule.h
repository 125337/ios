#import <Foundation/Foundation.h>
#import "ConfigDescriptor.h"

@protocol ConfigModule <NSObject>
@required
+ (NSArray<ConfigDescriptor *> *)descriptors;
+ (NSString *)modulePrefix;
+ (instancetype)shared;
@optional
+ (void)loadArchivedData;
+ (void)saveArchivedData;
@end