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
        [ConfigDescriptor itemWithKey:@"musicSource" type:ConfigValueTypeInteger default:@0],
        [ConfigDescriptor itemWithKey:@"commandEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"commandKeyword" type:ConfigValueTypeString default:@"点歌"],
        [ConfigDescriptor itemWithKey:@"replyInGroup" type:ConfigValueTypeBool default:@(YES)],
        [ConfigDescriptor itemWithKey:@"replyInPrivate" type:ConfigValueTypeBool default:@(YES)],
        [ConfigDescriptor itemWithKey:@"replyToSelf" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"failNotice" type:ConfigValueTypeBool default:@(YES)],
    ];
}

@end
