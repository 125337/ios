@interface WCFinderRefusedMsgCGI : WCFinderBaseCgi
{
    BOOL _isSwitchOn; // +0x8
    BOOL _refuseObjectIsFinder; // +0x9
    NSString * _sessionId; // +0x10
    NSString * _userName; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
}
- (id)initWithRefusedMsgSwitchState:(BOOL)arg1 userName:(id)arg2 sessionId:(id)arg3 refuseObjectIsFinder:(BOOL)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (BOOL)isSwitchOn;
- (void)setIsSwitchOn:(BOOL)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (BOOL)refuseObjectIsFinder;
- (void)setRefuseObjectIsFinder:(BOOL)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
