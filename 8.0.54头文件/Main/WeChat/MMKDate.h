@interface MMKDate : NSObject
{
    int _year; // +0x8
    int _month; // +0xc
    int _day; // +0x10
}
+ (id)KDateWithYear:(int)arg1 month:(int)arg2 day:(int)arg3;
- (id)initWithYear:(int)arg1 month:(int)arg2 day:(int)arg3;
- (id)description;
- (int)year;
- (int)month;
- (int)day;
@end

