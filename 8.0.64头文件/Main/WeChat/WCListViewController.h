@interface WCListViewController : MMUIViewController <WCListViewDelegate, MMCommonActionSheetPickerDelegate, WCActionSheetDelegate, UINavigationControllerDelegate, WCFacadeExt, WCCommitViewAnimationDelegate>
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
    unsigned int _sourceScene; // +0xac
    unsigned int _albumEntranceThumbnailCnt; // +0xb0
    long long _homepageType; // +0xb8
    WCMomentsPageContext * _pageContext; // +0xc0
    long long _rightBarItemStyle; // +0xc8
    UIColor * _leftBarItemColor; // +0xd0
    WCCoverActionReporter * _coverActionReporter; // +0xd8
    UIBarButtonItem * _togetherBarButtonItem; // +0xe0
    MMCommonActionSheetPicker * _yearMonthPickerView; // +0xe8
    NSArray * _yearsData; // +0xf0
    NSArray * _monthsDatas; // +0xf8
    WCTimeLineFooterView * _yearMonthJumpingView; // +0x100
    UIButton * _yearMonthJumpRetryView; // +0x108
    unsigned long long _itemIdForYearMonthJump; // +0x110
    WCTogetherHistoryReportSession * _cachedTogetherHistoryReportSession; // +0x118
    long long _puzzleImageViewLayoutStyle; // +0x120
}
- (id)init;
- (id)initWithHomepageType:(long long)arg1;
- (void)viewDidLoad;
- (id)rightTitleLabelWithTitle:(id)arg1;
- (id)displayTitle;
- (id)contactDisplayname;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)initBarItem;
- (void)addTogetherBarButtonItemIfNeeded;
- (id)generateTogetherBarButtonItemIfNeeded;
- (void)reloadStyle;
- (void)setM_contact:(id)arg1;
- (void)onOperate:(id)arg1;
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
- (void)setCoverActionReporter:(id)arg1;
- (id)togetherBarButtonItem;
- (void)setTogetherBarButtonItem:(id)arg1;
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
- (void).cxx_destruct;
@end
