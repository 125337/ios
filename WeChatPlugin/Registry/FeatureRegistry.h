#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "FeatureModule.h"

@interface SettingCategoryItem : NSObject
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *sectionTitle;
@property (nonatomic, assign) Class controllerClass;
+ (instancetype)itemWithTitle:(NSString *)title
                     subtitle:(NSString *)subtitle
                 sectionTitle:(NSString *)sectionTitle
              controllerClass:(Class)controllerClass;
+ (instancetype)itemWithModule:(FeatureModuleDescriptor *)module;
@end

@interface FeatureRegistry : NSObject
+ (NSArray<NSString *> *)orderedSectionTitles;
+ (NSArray<SettingCategoryItem *> *)itemsForSection:(NSString *)sectionTitle;
@end
