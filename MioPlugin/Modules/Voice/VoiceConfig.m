#import "VoiceConfig.h"

@implementation VoiceConfig

+ (instancetype)shared {
    static VoiceConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[VoiceConfig alloc] init];
    });
    return instance;
}

+ (NSString *)modulePrefix {
    return @"Voice_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"voicePackEnabled" type:ConfigValueTypeBool default:@(YES)],
        [ConfigDescriptor itemWithKey:@"voicePackContinuousSendEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"voicePackAttachmentEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"voicePackAutoIncludeEnabled" type:ConfigValueTypeBool default:@(NO)],
    ];
}

@end
