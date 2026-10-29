@interface WCAsyncOperation : NSOperation
{
    BOOL _internalExecuting; // +0x8
    BOOL _internalFinished; // +0x9
}
- (BOOL)isAsynchronous;
- (void)main;
- (void)asyncStart;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)updateExecuting:(BOOL)arg1;
- (void)updateFinished:(BOOL)arg1;
- (BOOL)internalExecuting;
- (void)setInternalExecuting:(BOOL)arg1;
- (BOOL)internalFinished;
- (void)setInternalFinished:(BOOL)arg1;
@end

