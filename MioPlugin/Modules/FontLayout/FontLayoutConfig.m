#import "FontLayoutConfig.h"

@implementation FontLayoutConfig

MIO_SINGLETON_IMPL(FontLayoutConfig)

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

@dynamic globalLayoutEnabled;
@dynamic globalFontSize;
@dynamic chatLayoutEnabled;
@dynamic chatFontSize;

@end
