#import <UIKit/UIKit.h>

/// 月历弹层（XOS 同款：cadis_showCalendarPopup FUN_00153438 容器 + FUN_00153830 内容同构）
///  ◀▶ 切月 / 样式选择（10 种布局）/ 周一起始 / 节日 / 休班角标 三胶囊开关（NSUserDefaults 持久化）
///  农历 + 24 节气（寿星通式） + 2026 官方调休数据（国务院办公厅通知）
@interface HomeCardCalendarPopup : NSObject

/// 弹出（挂 window，点遮罩关闭）；已显示则月偏移归零并刷新（XOS cadis_calendarTapped 语义）
+ (void)show;

// 农历算法（iOS 系统中国农历 NSCalendarIdentifierChinese，弹层与首页卡片挂件共用）
+ (nullable NSString *)lunarDayText:(NSDate *)date;                       // 初一/廿五/三十…
+ (BOOL)lunarMonthDay:(NSDate *)date                                // 农历月号/日号/是否闰月
                month:(nullable NSInteger *)outMonth
                  day:(nullable NSInteger *)outDay
                 leap:(nullable BOOL *)outLeap;

// 日历卡片布局样式（XOS CadisCalendarStyle 剔除月历迷你后重排 0-8，键 MioCalStyle，弹层与 HomeCardHook 共用）
/// 样式值（0=默认周历 1=中式传统（宜忌） 2=今日聚焦（进度） 3=倒计时 4=极简横条
///  5=双栏信息 6=时间线 7=圆环进度 8=翻页日历，XOS 字符串数组实证名序剔除重排）
+ (NSInteger)currentStyle;
/// 样式名数组（下标 = 样式值，0-8 共 9 项）
+ (NSArray<NSString *> *)styleNames;
/// 当日宜忌（@[宜词数组, 忌词数组]；XOS 25 词池，日期种子轮转，每天固定且跨样式一致）
+ (NSArray<NSArray<NSString *> *> *)yiJiForDate:(NSDate *)date;

@end
