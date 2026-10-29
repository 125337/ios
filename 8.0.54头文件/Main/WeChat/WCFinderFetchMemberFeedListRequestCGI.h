@interface WCFinderFetchMemberFeedListRequestCGI : WCFinderBaseCgi
{
    int _feedType; // +0x8
    NSString * _finderUsername; // +0x10
    NSString * _finderMemberTicket; // +0x18
    NSData * _lastBuff; // +0x20
    id /* block */ _successful; // +0x28
    id /* block */ _failure; // +0x30
}
- (id)initWithFinderUsername:(id)arg1 finderMemberTicket:(id)arg2 feedType:(int)arg3 lastBuff:(id)arg4 successful:(id /* block */)arg5 failure:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)finderMemberTicket;
- (void)setFinderMemberTicket:(id)arg1;
- (int)feedType;
- (void)setFeedType:(int)arg1;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end

