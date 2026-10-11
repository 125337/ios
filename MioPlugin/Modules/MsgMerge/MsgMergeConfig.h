#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

/// 消息合并（头像气泡上）配置模块，参数语义对齐 XOS aab_ 系列
@interface MsgMergeConfig : NSObject <ConfigModule>

// 总开关与基础布局
@property (nonatomic, assign) BOOL msgMergeEnabled;
@property (nonatomic, assign) BOOL msgMergeAabEnabled;              // 头像气泡上开关
@property (nonatomic, assign) NSInteger msgMergePositionModeSelf;   // 我方头像位置 0=上方 1=下方 2=不启用
@property (nonatomic, assign) NSInteger msgMergePositionModeOther;  // 对方头像位置 0=上方 1=下方 2=不启用
@property (nonatomic, assign) CGFloat msgMergeAboveShiftPt;         // 上方额外偏移 ±10
@property (nonatomic, assign) CGFloat msgMergeBelowShiftPt;         // 下方额外偏移 ±10

// 文字与昵称
@property (nonatomic, assign) CGFloat msgMergeTextSizeOffset;   // 文字与昵称字号偏移
@property (nonatomic, assign) CGFloat msgMergeTextYShiftSelf;   // 我方文字与昵称Y偏移
@property (nonatomic, assign) CGFloat msgMergeTextYShiftOther;  // 对方文字与昵称Y偏移

// 时间标注
@property (nonatomic, copy, nullable) NSString *msgMergeTimeColorHex;      // 浅色 hex
@property (nonatomic, copy, nullable) NSString *msgMergeTimeColorDarkHex;  // 深色 hex
@property (nonatomic, assign) NSInteger msgMergeTimeDisplayMode;           // 显示样式 0-8
@property (nonatomic, copy, nullable) NSString *msgMergeTimeCustomFormat;  // 自定义格式（显示样式=自定义）
@property (nonatomic, assign) NSInteger msgMergeTimeFormatStyle;           // 时间格式 0=24小时 1=24小时(秒) 2=12小时 3=12小时(秒)
@property (nonatomic, assign) NSInteger msgMergeTimeLocaleStyle;           // 时间语音 0=跟随系统 1=中文 2=英文

// 虚线（对方/我方 × 浅色/深色 四路独立样式）
@property (nonatomic, assign) NSInteger msgMergeDashStyleOtherLight;  // 0-9
@property (nonatomic, assign) NSInteger msgMergeDashStyleOtherDark;   // 0-9
@property (nonatomic, assign) NSInteger msgMergeDashStyleSelfLight;   // 0-9
@property (nonatomic, assign) NSInteger msgMergeDashStyleSelfDark;    // 0-9
@property (nonatomic, assign) CGFloat msgMergeDashExtendPt;  // 延长 ±20

// 引导线（对方/我方 × 浅色/深色 四路独立样式 + 终点位置 + 偏移）
@property (nonatomic, assign) NSInteger msgMergeGuideLineOtherLight;  // 0-6，6=不显示
@property (nonatomic, assign) NSInteger msgMergeGuideLineOtherDark;   // 0-6
@property (nonatomic, assign) NSInteger msgMergeGuideLineSelfLight;   // 0-6
@property (nonatomic, assign) NSInteger msgMergeGuideLineSelfDark;    // 0-6
@property (nonatomic, assign) NSInteger msgMergeGuideLineEndPosOther;  // 终点位置 0=首条 1=末条
@property (nonatomic, assign) NSInteger msgMergeGuideLineEndPosSelf;   // 终点位置 0=首条 1=末条
@property (nonatomic, assign) CGFloat msgMergeGuideLineOffsetOther;  // 引导线偏移，默认 8
@property (nonatomic, assign) CGFloat msgMergeGuideLineOffsetSelf;   // 引导线偏移，默认 8

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
