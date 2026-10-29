@interface MMBGMChooseFinderFeedListView : MMUIView <MMBGMSelectedSearchResultViewProtocol, UITableViewDelegate, UITableViewDataSource, MMBGMSelectedRecFinderFeedTabViewModelDelegate, MMBGMChooseFinderFeedListViewTableViewCellDelegate, WCFinderRefreshTableFooterViewDelegate>
{
    MMBGMPanelPublishContext * _publishContext; // +0x8
    id <MMBGMChooseFinderFeedListViewDelegate> _delegate; // +0x10
    unsigned long long _listEntryScene; // +0x18
    UITableView * _tableView; // +0x20
    WCFinderRefreshTableFooterView * _footerView; // +0x28
    WCFinderAnimationLoadingView * _loadingView; // +0x30
    MMBGMSelectedRecFinderFeedTabViewModel * _viewModel; // +0x38
    MMBGMChooseFinderFeedListViewTableViewCell * _currentFocusCell; // +0x40
    long long _currentFocusIndex; // +0x48
    NSString * _currentSelectedTid; // +0x50
    UITableViewDiffableDataSource * _diffDataSource; // +0x58
    NSString * _currentDownloadingBgmTid; // +0x60
}
- (void)reset;
- (void)reload;
- (void)resetCurrentIndex;
- (long long)currentIndex;
- (void)setPublishContext:(id)arg1;
- (BOOL)startSearchMusicWithKey:(id)arg1;
- (id)currentSelectedmusicData;
- (id)musicDataAtIndex:(unsigned long long)arg1;
- (void)startFooterViewLoading;
- (void)stopFooterViewLoading;
- (void)unSelectedAllItem;
- (id)initWithFrame:(CGRect)arg1 viewModel:(id)arg2;
- (void)setFeedListViewAppear;
- (void)setFeedListViewDisAppear;
- (void)fetchFirstPageData;
- (void)searchFirstPageDataWithText:(id)arg1;
- (void)fetchData;
- (void)setAllCellUnSelected;
- (void)autoStopSelectedCellPlayingState;
- (void)setup;
- (void)dealloc;
- (void)setupViews;
- (void)setupNotifications;
- (void)updateFocusCellAndAutoPlay;
- (void)preloadVideoItemIfNeeded;
- (BOOL)startPlayCurrentFocusCellIfNeeded;
- (BOOL)stopPlayCurrentFocusCellIfNeeded;
- (BOOL)isShowingInView;
- (void)applyDiffSnapshot;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)onBGMFinderCellClickSelectedButtonWithContentVM:(id)arg1;
- (void)onBGMFinderCellClickEditButtonWithContentVM:(id)arg1;
- (void)onBGMFinderCellStartDownloadBgm:(id)arg1 contentVM:(id)arg2;
- (void)onBGMFinderCellStopDownloadBgm:(id)arg1 contentVM:(id)arg2;
- (id)bgmFinderCellCheckCurrentDownloadingBgmId;
- (double)getCellH;
- (void)onBGMRecFinderTabVMDataChange;
- (void)onBGMRecFinderTabVMDataReset;
- (void)_reset;
- (unsigned long long)recFinderFeedTabVMGetMaterialDuration:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)arg1;
- (id)publishContext;
- (void)setPublishContext:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)listEntryScene;
- (void)setListEntryScene:(unsigned long long)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)currentFocusCell;
- (void)setCurrentFocusCell:(id)arg1;
- (long long)currentFocusIndex;
- (void)setCurrentFocusIndex:(long long)arg1;
- (id)currentSelectedTid;
- (void)setCurrentSelectedTid:(id)arg1;
- (id)diffDataSource;
- (void)setDiffDataSource:(id)arg1;
- (id)currentDownloadingBgmTid;
- (void)setCurrentDownloadingBgmTid:(id)arg1;
- (void).cxx_destruct;
@end
