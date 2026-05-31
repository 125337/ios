#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Constants.h"

@interface PluginConfig : NSObject
+ (instancetype)shared;
@property (nonatomic, assign) BOOL preventRecall;
@property (nonatomic, assign) BOOL debugLogging;
@property (nonatomic, assign) BOOL hideContent;
@property (nonatomic, assign) BOOL noTip;
@property (nonatomic, assign) BOOL bottomPosition;
@property (nonatomic, assign) BOOL sendInterceptedContent;
@property (nonatomic, assign) BOOL interceptNotifyEnabled;
@property (nonatomic, assign) BOOL customNotifyEnabled;
@property (nonatomic, assign) BOOL clearUnreadEnabled;
@property (nonatomic, assign) BOOL hideDiscoverBadge;
@property (nonatomic, assign) BOOL hideEnterpriseBadge;
@property (nonatomic, assign) BOOL enableJoker;
@property (nonatomic, assign) BOOL enableGroupExitMonitor;
@property (nonatomic, assign) BOOL quickActionsEnabled;
@property (nonatomic, assign) BOOL customColorsEnabled;
@property (nonatomic, assign) BOOL autoRedEnvelop;
@property (nonatomic, assign) BOOL redEnvelopCatchMe;
@property (nonatomic, assign) BOOL personalRedEnvelopEnable;
@property (nonatomic, assign) unsigned int redEnvelopDelay;
@property (nonatomic, assign) BOOL redEnvelopeDetail;
@property (nonatomic, assign) BOOL redEnvelopTextFilterEnabled;
@property (nonatomic, copy) NSString *redEnvelopTextFilter;
@property (nonatomic, assign) BOOL redEnvelopGroupFilterEnabled;
@property (nonatomic, strong) NSArray<NSString *> *redEnvelopGroupFilterList;
@property (nonatomic, assign) BOOL redEnvelopAutoReply;
@property (nonatomic, assign) BOOL redEnvelopAutoReplyInGroup;
@property (nonatomic, copy) NSString *redEnvelopAutoReplyStr;
@property (nonatomic, strong) NSArray<NSString *> *redEnvelopBlackList;
@property (nonatomic, assign) BOOL autoConfirmTransfer;
@property (nonatomic, assign) BOOL autoConfirmTransferPersonal;
@property (nonatomic, assign) BOOL autoConfirmTransferGroup;
@property (nonatomic, assign) unsigned int autoConfirmTransferDelay;
@property (nonatomic, assign) long long autoConfirmTransferMaxAmount;
@property (nonatomic, assign) BOOL autoConfirmTransferAutoReply;
@property (nonatomic, copy) NSString *autoConfirmTransferAutoReplyStr;

#pragma mark - 消息时间显示
@property (nonatomic, assign) BOOL showMessageTime;
@property (nonatomic, assign) CGFloat messageTimeFontSize;
@property (nonatomic, assign) BOOL messageTimeBoldFont;
@property (nonatomic, copy) NSString *messageTimeFormat;
@property (nonatomic, copy) NSString *messageTimeCustomFormat;
@property (nonatomic, assign) NSInteger messageTimePosition;
@property (nonatomic, assign) CGFloat messageTimeOffsetX;
@property (nonatomic, assign) CGFloat messageTimeOffsetY;
@property (nonatomic, copy) NSString *messageTimeTextColor;
@property (nonatomic, assign) CGFloat messageTimeBubbleExtWidth;
@property (nonatomic, assign) CGFloat messageTimeCornerRadius;
@property (nonatomic, assign) BOOL disableLabelWidthAdjustment;
// 发送者配色
@property (nonatomic, copy) NSString *senderTextColorHex;
@property (nonatomic, copy) NSString *senderTextColorDarkHex;
@property (nonatomic, copy) NSString *senderBackgroundColorHex;
@property (nonatomic, copy) NSString *senderBackgroundColorDarkHex;
// 接收者配色
@property (nonatomic, copy) NSString *receiverTextColorHex;
@property (nonatomic, copy) NSString *receiverTextColorDarkHex;
@property (nonatomic, copy) NSString *receiverBackgroundColorHex;
@property (nonatomic, copy) NSString *receiverBackgroundColorDarkHex;

#pragma mark - 隐藏聊天时间分隔线
@property (nonatomic, assign) BOOL hideChatTime;

