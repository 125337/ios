@interface CPUAnimationMetricRecord : NSObject
{
    double _invokeTime; // +0x8
    unsigned long long _duration; // +0x10
}
- (double)invokeTime;
- (void)setInvokeTime:(double)arg1;
- (unsigned long long)duration;
- (void)setDuration:(unsigned long long)arg1;
@end

