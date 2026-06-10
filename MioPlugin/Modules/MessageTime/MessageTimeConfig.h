#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface MessageTimeConfig : NSObject <ConfigModule>

// 基本属性
@property (nonatomic, assign) BOOL showMessageTime;
@property (nonatomic, assign) CGFloat messageTimeFontSize;
@property (nonatomic, assign) BOOL messageTimeBoldFont;
@property (nonatomic, copy, nullable) NSString *messageTimeFormat;
@property (nonatomic, copy, nullable) NSString *messageTimeCustomFormat;
@property (nonatomic, assign) NSInteger messageTimePosition;
@property (nonatomic, assign) CGFloat messageTimeOffsetX;
@property (nonatomic, assign) CGFloat messageTimeOffsetY;
@property (nonatomic, copy, nullable) NSString *messageTimeTextColor;
@property (nonatomic, assign) CGFloat messageTimeBubbleExtWidth;
@property (nonatomic, assign) CGFloat messageTimeCornerRadius;
@property (nonatomic, assign) BOOL disableLabelWidthAdjustment;

// 时间配色属性
@property (nonatomic, copy, nullable) NSString *senderTextColorHex;
@property (nonatomic, copy, nullable) NSString *senderTextColorDarkHex;
@property (nonatomic, copy, nullable) NSString *senderBackgroundColorHex;
@property (nonatomic, copy, nullable) NSString *senderBackgroundColorDarkHex;
@property (nonatomic, copy, nullable) NSString *receiverTextColorHex;
@property (nonatomic, copy, nullable) NSString *receiverTextColorDarkHex;
@property (nonatomic, copy, nullable) NSString *receiverBackgroundColorHex;
@property (nonatomic, copy, nullable) NSString *receiverBackgroundColorDarkHex;

// 好友添加时间
@property (nonatomic, assign) BOOL showAddTimeSuffix;
@property (nonatomic, copy, nullable) NSString *addTimeSuffixFormat;

// 隐藏聊天时间分隔线
@property (nonatomic, assign) BOOL hideChatTime;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END