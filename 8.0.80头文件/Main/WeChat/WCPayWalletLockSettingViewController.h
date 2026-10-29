@interface WCPayWalletLockSettingViewController : WCPayBaseViewController <WCPayPaySecurityCgiDelegate>
{
    id <WCPayWalletLockSettingViewControllerDelegate> _delegate; // +0x98
    WCPayPaySecurityCgi * _m_securityCgi; // +0xa0
}
- (void)paySecurityCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)paySecurityCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)onConfirmError;
- (unsigned int)walletLockVCEntryScene;
- (void)viewDidLoad;
- (void)reload;
- (void)reloadTableView;
- (BOOL)patternLockIsCurrentWalletLock;
- (BOOL)isSpecailPatternLockOpen;
- (BOOL)isTouchLockOpen;
- (void)clickTouchLock;
- (void)clickPatternLock;
- (void)clickClose;
- (void)clickModifyPatternLock;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)m_securityCgi;
- (void)setM_securityCgi:(id)arg1;
- (void).cxx_destruct;
@end
