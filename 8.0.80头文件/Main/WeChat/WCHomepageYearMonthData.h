@interface WCHomepageYearMonthData : NSObject <PBCoding>
{
    unsigned int _year; // +0x8
    unsigned int _month; // +0xc
    unsigned long long _lastId; // +0x10
}
+ (void)PBArrayAdd_year;
+ (void)PBArrayAdd_month;
+ (void)PBArrayAdd_lastId;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithSnsYearMonthData:(id)arg1;
- (id)initWithYear:(unsigned int)arg1 month:(unsigned int)arg2 lastId:(unsigned long long)arg3;
- (BOOL)isEqualToYearMonthData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (unsigned int)year;
- (void)setYear:(unsigned int)arg1;
- (unsigned int)month;
- (void)setMonth:(unsigned int)arg1;
- (unsigned long long)lastId;
- (void)setLastId:(unsigned long long)arg1;
@end
