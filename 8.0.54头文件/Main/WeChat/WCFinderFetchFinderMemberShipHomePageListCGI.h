@interface WCFinderFetchFinderMemberShipHomePageListCGI : WCFinderBaseCgi
{
    BOOL _seeAuthorOnly; // +0x8
    NSString * _finderUsername; // +0x10
    NSData * _lastBuff; // +0x18
    id /* block */ _successful; // +0x20
    id /* block */ _failure; // +0x28
}
- (id)initWithFinderUsername:(id)arg1 lastBuff:(id)arg2 seeAuthorOnly:(BOOL)arg3 successful:(id /* block */)arg4 failure:(id /* block */)arg5;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (BOOL)seeAuthorOnly;
- (void)setSeeAuthorOnly:(BOOL)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end

