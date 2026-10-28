@interface WCPayTouchLockSettingLogic : WCPaySecurityBaseControlLogic <WCPayPayPwdViewControllerDelegate, WCPayOpeniOSTouchLockCgiDelegate>
{
    id <WCPayTouchLockSettingLogicDelegate> _delegate; // +0x38
    WCPayOpeniOSTouchLockCgi * _openCgi; // +0x40
}
- (id)initWithData:(id)arg1 delegate:(id)arg2;
- (void)startLogic;
- (void)callSetupSuccess;
- (void)openTouchLockWithToken:(id)arg1 Model:(id)arg2;
- (void)verifyTouchID:(id)arg1;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)OnVerifyPayPassword:(id)arg1 andRetToken:(id)arg2;
- (void)openiOSTouchLockCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)openiOSTouchLockCgi:(id)arg1 didFailWithError:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)openCgi;
- (void)setOpenCgi:(id)arg1;
- (void).cxx_destruct;
@end
