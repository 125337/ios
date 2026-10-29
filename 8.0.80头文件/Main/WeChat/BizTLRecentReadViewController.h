@interface BizTLRecentReadViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, PBMessageObserverDelegate, WCActionSheetDelegate, ILinkEventExt>
{
    BOOL _hasLoadAllData; // +0x70
    BOOL _loadLock; // +0x71
    int _sessionId; // +0x74
    unsigned int _state; // +0x78
    unsigned int _initialUpdatedTimeStamp; // +0x7c
    NSMutableArray * _viewModelList; // +0x80
    GetTimelineSettingResp * _settingResp; // +0x88
    NSMutableSet * _clickSet; // +0x90
    MMTableView * _tableView; // +0x98
    BizRecentReadTipsBar * _dataTipsLabelBar; // +0xa0
    MMUILabel * _emptyContentLabel; // +0xa8
    RichTextView * _closedLabel; // +0xb0
    BizRecentReadFooter * _footerView; // +0xb8
    double _tableTop; // +0xc0
}
- (void)updatePreloadMpData:(id)arg1;
- (void)onOpenMp:(id)arg1;
- (void)getUserSetting:(id /* block */)arg1;
- (void)runSettingCloseCgi:(BOOL)arg1;
- (void)handleSettingCgi:(id)arg1;
- (void)dispatchOnViewBePoped;
- (void)report27214:(int)arg1;
- (void)reportOnClickItem:(id)arg1;
- (void)onDeleteSingleItem:(id)arg1;
- (void)onCloseAndDeleteAllItems;
- (void)onOpen;
- (void)runDeleteCgi:(id)arg1;
- (void)loadMoreData;
- (void)handleDataCgi:(id)arg1;
- (void)handleDataResp:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)dealloc;
- (void)initVc;
- (void)initRefreshControl;
- (BOOL)showNavigationBarSepLine;
- (void)viewDidLayoutSubviews;
- (void)onNavigationButtonMoreClicked;
- (void)showMakeSureCloseSheet;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)setState:(unsigned int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)showRightMoreButton:(BOOL)arg1;
- (id)getFirstVisibleCell:(id)arg1;
- (id)getIndex0Cell:(id)arg1;
- (double)getCellOffset:(id)arg1 cell:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateTipsWhenScroll:(id)arg1;
- (void)loadNextPageIfNeed:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)tableView;
- (id)dataTipsLabelBar;
- (id)emptyContentLabel;
- (id)closedLabel;
- (id)footerView;
- (int)sessionId;
- (void)setSessionId:(int)arg1;
- (unsigned int)state;
- (unsigned int)initialUpdatedTimeStamp;
- (void)setInitialUpdatedTimeStamp:(unsigned int)arg1;
- (id)viewModelList;
- (void)setViewModelList:(id)arg1;
- (id)settingResp;
- (void)setSettingResp:(id)arg1;
- (id)clickSet;
- (void)setClickSet:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setDataTipsLabelBar:(id)arg1;
- (void)setEmptyContentLabel:(id)arg1;
- (void)setClosedLabel:(id)arg1;
- (void)setFooterView:(id)arg1;
- (BOOL)hasLoadAllData;
- (void)setHasLoadAllData:(BOOL)arg1;
- (BOOL)loadLock;
- (void)setLoadLock:(BOOL)arg1;
- (double)tableTop;
- (void)setTableTop:(double)arg1;
- (void).cxx_destruct;
@end
