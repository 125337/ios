@interface WCListViewController : MMUIViewController <WCListViewDelegate, MMCommonActionSheetPickerDelegate, WCMomentsConfigurationExt, WCActionSheetDelegate, UINavigationControllerDelegate, WCFacadeExt, WCCommitViewAnimationDelegate>
{
    BOOL m_isMyWC; // +0x70
    NSMutableArray * m_arrPhotoDatas; // +0x78
    CContact * m_contact; // +0x80
    BOOL m_isNoMoreData; // +0x88
    NSMutableArray * m_starredDataItems; // +0x90
    id <WCListViewProtocol> m_view; // +0x98
    unsigned int _startTime; // +0xa0
    BOOL _bHideBackgroundCover; // +0xa4
    BOOL _expandsCoverAfterFirstAppeared; // +0xa5
    BOOL _bForbiddenNavgationBarInteractive; // +0xa6
    BOOL _noMoreDataAtTop; // +0xa7
    BOOL _noMoreDataAtBottom; // +0xa8
    BOOL _jumpState; // +0xa9
    BOOL _isStarBrowsingEnabled; // +0xaa
    BOOL _isListSizeTransitionInProgress; // +0xab
    BOOL _isListScreenConnectionLayoutInProgress; // +0xac
    BOOL _isListContainerLayoutTransitionActive; // +0xad
    BOOL _didReloadListForContainerLayoutTransition; // +0xae
    BOOL _usesListConnectedScreenContainerSize; // +0xaf
    unsigned int _sourceScene; // +0xb0
    unsigned int _albumEntranceThumbnailCnt; // +0xb4
    long long _homepageType; // +0xb8
    WCMomentsPageContext * _pageContext; // +0xc0
    long long _rightBarItemStyle; // +0xc8
    UIColor * _leftBarItemColor; // +0xd0
    NSString * _snsChannel; // +0xd8
    WCCoverActionReporter * _coverActionReporter; // +0xe0
    UIBarButtonItem * _togetherBarButtonItem; // +0xe8
    UIBarButtonItem * _searchBarButtonItem; // +0xf0
    UIBarButtonItem * _albumV2BarButtonItem; // +0xf8
    UIBarButtonItem * _messageBarButtonItem; // +0x100
    MMCommonActionSheetPicker * _yearMonthPickerView; // +0x108
    NSArray * _yearsData; // +0x110
    NSArray * _monthsDatas; // +0x118
    WCTimeLineFooterView * _yearMonthJumpingView; // +0x120
    UIButton * _yearMonthJumpRetryView; // +0x128
    unsigned long long _itemIdForYearMonthJump; // +0x130
    WCTogetherHistoryReportSession * _cachedTogetherHistoryReportSession; // +0x138
    long long _puzzleImageViewLayoutStyle; // +0x140
    unsigned long long _listScreenConnectionGeneration; // +0x148
    double _listLastReloadedLayoutWidth; // +0x150
    CGSize _listContainerLayoutTargetSize; // +0x158
    CGSize _listLastCommittedRootSize; // +0x168
    CGSize _listConnectedScreenContainerSize; // +0x178
}
- (long long)preferredStatusBarStyle;
- (void)setStatusBarStyle:(long long)arg1;
- (id)init;
- (id)initWithHomepageType:(long long)arg1;
- (void)viewDidLoad;
- (id)rightTitleLabelWithTitle:(id)arg1;
- (id)displayTitle;
- (id)contactDisplayname;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)listCanReloadForCurrentWindow;
- (BOOL)hasValidListContainerSize:(CGSize)arg1;
- (id)listView;
- (void)installListView:(id)arg1;
- (BOOL)supportsLandscapeForListContainerSize:(CGSize)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)listContainerSize:(CGSize)arg1 isEqualToSize:(CGSize)arg2;
- (BOOL)listContainerWidth:(double)arg1 matchesConnectedScreenRect:(CGRect)arg2;
- (CGSize)settledListContainerSizeForConnectedScreenRect:(CGRect)arg1;
- (BOOL)isListContainerSizeChangeInProgress;
- (void)beginListContainerLayoutTransitionToSize:(CGSize)arg1;
- (void)updateListContainerLayoutTransitionState;
- (void)updateNavigationBarInteractionForContainerSize:(CGSize)arg1;
- (void)updateListContainerLayout;
- (BOOL)reloadListForCurrentContentWidthIfNeeded;
- (void)applyListContainerLayout;
- (void)finishListContainerLayoutForSize:(CGSize)arg1;
- (void)viewDidLayoutSubviews;
- (void)scheduleListConnectedScreenContainerRefresh:(id)arg1 generation:(unsigned long long)arg2 remainingAttempts:(unsigned long long)arg3;
- (void)applyListConnectedScreen:(id)arg1 rect:(CGRect)arg2 remainingAttempts:(unsigned long long)arg3 generation:(unsigned long long)arg4;
- (void)listScreenDidConnect:(id)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidTransitionToNewSize;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)commitRightBarButtonItems:(id)arg1;
- (void)initBarItem;
- (void)updateSearchBarButtonItem;
- (void)momentsConfigurationDidUpdate:(id)arg1;
- (void)addTogetherBarButtonItemIfNeeded;
- (id)generateTogetherBarButtonItemIfNeeded;
- (void)reloadStyle;
- (void)setM_contact:(id)arg1;
- (void)onScrollViewContentOffsetChanged:(CGPoint)arg1;
- (void)onOperate:(id)arg1;
- (void)onMessageIconV2:(id)arg1;
- (void)onSearch:(id)arg1;
- (void)onAlbumV2:(id)arg1;
- (void)onDissmiss;
- (void)onTogetherBarButtonItemClicked:(id)arg1;
- (void)initData:(BOOL)arg1;
- (void)reloadData;
- (void)reloadDataWithPrePageUpdate:(BOOL)arg1;
- (void)updateJumpState;
- (void)refreshFooter;
- (BOOL)refreshPrePage;
- (void)clearJumpState;
- (void)showYearMonthJumpingView;
- (void)hideYearMonthJumpingView;
- (void)showYearMonthJumpRetryView;
- (void)onRetryJump;
- (void)hideYearMonthJumpRetryView;
- (double)aspectRatioForContainerSize:(CGSize)arg1;
- (void)willShow;
- (void)onHomepage:(id)arg1 type:(long long)arg2 updateYearMonthData:(id)arg3;
- (void)onHomepage:(id)arg1 type:(long long)arg2 updateWithResult:(long long)arg3 withAddedData:(id)arg4 changedData:(id)arg5 deletedData:(id)arg6 tips:(id)arg7;
- (void)onHomepage:(id)arg1 type:(long long)arg2 fetchDataBeforeJumpEnd:(id)arg3 success:(BOOL)arg4;
- (void)onHomepage:(id)arg1 type:(long long)arg2 updatePrePage:(id)arg3;
- (void)onHomepage:(id)arg1 type:(long long)arg2 clearJumpState:(id)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)WCListViewDidClickYearMonthFlowLabel:(id)arg1 month:(id)arg2;
- (void)animationDidEndRemainView:(id)arg1 hintDataItem:(id)arg2;
- (void)commitAnimationWillStart:(id)arg1;
- (void)onFinishSendWithoutAnim:(id)arg1;
- (void)commonPickerDismissed:(id)arg1;
- (void)commonPickerConfirm:(id)arg1;
- (void)onPickerViewDidSelectRow:(long long)arg1 inComponent:(long long)arg2 PickItem:(id)arg3;
- (void)updateYearMonthPicker:(id)arg1 month:(id)arg2;
- (void)tryCalcYearMonthPickerViewData;
- (void)calcYearMonthPickerViewData;
- (void)reportOnBeign;
- (void)reportOnEnd;
- (void)reportSnsUserPageIn;
- (void)reportSnsUserPageOut;
- (id)buildSnsUserCommonParams;
- (void)reportOnViewApper;
- (void)reportOnViewDisappear;
- (id)behaviourInfoSession;
- (BOOL)isNoMoreData;
- (void)updateBehaviourInfoSessionForTogetherEntranceState;
- (void)updateBehaviourInfoSessionFromTogetherHistoryReportSession;
- (id)coverActionReporter;
- (id)m_contact;
- (long long)homepageType;
- (id)pageContext;
- (BOOL)bHideBackgroundCover;
- (void)setBHideBackgroundCover:(BOOL)arg1;
- (BOOL)expandsCoverAfterFirstAppeared;
- (void)setExpandsCoverAfterFirstAppeared:(BOOL)arg1;
- (BOOL)bForbiddenNavgationBarInteractive;
- (void)setBForbiddenNavgationBarInteractive:(BOOL)arg1;
- (long long)rightBarItemStyle;
- (void)setRightBarItemStyle:(long long)arg1;
- (id)leftBarItemColor;
- (void)setLeftBarItemColor:(id)arg1;
- (unsigned int)sourceScene;
- (void)setSourceScene:(unsigned int)arg1;
- (unsigned int)albumEntranceThumbnailCnt;
- (void)setAlbumEntranceThumbnailCnt:(unsigned int)arg1;
- (id)snsChannel;
- (void)setSnsChannel:(id)arg1;
- (void)setCoverActionReporter:(id)arg1;
- (id)togetherBarButtonItem;
- (void)setTogetherBarButtonItem:(id)arg1;
- (id)searchBarButtonItem;
- (void)setSearchBarButtonItem:(id)arg1;
- (id)albumV2BarButtonItem;
- (void)setAlbumV2BarButtonItem:(id)arg1;
- (id)messageBarButtonItem;
- (void)setMessageBarButtonItem:(id)arg1;
- (id)yearMonthPickerView;
- (void)setYearMonthPickerView:(id)arg1;
- (id)yearsData;
- (void)setYearsData:(id)arg1;
- (id)monthsDatas;
- (void)setMonthsDatas:(id)arg1;
- (BOOL)isNoMoreDataAtTop;
- (void)setNoMoreDataAtTop:(BOOL)arg1;
- (BOOL)isNoMoreDataAtBottom;
- (void)setNoMoreDataAtBottom:(BOOL)arg1;
- (BOOL)jumpState;
- (void)setJumpState:(BOOL)arg1;
- (id)yearMonthJumpingView;
- (void)setYearMonthJumpingView:(id)arg1;
- (id)yearMonthJumpRetryView;
- (void)setYearMonthJumpRetryView:(id)arg1;
- (unsigned long long)itemIdForYearMonthJump;
- (void)setItemIdForYearMonthJump:(unsigned long long)arg1;
- (id)cachedTogetherHistoryReportSession;
- (void)setCachedTogetherHistoryReportSession:(id)arg1;
- (BOOL)isStarBrowsingEnabled;
- (void)setIsStarBrowsingEnabled:(BOOL)arg1;
- (long long)puzzleImageViewLayoutStyle;
- (void)setPuzzleImageViewLayoutStyle:(long long)arg1;
- (BOOL)isListSizeTransitionInProgress;
- (void)setIsListSizeTransitionInProgress:(BOOL)arg1;
- (BOOL)isListScreenConnectionLayoutInProgress;
- (void)setIsListScreenConnectionLayoutInProgress:(BOOL)arg1;
- (unsigned long long)listScreenConnectionGeneration;
- (void)setListScreenConnectionGeneration:(unsigned long long)arg1;
- (BOOL)isListContainerLayoutTransitionActive;
- (void)setIsListContainerLayoutTransitionActive:(BOOL)arg1;
- (BOOL)didReloadListForContainerLayoutTransition;
- (void)setDidReloadListForContainerLayoutTransition:(BOOL)arg1;
- (CGSize)listContainerLayoutTargetSize;
- (void)setListContainerLayoutTargetSize:(CGSize)arg1;
- (CGSize)listLastCommittedRootSize;
- (void)setListLastCommittedRootSize:(CGSize)arg1;
- (BOOL)usesListConnectedScreenContainerSize;
- (void)setUsesListConnectedScreenContainerSize:(BOOL)arg1;
- (CGSize)listConnectedScreenContainerSize;
- (void)setListConnectedScreenContainerSize:(CGSize)arg1;
- (double)listLastReloadedLayoutWidth;
- (void)setListLastReloadedLayoutWidth:(double)arg1;
- (void).cxx_destruct;
@end
