@interface CRAsyncOperation : NSOperation
{
    BOOL _isExecuting; // +0x8
    BOOL _isFinished; // +0x9
    id /* block */ _cancelBlock; // +0x10
    id /* block */ _block; // +0x18
}
+ (id)operationWithBlock:(id /* block */)arg1;
- (id)initWithBlock:(id /* block */)arg1;
- (BOOL)isAsynchronous;
- (void)setIsExecuting:(BOOL)arg1;
- (void)setIsFinished:(BOOL)arg1;
- (void)dealloc;
- (void)cancel;
- (void)start;
- (void)startAsyncOperation;
- (void)finish;
- (id /* block */)cancelBlock;
- (void)setCancelBlock:(id /* block */)arg1;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
