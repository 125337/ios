@interface WCFinderNewApplyMicCGI : WCFinderLiveBaseCgi
{
    unsigned int _applyScene; // +0x8
    WCFinderContact * _toFinderContact; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failBlock; // +0x20
    NSData * _liveCookies; // +0x28
    NSData * _randomMicBuffer; // +0x30
    NSData * _sceneBuffer; // +0x38
}
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2 toFinderContact:(id)arg3 randomMicBuffer:(id)arg4 applyScene:(unsigned int)arg5 sceneBuffer:(id)arg6 successBlock:(id /* block */)arg7 failBlock:(id /* block */)arg8;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)toFinderContact;
- (void)setToFinderContact:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)randomMicBuffer;
- (void)setRandomMicBuffer:(id)arg1;
- (unsigned int)applyScene;
- (void)setApplyScene:(unsigned int)arg1;
- (id)sceneBuffer;
- (void)setSceneBuffer:(id)arg1;
- (void).cxx_destruct;
@end
