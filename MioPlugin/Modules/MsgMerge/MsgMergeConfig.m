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
        [ConfigDescriptor itemWithKey:@"msgMergePositionModeSelf" type:ConfigValueTypeInteger default:@(2)],
        [ConfigDescriptor itemWithKey:@"msgMergePositionModeOther" type:ConfigValueTypeInteger default:@(2)],
        [ConfigDescriptor itemWithKey:@"msgMergeAboveShiftPt" type:ConfigValueTypeFloat default:@(0)],
        [ConfigDescriptor itemWithKey:@"msgMergeBelowShiftPt" type:ConfigValueTypeFloat default:@(0)],
        [ConfigDescriptor itemWithKey:@"msgMergeTextSizeOffset" type:ConfigValueTypeFloat default:@(0)],
        [ConfigDescriptor itemWithKey:@"msgMergeTextYShiftSelf" type:ConfigValueTypeFloat default:@(0)],
        [ConfigDescriptor itemWithKey:@"msgMergeTextYShiftOther" type:ConfigValueTypeFloat default:@(0)],

        // 时间标注
        [ConfigDescriptor itemWithKey:@"msgMergeTimeColorHex" type:ConfigValueTypeString default:nil],
        [ConfigDescriptor itemWithKey:@"msgMergeTimeColorDarkHex" type:ConfigValueTypeString default:nil],
        [ConfigDescriptor itemWithKey:@"msgMergeTimeDisplayMode" type:ConfigValueTypeInteger default:@(0)],
        [ConfigDescriptor itemWithKey:@"msgMergeTimeCustomFormat" type:ConfigValueTypeString default:nil],
        [ConfigDescriptor itemWithKey:@"msgMergeTimeFormatStyle" type:ConfigValueTypeInteger default:@(0)],
        [ConfigDescriptor itemWithKey:@"msgMergeTimeLocaleStyle" type:ConfigValueTypeInteger default:@(0)],

        // 虚线（对方/我方 × 浅色/深色）
        [ConfigDescriptor itemWithKey:@"msgMergeDashStyleOtherLight" type:ConfigValueTypeInteger default:@(0)],
        [ConfigDescriptor itemWithKey:@"msgMergeDashStyleOtherDark" type:ConfigValueTypeInteger default:@(0)],
        [ConfigDescriptor itemWithKey:@"msgMergeDashStyleSelfLight" type:ConfigValueTypeInteger default:@(0)],
        [ConfigDescriptor itemWithKey:@"msgMergeDashStyleSelfDark" type:ConfigValueTypeInteger default:@(0)],
        [ConfigDescriptor itemWithKey:@"msgMergeDashExtendPt" type:ConfigValueTypeFloat default:@(0)],

        // 引导线（对方/我方 × 浅色/深色 + 终点位置 + 偏移）
        [ConfigDescriptor itemWithKey:@"msgMergeGuideLineOtherLight" type:ConfigValueTypeInteger default:@(6)],
        [ConfigDescriptor itemWithKey:@"msgMergeGuideLineOtherDark" type:ConfigValueTypeInteger default:@(6)],
        [ConfigDescriptor itemWithKey:@"msgMergeGuideLineSelfLight" type:ConfigValueTypeInteger default:@(6)],
        [ConfigDescriptor itemWithKey:@"msgMergeGuideLineSelfDark" type:ConfigValueTypeInteger default:@(6)],
        [ConfigDescriptor itemWithKey:@"msgMergeGuideLineEndPosOther" type:ConfigValueTypeInteger default:@(1)],
        [ConfigDescriptor itemWithKey:@"msgMergeGuideLineEndPosSelf" type:ConfigValueTypeInteger default:@(1)],
        [ConfigDescriptor itemWithKey:@"msgMergeGuideLineOffsetOther" type:ConfigValueTypeFloat default:@(8)],
        [ConfigDescriptor itemWithKey:@"msgMergeGuideLineOffsetSelf" type:ConfigValueTypeFloat default:@(8)],
    ];
}

@end
