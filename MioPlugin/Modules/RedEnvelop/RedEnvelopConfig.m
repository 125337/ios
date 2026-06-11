#import "RedEnvelopConfig.h"

@implementation RedEnvelopConfig

static RedEnvelopConfig *_sharedInstance = nil;

+ (instancetype)shared {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[RedEnvelopConfig alloc] init];
    });
    return _sharedInstance;
}

+ (NSString *)modulePrefix {
    return @"RedEnvelop_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"autoRedEnvelop" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"redEnvelopCatchMe" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"personalRedEnvelopEnable" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"redEnvelopDelay" type:ConfigValueTypeInteger default:@(0)],
        [ConfigDescriptor itemWithKey:@"redEnvelopeDetail" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"redEnvelopTextFilterEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"redEnvelopTextFilter" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"redEnvelopGroupFilterEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"redEnvelopGroupFilterList" type:ConfigValueTypeArray default:@[]],
        [ConfigDescriptor itemWithKey:@"redEnvelopAutoReply" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"redEnvelopAutoReplyInGroup" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"redEnvelopAutoReplyStr" type:ConfigValueTypeString default:@"谢谢老板"],
        // redEnvelopBlackList 已删除 — 与 redEnvelopGroupFilterList 合并
    ];
}

@end