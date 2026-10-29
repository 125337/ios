@interface MMFinderLiveNewShareSettingViewController : MMUILandscapeSheetViewController <MMFinderLiveVisivilityShareSettingDelegate, MMFinderLivePaymentPolicyIntroViewDelegate>
{
    BOOL _forceDarkMode; // +0x68
    BOOL _isVisibilityDoneButtonEnable; // +0x69
    BOOL _bindNotice; // +0x6a
    int _currentLiveMode; // +0x6c
    id <MMFinderLiveNewShareSettingViewControllerDelegate> _actionDelegate; // +0x70
    MMTableViewInfo * _tableViewInfo; // +0x78
    MMFinderLiveShareSettingInitParams * _shareSettingParams; // +0x80
    unsigned long long _currentSelectMode; // +0x88
    long long _currentVisibilityMode; // +0x90
    unsigned long long _liveStartMode; // +0x98
    MMFinderLivePaymentVisivilitySettingInfo * _paymentSettingInfo; // +0xa0
    MMFinderLivePaymentVisivilityShareSettingView * _paymentVisivilitySettingView; // +0xa8
    MMFinderLivePartialVisivilitySettingInfo * _partialSettingInfo; // +0xb0
    MMFinderLivePartialVisivilityShareSettingView * _partialVisivilitySettingView; // +0xb8
    MMFinderLiveTestLivePartialVisivilitySettingInfo * _testLiveSettingInfo; // +0xc0
    MMFinderLiveTestLivePartialVisivilityShareSettingView * _testLiveVisivilitySettingView; // +0xc8
    NSMutableArray * _selectedVisibleFileLists; // +0xd0
    unsigned long long _entrySource; // +0xd8
}
- (id)initWithShareSettingParams:(id)arg1;
- (id)navigationBarBackgroundColor;
- (BOOL)navigationBarBlurEffect;
- (long long)preferredStatusBarStyle;
- (long long)overrideUserInterfaceStyle;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)paymentSettingInfo;
- (id)partialSettingInfo;
- (id)testLiveSettingInfo;
- (id)getColorProxy;
- (id)originalChoosedContactList;
- (id)chooseContactChatroomList;
- (id)chooseContactUsernameList;
- (id)selectedVisibleFileLists;
- (void)updateVisibleFileLists;
- (void)updateAllVisibilityFileList:(id)arg1;
- (void)reloadTableData;
- (void)makePublicVisibilityCell:(id)arg1 cellInfo:(id)arg2;
- (void)makePartialVisibilityCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeLiveMemberVisibilityCell:(id)arg1 cellInfo:(id)arg2;
- (void)makePaidVisibilityCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeTestLiveVisibilityCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeVisibilityCell:(id)arg1 cellInfo:(id)arg2 title:(id)arg3 select:(BOOL)arg4;
- (void)makeVisibilityCell:(id)arg1 cellInfo:(id)arg2 title:(id)arg3 desc:(id)arg4 select:(BOOL)arg5;
- (void)updateCellInfoSeperateLine:(id)arg1 needDisplay:(BOOL)arg2 leftInset:(double)arg3;
- (void)makePartialVisibilityDescriptionCell:(id)arg1 cellInfo:(id)arg2;
- (void)makePaidVisibilityDescriptionCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeTestLiveVisibilityDescriptionCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeDescriptionCell:(id)arg1 cellInfo:(id)arg2 title:(id)arg3 desc:(id)arg4 descColor:(id)arg5;
- (double)getSingleLineLayoutCellHeight;
- (double)getTwoLineLayoutCellHeight;
- (double)getDescriptionCellHeightWithTitle:(id)arg1 desc:(id)arg2;
- (CGSize)getDescriptionCellDescSize:(id)arg1;
- (id)getRightViewByCurrentLiveVisibilityMode;
- (void)onTapCancel;
- (void)onTapDone;
- (void)onPublicVisibilityModeCellSelect;
- (void)onPartialVisibilityModeCellSelect;
- (void)onLiveMemberVisibilityModeCellSelect;
- (void)onPaidVisibilityModeCellSelect;
- (void)onTestLiveVisibilityModeCellSelect;
- (void)showPaymentVisiviltyShareSettingView;
- (void)showPartialVisiviltyShareSettingView;
- (void)showTestLiveVisiviltyShareSettingView;
- (void)clearLastVisivilitySettingIfNeeded;
- (void)onShareSettingViewConfirmed:(id)arg1;
- (void)onShareSettingViewCanceled:(id)arg1;
- (void)onMMFinderLivePaymentPolicyIntroViewConfirmButtonClicked:(id)arg1;
- (void)updateCurrentSelectMode:(unsigned long long)arg1;
- (BOOL)shouldEnablePaidLive;
- (BOOL)shouldDisplayMemberAndSuperfanVisibility;
- (BOOL)isMemberLiveEnabled;
- (BOOL)isSuperfanEnabled;
- (void)recoverPaidLiveSetting;
- (void)recoverPartialLiveSetting;
- (void)recoverTestLiveSetting;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (BOOL)forceDarkMode;
- (void)setForceDarkMode:(BOOL)arg1;
- (id)tableViewInfo;
- (void)setTableViewInfo:(id)arg1;
- (id)shareSettingParams;
- (void)setShareSettingParams:(id)arg1;
- (BOOL)isVisibilityDoneButtonEnable;
- (BOOL)bindNotice;
- (void)setBindNotice:(BOOL)arg1;
- (unsigned long long)currentSelectMode;
- (void)setCurrentSelectMode:(unsigned long long)arg1;
- (long long)currentVisibilityMode;
- (void)setCurrentVisibilityMode:(long long)arg1;
- (int)currentLiveMode;
- (void)setCurrentLiveMode:(int)arg1;
- (unsigned long long)liveStartMode;
- (void)setLiveStartMode:(unsigned long long)arg1;
- (void)setPaymentSettingInfo:(id)arg1;
- (id)paymentVisivilitySettingView;
- (void)setPaymentVisivilitySettingView:(id)arg1;
- (void)setPartialSettingInfo:(id)arg1;
- (id)partialVisivilitySettingView;
- (void)setPartialVisivilitySettingView:(id)arg1;
- (void)setTestLiveSettingInfo:(id)arg1;
- (id)testLiveVisivilitySettingView;
- (void)setTestLiveVisivilitySettingView:(id)arg1;
- (void)setSelectedVisibleFileLists:(id)arg1;
- (unsigned long long)entrySource;
- (void)setEntrySource:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

