@interface MPOriginalImageTileScheduler : NSObject
{
    long long _maxInFlight; // +0x8
    id /* block */ _decodeBlock; // +0x10
    id /* block */ _commitBlock; // +0x18
    NSObject<OS_dispatch_queue> * _stateQueue; // +0x20
    NSObject<OS_dispatch_queue> * _decodeQueue; // +0x28
    NSMutableDictionary * _generationByKey; // +0x30
    NSMutableDictionary * _activeLevelByKey; // +0x38
    NSMutableDictionary * _pendingByKey; // +0x40
    long long _inFlight; // +0x48
}
- (id)initWithMaxInFlight:(long long)arg1 decodeBlock:(id /* block */)arg2 commitBlock:(id /* block */)arg3;
- (void)submitJob:(id)arg1;
- (void)clearCacheForKey:(id)arg1 reason:(id)arg2;
- (unsigned long long)generationForKey:(id)arg1;
- (unsigned long long)bumpGenerationForKey:(id)arg1;
- (void)handleLevelSwitchForKey:(id)arg1 level:(long long)arg2;
- (long long)dropStalePendingForKey:(id)arg1 belowGeneration:(unsigned long long)arg2 reason:(id)arg3;
- (void)pump;
- (id)dequeueNextValidJob;
- (void)dispatchDecode:(id)arg1;
- (void)finishJob:(id)arg1 data:(id)arg2;
- (void)fireCancelled:(id)arg1 reason:(id)arg2;
- (long long)maxInFlight;
- (void)setMaxInFlight:(long long)arg1;
- (id /* block */)decodeBlock;
- (void)setDecodeBlock:(id /* block */)arg1;
- (id /* block */)commitBlock;
- (void)setCommitBlock:(id /* block */)arg1;
- (id)stateQueue;
- (void)setStateQueue:(id)arg1;
- (id)decodeQueue;
- (void)setDecodeQueue:(id)arg1;
- (id)generationByKey;
- (void)setGenerationByKey:(id)arg1;
- (id)activeLevelByKey;
- (void)setActiveLevelByKey:(id)arg1;
- (id)pendingByKey;
- (void)setPendingByKey:(id)arg1;
- (long long)inFlight;
- (void)setInFlight:(long long)arg1;
- (void).cxx_destruct;
@end
