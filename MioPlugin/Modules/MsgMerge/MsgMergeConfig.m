//
//  MsgMergeConfig.m
//  MioPlugin
//
//  消息合并模块配置实现（ConfigModule 协议，ConfigManager 自动持久化）
//

#import "MsgMergeConfig.h"

@implementation MsgMergeConfig

+ (instancetype)shared {
    static MsgMergeConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[MsgMergeConfig alloc] init];
    });
    return instance;
}

+ (NSString *)modulePrefix {
    return @"MsgMerge_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"mmEnable" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"mmOnlyRoom" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"mmMode" type:ConfigValueTypeInteger default:@(0)],
        [ConfigDescriptor itemWithKey:@"mmAvatarPos" type:ConfigValueTypeInteger default:@(0)],
        [ConfigDescriptor itemWithKey:@"mmSpacingMode" type:ConfigValueTypeInteger default:@(0)],
        [ConfigDescriptor itemWithKey:@"mmSpacing" type:ConfigValueTypeFloat default:@(2.0)],
    ];
}

@end
