@interface WCFinderDateCountInfo : NSObject
{
    unsigned long long _date; // +0x8
    unsigned long long _count; // +0x10
}
+ (id)dateCount:(unsigned long long)arg1 keepToday:(BOOL)arg2;
+ (id)dateFromNumber:(unsigned long long)arg1;
+ (BOOL)date1:(unsigned long long)arg1 fromDate2:(unsigned long long)arg2 diffNDay:(unsigned long long)arg3;
+ (BOOL)dateCount:(unsigned long long)arg1 allowedAfterNDays:(unsigned long long)arg2;
+ (unsigned long long)increaseTotalCountForDateCount:(unsigned long long)arg1;
- (unsigned long long)toDateNumber;
- (void)increaseCount;
- (void)increaseTotalCount;
- (BOOL)dateMoreThanNDay:(unsigned long long)arg1 beforeToday:(unsigned long long)arg2;
- (unsigned long long)getTodayWithUpdateFlag:(BOOL)arg1;
- (unsigned long long)date;
- (void)setDate:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)setCount:(unsigned long long)arg1;
@end
