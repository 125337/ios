#import "FeatureModuleRegistry.h"
#import "../Settings/Common/SettingController.h"
#import "../Modules/Revoke/RevokeHook.h"
#import "../Modules/Layout/TintHook.h"
#import "../Modules/Layout/UIPurifyHook.h"
#import "../Modules/Unread/ClearUnreadHook.h"
#import "../Modules/RedEnvelop/RedEnvelopHook.h"
#import "../Modules/AutoTransfer/AutoTransferHook.h"
#import "../Modules/SettingEntry/SettingEntryHook.h"
#import "../Modules/Joker/JokerHook.h"
#import "../Modules/GroupExit/GroupExitHook.h"
#import "../Modules/MessageTime/MessageTimeHook.h"

@implementation FeatureModuleDescriptor

+ (instancetype)moduleWithIdentifier:(NSString *)identifier
                               title:(NSString *)title
                            subtitle:(NSString *)subtitle
                        sectionTitle:(NSString *)sectionTitle
                     controllerClass:(Class)controllerClass
                hookInstallerClasses:(NSArray<Class> *)hookInstallerClasses {
    FeatureModuleDescriptor *module = [[self alloc] init];
    module.identifier = identifier;
    module.title = title;
    module.subtitle = subtitle;
    module.sectionTitle = sectionTitle;
    module.controllerClass = controllerClass;
    module.hookInstallerClasses = hookInstallerClasses ?: @[];
    return module;
}

@end

@implementation FeatureModuleRegistry

+ (NSArray<FeatureModuleDescriptor *> *)allModules {
    static NSArray<FeatureModuleDescriptor *> *modules = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        modules = @[
            [FeatureModuleDescriptor moduleWithIdentifier:@"general"
                                                    title:@"通用功能"
                                                 subtitle:@"防撤回、未读管理、通知"
                                             sectionTitle:@"通用"
                                          controllerClass:[SettingGeneralFunctionController class]
                                     hookInstallerClasses:@[[RevokeHook class], [ClearUnreadHook class], [JokerHook class], [GroupExitHook class], [MessageTimeHook class]]],
            [FeatureModuleDescriptor moduleWithIdentifier:@"redenvelop"
                                                    title:@"自动抢红包"
                                                 subtitle:@"自动领取红包、延迟设置"
                                             sectionTitle:@"通用"
                                          controllerClass:[SettingRedEnvelopController class]
                                     hookInstallerClasses:@[[RedEnvelopHook class], [AutoTransferHook class]]],
            [FeatureModuleDescriptor moduleWithIdentifier:@"layout"
                                                    title:@"界面布局"
                                                 subtitle:@"外观颜色、深色模式"
                                             sectionTitle:@"通用"
                                          controllerClass:[SettingLayoutFunctionController class]
                                     hookInstallerClasses:@[[TintHook class], [UIPurifyHook class], [UISimplifyHook class]]],
            [FeatureModuleDescriptor moduleWithIdentifier:@"about"
                                                    title:@"关于"
                                                 subtitle:@"插件信息"
                                             sectionTitle:@"更多"
                                          controllerClass:[SettingAboutController class]
                                     hookInstallerClasses:@[]],
            [FeatureModuleDescriptor moduleWithIdentifier:@"settingentry"
                                                    title:@"插件入口"
                                                 subtitle:@"设置页面入口"
                                             sectionTitle:@"系统"
                                          controllerClass:nil
                                     hookInstallerClasses:@[[SettingEntryHook class]]]
        ];
    });
    return modules;
}

+ (NSArray<NSString *> *)orderedSectionTitles {
    return @[@"通用", @"更多", @"系统"];
}

+ (NSArray<FeatureModuleDescriptor *> *)modulesForSection:(NSString *)sectionTitle {
    if (sectionTitle.length == 0) return @[];
    NSMutableArray<FeatureModuleDescriptor *> *result = [NSMutableArray array];
    for (FeatureModuleDescriptor *module in [self allModules]) {
        if ([module.sectionTitle isEqualToString:sectionTitle]) {
            [result addObject:module];
        }
    }
    return result;
}

@end
