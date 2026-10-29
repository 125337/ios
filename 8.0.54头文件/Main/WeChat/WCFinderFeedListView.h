@interface WCFinderFeedListView : UIView <WCFinderFeedListTransitionHelperBehavior, WCFinderMinimizeDelegate, WCFinderFeedListTransitionInnserScrollViewProvider, UITableViewDelegate, UITableViewDataSource, WCFinderRefreshTableFooterViewDelegate, MMScrollActionSheetDelegate, WCActionSheetDelegate, WCFinderFeedFriendsLikeListViewControllerDelegate, WCFinderPostingCommentExt, WCFinderContentTableViewCellDelegate, WCFinderFeedNPSCellDelegate, WCFinderDescTableViewCellDelegate, WCFinderCommentDetailViewControllerDelegate, WCFinderFeedListDownLoadExt, WCGeneralMonitorDelegate, WCFinderFullMultiMediaTableViewCellDelegate, MMFinderMenuActionDelegate, WCFinderCardWebViewControllerDelegate, WCCanvasHalfScreenViewControllerDelegate, WCAdFinderDialogViewControllerDelegate, ForwardMessageLogicDelegate, WCFinderAppPushExt, MMLiveMorphDismissTarget, RingBackInfoDisplaySheetViewDelegate, RecentForwardScrollViewDelegate, WCFinderBulletCommentViewControllerDelegate, WCFinderHalfScreenProtocol, WCFinderPreloadStrategyExt, EGORefreshTableHeaderDelegate, WCFinderTopPullStatusViewDelegate, MMFinderLiveCastViewControllerExt, WCFinderPostMgrDelegate, WCFinderFansProfileViewControllerDelegate, WCFinderFeedDragUpDislikeControllerDelegate, SnapshotPrinterViewProtocol, WCFinderActionSheetBulletAuthorDelegate, MMUIViewControllerDelegate, WCFinderMinimizeListProtocol, WCFinderKeepHolderProtocol>
{
    BOOL _halfScreenIsShowState; // +0x8
    BOOL _isSilencePlay; // +0x9
    BOOL _needsResumeTimelineVideo; // +0xa
    BOOL _disableVideoAutoPlay; // +0xb
    BOOL _feedListViewIsAppear; // +0xc
    BOOL _alreadyCheckLimitModeGuide; // +0xd
    BOOL _isBlockByLimitMode; // +0xe
    BOOL _cancelSpeedViewAnimateBlock; // +0xf
    id <WCFinderFeedListViewDataSource> _dataSource; // +0x10
    id <WCFinderFeedListViewDelegate> _delegate; // +0x18
    id <WCFinderFeedListViewReportDelegate> _reportDelegate; // +0x20
    UITableView * _tableView; // +0x28
    NSString * _retryTipsTitle; // +0x30
    NSString * _noDataTipsTitle; // +0x38
    NSString * _footerNoMoreTips; // +0x40
    NSString * _latestAutoplayVideoTid; // +0x48
    NSIndexPath * _currentFocusIndexPath; // +0x50
    NSString * _lastFocusTid; // +0x58
    WCFinderRefreshTableFooterView * _footerView; // +0x60
    WCFinderScrollActionSheet * _actionSheet; // +0x68
    long long _preFetchNextPageIndex; // +0x70
    long long _topPreFetchAdvanceCount; // +0x78
    long long _topDraggingPreFetchAdvanceCount; // +0x80
    WCFinderPlaybackSpeedView * _playbackSpeedView; // +0x88
    UIView * _originTitleView; // +0x90
    WCFinderPullDownRefreshHeaderView * _refreshHeaderView; // +0x98
    WCFinderTopPullStatusView * _topPullStatusView; // +0xa0
    WCFinderAnimationLoadingView * _loadingView; // +0xa8
    UIView * _loadingViewContainer; // +0xb0
    UILabel * _stateTipsLabel; // +0xb8
    UIImageView * _retryImageView; // +0xc0
    NSString * _currentFocusTid; // +0xc8
    NSString * _lastAutoplayTid; // +0xd0
    NSMutableDictionary * _exposureDict; // +0xd8
    NSMutableSet * _allExposeFeedIdSet; // +0xe0
    UIViewController<WCFinderCommentBaseViewProtocol> * _lastCommentVC; // +0xe8
    unsigned long long _createTimestamp; // +0xf0
    unsigned long long _enterTime; // +0xf8
    MMTimer * _playTimer; // +0x100
    UIImage * _minimizeCoverImage; // +0x108
    UIView * _minimizeSnapshotView; // +0x110
    id /* block */ _forwardActionDelayBlock; // +0x118
    NSIndexPath * _enterBackgroundIndexPath; // +0x120
    NSString * _currentTidBeforeInsertAction; // +0x128
    UITableViewCell * _currentCellBeforeInsertAction; // +0x130
    double _refreshHeaderViewLastAlpha; // +0x138
    NSNumber * _originalInterfaceOrientation; // +0x140
    NSString * _startFeedId; // +0x148
    WCFinderPostMgr * _timelinePostMgr; // +0x150
    WCFinderFeedAudioHelper * _feedAudioHelper; // +0x158
    NSMutableDictionary * _feedPostInfoDic; // +0x160
    WCFinderPlayRateOperationViewV3 * _operationViewV3; // +0x168
    WCFinderFeedFriendsLikeListViewController * _tmpLikeListVC; // +0x170
    WCFinderFeedDragUpDislikeController * _notInterestedLogic; // +0x178
    EmoticonCustomCreateLogic * _emoticonCustomCreateLogic; // +0x180
    MMFinderHandOffItem * _finderHandoffItem; // +0x188
    WCFinderLandscapeReportInfo * _landscapeReportInfo; // +0x190
}
+ (void)configViewController:(id)arg1;
- (void)setupSpeedPlayViewIfNeeded;
- (void)changeNaviTitleWithCurrentPlayRate:(double)arg1;
- (void)hidePlayRateView;
- (void)animatedShowPlayRateResultWithRate:(double)arg1;
- (void)checkRedDotReadAction;
- (void)triggerSharedLeaveUnreadFinderSync;
- (void)onFeedShowPostEntranceByContentVM:(id)arg1 enterScene:(unsigned long long)arg2 postType:(unsigned long long)arg3;
- (void)updateFeedPostInfoBy:(id)arg1 onLoadingState:(BOOL)arg2;
- (BOOL)feedPostIsOnLoadingStateBy:(id)arg1;
- (void)updateFeedPostInfoBy:(id)arg1 musicInfo:(id)arg2;
- (id)feedPostMusicInfoBy:(id)arg1;
- (id)onPostFollowMuiscFeedId:(id)arg1;
- (id)postMgrGetRecommendedMusicInfoFromShoot:(BOOL)arg1 postMgr:(id)arg2;
- (id)postMgrGetVideoTemplateInfo:(id)arg1;
- (id)postMgrPatMusicGetGroupId:(id)arg1;
- (id)onPostMusicIds:(id)arg1;
- (id)onPostFollowTemplateFeedId;
- (id)onPostFollowTopicFeedId:(id)arg1;
- (id)postMgrGetMusicInfo;
- (id)postMgrSourceInfo:(id)arg1;
- (id)postMgrAttachTextContent:(id)arg1;
- (void)postMgrWillOpenAlbum:(id)arg1;
- (void)triggerPostActionByCheckAudioTrack:(id)arg1;
- (void)_tiggerPostActionByPostMgr:(id)arg1 fromAudioExtract:(BOOL)arg2;
- (void)extractAudioTrackFromFeedByPostMgr:(id)arg1;
- (BOOL)postMgrEnableOpenAlbum:(id)arg1;
- (BOOL)shouldStartEdgeSwipeGestureWithPoint:(CGPoint)arg1;
- (BOOL)shouldShowMinimizeQuickSwapeEntranceForVC:(id)arg1 userInfo:(id)arg2;
- (BOOL)shouldUseMinimizeAnimationFromVC:(id)arg1 toVC:(id)arg2 isClosure:(BOOL)arg3;
- (BOOL)enableDragDownToCloseForVC:(id)arg1;
- (BOOL)shouldDragDownCloseInvokeForVC:(id)arg1;
- (id)transitionHelperFetchCurrentPlayTid;
- (BOOL)shouldGestureClosureAsCardForVC:(id)arg1 userInfo:(id)arg2;
- (BOOL)shouldDragDownAsCardForVC:(id)arg1 userInfo:(id)arg2;
- (BOOL)shouldTransitionProvider:(id)arg1 requestFailedToOther:(id)arg2;
- (BOOL)enablePushSwipeGestureForViewController:(id)arg1;
- (id)pushSwipeGestureDestinationForViewController:(id)arg1;
- (BOOL)pushSwipeGestureShouldBeginWithLocation:(CGPoint)arg1;
- (void)_minimizeFinderFeedListWillAppear;
- (BOOL)_supportMinimize:(id *)arg1;
- (BOOL)enableMinimize;
- (void)updateNavMinimizeItem;
- (BOOL)_isFeedListViewSupportMinimize:(id *)arg1;
- (BOOL)isSupportMinimize;
- (id)minimizeDelegate;
- (id)_currentIndexPathContentVM;
- (id)_contentVMAtIndexPath:(id)arg1;
- (int)_commentScene;
- (id)_currentViewController;
- (id)minimizePageBizKey;
- (BOOL)checkIsDisableMinimize;
- (BOOL)checkNeedInterruptMinimize;
- (id)requestMinimizeInfo:(BOOL)arg1;
- (void)updateNewMinimizeInfo:(id)arg1;
- (BOOL)dismissMinimizeWhenLimitMode;
- (id)minimizeConflictScrollViews;
- (void)onOpenMinimizedFromFloatingView:(id)arg1;
- (void)onMinimizeResotreContentView:(id)arg1 cleanPauseStatus:(BOOL)arg2;
- (BOOL)shouldAutoMinimizeWhenPopOrDismiss;
- (id)minimizePlayInfo:(BOOL)arg1;
- (void)updateFloatContentMinimizePlayInfo:(id)arg1;
- (void)updateMsgButtonReportInfo;
- (void)updateMinimizePlayInfo;
- (void)onClickMinimizeButton;
- (id)fetchCurrentPlayDataItemThenPause:(double *)arg1;
- (id)finderFetchTransitionInnerScrollView;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 startFeedId:(id)arg2;
- (id)feedAudioHelper;
- (id)timelinePostMgr;
- (id)exposureDict;
- (id)allExposeFeedIdSet;
- (id)feedPostInfoDic;
- (id)landscapeReportInfo;
- (void)configureTableView;
- (void)setUpHeaderView;
- (void)setUpFooterView;
- (void)setupTopLoading;
- (void)setupNotInterestedActionLogicIfNeeded;
- (void)setupTipsLabel;
- (void)resetStateTipsLabelWithRetry:(BOOL)arg1;
- (void)stateRetryGestureAction:(id)arg1;
- (void)startLoadingState;
- (void)resetLoadingStateWithAnimation:(BOOL)arg1;
- (void)reloadData;
- (void)resetPullViewState;
- (void)showNoMoreData;
- (void)resetHeaderView;
- (void)resetHeaderPullView;
- (id)setupTopPullView:(BOOL)arg1;
- (BOOL)_allowTopPull;
- (id)topPullView;
- (void)resetTopPullView;
- (void)prefetchTopFeed;
- (void)resetFooterView:(BOOL)arg1;
- (void)processLastVideoHunger;
- (void)resetFooterViewNormal;
- (void)dealloc;
- (void)willMoveToWindow:(id)arg1;
- (void)didMoveToWindow;
- (void)setLastCommentVC:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)showErrorStatus;
- (void)handleVisibleCellExpose;
- (void)finderFeedListWillAppear;
- (void)checkFeedTeenageMode:(id)arg1;
- (void)finderFeedListWillDisappear;
- (void)finderFeedListDidDisappear;
- (void)finderFeedListWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)layoutSubviews;
- (BOOL)_didCurrentVCBePopedOrDismissed;
- (void)finderFeedListDidAppear;
- (void)tryShowLimitModeView;
- (void)appendContentVMFromSectionIndex:(long long)arg1 toSectionIndex:(long long)arg2;
- (void)modifyContentVMWithDiffResult:(id)arg1;
- (void)modifyContentVMWithDeletes:(id)arg1 inserts:(id)arg2 updates:(id)arg3;
- (BOOL)_shouldKeepLocationForRemoves:(id)arg1 inserts:(id)arg2 visitableIndexPath:(id)arg3;
- (unsigned int)_tlFollowEnterType;
- (id)_tlFollowUdfKV;
- (void)performUpdateWithoutKeepLocation:(BOOL)arg1 block:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)deleteContentVMWithContentVM:(id)arg1 section:(long long)arg2;
- (void)reloadToolBarUIWithContentVM:(id)arg1 atSection:(long long)arg2;
- (void)finderFeedListViewStopCurrentFeedPlay;
- (void)finderFeedListViewPauseCurrentFeedPlay;
- (void)finderFeedListViewPauseFeedPlayWithTid:(id)arg1;
- (void)scrollToContentVM:(id)arg1 animated:(BOOL)arg2;
- (void)scrollToNextContentVM:(id)arg1 animated:(BOOL)arg2;
- (void)scrollToNextContentVM:(id)arg1 animated:(BOOL)arg2 limitMediaType:(unsigned long long)arg3;
- (void)tryLoadMoreToNextContentVM;
- (void)finderReloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (CGPoint)footerViewOrigin;
- (unsigned long long)supportedInterfaceOrientationsWithVCMask:(unsigned long long)arg1;
- (void)addObserverForForegroundNotification;
- (void)removeObserverForForegroundNotification;
- (void)addScreenshotNotification;
- (void)removeScreenshotNotification;
- (void)setFeedListViewUserInteractionEnabled:(BOOL)arg1;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)triggerCellEnterForegroundAction;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)triggerCellEnterBackgroundAction;
- (void)onUserDidTakeScreenshot;
- (void)saveIndexPathBeforeEnterBackground;
- (void)setUsedTaskData:(id)arg1;
- (void)addOrUpdateUsedTaskData;
- (void)stopCurrentMediaAndSnapCapture;
- (void)stopCurrentMedia;
- (void)pauseCurrentMediaWithShowPauseBtn:(BOOL)arg1;
- (void)resumeCurrentMedia;
- (void)stopCellMediaOfSection:(long long)arg1;
- (void)pauseCellMediaOfSection:(long long)arg1;
- (void)preloadVideoItems;
- (void)preloadVideoItemsWithCurrentIndexPath:(id)arg1;
- (id)getNeedPreloadItemsWithCurrentIndexPath:(id)arg1;
- (void)checkPreCreateVideoItems;
- (void)preloadNextPageDatasWithWillDisplayIndexPath:(id)arg1;
- (void)adjustHotAreaAndAutoPlay;
- (void)_adjustHotAreaAndAutoPlayWithTableViewContentOffset;
- (void)_adjustHotAreaAndAutoPlayWithTargetOffset:(CGPoint)arg1;
- (void)pourStateIntoPoolWithContentVM:(id)arg1;
- (void)updateCurCellMetaModelExposeInfo:(id)arg1;
- (void)autoPlayVideoWithTargetOffset:(CGPoint)arg1;
- (void)playVideoAtIndexPath:(id)arg1;
- (void)checkShouldScrollToNextFeedWithDelay:(id)arg1;
- (void)updateGlobalPlaybackInfo;
- (void)playCurrentIndexFeed;
- (void)checkCurrentFocusIndexPathWithTargetOffset:(CGPoint)arg1;
- (void)_onCurrentFocusIndexPathChangedTo:(id)arg1 tid:(id)arg2;
- (void)currentFocusIndexPathWillChanged;
- (void)reportCurrentTidStats;
- (BOOL)shouldScrollToNextVisibleCellAfterLoading:(CGRect)arg1;
- (void)scrollToNextVisibleCellAfterLoadingWithVisiableTid:(id)arg1;
- (void)scrollToPreVisibleCellAfterLoadingWithVisiableTid:(id)arg1;
- (BOOL)_isCustomAtSection:(long long)arg1;
- (id)_contentVMAtSection:(long long)arg1;
- (id)_contentVMOfTid:(id)arg1;
- (id)currentVC;
- (long long)sectionOfTid:(id)arg1;
- (int)feedViewControllerScene;
- (int)fromViewControllerScene;
- (unsigned long long)commentAndLikeScene;
- (unsigned long long)refreshTime;
- (BOOL)isDisableVideoAutoPlay;
- (void)stopPreloadWithIndexPath:(id)arg1;
- (void)_stopPreloadVideoItem:(id)arg1;
- (void)_preloadVideoItemsWithContentVMArray:(id)arg1 playedContentVMArray:(id)arg2;
- (id)_tableViewParamModelWithContentVM:(id)arg1;
- (BOOL)_shouldHandleJumpProfileUsername:(id)arg1 vatarType:(unsigned long long)arg2 contentVM:(id)arg3;
- (BOOL)_isAuthorViewer;
- (void)willPresentHalfScreen;
- (void)resumeFromHalfScreen;
- (void)setLatestAutoplayVideoTid:(id)arg1;
- (void)setTableViewScrollEnable;
- (void)onLandScapeBtnClick:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)setFeedCellDecorationViewsAlpha:(double)arg1;
- (void)setFeedCellMoreActionButtonAlpha:(double)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)exposureTime:(id)arg1 index:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)numberOfContnetVMS;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (BOOL)shouldTopPullViewTrigger:(id)arg1;
- (void)onTopPullViewTriggePull:(id)arg1;
- (BOOL)finderNotInterestedActionLogicCanShowPanel;
- (void)finderNotInterestedActionLogicSetDislikeWithContentVM:(id)arg1;
- (id)finderNotInterestedActionLogicGetContentVMAtPanStart;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)didClickFinderHandOff:(id)arg1;
- (void)makeFinderHandoffItem:(id)arg1;
- (void)onFriendsLikeListViewControllerDisappear;
- (void)onClickFriendWeChatProfile:(id)arg1;
- (void)onClickFriendLikeListDetail:(id)arg1;
- (void)onRefreshFriendUI:(id)arg1;
- (BOOL)shouldShowFirstLikeLabel;
- (BOOL)canShowMore;
- (void)onClickLikedListClickMoreActionWith:(id)arg1 ObjectId:(id)arg2;
- (void)onClickLikedListContactWithWith:(id)arg1 LikeInfo:(id)arg2 ObjectID:(id)arg3;
- (void)doBusinessWithCompletion:(id /* block */)arg1;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)wx_fansProfileViewController:(id)arg1 clickActionWithFinderContact:(id)arg2;
- (void)onClickBottomBannerView:(id)arg1 contentVM:(id)arg2 triggerByUser:(BOOL)arg3;
- (void)onCloseBottomBannerView:(id)arg1 contentVM:(id)arg2;
- (void)onShowGuideToFinderMoreRelatedView:(id)arg1;
- (void)multiMediaCellBrowsePhotoLongTime:(id)arg1;
- (void)multiMediaCell:(id)arg1 shouldPauseVideoIfSupport:(BOOL)arg2;
- (BOOL)multiMediaCell:(id)arg1 shouldShowDislikeButton:(id)arg2;
- (void)onLiveFeedDidTap:(id)arg1 routeModel:(id)arg2;
- (void)onLiveFeedStatusChanged:(id)arg1;
- (void)onFeedCellDidClickAvatar:(id)arg1 avatarType:(unsigned long long)arg2 contentVM:(id)arg3;
- (void)didFeedDoubleLikeAction:(id)arg1;
- (void)doubleClickLikeFeedContentVMAction:(id)arg1;
- (void)likeFeedContentVMAction:(id)arg1 isPrivateLike:(BOOL)arg2;
- (void)likeFeedContentVMAction:(id)arg1 isPrivateLike:(BOOL)arg2 touchPoint:(CGPoint)arg3;
- (void)showSpamTipsWithString:(id)arg1;
- (void)photoContentPageTurning:(id)arg1 currentPage:(unsigned long long)arg2 lastPage:(unsigned long long)arg3;
- (void)retryLoadingVideoResource:(BOOL)arg1;
- (void)contentMediaDidStopPlay:(unsigned long long)arg1 contentVM:(id)arg2 finderPlayerReport:(id)arg3;
- (void)contentMediaDidEndPlay:(unsigned long long)arg1 contentVM:(id)arg2 finderPlayerReport:(id)arg3;
- (void)tryAutoPlayNextFeedAfterContentVM:(id)arg1;
- (void)onFeedVideoStopPlay:(id)arg1 tid:(id)arg2;
- (id)createActionSheetWithContentVM:(id)arg1;
- (id)_actionSheetItemConfigArrayWithContentVM:(id)arg1;
- (BOOL)haveDislikeEntryWithContentVM:(id)arg1;
- (void)onLongPressMediaInCell:(id)arg1;
- (id)getFinderSurveyContextInfoForCell:(id)arg1;
- (void)onHeaderMoreClickAction:(id)arg1 shareButton:(id)arg2;
- (void)onHeaderFollowBtnClickAction:(id)arg1 followButton:(id)arg2;
- (BOOL)finderMulitMediaTableViewCellCanProgressGestureWithTid:(id)arg1;
- (BOOL)onMultiMediaCellIsInHotSpots:(id)arg1;
- (void)onMultiMediaCell:(id)arg1 videoTemplateClickAction:(id)arg2;
- (void)onImageMediaTableViewCellPlayPauseWillChange:(BOOL)arg1;
- (void)onVideoPlayWithReport:(id)arg1 mediaWrap:(id)arg2 currentIndex:(unsigned long long)arg3 forContentVM:(id)arg4;
- (void)onVideoPlayDecoderError:(id)arg1;
- (void)multiMediaCellInPicture:(id)arg1;
- (void)multiMediaCellForceToProtrait:(id)arg1;
- (BOOL)multiMediaCell:(id)arg1 isTouchPlayRateOperationV3View:(id)arg2;
- (void)multiMediaCellPlayRateView:(id)arg1 playSpeedViewWillStartAnimatedChange:(long long)arg2;
- (void)multiMediaCellPlayRateView:(id)arg1 playSpeedViewAnimatedChangeComplete:(long long)arg2;
- (void)multiMediaCell:(id)arg1 handlePortoailLongPressGesture:(id)arg2 stateModel:(id)arg3;
- (void)multiMediaCellClickTemplateCommentSuspendViewConfirmViewWithDataItem:(id)arg1 commentId:(unsigned long long)arg2;
- (BOOL)multiMediaCellCanAutoOpenJumpInfo:(id)arg1;
- (void)multiMediaCellShowPlayRate:(id)arg1;
- (void)multiMediaCell:(id)arg1 didChangePinchVideoState:(BOOL)arg2;
- (BOOL)isNoMoreDataItemAfterContentVM:(id)arg1;
- (BOOL)isLastDataItemAfterContentVM:(id)arg1;
- (void)onWillClickToolbarLikeAction:(id)arg1 isPrivateLike:(BOOL)arg2;
- (void)onClickToolbarLikeAction:(id)arg1 isPrivateLike:(BOOL)arg2;
- (void)onClickRealNameAction;
- (void)onCellTriggerAntiAddictCheckLogic;
- (void)onClickViewAllCommentAction:(id)arg1 isActiveInput:(BOOL)arg2 forceCell:(id)arg3;
- (void)onClickViewAllCommentAction:(id)arg1 isActiveInput:(BOOL)arg2 isFromCommentButton:(BOOL)arg3;
- (void)showCommentListWithContentVM:(id)arg1 shouldEnterKeyBoard:(BOOL)arg2 refCommentID:(unsigned long long)arg3 commentAction:(unsigned long long)arg4 showTitle:(BOOL)arg5 enterType:(unsigned long long)arg6 appendCommentModel:(id)arg7;
- (void)onWillClickToolbarCollectionAction:(id)arg1;
- (void)onClickToolbarCollectionAction:(id)arg1 sourceType:(int)arg2;
- (void)onClickToolbarCollectionAction:(id)arg1 actionSheet:(id)arg2 sourceType:(int)arg3;
- (void)forbidTableViewScrollingWithDuration:(double)arg1;
- (void)didFeedDoubleThumbLikeAction:(id)arg1;
- (void)handleFavoriteActionWithContentVM:(id)arg1 sourceType:(int)arg2;
- (void)onClickToolbarFeedAllLikeAction:(id)arg1;
- (void)onClickToolbarFeedAllFavAction:(id)arg1;
- (void)onClickToolbarFeedAllViewedAction:(id)arg1;
- (void)onClickToolbarRetryUploading:(id)arg1;
- (void)onClickToolbarCancelUploading:(id)arg1;
- (void)finderClickFinishedFeedNPSCell:(id)arg1;
- (void)finderDescTableViewCell:(id)arg1 clickActionType:(unsigned long long)arg2;
- (void)_pushContentPOIVCAction:(id)arg1 fromVC:(id)arg2;
- (void)clickContentPOIAction:(id)arg1 commentVC:(id)arg2;
- (void)clickContentPOIAction:(id)arg1;
- (void)_pushContentUsernameVCAction:(id)arg1 fromVC:(id)arg2;
- (void)onClickContentUsernameAction:(id)arg1 commentVC:(id)arg2;
- (void)onClickContentUsernameAction:(id)arg1;
- (void)onClickMoreRelatedTipsButton:(id)arg1;
- (void)_pushEventEntry:(id)arg1 fromVC:(id)arg2;
- (void)onClickEventEntry:(id)arg1 commentVC:(id)arg2;
- (void)onClickEventEntry:(id)arg1;
- (void)onFeedCellClickHotWord:(id)arg1;
- (void)onMultiMediaCell:(id)arg1 lastestLiveInfoClickAction:(id)arg2;
- (void)onMultiMediaCell:(id)arg1 beDisliked:(id)arg2;
- (void)onFeedContentUserFollowStateChangedWithContentVM:(id)arg1;
- (void)onFeedClickJumpInfo:(id)arg1 style:(id)arg2;
- (void)onAdFinderDialogFailedToJumpToAppDirectlyWithAppParams:(id)arg1 jumpParams:(id)arg2;
- (void)onFeedCellClickMemberShipPaymentGuideViewConfirmButtonWithContentVM:(id)arg1;
- (void)onFeedCellClickSetRingToneGuideView:(id)arg1;
- (void)onFeedCellClickHotComment:(id)arg1 contentVM:(id)arg2;
- (void)onFeedCellClickBulletCommentButton;
- (void)onReportBulletComment:(id)arg1 contentVM:(id)arg2;
- (void)onCopyBulletComment:(id)arg1 contentVM:(id)arg2;
- (void)onDeleteBulletComment:(id)arg1 contentVM:(id)arg2;
- (void)onMoreBulletComment:(id)arg1 isInBlackList:(BOOL)arg2 contentVM:(id)arg3;
- (void)onUnBlockBulletComment:(id)arg1 contentVM:(id)arg2;
- (void)onBlockBulletComment:(id)arg1 contentVM:(id)arg2;
- (void)modBlackListWithOpType:(int)arg1 bulletItem:(id)arg2 contentVM:(id)arg3 successText:(id)arg4 failText:(id)arg5;
- (void)onBulletCommentOpenStateChanged:(id)arg1;
- (void)onCommentOpenStateChanged:(BOOL)arg1;
- (void)onFeedCellClickPostComment:(id)arg1 scene:(int)arg2 contentVM:(id)arg3;
- (void)onFeedCellClickGuideMakeEmotion:(id)arg1;
- (void)onFeedCellClickMiaoJianMusic:(id)arg1 musicId:(id)arg2 tingListenId:(id)arg3;
- (void)onFeedCellClickCollectionDesc:(id)arg1;
- (void)onFinderCardWebViewControllerJumpToOthers;
- (void)onFinderCardWebViewControllerWillResume;
- (void)onFinderCardWebViewControllerWillBeClosed;
- (void)onCanvasHalfScreenViewControllerJumpToOthers;
- (void)onCanvasHalfScreenViewControllerWillResume;
- (void)onCanvasHalfScreenViewControllerWillBeClosed;
- (void)onClickAdGuideFollowBtn:(id)arg1;
- (void)onClickBigButton:(id)arg1;
- (void)onRefreshContentCellUI:(id)arg1;
- (void)onClickContentReadMoreAction:(id)arg1 isExpand:(BOOL)arg2;
- (void)onContentTableViewCell:(id)arg1 longPressContentAction:(id)arg2 rect:(CGRect)arg3;
- (void)_pushContentExtReadingWithUrl:(id)arg1 fromVC:(id)arg2;
- (void)onClickContentExtReadingAction:(id)arg1;
- (void)onClickContentExtReadingAction:(id)arg1 commentVC:(id)arg2;
- (void)_pushContentTopicVCWith:(id)arg1 dataItem:(id)arg2 fromVC:(id)arg3;
- (void)onClickContentTopicAction:(id)arg1 dataItem:(id)arg2;
- (void)onClickContentTopicAction:(id)arg1 dataItem:(id)arg2 commentVC:(id)arg3;
- (void)_pushContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3 fromVC:(id)arg4 sucBlock:(id /* block */)arg5;
- (void)onClickContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3;
- (void)onClickContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3 commentVC:(id)arg4 sucBlock:(id /* block */)arg5;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)didClickToolbarDeleteAction:(id)arg1;
- (void)deleteFeedWithContentVM:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)reportForwordWith:(id)arg1;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)scrollActionSheetDidDismiss:(id)arg1;
- (void)scrollActionSheetDidAppeared:(id)arg1;
- (void)snapshotForMinimize;
- (id)minimizeKey;
- (id)currentFeedMediaCell;
- (id)currentFeedContentVM;
- (id)snapshotImageForMedia;
- (id)viewForKeepHoldAnimation;
- (void)showPlayRatePanelTriggerByDragging:(BOOL)arg1;
- (void)showLockSpeedPlayPanel;
- (void)_showV1OperationView;
- (void)inPicture;
- (void)bulletCommentOpenStateChanged:(BOOL)arg1 itemFlag:(unsigned long long)arg2 changedScene:(long long)arg3;
- (void)bulletCommentOpenStateChanged:(BOOL)arg1 itemFlag:(unsigned long long)arg2 changedScene:(long long)arg3 openType:(unsigned long long)arg4;
- (void)onFinderDataItemPostingCommentFailBySpecialError:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
- (void)onFinderVideoPlayerStartPlay;
- (void)needsUpdateCurrentVideo:(BOOL)arg1;
- (void)resetCurrentVideoThumb;
- (void)updateCurrentVideoThumb;
- (void)onCommentDetailViewControllerDidDisappear;
- (void)clickCommentNickname:(id)arg1 username:(id)arg2 contact:(id)arg3 isWeChatFriend:(BOOL)arg4 dataItem:(id)arg5;
- (void)clickAuthorCommentAvatarWhenInProfile:(id)arg1;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)monitorView:(id)arg1 unExposedCells:(id)arg2;
- (void)monitorView:(id)arg1 unExposedItems:(id)arg2;
- (void)updateAdReportMeta:(id)arg1;
- (id)getCurrentFocusTableViewCell;
- (void)onContactClick:(id)arg1 index:(unsigned long long)arg2;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)onFinderAPNsPushBeClicked;
- (void)finderMediaVideoPreloadSuccessful:(id)arg1 mediaWrap:(id)arg2 isFirstFrameDowloadState:(BOOL)arg3;
- (void)finderPreloadStrategyUpdate;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onCurrentBGMDidEndPlay:(id)arg1;
- (void)onFeedCellPreparedMediaContent:(id)arg1;
- (void)onCurMultiMediaCellNPSFlutterShowing:(BOOL)arg1 cell:(id)arg2;
- (void)scrollToNextFeedWithContentVM:(id)arg1;
- (BOOL)shouldLiveUseMorphDismissForCustomKey:(id)arg1;
- (CGRect)liveMorphDismissTargetFrameOnScreenForCustomKey:(id)arg1 videoSize:(CGSize)arg2;
- (void)onRingToneSheetDisappear;
- (void)onRingToneSheetSetRingtoneSuccess:(long long)arg1 friendUsername:(id)arg2;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (void)onBulletCommentViewControllerDidComment:(id)arg1;
- (void)onBulletCommentViewControllerChangeBulletCommentOpenState:(BOOL)arg1;
- (id)getCurrentMediaViewCell;
- (void)onBulletCommentViewControllerClosed;
- (void)onBulletCommentViewControllerShowInputViewWithDisable;
- (id)getListenHalfAnimView;
- (unsigned long long)listenHalfScreenOption;
- (void)listenHalfScreenIsShow:(BOOL)arg1 eventType:(unsigned long long)arg2;
- (void)listenHalfScreenMoveProgress:(double)arg1 heightRatio:(double)arg2;
- (void)setHalfScreenIsShowState:(BOOL)arg1;
- (void)doShareAnimation;
- (void)restartBulletAnimationAftertransition;
- (BOOL)isAutoPlayNextFeedPageConditionOK:(BOOL)arg1;
- (unsigned long long)getHeaderRefreshMode;
- (void)liveCastViewControllerDidDismiss:(id)arg1;
- (void)addToTingListenLater:(id)arg1;
- (id)getViewController;
- (id)extInfoForSnapshotPrinter;
- (id)getNextMinimizeListPlayContentVMWithCurrentTid:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)delegate;
- (id)reportDelegate;
- (void)setReportDelegate:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)retryTipsTitle;
- (void)setRetryTipsTitle:(id)arg1;
- (id)noDataTipsTitle;
- (void)setNoDataTipsTitle:(id)arg1;
- (id)footerNoMoreTips;
- (void)setFooterNoMoreTips:(id)arg1;
- (id)latestAutoplayVideoTid;
- (id)currentFocusIndexPath;
- (void)setCurrentFocusIndexPath:(id)arg1;
- (id)lastFocusTid;
- (void)setLastFocusTid:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)actionSheet;
- (void)setActionSheet:(id)arg1;
- (BOOL)halfScreenIsShowState;
- (long long)preFetchNextPageIndex;
- (void)setPreFetchNextPageIndex:(long long)arg1;
- (long long)topPreFetchAdvanceCount;
- (void)setTopPreFetchAdvanceCount:(long long)arg1;
- (long long)topDraggingPreFetchAdvanceCount;
- (void)setTopDraggingPreFetchAdvanceCount:(long long)arg1;
- (id)playbackSpeedView;
- (void)setPlaybackSpeedView:(id)arg1;
- (id)originTitleView;
- (void)setOriginTitleView:(id)arg1;
- (id)refreshHeaderView;
- (void)setRefreshHeaderView:(id)arg1;
- (id)topPullStatusView;
- (void)setTopPullStatusView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)loadingViewContainer;
- (void)setLoadingViewContainer:(id)arg1;
- (id)stateTipsLabel;
- (void)setStateTipsLabel:(id)arg1;
- (id)retryImageView;
- (void)setRetryImageView:(id)arg1;
- (id)currentFocusTid;
- (void)setCurrentFocusTid:(id)arg1;
- (id)lastAutoplayTid;
- (void)setLastAutoplayTid:(id)arg1;
- (BOOL)isSilencePlay;
- (void)setIsSilencePlay:(BOOL)arg1;
- (void)setExposureDict:(id)arg1;
- (void)setAllExposeFeedIdSet:(id)arg1;
- (id)lastCommentVC;
- (unsigned long long)createTimestamp;
- (void)setCreateTimestamp:(unsigned long long)arg1;
- (BOOL)needsResumeTimelineVideo;
- (void)setNeedsResumeTimelineVideo:(BOOL)arg1;
- (BOOL)disableVideoAutoPlay;
- (void)setDisableVideoAutoPlay:(BOOL)arg1;
- (BOOL)feedListViewIsAppear;
- (void)setFeedListViewIsAppear:(BOOL)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (id)playTimer;
- (void)setPlayTimer:(id)arg1;
- (id)minimizeCoverImage;
- (void)setMinimizeCoverImage:(id)arg1;
- (id)minimizeSnapshotView;
- (void)setMinimizeSnapshotView:(id)arg1;
- (id /* block */)forwardActionDelayBlock;
- (void)setForwardActionDelayBlock:(id /* block */)arg1;
- (BOOL)alreadyCheckLimitModeGuide;
- (void)setAlreadyCheckLimitModeGuide:(BOOL)arg1;
- (id)enterBackgroundIndexPath;
- (void)setEnterBackgroundIndexPath:(id)arg1;
- (id)currentTidBeforeInsertAction;
- (void)setCurrentTidBeforeInsertAction:(id)arg1;
- (id)currentCellBeforeInsertAction;
- (void)setCurrentCellBeforeInsertAction:(id)arg1;
- (double)refreshHeaderViewLastAlpha;
- (void)setRefreshHeaderViewLastAlpha:(double)arg1;
- (id)originalInterfaceOrientation;
- (void)setOriginalInterfaceOrientation:(id)arg1;
- (id)startFeedId;
- (void)setStartFeedId:(id)arg1;
- (BOOL)isBlockByLimitMode;
- (void)setIsBlockByLimitMode:(BOOL)arg1;
- (void)setTimelinePostMgr:(id)arg1;
- (void)setFeedAudioHelper:(id)arg1;
- (void)setFeedPostInfoDic:(id)arg1;
- (id)operationViewV3;
- (void)setOperationViewV3:(id)arg1;
- (id)tmpLikeListVC;
- (void)setTmpLikeListVC:(id)arg1;
- (id)notInterestedLogic;
- (void)setNotInterestedLogic:(id)arg1;
- (id)emoticonCustomCreateLogic;
- (void)setEmoticonCustomCreateLogic:(id)arg1;
- (id)finderHandoffItem;
- (void)setFinderHandoffItem:(id)arg1;
- (void)setLandscapeReportInfo:(id)arg1;
- (BOOL)cancelSpeedViewAnimateBlock;
- (void)setCancelSpeedViewAnimateBlock:(BOOL)arg1;
- (void).cxx_destruct;
@end

