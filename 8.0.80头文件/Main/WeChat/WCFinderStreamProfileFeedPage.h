@interface WCFinderStreamProfileFeedPage : WCFinderStreamProfileViewPage <UICollectionViewDelegate, UICollectionViewDataSource, WCGeneralMonitorDelegate, WCFinderStreamLayoutDelegate, WCFinderProfileFeedPageHeaderContainerViewDelegate, WCFinderStreamProfileFeedViewModelDelegate, WCFinderProfileFeedFetchFirstJustWatchDelegate, WCFinderStreamFooterViewActionDelegate, WCFinderStreamLoadingStateDelegate, ILinkEventExt, WCFinderJustWatchEvent>
{
    BOOL _collectionListButtonAnimationPlayed; // +0x8
    BOOL _doJustwatchSpliceAnimation; // +0x9
    NSMutableDictionary * _exposedTimeMap; // +0x10
    WCFinderProfileTagFeedViewModel * _topicFeedVM; // +0x18
    WCFinderFeedArray * _displayFeedArray; // +0x20
    WCFinderStreamFooterView * _footerView; // +0x28
    NSMutableSet * _exposedTopicIds; // +0x30
    RichTextView * _stateTipsLabel; // +0x38
    WCFinderAnimationLoadingView * _loadingView; // +0x40
    WCFinderProfileFeedPageHeaderContainerView * _headerContainer; // +0x48
    WCFinderProfileCollectionListLayout * _collectionListLayout; // +0x50
    WCFinderExtStatsReporter * _extStatReporter; // +0x58
    UICollectionViewDiffableDataSource * _datasource; // +0x60
    WCFinderFeedStaticCoverCollectionViewCell * _checkJustWatchCell; // +0x68
    double _lastCellHeight; // +0x70
    unsigned long long _justWatchSortIdentifier; // +0x78
}
- (void)dealloc;
- (id)init;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (id)stateTipsLabel;
- (id)loadView;
- (id)layout;
- (void)registerStreamCellForCollection:(id)arg1;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (void)onPageSizeDidChanged;
- (void)updateTagContainerInsets;
- (id)extStatReporter;
- (void)setViewModel:(id)arg1;
- (void)preloadVideoFirstFrame;
- (id)getSortedExposingFeeds;
- (void)onTopicListChangedForViewModel:(id)arg1;
- (id)headerLoadingText;
- (id)displayedTagLayout;
- (id)displayedCollectionLayout;
- (void)onFeedSortSwitchStateChangedForViewModel:(id)arg1;
- (void)onFeedSortSwitchFinishedForViewModel:(id)arg1 success:(BOOL)arg2;
- (void)onCollectionListDataChangedForViewModel:(id)arg1;
- (void)setHeaderViewNeedUpdate;
- (void)_doUpdateHeader;
- (void)onShowTopPostTimeFrom:(id)arg1 changeToTid:(id)arg2;
- (void)setTopicFeedVM:(id)arg1;
- (BOOL)isDisplayingDefaultFeed;
- (void)setDisplayFeedArray:(id)arg1;
- (void)setDisplayFeedArray:(id)arg1 animated:(BOOL)arg2;
- (void)onFeedArrayChange:(id)arg1 change:(id)arg2;
- (void)triggerLoadMoreWhenFeedChange;
- (id)snapshotForFeedArray:(id)arg1;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)didSelectShortFeedItemAtIndexPath:(id)arg1 collectionView:(id)arg2;
- (long long)calcauteMaxVisibleIndex;
- (void)reportFeedStreamClickSelectedIndexPath:(id)arg1;
- (BOOL)showJustWatchWithContentVM:(id)arg1;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)monitorView:(id)arg1 unExposedItems:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)_cellConfigForContentVM:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)onLoadingStateChanged:(id)arg1;
- (void)updateTopRefreshState;
- (void)updateFooterViewState;
- (void)updateStateLabelPosition;
- (BOOL)canShowPostFromSnsEntry;
- (BOOL)isSelfProfile;
- (void)updateEmptyLoadingView:(BOOL)arg1;
- (void)tapRetry;
- (unsigned long long)streamFeedColumnCount;
- (unsigned long long)collectionView:(id)arg1 layout:(id)arg2 columnCountAtSection:(unsigned long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 cellSpaceAtSection:(unsigned long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 cellEdgeInsetAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 cellHeightAtIndexPath:(id)arg3 withWidth:(double)arg4;
- (double)collectionView:(id)arg1 layout:(id)arg2 headerHeightAtSection:(unsigned long long)arg3;
- (double)tagListHeight;
- (double)collectionView:(id)arg1 layout:(id)arg2 footerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 decorationHeightAtSection:(unsigned long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 decorationEdgeInsetAtSection:(unsigned long long)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)exposeItemViewDisappear;
- (void)headerContainerView:(id)arg1 selectedTopic:(id)arg2;
- (void)headerContainerViewContentHeightChanged:(id)arg1;
- (void)headerContainerExpandChangedChanged:(id)arg1 isExpand:(BOOL)arg2;
- (void)headerContainerClickedCollectionNextEpisodeButton:(id)arg1;
- (void)headerContainerClickedCollectionAllEpisodeButton:(id)arg1;
- (void)headerContainer:(id)arg1 clickedCollectionItemWithInfo:(id)arg2;
- (void)headerContainerClickedCollectionMoreButton:(id)arg1;
- (void)tryShowCollectionHeaderShortcutButton;
- (void)setupCollectionReportWithNextEpisodeBtn:(id)arg1 allEpisodeBtn:(id)arg2 moreBtn:(id)arg3;
- (void)setupCollectionReportWithCollectionItemButtons:(id)arg1;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (void)reportPageScrollDown;
- (void)didClickStreamFooterPostFromSnsAction:(id)arg1;
- (void)exposeTopicInfos;
- (void)unExposeTopicInfos;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)showPostFromSnsAlbum;
- (id)browserFeedIndexPathForTid:(id)arg1;
- (CGRect)liveMorphDismissRectWithCustomKey:(id)arg1;
- (void)onJustWatchControllerRequiredDisplay:(id /* block */)arg1;
- (void)reloadJustWatchFeed;
- (void)onJustWatchControllerRequiredJumpToFeed:(id)arg1;
- (void)onEnsurePullableJustWatchDataCouldDirectScrollToFeed;
- (void)onEnsurePullableJustWatchDataNeedReplaceFeedArray:(id)arg1;
- (void)setupPullableTopRefreshView;
- (void)scrollToJustWatchFeed:(long long)arg1;
- (void)checkJustWatchCellForCellDisplay:(id)arg1;
- (void)checkJustWatchCellForScroll;
- (void)onJustWatchControllerCleanJustWatch;
- (id)findVisiableJustWatchItem:(id)arg1 firstVisiableIdx:(long long *)arg2;
- (id)exposedTimeMap;
- (void)setExposedTimeMap:(id)arg1;
- (id)topicFeedVM;
- (id)displayFeedArray;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)exposedTopicIds;
- (void)setExposedTopicIds:(id)arg1;
- (void)setStateTipsLabel:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)headerContainer;
- (void)setHeaderContainer:(id)arg1;
- (id)collectionListLayout;
- (void)setCollectionListLayout:(id)arg1;
- (BOOL)collectionListButtonAnimationPlayed;
- (void)setCollectionListButtonAnimationPlayed:(BOOL)arg1;
- (void)setExtStatReporter:(id)arg1;
- (id)datasource;
- (void)setDatasource:(id)arg1;
- (id)checkJustWatchCell;
- (void)setCheckJustWatchCell:(id)arg1;
- (double)lastCellHeight;
- (void)setLastCellHeight:(double)arg1;
- (BOOL)doJustwatchSpliceAnimation;
- (void)setDoJustwatchSpliceAnimation:(BOOL)arg1;
- (unsigned long long)justWatchSortIdentifier;
- (void)setJustWatchSortIdentifier:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
