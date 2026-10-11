#import "MsgMergeConfig.h"

@implementation MsgMergeConfig

+ (instancetype)shared {
    static MsgMergeConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[MsgMergeConfig alloc] init];
    });
    return instance;
}

+ (NSString *)modulePrefix {
    return @"MsgMerge_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        // 总开关与基础布局
        [ConfigDescriptor itemWithKey:@"msgMergeEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"msgMergeAabEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"msgMergePositionMode" type:ConfigValueTypeInteger default:@(0)],
        [ConfigDescriptor itemWithKey:@"msgMergeAboveShiftPt" type:ConfigValueTypeFloat default:@(0)],
        [ConfigDescriptor itemWithKey:@"msgMergeBelowShiftPt" type:ConfigValueTypeFloat default:@(0)],
        [ConfigDescriptor itemWithKey:@"msgMergeTextSizeOffset" type:ConfigValueTypeFloat default:@(0)],
        [ConfigDescriptor itemWithKey:@"msgMergeTextYShift" type:ConfigValueTypeFloat default:@(0)],

        // 时间标注
        [ConfigDescriptor itemWithKey:@"msgMergeTimeColorHex" type:ConfigValueTypeString default:nil],
        [ConfigDescriptor itemWithKey:@"msgMergeTimeColorDarkHex" type:ConfigValueTypeString default:nil],
        [ConfigDescriptor itemWithKey:@"msgMergeTimeDisplayMode" type:ConfigValueTypeInteger default:@(0)],
        [ConfigDescriptor itemWithKey:@"msgMergeTimeFormatStyle" type:ConfigValueTypeInteger default:@(1)],
        [ConfigDescriptor itemWithKey:@"msgMergeTimeLocaleStyle" type:ConfigValueTypeInteger default:@(0)],
        [ConfigDescriptor itemWithKey:@"msgMergeTimeCustomLine1" type:ConfigValueTypeString default:nil],
        [ConfigDescriptor itemWithKey:@"msgMergeTimeCustomLine2" type:ConfigValueTypeString default:nil],

        // 虚线
        [ConfigDescriptor itemWithKey:@"msgMergeDashStyle" type:ConfigValueTypeInteger default:@(0)],
        [ConfigDescriptor itemWithKey:@"msgMergeDashExtendPt" type:ConfigValueTypeFloat default:@(0)],

        // 引导线
        [ConfigDescriptor itemWithKey:@"msgMergeGuideLineStyle" type:ConfigValueTypeInteger default:@(0)],
        [ConfigDescriptor itemWithKey:@"msgMergeGuideLinePos" type:ConfigValueTypeInteger default:@(0)],
        [ConfigDescriptor itemWithKey:@"msgMergeGuideLineXPad" type:ConfigValueTypeFloat default:@(0)],
    ];
}

@end
