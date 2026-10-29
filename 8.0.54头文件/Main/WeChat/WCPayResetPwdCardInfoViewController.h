@interface WCPayResetPwdCardInfoViewController : WCPayBaseViewController <WCPayCountryCodeItemDelegate, WCPayCountryCodeAndPhoneNumberItemDelegate, WCBaseInfoItemDelegate, ILinkEventExt, WCActionSheetDelegate, WCPayAreaItemDelegate>
{
    UIButton * m_footerButton; // +0x90
    NSMutableArray * m_arrayInfoGroup; // +0x98
    WCBaseKeyboardToolBar * m_keyboardBar; // +0xa0
    WCPayTenpaySecureCtrlItem * m_textFieldCardNumItem; // +0xa8
    WCPayValidDateItem * m_pikerValidDateItem; // +0xb0
    WCPayCVVItem * m_textFieldCVVItem; // +0xb8
    WCPayCardTypeItem * m_pikerCardTypeItem; // +0xc0
    WCBaseTextFieldItem * m_textFieldNameItem; // +0xc8
    WCPayCredTypeItem * m_pickerCredTypeItem; // +0xd0
    WCPayTenpaySecureCtrlItem * m_textFieldHolderIDItem; // +0xd8
    WCBaseTextFieldItem * m_textFieldPhoneItem; // +0xe0
    id <WCPayResetPwdCardInfoViewControllerDelegate> m_delegate; // +0xe8
    BOOL m_bReadAgreement; // +0xf0
    WCBaseTextFieldItem * m_textFieldFirstNameItem; // +0xf8
    WCBaseTextFieldItem * m_textFieldLastNameItem; // +0x100
    WCPayAreaItem * m_textFieldAreaItem; // +0x108
    WCBaseTextFieldItem * m_textFieldAddressItem; // +0x110
    WCBaseTextFieldItem * m_textFieldPhoneNumberItem; // +0x118
    WCBaseTextFieldItem * m_textFieldZipItem; // +0x120
    WCBaseTextFieldItem * m_textFieldEmailItem; // +0x128
    WCPaySelectDateItem * m_pickerCredValidDateItem; // +0x130
    WCPaySelectCountItem * m_pickerSelectCountItem; // +0x138
    WCPaySelectDateItem * m_pickerBirthDayItem; // +0x140
    double _m_minItemLeft; // +0x148
    WCPayCountryCodeItem * _countryCodeItem; // +0x150
    WCPayCountryCodeAndPhoneNumberItem * _countryCodeAndPhoneItem; // +0x158
    WCBaseTextFieldItem * _realNameTextItem; // +0x160
}
- (id)init;
- (void)dealloc;
- (void)initInfoTemplate;
- (long long)nowYear;
- (void)reloadTableView;
- (void)initFooterView;
- (void)initNavigationBar;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (BOOL)getData:(id)arg1;
- (void)onNext;
- (void)onReadAgreement:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (BOOL)checkIsEmpty:(id)arg1;
- (void)checkData:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)clickInfoCell:(id)arg1;
- (void)showDetailTip;
- (void)setDelegate:(id)arg1;
- (void)onWCPayAreaItemDidChoseRegion:(id)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (BOOL)isSupportForeignPhoneNum;
- (id)countryCodeItem;
- (id)countryCodeAndPhoneItem;
- (void)countryCodeItem:(id)arg1 didSelectCountryCode:(id)arg2;
- (void)countryCodeItem:(id)arg1 isCountryCodeValid:(BOOL)arg2;
- (void)countryCodeAndPhoneNumberItem:(id)arg1 countryCodeDidChange:(id)arg2;
- (id)getCountryCodeAndPhoneNumberItemInitCountryCode:(id)arg1;
- (double)m_minItemLeft;
- (void)setM_minItemLeft:(double)arg1;
- (void)setCountryCodeItem:(id)arg1;
- (void)setCountryCodeAndPhoneItem:(id)arg1;
- (id)realNameTextItem;
- (void)setRealNameTextItem:(id)arg1;
- (void).cxx_destruct;
@end

