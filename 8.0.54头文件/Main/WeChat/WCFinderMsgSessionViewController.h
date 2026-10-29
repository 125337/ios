@interface WCFinderMsgSessionViewController : MMUIViewController <WCFinderMsgSessionCellDataSourceDelegate, UITableViewDelegate, UITableViewDataSource, WCGeneralMonitorDelegate, WCFinderRedDotNotifyExt>
{
    WCFinderMsgSessionCellDataSource * _cellDataSource; // +0x68
    MMTableView * _tableView; // +0x70
    WCFinderMsgSessionListReporter * _reporter; // +0x78
    MMBaseSessionCellData * _systemCellData; // +0x80
    NSString * _currentFinderUsername; // +0x88
    WCFinderProcessTimeRecorder * _processTimeRecarder; // +0x90
}
- (id)initWithSessionCellDataSource:(id)arg1;
- (void)configReportInfoWithReporter:(id)arg1;
- (BOOL)canShowPrivate;
- (void)viewDidLoad;
- (void)setUpRightNav;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)onWillQuitSessionViewController;
- (void)reloadTableView;
- (int)commentScene;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)reportFinderTeamMsgWithEventType:(long long)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)onFinderPrivateMsgContactExtInfoUpdatedWithSessionId:(id)arg1;
- (void)onFinderMsgSessionUpdated;
- (id)getSessionIdForIndexPath:(id)arg1;
- (BOOL)canShowSystemCellData;
- (id)getSystemCellData;
- (BOOL)enableDisplayBadgeGroupView;
- (void)onFinderNotifyUnreadMentionCountNeedReload;
- (void)reloadViewData;
- (void)registerYReportSdk;
- (void)reportPageOut;
- (void)onClickMentionSwitchAction;
- (id)cellDataSource;
- (void)setCellDataSource:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)systemCellData;
- (void)setSystemCellData:(id)arg1;
- (id)currentFinderUsername;
- (void)setCurrentFinderUsername:(id)arg1;
- (id)processTimeRecarder;
- (void)setProcessTimeRecarder:(id)arg1;
- (void).cxx_destruct;
@end

