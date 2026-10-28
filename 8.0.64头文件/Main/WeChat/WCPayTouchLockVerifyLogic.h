@interface WCPayTouchLockVerifyLogic : WCPaySecurityBaseControlLogic <MMPatternLockLogicDelegate, MMTipsViewControllerDelegate, WCPayPayPwdViewControllerDelegate, WCPayCloseWalletLockCgiDelegate, WCPayWalletLockSettingLogicDelegate, WCPayTouchLockAuthenCgiDelegate, WCPayVerifyTouchLockViewControllerDelegate>
{
    unsigned int _patternLockLogicTag; // +0x38
    id <WCPayTouchLockVerifyLogicDelegate> _delegate; // +0x40
    WCPayCloseWalletLockCgi * _closeWalletLockCgi; // +0x48
    NSData * _domainData; // +0x50
    WCPayTouchLockAuthenCgi * _authenCgi; // +0x58
}
- (id)initWithData:(id)arg1 delegate:(id)arg2;
- (void)startLogic;
- (void)showNotSupportTouchID;
- (void)showTouchIDNotEnrolled;
- (void)showPasswordVC:(long long)arg1;
- (void)checkTouchID;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)VerifyPayPwdNext:(id)arg1 vc:(id)arg2;
- (void)shouldVerifyTouchLock:(id)arg1;
- (void)shouldVerifyPassword:(id)arg1;
- (BOOL)needBlockBack:(id)arg1;
- (void)verifyViewControllerBack:(id)arg1;
- (void)onPatternLockLogicOperateCancel;
- (void)onPatternLockLogicOperateSuccess;
- (BOOL)needCancelPopAnimation;
- (void)walletLockDidClose:(id)arg1;
- (void)touchLockDidSetup:(id)arg1;
- (void)patternLockDidSetup:(id)arg1;
- (void)walletLockSettingLogicWillStop:(id)arg1;
- (void)closeWalletLockCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)closeWalletLockCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)touchLockAuthenCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)touchLockAuthenCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)touchLockAuthenCgiVerifyPwdFail:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)patternLockLogicTag;
- (void)setPatternLockLogicTag:(unsigned int)arg1;
- (id)closeWalletLockCgi;
- (void)setCloseWalletLockCgi:(id)arg1;
- (id)domainData;
- (void)setDomainData:(id)arg1;
- (id)authenCgi;
- (void)setAuthenCgi:(id)arg1;
- (void).cxx_destruct;
@end
