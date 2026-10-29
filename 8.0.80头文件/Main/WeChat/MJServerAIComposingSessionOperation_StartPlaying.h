@interface MJServerAIComposingSessionOperation_StartPlaying : MJServerAIComposingSessionOperation
{
    long long _loopCount; // +0x10
}
- (id)initWithSession:(id)arg1 sessionKey:(id)arg2 loopCount:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)_performOperation;
- (long long)loopCount;
- (void)setLoopCount:(long long)arg1;
@end
