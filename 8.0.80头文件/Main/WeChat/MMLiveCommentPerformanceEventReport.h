@interface MMLiveCommentPerformanceEventReport : NSObject
{
    long long _event; // +0x8
    double _enterSmooth_LagFrameDuration; // +0x10
    unsigned long long _enterSmooth_unnormalMetricsCnt; // +0x18
    double _exitSmooth_latestUnLagDuration; // +0x20
    unsigned long long _exitSmooth_unnormalMetricsCnt; // +0x28
}
+ (id)createDefaultEventReport:(long long)arg1;
- (long long)event;
- (void)setEvent:(long long)arg1;
- (double)enterSmooth_LagFrameDuration;
- (void)setEnterSmooth_LagFrameDuration:(double)arg1;
- (unsigned long long)enterSmooth_unnormalMetricsCnt;
- (void)setEnterSmooth_unnormalMetricsCnt:(unsigned long long)arg1;
- (double)exitSmooth_latestUnLagDuration;
- (void)setExitSmooth_latestUnLagDuration:(double)arg1;
- (unsigned long long)exitSmooth_unnormalMetricsCnt;
- (void)setExitSmooth_unnormalMetricsCnt:(unsigned long long)arg1;
@end
