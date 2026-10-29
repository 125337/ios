@interface WCFinderFetchSelfCGI : WCFinderBaseCgi
{
    id /* block */ _successful; // +0x8
    id /* block */ _failure; // +0x10
    NSData * _syncBuffer; // +0x18
}
- (id)initWithSyncBuffer:(id)arg1 successful:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (id)syncBuffer;
- (void)setSyncBuffer:(id)arg1;
- (void).cxx_destruct;
@end
