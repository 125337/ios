@interface WCAddressInfoViewController : WCAddressBaseViewController <MMPickLocationViewControllerDelegate, WCAddressHalfScreenDelegate, CountryCodePickerDelegate>
{
    UIButton * m_footerButton; // +0x90
    WCBaseTextFieldItem * m_textFieldNameItem; // +0x98
    WCAddressMultiPickerItem * m_pickerDistrictItem; // +0xa0
    WCBaseTextViewItem * m_textViewStreetItem; // +0xa8
    WCBaseTextFieldItem * m_textFieldPostalCodeItem; // +0xb0
    WCBaseTextFieldItem * m_textFieldPhoneItem; // +0xb8
    WCBaseTextViewItem * m_textViewPasteBoardItem; // +0xc0
    WCBaseKeyboardToolBar * m_keyboardBar; // +0xc8
    NSMutableArray * m_arrayInfo; // +0xd0
    id <WCAddressInfoViewControllerDelegate> m_delegate; // +0xd8
    NSIndexPath * m_selectItemIndex; // +0xe0
    BOOL m_resolveConnection; // +0xe8
    NSString * m_pasteBoardString; // +0xf0
    double m_keyboardHeight; // +0xf8
    POIItem * m_selectPosition; // +0x100
    int _infoStatus; // +0x108
    UIButton * _saveButton; // +0x110
    MMPickLocationViewController * _pickLocationViewController; // +0x118
    NSString * _postCode; // +0x120
    UILabel * _districtInfoLabel; // +0x128
    NSString * _districtInfoLabelString; // +0x130
    unsigned long long _cellHeightForDistrictInfo; // +0x138
    UITextView * _pasteBoard; // +0x140
    UILabel * _pasteBoardPlaceHoldText; // +0x148
    UIButton * _resolveButton; // +0x150
    UIButton * _doubleResolveButton; // +0x158
    UIButton * _clearPasteButton; // +0x160
    MMLocatingCoordinateLogic * _locatingLogic; // +0x168
    UIView * _bottomMaskView; // +0x170
}
- (void)addSwiftViewWithOriginAddress:(id)arg1;
- (void)updateWithAddress:(id)arg1;
- (id)pasteBoardText;
- (void)setPasteBoardText:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setUserName:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)setDetailAddress:(id)arg1;
- (void)setShowPasteBoard:(BOOL)arg1;
- (id)init;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (id)locatingLogic;
- (void)refreshViewWithData:(id)arg1;
- (void)initRegionPicker;
- (BOOL)isAddMode;
- (long long)bottomSavePanelHeight;
- (void)OnCancelClick;
- (void)onCancel;
- (void)showEnsureAlert:(id)arg1 Title:(id)arg2;
- (void)initNavigationBar;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)addBottomSavePanel;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (BOOL)getData:(id)arg1;
- (void)onNext;
- (void)reportSaveAction:(id)arg1;
- (void)registerYReportSdk;
- (void)routeRegionPicker;
- (void)routeCountryCodePicker;
- (void)setDelegate:(id)arg1;
- (void)resolvePasteBoardInfo;
- (void)onResolveAddressInfo:(id)arg1;
- (void)clearPasteBoardInfo:(id)arg1;
- (void)showResolvingIndictor;
- (void)textViewDidChange:(id)arg1;
- (id)pickLocationViewController;
- (void)addressButtonDidClicked;
- (void)openPickLocationView;
- (void)onFinishSelectedLocation;
- (void)checkSaveEnabled;
- (id)onGetRightBarButton;
- (void)onCancelSeletctedLocation;
- (void)onFinishMultiPickerWithProvince:(id)arg1 andCity:(id)arg2 andDistrict:(id)arg3 andStreet:(id)arg4 andPostCode:(id)arg5;
- (void)multiPickerWillDisappear;
- (void)onFailureCompletionWithText:(id)arg1 andComponent:(int)arg2;
- (void)setTextForStreetItem:(id)arg1;
- (id)tipLabelForComponent:(int)arg1;
- (void)onClickTipCellLink:(id)arg1;
- (void)CountryCodePickerDidPickCountryCode:(id)arg1;
- (id)saveButton;
- (void)setSaveButton:(id)arg1;
- (void)setPickLocationViewController:(id)arg1;
- (id)postCode;
- (void)setPostCode:(id)arg1;
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
- (id)bottomMaskView;
- (void)setBottomMaskView:(id)arg1;
- (void).cxx_destruct;
@end
