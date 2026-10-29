@interface WCPayJSGetEncryptHKPasswdLogic : WCPayJSAuthBaseLogic
{
    id <WCPayJSGetEncryptHKPasswdLogicDelegate> _delegate; // +0x38
}
- (id)initWithJSEvent:(id)arg1 param:(id)arg2 delegate:(id)arg3;
- (void)authOk;
- (void)callFail:(BOOL)arg1;
- (void)callGetEncryptPwd:(id)arg1 signature:(id)arg2;
- (void)authFail;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
