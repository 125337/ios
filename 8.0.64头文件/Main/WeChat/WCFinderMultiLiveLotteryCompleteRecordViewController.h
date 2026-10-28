@interface WCFinderMultiLiveLotteryCompleteRecordViewController : MMCPUIViewController <UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate>
{
    BOOL _isAssistant; // +0x70
    NSMutableArray * _livePrizeRecordList; // +0x78
    MMTableView * _lotterySelfCompleteRecordTableView; // +0x80
    WCTimeLineFooterView * _footerView; // +0x88
    NSData * _lastBuffer; // +0x90
    MMFinderLiveTask * _finderLiveTask; // +0x98
    UIImageView * _nothingIconView; // +0xa0
    UILabel * _nothingLabel; // +0xa8
}
- (id)init;
- (id)initWithTaskForAssistant:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)layoutUI;
- (void)layoutNothingViews;
- (void)layoutLotterySelfCompleteRecordTableView;
- (void)fetchCompleteRecordList;
- (void)reloadData;
- (void)onBackButtonClicked:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)livePrizeRecordForRowAtIndexPath:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (id)livePrizeRecordList;
- (void)setLivePrizeRecordList:(id)arg1;
- (id)lotterySelfCompleteRecordTableView;
- (void)setLotterySelfCompleteRecordTableView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)finderLiveTask;
- (void)setFinderLiveTask:(id)arg1;
- (BOOL)isAssistant;
- (void)setIsAssistant:(BOOL)arg1;
- (id)nothingIconView;
- (void)setNothingIconView:(id)arg1;
- (id)nothingLabel;
- (void)setNothingLabel:(id)arg1;
- (void).cxx_destruct;
@end
