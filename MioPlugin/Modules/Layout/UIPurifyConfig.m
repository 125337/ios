#import "UIPurifyConfig.h"

@implementation UIPurifyConfig

static UIPurifyConfig *_sharedInstance = nil;

+ (instancetype)shared {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[UIPurifyConfig alloc] init];
    });
    return _sharedInstance;
}

+ (NSString *)modulePrefix {
    return @"UIPurify_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor boolItem:@"hideSeparatorLine" default:@(NO)],
        [ConfigDescriptor boolItem:@"hideRevokeHint" default:@(NO)],
        [ConfigDescriptor boolItem:@"hidePatHint" default:@(NO)],
        [ConfigDescriptor boolItem:@"hideVoiceRedDot" default:@(NO)],
        [ConfigDescriptor boolItem:@"hideBubbleBackground" default:@(NO)],
        [ConfigDescriptor boolItem:@"disableDictation" default:@(NO)],
    ];
}

@end