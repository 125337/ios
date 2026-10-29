@interface MMFinderLiveAnchorRealNameLikeListViewController : MMUIHalfScreenViewController <UITableViewDataSource, UITableViewDelegate, MMFinderLiveAnchorRealNameLikeListViewModelDelegate, MMUIHalfScreenViewControllerDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderHalfScreenProtocol, MMFinderLiveRealNameFriendLikeExt, MMPageSheetAdapterDelegate>
{
    BOOL _dynamicHeight; // +0x70
    BOOL _openedFromNotification; // +0x71
    BOOL _showBackgroundMask; // +0x72
    BOOL _didReportShow; // +0x73
    BOOL _didReportClose; // +0x74
    BOOL _listDismissed; // +0x75
    WCFinderLiveAnchorLogReporter * _anchorReporter; // +0x78
    MMFinderLiveAnchorRealNameLikeListViewModel * _viewModel; // +0x80
    MMTableView * _tableView; // +0x88
    WCFinderDynamicRichTextView * _titleIconView; // +0x90
    WCFinderRefreshTableFooterView * _footerView; // +0x98
    double _heightRatio; // +0xa0
    MMFinderLiveTaskId * _taskId; // +0xa8
    MMFinderLiveTask * _liveTask; // +0xb0
    UIButton * _stateButton; // +0xb8
    UIView * _listHeader; // +0xc0
    UIButton * _recommendButton; // +0xc8
    MMHeadImageView * _selfAvatar; // +0xd0
    UILabel * _selfNameLabel; // +0xd8
    UIView * _recommendSeparator; // +0xe0
    NSArray * _displayContacts; // +0xe8
    long long _reportedRecommendState; // +0xf0
    MMPageSheetAdapter * _landscapePageSheetAdapter; // +0xf8
    UIView * _pageSheetTitleView; // +0x100
}
- (id)initWithTaskId:(id)arg1 objectId:(unsigned long long)arg2 totalLikeCount:(unsigned long long)arg3;
- (unsigned long long)kind;
- (id)initWithTaskId:(id)arg1 objectId:(unsigned long long)arg2 totalLikeCount:(unsigned long long)arg3 kind:(unsigned long long)arg4;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)arg1;
- (void)setupSubViews;
- (id)footerView;
- (id)tableView;
- (void)updateTitleWithCount:(unsigned long long)arg1;
- (void)setupHeight;
- (double)getMaxHalfScreenHeight;
- (BOOL)useBlackStatusbar;
- (id)navigationBarBackgroundColor;
- (void)onClickClose;
- (void)dismissListAnimated:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)finishListDismissal;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)anchorRealNameLikeListViewModelDidLoadFirstPage;
- (void)anchorRealNameLikeListViewModelDidLoadNextPage;
- (void)anchorRealNameLikeListViewModelDidFailLoad;
- (void)rebuildDisplayContacts;
- (id)friendLikeSelfUsername;
- (void)onLiveFriendLikeCountChanged;
- (void)retryFirstPage;
- (void)updateListState;
- (void)setupListHeader;
- (void)onRecommendationAvailabilityChanged;
- (void)updateRecommendation;
- (void)onRecommend;
- (void)onFinderLiveRealNameFriendLikeBubbleLikeStateChanged:(BOOL)arg1 updateCount:(BOOL)arg2;
- (void)onFinderLiveRealNameFriendLikeButtonStatusChanged;
- (void)viewDidLayoutSubviews;
- (void)showAsLandscapePageSheetInView:(id)arg1;
- (id)getTopTitleView;
- (BOOL)needCloseOnOrientationChanged;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (void)onHalfScreenPageWillClose:(id)arg1 action:(long long)arg2;
- (id)getHalfContainerView;
- (id)getHalfTransformView;
- (BOOL)isHideBorderShadow;
- (BOOL)isHideBackgroupMask;
- (id)getHalfDismissTransition;
- (void)updateHalfScreenHeightRatio:(double)arg1;
- (BOOL)dynamicHeight;
- (void)setDynamicHeight:(BOOL)arg1;
- (BOOL)openedFromNotification;
- (void)setOpenedFromNotification:(BOOL)arg1;
- (id)anchorReporter;
- (void)setAnchorReporter:(id)arg1;
- (BOOL)showBackgroundMask;
- (void)setShowBackgroundMask:(BOOL)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)titleIconView;
- (void)setTitleIconView:(id)arg1;
- (void)setFooterView:(id)arg1;
- (double)heightRatio;
- (void)setHeightRatio:(double)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (id)stateButton;
- (void)setStateButton:(id)arg1;
- (id)listHeader;
- (void)setListHeader:(id)arg1;
- (id)recommendButton;
- (void)setRecommendButton:(id)arg1;
- (id)selfAvatar;
- (void)setSelfAvatar:(id)arg1;
- (id)selfNameLabel;
- (void)setSelfNameLabel:(id)arg1;
- (id)recommendSeparator;
- (void)setRecommendSeparator:(id)arg1;
- (id)displayContacts;
- (void)setDisplayContacts:(id)arg1;
- (BOOL)didReportShow;
- (void)setDidReportShow:(BOOL)arg1;
- (BOOL)didReportClose;
- (void)setDidReportClose:(BOOL)arg1;
- (long long)reportedRecommendState;
- (void)setReportedRecommendState:(long long)arg1;
- (BOOL)listDismissed;
- (void)setListDismissed:(BOOL)arg1;
- (id)landscapePageSheetAdapter;
- (void)setLandscapePageSheetAdapter:(id)arg1;
- (id)pageSheetTitleView;
- (void)setPageSheetTitleView:(id)arg1;
- (void).cxx_destruct;
@end
