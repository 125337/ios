#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

/// 消息合并（头像气泡上）配置模块，参数语义对齐 XOS aab_ 系列
@interface MsgMergeConfig : NSObject <ConfigModule>

// 总开关与基础布局
@property (nonatomic, assign) BOOL msgMergeEnabled;
@property (nonatomic, assign) BOOL msgMergeAabEnabled;          // 头像气泡上开关
@property (nonatomic, assign) NSInteger msgMergePositionMode;   // 头像位置模式 0-2
@property (nonatomic, assign) CGFloat msgMergeAboveShiftPt;     // 上方额外偏移 ±10
@property (nonatomic, assign) CGFloat msgMergeBelowShiftPt;     // 下方额外偏移 ±10
@property (nonatomic, assign) CGFloat msgMergeTextSizeOffset;   // 字号偏移 ±3
@property (nonatomic, assign) CGFloat msgMergeTextYShift;       // 文字Y偏移 ±10

// 时间标注
@property (nonatomic, copy, nullable) NSString *msgMergeTimeColorHex;      // 浅色 hex
@property (nonatomic, copy, nullable) NSString *msgMergeTimeColorDarkHex;  // 深色 hex
@property (nonatomic, assign) NSInteger msgMergeTimeDisplayMode;           // 显示模式 0-8
@property (nonatomic, assign) NSInteger msgMergeTimeFormatStyle;           // 格式样式 1-3
@property (nonatomic, assign) NSInteger msgMergeTimeLocaleStyle;           // 时制 0-2
@property (nonatomic, copy, nullable) NSString *msgMergeTimeCustomLine1;   // 自定义行1（mode=8）
@property (nonatomic, copy, nullable) NSString *msgMergeTimeCustomLine2;   // 自定义行2（mode=8）

// 虚线
@property (nonatomic, assign) NSInteger msgMergeDashStyle;   // 预设 0-3
@property (nonatomic, assign) CGFloat msgMergeDashExtendPt;  // 延长 ±20

// 引导线
@property (nonatomic, assign) NSInteger msgMergeGuideLineStyle;  // 预设 0-3
@property (nonatomic, assign) NSInteger msgMergeGuideLinePos;    // 位置 0-1
@property (nonatomic, assign) CGFloat msgMergeGuideLineXPad;     // X内边距 ±40

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
