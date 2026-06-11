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
        [ConfigDescriptor itemWithKey:@"showChatAvatar" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"avatarTapFeedback" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"showAddTime" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"showGroupMemberCount" type:ConfigValueTypeBool default:@(NO)],

        // NSInteger 类型
        [ConfigDescriptor itemWithKey:@"chatDisplayMode" type:ConfigValueTypeInteger default:@(3)],

        // CGFloat 类型
        [ConfigDescriptor itemWithKey:@"chatAvatarSize" type:ConfigValueTypeFloat default:@(30.0)],
        [ConfigDescriptor itemWithKey:@"chatAvatarSpacing" type:ConfigValueTypeFloat default:@(6.0)],
        [ConfigDescriptor itemWithKey:@"chatAvatarCornerRadius" type:ConfigValueTypeFloat default:@(100.0)],
        [ConfigDescriptor itemWithKey:@"chatNicknameFontSize" type:ConfigValueTypeFloat default:@(9.0)],
        [ConfigDescriptor itemWithKey:@"chatSeparatorSize" type:ConfigValueTypeFloat default:@(30.0)],
        [ConfigDescriptor itemWithKey:@"chatTitleViewWidth" type:ConfigValueTypeFloat default:@(210.0)],
        [ConfigDescriptor itemWithKey:@"chatVerticalOffset" type:ConfigValueTypeFloat default:@(0)],
        [ConfigDescriptor itemWithKey:@"chatHorizontalOffset" type:ConfigValueTypeFloat default:@(0)],
        [ConfigDescriptor itemWithKey:@"chatNicknameOffsetY" type:ConfigValueTypeFloat default:@(0)],
        [ConfigDescriptor itemWithKey:@"chatNicknameOffsetX" type:ConfigValueTypeFloat default:@(0)],

        // NSString 类型
        [ConfigDescriptor itemWithKey:@"chatSeparatorText" type:ConfigValueTypeString default:@""],
        [ConfigDescriptor itemWithKey:@"chatAvatarBlacklist" type:ConfigValueTypeString default:nil],
        [ConfigDescriptor itemWithKey:@"chatGroupMemberCountSuffix" type:ConfigValueTypeString default:@"%u人"],
        [ConfigDescriptor itemWithKey:@"chatAddTimeSuffixFormat" type:ConfigValueTypeString default:@"%ld天"],
    ];
}

+ (NSString *)modulePrefix {
    return @"ChatTopBar_";
}

// MARK: - 便捷方法

- (BOOL)hasAnySeparator {
    return self.chatSeparatorText.length > 0
        || [ChatTopBarConfig hasSeparatorIconFile];
}

+ (NSString *)separatorIconPath {
    return [NSHomeDirectory() stringByAppendingPathComponent:@"Documents/Miopng/separator_icon.png"];
}

+ (BOOL)hasSeparatorIconFile {
    return [[NSFileManager defaultManager] fileExistsAtPath:[self separatorIconPath]];
}

@end