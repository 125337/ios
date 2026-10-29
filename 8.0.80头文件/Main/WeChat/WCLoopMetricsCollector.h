@interface WCLoopMetricsCollector : NSObject
{
    BOOL _loopRunning; // +0x8
    NSString * _loopKey; // +0x10
    WCLoopMetrics * _currentLoopMetrics; // +0x18
    long long _actionRunningCountInCurrentLoop; // +0x20
    id <WCLoopMetricsCollectorDelegate> _delegate; // +0x28
    double _durationPerCollectionCycle; // +0x30
}
- (id)init;
- (void)loopDidBeginWithKey:(id)arg1;
- (void)loopDidEndWithKey:(id)arg1;
- (void)actionDidBeginWithKey:(id)arg1;
- (void)actionDidEndWithKey:(id)arg1;
- (void)actionDidEndWithKey:(id)arg1 actionCount:(unsigned long long)arg2;
- (void)actionDidRecordWithKey:(id)arg1 duration:(double)arg2;
- (void)actionDidRecordWithKey:(id)arg1 duration:(double)arg2 actionCount:(unsigned long long)arg3;
- (void)setLoopInfo:(id)arg1 forKey:(id)arg2;
- (id)loopInfoForKey:(id)arg1;
- (void)collectionCycleDidBeginIfNeeded;
- (void)collectionCycleDidEndIfNeeded;
- (void)endCollectionCycle;
- (void)didFinishCollectingMetrics:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)durationPerCollectionCycle;
- (void)setDurationPerCollectionCycle:(double)arg1;
- (void).cxx_destruct;
@end
