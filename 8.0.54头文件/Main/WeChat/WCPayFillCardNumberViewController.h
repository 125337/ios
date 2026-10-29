@interface WCPayFillCardNumberViewController : WCPayBaseViewController <WCPayCardNumberScanDelegate, MMWebViewDelegate, ILinkEventExt, WCBizTipViewDelegate>
{
    UIButton * m_footerButton; // +0x90
    WCBizInfoGroup * m_group; // +0x98
    WCPayTenpaySecureCtrlItem * m_textFieldItem; // +0xa0
    WCBaseTextFieldItem * m_textAutoFilledCardNumberItem; // +0xa8
    RichTextView * richTextView; // +0xb0
    id <WCPayFillCardNumberViewControllerDelegate> m_delegate; // +0xb8
    WCBizTipView * introView; // +0xc0
    BOOL m_bAutoFilledCardNumber; // +0xc8
    BOOL m_bShowedFavorInfo; // +0xc9
    NSString * m_headerTitle; // +0xd0
    UILabel * autoFilledNumberLabel; // +0xd8
    NSString * m_viewTitle; // +0xe0
    RichTextView * realnameRichTextView; // +0xe8
    UIButton * _scanButton; // +0xf0
    WCBaseControlLogic * _fromControlLogic; // +0xf8
}
- (id)init;
- (void)setHeaderTip:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)dealloc;
- (void)initFooterView;
- (void)setShowedFavorInfo;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)FillCardNumberCancel;
- (void)initNavigationBar;
- (id)getFirstUserTipView;
- (void)reloadTableView;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)refreshViewWithData:(id)arg1;
- (void)scanAction:(id)arg1;
- (void)onNext;
- (void)OnClearAutoFilledCardNumber;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)setDelegate:(id)arg1;
- (void)startLogicLoading;
- (void)stopLogicLoading;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)showDetailTip;
- (void)OnWCBizTipViewClosed;
- (void)setAutoFilledCardNumber;
- (void)didFindCardNumber:(id)arg1 cardImage:(id)arg2 scanResult:(id)arg3;
- (unsigned int)onWCPayCardNumberScanViewControllerSource;
- (void)footerTipAction:(id)arg1;
- (void)changeRealName;
- (void)webViewReturn:(id)arg1;
- (unsigned int)regFlag;
- (BOOL)m_bAutoFilledCardNumber;
- (id)fromControlLogic;
- (void)setFromControlLogic:(id)arg1;
- (void).cxx_destruct;
@end

