@interface WCFinderLivePaymentStatViewController : MMCPUIViewController <MMFinderLivePaymentRecordCellDelegate, UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate>
{
    unsigned int _totalNum; // +0x68
    MMFinderLiveTask * _liveTask; // +0x70
    UIView * _statisticsView; // +0x78
    MMUILabel * _statAudienceTitleLabel; // +0x80
    MMUILabel * _audienceHeaderTitleLabel; // +0x88
    MMUILabel * _wecoinHeaderTitleLabel; // +0x90
    MMUILabel * _totalAudienceCountLabel; // +0x98
    MMUIButton * _introductionButton; // +0xa0
    MMLoadingView * _loadingView; // +0xa8
    MMUILabel * _emptyTitleLabel; // +0xb0
    WCTimeLineFooterView * _footerView; // +0xb8
    MMTableView * _paymentRecordsTableView; // +0xc0
    MMFinderLiveOnlineUserProfileView * _profileView; // +0xc8
    NSMutableArray * _paymentInfoList; // +0xd0
    NSData * _lastBuffer; // +0xd8
    unsigned long long _heatValue; // +0xe0
}
- (id)initWithLiveTask:(id)arg1;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (void)setupUI;
- (void)setupData;
- (void)layoutContentView;
- (void)onBackButtonClicked:(id)arg1;
- (void)cashOut:(id)arg1;
- (void)onIntroductionButtonClick;
- (void)onLiveGiftGainRecordCellHeadImageClicked:(id)arg1;
- (void)reloadData;
- (void)fetchRewardGainsInfoList;
- (void)showProfileView:(id)arg1 liveContact:(id)arg2;
- (void)gotoChatViewVCWithContact:(id)arg1 contactExtInfo:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onGetFinderContact:(id)arg1 contact:(id)arg2;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (id)statisticsView;
- (void)setStatisticsView:(id)arg1;
- (id)statAudienceTitleLabel;
- (void)setStatAudienceTitleLabel:(id)arg1;
- (id)audienceHeaderTitleLabel;
- (void)setAudienceHeaderTitleLabel:(id)arg1;
- (id)wecoinHeaderTitleLabel;
- (void)setWecoinHeaderTitleLabel:(id)arg1;
- (id)totalAudienceCountLabel;
- (void)setTotalAudienceCountLabel:(id)arg1;
- (id)introductionButton;
- (void)setIntroductionButton:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)emptyTitleLabel;
- (void)setEmptyTitleLabel:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)paymentRecordsTableView;
- (void)setPaymentRecordsTableView:(id)arg1;
- (id)profileView;
- (void)setProfileView:(id)arg1;
- (id)paymentInfoList;
- (void)setPaymentInfoList:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (unsigned long long)heatValue;
- (void)setHeatValue:(unsigned long long)arg1;
- (unsigned int)totalNum;
- (void)setTotalNum:(unsigned int)arg1;
- (void).cxx_destruct;
@end

