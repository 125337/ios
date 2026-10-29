@interface MMLiveLotteryWinnerRecordListView : UIView <UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate>
{
    BOOL _isAssistant; // +0x8
    MMTableView * _lotteryWinnersTableView; // +0x10
    NSMutableArray * _winnerList; // +0x18
    MMFinderLiveTaskId * _liveTaskId; // +0x20
    NSString * _lotteryId; // +0x28
    NSData * _lastBuffer; // +0x30
    MMFinderLiveLotteryInfo * _lotteryInfo; // +0x38
    MMLoadingView * _loadingView; // +0x40
    WCTimeLineFooterView * _footerView; // +0x48
    MMFinderLiveLotteryDisplayLogic * _lotteryDisplayLogic; // +0x50
    UIImageView * _bgImageView; // +0x58
    UIView * _lineView; // +0x60
}
- (id)initWithFrame:(CGRect)arg1 liveTaskId:(id)arg2 lotteryId:(id)arg3 lotteryDisplayLogic:(id)arg4;
- (void)initView;
- (void)setFrame:(CGRect)arg1;
- (void)setExtraCellLineHidden:(id)arg1;
- (void)resetWinnerList;
- (void)fetchWinnerList;
- (void)reloadData;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (id)bgImageView;
- (id)lotteryWinnersTableView;
- (void)setLotteryWinnersTableView:(id)arg1;
- (id)winnerList;
- (void)setWinnerList:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (BOOL)isAssistant;
- (void)setIsAssistant:(BOOL)arg1;
- (id)lotteryId;
- (void)setLotteryId:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)lotteryInfo;
- (void)setLotteryInfo:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)lotteryDisplayLogic;
- (void)setLotteryDisplayLogic:(id)arg1;
- (void)setBgImageView:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (void).cxx_destruct;
@end

