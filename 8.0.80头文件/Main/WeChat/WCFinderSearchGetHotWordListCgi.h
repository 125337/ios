@interface WCFinderSearchGetHotWordListCgi : WCFinderBaseCgi
{
    NSString * _searchRequestId; // +0x8
    id /* block */ _successful; // +0x10
    id /* block */ _failure; // +0x18
}
- (id)initWithHotWordListBuffer:(id)arg1 objHotwordInfoBuffer:(id)arg2 requestId:(id)arg3 successful:(id /* block */)arg4 failedBlock:(id /* block */)arg5;
- (void)createRequest:(id)arg1 objHotwordInfoBuffer:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)searchRequestId;
- (void)setSearchRequestId:(id)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end
