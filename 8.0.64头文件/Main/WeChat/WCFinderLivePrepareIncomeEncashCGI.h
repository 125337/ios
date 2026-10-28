@interface WCFinderLivePrepareIncomeEncashCGI : WCFinderLiveBaseCgi
{
    id /* block */ _completionBlock; // +0x8
    id /* block */ _failedBlock; // +0x10
}
- (id)initWithEncashScene:(unsigned int)arg1 requestId:(id)arg2 amount:(unsigned long long)arg3 reportSessionId:(id)arg4 incomeBizInfo:(id)arg5 completionBlock:(id /* block */)arg6 failedBlock:(id /* block */)arg7;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id /* block */)failedBlock;
- (void)setFailedBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
