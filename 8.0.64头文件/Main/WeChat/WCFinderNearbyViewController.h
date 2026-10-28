@interface WCFinderNearbyViewController : MMUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCFinderStreamFooterViewActionDelegate, WCFinderNearbyViewModelDelegate, WCFinderStreamHeaderViewDelegate, WCFinderStreamLayoutDelegate, WCFinderNearbyFlowViewControllerDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderNearbyLocationCellDelegate, WCFinderFeedStaticCoverCollectionViewCellDelegate, WCGeneralMonitorDelegate, WCFinderFriendLiveSectionTableViewCellDelegate, WCFinderFeedFlowLiveCellDelegate, WCFinderNearbyRelatedViewControllerDelegate>
{
    BOOL _isSelected; // +0x70
    BOOL _hasAppear; // +0x71
    BOOL _hasReportCreateEvent; // +0x72
    id <WCFinderNearbyViewControllerDelegate> _delegate; // +0x78
    UICollectionView * _collectionView; // +0x80
    WCFinderStreamFooterView * _refreshFooterView; // +0x88
    WCFinderStreamHeaderView * _refreshHeaderView; // +0x90
    WCFinderStreamLayout * _streamLayout; // +0x98
    WCFinderNearbyViewModel * _viewModel; // +0xa0
    unsigned long long _footerRefreshState; // +0xa8
    unsigned long long _headerRefreshState; // +0xb0
    NSMutableDictionary * _exposeTimeDict; // +0xb8
    NSTimer * _systemSettingTimer; // +0xc0
    UILabel * _stateTipsLabel; // +0xc8
    UITapGestureRecognizer * _stateRetryGesture; // +0xd0
    UIImageView * _retryImageView; // +0xd8
    WCFinderStreamLiveCollectionViewCell * _livingCell; // +0xe0
    unsigned long long _enterTime; // +0xe8
    WCFinderExtStatsReporter * _extStatsReporter; // +0xf0
}
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)dealloc;
- (void)willDisappear;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (BOOL)shouldInteractivePop;
- (void)updateViewDidAppear;
- (void)tabViewControllerAutoRefreshTrigerByRedDot;
- (id)exposeTimeDict;
- (void)exposeItemViewDisappear;
- (void)exposeItemViewAppear;
- (void)exposeMarkRead:(id)arg1 duration:(unsigned long long)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)updateViewWillDisappear;
- (void)clearStateTipsView;
- (void)forceUpdateData;
- (void)setupLayoutAndCollectionView;
- (id)retryImageView;
- (id)stateTipsLabel;
- (id)stateRetryGesture;
- (void)stateRetryGestureAction:(id)arg1;
- (void)onDataEmptyState:(BOOL)arg1;
- (void)addObserverForForegroundNotification;
- (void)removeObserverForForegroundNotification;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)exposeLiveSectionWithContentVM:(id)arg1 endExpose:(BOOL)arg2;
- (void)pourStateIntoPool:(id)arg1;
- (void)autoPlayLiveCell;
- (void)onFeedFlowViewEnterForeground;
- (void)onFeedFlowViewEnterBackground;
- (void)preloadVideoFirstFrame;
- (unsigned long long)collectionView:(id)arg1 layout:(id)arg2 columnCountAtSection:(unsigned long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 cellSpaceAtSection:(unsigned long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 cellEdgeInsetAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 cellHeightAtIndexPath:(id)arg3 withWidth:(double)arg4;
- (double)collectionView:(id)arg1 layout:(id)arg2 headerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 footerHeightAtSection:(unsigned long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 headerEdgeInsetAtSection:(unsigned long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id /* block */)iconGeneratorWithName:(id)arg1;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)reloadDataWrap;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)refreshHeadOnScrolltoTop;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (BOOL)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)fetchNextPage;
- (void)streamRefreshHeaderDidTriggerRefresh:(id)arg1;
- (BOOL)streamRefreshHeaderDataSourceIsLoading:(id)arg1;
- (void)onClickCoverContact:(id)arg1 dataItem:(id)arg2;
- (void)onClickPrivateMsgAction:(id)arg1;
- (void)onTriggerUnLikeAction:(id)arg1;
- (void)onNearbyFlowViewIndexChanged:(long long)arg1;
- (void)refreshHeaderBackAnimationWithCompletion:(id /* block */)arg1 delay:(double)arg2;
- (void)nearByLocationServiceAuthorizationChanged:(BOOL)arg1;
- (void)nearByDataSourceLocalEmpty;
- (void)nearByDataPullLoadingFinish:(unsigned long long)arg1;
- (void)nearByDataSourceFetchError:(unsigned long long)arg1;
- (void)nearBySourceNoMoreData:(unsigned long long)arg1;
- (void)nearByLocalDataFetchScuccess;
- (void)nearByDataSourceChanged;
- (void)nearByNextPageAppendData:(id)arg1;
- (void)resetRefreshStateNormal;
- (void)resetRefreshOffset;
- (void)resetCollectionVewInset;
- (void)nearByLiveDataChanged;
- (void)nearByLiveDataRefreshData;
- (void)nearByLiveDataNoMore;
- (void)nearByLiveDataFetchFinish:(BOOL)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)jumpToSettingDidClick:(id)arg1;
- (void)reportFeedStreamClickWithCollectionView:(id)arg1 selectedIndexPath:(id)arg2;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)onDidSelectLiveAtIndex:(id)arg1 inLives:(id)arg2;
- (void)onDidExposeLiveAtIndex:(id)arg1 inLives:(id)arg2;
- (void)finderLiveSectionTableViewCellFetchMoreLiveList:(id)arg1;
- (void)finderLiveSectionTableViewCell:(id)arg1 didExposeLiveContentVM:(id)arg2;
- (void)finderLiveSectionTableViewCell:(id)arg1 endExposeLiveContentVM:(id)arg2;
- (void)onNearbyRelatedTriggerUnLikeAction:(id)arg1;
- (void)registerYReportSdk;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)refreshFooterView;
- (void)setRefreshFooterView:(id)arg1;
- (id)refreshHeaderView;
- (void)setRefreshHeaderView:(id)arg1;
- (id)streamLayout;
- (void)setStreamLayout:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (unsigned long long)footerRefreshState;
- (void)setFooterRefreshState:(unsigned long long)arg1;
- (unsigned long long)headerRefreshState;
- (void)setHeaderRefreshState:(unsigned long long)arg1;
- (BOOL)hasAppear;
- (void)setHasAppear:(BOOL)arg1;
- (BOOL)hasReportCreateEvent;
- (void)setHasReportCreateEvent:(BOOL)arg1;
- (void)setExposeTimeDict:(id)arg1;
- (id)systemSettingTimer;
- (void)setSystemSettingTimer:(id)arg1;
- (void)setStateTipsLabel:(id)arg1;
- (void)setStateRetryGesture:(id)arg1;
- (void)setRetryImageView:(id)arg1;
- (id)livingCell;
- (void)setLivingCell:(id)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (id)extStatsReporter;
- (void)setExtStatsReporter:(id)arg1;
- (void).cxx_destruct;
@end
