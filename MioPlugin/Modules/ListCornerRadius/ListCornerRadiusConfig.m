#import "ListCornerRadiusConfig.h"

@implementation ListCornerRadiusConfig

static ListCornerRadiusConfig *_sharedInstance = nil;

+ (instancetype)shared {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[ListCornerRadiusConfig alloc] init];
    });
    return _sharedInstance;
}

+ (NSString *)modulePrefix {
    return @"ListCorner_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor boolItem:@"globalCornerRadiusEnabled" default:@(NO)],
        [ConfigDescriptor boolItem:@"globalCornerMyPageEnabled" default:@(NO)],
        [ConfigDescriptor boolItem:@"globalCornerContactsPageEnabled" default:@(NO)],
        [ConfigDescriptor boolItem:@"globalCornerDiscoverPageEnabled" default:@(NO)],
        [ConfigDescriptor boolItem:@"listSearchCornerRadius" default:@(NO)],
        [ConfigDescriptor boolItem:@"listCellBorder" default:@(NO)],
        [ConfigDescriptor floatItem:@"listCellCornerRadius" default:@(18.0)],
        [ConfigDescriptor floatItem:@"listCellMargin" default:@(9.0)],
        [ConfigDescriptor stringItem:@"listCellLightBgColor" default:@"#FFFFFF"],
        [ConfigDescriptor stringItem:@"listCellDarkBgColor" default:@"#1C1C1E"],
        [ConfigDescriptor floatItem:@"listCellBorderWidth" default:@(2.0)],
        [ConfigDescriptor stringItem:@"listCellBorderColor" default:@"#E5E5E5"],
        [ConfigDescriptor stringItem:@"listCellBorderColorDarkHex" default:@"#3A3A3C"],
    ];
}

@end