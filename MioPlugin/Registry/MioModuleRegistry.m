//
//  MioModuleRegistry.m
//  MioPlugin
//
//  唯一模块注册中心。
//  所有 import 集中在此文件，Tweak.m 不再需要任何模块 import。
//

#import "MioModuleRegistry.h"
#import "MioModuleDescriptor.h"
#import "../Core/ConfigManager.h"
#import <objc/message.h>

// ────── 所有 Config 类的 import ──────
#import "../Modules/Revoke/RevokeConfig.h"
#import "../Modules/Unread/ClearUnreadConfig.h"
#import "../Modules/Joker/JokerConfig.h"
#import "../Modules/GroupExit/GroupExitConfig.h"
#import "../Modules/RedEnvelop/RedEnvelopConfig.h"
#import "../Modules/AutoTransfer/AutoTransferConfig.h"
#import "../Modules/ChatTopBar/ChatTopBarConfig.h"
#import "../Modules/MessageTime/MessageTimeConfig.h"
#import "../Modules/Layout/UIPurifyConfig.h"
#import "../Modules/Layout/AttachLayoutConfig.h"
#import "../Modules/HideAvatar/HideAvatarConfig.h"
#import "../Modules/PlaceholderText/PlaceholderTextConfig.h"
#import "../Modules/ListCornerRadius/ListCornerRadiusConfig.h"
#import "../Modules/ProfileCardBg/CardBgConfig.h"
#import "../Modules/FontLayout/FontLayoutConfig.h"
#import "../Modules/AccountDetail/AccountConfig.h"

// ────── 所有 Hook 类的 import ──────
#import "../Modules/Revoke/RevokeHook.h"
#import "../Modules/Unread/ClearUnreadHook.h"
#import "../Modules/Joker/JokerHook.h"
#import "../Modules/GroupExit/GroupExitHook.h"
#import "../Modules/RedEnvelop/RedEnvelopHook.h"
#import "../Modules/AutoTransfer/AutoTransferHook.h"
#import "../Modules/ChatTopBar/ChatTopBarHook.h"
#import "../Modules/MessageTime/MessageTimeHook.h"
#import "../Modules/Layout/UIPurifyHook.h"
#import "../Modules/Layout/UIAttachLayoutHook.h"
#import "../Modules/HideAvatar/HideAvatarHook.h"
#import "../Modules/PlaceholderText/PlaceholderTextHook.h"
#import "../Modules/ListCornerRadius/ListCornerRadiusHook.h"
#import "../Modules/ProfileCardBg/ProfileCardBgHook.h"
#import "../Modules/SettingEntry/SettingEntryHook.h"
#import "../Modules/FontLayout/FontLayoutHook.h"

// ────── 设置页 Controller 的 import ──────
#import "../Settings/Controllers/SettingListCornerRadiusController.h"
#import "../Settings/Controllers/SettingCardBackgroundController.h"
#import "../Settings/Controllers/SettingGeneralFunctionController.h"
#import "../Settings/Controllers/SettingLayoutFunctionController.h"
#import "../Settings/Controllers/SettingRedEnvelopController.h"
#import "../Settings/Controllers/SettingAboutController.h"
#import "../Settings/Controllers/WPUILayoutSettingsVC.h"


@implementation MioModuleDescriptor

+ (instancetype)descriptorWithIdentifier:(NSString *)identifier
                                   title:(NSString *)title
                              configClass:(Class)configClass
                              hookClasses:(NSArray<Class> *)hookClasses
                          controllerClass:(Class)controllerClass
                                 subtitle:(NSString *)subtitle
                              sectionTitle:(NSString *)sectionTitle
{
    MioModuleDescriptor *d = [[self alloc] init];
    if (d) {
        d->_identifier = [identifier copy];
        d->_title = [title copy];
        d->_configClass = configClass;
        d->_hookClasses = [hookClasses copy] ?: @[];
        d->_controllerClass = controllerClass;
        d->_subtitle = [subtitle copy];
        d->_sectionTitle = [sectionTitle copy];
    }
    return d;
}

@end


@implementation MioModuleRegistry

#pragma mark - 唯一模块信息表

