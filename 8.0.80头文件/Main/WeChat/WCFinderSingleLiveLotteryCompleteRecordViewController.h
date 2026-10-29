@interface WCFinderSingleLiveLotteryCompleteRecordViewController : MMCPUIViewController <UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate>
{
    BOOL _isLeftBarItemCloseStyle; // +0x70
    BOOL _isInLive; // +0x71
    BOOL _isAssistant; // +0x72
    unsigned long long _liveId; // +0x78
    unsigned long long _objectId; // +0x80
    NSString * _nonceId; // +0x88
    PrizeRecord * _prizeRecord; // +0x90
    NSMutableArray * _completedRecordList; // +0x98
    MMTableView * _lotterySelfCompleteRecordTableView; // +0xa0
    MMUILabel * _lawDescriptionLabel; // +0xa8
    WCTimeLineFooterView * _footerView; // +0xb0
    MMLiveLotteryCompleteInfoHeaderView * _headerView; // +0xb8
    NSData * _lastBuffer; // +0xc0
    MMFinderLiveTaskId * _currentLiveTaskId; // +0xc8
}
- (id)initWithLiveTaskId:(id)arg1 title:(id)arg2 compltedLotteryRecord:(id)arg3;
- (id)initWithLiveId:(unsigned long long)arg1 objectId:(unsigned long long)arg2 nonceId:(id)arg3 title:(id)arg4 compltedLotteryRecord:(id)arg5 isAssistant:(BOOL)arg6 currentLiveTaskId:(id)arg7;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)layoutUI;
- (void)layoutLotterySelfCompleteRecordTableView;
- (void)layoutLawDescriptionLabel;
- (void)updateHeaderViewLotteryRecord;
- (BOOL)fetchCompleteRecordList;
- (id)getCurrentLotteryRecordFrom:(id)arg1;
- (void)reloadData;
- (void)onBackButtonClicked:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (id)prizeRecord;
- (void)setPrizeRecord:(id)arg1;
- (id)completedRecordList;
- (void)setCompletedRecordList:(id)arg1;
- (id)lotterySelfCompleteRecordTableView;
- (void)setLotterySelfCompleteRecordTableView:(id)arg1;
- (id)lawDescriptionLabel;
- (void)setLawDescriptionLabel:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)isLeftBarItemCloseStyle;
- (void)setIsLeftBarItemCloseStyle:(BOOL)arg1;
- (BOOL)isInLive;
- (void)setIsInLive:(BOOL)arg1;
- (BOOL)isAssistant;
- (void)setIsAssistant:(BOOL)arg1;
- (id)currentLiveTaskId;
- (void)setCurrentLiveTaskId:(id)arg1;
- (void).cxx_destruct;
@end
