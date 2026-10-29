@interface VoIPCallUIStateRingBuffer : NSObject
{
    NSMutableArray * _states; // +0x8
    unsigned long long _lastSampledPtsNs; // +0x10
    BOOL _hasLastSampledPts; // +0x18
}
+ (id)nearestStateAtOrBefore:(unsigned long long)arg1 inSnapshot:(id)arg2;
- (id)init;
- (BOOL)shouldThrottleAtPtsNs:(unsigned long long)arg1;
- (void)appendState:(id)arg1;
- (id)freezeSnapshot;
- (void)reset;
- (void).cxx_destruct;
@end
