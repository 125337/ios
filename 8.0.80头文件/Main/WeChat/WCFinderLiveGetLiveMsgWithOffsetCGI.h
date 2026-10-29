@interface WCFinderLiveGetLiveMsgWithOffsetCGI : WCFinderLiveBaseCgi
{
    BOOL _isContinualRequest; // +0x8
    unsigned int _offsetInSecond; // +0xc
    int _scenario; // +0x10
    NSData * _lastBuffer; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failureBlock; // +0x28
    MMFinderLiveFootageReplayModel * _footageReplayModel; // +0x30
}
- (id)initWithTaskId:(id)arg1 timeOffset:(unsigned int)arg2 isContinualRequest:(BOOL)arg3 lastBuffer:(id)arg4 scenario:(int)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (id)initWithFootageReplayModel:(id)arg1 timeOffset:(unsigned int)arg2 isContinualRequest:(BOOL)arg3 lastBuffer:(id)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)createGenericRequest;
- (void)createTargetedFootageReplayRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned int)offsetInSecond;
- (void)setOffsetInSecond:(unsigned int)arg1;
- (BOOL)isContinualRequest;
- (void)setIsContinualRequest:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (int)scenario;
- (void)setScenario:(int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (id)footageReplayModel;
- (void)setFootageReplayModel:(id)arg1;
- (void).cxx_destruct;
@end
