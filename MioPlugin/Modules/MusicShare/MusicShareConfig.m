#import "MusicShareConfig.h"

@implementation MusicShareConfig

+ (instancetype)shared {
    static MusicShareConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[MusicShareConfig alloc] init];
    });
    return instance;
}

+ (NSString *)modulePrefix {
    return @"MusicShare_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"musicShareEnabled" type:ConfigValueTypeBool default:@(YES)],
    ];
}

@end
