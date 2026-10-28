@interface WCPayBindedCardListViewController : WCPayBaseViewController <ILinkEventExt>
{
    WCPayBindCardInfo * selectedPayCardInfo; // +0x98
    id <WCPayBindedCardListViewControllerDelegate> m_delegate; // +0xa0
    BOOL bSelectedNewCardToResetPwd; // +0xa8
    BOOL bViewDidBePoped; // +0xa9
    NSString * nsUsedNewCardWording; // +0xb0
    NSString * nsHeaderTips; // +0xb8
    UIView * tenpayTelView; // +0xc0
    BalanceMobileInfo * _selectedMobileInfo; // +0xc8
}
- (id)init;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)getMobileInfos;
- (void)initNavigationBar;
- (void)initFooterView;
- (void)reloadCardListView;
- (void)makeMobileCell:(id)arg1 cellInfo:(id)arg2;
- (BOOL)noResetMobileForDigitalCert;
- (void)setDelegate:(id)arg1;
- (void)setNewCardControlWording:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setHeaderTips:(id)arg1;
- (void)initKFTelView;
- (void)leftBarButtonDone;
- (void)OnSelectMoblieInfo:(id)arg1;
- (void)OnSelectNewCard;
- (void)onUpdateBankPhoneNumber;
- (void)onBankPhone;
- (void)verifyByCardNumber;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (id)checkBankAvailable:(id)arg1;
- (BOOL)isMobileInfoAvailble:(id)arg1;
- (BOOL)checkBankCanShow:(id)arg1;
- (id)getSelectedMobileInfo:(id)arg1;
- (id)getCardInfoWith:(id)arg1;
- (id)selectedMobileInfo;
- (void)setSelectedMobileInfo:(id)arg1;
- (void).cxx_destruct;
@end
