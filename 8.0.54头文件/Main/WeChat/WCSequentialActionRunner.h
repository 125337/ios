@interface WCSequentialActionRunner : NSObject
{
    UIView * _rootView; // +0x8
    NSMutableArray * _actionArr; // +0x10
    long long _curActionIdx; // +0x18
}
- (id)init;
- (void)addAnimateWithDuration:(double)arg1 animations:(id /* block */)arg2;
- (void)addAnimateWithDuration:(double)arg1 options:(unsigned long long)arg2 animations:(id /* block */)arg3;
- (void)addCallBlock:(id /* block */)arg1;
- (void)addDelayWithDuration:(double)arg1;
- (void)sequentialRun;
- (void)runAction;
- (void)runNext;
- (void)fastForward;
- (id)rootView;
- (void)setRootView:(id)arg1;
- (id)actionArr;
- (void)setActionArr:(id)arg1;
- (long long)curActionIdx;
- (void)setCurActionIdx:(long long)arg1;
- (void).cxx_destruct;
@end

