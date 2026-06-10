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
        [ConfigDescriptor boolItem:@"showMessageTime" default:@(NO)],
        [ConfigDescriptor floatItem:@"messageTimeFontSize" default:@(7.0)],
        [ConfigDescriptor boolItem:@"messageTimeBoldFont" default:@(NO)],
        [ConfigDescriptor stringItem:@"messageTimeFormat" default:@"HH:mm:ss"],
        [ConfigDescriptor stringItem:@"messageTimeCustomFormat" default:nil],
        [ConfigDescriptor integerItem:@"messageTimePosition" default:@(1)],
        [ConfigDescriptor floatItem:@"messageTimeOffsetX" default:@(0)],
        [ConfigDescriptor floatItem:@"messageTimeOffsetY" default:@(0)],
        [ConfigDescriptor stringItem:@"messageTimeTextColor" default:@"#999999"],
        [ConfigDescriptor floatItem:@"messageTimeBubbleExtWidth" default:@(0)],
        [ConfigDescriptor floatItem:@"messageTimeCornerRadius" default:@(0)],
        [ConfigDescriptor boolItem:@"disableLabelWidthAdjustment" default:@(NO)],
        
        // 时间配色属性
        [ConfigDescriptor stringItem:@"senderTextColorHex" default:@"#808080"],
        [ConfigDescriptor stringItem:@"senderTextColorDarkHex" default:@"#BFBFBF"],
        [ConfigDescriptor stringItem:@"senderBackgroundColorHex" default:@"#00000000"],
        [ConfigDescriptor stringItem:@"senderBackgroundColorDarkHex" default:@"#00000000"],
        [ConfigDescriptor stringItem:@"receiverTextColorHex" default:@"#808080"],
        [ConfigDescriptor stringItem:@"receiverTextColorDarkHex" default:@"#BFBFBF"],
        [ConfigDescriptor stringItem:@"receiverBackgroundColorHex" default:@"#00000000"],
        [ConfigDescriptor stringItem:@"receiverBackgroundColorDarkHex" default:@"#00000000"],
        
        // 好友添加时间
        [ConfigDescriptor boolItem:@"showAddTimeSuffix" default:@(NO)],
        [ConfigDescriptor stringItem:@"addTimeSuffixFormat" default:@"(yyyy-MM-dd)"],
        
        // 隐藏聊天时间分隔线
        [ConfigDescriptor boolItem:@"hideChatTime" default:@(NO)],
    ];
}

@end