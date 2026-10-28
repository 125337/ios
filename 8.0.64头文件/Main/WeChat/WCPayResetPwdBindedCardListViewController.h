@interface WCPayResetPwdBindedCardListViewController : WCPayBaseViewController <MMTipsViewControllerDelegate, ILinkEventExt>
{
    UIButton * m_footerButton; // +0x98
    NSMutableArray * m_cellInfoArray; // +0xa0
    WCPayBindCardInfo * selectedPayCardInfo; // +0xa8
    id <WCPayResetPwdBindedCardListViewControllerDelegate> m_delegate; // +0xb0
    BOOL bSelectedNewCardToResetPwd; // +0xb8
    RichTextView * richTextView; // +0xc0
    BOOL bPoped; // +0xc8
    UIButton * _qaButton; // +0xd0
    MMTipsViewController * _errorTipsViewController; // +0xd8
}
- (id)init;
- (void)dealloc;
- (id)checkBankAvailable:(id)arg1;
- (BOOL)checkBankCanShow:(id)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)OnResetPwdBindedCardListBack;
- (void)initNavigationBar;
- (void)initFooterView;
- (void)reloadCardListView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setDelegate:(id)arg1;
- (void)OnSelectCard:(id)arg1;
- (void)OnSelectInvalidCard:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)OnSelectNewCard;
- (void)onNext;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onQAButtonClick;
- (id)qaButton;
- (void)setQaButton:(id)arg1;
- (id)errorTipsViewController;
- (void)setErrorTipsViewController:(id)arg1;
- (void).cxx_destruct;
@end
