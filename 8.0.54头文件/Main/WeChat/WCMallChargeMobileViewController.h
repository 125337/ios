@interface WCMallChargeMobileViewController : WCMallBaseViewController <CNContactPickerDelegate, MMTipsViewControllerDelegate, UITextFieldDelegate, WCMallOldTelephoneViewDelegate, WCMallCandidateTelephoneViewDelegate, ILinkEventExt>
{
    id <WCMallChargeMobileViewControllerDelegate> m_delegate; // +0x88
    WCUITextField * m_textInputTextField; // +0x90
    UIView * oHeaderView; // +0x98
    UIView * oTipsBannerView; // +0xa0
    UIView * oInputView; // +0xa8
    UIView * oDescTipsView; // +0xb0
    UILabel * oUserNameLabel; // +0xb8
    UILabel * oOperatorsTipsLabel; // +0xc0
    UILabel * oErrorMsgTipsLabel; // +0xc8
    UILabel * oPlaceHolderTipsLabel; // +0xd0
    UIButton * oSelectMaskAddressButton; // +0xd8
    UIButton * oSelectAddressButton; // +0xe0
    UIView * oBottomContainerView; // +0xe8
    UIView * oFunctionListView; // +0xf0
    BOOL bDidPoped; // +0xf8
    BOOL bInited; // +0xf9
    int m_eTelephoneNumberInputStatus; // +0xfc
    WCMallOldTelephoneView * m_oWCMallOldTelephoneView; // +0x100
    WCMallCandidateTelephoneView * m_oWCMallCandidateTelephoneView; // +0x108
    NSDictionary * dicSelectedProductInfo; // +0x110
    BOOL _doNotUpdateAfterKeyboardDismiss; // +0x118
    BOOL _bHasRefreshTextFieldDefaultNumber; // +0x119
    NSDictionary * _specialItem; // +0x120
    unsigned long long _currentAlertType; // +0x128
}
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)initNavigationBar;
- (BOOL)initFilledDefaultData;
- (void)initOldTelphoneTableView:(CGRect)arg1;
- (void)initCandidateTelphoneTableView:(CGRect)arg1;
- (id)getBannerView;
- (id)getInputMobileNumberView;
- (id)getDescTipsView;
- (void)reloadFunctionListView;
- (void)initJumpedH5FunctionView;
- (void)initCurrentView;
- (void)reloadOldTelephoneListView;
- (void)reloadCandidateTelephoneView;
- (id)getCurrentUserName;
- (id)getCurrentOperatorName;
- (id)getCurrentFunctionDictionary;
- (void)refreshTelphoneTextFieldAfterHandleSvrNumberList;
- (void)OnLeftBarButtonDone;
- (void)reloadDescTipsView;
- (void)reloadTableView;
- (void)reloadAllContents;
- (BOOL)checkTips;
- (void)reloadBannerView;
- (void)refreshViewWithData:(id)arg1;
- (void)OnActivityIconCancel:(id)arg1;
- (void)relayoutContentViewAfterBannerDismiss;
- (void)OnActivityIconClick:(id)arg1;
- (void)OnClickedPayCard;
- (void)onClickRemind;
- (void)OnClickedWt;
- (void)onClickWeSim;
- (void)OnFounctionClicked:(id)arg1;
- (void)OnFounctionDown:(id)arg1;
- (void)OnFounctionUp:(id)arg1;
- (void)OnEnsureCharge;
- (void)onCancelCharge;
- (void)setDelegate:(id)arg1;
- (void)setTelephoneNumberOwnerName:(id)arg1 Number:(id)arg2;
- (void)refreshUsernameLabelColorWithName:(id)arg1;
- (void)rightBarButtonPress:(id)arg1;
- (void)onKeyboardHide:(id)arg1;
- (id)getCurrentRemark;
- (id)genTargetUrlWithClientParamFromOriginUrl:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndOnExit:(id)arg1;
- (void)textFieldDidChanged:(id)arg1;
- (void)OnClickWCMallOldTelephoneCell:(unsigned int)arg1;
- (void)OnClearTelphone;
- (void)OnClickWCMallOldTelephoneClearButton;
- (unsigned int)GetNumberOfOldTelephoneListCount;
- (id)GetOldTelephoneNumber:(unsigned int)arg1;
- (id)GetOldTelephoneOwnerName:(unsigned int)arg1;
- (id)GetOldTelephoneOperatorName:(unsigned int)arg1;
- (void)onTapBackgrounView;
- (void)OnClickWCMallCandidateTelephoneCell:(unsigned int)arg1;
- (void)OnClickWCMallCandidateTelephoneEnsureCellClicked;
- (unsigned int)GetNumberOfCandidateTelephoneListCount;
- (id)GetCandidateTelephoneDescription:(unsigned int)arg1 DifferentIndex:(id)arg2;
- (id)GetCandidateTelephoneEnsureTip;
- (void)onSelectEditInputTextField;
- (void)onSelectContact;
- (void)contactPickerDidCancel:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (BOOL)isNumberMayInvalidTips:(id)arg1;
- (id)getTextColorWithFunctionIndex:(unsigned long long)arg1;
- (void)openTinyAppWithUserName:(id)arg1 path:(id)arg2;
- (BOOL)isUrlNeedDecode:(id)arg1;
- (void)reportVCClickWithTitle:(id)arg1 subTitle:(id)arg2 jumpType:(unsigned long long)arg3 jumpData:(id)arg4;
- (void)reportVCClickAlertWithAlertType:(unsigned long long)arg1 alertAction:(unsigned long long)arg2;
- (BOOL)doNotUpdateAfterKeyboardDismiss;
- (void)setDoNotUpdateAfterKeyboardDismiss:(BOOL)arg1;
- (id)specialItem;
- (void)setSpecialItem:(id)arg1;
- (BOOL)bHasRefreshTextFieldDefaultNumber;
- (void)setBHasRefreshTextFieldDefaultNumber:(BOOL)arg1;
- (unsigned long long)currentAlertType;
- (void)setCurrentAlertType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

