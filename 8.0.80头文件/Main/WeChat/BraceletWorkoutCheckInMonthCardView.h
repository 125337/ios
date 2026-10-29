@interface BraceletWorkoutCheckInMonthCardView : UIView
{
    id /* block */ _onAllButtonClick; // +0x8
    id /* block */ _onDayClick; // +0x10
    long long _year; // +0x18
    long long _month; // +0x20
    NSDictionary * _dayStyleMap; // +0x28
    NSMutableArray * _dayViews; // +0x30
}
- (id)initWithYear:(long long)arg1 month:(long long)arg2 checkInKeys:(id)arg3 width:(double)arg4;
- (id)initWithYear:(long long)arg1 month:(long long)arg2 dayStyleMap:(id)arg3 width:(double)arg4;
- (void)p_buildWithWidth:(double)arg1;
- (void)p_onAllTap;
- (void)p_onDayTap:(id)arg1;
- (id /* block */)onAllButtonClick;
- (void)setOnAllButtonClick:(id /* block */)arg1;
- (id /* block */)onDayClick;
- (void)setOnDayClick:(id /* block */)arg1;
- (long long)year;
- (void)setYear:(long long)arg1;
- (long long)month;
- (void)setMonth:(long long)arg1;
- (id)dayStyleMap;
- (void)setDayStyleMap:(id)arg1;
- (id)dayViews;
- (void)setDayViews:(id)arg1;
- (void).cxx_destruct;
@end
