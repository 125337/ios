@interface WCFinderLiveRosterSelectViewController : MMCPUIViewController <UITableViewDelegate, UITableViewDataSource, MMPageSheetAdapterDelegate>
{
    BOOL _isInPageSheetMode; // +0x68
    BOOL _forceDarkMode; // +0x69
    id <WCFinderLiveRosterSelectDelegate> _delegate; // +0x70
    NSMutableArray * _visibilityIdLists; // +0x78
    NSMutableArray * _allVisibilityFileLists; // +0x80
    long long _visibilityMode; // +0x88
    long long _liveMode; // +0x90
    MMTableView * _tableView; // +0x98
    UIView * _tableViewFooter; // +0xa0
    double _tableHeight; // +0xa8
}
- (void)setTitleInPageSheetModeIfNeeded:(id)arg1;
- (void)initLeftBarItemInPageSheetModeIfNeeded;
- (void)initRightBarItemInPageSheetModeIfNeeded;
- (void)setPageSheetAdapter:(id)arg1;
- (id)pageSheetAdapter;
- (double)getContentViewY;
- (double)getVisibleHeight;
- (void)onDoneInPageSheetMode:(id)arg1;
- (void)onCancelInPageSheetMode:(id)arg1;
- (void)pageSheetDidClose:(id)arg1 closeType:(long long)arg2;
- (id)initWithVisibilityFileLists:(id)arg1 andChoosenIdLists:(id)arg2 visibilityMode:(long long)arg3 liveMode:(long long)arg4 forceDarkMode:(BOOL)arg5;
- (id)visibilityIdLists;
- (id)getColorProxy;
- (id)navigationBarBackgroundColor;
- (BOOL)navigationBarBlurEffect;
- (long long)preferredStatusBarStyle;
- (long long)overrideUserInterfaceStyle;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initView;
- (id)createInitLeftBarItem;
- (id)createInitLeftButton;
- (id)createInitRightBarItem;
- (void)initTableView;
- (void)layoutTableView;
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
- (BOOL)isInPageSheetMode;
- (void)setIsInPageSheetMode:(BOOL)arg1;
- (void)setVisibilityIdLists:(id)arg1;
- (id)allVisibilityFileLists;
- (void)setAllVisibilityFileLists:(id)arg1;
- (long long)visibilityMode;
- (void)setVisibilityMode:(long long)arg1;
- (long long)liveMode;
- (void)setLiveMode:(long long)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)tableViewFooter;
- (void)setTableViewFooter:(id)arg1;
- (double)tableHeight;
- (void)setTableHeight:(double)arg1;
- (BOOL)forceDarkMode;
- (void)setForceDarkMode:(BOOL)arg1;
- (void).cxx_destruct;
@end

