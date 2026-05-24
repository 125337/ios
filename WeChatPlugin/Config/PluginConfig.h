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
@property (nonatomic, assign) BOOL customColorsEnabled;
@property (nonatomic, assign) BOOL autoRedEnvelop;
@property (nonatomic, assign) BOOL redEnvelopCatchMe;
@property (nonatomic, assign) BOOL personalRedEnvelopEnable;
@property (nonatomic, assign) unsigned int redEnvelopDelay;
@property (nonatomic, assign) BOOL redEnvelopeDetail;
@property (nonatomic, assign) BOOL redEnvelopTextFilterEnabled;
@property (nonatomic, copy) NSString *redEnvelopTextFilter;
@property (nonatomic, assign) BOOL redEnvelopGroupFilterEnabled;
@property (nonatomic, retain) NSArray<NSString *> *redEnvelopGroupFilterList;
@property (nonatomic, assign) BOOL redEnvelopAutoReply;
@property (nonatomic, assign) BOOL redEnvelopAutoReplyInGroup;
@property (nonatomic, copy) NSString *redEnvelopAutoReplyStr;
@property (nonatomic, retain) NSArray<NSString *> *redEnvelopBlackList;
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
@property (nonatomic, assign) BOOL notifySender;
@property (nonatomic, copy) NSString *notifySenderTemplate;
@property (nonatomic, assign) double notifySenderCooldown;
@property (nonatomic, retain) NSMutableDictionary<NSString *, NSString *> *sessionFormats;
@property (nonatomic, retain) NSMutableDictionary<NSString *, NSString *> *userFormats;
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
