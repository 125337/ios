@interface MAVVLogEffect : NSObject
{
    struct _timeRange; // +0x8
}
- (long long)type;
- (struct)duration;
- (void)setTimeRange:(struct)arg1;
- (void)setTimeRange:(unsigned long long)arg1 end:(unsigned long long)arg2;
- (struct)getTimeRange;
- (struct)timeRange;
@end

