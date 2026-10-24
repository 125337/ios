#import "MsgTailConfig.h"

@implementation MsgTailConfig

+ (instancetype)shared {
    static MsgTailConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[MsgTailConfig alloc] init];
    });
    return instance;
}

+ (NSString *)modulePrefix {
    return @"MsgTail_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"enableMsgTail" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"msgTail" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"msgTailShortcutEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"msgTailShortcut" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"enableAppTail" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"appTailAppId" type:ConfigValueTypeString default:@""],
    ];
}

@end
