#import "SideGroupsConfig.h"
#import <objc/message.h>
#import <UIKit/UIKit.h>

@implementation SideGroupsConfig

+ (instancetype)shared {
    static SideGroupsConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[SideGroupsConfig alloc] init];
    });
    return instance;
}

+ (NSString *)modulePrefix {
    return @"SideGroups_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"sdEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"sdPosition" type:ConfigValueTypeInteger default:@(0)],
        [ConfigDescriptor itemWithKey:@"sdRailWidth" type:ConfigValueTypeFloat default:@(54.0)],
        [ConfigDescriptor itemWithKey:@"sdRailFontSize" type:ConfigValueTypeFloat default:@(12.0)],
        [ConfigDescriptor itemWithKey:@"sdFontCustom" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"sdRailXOffset" type:ConfigValueTypeFloat default:@(0.0)],
        [ConfigDescriptor itemWithKey:@"sdShowUnreadBadge" type:ConfigValueTypeBool default:@(YES)],
        [ConfigDescriptor itemWithKey:@"sdDirEnabled" type:ConfigValueTypeBool default:@(YES)],
        [ConfigDescriptor itemWithKey:@"sdTabs" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"sdFilterPinned" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"sdFilterDuplicate" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"sdRecentDays" type:ConfigValueTypeInteger default:@(3)],
        [ConfigDescriptor itemWithKey:@"sdFoldGroupNoRedDot" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"sdRailSelColorCustom" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"sdRailSelColor" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"sdRailSelColorDark" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"sdRailTextColorCustom" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"sdRailTextColor" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"sdRailTextColorDark" type:ConfigValueTypeString default:@""],
    ];
}

+ (CGFloat)resolveFontSize:(CGFloat)base {
    // 对齐电报 reloadTabTitles（Misc_part19.c:4933-4954）：自定义开 → 固定值；关 →
    // 微信私有 dynamicLength: 跟随"设置→通用→字体大小"；API 缺失 → base
    SideGroupsConfig *cfg = [self shared];
    if (cfg.sdFontCustom) {
        return MIN(MAX(cfg.sdRailFontSize, 9), 20);
    }
    SEL dynLen = NSSelectorFromString(@"dynamicLength:");
    if ([UIFont respondsToSelector:dynLen]) {
        double scaled = ((double (*)(id, SEL, double))objc_msgSend)([UIFont class], dynLen, base);
        if (scaled > 1.0) return scaled;
    }
    return base;
}

@end
