@interface WCFinderLiveGameSetTeamupConfigCGI : WCFinderLiveBaseCgi
{
    unsigned int _liveScene; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    NSData * _liveCookies; // +0x20
    NSDictionary * _gameInfo; // +0x28
}
- (id)initWithLiveTaskId:(id)arg1 finderDataItem:(id)arg2 liveCookies:(id)arg3 liveScene:(long long)arg4 gameInfo:(id)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
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
- (id)gameInfo;
- (void)setGameInfo:(id)arg1;
- (void).cxx_destruct;
@end