#pragma mark - 界面净化
@property (nonatomic, assign) BOOL hideSeparatorLine;       // 隐藏水平分割线（UIView全局Hook）
@property (nonatomic, assign) BOOL hideRevokeHint;          // 隐藏撤回消息提示标签
@property (nonatomic, assign) BOOL hidePatHint;             // 隐藏拍一拍消息提示标签
@property (nonatomic, assign) BOOL hideVoiceRedDot;         // 隐藏语音红点和转文字标签
@property (nonatomic, assign) BOOL hideBubbleBackground;    // 隐藏聊天气泡背景(气泡透明)
@property (nonatomic, assign) BOOL disableDictation;        // 禁用聊天页输入框听写功能
#pragma mark - 隐藏头像
@property (nonatomic, assign) BOOL hideC2COtherAvatar;       // 私聊-隐藏对方头像
@property (nonatomic, assign) BOOL hideC2CSelfAvatar;        // 私聊-隐藏自己头像
@property (nonatomic, assign) BOOL hideGroupOtherAvatar;     // 群聊-隐藏对方头像
@property (nonatomic, assign) BOOL hideGroupSelfAvatar;      // 群聊-隐藏自己头像
@property (nonatomic, assign) BOOL hideOAOtherAvatar;        // 公众号-隐藏对方头像
@property (nonatomic, assign) BOOL hideOASelfAvatar;         // 公众号-隐藏自己头像

#pragma mark - 聊天顶栏设置
@property (nonatomic, assign) BOOL showChatAvatar;           // 显示聊天头像
@property (nonatomic, assign) BOOL avatarTapFeedback;        // 头像点击反馈
@property (nonatomic, assign) BOOL showAddTime;              // 显示添加时间
@property (nonatomic, assign) BOOL showGroupMemberCount;     // 显示群聊人数

// 聊天顶栏数值配置
@property (nonatomic, assign) NSInteger chatDisplayMode;     // 头像显示模式 (0~7)
@property (nonatomic, assign) CGFloat chatAvatarSize;        // 头像大小 (默认30)
@property (nonatomic, assign) CGFloat chatAvatarSpacing;     // 头像间距 (默认3)
@property (nonatomic, assign) CGFloat chatAvatarCornerRadius;// 头像圆角系数 (默认1.0)
@property (nonatomic, assign) CGFloat chatNicknameFontSize;  // 昵称字体大小 (默认9)
@property (nonatomic, assign) CGFloat chatSeparatorSize;     // 分隔符大小 (默认12)
@property (nonatomic, assign) CGFloat chatTitleViewWidth;    // titleView整体宽度 (默认210)
@property (nonatomic, copy)   NSString *chatSeparatorText;   // 分隔符文字

// 位移偏移
@property (nonatomic, assign) CGFloat chatVerticalOffset;    // 整体垂直偏移
@property (nonatomic, assign) CGFloat chatHorizontalOffset;  // 整体水平偏移
@property (nonatomic, assign) CGFloat chatNicknameOffsetY;   // 昵称垂直偏移
@property (nonatomic, assign) CGFloat chatNicknameOffsetX;   // 昵称水平偏移
@property (nonatomic, copy)   NSString *chatGroupMemberCountSuffix;  // 群成员数后缀格式（默认"%u人"）
@property (nonatomic, copy)   NSString *chatAddTimeSuffixFormat;     // 聊天顶栏添加时间后缀格式（默认"%ld天"）
@property (nonatomic, copy)   NSString *chatAvatarBlacklist;         // 头像黑名单（JSON字符串）
@property (nonatomic, copy)   NSString *chatSeparatorIcon;           // 自定义分隔符图标路径
@property (nonatomic, copy)   NSString *chatSeparatorGIF;            // 自定义分隔符GIF路径

#pragma mark - 名字颜色设置
@property (nonatomic, assign) BOOL enableChatNameColor;      // 启用聊天界面名称颜色
@property (nonatomic, assign) BOOL enableChatNameSize;       // 启用聊天界面名称大小
@property (nonatomic, assign) CGFloat chatNameFontSize;      // 聊天名称字体大小
@property (nonatomic, assign) BOOL enableMomentsNameColor;   // 启用朋友圈名称颜色
@property (nonatomic, assign) BOOL enableMomentsNameSize;    // 启用朋友圈名称大小
@property (nonatomic, assign) CGFloat momentsNameFontSize;   // 朋友圈名称字体大小

