@interface WCFinderLiveJoinGameTeamPrepareCGI : WCFinderLiveBaseCgi
{
    unsigned int _liveScene; // +0x8
    int _reqType; // +0xc
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    NSData * _liveCookies; // +0x20
}
- (id)initWithLiveTaskId:(id)arg1 reqType:(int)arg2 finderDataItem:(id)arg3 liveCookies:(id)arg4 liveScene:(long long)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (unsigned int)liveScene;
- (void)setLiveScene:(unsigned int)arg1;
- (int)reqType;
- (void)setReqType:(int)arg1;
- (void).cxx_destruct;
@end
