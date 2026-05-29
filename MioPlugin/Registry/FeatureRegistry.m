#import "FeatureRegistry.h"
#import "FeatureModuleRegistry.h"

@implementation SettingCategoryItem

+ (instancetype)itemWithTitle:(NSString *)title
                     subtitle:(NSString *)subtitle
                 sectionTitle:(NSString *)sectionTitle
              controllerClass:(Class)controllerClass {
    SettingCategoryItem *item = [[self alloc] init];
    item.title = title;
    item.subtitle = subtitle;
    item.sectionTitle = sectionTitle;
    item.controllerClass = controllerClass;
    return item;
}

+ (instancetype)itemWithModule:(FeatureModuleDescriptor *)module {
    return [self itemWithTitle:module.title
                      subtitle:module.subtitle
                  sectionTitle:module.sectionTitle
               controllerClass:module.controllerClass];
}

@end

@implementation FeatureRegistry

+ (NSArray<NSString *> *)orderedSectionTitles {
    return [FeatureModuleRegistry orderedSectionTitles];
}

+ (NSArray<SettingCategoryItem *> *)itemsForSection:(NSString *)sectionTitle {
    NSMutableArray<SettingCategoryItem *> *items = [NSMutableArray array];
    for (FeatureModuleDescriptor *module in [FeatureModuleRegistry modulesForSection:sectionTitle]) {
        [items addObject:[SettingCategoryItem itemWithModule:module]];
    }
    return items;
}

@end
