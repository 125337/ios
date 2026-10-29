@interface WCSGroupClickWrap : NSObject <PBCoding>
{
    unsigned int _day; // +0x8
    unsigned int _clickCount; // +0xc
}
+ (void)PBArrayAdd_day;
+ (void)PBArrayAdd_clickCount;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (unsigned int)day;
- (void)setDay:(unsigned int)arg1;
- (unsigned int)clickCount;
- (void)setClickCount:(unsigned int)arg1;
@end

