#import <UIKit/UIKit.h>

/// 月历弹层（XOS 同款：cadis_showCalendarPopup FUN_00153438 容器 + FUN_00153830 内容同构）
///  ◀▶ 切月 / 「样式-黑白」 / 周一起始 / 节日 / 休班角标 三胶囊开关（NSUserDefaults 持久化）
///  农历 + 24 节气（寿星通式） + 2026 官方调休数据（国务院办公厅通知）
@interface HomeCardCalendarPopup : NSObject

/// 弹出（挂 window，点遮罩关闭）；已显示则月偏移归零并刷新（XOS cadis_calendarTapped 语义）
+ (void)show;

// 农历算法（1900-2100 压缩表，弹层与周视图共用单份表）
+ (nullable NSString *)lunarDayText:(NSDate *)date;                       // 初一/廿五/三十…
+ (BOOL)lunarMonthDay:(NSDate *)date                                // 农历月号/日号/是否闰月
                month:(nullable NSInteger *)outMonth
                  day:(nullable NSInteger *)outDay
                 leap:(nullable BOOL *)outLeap;

// 卡片挂件布局样式（Mio 扩展：键 MioCalCardStyle，弹层选择器与 HomeCardHook 渲染共用）
/// 样式值（0=默认周历 1=圆环进度，逐步添加中）
+ (NSInteger)currentStyle;
/// 样式名数组（下标 = 样式值）
+ (NSArray<NSString *> *)styleNames;

@end
