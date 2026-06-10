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
        [ConfigDescriptor boolItem:@"placeholderTextEnabled" default:@(NO)],
        [ConfigDescriptor boolItem:@"placeholderTextBold" default:@(NO)],
        [ConfigDescriptor stringItem:@"placeholderTextText" default:@""],
        [ConfigDescriptor floatItem:@"placeholderTextFontSize" default:@(15.0)],
        [ConfigDescriptor floatItem:@"placeholderTextAlpha" default:@(0.6)],
        [ConfigDescriptor stringItem:@"placeholderTextColorHex" default:@"#808080"],
    ];
}

@end