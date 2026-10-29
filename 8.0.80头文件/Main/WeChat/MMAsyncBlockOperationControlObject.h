@interface MMAsyncBlockOperationControlObject : NSObject
{
    BOOL _hasMarkFinished; // +0x8
    id /* block */ _endBlock; // +0x10
}
- (void)dealloc;
- (void)markFinished;
- (void)configWithEndBlock:(id /* block */)arg1;
- (BOOL)hasMarkFinished;
- (void)setHasMarkFinished:(BOOL)arg1;
- (id /* block */)endBlock;
- (void)setEndBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
