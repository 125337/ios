#import "MessageTimeConfig.h"

static MessageTimeConfig *_sharedInstance = nil;

@implementation MessageTimeConfig

+ (instancetype)shared {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[MessageTimeConfig alloc] init];
    });
    return _sharedInstance;
}

+ (NSString *)modulePrefix {
    return @"MsgTime_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        // 基本属性
        [ConfigDescriptor itemWithKey:@"showMessageTime" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"messageTimeFontSize" type:ConfigValueTypeFloat default:@(7.0)],
        [ConfigDescriptor itemWithKey:@"messageTimeBoldFont" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"messageTimeFormat" type:ConfigValueTypeString default:@"HH:mm:ss"],
        [ConfigDescriptor itemWithKey:@"messageTimeCustomFormat" type:ConfigValueTypeString default:nil],
        [ConfigDescriptor itemWithKey:@"messageTimePosition" type:ConfigValueTypeInteger default:@(1)],
        [ConfigDescriptor itemWithKey:@"messageTimeOffsetX" type:ConfigValueTypeFloat default:@(0)],
        [ConfigDescriptor itemWithKey:@"messageTimeOffsetY" type:ConfigValueTypeFloat default:@(0)],
        [ConfigDescriptor itemWithKey:@"messageTimeTextColor" type:ConfigValueTypeString default:@"#999999"],
        [ConfigDescriptor itemWithKey:@"messageTimeBubbleExtWidth" type:ConfigValueTypeFloat default:@(0)],
        [ConfigDescriptor itemWithKey:@"messageTimeCornerRadius" type:ConfigValueTypeFloat default:@(0)],
        [ConfigDescriptor itemWithKey:@"disableLabelWidthAdjustment" type:ConfigValueTypeBool default:@(NO)],

        // 时间配色属性
        [ConfigDescriptor itemWithKey:@"senderTextColorHex" type:ConfigValueTypeString default:@"#808080"],
        [ConfigDescriptor itemWithKey:@"senderTextColorDarkHex" type:ConfigValueTypeString default:@"#BFBFBF"],
        [ConfigDescriptor itemWithKey:@"senderBackgroundColorHex" type:ConfigValueTypeString default:@"#00000000"],
        [ConfigDescriptor itemWithKey:@"senderBackgroundColorDarkHex" type:ConfigValueTypeString default:@"#00000000"],
        [ConfigDescriptor itemWithKey:@"receiverTextColorHex" type:ConfigValueTypeString default:@"#808080"],
        [ConfigDescriptor itemWithKey:@"receiverTextColorDarkHex" type:ConfigValueTypeString default:@"#BFBFBF"],
        [ConfigDescriptor itemWithKey:@"receiverBackgroundColorHex" type:ConfigValueTypeString default:@"#00000000"],
        [ConfigDescriptor itemWithKey:@"receiverBackgroundColorDarkHex" type:ConfigValueTypeString default:@"#00000000"],

        // 好友添加时间
        [ConfigDescriptor itemWithKey:@"showAddTimeSuffix" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"addTimeSuffixFormat" type:ConfigValueTypeString default:@"(yyyy-MM-dd)"],

        // 隐藏聊天时间分隔线
        [ConfigDescriptor itemWithKey:@"hideChatTime" type:ConfigValueTypeBool default:@(NO)],
    ];
}

@end