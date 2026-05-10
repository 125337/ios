#import <Foundation/Foundation.h>
#import "FeatureModule.h"

@interface FeatureModuleRegistry : NSObject
+ (NSArray<FeatureModuleDescriptor *> *)allModules;
+ (NSArray<NSString *> *)orderedSectionTitles;
+ (NSArray<FeatureModuleDescriptor *> *)modulesForSection:(NSString *)sectionTitle;
@end
