@interface MJServerAIComposingSessionOperation_StartPlayingTimeRange : MJServerAIComposingSessionOperation
{
    long long _loopCount; // +0x10
    struct _timeRange; // +0x18
}
- (id)initWithSession:(id)arg1 sessionKey:(id)arg2 timeRange:(struct)arg3 loopCount:(long long)arg4 completionHandler:(id /* block */)arg5;
- (void)_performOperation;
- (struct)timeRange;
- (void)setTimeRange:(struct)arg1;
- (long long)loopCount;
- (void)setLoopCount:(long long)arg1;
@end
