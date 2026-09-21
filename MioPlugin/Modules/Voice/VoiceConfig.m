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
        [ConfigDescriptor itemWithKey:@"voicePackPlusLongPressEnabled" type:ConfigValueTypeBool default:@(NO)],
        // ── 语音功能 ──
        [ConfigDescriptor itemWithKey:@"voiceForwardEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"voiceFakeDuration" type:ConfigValueTypeInteger default:@(0)],
        [ConfigDescriptor itemWithKey:@"voiceAutoToTextEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"voiceDragProgressEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"voiceAutoSpeedEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"voiceBackgroundPlayEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"voiceCallPlayEnabled" type:ConfigValueTypeBool default:@(NO)],
    ];
}

@end
