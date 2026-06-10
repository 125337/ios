//
//  ChatTopBarConfig.m
//  MioPlugin
//
//  聊天顶栏配置模块
//

#import "ChatTopBarConfig.h"

@implementation ChatTopBarConfig

// MARK: - 单例
static ChatTopBarConfig *_sharedInstance = nil;

+ (instancetype)shared {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        _sharedInstance = [[ChatTopBarConfig alloc] init];
    });
    return _sharedInstance;
}

// MARK: - ConfigModule 协议

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        // BOOL 类型
        [ConfigDescriptor boolItem:@"showChatAvatar" default:@(NO)],
        [ConfigDescriptor boolItem:@"avatarTapFeedback" default:@(NO)],
        [ConfigDescriptor boolItem:@"showAddTime" default:@(NO)],
        [ConfigDescriptor boolItem:@"showGroupMemberCount" default:@(NO)],
        
        // NSInteger 类型
        [ConfigDescriptor integerItem:@"chatDisplayMode" default:@(3)],
        
        // CGFloat 类型
        [ConfigDescriptor floatItem:@"chatAvatarSize" default:@(30.0)],
        [ConfigDescriptor floatItem:@"chatAvatarSpacing" default:@(6.0)],
        [ConfigDescriptor floatItem:@"chatAvatarCornerRadius" default:@(100.0)],
        [ConfigDescriptor floatItem:@"chatNicknameFontSize" default:@(9.0)],
        [ConfigDescriptor floatItem:@"chatSeparatorSize" default:@(30.0)],
        [ConfigDescriptor floatItem:@"chatTitleViewWidth" default:@(210.0)],
        [ConfigDescriptor floatItem:@"chatVerticalOffset" default:@(0)],
        [ConfigDescriptor floatItem:@"chatHorizontalOffset" default:@(0)],
        [ConfigDescriptor floatItem:@"chatNicknameOffsetY" default:@(0)],
        [ConfigDescriptor floatItem:@"chatNicknameOffsetX" default:@(0)],
        
        // NSString 类型
        [ConfigDescriptor stringItem:@"chatSeparatorText" default:@""],
        [ConfigDescriptor stringItem:@"chatSeparatorIcon" default:nil],
        [ConfigDescriptor stringItem:@"chatSeparatorGIF" default:nil],
        [ConfigDescriptor stringItem:@"chatAvatarBlacklist" default:nil],
        [ConfigDescriptor stringItem:@"chatGroupMemberCountSuffix" default:@"%u人"],
        [ConfigDescriptor stringItem:@"chatAddTimeSuffixFormat" default:@"%ld天"],
    ];
}

+ (NSString *)modulePrefix {
    return @"ChatTopBar_";
}

// MARK: - 便捷方法

- (BOOL)hasAnySeparator {
    return self.chatSeparatorText.length > 0
        || self.chatSeparatorIcon.length > 0
        || self.chatSeparatorGIF.length > 0;
}

@end