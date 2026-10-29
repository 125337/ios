@interface WCFinderFeedFriendsLikeListViewController : MMUIHalfScreenViewController <UITableViewDataSource, UITableViewDelegate, WCFinderFeedFriendsLikeListViewModelDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderFeedFriendsLikeListTableViewCellDelegate, WCFinderFeedFriendsLikeGuideViewControllerDelegate, MMUIHalfScreenViewControllerDelegate, WCFinderRefuseLikeListViewControllerDelegate, WCFinderHalfScreenProtocol, WCFinderFansProfileViewControllerDelegate>
{
    BOOL _showBackgroundMask; // +0x68
    BOOL _showFinderIdentifier; // +0x69
    BOOL _highlightLocated; // +0x6a
    int _reportScene; // +0x6c
    UINavigationController * _navVC; // +0x70
    id <WCFinderFeedFriendsLikeListViewControllerDelegate> _friendsLikeListDelegate; // +0x78
    id /* block */ _beforePushVCBlock; // +0x80
    id /* block */ _afterPopVCBlock; // +0x88
    unsigned long long _totalLikeCount; // +0x90
    NSString * _objectID; // +0x98
    NSString * _nonceID; // +0xa0
    unsigned long long _fetchScene; // +0xa8
    WCFinderFeedFriendsLikeListViewModel * _viewModel; // +0xb0
    MMTableView * _tableView; // +0xb8
    WCFinderRefreshTableFooterView * _footerView; // +0xc0
    WCFinderAnimationLoadingView * _loadingView; // +0xc8
    UILabel * _stateTipsLabel; // +0xd0
    UITapGestureRecognizer * _stateRetryGesture; // +0xd8
    id /* block */ _likeOptionBlock; // +0xe0
    MMUIButton * _closeBtn; // +0xe8
    MMUIButton * _moreBtn; // +0xf0
    WCFinderDynamicRichTextView * _titleIconView; // +0xf8
    double _heightRatio; // +0x100
    NSMutableSet * _highlightUsernameSet; // +0x108
    NSString * _targetUsername; // +0x110
    WCFinderFeedFriendsLikeListViewController * _tmpLikeListVC; // +0x118
}
- (id)initWithDataItem:(id)arg1 feedLikedListScene:(unsigned long long)arg2 reportScene:(int)arg3;
- (void)viewDidLoad;
- (double)getMaxHalfScreenHeight;
- (BOOL)useBlackStatusbar;
- (id)navigationBarBackgroundColor;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)addHighlightUsernames:(id)arg1;
- (id)tableView;
- (id)createLoadingView;
- (id)footerView;
- (id)stateTipsLabel;
- (id)stateRetryGesture;
- (void)setupSubViews;
- (BOOL)hiddenContentUntilCGIFinish;
- (BOOL)calculateShowFinderIdentifier;
- (BOOL)canShowMore;
- (void)updateTitleLableWithCount:(unsigned long long)arg1;
- (void)onClickClose;
- (void)onClickMore;
- (void)setupData;
- (void)resetDetailToInitStatusWithRetry:(BOOL)arg1;
- (void)stateRetryGestureAction:(id)arg1;
- (void)refreshUIWithUpdateTitle:(BOOL)arg1;
- (void)locateHighlightIfNeed;
- (id)displayTitle:(unsigned long long)arg1;
- (id)titleAccessibilityLabel:(unsigned long long)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)doBusinessWithCompletion:(id /* block */)arg1;
- (void)finderFeedFriendsLikeListGetLocalSuccess;
- (void)finderFeedFriendsLikeListFetchSuccess;
- (void)finderFeedFriendsLikeListFetchFailWithErrorCode:(long long)arg1;
- (void)finderFriendsLikeOptionSuccess:(unsigned long long)arg1;
- (void)finderFriendsLikeOptionFailWithErrorCode:(long long)arg1;
- (void)finderFriendsLikeDoLikeSuccessWithIndex:(unsigned long long)arg1 doLike:(BOOL)arg2;
- (void)finderFriendsLikeDoLikeFailWithErrorCode:(long long)arg1;
- (void)likeListTableViewCell:(id)arg1 onClickLike:(unsigned long long)arg2 doLike:(BOOL)arg3;
- (void)likeListTableViewCell:(id)arg1 onClickMore:(unsigned long long)arg2 notSee:(BOOL)arg3;
- (void)tipsViewControllerClickCancelButton:(id)arg1;
- (void)tipsViewControllerClickConfirmButton:(id)arg1;
- (void)onHalfScreenPageWillClose:(id)arg1 action:(long long)arg2;
- (void)notifyAddedRefuseFriends;
- (void)exposeFriendsLikeList;
- (void)reportFriendsLikeListWithIndex:(unsigned long long)arg1 action:(unsigned long long)arg2;
- (void)onRefuseLikeListClickBackItem;
- (id)getHalfContainerView;
- (id)getHalfTransformView;
- (BOOL)isHideBorderShadow;
- (BOOL)isHideBackgroupMask;
- (id)getHalfDismissTransition;
- (void)updateHalfScreenHeightRatio:(double)arg1;
- (id)navVC;
- (void)setNavVC:(id)arg1;
- (id)friendsLikeListDelegate;
- (void)setFriendsLikeListDelegate:(id)arg1;
- (id /* block */)beforePushVCBlock;
- (void)setBeforePushVCBlock:(id /* block */)arg1;
- (id /* block */)afterPopVCBlock;
- (void)setAfterPopVCBlock:(id /* block */)arg1;
- (BOOL)showBackgroundMask;
- (void)setShowBackgroundMask:(BOOL)arg1;
- (unsigned long long)totalLikeCount;
- (void)setTotalLikeCount:(unsigned long long)arg1;
- (id)objectID;
- (void)setObjectID:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (unsigned long long)fetchScene;
- (void)setFetchScene:(unsigned long long)arg1;
- (int)reportScene;
- (void)setReportScene:(int)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setFooterView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void)setStateTipsLabel:(id)arg1;
- (void)setStateRetryGesture:(id)arg1;
- (id /* block */)likeOptionBlock;
- (void)setLikeOptionBlock:(id /* block */)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (id)moreBtn;
- (void)setMoreBtn:(id)arg1;
- (id)titleIconView;
- (void)setTitleIconView:(id)arg1;
- (double)heightRatio;
- (void)setHeightRatio:(double)arg1;
- (BOOL)showFinderIdentifier;
- (void)setShowFinderIdentifier:(BOOL)arg1;
- (BOOL)highlightLocated;
- (void)setHighlightLocated:(BOOL)arg1;
- (id)highlightUsernameSet;
- (void)setHighlightUsernameSet:(id)arg1;
- (id)targetUsername;
- (void)setTargetUsername:(id)arg1;
- (id)tmpLikeListVC;
- (void)setTmpLikeListVC:(id)arg1;
- (void).cxx_destruct;
@end

