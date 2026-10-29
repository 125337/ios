@interface ChatBoxSessionListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, IMMNewSessionMgrExt, IChatBoxMgrExt, MainSessionEditingLogicDelegate>
{
    unsigned long long _lastEnterMainTabTime; // +0x68
    MainSessionEditingLogic * _sessionEditingLogic; // +0x70
    MainFrameFoldReporter * _reporter; // +0x78
    double _cellHeight; // +0x80
    MMTableView * _tableView; // +0x88
    MMUILabel * _emptyLabel; // +0x90
}
- (id)init;
- (void)setLastEnterMainTabTime:(unsigned long long)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)initUI;
- (void)updateNavBarLeftButton;
- (void)exposeCurrentVisibleCells;
- (void)onAppWillEnterForeground:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)logicGetSessionAtIndexPath:(id)arg1;
- (id)logicGetCellDataAtIndexPath:(id)arg1;
- (void)logicUpdateSession:(id)arg1;
- (long long)logicGetCountForSection:(long long)arg1;
- (void)onLogicHideSession:(id)arg1;
- (void)onLogicDeleteSessionByUsername:(id)arg1;
- (void)onLogicOpenSession:(id)arg1;
- (void)openSession:(id)arg1 atIndexPath:(id)arg2;
- (void)onBackButtonClicked:(id)arg1;
- (void)onSessionChanged:(id)arg1;
- (void)onSessionTotalUnreadCountChange:(unsigned int)arg1;
- (void)onChatBoxSessionListChanged;
- (void)registerYReportSdk;
- (unsigned long long)lastEnterMainTabTime;
- (id)sessionEditingLogic;
- (void)setSessionEditingLogic:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (double)cellHeight;
- (void)setCellHeight:(double)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg1;
- (void).cxx_destruct;
@end