/// ★ 唯一真相源 ★
/// 新增模块：只需在此数组中追加一行。
/// 系统会自动完成 Config 注册 + Hook 安装。
+ (NSArray<MioModuleDescriptor *> *)allDescriptors {
    static NSArray<MioModuleDescriptor *> *descriptors = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        descriptors = @[
            // ──── 通用功能 ────
            [MioModuleDescriptor descriptorWithIdentifier:@"revoke"
                                                    title:@"防撤回"
                                               configClass:[RevokeConfig class]
                                               hookClasses:@[[RevokeHook class]]
                                           controllerClass:[SettingGeneralFunctionController class]
                                                  subtitle:@"消息撤回拦截"
                                             sectionTitle:@"通用"],
            
            [MioModuleDescriptor descriptorWithIdentifier:@"unread"
                                                    title:@"未读清零"
                                               configClass:[ClearUnreadConfig class]
                                               hookClasses:@[[ClearUnreadHook class]]
                                           controllerClass:[SettingGeneralFunctionController class]
                                                  subtitle:@"消息未读管理"
                                             sectionTitle:@"通用"],
            
            [MioModuleDescriptor descriptorWithIdentifier:@"joker"
                                                    title:@"消息恶搞"
                                               configClass:[JokerConfig class]
                                               hookClasses:@[[JokerHook class]]
                                           controllerClass:[SettingGeneralFunctionController class]
                                                  subtitle:@"修改聊天消息内容"
                                             sectionTitle:@"通用"],
            
            [MioModuleDescriptor descriptorWithIdentifier:@"groupexit"
                                                    title:@"群退监控"
                                               configClass:[GroupExitConfig class]
                                               hookClasses:@[[GroupExitHook class]]
                                           controllerClass:[SettingGeneralFunctionController class]
                                                  subtitle:@"群聊退群提醒"
                                             sectionTitle:@"通用"],
            
            [MioModuleDescriptor descriptorWithIdentifier:@"messagetime"
                                                    title:@"消息时间"
                                               configClass:[MessageTimeConfig class]
                                               hookClasses:@[[MessageTimeHook class]]
                                           controllerClass:[SettingGeneralFunctionController class]
                                                  subtitle:@"自定义消息时间显示"
                                             sectionTitle:@"通用"],
            
            // ──── 自动抢红包 ────
            [MioModuleDescriptor descriptorWithIdentifier:@"redenvelop"
                                                    title:@"自动抢红包"
                                               configClass:[RedEnvelopConfig class]
                                               hookClasses:@[[RedEnvelopHook class],
                                                              [AutoTransferHook class]]
                                           controllerClass:[SettingRedEnvelopController class]
                                                  subtitle:@"自动领取红包、延迟设置"
                                             sectionTitle:@"通用"],
            
            [MioModuleDescriptor descriptorWithIdentifier:@"autotransfer"
                                                    title:@"自动转账"
                                               configClass:[AutoTransferConfig class]
                                               hookClasses:@[]           // ← RedEnvelopHook 已包含
                                           controllerClass:[SettingRedEnvelopController class]
                                                  subtitle:@"自动收款"
                                             sectionTitle:@"通用"],
            
            // ──── 界面布局 ────
            [MioModuleDescriptor descriptorWithIdentifier:@"uipurify"
                                                    title:@"界面净化"
                                               configClass:[UIPurifyConfig class]
                                               hookClasses:@[[UIPurifyHook class]]
                                           controllerClass:[SettingLayoutFunctionController class]
                                                  subtitle:@"隐藏界面元素"
                                             sectionTitle:@"通用"],
            
            [MioModuleDescriptor descriptorWithIdentifier:@"hideavatar"
                                                    title:@"隐藏头像"
                                               configClass:[HideAvatarConfig class]
                                               hookClasses:@[[HideAvatarHook class]]
                                           controllerClass:[SettingLayoutFunctionController class]
                                                  subtitle:@"隐藏聊天头像"
                                             sectionTitle:@"通用"],
            
            [MioModuleDescriptor descriptorWithIdentifier:@"attachlayout"
                                                    title:@"附件布局"
                                               configClass:[AttachLayoutConfig class]
                                               hookClasses:@[[UIAttachLayoutHook class]]
                                           controllerClass:[SettingLayoutFunctionController class]
                                                  subtitle:@"附件面板自定义"
                                             sectionTitle:@"通用"],
            
            [MioModuleDescriptor descriptorWithIdentifier:@"placeholdertext"
                                                    title:@"占位文本"
                                               configClass:[PlaceholderTextConfig class]
                                               hookClasses:@[[PlaceholderTextHook class]]
                                           controllerClass:[SettingLayoutFunctionController class]
                                                  subtitle:@"自定义占位文字"
                                             sectionTitle:@"通用"],
            
            [MioModuleDescriptor descriptorWithIdentifier:@"chattopbar"
                                                    title:@"聊天顶栏"
                                               configClass:[ChatTopBarConfig class]
                                               hookClasses:@[[ChatTopBarHook class]]
                                           controllerClass:[SettingLayoutFunctionController class]
                                                  subtitle:@"聊天界面顶部栏自定义"
                                             sectionTitle:@"通用"],
            
            // ──── 列表圆角 + 资料卡背景 ────
            [MioModuleDescriptor descriptorWithIdentifier:@"listcorner"
                                                    title:@"列表圆角"
                                               configClass:[ListCornerRadiusConfig class]
                                               hookClasses:@[[ListCornerRadiusHook class]]
                                           controllerClass:[SettingListCornerRadiusController class]
                                                  subtitle:@"Cell圆角、边距、边框样式"
                                             sectionTitle:@"通用"],
            
            [MioModuleDescriptor descriptorWithIdentifier:@"cardbg"
                                                    title:@"资料卡背景"
                                               configClass:[CardBgConfig class]
                                               hookClasses:@[[ProfileCardBgHook class]]
                                           controllerClass:[SettingCardBackgroundController class]
                                                  subtitle:@"资料卡片背景自定义"
                                             sectionTitle:@"通用"],
            
            // ──── 布局字号 ────
            [MioModuleDescriptor descriptorWithIdentifier:@"fontlayout"
                                                    title:@"布局字号"
                                               configClass:[FontLayoutConfig class]
                                               hookClasses:@[[FontLayoutHook class]]
                                           controllerClass:[WPUILayoutSettingsVC class]
                                                  subtitle:@"全局/对话字号调整"
                                             sectionTitle:@"通用"],
            
            // ──── 关于 ────
            [MioModuleDescriptor descriptorWithIdentifier:@"about"
                                                    title:@"关于"
                                               configClass:nil
                                               hookClasses:@[]
                                           controllerClass:[SettingAboutController class]
                                                  subtitle:@"插件信息"
                                             sectionTitle:@"更多"],
            
            // ──── 账户信息（纯信息页，无 Hook；入口在 MioPluginEntryVC 功能列表） ────
            [MioModuleDescriptor descriptorWithIdentifier:@"accountdetail"
                                                    title:@"账户信息"
                                               configClass:[AccountConfig class]
                                               hookClasses:@[]
                                           controllerClass:nil
                                                  subtitle:@"账号/签名证书信息"
                                             sectionTitle:@"系统"],

            // ──── 设置入口（无 Config + 无 Controller） ────
            [MioModuleDescriptor descriptorWithIdentifier:@"settingentry"
                                                    title:@"插件入口"
                                               configClass:nil
                                               hookClasses:@[[SettingEntryHook class]]
                                           controllerClass:nil
                                                  subtitle:@"设置页面入口"
                                             sectionTitle:@"系统"],
        ];
    });
    return descriptors;
}

