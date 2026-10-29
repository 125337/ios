@interface WCFinderLiveLotteryWinnerListViewController : MMCPUIViewController <UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate>
{
    BOOL _enableToFinderChat; // +0x70
    BOOL _isInLive; // +0x71
    BOOL _isAssistant; // +0x72
    BOOL _showDownLoad; // +0x73
    unsigned int _isUrlExpired; // +0x74
    NSMutableArray * _winnerList; // +0x78
    MMFinderLiveLotteryInfo * _lotteryInfo; // +0x80
    NSString * _lotteryId; // +0x88
    unsigned long long _liveId; // +0x90
    unsigned long long _objectId; // +0x98
    NSString * _nonceId; // +0xa0
    NSString * _finderUserName; // +0xa8
    MMTableView * _lotteryWinnerTableView; // +0xb0
    LotteryWinnerListHeaderView * _headerView; // +0xb8
    WCTimeLineFooterView * _footerView; // +0xc0
    LotteryWinnerListFooterView * _noMemAttendFooterView; // +0xc8
    NSData * _lastBuffer; // +0xd0
    MMFinderLiveTaskId * _currentLiveTaskId; // +0xd8
    NSString * _recordUrl; // +0xe0
    NSString * _expiredWording; // +0xe8
    MMFinderLiveLotteryRecordExpiredTipView * _expiredTipView; // +0xf0
}
- (id)initWithLiveTaskId:(id)arg1 lotteryInfo:(id)arg2;
- (id)initWithLiveId:(unsigned long long)arg1 objectId:(unsigned long long)arg2 nonceId:(id)arg3 finderUserName:(id)arg4 lotteryInfo:(id)arg5 inLive:(BOOL)arg6 isAssistant:(BOOL)arg7 currentLiveTaskId:(id)arg8;
- (id)initWithLiveId:(unsigned long long)arg1 objectId:(unsigned long long)arg2 nonceId:(id)arg3 finderUserName:(id)arg4 prizeRecord:(id)arg5 inLive:(BOOL)arg6 isAssistant:(BOOL)arg7 currentLiveTaskId:(id)arg8;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)layoutUI;
- (void)layoutLotteryWinnerTableView;
- (void)fetchWinRecordList;
- (void)reloadData;
- (void)onBackButtonClicked:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)timeOutClick;
- (void)downLoadClick;
- (id)expiredTipView;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)gotoChatViewVCWithUserName:(id)arg1 objectId:(unsigned long long)arg2 lotteryId:(id)arg3 contact:(id)arg4 liveContactExtInfo:(id)arg5;
- (id)winnerList;
- (void)setWinnerList:(id)arg1;
- (id)lotteryInfo;
- (void)setLotteryInfo:(id)arg1;
- (id)lotteryId;
- (void)setLotteryId:(id)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (id)lotteryWinnerTableView;
- (void)setLotteryWinnerTableView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)noMemAttendFooterView;
- (void)setNoMemAttendFooterView:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)enableToFinderChat;
- (void)setEnableToFinderChat:(BOOL)arg1;
- (BOOL)isInLive;
- (void)setIsInLive:(BOOL)arg1;
- (BOOL)isAssistant;
- (void)setIsAssistant:(BOOL)arg1;
- (id)currentLiveTaskId;
- (void)setCurrentLiveTaskId:(id)arg1;
- (id)recordUrl;
- (void)setRecordUrl:(id)arg1;
- (BOOL)showDownLoad;
- (void)setShowDownLoad:(BOOL)arg1;
- (unsigned int)isUrlExpired;
- (void)setIsUrlExpired:(unsigned int)arg1;
- (id)expiredWording;
- (void)setExpiredWording:(id)arg1;
- (void)setExpiredTipView:(id)arg1;
- (void).cxx_destruct;
@end
