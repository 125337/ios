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
        [ConfigDescriptor itemWithKey:@"mmSpacingMode" type:ConfigValueTypeInteger default:@(0)],
        [ConfigDescriptor itemWithKey:@"mmSpacing" type:ConfigValueTypeFloat default:@(2.0)],
        [ConfigDescriptor itemWithKey:@"mmSepMedia" type:ConfigValueTypeBool default:@(YES)],
        [ConfigDescriptor itemWithKey:@"mmSepEmoticon" type:ConfigValueTypeBool default:@(YES)],
        [ConfigDescriptor itemWithKey:@"mmSepSystem" type:ConfigValueTypeBool default:@(YES)],
        [ConfigDescriptor itemWithKey:@"mmSepTime" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"mmOwnLayout" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"mmNickJudgeTakeover" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"mmAvatarOffset" type:ConfigValueTypeFloat default:@(0.0)],
        [ConfigDescriptor itemWithKey:@"mmWholeOffset" type:ConfigValueTypeFloat default:@(0.0)],
    ];
}

@end
