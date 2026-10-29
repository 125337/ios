@interface WCAddressInfoViewController : WCAddressBaseViewController <CNContactPickerDelegate, MMPickLocationViewControllerDelegate, WCAddressHalfScreenDelegate>
{
    UIButton * m_footerButton; // +0x88
    WCBaseTextFieldItem * m_textFieldNameItem; // +0x90
    WCAddressMultiPickerItem * m_pickerDistrictItem; // +0x98
    WCBaseTextViewItem * m_textViewStreetItem; // +0xa0
    WCBaseTextFieldItem * m_textFieldPostalCodeItem; // +0xa8
    WCBaseTextFieldItem * m_textFieldPhoneItem; // +0xb0
    WCBaseTextViewItem * m_textViewPasteBoardItem; // +0xb8
    WCBaseKeyboardToolBar * m_keyboardBar; // +0xc0
    NSMutableArray * m_arrayInfo; // +0xc8
    id <WCAddressInfoViewControllerDelegate> m_delegate; // +0xd0
    NSIndexPath * m_selectItemIndex; // +0xd8
    BOOL m_resolveConnection; // +0xe0
    NSString * m_pasteBoardString; // +0xe8
    double m_keyboardHeight; // +0xf0
    POIItem * m_selectPosition; // +0xf8
    int _infoStatus; // +0x100
    MMPickLocationViewController * _pickLocationViewController; // +0x108
    UILabel * _districtInfoLabel; // +0x110
    NSString * _districtInfoLabelString; // +0x118
    unsigned long long _cellHeightForDistrictInfo; // +0x120
    UITextView * _pasteBoard; // +0x128
    UILabel * _pasteBoardPlaceHoldText; // +0x130
    UIButton * _resolveButton; // +0x138
    UIButton * _doubleResolveButton; // +0x140
    UIButton * _clearPasteButton; // +0x148
    MMLocatingCoordinateLogic * _locatingLogic; // +0x150
}
- (id)init;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (id)locatingLogic;
- (void)initInfoTemplate;
- (void)reloadTableView;
- (void)refreshViewWithData:(id)arg1;
- (void)OnComfireEnsureAlert;
- (void)OnCancelClick;
- (void)showEnsureAlert:(id)arg1 Title:(id)arg2;
- (void)initNavigationBar;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (BOOL)getData:(id)arg1;
- (void)onNext;
- (BOOL)checkIsEmpty:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)WCBaseInfoItemCancelEdit:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)makePasteBoardCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeEmptyCell:(id)arg1 cellInfo:(id)arg2;
- (void)clickInfoCell:(id)arg1 index:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setPasteBoardWithStatu:(BOOL)arg1;
- (void)resolvePasteBoardInfo:(id)arg1;
- (void)onResolveAddressInfo:(id)arg1;
- (void)clearPasteBoardInfo:(id)arg1;
- (void)showResolvingIndictor;
- (void)textViewDidChange:(id)arg1;
- (void)contactButtonDidClicked;
- (id)pickLocationViewController;
- (void)addressButtonDidClicked;
- (void)onFinishSelectedLocation;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (id)onGetRightBarButton;
- (void)onCancelSeletctedLocation;
- (void)onFinishMultiPickerWithProvince:(id)arg1 andCity:(id)arg2 andDistrict:(id)arg3 andStreet:(id)arg4 andPostCode:(id)arg5;
- (void)multiPickerWillDisappear;
- (void)onFailureCompletionWithText:(id)arg1 andComponent:(int)arg2;
- (void)setDistinctInfo:(id)arg1;
- (void)setTextForStreetItem:(id)arg1;
- (void)setPickLocationViewController:(id)arg1;
- (id)districtInfoLabel;
- (void)setDistrictInfoLabel:(id)arg1;
- (id)districtInfoLabelString;
- (void)setDistrictInfoLabelString:(id)arg1;
- (int)infoStatus;
- (void)setInfoStatus:(int)arg1;
- (unsigned long long)cellHeightForDistrictInfo;
- (void)setCellHeightForDistrictInfo:(unsigned long long)arg1;
- (id)pasteBoard;
- (void)setPasteBoard:(id)arg1;
- (id)pasteBoardPlaceHoldText;
- (void)setPasteBoardPlaceHoldText:(id)arg1;
- (id)resolveButton;
- (void)setResolveButton:(id)arg1;
- (id)doubleResolveButton;
- (void)setDoubleResolveButton:(id)arg1;
- (id)clearPasteButton;
- (void)setClearPasteButton:(id)arg1;
- (void)setLocatingLogic:(id)arg1;
- (void).cxx_destruct;
@end

