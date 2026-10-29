@interface MMAsyncBlockOperation : NSOperation
{
    BOOL _internalExecuting; // +0x8
    BOOL _internalFinished; // +0x9
    id /* block */ _block; // +0x10
    NSRecursiveLock * _lock; // +0x18
}
+ (id)operationWithBlock:(id /* block */)arg1;
- (id)initWithBlock:(id /* block */)arg1;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)setInternalExecuting:(BOOL)arg1;
- (void)setInternalFinished:(BOOL)arg1;
- (BOOL)isPending;
- (void)finish;
- (void)start;
- (void)runBlock;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (BOOL)internalExecuting;
- (BOOL)internalFinished;
- (void).cxx_destruct;
@end

