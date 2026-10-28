@interface CalendarYearMonthDate : NSObject
{
    long long _year; // +0x8
    long long _month; // +0x10
}
- (long long)year;
- (void)setYear:(long long)arg1;
- (long long)month;
- (void)setMonth:(long long)arg1;
@end
