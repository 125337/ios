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
        [ConfigDescriptor boolItem:@"autoRedEnvelop" default:@(NO)],
        [ConfigDescriptor boolItem:@"redEnvelopCatchMe" default:@(NO)],
        [ConfigDescriptor boolItem:@"personalRedEnvelopEnable" default:@(NO)],
        [ConfigDescriptor integerItem:@"redEnvelopDelay" default:@(0)],
        [ConfigDescriptor boolItem:@"redEnvelopeDetail" default:@(NO)],
        [ConfigDescriptor boolItem:@"redEnvelopTextFilterEnabled" default:@(NO)],
        [ConfigDescriptor stringItem:@"redEnvelopTextFilter" default:@""],
        [ConfigDescriptor boolItem:@"redEnvelopGroupFilterEnabled" default:@(NO)],
        [ConfigDescriptor arrayItem:@"redEnvelopGroupFilterList" default:@[]],
        [ConfigDescriptor boolItem:@"redEnvelopAutoReply" default:@(NO)],
        [ConfigDescriptor boolItem:@"redEnvelopAutoReplyInGroup" default:@(NO)],
        [ConfigDescriptor stringItem:@"redEnvelopAutoReplyStr" default:@"谢谢老板"],
        [ConfigDescriptor arrayItem:@"redEnvelopBlackList" default:@[]],
    ];
}

@end