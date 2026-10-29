@interface WCFinderLiveLotteryWinRecordViewController : MMCPUIViewController <UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate>
{
    BOOL _fetchRecordInAllLives; // +0x68
    BOOL _isPushed; // +0x69
    int _fromScene; // +0x6c
    unsigned int _supportMultiType; // +0x70
    MMFinderLiveTaskId * _taskId; // +0x78
    NSMutableArray * _winRecordList; // +0x80
    NSMutableArray * _milestoneWinRecordList; // +0x88
    MMTableView * _lotterySelfWinRecordTableView; // +0x90
    WCTimeLineFooterView * _footerView; // +0x98
    MMUILabel * _lawDescriptionLabel; // +0xa0
    NSData * _lastBuffer; // +0xa8
    WCFinderLivePageStayReporter * _stayReporter; // +0xb0
}
- (id)initWithLiveTaskId:(id)arg1;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)layoutUI;
- (void)layoutLotterySelfWinRecordTableView;
- (void)layoutLawDescriptionLabel;
- (BOOL)fetchWinRecordList;
- (BOOL)isMilestoneSupportMultiType;
- (unsigned int)getSupportMultiTypeFrom:(id)arg1;
- (id)getCurrentMilestoneWinRecordListFrom:(id)arg1;
- (id)getCurrentWinRecordListFrom:(id)arg1;
- (void)reloadData;
- (id)liveTask;
- (id)stayReporter;
- (void)onBackButtonClicked:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)pushMilestoneLotteryAtIndexPath:(id)arg1;
- (void)pushCustomeLotteryAtIndexPath:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)reportLotteryRecord:(id)arg1 isExpose:(BOOL)arg2;
- (id)audienceLogReporter;
- (BOOL)fetchRecordInAllLives;
- (void)setFetchRecordInAllLives:(BOOL)arg1;
- (BOOL)isPushed;
- (void)setIsPushed:(BOOL)arg1;
- (int)fromScene;
- (void)setFromScene:(int)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)winRecordList;
- (void)setWinRecordList:(id)arg1;
- (id)milestoneWinRecordList;
- (void)setMilestoneWinRecordList:(id)arg1;
- (id)lotterySelfWinRecordTableView;
- (void)setLotterySelfWinRecordTableView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)lawDescriptionLabel;
- (void)setLawDescriptionLabel:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (unsigned int)supportMultiType;
- (void)setSupportMultiType:(unsigned int)arg1;
- (void)setStayReporter:(id)arg1;
- (void).cxx_destruct;
@end

