@interface CameraQRCodeListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, CameraQRCodeModuleDelegate, CameraQRCodeAccessibilityOrderCellDelegate, CameraQRCodeWeDropModuleDelegate, CameraQRCodeHongBaoModuleDelegate, WCActionSheetDelegate>
{
    BOOL _shouldExpandHongBaoOnLoad; // +0x70
    BOOL _needsModuleAppearance; // +0x71
    BOOL _isFirstShow; // +0x72
    BOOL _needRestoreBrightness; // +0x73
    BOOL _newFriendCellClicked; // +0x74
    unsigned int _m_uiEntryScene; // +0x78
    unsigned long long _entrySwitch; // +0x80
    long long _expandedIndex; // +0x88
    UITableView * _tableView; // +0x90
    NSNumber * _pendingExpansionIndex; // +0x98
    NSMutableArray * _arrModules; // +0xa0
    CameraQRCodeReportContext * _reportContext; // +0xa8
    CameraQRCodeModule * _currentClickQRCodeModule; // +0xb0
    double _originalBrightness; // +0xb8
}
- (void)reportQrcodeAddMeViewClick:(BOOL)arg1;
- (void)reportF2FRedPacketViewClick:(BOOL)arg1;
- (void)reportF2FRedPacketMoreViewClick;
- (void)reportF2FRedPacketRecordsViewClick;
- (void)reportF2FRedPacketViewExpose;
- (void)reportPhotoFileViewClick:(BOOL)arg1;
- (void)reportF2FSendFileViewExpose;
- (void)reportF2FAddFriendMoreViewClick;
- (void)reportF2FAddFriendViewExpose;
- (void)reportCameraPageEvent:(long long)arg1;
- (void)reportMyQRCodePageIn;
- (void)reportMyQRCodePageOut;
- (void)reportNewFriendEntryViewExpose;
- (void)reportNewFriendEntryViewClickWithExpDurationMs:(long long)arg1;
- (void)markMyQRCodePageOutByNewFriendClick;
- (id)initWithMainSwitchValue:(id)arg1;
- (id)initWithReportContext:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (CGRect)tableViewLayoutFrame;
- (void)updateTableViewLayout;
- (void)performPendingModuleActions;
- (void)updateTableViewContentInsets;
- (void)viewDidTransitionToNewSize;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)expandWeDropModule;
- (void)expandHongBaoModule;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)increaseBrightnessIfNeed;
- (void)realSetBrightness:(double)arg1;
- (void)dealloc;
- (void)initNavigationItem;
- (void)onTryCloseVC;
- (void)setupModules;
- (void)setupTableViewWithFrame:(CGRect)arg1;
- (void)callModulesViewWillAppear;
- (id)getArrModules;
- (id)getTableView;
- (id)getCurrentExpandedModule;
- (long long)currentNewFriendCount;
- (id)getReportContext;
- (BOOL)shouldInteractivePop;
- (BOOL)shouldExpandedMoudleAllowInteractivePop;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)cellHeightForIndex:(unsigned long long)arg1 expanded:(BOOL)arg2;
- (void)qrCodeCellDidClickMoreButton:(id)arg1;
- (void)reloadModuleIfNeed:(id)arg1;
- (double)moduleContentWidth;
- (id)getViewController;
- (void)hasQRCodeExpose:(id)arg1 expose:(BOOL)arg2;
- (void)weDropModuleDidClickEndButton:(id)arg1;
- (void)hongBaoModuleDidClickMoreButton:(id)arg1;
- (id)hongBaoModuleGetReportContext;
- (void)showHongBaoRecordActionSheet;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (unsigned int)m_uiEntryScene;
- (void)setM_uiEntryScene:(unsigned int)arg1;
- (BOOL)shouldExpandHongBaoOnLoad;
- (void)setShouldExpandHongBaoOnLoad:(BOOL)arg1;
- (unsigned long long)entrySwitch;
- (void)setEntrySwitch:(unsigned long long)arg1;
- (long long)expandedIndex;
- (void)setExpandedIndex:(long long)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (BOOL)needsModuleAppearance;
- (void)setNeedsModuleAppearance:(BOOL)arg1;
- (id)pendingExpansionIndex;
- (void)setPendingExpansionIndex:(id)arg1;
- (id)arrModules;
- (void)setArrModules:(id)arg1;
- (id)reportContext;
- (void)setReportContext:(id)arg1;
- (BOOL)isFirstShow;
- (void)setIsFirstShow:(BOOL)arg1;
- (id)currentClickQRCodeModule;
- (void)setCurrentClickQRCodeModule:(id)arg1;
- (double)originalBrightness;
- (void)setOriginalBrightness:(double)arg1;
- (BOOL)needRestoreBrightness;
- (void)setNeedRestoreBrightness:(BOOL)arg1;
- (BOOL)newFriendCellClicked;
- (void)setNewFriendCellClicked:(BOOL)arg1;
- (void).cxx_destruct;
@end
