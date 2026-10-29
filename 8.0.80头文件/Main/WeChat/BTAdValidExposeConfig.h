@interface BTAdValidExposeConfig : NSObject <PBCoding>
{
    double _ratio; // +0x8
    double _time; // +0x10
}
+ (void)PBArrayAdd_ratio;
+ (void)PBArrayAdd_time;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (double)ratio;
- (void)setRatio:(double)arg1;
- (double)time;
- (void)setTime:(double)arg1;
@end
