@interface WCPayRealnameRouteCgi : WCPayBaseCgi
{
    int _fromScene; // +0x8
    int _payScene; // +0xc
    id /* block */ _completionBlock; // +0x10
    id /* block */ _failureBlock; // +0x18
}
- (id)init;
- (void)startWithCompletion:(id /* block */)arg1 failure:(id /* block */)arg2;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (int)fromScene;
- (void)setFromScene:(int)arg1;
- (int)payScene;
- (void)setPayScene:(int)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

