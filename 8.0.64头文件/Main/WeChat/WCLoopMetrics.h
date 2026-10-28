@interface WCLoopMetrics : NSObject
{
    NSMutableDictionary * _actionMetricsMutableDictionary; // +0x8
    NSMutableDictionary * _loopInfoMutableDictionary; // +0x10
    double _preferredDuration; // +0x18
    double _beginTime; // +0x20
    double _endTime; // +0x28
}
- (id)init;
- (id)initWithBeginTime:(double)arg1 preferredDuration:(double)arg2;
- (void)didFinishWithEndTime:(double)arg1;
- (id)actionMetricsDictionary;
- (id)_actionMetricsForKey:(id)arg1;
- (void)actionDidBeginWithKey:(id)arg1;
- (void)actionDidEndWithKey:(id)arg1;
- (void)actionDidEndWithKey:(id)arg1 actionCount:(unsigned long long)arg2;
- (void)allActionsDidEnd;
- (void)actionDidRecordWithKey:(id)arg1 duration:(double)arg2;
- (void)actionDidRecordWithKey:(id)arg1 duration:(double)arg2 actionCount:(unsigned long long)arg3;
- (id)loopInfo;
- (void)setLoopInfo:(id)arg1 forKey:(id)arg2;
- (id)loopInfoForKey:(id)arg1;
- (double)preferredDuration;
- (double)beginTime;
- (double)endTime;
- (void).cxx_destruct;
@end
