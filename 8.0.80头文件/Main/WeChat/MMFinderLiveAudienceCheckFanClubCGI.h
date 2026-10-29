@interface MMFinderLiveAudienceCheckFanClubCGI : WCFinderLiveBaseCgi
{
    int _opCode; // +0x8
    NSData * _liveCookies; // +0x10
    id /* block */ _failBlock; // +0x18
    id /* block */ _successBlock; // +0x20
}
- (id)initQuerySuperfanProductWithTaskId:(id)arg1 liveCookies:(id)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (id)initCheckAudienceFanClubWithTaskId:(id)arg1 liveCookies:(id)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (int)opCode;
- (void)setOpCode:(int)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
