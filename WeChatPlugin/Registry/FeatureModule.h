#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface FeatureModuleDescriptor : NSObject
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *sectionTitle;
@property (nonatomic, assign) Class controllerClass;
@property (nonatomic, copy) NSArray<Class> *hookInstallerClasses;

+ (instancetype)moduleWithIdentifier:(NSString *)identifier
                               title:(NSString *)title
                            subtitle:(NSString *)subtitle
                        sectionTitle:(NSString *)sectionTitle
                     controllerClass:(Class)controllerClass
                hookInstallerClasses:(NSArray<Class> *)hookInstallerClasses;
@end
