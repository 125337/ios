#import "PrivacyConfig.h"

@implementation PrivacyConfig

+ (instancetype)shared {
    static PrivacyConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[PrivacyConfig alloc] init];
    });
    return instance;
}

+ (NSString *)modulePrefix {
    return @"Privacy_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"privacyEncryptEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"privacyEncryptPassword" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"privacyEncryptBiometricEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"privacyEncryptProtectionTime" type:ConfigValueTypeInteger default:@(15)],
        [ConfigDescriptor itemWithKey:@"privacyBlurEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"privacyBlurDegree" type:ConfigValueTypeInteger default:@(80)],
        [ConfigDescriptor itemWithKey:@"privacyKeepAliveEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"privacyKeepAliveInterval" type:ConfigValueTypeInteger default:@(25)],
        [ConfigDescriptor itemWithKey:@"privacyOfflineNotifyEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"privacyPageLockUnlockTime" type:ConfigValueTypeInteger default:@(15)],
        // ── 指定页面上锁（8 项） ──
        [ConfigDescriptor itemWithKey:@"privacyLockMyPayEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"privacyLockMyFavoriteEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"privacyLockMyMomentEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"privacyLockMyChannelsEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"privacyLockMyPluginEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"privacyLockMySettingEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"privacyLockMomentEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"privacyLockChannelsEnabled" type:ConfigValueTypeBool default:@(NO)],
    ];
}

@end
