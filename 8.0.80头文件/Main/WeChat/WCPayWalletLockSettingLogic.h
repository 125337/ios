@interface WCPayWalletLockSettingLogic : WCPaySecurityBaseControlLogic <WCPayWalletLockSettingViewControllerDelegate, MMPatternLockLogicDelegate, WCPayCloseWalletLockCgiDelegate, MMTipsViewControllerDelegate, WCPayPayPwdViewControllerDelegate, WCPayTouchLockSettingLogicDelegate>
{
    unsigned int _entryScene; // +0x38
    unsigned int _patternLockLogicTag; // +0x3c
    id <WCPayWalletLockSettingLogicDelegate> _delegate; // +0x40
    WCPayCloseWalletLockCgi * _closeWalletLockCgi; // +0x48
    WCPayWalletLockSettingViewController * _settingVC; // +0x50
    long long _m_patterLockScene; // +0x58
}
- (id)initWithData:(id)arg1 delegate:(id)arg2 entryScene:(unsigned int)arg3;
- (void)startLogic;
- (void)startKindaWalletLockSetting;
- (void)WCPayViewControllerDidBeRemoved:(id)arg1;
- (void)showPasswordVC;
- (unsigned int)walletLockVCEntryScene;
- (void)walletLockVCClickTouchLock:(id)arg1;
- (void)walletLockVCClickPatternLock:(id)arg1;
- (void)walletLockVCClickClose:(id)arg1;
- (void)walletLockVCClickModifyPatternLock:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)onPatternLockLogicOperateCancel;
- (void)onPatternLockLogicOperateSuccess;
- (BOOL)needCancelPopAnimation;
- (void)touchLockSettingLogicSetupSuccess:(id)arg1;
- (void)closeWalletLockCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)closeWalletLockCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)OnVerifyPayPassword:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)entryScene;
- (void)setEntryScene:(unsigned int)arg1;
- (unsigned int)patternLockLogicTag;
- (void)setPatternLockLogicTag:(unsigned int)arg1;
- (id)closeWalletLockCgi;
- (void)setCloseWalletLockCgi:(id)arg1;
- (id)settingVC;
- (void)setSettingVC:(id)arg1;
- (long long)m_patterLockScene;
- (void)setM_patterLockScene:(long long)arg1;
- (void).cxx_destruct;
@end
