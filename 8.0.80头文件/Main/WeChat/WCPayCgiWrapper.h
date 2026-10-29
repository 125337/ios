@interface WCPayCgiWrapper : NSObject
{
    id /* block */ _completionBlock; // +0x8
    WCPayBaseCgi * _originalCgi; // +0x10
}
- (void)setupHooks;
- (void)cleanupHooks;
- (void)dealloc;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id)originalCgi;
- (void)setOriginalCgi:(id)arg1;
- (void).cxx_destruct;
@end
