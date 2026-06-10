//
//  ChatTopBarConfig.h
//  MioPlugin
//
//  聊天顶栏配置模块
//

#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface ChatTopBarConfig : NSObject <ConfigModule>

// MARK: - 单例
+ (instancetype)shared;

// MARK: - 配置属性

/// 是否显示聊天头像
@property (nonatomic, assign) BOOL showChatAvatar;

/// 头像点击反馈
@property (nonatomic, assign) BOOL avatarTapFeedback;

/// 是否显示添加时间
@property (nonatomic, assign) BOOL showAddTime;

/// 是否显示群成员数量
@property (nonatomic, assign) BOOL showGroupMemberCount;

/// 聊天显示模式
@property (nonatomic, assign) NSInteger chatDisplayMode;

/// 聊天头像尺寸
@property (nonatomic, assign) CGFloat chatAvatarSize;

/// 聊天头像间距
@property (nonatomic, assign) CGFloat chatAvatarSpacing;

/// 聊天头像圆角
@property (nonatomic, assign) CGFloat chatAvatarCornerRadius;

/// 聊天昵称字体大小
@property (nonatomic, assign) CGFloat chatNicknameFontSize;

/// 聊天分隔符尺寸
@property (nonatomic, assign) CGFloat chatSeparatorSize;

/// 聊天标题视图宽度
@property (nonatomic, assign) CGFloat chatTitleViewWidth;

/// 聊天垂直偏移
@property (nonatomic, assign) CGFloat chatVerticalOffset;

/// 聊天水平偏移
@property (nonatomic, assign) CGFloat chatHorizontalOffset;

/// 聊天昵称Y轴偏移
@property (nonatomic, assign) CGFloat chatNicknameOffsetY;

/// 聊天昵称X轴偏移
@property (nonatomic, assign) CGFloat chatNicknameOffsetX;

/// 聊天分隔符文本
@property (nonatomic, copy, nullable) NSString *chatSeparatorText;

/// 判断是否存在图标分隔符文件
+ (BOOL)hasSeparatorIconFile;
/// 获取图标分隔符文件的完整路径
+ (NSString *)separatorIconPath;

/// 是否有任意分隔符（文本/图标）
- (BOOL)hasAnySeparator;

/// 聊天头像黑名单
@property (nonatomic, copy, nullable) NSString *chatAvatarBlacklist;

/// 群成员数量后缀
@property (nonatomic, copy) NSString *chatGroupMemberCountSuffix;

/// 添加时间后缀格式
@property (nonatomic, copy) NSString *chatAddTimeSuffixFormat;

@end

NS_ASSUME_NONNULL_END