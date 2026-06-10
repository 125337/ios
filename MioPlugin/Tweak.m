#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import "Registry/HookRegistry.h"
#import "Core/ConfigManager.h"
#import "Modules/Revoke/RevokeConfig.h"
#import "Modules/Unread/ClearUnreadConfig.h"
#import "Modules/Joker/JokerConfig.h"
#import "Modules/GroupExit/GroupExitConfig.h"
#import "Modules/RedEnvelop/RedEnvelopConfig.h"
#import "Modules/AutoTransfer/AutoTransferConfig.h"
#import "Modules/ChatTopBar/ChatTopBarConfig.h"
#import "Modules/MessageTime/MessageTimeConfig.h"
#import "Modules/Layout/UIPurifyConfig.h"
#import "Modules/Layout/AttachLayoutConfig.h"
#import "Modules/HideAvatar/HideAvatarConfig.h"
#import "Modules/PlaceholderText/PlaceholderTextConfig.h"
#import "Modules/ListCornerRadius/ListCornerRadiusConfig.h"
#import "Modules/ProfileCardBg/CardBgConfig.h"
#import "Modules/DevTools/DevToolsConfig.h"
#import "Modules/ListCornerRadius/ListCornerRadiusHook.h"
#import "Modules/ProfileCardBg/ProfileCardBgHook.h"

__attribute__((constructor))
static void MioPluginInitialize() {
    NSLog(@"[MioPlugin] === DYLIB LOADED ===");

    @try {
        @autoreleasepool {
            NSLog(@"[MioPlugin] entering constructor");

            // 注册所有模块 Config
            [ConfigManager registerModule:RevokeConfig.class];
            [ConfigManager registerModule:ClearUnreadConfig.class];
            [ConfigManager registerModule:JokerConfig.class];
            [ConfigManager registerModule:GroupExitConfig.class];
            [ConfigManager registerModule:RedEnvelopConfig.class];
            [ConfigManager registerModule:AutoTransferConfig.class];
            [ConfigManager registerModule:ChatTopBarConfig.class];
            [ConfigManager registerModule:MessageTimeConfig.class];
            [ConfigManager registerModule:UIPurifyConfig.class];
            [ConfigManager registerModule:AttachLayoutConfig.class];
            [ConfigManager registerModule:HideAvatarConfig.class];
            [ConfigManager registerModule:PlaceholderTextConfig.class];
            [ConfigManager registerModule:ListCornerRadiusConfig.class];
            [ConfigManager registerModule:CardBgConfig.class];
            [ConfigManager registerModule:DevToolsConfig.class];

            // 加载所有配置
            [ConfigManager loadAll];

            [HookRegistry installAllHooks];

            // ★ 资料卡模块暂未通过 FeatureModuleRegistry 注册
            // 待实现 +install 后可删除此行
            [ProfileCardBgHook initProfileCardHook];

            NSLog(@"[MioPlugin] all hooks installed");
        }
    } @catch (NSException *e) {
        NSLog(@"[MioPlugin] ✗ CONSTRUCTOR EXCEPTION: %@ - %@\n%@", e.name, e.reason, e.callStackSymbols);
    }
}