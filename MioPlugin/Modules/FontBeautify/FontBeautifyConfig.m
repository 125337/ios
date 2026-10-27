#import "FontBeautifyConfig.h"

@implementation FontBeautifyConfig

+ (instancetype)shared {
    static FontBeautifyConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[FontBeautifyConfig alloc] init];
    });
    return instance;
}

+ (NSString *)modulePrefix {
    return @"FontBeautify_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"enableFontBeautify" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"fontBeautifyFamilyName" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"fontBeautifyPostScriptName" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"fontBeautifyFilePath" type:ConfigValueTypeString default:@""],
    ];
}

@end
