@interface WCFinderMemberShipIntroduceCollectionListViewController : MMUIHalfScreenViewController <UITableViewDelegate, UITableViewDataSource, WCFinderCollectionDetailListViewModelDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderStreamProfileDragBarViewDelegate>
{
    int _commentScene; // +0x68
    id <WCFinderMemberShipIntroduceCollectionListViewControllerDelegate> _previewDelegate; // +0x70
    UITableView * _tableView; // +0x78
    NSArray * _collectionList; // +0x80
    WCFinderCollectionDetailListViewModel * _viewModel; // +0x88
    WCFinderRefreshTableFooterView * _footerView; // +0x90
    MMUIButton * _emptyTipsRetryButton; // +0x98
    UILabel * _titleLabel; // +0xa0
    WCFinderMaskButton * _confirmButton; // +0xa8
    unsigned long long _entranceSource; // +0xb0
    WCFinderStreamProfileDragBarView * _dragBarView; // +0xb8
    UIView * _topViewContainer; // +0xc0
}
- (id)initWithViewModel:(id)arg1 entranceSource:(unsigned long long)arg2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setupSubviews;
- (void)configureTableView;
- (void)bindPageReport;
- (id)emptyTipsRetryButton;
- (id)dragBarView;
- (void)showEmptyTips:(id)arg1 canRetry:(BOOL)arg2;
- (void)hideEmptyTips;
- (void)retryButtonClicked:(id)arg1;
- (double)getMaxHalfScreenHeight;
- (void)onClickConfirm;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)_setupReportWithCell:(id)arg1 collection:(id)arg2 indexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)finderCollectionDetailListDataChangedWithContinueFlag:(BOOL)arg1;
- (void)finderCollectionDetailListRequestFailed;
- (void)finderCollectionDetailListStartLoading;
- (void)finderCollectionDetailListEndLoading;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)dragBarViewWillBegin:(id)arg1;
- (void)dragBarViewDidEnd:(id)arg1 slideToClose:(BOOL)arg2;
- (double)dragBarViewExpandMinHeight:(id)arg1;
- (double)dragBarViewExpandMaxHeight:(id)arg1;
- (id)previewDelegate;
- (void)setPreviewDelegate:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)collectionList;
- (void)setCollectionList:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (void)setEmptyTipsRetryButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (unsigned long long)entranceSource;
- (void)setEntranceSource:(unsigned long long)arg1;
- (void)setDragBarView:(id)arg1;
- (id)topViewContainer;
- (void)setTopViewContainer:(id)arg1;
- (void).cxx_destruct;
@end