#pragma mark - 注册执行

+ (void)registerAll {
    NSLog(@"[MioPlugin][ModuleRegistry] registerAll start");
    
    NSArray<MioModuleDescriptor *> *allModules = [self allDescriptors];
    
    // ── 第 1 步：注册所有 Config ──
    for (MioModuleDescriptor *module in allModules) {
        if (module.configClass) {
            [ConfigManager registerModule:module.configClass];
            NSLog(@"[MioPlugin][ModuleRegistry] ✓ config registered: %@", module.configClass);
        }
    }
    
    // ── 第 2 步：加载配置 ──
    [ConfigManager loadAll];
    NSLog(@"[MioPlugin][ModuleRegistry] ✓ configs loaded");
    
    // ── 第 3 步：安装所有 Hook（自动去重） ──
    NSMutableSet<Class> *installedClasses = [NSMutableSet set];
    for (MioModuleDescriptor *module in allModules) {
        for (Class hookClass in module.hookClasses) {
            if (!hookClass || [installedClasses containsObject:hookClass]) continue;
            if ([hookClass respondsToSelector:@selector(install)]) {
                @try {
                    ((void (*)(id, SEL))objc_msgSend)(hookClass, @selector(install));
                    [installedClasses addObject:hookClass];
                    NSLog(@"[MioPlugin][ModuleRegistry] ✓ hook installed: %@", hookClass);
                } @catch (NSException *e) {
                    NSLog(@"[MioPlugin][ModuleRegistry] ✗ hook failed for %@: %@", hookClass, e);
                }
            }
        }
    }
    
    NSLog(@"[MioPlugin][ModuleRegistry] registerAll complete: %lu configs, %lu hooks",
          (unsigned long)allModules.count, (unsigned long)installedClasses.count);
}

#pragma mark - 兼容设置页 UI 方法

+ (NSArray<NSString *> *)orderedSectionTitles {
    return @[@"通用", @"更多", @"系统"];
}

+ (NSArray<MioModuleDescriptor *> *)descriptorsForSection:(NSString *)sectionTitle {
    if (sectionTitle.length == 0) return @[];
    NSMutableArray *result = [NSMutableArray array];
    for (MioModuleDescriptor *module in [self allDescriptors]) {
        if ([module.sectionTitle isEqualToString:sectionTitle]) {
            [result addObject:module];
        }
    }
    return result;
}

@end