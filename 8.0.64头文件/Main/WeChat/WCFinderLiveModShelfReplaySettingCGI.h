@interface WCFinderLiveModShelfReplaySettingCGI : WCFinderLiveBaseCgi
{
    int _replaySwitch; // +0x8
    int _replayType; // +0xc
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
}
- (id)initWithFinderTaskId:(id)arg1 replaySwitch:(int)arg2 replayType:(int)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (int)replaySwitch;
- (void)setReplaySwitch:(int)arg1;
- (int)replayType;
- (void)setReplayType:(int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
