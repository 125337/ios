@interface WCPayFillCardInfoViewController : WCPayBaseViewController <WCPayGetProfessionItemDelegate, WCPayCountryCodeItemDelegate, WCPayCountryCodeAndPhoneNumberItemDelegate, WCBaseInfoItemDelegate, ILinkEventExt, WCActionSheetDelegate, WCPayAreaItemDelegate>
{
    UIButton * m_footerButton; // +0x90
    WCPayCardTypeItem * m_pikerCardTypeItem; // +0x98
    WCPayValidDateItem * m_pikerValidDateItem; // +0xa0
    WCPaySelectDateItem * m_pickerCredValidDateItem; // +0xa8
    WCPaySelectDateItem * m_pickerBirthDayItem; // +0xb0
    WCPaySelectCountItem * m_pickerSelectCountItem; // +0xb8
    WCPayCVVItem * m_textFieldCVVItem; // +0xc0
    WCBaseTextFieldItem * m_textFieldNameItem; // +0xc8
    WCPayCredTypeItem * m_pickerCredTypeItem; // +0xd0
    WCPayTenpaySecureCtrlItem * m_textFieldHolderIDItem; // +0xd8
    WCBaseTextFieldItem * m_textFieldPhoneItem; // +0xe0
    NSMutableArray * m_arrayInfoGroup; // +0xe8
    WCBaseKeyboardToolBar * m_keyboardBar; // +0xf0
    BOOL m_bReadAgreement; // +0xf8
    BOOL m_bSubscribeApp; // +0xf9
    BOOL m_bAutoFilledCardInfo; // +0xfa
    id <WCPayFillCardInfoViewControllerDelegate> m_delegate; // +0x100
    NSIndexPath * m_selectItemIndex; // +0x108
    WCBaseTextFieldItem * m_textFieldFirstNameItem; // +0x110
    WCBaseTextFieldItem * m_textFieldLastNameItem; // +0x118
    WCPayAreaItem * m_textFieldAreaItem; // +0x120
    WCBaseTextFieldItem * m_textFieldAddressItem; // +0x128
    WCBaseTextFieldItem * m_textFieldPhoneNumberItem; // +0x130
    WCBaseTextFieldItem * m_textFieldZipItem; // +0x138
    WCBaseTextFieldItem * m_textFieldEmailItem; // +0x140
    WCPayFillCardInfoSelectBankItem * m_selectBankItem; // +0x148
    WCPayFillCardInfoSelectCardTypeItem * m_selectCardTypeItem; // +0x150
    WCPayAreaItem * _areaItem; // +0x158
    WCPayGetProfessionItem * _professionItem; // +0x160
    double _m_minItemLeft; // +0x168
    WCPayCountryCodeItem * _countryCodeItem; // +0x170
    WCPayCountryCodeAndPhoneNumberItem * _countryCodeAndPhoneItem; // +0x178
    WCPayCardBinInfo * _cardBinInfo; // +0x180
    WCPayCountryCodeItem * _passportCountryCodeItem; // +0x188
    WCPaySelectGenderItem * _genderView; // +0x190
    WCPaySelectDateItem * _effectView; // +0x198
    WCBaseTextFieldItem * _addressView; // +0x1a0
}
- (void)updateGenderView;
- (void)updateEffectView;
- (void)updateAddressView;
- (id)init;
- (void)setTitle:(id)arg1;
- (id)getSectionHeaderView:(id)arg1;
- (void)initInfoTemplate;
- (id)bannedArea;
- (long long)nowYear;
- (BOOL)needShowCreTypeOrCreidRenewalOrCreExpireDate;
- (id)getSectionFromGroup:(id)arg1;
- (id)makeHeader:(id)arg1;
- (void)reloadTableView;
- (void)initFooterView;
- (void)initNavigationBar;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (BOOL)getData:(id)arg1 showError:(BOOL)arg2;
- (void)onNext;
- (void)onReadAgreement:(id)arg1;
- (void)onSubscribeAppBtn:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (BOOL)checkIsEmpty:(id)arg1;
- (void)checkData:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemCancelEdit:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)clickInfoCell:(id)arg1 index:(id)arg2;
- (void)showDetailTip;
- (void)refreshViewWithData:(id)arg1;
- (void)setAutoFilledCardInfo;
- (void)setDelegate:(id)arg1;
- (void)onWCPayAreaItemDidChoseRegion:(id)arg1;
- (id)areaItem;
- (id)professionItem;
- (id)countryCodeItem;
- (id)countryCodeAndPhoneItem;
- (id)passportCountryCodeItem;
- (void)countryCodeItem:(id)arg1 didSelectCountryCode:(id)arg2;
- (void)countryCodeItem:(id)arg1 isCountryCodeValid:(BOOL)arg2;
- (void)countryCodeAndPhoneNumberItem:(id)arg1 countryCodeDidChange:(id)arg2;
- (id)getCountryCodeAndPhoneNumberItemInitCountryCode:(id)arg1;
- (unsigned int)regFlag;
- (id)supportCreInfo:(unsigned int)arg1;
- (BOOL)needProfession;
- (BOOL)needCNArea;
- (BOOL)needDetailAddress;
- (BOOL)m_bAutoFilledCardInfo;
- (void)setAreaItem:(id)arg1;
- (void)setProfessionItem:(id)arg1;
- (double)m_minItemLeft;
- (void)setM_minItemLeft:(double)arg1;
- (void)setCountryCodeItem:(id)arg1;
- (void)setCountryCodeAndPhoneItem:(id)arg1;
- (id)cardBinInfo;
- (void)setCardBinInfo:(id)arg1;
- (void)setPassportCountryCodeItem:(id)arg1;
- (id)genderView;
- (void)setGenderView:(id)arg1;
- (id)effectView;
- (void)setEffectView:(id)arg1;
- (id)addressView;
- (void)setAddressView:(id)arg1;
- (void).cxx_destruct;
@end

