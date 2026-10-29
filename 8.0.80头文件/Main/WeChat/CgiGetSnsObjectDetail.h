@interface CgiGetSnsObjectDetail : WCBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failBlock; // +0x10
}
- (id)init;
- (void)startWithSnsId:(unsigned long long)arg1 groupDetail:(BOOL)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)startWithSnsId:(unsigned long long)arg1 groupDetail:(BOOL)arg2 scene:(unsigned int)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
