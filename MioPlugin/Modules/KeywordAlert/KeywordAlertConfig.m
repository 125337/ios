#import "KeywordAlertConfig.h"

@implementation KeywordAlertConfig

+ (instancetype)shared {
    static KeywordAlertConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[KeywordAlertConfig alloc] init];
    });
    return instance;
}

+ (NSString *)modulePrefix {
    return @"KeywordAlert_";
}

+ (NSUInteger)historyLimit {
    return 200;
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"keywordAlertEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"keywordAlertKeywords" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"keywordAlertDisabledKeywords" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"keywordAlertGroupOnlyEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"keywordAlertPrivateOnlyEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"keywordAlertSelectedGroups" type:ConfigValueTypeArray default:@[]],
        [ConfigDescriptor itemWithKey:@"keywordAlertBannerEnabled" type:ConfigValueTypeBool default:@(YES)],
        [ConfigDescriptor itemWithKey:@"keywordAlertNotifyEnabled" type:ConfigValueTypeBool default:@(YES)],
        [ConfigDescriptor itemWithKey:@"keywordAlertHistoryRecords" type:ConfigValueTypeArray default:@[]],
    ];
}

@end
