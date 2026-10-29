@interface WCFinderLiveRosterSelectViewController : MMCPUIViewController <UITableViewDelegate, UITableViewDataSource, MMPageSheetAdapterDelegate>
{
    BOOL _enableConfirmAfterModify; // +0x70
    BOOL _isInPageSheetMode; // +0x71
    BOOL _forceDarkMode; // +0x72
    BOOL _hasModifiedSelectedContacts; // +0x73
    id <WCFinderLiveRosterSelectDelegate> _delegate; // +0x78
    NSMutableArray * _requiredFileIdLists; // +0x80
    NSMutableArray * _disabledFileIdLists; // +0x88
    NSMutableArray * _visibilityIdLists; // +0x90
    NSMutableArray * _allVisibilityFileLists; // +0x98
    NSMutableArray * _filteredVisibilityFileLists; // +0xa0
    long long _visibilityMode; // +0xa8
    long long _liveMode; // +0xb0
    UILabel * _emptyLabel; // +0xb8
    MMTableView * _tableView; // +0xc0
    UIView * _tableViewFooter; // +0xc8
    double _tableHeight; // +0xd0
}
- (void)setTitleInPageSheetModeIfNeeded:(id)arg1;
- (void)initLeftBarItemInPageSheetModeIfNeeded;
- (void)initRightBarItemInPageSheetModeIfNeeded;
- (void)updateDoneBtnEnabledInPageSheetMode;
- (void)setPageSheetAdapter:(id)arg1;
- (id)pageSheetAdapter;
- (double)getContentViewY;
- (double)getVisibleHeight;
- (void)onDoneInPageSheetMode:(id)arg1;
- (void)onCancelInPageSheetMode:(id)arg1;
- (void)pageSheetDidClose:(id)arg1 closeType:(long long)arg2;
- (id)initWithVisibilityFileLists:(id)arg1 andChoosenIdLists:(id)arg2 visibilityMode:(long long)arg3 liveMode:(long long)arg4 forceDarkMode:(BOOL)arg5;
- (BOOL)isSelectEnabled:(id)arg1;
- (BOOL)isSelected:(id)arg1;
- (void)reloadData;
- (id)visibilityIdLists;
- (id)getColorProxy;
- (id)navigationBarBackgroundColor;
- (BOOL)navigationBarBlurEffect;
- (long long)preferredStatusBarStyle;
- (long long)overrideUserInterfaceStyle;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initView;
- (id)doneBtnWording;
- (void)updateDoneBtn;
- (BOOL)isDoneBtnEnabled;
- (id)createInitLeftBarItem;
- (id)createInitLeftButton;
- (id)createInitRightBarItem;
- (void)initTableView;
- (void)layoutTableView;
- (void)initEmptyLabel;
- (void)layoutEmptyLabel;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)cancelRosterSelect;
- (void)onTapCancel;
- (void)finishRosterSelect;
- (void)onTapDone;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)requiredFileIdLists;
- (void)setRequiredFileIdLists:(id)arg1;
- (id)disabledFileIdLists;
- (void)setDisabledFileIdLists:(id)arg1;
- (BOOL)enableConfirmAfterModify;
- (void)setEnableConfirmAfterModify:(BOOL)arg1;
- (BOOL)isInPageSheetMode;
- (void)setIsInPageSheetMode:(BOOL)arg1;
- (void)setVisibilityIdLists:(id)arg1;
- (id)allVisibilityFileLists;
- (void)setAllVisibilityFileLists:(id)arg1;
- (id)filteredVisibilityFileLists;
- (void)setFilteredVisibilityFileLists:(id)arg1;
- (long long)visibilityMode;
- (void)setVisibilityMode:(long long)arg1;
- (long long)liveMode;
- (void)setLiveMode:(long long)arg1;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)tableViewFooter;
- (void)setTableViewFooter:(id)arg1;
- (double)tableHeight;
- (void)setTableHeight:(double)arg1;
- (BOOL)forceDarkMode;
- (void)setForceDarkMode:(BOOL)arg1;
- (BOOL)hasModifiedSelectedContacts;
- (void)setHasModifiedSelectedContacts:(BOOL)arg1;
- (void).cxx_destruct;
@end
