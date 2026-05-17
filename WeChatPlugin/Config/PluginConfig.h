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
@property (nonatomic, assign) NSInteger messageTimePosition;
@property (nonatomic, assign) CGFloat messageTimeOffsetX;
@property (nonatomic, assign) CGFloat messageTimeOffsetY;
@property (nonatomic, copy) NSString *messageTimeTextColor;
@property (nonatomic, assign) CGFloat messageTimeBubbleExtWidth;

#pragma mark - 隐藏聊天时间分隔线
@property (nonatomic, assign) BOOL hideChatTime;

#pragma mark - 好友添加时间后缀
@property (nonatomic, assign) BOOL showAddTimeSuffix;
@property (nonatomic, copy) NSString *addTimeSuffixFormat;

#pragma mark - 快速置顶
@property (nonatomic, assign) BOOL quickPinEnabled;
@property (nonatomic, assign) BOOL foldTopSessionEnabled;
@property (nonatomic, assign) BOOL brandTopEnabled;
@property (nonatomic, assign) BOOL chatBoxTopEnabled;

#pragma mark - 会话盒子
@property (nonatomic, assign) BOOL addChatBoxEnabled;
@property (nonatomic, assign) BOOL managerChatBoxEnabled;
@property (nonatomic, assign) BOOL sessionGestureEnabled;

#pragma mark - 快速备注
@property (nonatomic, assign) BOOL quickRemarkEnabled;

#pragma mark - 免打扰
@property (nonatomic, assign) BOOL quickMuteEnabled;
@property (nonatomic, assign) BOOL addMuteMenuItemEnabled;
@property (nonatomic, copy) NSString *muteAutoReplyMsg;
@property (nonatomic, copy) NSString *muteWorkingTime;
@property (nonatomic, strong) NSMutableArray *muteContactList;

@property (nonatomic, copy) NSString *notifyFormat;
@property (nonatomic, copy) NSString *dateFormat;
@property (nonatomic, copy) NSString *customText;
@property (nonatomic, copy) NSString *interceptNotifyTemplate;
@property (nonatomic, copy) NSString *customNotifyFormat;
@property (nonatomic, copy) NSString *nameColorHex;
@property (nonatomic, copy) NSString *timeColorHex;
@property (nonatomic, copy) NSString *contentColorHex;
@property (nonatomic, copy) NSString *darkNameColorHex;
@property (nonatomic, copy) NSString *darkTimeColorHex;
@property (nonatomic, copy) NSString *darkContentColorHex;
@property (nonatomic, strong) NSMutableDictionary<NSString *, NSString *> *sessionFormats;
@property (nonatomic, strong) NSMutableDictionary<NSString *, NSString *> *userFormats;
- (NSString *)notifyFormatForSession:(NSString *)session user:(NSString *)user;
- (UIColor *)colorFromHex:(NSString *)hex;
- (BOOL)isDarkMode;
- (UIColor *)nameColor;
- (UIColor *)timeColor;
- (UIColor *)contentColor;
- (NSString *)applyTemplate:(NSString *)tmpl time:(NSString *)time name:(NSString *)name content:(NSString *)content;
- (void)save;
- (void)loadDefaults;
@end
