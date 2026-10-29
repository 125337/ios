@interface WCPayResetBalanceTelephoneViewController : WCPayBaseViewController <WCPayCountryCodeItemDelegate, WCPayCountryCodeAndPhoneNumberItemDelegate, ILinkEventExt, WCBizTipViewDelegate>
{
    UIButton * m_footerButton; // +0x98
    WCBizInfoGroup * m_group; // +0xa0
    WCPayPhoneTextItem * m_textFieldItem; // +0xa8
    WCPayValidDateItem * m_pikerValidDateItem; // +0xb0
    WCPayCVVItem * m_textFieldCVVItem; // +0xb8
    WCBaseTextFieldItem * m_textAutoFilledCardNumberItem; // +0xc0
    RichTextView * richTextView; // +0xc8
    id <WCPayResetBalanceTelephoneViewControllerDelegate> m_delegate; // +0xd0
    WCBizTipView * introView; // +0xd8
    BOOL m_bAutoFilledCardNumber; // +0xe0
    BOOL m_bShowedFavorInfo; // +0xe1
    NSString * m_headerTitle; // +0xe8
    UILabel * autoFilledNumberLabel; // +0xf0
    NSString * m_viewTitle; // +0xf8
    WCPayCountryCodeItem * _countryCodeItem; // +0x100
    WCPayCountryCodeAndPhoneNumberItem * _countryCodeAndPhoneItem; // +0x108
}
- (id)init;
- (void)setHeaderTip:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)dealloc;
- (void)initFooterView;
- (void)setShowedFavorInfo;
- (void)FillCardNumberCancel;
- (void)initNavigationBar;
- (void)reloadTableView;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)refreshViewWithData:(id)arg1;
- (void)scanAction:(id)arg1;
- (void)onNext;
- (void)CheckData;
- (void)OnClearAutoFilledCardNumber;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)setDelegate:(id)arg1;
- (void)startLogicLoading;
- (void)stopLogicLoading;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onPhoneClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)showDetailTip;
- (void)OnWCBizTipViewClosed;
- (void)setAutoFilledCardNumber;
- (void)footerTipAction:(id)arg1;
- (BOOL)isSupportForeignPhoneNum;
- (id)countryCodeItem;
- (id)countryCodeAndPhoneItem;
- (void)countryCodeItem:(id)arg1 didSelectCountryCode:(id)arg2;
- (void)countryCodeItem:(id)arg1 isCountryCodeValid:(BOOL)arg2;
- (void)countryCodeAndPhoneNumberItem:(id)arg1 countryCodeDidChange:(id)arg2;
- (id)getCountryCodeAndPhoneNumberItemInitCountryCode:(id)arg1;
- (BOOL)m_bAutoFilledCardNumber;
- (void)setCountryCodeItem:(id)arg1;
- (void)setCountryCodeAndPhoneItem:(id)arg1;
- (void).cxx_destruct;
@end
