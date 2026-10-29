@interface WCFinderModFollowSendMsgSettingCGI : WCFinderBaseCgi
{
    BOOL _isSwitchOn; // +0x8
    NSString * _userName; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failBlock; // +0x20
}
- (id)initWithFollowSendMsgSwitchState:(BOOL)arg1 userName:(id)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (BOOL)isSwitchOn;
- (void)setIsSwitchOn:(BOOL)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

