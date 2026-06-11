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
        [ConfigDescriptor itemWithKey:@"cardBgMaterialEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"cardBgCornerEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"cardBgCornerUseGlobal" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"cardBgCornerRadius" type:ConfigValueTypeFloat default:@(18.0)],
        [ConfigDescriptor itemWithKey:@"cardBgCornerMargin" type:ConfigValueTypeFloat default:@(9.0)],
        [ConfigDescriptor itemWithKey:@"cardBgCornerBgColor" type:ConfigValueTypeString default:@"#FFFFFF"],
        [ConfigDescriptor itemWithKey:@"cardBgCornerDarkBgColor" type:ConfigValueTypeString default:@"#1C1C1E"],
        [ConfigDescriptor itemWithKey:@"cardBgStrokeWidth" type:ConfigValueTypeFloat default:@(2.0)],
        [ConfigDescriptor itemWithKey:@"cardBgHidden" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"cardBgHideStateEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"cardBgListSpacing" type:ConfigValueTypeFloat default:@(0)],
        [ConfigDescriptor itemWithKey:@"cardBgFillMode" type:ConfigValueTypeInteger default:@(0)],
        [ConfigDescriptor itemWithKey:@"cardBgAlignment" type:ConfigValueTypeInteger default:@(0)],
        [ConfigDescriptor itemWithKey:@"cardBgLayer" type:ConfigValueTypeInteger default:@(0)],
        [ConfigDescriptor itemWithKey:@"cardBgOffsetY" type:ConfigValueTypeFloat default:@(0)],
        [ConfigDescriptor itemWithKey:@"cardBgOffsetX" type:ConfigValueTypeFloat default:@(0)],

        // ★ 资料卡边框（从 ListCornerRadiusConfig 迁移）
        [ConfigDescriptor itemWithKey:@"cardBgBorderEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"cardBgBorderWidth" type:ConfigValueTypeFloat default:@(2.0)],
        [ConfigDescriptor itemWithKey:@"cardBgBorderColor" type:ConfigValueTypeString default:@"#E5E5E5"],
        [ConfigDescriptor itemWithKey:@"cardBgBorderColorDarkHex" type:ConfigValueTypeString default:@"#3A3A3C"],

        // ★ 箭码隐藏（从 ListCornerRadiusConfig 迁移）
        [ConfigDescriptor itemWithKey:@"cardBgHideArrow" type:ConfigValueTypeBool default:@(NO)],
    ];
}

+ (NSString *)backgroundImageDirectory {
    NSString *docsDir = [NSSearchPathForDirectoriesInDomains(
        NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
    return [docsDir stringByAppendingPathComponent:@"MioCardBackground"];
}

+ (NSString *)backgroundImagePath {
    NSString *dir = [self backgroundImageDirectory];
    NSString *pngPath = [dir stringByAppendingPathComponent:@"MioCardBg.png"];
    if ([[NSFileManager defaultManager] fileExistsAtPath:pngPath]) return pngPath;
    return nil;
}

+ (BOOL)hasBackgroundImage {
    return [self backgroundImagePath] != nil;
}

+ (void)deleteBackgroundImage {
    NSFileManager *fm = [NSFileManager defaultManager];
    NSString *dir = [self backgroundImageDirectory];
    [fm removeItemAtPath:[dir stringByAppendingPathComponent:@"MioCardBg.png"] error:nil];
}

@end