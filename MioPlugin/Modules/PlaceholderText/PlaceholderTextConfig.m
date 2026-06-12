#import "PlaceholderTextConfig.h"

@implementation PlaceholderTextConfig

+ (instancetype)shared {
    static PlaceholderTextConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[PlaceholderTextConfig alloc] init];
    });
    return instance;
}

+ (NSString *)modulePrefix {
    return @"Placeholder_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"placeholderTextEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"placeholderTextBold" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"placeholderTextText" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"placeholderTextFontSize" type:ConfigValueTypeFloat default:@(15.0)],
        [ConfigDescriptor itemWithKey:@"placeholderTextAlpha" type:ConfigValueTypeFloat default:@(0.6)],
        [ConfigDescriptor itemWithKey:@"placeholderTextColorHex" type:ConfigValueTypeString default:@"#808080"],
    ];
}

@end