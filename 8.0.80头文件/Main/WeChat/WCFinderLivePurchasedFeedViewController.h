@interface WCFinderLivePurchasedFeedViewController : MMCPUIViewController <UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate, MMFinderLivePurchasedFeedViewModelDelegate>
{
    BOOL _resetTableViewOnViewSizeChange; // +0x70
    MMFinderLiveTask * _liveTask; // +0x78
    MMLoadingView * _loadingView; // +0x80
    MMUILabel * _emptyTitleLabel; // +0x88
    WCTimeLineFooterView * _footerView; // +0x90
    MMTableView * _purchasedFeedsTableView; // +0x98
    MMFinderLivePurchasedFeedViewModel * _viewModel; // +0xa0
    CGSize _lastLayoutSize; // +0xa8
}
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)bindPageReport;
- (void)setupUI;
- (void)setupTableView;
- (void)setupData;
- (void)layoutContentView;
- (void)viewSafeAreaInsetsDidChange;
- (void)onBackButtonClicked:(id)arg1;
- (void)onHelpButtonClick;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)genImageOfView:(id)arg1;
- (id)genDeleteConfirmIcon;
- (id)udfDictForRowAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onFinderECObjectSelected:(id)arg1 AtIndexPath:(id)arg2;
- (void)onFinderObjectSelected:(id)arg1 AtIndexPath:(id)arg2;
- (void)onPurchasedFeedViewModelStartFetching;
- (void)onPurchasedFeedViewModelUpdated:(BOOL)arg1 hasMoreData:(BOOL)arg2;
- (BOOL)resetTableViewOnViewSizeChange;
- (void)setResetTableViewOnViewSizeChange:(BOOL)arg1;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)emptyTitleLabel;
- (void)setEmptyTitleLabel:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)purchasedFeedsTableView;
- (void)setPurchasedFeedsTableView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (CGSize)lastLayoutSize;
- (void)setLastLayoutSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
