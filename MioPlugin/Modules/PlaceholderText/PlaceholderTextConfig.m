#import "PlaceholderTextConfig.h"

@implementation PlaceholderTextConfig

static PlaceholderTextConfig *_sharedInstance = nil;

+ (instancetype)shared {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[PlaceholderTextConfig alloc] init];
    });
    return _sharedInstance;
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