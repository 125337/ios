#import "JokerConfig.h"

@implementation JokerConfig

+ (instancetype)shared {
    static JokerConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[JokerConfig alloc] init];
    });
    return instance;
}

+ (NSString *)modulePrefix {
    return @"Joker_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"enableJoker" type:ConfigValueTypeBool default:@(NO)],
    ];
}

@end