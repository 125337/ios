@interface QProgressAnimation : NSObject
{
    double _duration; // +0x8
    double _step; // +0x10
    double _startTime; // +0x18
}
- (id)init;
- (void)update:(double)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (double)step;
- (void)setStep:(double)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
@end
