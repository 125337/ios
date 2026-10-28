@interface WCFinderTopicListViewController : MMUIViewController <WCFinderTopicListViewModelDelegate, WCFinderStreamLayoutDelegate, UICollectionViewDelegate, UICollectionViewDataSource, WCFinderFeedStaticCoverCollectionViewCellDelegate, WCFinderStreamFooterViewActionDelegate, WCFinderTopicListSectionHeaderViewDelegate, MMScrollActionSheetDelegate, WCFinderTagHeaderCollectionReusableViewDelegate, WCActionSheetDelegate, MMSightCameraViewControllerDelegate, WCFinderCameraViewControllerDelegate, WCFinderPostViewControllerDelegate, WCGeneralMonitorDelegate, WCFinderVideoDownLoadMgrExt, MMWebImageViewDelegate, WCFinderCreateCoordinatorDelegate, CAAnimationDelegate, WCFinderPostMgrDelegate, WCFinderPatCollectionReusableViewDelegate, WCFinderFeedFlowLiveCellDelegate, WCFinderShareCustomTransitionProtocol, WCFinderFeedBaseViewControllerProtocol>
{
    BOOL _showTotalTags; // +0x70
    BOOL _enablePostFeed; // +0x71
    BOOL _showHighlightTopicStyle; // +0x72
    int _topicType; // +0x74
    int _tabType; // +0x78
    int _fromType; // +0x7c
    int _fromScene; // +0x80
    WCFinderTopicListViewModel * _viewModel; // +0x88
    UICollectionView * _collectionView; // +0x90
    WCFinderStreamLayout * _streamLayout; // +0x98
    WCFinderStreamFooterView * _refreshFooterView; // +0xa0
    WCFinderAnimationLoadingView * _loadingView; // +0xa8
    UIImageView * _errImageView; // +0xb0
    UILabel * _stateTipsLabel; // +0xb8
    UITapGestureRecognizer * _stateRetryGesture; // +0xc0
    UIImageView * _retryImageView; // +0xc8
    NSString * _topicTitle; // +0xd0
    FinderLocation * _topicLocation; // +0xd8
    NSString * _latitude; // +0xe0
    NSString * _longitude; // +0xe8
    NSString * _navigationBarTilte; // +0xf0
    NSString * _refObjectid; // +0xf8
    unsigned long long _footerRefreshState; // +0x100
    long long _categorySelectedIndex; // +0x108
    double _topicListSectionHeaderViewHeight; // +0x110
    double _topicListTagHeaderViewHeight; // +0x118
    FinderGetTopicListResponse * _cacheResponse; // +0x120
    NSArray * _cacheDataItems; // +0x128
    WCFinderSectionInfo * _sectionInfo; // +0x130
    NSString * _traceId; // +0x138
    WCFinderTagHeaderCollectionReusableView * _tagHeaderView; // +0x140
    unsigned long long _exportMark; // +0x148
    NSMutableArray * _selectedArray; // +0x150
    NSMutableDictionary * _exposeTimeDict; // +0x158
    RecommendedMusicInfo * _musicInfo; // +0x160
    UICollectionReusableView * _headerView; // +0x168
    WCFinderCreateCoordinator * _createCoordinator; // +0x170
    NSString * _refUsername; // +0x178
    unsigned long long _enterTime; // +0x180
    UIBarButtonItem * _moreRightButtonItem; // +0x188
    UIBarButtonItem * _postRightButtonItem; // +0x190
    NSString * _encryptedTopicId; // +0x198
    WCFinderPostMgr * _postMgr; // +0x1a0
    NSData * _byPassInfo; // +0x1a8
}
- (id)initWithParams:(id)arg1;
- (void)viewDidLoad;
- (id)navigationTitleColor;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (BOOL)shouldInteractivePop;
- (id)postMgr;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)onFeedFlowViewEnterForeground;
- (void)onFeedFlowViewEnterBackground;
- (void)resumeMusicPlay;
- (void)stopMusicPlay;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)willDisappear;
- (void)setupNavigationBarTitle;
- (void)onFinderSearchResultUpdatePatNavTitle;
- (void)setupLayoutAndCollectionView;
- (double)contentDisplayWidth;
- (id)loadingView;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (void)exposeItemViewDisappear;
- (unsigned long long)getReportMusicType;
- (void)exposeItemViewAppear;
- (id)exposeTimeDict;
- (id)gradientViewWithFrame:(CGRect)arg1;
- (id)retryImageView;
- (id)errImageView;
- (id)stateTipsLabel;
- (id)stateRetryGesture;
- (id)selectedArray;
- (void)stateRetryGestureAction:(id)arg1;
- (void)autoPlayLiveCell;
- (unsigned long long)collectionView:(id)arg1 layout:(id)arg2 columnCountAtSection:(unsigned long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 cellSpaceAtSection:(unsigned long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 cellEdgeInsetAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 cellHeightAtIndexPath:(id)arg3 withWidth:(double)arg4;
- (double)collectionView:(id)arg1 layout:(id)arg2 footerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 headerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 decorationHeightAtSection:(unsigned long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 decorationEdgeInsetAtSection:(unsigned long long)arg3;
- (BOOL)collectionView:(id)arg1 layout:(id)arg2 pinHeaderToVisibleBoundsAtSection:(unsigned long long)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)genFeedReportInfoWithEventCode:(long long)arg1 tid:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)preloadVideoFirstFrame;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (void)onClickCoverContact:(id)arg1 dataItem:(id)arg2;
- (void)onFinderSearchResultReload;
- (void)onFinderSearchResultEmpty;
- (void)onFinderSearchResultCannotPat;
- (void)onFinderSearchResultChanged;
- (void)checkShouldDownloadFirstVideo;
- (void)adjustLayoutForHeaderImage;
- (void)onFinderSearchResultAppendData:(id)arg1;
- (void)onFinderSearchResultError;
- (void)onFinderSearchResultNoMore;
- (void)onFinderSearchResultNetxPageError;
- (void)onConfirmButtonClicked;
- (void)reloadDataWrap;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (BOOL)patPostButtonIsShow;
- (void)onClickPostVideoAction;
- (BOOL)checkContactSilent;
- (void)onClickBackItem;
- (void)onClickRightItem:(id)arg1;
- (id)getItemArrayConfigWithDataItem:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)reportForwordWith:(id)arg1;
- (id)generTopicShareItemWithTopicTitleWithType:(int)arg1 topicTitle:(id)arg2 topicLocation:(id)arg3 topicCount:(unsigned long long)arg4;
- (void)onTagHeaderClicked:(id)arg1 selectedIndex:(long long)arg2;
- (void)onTagHeaderMoreButtonClicked;
- (int)feedViewControllerScene;
- (int)fromViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)genTopicTitleWithType:(int)arg1 topicTitle:(id)arg2 topicLocation:(id)arg3;
- (void)reportFeedStreamClickWithCollectionView:(id)arg1 selectedIndexPath:(id)arg2;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)onPatMusicViewClickAuthorAction:(id)arg1;
- (void)reportPostRouteExtStatsForActionType:(int)arg1;
- (void)onPatMusicViewClickPostAction;
- (void)triggerShowPostAction;
- (BOOL)onPatMusicViewMeidaIsValid:(BOOL)arg1;
- (BOOL)onPatMusicViewClickPlayView:(BOOL)arg1;
- (void)showPostActionSheetWithPatMusicPath:(id)arg1;
- (BOOL)isFrontCamera;
- (void)finderMediaVideoStreamDownloadSuccessfulWithTid:(id)arg1;
- (void)OnCdnDownloadError:(id)arg1;
- (BOOL)checkBgmInfoState;
- (BOOL)checkLocalMediaToPostAction;
- (void)showToastWithTips:(id)arg1;
- (id)getRefDataItemForExtStatsReport;
- (void)postMgrClickActionSheet;
- (id)postMgrGetRecommendedMusicInfoFromShoot:(BOOL)arg1 postMgr:(id)arg2;
- (BOOL)postMgrForbiddenFinderLongVideoEntry;
- (id)postMgrPatMusicGetGroupId:(id)arg1;
- (void)onClickCoverContact:(id)arg1 contentVM:(id)arg2;
- (void)registerYReportSdk;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)streamLayout;
- (void)setStreamLayout:(id)arg1;
- (id)refreshFooterView;
- (void)setRefreshFooterView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setErrImageView:(id)arg1;
- (void)setStateTipsLabel:(id)arg1;
- (void)setStateRetryGesture:(id)arg1;
- (void)setRetryImageView:(id)arg1;
- (int)topicType;
- (void)setTopicType:(int)arg1;
- (id)topicTitle;
- (void)setTopicTitle:(id)arg1;
- (id)topicLocation;
- (void)setTopicLocation:(id)arg1;
- (id)latitude;
- (void)setLatitude:(id)arg1;
- (id)longitude;
- (void)setLongitude:(id)arg1;
- (id)navigationBarTilte;
- (void)setNavigationBarTilte:(id)arg1;
- (id)refObjectid;
- (void)setRefObjectid:(id)arg1;
- (unsigned long long)footerRefreshState;
- (void)setFooterRefreshState:(unsigned long long)arg1;
- (BOOL)showTotalTags;
- (void)setShowTotalTags:(BOOL)arg1;
- (long long)categorySelectedIndex;
- (void)setCategorySelectedIndex:(long long)arg1;
- (double)topicListSectionHeaderViewHeight;
- (void)setTopicListSectionHeaderViewHeight:(double)arg1;
- (double)topicListTagHeaderViewHeight;
- (void)setTopicListTagHeaderViewHeight:(double)arg1;
- (id)cacheResponse;
- (void)setCacheResponse:(id)arg1;
- (id)cacheDataItems;
- (void)setCacheDataItems:(id)arg1;
- (id)sectionInfo;
- (void)setSectionInfo:(id)arg1;
- (int)tabType;
- (void)setTabType:(int)arg1;
- (int)fromType;
- (void)setFromType:(int)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (id)tagHeaderView;
- (void)setTagHeaderView:(id)arg1;
- (unsigned long long)exportMark;
- (void)setExportMark:(unsigned long long)arg1;
- (void)setSelectedArray:(id)arg1;
- (void)setExposeTimeDict:(id)arg1;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)createCoordinator;
- (void)setCreateCoordinator:(id)arg1;
- (id)refUsername;
- (void)setRefUsername:(id)arg1;
- (int)fromScene;
- (void)setFromScene:(int)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (id)moreRightButtonItem;
- (void)setMoreRightButtonItem:(id)arg1;
- (id)postRightButtonItem;
- (void)setPostRightButtonItem:(id)arg1;
- (BOOL)enablePostFeed;
- (void)setEnablePostFeed:(BOOL)arg1;
- (id)encryptedTopicId;
- (void)setEncryptedTopicId:(id)arg1;
- (void)setPostMgr:(id)arg1;
- (id)byPassInfo;
- (void)setByPassInfo:(id)arg1;
- (BOOL)showHighlightTopicStyle;
- (void)setShowHighlightTopicStyle:(BOOL)arg1;
- (void).cxx_destruct;
@end
