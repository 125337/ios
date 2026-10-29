@interface MMFinderLiveFeedFriendsLikeListViewController : WCFinderFeedFriendsLikeListBaseViewController <UITableViewDataSource, UITableViewDelegate, MMFinderLiveFeedFriendsLikeListViewModelDelegate, MMFinderLiveFeedFriendsLikeListTableViewCellDelegate, MMUIHalfScreenViewControllerDelegate, WCFinderRefuseLikeListViewControllerDelegate, WCFinderHalfScreenProtocol>
{
    BOOL _dynamicHeight; // +0x70
    BOOL _showFinderIdentifier; // +0x71
    BOOL _highlightLocated; // +0x72
    int _reportScene; // +0x74
    WCFinderDataItem * _dataItem; // +0x78
    unsigned long long _totalLikeCount; // +0x80
    NSString * _objectID; // +0x88
    NSString * _nonceID; // +0x90
    MMFinderLiveFeedFriendsLikeListViewModel * _viewModel; // +0x98
    MMTableView * _tableView; // +0xa0
    UILabel * _stateTipsLabel; // +0xa8
    MMUIButton * _closeBtn; // +0xb0
    MMUIButton * _moreBtn; // +0xb8
    WCFinderDynamicRichTextView * _titleIconView; // +0xc0
    double _heightRatio; // +0xc8
    NSMutableSet * _highlightUsernameSet; // +0xd0
}
- (id)initWithDataItem:(id)arg1 reportScene:(int)arg2;
- (id)initWithDataItem:(id)arg1 likeList:(id)arg2 reportScene:(int)arg3;
- (void)viewDidLoad;
- (void)setupHeight;
- (double)getMaxHalfScreenHeight;
- (BOOL)useBlackStatusbar;
- (id)navigationBarBackgroundColor;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)addHighlightUsernames:(id)arg1;
- (id)tableView;
- (id)stateTipsLabel;
- (void)setupSubViews;
- (BOOL)calculateShowFinderIdentifier;
- (void)updateTitleLableWithCount:(unsigned long long)arg1;
- (void)onClickClose;
- (void)onClickMore;
- (void)setupData;
- (void)resetDetailToInitStatus;
- (void)refreshUIWithUpdateTitle:(BOOL)arg1;
- (void)locateHighlightIfNeed;
- (id)displayTitle:(unsigned long long)arg1;
- (id)titleAccessibilityLabel:(unsigned long long)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)finderFeedFriendsLikeListGetLocalSuccess;
- (void)onHalfScreenPageWillClose:(id)arg1 action:(long long)arg2;
- (void)exposeFriendsLikeList;
- (void)reportFriendsLikeListWithIndex:(unsigned long long)arg1 action:(unsigned long long)arg2;
- (void)onRefuseLikeListClickBackItem;
- (id)getHalfContainerView;
- (id)getHalfTransformView;
- (BOOL)isHideBorderShadow;
- (BOOL)isHideBackgroupMask;
- (id)getHalfDismissTransition;
- (void)updateHalfScreenHeightRatio:(double)arg1;
- (BOOL)dynamicHeight;
- (void)setDynamicHeight:(BOOL)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned long long)totalLikeCount;
- (void)setTotalLikeCount:(unsigned long long)arg1;
- (id)objectID;
- (void)setObjectID:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (int)reportScene;
- (void)setReportScene:(int)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setStateTipsLabel:(id)arg1;
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
- (void).cxx_destruct;
@end
