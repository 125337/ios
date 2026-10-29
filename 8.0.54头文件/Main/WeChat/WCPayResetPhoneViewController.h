@interface WCPayResetPhoneViewController : WCPayBaseViewController <WCPayCountryCodeItemDelegate, WCPayCountryCodeAndPhoneNumberItemDelegate, ILinkEventExt>
{
    UIButton * m_footerButton; // +0x90
    WCBizInfoGroup * m_group; // +0x98
    WCPayPhoneTextItem * m_textFieldItem; // +0xa0
    WCBaseKeyboardToolBar * m_keyboardBar; // +0xa8
    id <WCPayResetPhoneViewViewControllerDelegate> m_delegate; // +0xb0
    WCPayCountryCodeItem * _countryCodeItem; // +0xb8
    WCPayCountryCodeAndPhoneNumberItem * _countryCodeAndPhoneItem; // +0xc0
}
- (id)init;
- (void)onNext;
- (void)initFooterView;
- (void)initNavigationBar;
- (void)reloadTableView;
- (void)showDetailTip;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)setDelegate:(id)arg1;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)onPhoneClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)checkData;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (BOOL)isSupportForeignPhoneNum;
- (id)countryCodeItem;
- (id)countryCodeAndPhoneItem;
- (void)countryCodeItem:(id)arg1 didSelectCountryCode:(id)arg2;
- (void)countryCodeItem:(id)arg1 isCountryCodeValid:(BOOL)arg2;
- (void)countryCodeAndPhoneNumberItem:(id)arg1 countryCodeDidChange:(id)arg2;
- (id)getCountryCodeAndPhoneNumberItemInitCountryCode:(id)arg1;
- (void)setCountryCodeItem:(id)arg1;
- (void)setCountryCodeAndPhoneItem:(id)arg1;
- (void).cxx_destruct;
@end

