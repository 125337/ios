@interface WCFinderDetailTimeStringConfig : NSObject
{
    BOOL _showDetailTime; // +0x8
    NSString * _beforeOneMinText; // +0x10
    NSString * _beforeMinFormatText; // +0x18
    NSString * _beforeHourFormatText; // +0x20
    NSString * _yesterdayText; // +0x28
    NSString * _beforeDayFormatText; // +0x30
    NSString * _beforeWeekFormatText; // +0x38
    NSString * _beforeMonthFormatText; // +0x40
    NSString * _overOneYearFormatText; // +0x48
}
+ (id)defaultConfig;
- (BOOL)showDetailTime;
- (void)setShowDetailTime:(BOOL)arg1;
- (id)beforeOneMinText;
- (void)setBeforeOneMinText:(id)arg1;
- (id)beforeMinFormatText;
- (void)setBeforeMinFormatText:(id)arg1;
- (id)beforeHourFormatText;
- (void)setBeforeHourFormatText:(id)arg1;
- (id)yesterdayText;
- (void)setYesterdayText:(id)arg1;
- (id)beforeDayFormatText;
- (void)setBeforeDayFormatText:(id)arg1;
- (id)beforeWeekFormatText;
- (void)setBeforeWeekFormatText:(id)arg1;
- (id)beforeMonthFormatText;
- (void)setBeforeMonthFormatText:(id)arg1;
- (id)overOneYearFormatText;
- (void)setOverOneYearFormatText:(id)arg1;
- (void).cxx_destruct;
@end

