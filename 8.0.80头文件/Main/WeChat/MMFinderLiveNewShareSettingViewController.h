@interface MMFinderLiveNewShareSettingViewController : MMUILandscapeSheetViewController <MMFinderLiveVisivilityShareSettingDelegate, MMFinderLivePaymentPolicyIntroViewDelegate>
{
    BOOL _forceDarkMode; // +0x70
    BOOL _isVisibilityDoneButtonEnable; // +0x71
    BOOL _bindNotice; // +0x72
    BOOL _didVisibilityModeManullyChoosed; // +0x73
    int _currentLiveMode; // +0x74
    int _liveStartMode; // +0x78
    id <MMFinderLiveNewShareSettingViewControllerDelegate> _actionDelegate; // +0x80
    MMTableViewInfo * _tableViewInfo; // +0x88
    MMFinderLiveShareSettingInitParams * _shareSettingParams; // +0x90
    unsigned long long _currentSelectMode; // +0x98
    long long _currentVisibilityMode; // +0xa0
    MMFinderLivePaymentVisivilitySettingInfo * _paymentSettingInfo; // +0xa8
    MMFinderLivePaymentVisivilityShareSettingView * _paymentVisivilitySettingView; // +0xb0
    MMFinderLivePartialVisivilitySettingInfo * _partialSettingInfo; // +0xb8
    MMFinderLivePartialVisivilityShareSettingView * _partialVisivilitySettingView; // +0xc0
    MMFinderLiveTestLivePartialVisivilitySettingInfo * _testLiveSettingInfo; // +0xc8
    MMFinderLiveTestLivePartialVisivilityShareSettingView * _testLiveVisivilitySettingView; // +0xd0
    MMFinderLivePartialInvisivilityShareSettingView * _partialInvisibleView; // +0xd8
    MMFinderLivePartialInvisivilitySettingInfo * _partialInvisibleInfo; // +0xe0
    NSMutableArray * _selectedVisibleFileLists; // +0xe8
    unsigned long long _entrySource; // +0xf0
}
- (id)initWithShareSettingParams:(id)arg1;
- (void)forceUpdateToTestLiveSelfSeenMode;
- (id)navigationBarBackgroundColor;
- (BOOL)navigationBarBlurEffect;
- (long long)preferredStatusBarStyle;
- (long long)overrideUserInterfaceStyle;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)paymentSettingInfo;
- (id)partialSettingInfo;
- (id)partialInvisibleInfo;
- (id)testLiveSettingInfo;
- (id)getColorProxy;
- (id)originalChoosedContactList;
- (id)chooseContactChatroomList;
- (id)chooseContactUsernameList;
- (id)selectedTagNameList;
- (id)selectedVisibleFileLists;
- (void)updateVisibleFileLists;
- (BOOL)shouldVisibilityModeManullyChoosed;
- (void)updateAllVisibilityFileList:(id)arg1;
- (void)reloadTableData;
- (void)reloadBasicModeSection;
- (void)reloadDetailModeSection;
- (void)addCornerRadiusToCell:(id)arg1 isTop:(BOOL)arg2;
- (void)makeBasicSectionCell:(id)arg1 cellInfo:(id)arg2;
- (void)makePublicVisibilityCell:(id)arg1 cellInfo:(id)arg2;
- (void)makePartialVisibilityCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeLiveMemberVisibilityCell:(id)arg1 cellInfo:(id)arg2;
- (void)makePaidVisibilityCell:(id)arg1 cellInfo:(id)arg2;
- (void)makePartialInvisibleCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeTestLiveVisibilityCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeTestLiveSelfSeenVisibilityCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeVisibilityCell:(id)arg1 cellInfo:(id)arg2 title:(id)arg3 select:(BOOL)arg4;
- (void)makeVisibilityCell:(id)arg1 cellInfo:(id)arg2 title:(id)arg3 select:(BOOL)arg4 selectImageColor:(id)arg5;
- (void)makeVisibilityCell:(id)arg1 cellInfo:(id)arg2 title:(id)arg3 desc:(id)arg4 select:(BOOL)arg5;
- (void)updateCellInfoSeperateLine:(id)arg1 needDisplay:(BOOL)arg2 leftInset:(double)arg3;
- (void)makePartialVisibilityDescriptionCell:(id)arg1 cellInfo:(id)arg2;
- (void)makePaidVisibilityDescriptionCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeTestLiveVisibilityDescriptionCell:(id)arg1 cellInfo:(id)arg2;
- (void)makePartialInvisibleDescriptionCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeDescriptionCell:(id)arg1 cellInfo:(id)arg2 title:(id)arg3 desc:(id)arg4 descColor:(id)arg5;
- (double)getSingleLineLayoutCellHeight;
- (double)getTwoLineLayoutCellHeight;
- (double)getDescriptionCellHeightWithTitle:(id)arg1 desc:(id)arg2;
- (CGSize)getDescriptionCellDescSize:(id)arg1;
- (id)getRightViewByCurrentLiveVisibilityMode;
- (void)onTapBasicModeSection;
- (void)onTapCancel;
- (void)onTapDone;
- (void)onPublicVisibilityModeCellSelect;
- (void)onPartialVisibilityModeCellSelect;
- (void)forceSelectFromGroupContact;
- (void)onLiveMemberVisibilityModeCellSelect;
- (void)onPaidVisibilityModeCellSelect;
- (void)innerOnPaidVisibilityModeCellSelect;
- (void)onTestLiveVisibilityModeCellSelect;
- (void)onTestLiveSelfSeenModeCellSelect;
- (void)onPartialInvisibleModeCellSelect;
- (void)showPaymentVisiviltyShareSettingView;
- (void)showPartialVisiviltyShareSettingView;
- (void)showPartialInvisibleView;
- (void)showTestLiveVisiviltyShareSettingView;
- (void)clearLastVisivilitySettingIfNeeded;
- (void)onShareSettingViewConfirmed:(id)arg1;
- (void)onShareSettingViewCanceled:(id)arg1;
- (void)onMMFinderLivePaymentPolicyIntroViewConfirmButtonClicked:(id)arg1;
- (BOOL)isTestLiveMode;
- (void)updateCurrentSelectMode:(unsigned long long)arg1;
- (BOOL)shouldEnablePaidLive;
- (BOOL)shouldDisplayMemberAndSuperfanVisibility;
- (BOOL)isMemberLiveEnabled;
- (BOOL)isSuperfanEnabled;
- (void)recoverPaidLiveSetting;
- (void)recoverPartialLiveSetting;
- (void)recoverTestLiveSetting;
- (void)recoverPartialInvisibleLiveSetting;
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
- (int)liveStartMode;
- (void)setLiveStartMode:(int)arg1;
- (void)setPaymentSettingInfo:(id)arg1;
- (id)paymentVisivilitySettingView;
- (void)setPaymentVisivilitySettingView:(id)arg1;
- (void)setPartialSettingInfo:(id)arg1;
- (id)partialVisivilitySettingView;
- (void)setPartialVisivilitySettingView:(id)arg1;
- (void)setTestLiveSettingInfo:(id)arg1;
- (id)testLiveVisivilitySettingView;
- (void)setTestLiveVisivilitySettingView:(id)arg1;
- (id)partialInvisibleView;
- (void)setPartialInvisibleView:(id)arg1;
- (void)setPartialInvisibleInfo:(id)arg1;
- (void)setSelectedVisibleFileLists:(id)arg1;
- (unsigned long long)entrySource;
- (void)setEntrySource:(unsigned long long)arg1;
- (BOOL)didVisibilityModeManullyChoosed;
- (void)setDidVisibilityModeManullyChoosed:(BOOL)arg1;
- (void).cxx_destruct;
@end