#pragma mark - 好友添加时间后缀
@property (nonatomic, assign) BOOL showAddTimeSuffix;
@property (nonatomic, copy) NSString *addTimeSuffixFormat;
@property (nonatomic, copy) NSString *notifyFormat;
@property (nonatomic, copy) NSString *dateFormat;
@property (nonatomic, copy) NSString *customText;
@property (nonatomic, copy) NSString *interceptNotifyTemplate;
@property (nonatomic, copy) NSString *customNotifyFormat;
@property (nonatomic, copy) NSString *revokeTemplate;
@property (nonatomic, copy) NSString *nameColorHex;
@property (nonatomic, copy) NSString *timeColorHex;
@property (nonatomic, copy) NSString *contentColorHex;
@property (nonatomic, copy) NSString *darkNameColorHex;
@property (nonatomic, copy) NSString *darkTimeColorHex;
@property (nonatomic, copy) NSString *darkContentColorHex;
#pragma mark - 通知撤回者
#pragma mark - 附件布局
@property (nonatomic, assign) BOOL attachLayoutEnabled;
@property (nonatomic, copy) NSString *attachLayoutColumns;
@property (nonatomic, copy) NSString *attachLayoutRows;

#pragma mark - 文本占位
@property (nonatomic, assign) BOOL placeholderTextEnabled;
@property (nonatomic, assign) BOOL placeholderTextBold;
@property (nonatomic, copy) NSString *placeholderTextText;
@property (nonatomic, assign) CGFloat placeholderTextFontSize;
@property (nonatomic, assign) CGFloat placeholderTextAlpha;
@property (nonatomic, copy) NSString *placeholderTextColorHex;

#pragma mark - 列表圆角
@property (nonatomic, assign) BOOL listCornerRadiusEnabled;
@property (nonatomic, assign) BOOL listSearchCornerRadius;
@property (nonatomic, assign) BOOL listHideRightQRCode;
@property (nonatomic, assign) BOOL listCellBorder;
@property (nonatomic, assign) CGFloat listCellCornerRadius;
@property (nonatomic, assign) CGFloat listCellMargin;
@property (nonatomic, assign) CGFloat listPinnedSessionTopSpacing;
@property (nonatomic, assign) CGFloat listNormalSessionSpacing;
@property (nonatomic, copy) NSString *listCellLightBgColor;
@property (nonatomic, copy) NSString *listCellDarkBgColor;
@property (nonatomic, copy) NSString *listCardLightBgColor;
@property (nonatomic, copy) NSString *listCardDarkBgColor;
@property (nonatomic, assign) CGFloat listCellBorderWidth;
@property (nonatomic, copy) NSString *listCellBorderLightColor;
@property (nonatomic, copy) NSString *listCellBorderDarkColor;
@property (nonatomic, assign) BOOL listDisableLabelWidthAdjustment;
@property (nonatomic, assign) BOOL listMediaCornerEnabled;
@property (nonatomic, assign) NSInteger listSearchBoxCornerRadius;

@property (nonatomic, assign) BOOL notifySender;
@property (nonatomic, copy) NSString *notifySenderTemplate;
@property (nonatomic, assign) double notifySenderCooldown;
@property (nonatomic, strong) NSMutableDictionary<NSString *, NSString *> *sessionFormats;
@property (nonatomic, strong) NSMutableDictionary<NSString *, NSString *> *userFormats;
- (NSString *)notifyFormatForSession:(NSString *)session user:(NSString *)user;
- (UIColor *)colorFromHex:(NSString *)hex;
- (NSString *)hexFromColor:(UIColor *)color;
- (BOOL)isDarkMode;
- (UIColor *)nameColor;
- (UIColor *)timeColor;
- (UIColor *)contentColor;
- (NSString *)applyTemplate:(NSString *)tmpl time:(NSString *)time name:(NSString *)name content:(NSString *)content;
- (NSString *)applyRevokeTemplate:(NSString *)tmpl name:(NSString *)name content:(NSString *)content createTime:(unsigned int)createTime;
- (void)save;
- (void)loadDefaults;
- (void)resetAllConfig;
@end
