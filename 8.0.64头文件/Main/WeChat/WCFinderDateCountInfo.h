@interface WCFinderDateCountInfo : NSObject
{
    unsigned long long _date; // +0x8
    unsigned long long _count; // +0x10
}
+ (id)dateCount:(unsigned long long)arg1;
+ (id)dateFromNumber:(unsigned long long)arg1;
+ (BOOL)date1:(unsigned long long)arg1 fromDate2:(unsigned long long)arg2 diffNDay:(unsigned long long)arg3;
- (unsigned long long)toDateNumber;
- (void)increaseCount;
- (BOOL)dateMoreThanNDay:(unsigned long long)arg1 beforeToday:(unsigned long long)arg2;
- (unsigned long long)getToday;
- (unsigned long long)date;
- (void)setDate:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)setCount:(unsigned long long)arg1;
@end
