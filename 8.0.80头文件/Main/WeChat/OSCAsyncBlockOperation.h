@interface OSCAsyncBlockOperation : NSOperation
{
    BOOL _isExecuting; // +0x8
    BOOL _isFinished; // +0x9
    id /* block */ _block; // +0x10
}
+ (id)asyncBlockOperationWithBlock:(id /* block */)arg1;
- (id)initWithBlock:(id /* block */)arg1;
- (void)start;
- (void)complete;
- (BOOL)isExecuting;
- (void)setIsExecuting:(BOOL)arg1;
- (BOOL)isFinished;
- (void)setIsFinished:(BOOL)arg1;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
