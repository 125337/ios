@interface GamePullMsgControlInfo : NSObject
{
    int _startSecond; // +0x8
    int _count; // +0xc
    double _time; // +0x10
    unsigned long long _minInterval; // +0x18
}
+ (id)getCurrentControlInfoFromKv;
+ (id)getCurrentControlInfo;
- (void)syncToKv;
- (BOOL)checkIsSameDay:(double)arg1;
- (int)startSecond;
- (void)setStartSecond:(int)arg1;
- (double)time;
- (void)setTime:(double)arg1;
- (int)count;
- (void)setCount:(int)arg1;
- (unsigned long long)minInterval;
- (void)setMinInterval:(unsigned long long)arg1;
@end
