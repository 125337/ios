#import "FontLayoutConfig.h"

@implementation FontLayoutConfig

#pragma mark - Singleton

+ (instancetype)shared {
    static FontLayoutConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[FontLayoutConfig alloc] init];
    });
    return instance;
}

#pragma mark - ConfigModule Protocol

+ (NSString *)modulePrefix {
    return @"FontLayout_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"globalLayoutEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"globalFontSize"      type:ConfigValueTypeFloat default:@(16.0f)],
        [ConfigDescriptor itemWithKey:@"chatLayoutEnabled"   type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"chatFontSize"        type:ConfigValueTypeFloat default:@(16.0f)],
    ];
}

@end
