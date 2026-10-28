@interface MMScrollMetricsData : NSObject
{
    int _fps; // +0x8
    int _duration; // +0xc
    float _stutter; // +0x10
    int _scrollScore; // +0x14
    int _hitchRate; // +0x18
    int _smallJank; // +0x1c
    int _bigJank; // +0x20
    int _jank; // +0x24
}
- (void)setData:(scroll_metrics_t *)arg1;
- (int)fps;
- (void)setFps:(int)arg1;
- (int)duration;
- (void)setDuration:(int)arg1;
- (float)stutter;
- (void)setStutter:(float)arg1;
- (int)scrollScore;
- (void)setScrollScore:(int)arg1;
- (int)hitchRate;
- (void)setHitchRate:(int)arg1;
- (int)smallJank;
- (void)setSmallJank:(int)arg1;
- (int)bigJank;
- (void)setBigJank:(int)arg1;
- (int)jank;
- (void)setJank:(int)arg1;
@end
