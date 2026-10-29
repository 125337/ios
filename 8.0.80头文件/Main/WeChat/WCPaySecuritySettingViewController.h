@interface WCPaySecuritySettingViewController : WCPayBaseViewController <WCPayWalletEntranceStateViewControllerDelegate, MMTipsViewControllerDelegate, WCPayPaySecurityCgiDelegate, WCPayDigitalCertManageViewControllerDelegate, WCPayWalletLockSettingLogicDelegate, MMUseCaseCallback, SetWCPayWebLogicStateExt>
{
    unsigned int _entryScene; // +0x98
    id <WCPaySecuritySettingViewControllerDelegate> _m_delegate; // +0xa0
    WCPayPaySecurityCgi * _cgi; // +0xa8
    PaySecurityResp * _response; // +0xb0
    WCPayDigitalCertManageViewController * _digitalCertVC; // +0xb8
}
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)showSecurityTips;
- (void)viewDidLayoutSubviews;
- (void)getData;
- (void)setupNavigationBar;
- (double)calCellHeightWithTitle:(id)arg1 desc:(id)arg2 status:(id)arg3;
- (void)reloadTableView;
- (id)tableHeaderView;
- (void)setCell:(id)arg1 title:(id)arg2 desc:(id)arg3 image:(id)arg4 imageUrl:(id)arg5 status:(id)arg6;
- (void)makeDigitalCertCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeWalletLockCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeInsuranceCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeBalancePrivacy:(id)arg1 cellInfo:(id)arg2;
- (void)clickBasicInfo;
- (void)clickDigitalCertCell:(id)arg1;
- (void)clickWalletLockCell:(id)arg1;
- (void)clickBalancePrivacyCell:(id)arg1;
- (void)clickInsuranceCell:(id)arg1;
- (void)clickPaySecurityDialog;
- (void)updateBackward;
- (void)paySecurityCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)paySecurityCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)onWCPayDigitalCertManageViewControllerCallRefresh;
- (void)updateDigitalCert;
- (void)walletLockDidClose:(id)arg1;
- (void)touchLockDidSetup:(id)arg1;
- (void)patternLockDidSetup:(id)arg1;
- (void)setWCPayWebLogicStateJsapi:(id)arg1 didGetInfo:(id)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)onClickDialogBtn:(id)arg1;
- (void)onWCPayWalletEntranceStateViewControllerCallRefresh;
- (void)call:(id)arg1;
- (unsigned int)entryScene;
- (void)setEntryScene:(unsigned int)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)cgi;
- (void)setCgi:(id)arg1;
- (id)response;
- (void)setResponse:(id)arg1;
- (id)digitalCertVC;
- (void)setDigitalCertVC:(id)arg1;
- (void).cxx_destruct;
@end
