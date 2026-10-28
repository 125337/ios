@interface WCFinderLandScapeVideoView : MMUIView <WCFinderFeedListTransitionHelperBehavior, UITableViewDelegate, UITableViewDataSource, WCFinderRefreshTableFooterViewDelegate, RecentForwardScrollViewDelegate, MMScrollActionSheetDelegate, WCFinderLandScapeVideoDisplayViewDelegate, WCFinderHeadInfoViewDelegate, WCFinderFullToolbarViewDelegate, RingBackInfoDisplaySheetViewDelegate, WCFinderFeedFriendsLikeListViewControllerDelegate, WCFinderCommentDetailViewControllerDelegate, MMMenuControllerExt, WCFinderBulletCommentViewControllerDelegate, WCFinderBulletGroupViewDelegate, WCMainWindowExt, WCFinderMinimizeDelegate, WCFinderLandScapeBasicTableViewCellDelegate, UIGestureRecognizerDelegate, MMFinderLiveAirPlayExtension, WCFinderLandScapeBidCardTableViewCellDelegate, WCFinderFansProfileViewControllerDelegate, WCFinderActionSheetBulletAuthorDelegate, WCFinderHalfScreenProtocol, WCFinderKeepHolderProtocol>
{
    BOOL _isPlayingBeforeDisappear; // +0x8
    id <WCFinderLandScapeVideoViewDataSource> _dataSource; // +0x10
    id <WCFinderLandScapeVideoViewDelegate> _delegate; // +0x18
    WCFinderLandScapeVideoDisplayView * _displayView; // +0x20
    WCFinderFeedContentVM * _currentPlayingContentVM; // +0x28
    WCFinderRefreshTableFooterView * _footerView; // +0x30
    UITableView * _tableView; // +0x38
    WCFinderLandScapeReporter * _reporter; // +0x40
    WCFinderLandScapeVCParams * _params; // +0x48
    long long _videoStartPlayTime; // +0x50
    WCFinderExtStatsReporter * _extStatReporter; // +0x58
    UIView * _topSeparator; // +0x60
    WCFinderAnimationLoadingView * _loadingView; // +0x68
    UILabel * _emptyTipsLabel; // +0x70
    WCFinderScrollActionSheet * _currentActionSheet; // +0x78
    UIImage * _minimizeCoverImage; // +0x80
    UIView * _minimizeSnapshotView; // +0x88
    id /* block */ _forwardActionDelayBlock; // +0x90
    WCFinderBulletGroupView * _bulletAnimationView; // +0x98
    UIViewController<WCFinderCommentBaseViewProtocol> * _lastCommentVC; // +0xa0
    WCFinderVideoDragProgressReporter * _progressDragReporter; // +0xa8
    unsigned long long _videoViewState; // +0xb0
    double _lastMovementY; // +0xb8
    double _tableViewTopPosAtPanBegin; // +0xc0
    double _tableViewInitialY; // +0xc8
    NSMutableArray * _landScapeUIRefreshTaskQueue; // +0xd0
    WCFinderFeedFriendsLikeListBaseViewController * _tmpLikeListVC; // +0xd8
    MMFinderHandOffItem * _finderHandoffItem; // +0xe0
}
- (BOOL)shouldShowMinimizeQuickSwapeEntranceForVC:(id)arg1 userInfo:(id)arg2;
- (id)transitionHelperFetchCurrentPlayTid;
- (BOOL)shouldGestureClosureAsCardForVC:(id)arg1 userInfo:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 params:(id)arg2;
- (void)setup;
- (void)setupSubViews;
- (void)playVideo;
- (void)stopPlayVideo;
- (void)updateCurrentGlobalPlaybackInfo;
- (void)resumePlayVideo;
- (void)pauseVideo;
- (id)getPlayerView;
- (void)reloadDisplayVideoWithContentVM:(id)arg1;
- (void)reloadFeedList;
- (void)setState:(unsigned long long)arg1;
- (void)adjustSubviewsLayout;
- (void)adjustSubviewsLayoutWithSizeIfNeeded:(CGSize)arg1;
- (void)forceAdjustSubviewsLayoutWithSize:(CGSize)arg1;
- (void)setViewWillAppearState;
- (void)setViewDidAppearState;
- (void)setViewWillDisappearState;
- (void)setViewDidDisappearState;
- (void)setViewDidBePopOrDissmiss;
- (void)setViewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)getHomeIndicatorHiddenState;
- (void)dealloc;
- (void)addObserverForForegroundNotification;
- (void)removeObserverForForegroundNotification;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)onApplicationBecomeActive:(id)arg1;
- (void)onApplicationWillResignActive:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)switchCurrentPlayVideoTo:(id)arg1 param:(id)arg2 keepOffset:(BOOL)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)onFinderLandScapeVideoDisplayViewAntiAddictCheckLogic;
- (void)onFinderLandScapeVideoDisplayViewDidClickRotateBtn;
- (void)onFinderLandScapeVideoDisplayViewDidClickPauseBtn:(BOOL)arg1;
- (void)onFinderLandScapeVideoDisplayViewDidClickReturnBtn;
- (void)onFinderLandScapeVideoDisplayViewDidClickBulletBtn;
- (void)onFinderLandScapeVideoDisplayViewDidClickBulletSwitchBtn:(BOOL)arg1;
- (void)onFinderLandScapeVideoDisplayViewDidClickPlayRateBtnWithRate:(double)arg1;
- (void)onFinderLandScapeVideoDisplayViewDidClickHotCommentView:(id)arg1 contentVM:(id)arg2;
- (void)onFinderLandScapeVideoDisplayViewStartPan;
- (void)onFinderLandScapeVideoDisplayViewEndPan;
- (double)getPlayVideoTotalTime;
- (double)getVideoPlayingTotalTime;
- (void)onFinderLandScapeVideoDisplayViewDidStartLongPressSpeedPlay:(double)arg1;
- (void)onFinderLandScapeVideoDisplayViewDidEndLongPressSpeedPlay:(double)arg1;
- (void)stopSpeedPlay;
- (void)setPlayRate:(double)arg1 resumeMediaPlay:(BOOL)arg2;
- (void)onFinderLandScapeVideoDisplayViewDidClickFriendLikeViewWithContentVM:(id)arg1;
- (id)finderLandScapeVideoDisplayViewGetNextPlayableContentVM;
- (id)finderLandScapeVideoDisplayViewGetNextContinuePlayableContentVM;
- (void)onFinderLandScapeVideoDisplayViewDidClickPlayNextVideoWithDataItem:(id)arg1;
- (void)onFinderLandScapeVideoDisplayViewDidClickPlayNextVideoWithContentVM:(id)arg1;
- (void)onFinderLandScapeVideoDisplayViewVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onFinderLandScapeVideoDisplayViewContentMediaDidEndPlay;
- (void)onFinderLandScapeVideoDisplayViewCollectionShowStateChanged;
- (void)onFinderLandScapeVideoDisplayViewPlayAnotherCollectionFeed:(id)arg1 manual:(BOOL)arg2;
- (void)showBulletMenuItems:(id)arg1 targetRect:(CGRect)arg2;
- (void)setupMenuController:(id)arg1 menuItems:(id)arg2 targetRect:(CGRect)arg3;
- (void)onMoreBulletComment:(id)arg1;
- (void)onCopyBulletComment:(id)arg1;
- (void)onDeleteBulletComment:(id)arg1;
- (void)onDeleteBulletComment:(id)arg1 contentVM:(id)arg2;
- (void)onDeleteBulletComment:(id)arg1 result:(BOOL)arg2;
- (void)onReportBulletComment:(id)arg1;
- (void)onFollowBulletComment:(id)arg1;
- (void)onUnBlockBulletComment:(id)arg1;
- (void)onBlockBulletComment:(id)arg1;
- (void)modBlackListWithOpType:(int)arg1 bulletItem:(id)arg2 contentVM:(id)arg3 successText:(id)arg4 failText:(id)arg5;
- (void)bulletCommentOpenStateChanged:(BOOL)arg1 itemFlag:(unsigned long long)arg2 changedScene:(long long)arg3;
- (void)bulletCommentOpenStateChanged:(BOOL)arg1 itemFlag:(unsigned long long)arg2 changedScene:(long long)arg3 openType:(unsigned long long)arg4;
- (void)interactivePanelToolbarBulletCommentOpenStateChanged:(BOOL)arg1 itemFlag:(unsigned long long)arg2 changedScene:(long long)arg3 openType:(unsigned long long)arg4;
- (void)updateBulletCommentLayout:(BOOL)arg1;
- (void)updateBulletContentVM:(id)arg1;
- (void)updateBulletContentVM:(id)arg1 size:(CGSize)arg2;
- (void)fetchBulletCommentWithTimestamp:(double)arg1;
- (void)onMenuControllerWillHide;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)clickAvatar:(id)arg1;
- (void)clickNicknameWithContact:(id)arg1;
- (void)showSpamTipsWithString:(id)arg1;
- (void)onHeaderMoreClickAction:(id)arg1;
- (void)onHeaderFollowClickAction:(id)arg1;
- (id)currentContentVM;
- (void)onHeaderMoreClickAction:(id)arg1 shareButton:(id)arg2;
- (void)onHeaderFollowBtnClickAction:(id)arg1 followButton:(id)arg2;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetDidAppeared:(id)arg1;
- (void)scrollActionSheetDidDismiss:(id)arg1;
- (void)snapshotForMinimize;
- (void)addToTingListenLater:(id)arg1;
- (void)gotoFinderAuidoMainFeed:(id)arg1;
- (void)didClickFinderHandOff:(id)arg1;
- (void)makeFinderHandoffItem:(id)arg1;
- (id)currentFeedContentVM;
- (id)snapshotImageForMedia;
- (id)viewForKeepHoldAnimation;
- (void)onClickToolbarShareAction:(id)arg1 shareButton:(id)arg2;
- (void)onClickViewAllCommentAction:(id)arg1 isActiveInput:(BOOL)arg2 isFromCommentButton:(BOOL)arg3;
- (void)showCommentListWithContentVM:(id)arg1 shouldEnterKeyBoard:(BOOL)arg2 refCommentID:(unsigned long long)arg3 commentAction:(unsigned long long)arg4 showTitle:(BOOL)arg5 enterType:(unsigned long long)arg6;
- (void)onDidClickToolbarLikeAction:(id)arg1 isPrivateLike:(BOOL)arg2;
- (void)likeFeedContentVMAction:(id)arg1 isPrivateLike:(BOOL)arg2 touchPoint:(CGPoint)arg3;
- (void)onClickToolbarCollectionAction:(id)arg1 sourceType:(int)arg2;
- (void)clickCommentNickname:(id)arg1 username:(id)arg2 contact:(id)arg3 isWeChatFriend:(BOOL)arg4 dataItem:(id)arg5;
- (void)clickContentPOIAction:(id)arg1 commentVC:(id)arg2;
- (void)onClickContentUsernameAction:(id)arg1 commentVC:(id)arg2;
- (void)onClickEventEntry:(id)arg1 commentVC:(id)arg2;
- (void)onClickContentExtReadingAction:(id)arg1 commentVC:(id)arg2;
- (void)onClickContentTopicAction:(id)arg1 dataItem:(id)arg2 commentVC:(id)arg3;
- (void)onClickContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3 commentVC:(id)arg4 sucBlock:(id /* block */)arg5;
- (id)getListenHalfAnimView;
- (BOOL)canShowMore;
- (void)onClickLikedListClickMoreActionWith:(id)arg1 ObjectId:(id)arg2;
- (void)onClickLikedListContactWithWith:(id)arg1 LikeInfo:(id)arg2 ObjectID:(id)arg3;
- (void)fansProfileViewController:(id)arg1 clickPrivateMsgWithContact:(id)arg2 finderContact:(id)arg3 comment:(id)arg4;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)wx_fansProfileViewController:(id)arg1 clickActionWithFinderContact:(id)arg2;
- (void)onRingToneSheetDisappear;
- (void)onFeedContent:(id)arg1 favDataChanged:(id)arg2;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (void)onFeedHotCommentChanged:(id)arg1;
- (void)executePortraitLayout:(id /* block */)arg1 withUniqueID:(id)arg2;
- (void)updateBulletAnimationViewWithText:(id)arg1;
- (void)onBulletCommentViewController:(id)arg1 didCommentWithText:(id)arg2 replyItem:(id)arg3;
- (void)onBulletCommentViewControllerChangeBulletCommentOpenState:(BOOL)arg1;
- (void)onBulletCommentViewControllerClosed;
- (void)onTapBulletGroupViewDidSelectedItem:(BOOL)arg1;
- (int)landScapeCellGetCommentScene;
- (void)onClickMinimizeBtn;
- (void)handleTableViewPanGesture:(id)arg1;
- (void)autoExpandDescView;
- (void)autoFoldDescView;
- (BOOL)enableMinimize;
- (void)updateNavigationBarItems;
- (id)minimizePageBizKey;
- (id)requestMinimizeInfo:(BOOL)arg1;
- (BOOL)dismissMinimizeWhenLimitMode;
- (id)minimizeConflictScrollViews;
- (void)onMinimizeResotreContentView:(id)arg1 cleanPauseStatus:(BOOL)arg2;
- (long long)autoMinimizeControlFlag;
- (void)setCurrentPlayingContentVM:(id)arg1;
- (id)createActionSheetWithContentVM:(id)arg1;
- (void)reportVideoStatTime;
- (void)_showScrollActionSheetWithContentVM:(id)arg1 shareButton:(id)arg2;
- (void)_pushContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3 fromVC:(id)arg4 sucBlock:(id /* block */)arg5;
- (void)_pushContentTopicVCWith:(id)arg1 dataItem:(id)arg2 fromVC:(id)arg3;
- (void)_pushContentExtReadingWithUrl:(id)arg1 fromVC:(id)arg2;
- (void)_pushContentUsernameVCAction:(id)arg1 fromVC:(id)arg2;
- (void)_pushContentPOIVCAction:(id)arg1 fromVC:(id)arg2;
- (void)_pushEventEntry:(id)arg1 fromVC:(id)arg2;
- (void)_pushProfileWithUserName:(id)arg1;
- (void)_addUIRefreshTaskInLandScape:(id /* block */)arg1;
- (void)_addUIRefreshTaskInLandScape:(id /* block */)arg1 uniqueID:(id)arg2;
- (void)_applyAllUIRefreshTaskAddedInLandScape;
- (void)listenHalfScreenFrameChanged:(CGRect)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)mm_traitCollectionDidChange:(id)arg1;
- (void)statReportActionStartPlay;
- (void)statReportActionEndPlay;
- (void)statReportActionReport;
- (void)statReportActionClickType:(unsigned long long)arg1;
- (void)landscapeCellDidClickSeeLater:(id)arg1 contentVM:(id)arg2 seeLaterState:(BOOL)arg3;
- (id)gen21874Dict;
- (id)gen21875DictWithFeedId:(id)arg1;
- (id)gen21875DictWithFeedId:(id)arg1 nextId:(id)arg2;
- (id)currentViewController;
- (id)contentVMAtRow:(long long)arg1;
- (BOOL)isAuthor;
- (int)feedViewControllerScene;
- (id)extStatReporter;
- (id)landScapeUIRefreshTaskQueue;
- (void)onAirPlayAction:(int)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)displayView;
- (void)setDisplayView:(id)arg1;
- (id)currentPlayingContentVM;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (long long)videoStartPlayTime;
- (void)setVideoStartPlayTime:(long long)arg1;
- (void)setExtStatReporter:(id)arg1;
- (id)topSeparator;
- (void)setTopSeparator:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)emptyTipsLabel;
- (void)setEmptyTipsLabel:(id)arg1;
- (id)currentActionSheet;
- (void)setCurrentActionSheet:(id)arg1;
- (id)minimizeCoverImage;
- (void)setMinimizeCoverImage:(id)arg1;
- (id)minimizeSnapshotView;
- (void)setMinimizeSnapshotView:(id)arg1;
- (id /* block */)forwardActionDelayBlock;
- (void)setForwardActionDelayBlock:(id /* block */)arg1;
- (id)bulletAnimationView;
- (void)setBulletAnimationView:(id)arg1;
- (id)lastCommentVC;
- (void)setLastCommentVC:(id)arg1;
- (BOOL)isPlayingBeforeDisappear;
- (void)setIsPlayingBeforeDisappear:(BOOL)arg1;
- (id)progressDragReporter;
- (void)setProgressDragReporter:(id)arg1;
- (unsigned long long)videoViewState;
- (void)setVideoViewState:(unsigned long long)arg1;
- (double)lastMovementY;
- (void)setLastMovementY:(double)arg1;
- (double)tableViewTopPosAtPanBegin;
- (void)setTableViewTopPosAtPanBegin:(double)arg1;
- (double)tableViewInitialY;
- (void)setTableViewInitialY:(double)arg1;
- (void)setLandScapeUIRefreshTaskQueue:(id)arg1;
- (id)tmpLikeListVC;
- (void)setTmpLikeListVC:(id)arg1;
- (id)finderHandoffItem;
- (void)setFinderHandoffItem:(id)arg1;
- (void).cxx_destruct;
@end
