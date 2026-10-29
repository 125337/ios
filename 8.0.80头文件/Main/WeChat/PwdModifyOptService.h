@interface PwdModifyOptService : MMUserService <WCAccountBindPhoneControlLogicDelegate, MMServiceProtocol, PwdModifyOptService>
{
    id /* block */ _bindPhoneCallback; // +0x8
    MMUIViewController * _bindPhoneFromVC; // +0x10
    WCAccountBindPhoneControlLogic * _bindPhoneLogic; // +0x18
}
- (BOOL)isPwdModifyOptEnabled;
- (void)jumpToResetPwdFromVC:(id)arg1 scene:(long long)arg2 callback:(id /* block */)arg3;
- (void)jumpToResetPwdFromVC:(id)arg1 scene:(long long)arg2 presentNewSetBlock:(id /* block */)arg3 callback:(id /* block */)arg4;
- (void)jumpToMobileVerifyUIFromVC:(id)arg1 mobile:(id)arg2 scene:(long long)arg3 callback:(id /* block */)arg4;
- (void)jumpToMobileVerifyUIFromVC:(id)arg1 mobile:(id)arg2 scene:(long long)arg3 presentNewSetBlock:(id /* block */)arg4 callback:(id /* block */)arg5;
- (void)startBindPhoneFlowFromVC:(id)arg1 callback:(id /* block */)arg2;
- (void)onWCAccountBindPhoneControlLogicCheckOK:(id)arg1;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (id /* block */)bindPhoneCallback;
- (void)setBindPhoneCallback:(id /* block */)arg1;
- (id)bindPhoneFromVC;
- (void)setBindPhoneFromVC:(id)arg1;
- (id)bindPhoneLogic;
- (void)setBindPhoneLogic:(id)arg1;
- (void).cxx_destruct;
@end
