#import "CardBgConfig.h"

@implementation CardBgConfig

static CardBgConfig *_sharedInstance = nil;

+ (instancetype)shared {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[CardBgConfig alloc] init];
    });
    return _sharedInstance;
}

+ (NSString *)modulePrefix {
    return @"CardBg_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor boolItem:@"cardBgMaterialEnabled" default:@(NO)],
        [ConfigDescriptor boolItem:@"cardBgCornerEnabled" default:@(NO)],
        [ConfigDescriptor boolItem:@"cardBgCornerUseGlobal" default:@(NO)],
        [ConfigDescriptor floatItem:@"cardBgCornerRadius" default:@(18.0)],
        [ConfigDescriptor floatItem:@"cardBgCornerMargin" default:@(9.0)],
        [ConfigDescriptor stringItem:@"cardBgCornerBgColor" default:@"#FFFFFF"],
        [ConfigDescriptor stringItem:@"cardBgCornerDarkBgColor" default:@"#1C1C1E"],
        [ConfigDescriptor floatItem:@"cardBgStrokeWidth" default:@(2.0)],
        [ConfigDescriptor boolItem:@"cardBgHidden" default:@(NO)],
        [ConfigDescriptor boolItem:@"cardBgHideStateEnabled" default:@(NO)],
        [ConfigDescriptor floatItem:@"cardBgListSpacing" default:@(0)],
        [ConfigDescriptor stringItem:@"cardBgImagePath" default:nil],
        [ConfigDescriptor integerItem:@"cardBgFillMode" default:@(0)],
        [ConfigDescriptor integerItem:@"cardBgAlignment" default:@(0)],
        [ConfigDescriptor integerItem:@"cardBgLayer" default:@(0)],
        [ConfigDescriptor floatItem:@"cardBgOffsetY" default:@(0)],
        [ConfigDescriptor floatItem:@"cardBgOffsetX" default:@(0)],
    ];
}

@end