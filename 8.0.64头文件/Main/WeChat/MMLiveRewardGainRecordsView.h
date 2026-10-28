@interface MMLiveRewardGainRecordsView : MMLiveHalfScreenPanelView <MMLiveHalfScreenTitleBarViewDelegate, MMLiveRewardGainRecordCellDelegate, UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate>
{
    MMTableView * _giftGainRecordsTableView; // +0x8
    id <MMLiveRewardGainRecordsViewDelegate> _delegate; // +0x10
    UIView * _statisticsView; // +0x18
    MMUIButton * _introductionButton; // +0x20
    UIImageView * _iconView; // +0x28
    MMUILabel * _totalGiftGainValueLabel; // +0x30
    MMLoadingView * _loadingView; // +0x38
    MMCPLabel * _emptyTitleLabel; // +0x40
    WCTimeLineFooterView * _footerView; // +0x48
    MMLiveHalfScreenTitleBarView * _titleBar; // +0x50
    NSMutableArray * _rewardGainsInfoList; // +0x58
    NSData * _lastBuffer; // +0x60
    unsigned long long _rewardTotalAmountInWecoin; // +0x68
}
- (id)initWithTaskId:(id)arg1 frame:(CGRect)arg2;
- (void)dealloc;
- (void)initView;
- (void)layoutContentView;
- (void)layoutSubviews;
- (void)setExtraCellLineHidden:(id)arg1;
- (void)onIntroductionButtonClick;
- (void)onLiveGiftGainRecordCellHeadImageClicked:(id)arg1;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (void)openWithAnimation:(BOOL)arg1 completeBlock:(id /* block */)arg2;
- (void)closeWithAnimation:(BOOL)arg1;
- (void)reloadData;
- (void)fetchRewardGainsInfoList;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)giftGainRecordsTableView;
- (void)setGiftGainRecordsTableView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)statisticsView;
- (void)setStatisticsView:(id)arg1;
- (id)introductionButton;
- (void)setIntroductionButton:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)totalGiftGainValueLabel;
- (void)setTotalGiftGainValueLabel:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)emptyTitleLabel;
- (void)setEmptyTitleLabel:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)titleBar;
- (void)setTitleBar:(id)arg1;
- (id)rewardGainsInfoList;
- (void)setRewardGainsInfoList:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (unsigned long long)rewardTotalAmountInWecoin;
- (void)setRewardTotalAmountInWecoin:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
