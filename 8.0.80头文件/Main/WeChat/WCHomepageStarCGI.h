@interface WCHomepageStarCGI : WCBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failureBlock; // +0x10
    unsigned long long _currentContinueReqCount; // +0x18
    SnsTopListResponse * _responseToProcess; // +0x20
}
- (id)init;
- (void)continueRequestWithMaxID:(unsigned long long)arg1;
- (void)startRequest:(id)arg1 withSuccessBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (id)getMergeResponse:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (unsigned long long)currentContinueReqCount;
- (void)setCurrentContinueReqCount:(unsigned long long)arg1;
- (id)responseToProcess;
- (void)setResponseToProcess:(id)arg1;
- (void).cxx_destruct;
@end
