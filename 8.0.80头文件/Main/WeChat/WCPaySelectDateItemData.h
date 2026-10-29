@interface WCPaySelectDateItemData : NSObject <NSCopying>
{
    long long _year; // +0x8
    long long _month; // +0x10
    long long _day; // +0x18
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (long long)year;
- (void)setYear:(long long)arg1;
- (long long)month;
- (void)setMonth:(long long)arg1;
- (long long)day;
- (void)setDay:(long long)arg1;
@end
