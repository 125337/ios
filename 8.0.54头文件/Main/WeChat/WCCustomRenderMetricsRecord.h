@interface WCCustomRenderMetricsRecord : NSObject
{
    BOOL _isFullLoad; // +0x8
    WCLoopActionMetrics * _metrics; // +0x10
    double _beginTime; // +0x18
    double _endTime; // +0x20
}
- (id)initWithMetrics:(id)arg1 beginTime:(double)arg2 endTime:(double)arg3;
- (double)maxDuration;
- (id)metrics;
- (void)setMetrics:(id)arg1;
- (double)beginTime;
- (void)setBeginTime:(double)arg1;
- (double)endTime;
- (void)setEndTime:(double)arg1;
- (BOOL)isFullLoad;
- (void)setIsFullLoad:(BOOL)arg1;
- (void).cxx_destruct;
@end

