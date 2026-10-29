@interface WCFinderLiveGetPkWinningConditionArgumentOptionsCgi : WCFinderLiveBaseCgi
{
    unsigned int _battleScene; // +0x8
    unsigned long long _winningCondition; // +0x10
    NSString * _micVirtualRoomId; // +0x18
    NSData * _liveCookies; // +0x20
    id /* block */ _successBlock; // +0x28
    id /* block */ _failBlock; // +0x30
}
- (id)initWithTaskId:(id)arg1 winningCondition:(unsigned long long)arg2 micVirtualRoomId:(id)arg3 liveCookies:(id)arg4 battleScene:(unsigned int)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned long long)winningCondition;
- (void)setWinningCondition:(unsigned long long)arg1;
- (id)micVirtualRoomId;
- (void)setMicVirtualRoomId:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (unsigned int)battleScene;
- (void)setBattleScene:(unsigned int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

