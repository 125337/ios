@interface WCPayResetPwdBindedCardListViewController : WCPayBaseViewController <MMTipsViewControllerDelegate, ILinkEventExt>
{
    UIButton * m_footerButton; // +0x90
    NSMutableArray * m_cellInfoArray; // +0x98
    WCPayBindCardInfo * selectedPayCardInfo; // +0xa0
    id <WCPayResetPwdBindedCardListViewControllerDelegate> m_delegate; // +0xa8
    BOOL bSelectedNewCardToResetPwd; // +0xb0
    RichTextView * richTextView; // +0xb8
    BOOL bPoped; // +0xc0
    UIButton * _qaButton; // +0xc8
    MMTipsViewController * _errorTipsViewController; // +0xd0
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

