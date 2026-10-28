@interface WCPayVerifyPayCardViewController : WCPayBaseViewController <ILinkEventExt>
{
    UIButton * m_footerButton; // +0x98
    WCPaySMSCodeItem * m_textFieldItem; // +0xa0
    UIButton * m_sendVerifyCodeBtn; // +0xa8
    UILabel * m_sendVerifyCodeLabel; // +0xb0
    long long m_iCountDown; // +0xb8
    NSString * m_nsHeaderTip; // +0xc0
    NSString * m_nsHeaderTipForCustom; // +0xc8
    RichTextView * richTextView; // +0xd0
    WCBaseKeyboardToolBar * m_keyboardBar; // +0xd8
    id <WCPayVerifyPayCardViewControllerDelegate> m_delegate; // +0xe0
    BOOL bShowedModifyBtn; // +0xe8
    UIImageView * _m_iconView; // +0xf0
    UILabel * _m_iconDescLabel; // +0xf8
    UILabel * _m_contentLabel; // +0x100
}
- (id)init;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidLoad;
- (void)willDisappear;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (BOOL)needShowDigitalVersionView;
- (void)viewDidLayoutSubviews;
- (void)setHeaderTip:(id)arg1;
- (void)reloadTableView;
- (void)updateIconViewWithSuperView:(id)arg1;
- (void)updateIconDescLabelWithSuperView:(id)arg1;
- (void)reloadTableWithDigitalLayout;
- (void)reloadTableWithVerifyLayout;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)initFooterView;
- (void)stopTimer;
- (void)startTimer;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)initSendVerifyCodeButton;
- (void)initNavigationBar;
- (void)showNotSMSTipBtn;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)autoInputVerifyCode:(id)arg1;
- (void)showModifyPhoneBtn;
- (void)setFooterBtnTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderTipForCustom:(id)arg1;
- (void)showNotAnyOneSMSTipBtn;
- (void)onSendVerifyCodeClicked:(id)arg1;
- (void)onConfirmSendVerifyCodeAgain;
- (void)OnSendButtonCancel;
- (void)OnSendButtonModify;
- (void)OnModifyPhoneBtn;
- (unsigned int)alertScene;
- (void)onAlertModifyPhone;
- (void)updateSendVerifyCodeButton;
- (void)onNext;
- (void)onOpenQA;
- (id)phoneNumber;
- (id)m_iconView;
- (void)setM_iconView:(id)arg1;
- (id)m_iconDescLabel;
- (void)setM_iconDescLabel:(id)arg1;
- (id)m_contentLabel;
- (void)setM_contentLabel:(id)arg1;
- (void).cxx_destruct;
@end
