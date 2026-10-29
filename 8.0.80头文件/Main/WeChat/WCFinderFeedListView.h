@interface WCFinderFeedListView : UIView <WCFinderFeedListTransitionHelperBehavior, WCFinderMinimizeDelegate, WCFinderFeedListTransitionInnserScrollViewProvider, UITableViewDelegate, UITableViewDataSource, WCFinderRefreshTableFooterViewDelegate, MMScrollActionSheetDelegate, WCActionSheetDelegate, WCFinderFeedFriendsLikeListViewControllerDelegate, WCFinderPostingCommentExt, WCFinderContentTableViewCellDelegate, WCFinderFeedNPSCellDelegate, WCFinderDescTableViewCellDelegate, WCFinderFeedShopTableViewCellDelegate, WCFinderCommentDetailViewControllerDelegate, WCFinderFeedListDownLoadExt, WCGeneralMonitorDelegate, WCFinderFullMultiMediaTableViewCellDelegate, MMFinderMenuActionDelegate, WCFinderCardWebViewControllerDelegate, WCCanvasHalfScreenViewControllerDelegate, WCAdFinderDialogViewControllerDelegate, ForwardMessageLogicDelegate, WCFinderAppPushExt, MMLiveMorphDismissTarget, RingBackInfoDisplaySheetViewDelegate, RecentForwardScrollViewDelegate, WCFinderHalfScreenProtocol, WCFinderPreloadStrategyExt, EGORefreshTableHeaderDelegate, WCFinderTopPullStatusViewDelegate, MMFinderLiveCastViewControllerExt, WCFinderPostMgrDelegate, WCFinderFansProfileViewControllerDelegate, SnapshotPrinterViewProtocol, WCFinderActionSheetDelegate, MMUIViewControllerDelegate, WCFinderLiteAppStoreKeyExt, WCFinderMinimizeListProtocol, MMScrollMetricsDelegate, MMScreenShotExt, WCFinderPagingTableVoiceOverDataSource, WCFinderFeedDislikeExt, WCFinderKeepHolderProtocol>
{
    BOOL _halfScreenIsShowState; // +0x8
    BOOL _isSilencePlay; // +0x9
    BOOL _needsResumeTimelineVideo; // +0xa
    BOOL _disableVideoAutoPlay; // +0xb
    BOOL _feedListViewIsAppear; // +0xc
    BOOL _allowsResourceLoading; // +0xd
    BOOL _alreadyCheckLimitModeGuide; // +0xe
    BOOL _isBlockByLimitMode; // +0xf
    BOOL _isPIPVideoPlaying; // +0x10
    id <WCFinderFeedListViewDataSource> _dataSource; // +0x18
    id <WCFinderFeedListViewDelegate> _delegate; // +0x20
    id <WCFinderFeedListViewReportDelegate> _reportDelegate; // +0x28
    UITableView * _tableView; // +0x30
    NSString * _retryTipsTitle; // +0x38
    NSString * _noDataTipsTitle; // +0x40
    NSString * _footerNoMoreTips; // +0x48
    NSString * _latestAutoplayVideoTid; // +0x50
    NSString * _currentFocusTid; // +0x58
    NSIndexPath * _currentFocusIndexPath; // +0x60
    NSString * _lastFocusTid; // +0x68
    WCFinderRefreshTableFooterView * _footerView; // +0x70
    WCFinderScrollActionSheet * _actionSheet; // +0x78
    long long _preFetchNextPageIndex; // +0x80
    long long _topPreFetchAdvanceCount; // +0x88
    long long _topDraggingPreFetchAdvanceCount; // +0x90
    WCFinderPagingTableVoiceOverHelper * _voiceOverHelper; // +0x98
    WCFinderPlaybackSpeedPresenter * _playbackSpeedPresenter; // +0xa0
    WCFinderPullDownRefreshHeaderView * _refreshHeaderView; // +0xa8
    WCFinderTopPullStatusView * _topPullStatusView; // +0xb0
    WCFinderAnimationLoadingView * _loadingView; // +0xb8
    UIView * _loadingViewContainer; // +0xc0
    UILabel * _stateTipsLabel; // +0xc8
    UIImageView * _retryImageView; // +0xd0
    NSString * _lastAutoplayTid; // +0xd8
    NSMutableDictionary * _exposureDict; // +0xe0
    NSMutableSet * _allExposeFeedIdSet; // +0xe8
    UIViewController<WCFinderCommentBaseViewProtocol> * _lastCommentVC; // +0xf0
    MMScrollViewProxy * _scrollProxy; // +0xf8
    NSString * _lastScrollReportFPSTid; // +0x100
    unsigned long long _lastScrollEndDraggingTimestamp; // +0x108
    unsigned long long _createTimestamp; // +0x110
    NSArray * _preloadMediaWraps; // +0x118
    unsigned long long _preloadVersion; // +0x120
    NSMutableDictionary * _imageDownloadOperationsByContentTid; // +0x128
    unsigned long long _enterTime; // +0x130
    MMTimer * _playTimer; // +0x138
    UIImage * _minimizeCoverImage; // +0x140
    UIView * _minimizeSnapshotView; // +0x148
    id /* block */ _forwardActionDelayBlock; // +0x150
    NSIndexPath * _enterBackgroundIndexPath; // +0x158
    NSString * _currentTidBeforeInsertAction; // +0x160
    UITableViewCell * _currentCellBeforeInsertAction; // +0x168
    double _refreshHeaderViewLastAlpha; // +0x170
    NSNumber * _originalInterfaceOrientation; // +0x178
    NSString * _startFeedId; // +0x180
    WCFinderPostMgr * _timelinePostMgr; // +0x188
    WCFinderFeedAudioHelper * _feedAudioHelper; // +0x190
    NSMutableDictionary * _feedPostInfoDic; // +0x198
    WCFinderPlayRateSelectPanelView * _playrateSelectPanelView; // +0x1a0
    WCFinderPlayRateOperationView * _operationView; // +0x1a8
    WCFinderFeedFriendsLikeListBaseViewController * _tmpLikeListVC; // +0x1b0
    EmoticonCustomCreateLogic * _emoticonCustomCreateLogic; // +0x1b8
    MMFinderHandOffItem * _finderHandoffItem; // +0x1c0
    WCFinderLandscapeReportInfo * _landscapeReportInfo; // +0x1c8
    _TtC6WeChat25WCFinderFeedFastSlipLogic * _fastSlipLogic; // +0x1d0
    WCFinderFeedLiveCardFastSlipLogic * _liveCardFastSlipLogic; // +0x1d8
}
+ (void)configViewController:(id)arg1;
+ (id)transitionDelegateMgr;
+ (double)standardOverlayBottomInsetForTableView:(id)arg1 focusIndexPath:(id)arg2;
- (void)setupSpeedPlayViewIfNeeded;
- (void)changeNaviTitleWithCurrentPlayRate:(double)arg1;
- (void)animatedShowPlayRateResultWithRate:(double)arg1 isTouch:(BOOL)arg2;
- (void)checkRedDotReadAction;
- (void)triggerSharedLeaveUnreadFinderSync;
- (void)onFeedShowPostEntranceByContentVM:(id)arg1 enterScene:(unsigned long long)arg2 postType:(unsigned long long)arg3;
- (void)updateFeedPostInfoBy:(id)arg1 onLoadingState:(BOOL)arg2;
- (BOOL)feedPostIsOnLoadingStateBy:(id)arg1;
- (void)updateFeedPostInfoBy:(id)arg1 musicInfo:(id)arg2;
- (id)feedPostMusicInfoBy:(id)arg1;
- (void)postMgrWillPresentCamera:(id)arg1;
- (void)postMgrDidDismissCamera:(id)arg1;
- (id)onPostFollowMusicFeedId:(id)arg1;
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
- (BOOL)shouldStartNoneEdgeSwipeGestureWithPoint:(CGPoint)arg1;
- (BOOL)shouldStartEdgeSwipeGestureWithPoint:(CGPoint)arg1;
- (BOOL)shouldShowMinimizeQuickSwapeEntranceForVC:(id)arg1 userInfo:(id)arg2;
- (BOOL)shouldUseMinimizeAnimationFromVC:(id)arg1 toVC:(id)arg2 isClosure:(BOOL)arg3;
- (BOOL)enableDragDownToCloseForVC:(id)arg1;
- (BOOL)shouldDragDownCloseInvokeForVC:(id)arg1;
- (id)transitionHelperFetchCurrentPlayTid;
- (id)transitionHelperFetchCurrentPlayContentVM;
- (BOOL)shouldGestureClosureAsCardForVC:(id)arg1 userInfo:(id)arg2;
- (BOOL)shouldDragDownAsCardForVC:(id)arg1 userInfo:(id)arg2;
- (BOOL)shouldTransitionProvider:(id)arg1 requestFailedToOther:(id)arg2;
- (BOOL)enablePushSwipeGestureForViewController:(id)arg1;
- (id)pushSwipeGestureDestinationForViewController:(id)arg1;
- (void)pushSwipeGestureTransitionWillBegin;
- (void)pushSwipeGestureTransitionEndWithComplete:(BOOL)arg1;
- (BOOL)pushSwipeGestureShouldBeginWithLocation:(CGPoint)arg1;
- (void)_minimizeFinderFeedListWillAppear;
- (BOOL)_supportMinimize:(id *)arg1;
- (BOOL)enableMinimize;
- (void)updateNavMinimizeItem;
- (void)_updateNavigationItemWithViewWithDisplay:(BOOL)arg1;
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
- (BOOL)shouldMinimizeImediatelyWhenPageClose:(id)arg1;
- (void)onMinimizeRestoreContentViewCompleted;
- (BOOL)shouldAutoMinimizeWhenPopOrDismiss;
- (id)minimizePlayInfo:(BOOL)arg1;
- (void)updateFloatContentMinimizePlayInfo:(id)arg1;
- (void)updateMsgButtonReportInfo;
- (void)updateMinimizePlayInfo;
- (void)onClickMinimizeButton;
- (void)minimizeOnFocusChangedWithContentTid:(id)arg1;
- (id)fetchCurrentPlayDataItemThenPause:(double *)arg1;
- (id)finderFetchTransitionInnerScrollView;
- (double)standardOverlayBottomInset;
- (id)fastSlipLogic;
- (BOOL)isFriendHighEntropyDetailScene;
- (id)currentFriendHighEntropyDetailTempModel;
- (void)markFriendHighEntropyDetailExposeEndType:(int)arg1;
- (void)markFriendHighEntropyDetailExposeEndTypeIfNeeded:(int)arg1;
- (void)clearFriendHighEntropyDetailExposeEndType;
- (int)currentFriendHighEntropyDetailExposeEndType;
- (void)updateFriendHighEntropyDetailExposeEndTypeWithTargetIndexPath:(id)arg1;
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
- (BOOL)shouldSkipRotation:(BOOL)arg1;
- (void)adjustPortraitUIIfNeeded;
- (void)layoutSubviews;
- (BOOL)_didCurrentVCBePopedOrDismissed;
- (void)finderFeedListWillBePushed;
- (void)finderFeedListDidAppear;
- (void)finderFeedListDidAppearWithoutAutoPlay;
- (void)_finderFeedListDidAppearWithAutoPlay:(BOOL)arg1;
- (void)tryUpdateNavigationBarHidden:(BOOL)arg1;
- (void)tryUpdateNavigationBarHidden:(BOOL)arg1 isLandscape:(BOOL)arg2;
- (void)tryShowLimitModeView;
- (void)appendContentVMFromSectionIndex:(long long)arg1 toSectionIndex:(long long)arg2;
- (void)modifyContentVMWithDiffResult:(id)arg1;
- (void)modifyContentVMWithDeletes:(id)arg1 inserts:(id)arg2 updates:(id)arg3;
- (BOOL)_shouldKeepLocationForRemoves:(id)arg1 inserts:(id)arg2 visitableIndexPath:(id)arg3;
- (int)_tlFollowEnterType;
- (id)_tlFollowUdfKV;
- (void)performUpdateWithoutKeepLocation:(BOOL)arg1 block:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)deleteContentVMWithContentVM:(id)arg1 section:(long long)arg2;
- (void)reloadToolBarUIWithContentVM:(id)arg1 atSection:(long long)arg2;
- (void)finderFeedListViewStopCurrentFeedPlay;
- (void)finderFeedListViewPauseCurrentFeedPlay;
- (void)finderFeedListViewResumeCurrentFeedPlay;
- (void)finderFeedListViewPauseFeedPlayWithTid:(id)arg1;
- (void)scrollToContentVM:(id)arg1 animated:(BOOL)arg2;
- (void)scrollToNextContentVM:(id)arg1 animated:(BOOL)arg2;
- (void)scrollToNextContentVM:(id)arg1 animated:(BOOL)arg2 limitMediaType:(unsigned long long)arg3;
- (void)tryLoadMoreToNextContentVM;
- (void)finderReloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (CGPoint)headerViewOrigin;
- (CGPoint)footerViewOrigin;
- (BOOL)shouldKeepPlayingDuringSwipePushTransition;
- (unsigned long long)supportedInterfaceOrientationsWithVCMask:(unsigned long long)arg1;
- (void)addObserverForForegroundNotification;
- (void)removeObserverForForegroundNotification;
- (void)addScreenshotNotification;
- (void)removeScreenshotNotification;
- (void)setFeedListViewUserInteractionEnabled:(BOOL)arg1;
- (BOOL)_isCurrentVCVisibleOnScreen;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)triggerCellEnterForegroundAction;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)ensureEnterBackground;
- (void)triggerCellEnterBackgroundAction;
- (void)triggerAntiAddictionCellEnterBackground;
- (void)triggerAntiAddictionCellEnterForeground;
- (void)onVideoPIPStart:(id)arg1;
- (void)onVideoPIPStop:(id)arg1;
- (void)onUserDidTakeScreenshot;
- (void)saveIndexPathBeforeEnterBackground;
- (void)setUsedTaskData:(id)arg1;
- (void)addOrUpdateUsedTaskData;
- (void)stopCurrentMediaAndSnapCapture;
- (void)updateCurrentSnapCapture;
- (void)stopCurrentMedia;
- (void)pauseCurrentMediaWithShowPauseBtn:(BOOL)arg1;
- (void)checkAndResetPlayHalfState;
- (void)resumeCurrentMedia;
- (void)stopCellMediaOfSection:(long long)arg1;
- (void)pauseCellMediaOfSection:(long long)arg1;
- (void)preloadVideoItems;
- (id)resourceLoadingIndexPath;
- (void)startImageLoadingForContentVM:(id)arg1;
- (void)stopImageLoadingForContentTid:(id)arg1;
- (void)stopResourceLoading;
- (void)preloadVideoItemsWithCurrentIndexPath:(id)arg1;
- (id)getNeedPreloadItemsWithCurrentIndexPath:(id)arg1;
- (void)checkPreCreateVideoItems;
- (void)preloadNextPageDatasWithWillDisplayIndexPath:(id)arg1;
- (void)onFeedCellHotAreaAndAutoPlay;
- (void)adjustHotAreaAndAutoPlay;
- (void)_adjustHotAreaAndAutoPlayWithTableViewContentOffset;
- (void)_adjustHotAreaAndAutoPlayWithTargetOffset:(CGPoint)arg1;
- (void)pourStateIntoPoolWithContentVM:(id)arg1;
- (double)feedStayActualPlayingTimeDeltaInMs:(double)arg1 baselineTimeInMs:(double)arg2;
- (double)feedStayActualPlayingTimeForReportInMsWithContentVM:(id)arg1 actualPlayingTimeInMs:(double)arg2 metaActualPlayingTimeInMs:(double)arg3;
- (double)feedStayActualPlayingTimeInMsWithContentVM:(id)arg1;
- (void)startFeedStayWithContentVM:(id)arg1;
- (void)pauseFeedStayForPIPWithContentVM:(id)arg1 actualPlayingTimeInMs:(double)arg2;
- (void)resumeFeedStayAfterPIPWithContentVM:(id)arg1 actualPlayingTimeInMs:(double)arg2;
- (double)feedStaySegmentDurationInMsWithContentVM:(id)arg1 actualPlayingTimeInMs:(double)arg2 currentTimeInMs:(double)arg3;
- (void)updateCurCellMetaModelExposeInfo:(id)arg1;
- (void)autoPlayVideoWithTargetOffset:(CGPoint)arg1;
- (void)playVideoAtIndexPath:(id)arg1;
- (void)checkShouldScrollToNextFeedWithDelay:(id)arg1;
- (void)updateGlobalPlaybackInfo;
- (void)playCurrentIndexFeed;
- (void)checkCurrentFocusIndexPathWithTargetOffset:(CGPoint)arg1;
- (void)_onCurrentFocusIndexPathChangedTo:(id)arg1 tid:(id)arg2;
- (void)currentFocusIndexPathWillChanged;
- (void)_cancelCurrentLongPressSpeedPlayIfNeeded;
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
- (BOOL)enableMixing;
- (void)onLandScapeBtnClick:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)refreshHeadOnScrolltoTop;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)setFeedCellDecorationViewsTranslucent:(BOOL)arg1;
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
- (void)multiMediaCell:(id)arg1 shouldPauseVideoIfSupport:(BOOL)arg2 pauseType:(long long)arg3;
- (void)onClickListenVideoButton:(id)arg1 contentVM:(id)arg2;
- (void)onLiveFeedDidTap:(id)arg1 routeModel:(id)arg2;
- (void)onLiveFeedStatusChanged:(id)arg1;
- (void)onFeedCellDidClickAvatar:(id)arg1 avatarType:(unsigned long long)arg2 contentVM:(id)arg3 cell:(id)arg4 jumpInfo:(id)arg5;
- (void)_reportFeedAvatarClickWithContentVM:(id)arg1 avatarType:(unsigned long long)arg2;
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
- (BOOL)canShowAutoScrollItem;
- (id)_actionSheetItemConfigArrayWithContentVM:(id)arg1;
- (unsigned long long)getScrollActionSheetOptions;
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
- (void)multiMediaCell:(id)arg1 didConfirmPlayRate:(long long)arg2;
- (void)multiMediaCell:(id)arg1 handlePortoailLongPressGesture:(id)arg2 stateModel:(id)arg3;
- (void)multiMediaCellClickTemplateCommentSuspendViewConfirmViewWithDataItem:(id)arg1 commentId:(unsigned long long)arg2;
- (BOOL)multiMediaCellCanAutoOpenJumpInfo:(id)arg1;
- (void)multiMediaCellShowPlayRate:(id)arg1;
- (void)multiMediaCell:(id)arg1 didChangePinchVideoState:(BOOL)arg2;
- (BOOL)isMultiMediaCellFocused:(id)arg1;
- (BOOL)isNoMoreDataItemAfterContentVM:(id)arg1;
- (BOOL)isLastDataItemAfterContentVM:(id)arg1;
- (void)multiMediaCell:(id)arg1 contentVM:(id)arg2 composeCommentWithImage:(id)arg3;
- (BOOL)multiMediaCell:(id)arg1 contentVM:(id)arg2 showStickerAdPreviewMeta:(id)arg3 showComplection:(id /* block */)arg4 cancelBlock:(id /* block */)arg5;
- (BOOL)cantShotADStickerFeed;
- (BOOL)multiMediaCellDisableSetRate:(id)arg1 contentVM:(id)arg2;
- (void)onWillClickToolbarLikeAction:(id)arg1 isPrivateLike:(BOOL)arg2;
- (void)onClickToolbarLikeAction:(id)arg1 isPrivateLike:(BOOL)arg2;
- (void)onClickRealNameAction;
- (void)onCellTriggerAntiAddictCheckLogic;
- (void)onClickViewAllCommentAction:(id)arg1 isActiveInput:(BOOL)arg2 forceCell:(id)arg3;
- (void)onClickViewAllCommentAction:(id)arg1 isActiveInput:(BOOL)arg2 isFromCommentButton:(BOOL)arg3;
- (BOOL)forceCloseCommentListView;
- (void)showCommentListWithContentVM:(id)arg1 shouldEnterKeyBoard:(BOOL)arg2 enterParams:(id)arg3 commentAction:(unsigned long long)arg4 enterType:(unsigned long long)arg5 appendCommentModel:(id)arg6;
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
- (void)feedShopCell:(id)arg1 clickActionType:(unsigned long long)arg2 contentVM:(id)arg3 reportBuffer:(id)arg4;
- (id)feedShopCellGetCurrentNavigationController;
- (void)_pushContentPOIVCAction:(id)arg1 fromVC:(id)arg2;
- (void)clickContentPOIAction:(id)arg1 commentVC:(id)arg2;
- (void)clickContentPOIAction:(id)arg1;
- (void)_pushContentUsernameVCAction:(id)arg1 fromVC:(id)arg2;
- (void)onClickThankForShareButtonWithThank:(BOOL)arg1;
- (void)onClickContentUsernameAction:(id)arg1 commentVC:(id)arg2;
- (void)onClickContentUsernameAction:(id)arg1;
- (void)onClickBottomAreaTipsButton:(id)arg1;
- (void)_pushEventEntry:(id)arg1 fromVC:(id)arg2;
- (void)onClickEventEntry:(id)arg1 commentVC:(id)arg2;
- (void)onClickEventEntry:(id)arg1;
- (void)onFeedCellClickHotWord:(id)arg1;
- (void)onMultiMediaCell:(id)arg1 lastestLiveInfoClickAction:(id)arg2;
- (void)onMultiMediaCell:(id)arg1 beDisliked:(id)arg2;
- (void)onFinderFeedDislikeCancelled:(id)arg1;
- (void)onFinderFeedDislikeConfirmed:(id)arg1;
- (void)onFeedContentUserFollowStateChangedWithContentVM:(id)arg1;
- (void)onFeedClickJumpInfo:(id)arg1 style:(id)arg2;
- (void)onFeedClickJumpInfo:(id)arg1 style:(id)arg2 clickTraceId:(id)arg3;
- (void)onAdFinderDialogFailedToJumpToAppDirectlyWithAppParams:(id)arg1 jumpParams:(id)arg2;
- (void)onFeedCellClickMemberShipPaymentGuideViewConfirmButtonWithContentVM:(id)arg1;
- (void)onFeedCellClickSetRingToneGuideView:(id)arg1;
- (void)onFeedCellClickHotComment:(id)arg1 contentVM:(id)arg2 enterType:(unsigned long long)arg3;
- (void)onFeedCellTriggerBulletCommentWithReplyCommentInfo:(id)arg1;
- (void)onReportBulletComment:(id)arg1 contentVM:(id)arg2;
- (void)onDeleteBulletComment:(id)arg1 contentVM:(id)arg2;
- (void)onMoreBulletComment:(id)arg1 isInBlackList:(BOOL)arg2 isAuthorScene:(BOOL)arg3 contentVM:(id)arg4;
- (void)onUnBlockBulletComment:(id)arg1 contentVM:(id)arg2;
- (void)onBlockBulletComment:(id)arg1 contentVM:(id)arg2;
- (void)modBlackListWithOpType:(int)arg1 commentInfo:(id)arg2 contentVM:(id)arg3 successText:(id)arg4 failText:(id)arg5;
- (void)onBulletCommentOpenStateChanged:(id)arg1;
- (void)onFeedCellClickPostComment:(id)arg1 scene:(int)arg2 contentVM:(id)arg3;
- (void)onFeedCellClickGuideMakeEmotion:(id)arg1;
- (void)onFeedCellClickMiaoJianMusic:(id)arg1 musicId:(id)arg2 tingListenId:(id)arg3;
- (void)onFeedCellClickSeeLater:(id)arg1;
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
- (id)currentMinimizationTaskBizKey;
- (id)currentMinimizationTaskBizName;
- (id)minimizeKey;
- (id)currentFeedMediaCell;
- (id)currentFeedContentVM;
- (id)snapshotImageForMedia;
- (id)viewForKeepHoldAnimation;
- (void)showPlayRatePanel;
- (void)showLockSpeedPlayPanel;
- (void)_showV1OperationView;
- (void)inPicture;
- (void)bulletCommentOpenStateChanged:(BOOL)arg1 itemFlag:(unsigned long long)arg2 changedScene:(long long)arg3;
- (void)bulletCommentOpenStateChanged:(BOOL)arg1 itemFlag:(unsigned long long)arg2 changedScene:(long long)arg3 openType:(unsigned long long)arg4;
- (id)finderFeedbackCustomQuery:(id)arg1;
- (void)onFinderDataItemPostingCommentFailBySpecialError:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
- (void)onFinderVideoPlayerStartPlay;
- (void)needsUpdateCurrentVideo:(BOOL)arg1;
- (void)resetCurrentVideoThumb;
- (void)updateCurrentVideoThumb;
- (void)onCommentDetailViewControllerDidDisappear;
- (void)commentDetailViewController:(id)arg1 didInsertPostCommentWithTid:(id)arg2;
- (BOOL)_shouldShowHalfScreenProfileForDataItem:(id)arg1;
- (void)clickCommentNickname:(id)arg1 username:(id)arg2 contact:(id)arg3 isWeChatFriend:(BOOL)arg4 dataItem:(id)arg5;
- (void)clickAuthorCommentAvatarWhenInProfile:(id)arg1;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)monitorView:(id)arg1 unExposedCells:(id)arg2;
- (void)monitorView:(id)arg1 unExposedItems:(id)arg2;
- (void)updateAdReportMeta:(id)arg1;
- (id)getCurrentFocusTableViewCell;
- (id)accessibilityElements;
- (BOOL)accessibilityScroll:(long long)arg1;
- (id)voiceOverTableView;
- (id)voiceOverCurrentFocusIndexPath;
- (long long)voiceOverTotalSections;
- (void)voiceOverDidScrollToSection:(long long)arg1;
- (BOOL)isLiveRoomFocused;
- (void)onContactClick:(id)arg1 index:(unsigned long long)arg2;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)onFinderAPNsPushBeClicked;
- (void)finderMediaVideoPreloadSuccessful:(id)arg1 mediaWrap:(id)arg2 isFirstFrameDowloadState:(BOOL)arg3;
- (void)finderPreloadStrategyUpdate;
- (BOOL)canShowSwipEdu;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)onCurrentBGMDidEndPlay:(id)arg1;
- (void)onClickCommonTipsViewWithType:(unsigned long long)arg1 contentVM:(id)arg2;
- (BOOL)canShowAutoScrollSheetTips:(id)arg1;
- (void)onFeedCellPreparedMediaContent:(id)arg1;
- (void)onCurMultiMediaCellNPSFlutterShowing:(BOOL)arg1 cell:(id)arg2;
- (void)scrollToNextFeedWithContentVM:(id)arg1;
- (BOOL)shouldLiveUseMorphDismissForCustomKey:(id)arg1;
- (CGRect)liveMorphDismissTargetFrameOnScreenForCustomKey:(id)arg1 videoSize:(CGSize)arg2;
- (id)liveMorphDismissTargetExtraConfigForCustomKey:(id)arg1;
- (void)onRingToneSheetDisappear;
- (void)onRingToneSheetSetRingtoneSuccess:(long long)arg1 friendUsername:(id)arg2;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (id)getCurrentMediaViewCell;
- (id)getCurrentFocusFullCell;
- (id)getCurrentLiveRoomCell;
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
- (void)gotoFinderAudioFromOuterButton:(id)arg1;
- (void)_openAudioMainFeedWithAudioItem:(id)arg1 contentVM:(id)arg2 sourceControl:(id)arg3;
- (void)_waitForAudioInfoAndJump:(id)arg1;
- (void)addToTingListenLater:(id)arg1;
- (id)getViewController;
- (id)extInfoForSnapshotPrinter;
- (id)getNextMinimizeListPlayContentVMWithCurrentTid:(id)arg1;
- (void)liteAppStoreShowCommentListWithContentVM:(id)arg1;
- (void)liteAppStoreShowCommentHeatUpGuideWithContentVM:(id)arg1;
- (void)onCreateScreenShotInfo:(id *)arg1;
- (void)onMMScrollMetricsWillCollect:(id)arg1;
- (void)onMMScrollMetricsDidCollected:(id)arg1;
- (void)performActionWithContentVM:(id)arg1 actionParams:(id)arg2;
- (void)_complainFeedWithContentVM:(id)arg1;
- (void)_showProfileWithContentVM:(id)arg1 username:(id)arg2 avatarType:(unsigned long long)arg3;
- (void)tryShowDislikeTipsIfNeeded;
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
- (id)currentFocusTid;
- (void)setCurrentFocusTid:(id)arg1;
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
- (id)voiceOverHelper;
- (void)setVoiceOverHelper:(id)arg1;
- (id)playbackSpeedPresenter;
- (void)setPlaybackSpeedPresenter:(id)arg1;
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
- (id)lastAutoplayTid;
- (void)setLastAutoplayTid:(id)arg1;
- (BOOL)isSilencePlay;
- (void)setIsSilencePlay:(BOOL)arg1;
- (void)setExposureDict:(id)arg1;
- (void)setAllExposeFeedIdSet:(id)arg1;
- (id)lastCommentVC;
- (id)scrollProxy;
- (void)setScrollProxy:(id)arg1;
- (id)lastScrollReportFPSTid;
- (void)setLastScrollReportFPSTid:(id)arg1;
- (unsigned long long)lastScrollEndDraggingTimestamp;
- (void)setLastScrollEndDraggingTimestamp:(unsigned long long)arg1;
- (unsigned long long)createTimestamp;
- (void)setCreateTimestamp:(unsigned long long)arg1;
- (BOOL)needsResumeTimelineVideo;
- (void)setNeedsResumeTimelineVideo:(BOOL)arg1;
- (BOOL)disableVideoAutoPlay;
- (void)setDisableVideoAutoPlay:(BOOL)arg1;
- (BOOL)feedListViewIsAppear;
- (void)setFeedListViewIsAppear:(BOOL)arg1;
- (BOOL)allowsResourceLoading;
- (void)setAllowsResourceLoading:(BOOL)arg1;
- (id)preloadMediaWraps;
- (void)setPreloadMediaWraps:(id)arg1;
- (unsigned long long)preloadVersion;
- (void)setPreloadVersion:(unsigned long long)arg1;
- (id)imageDownloadOperationsByContentTid;
- (void)setImageDownloadOperationsByContentTid:(id)arg1;
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
- (id)playrateSelectPanelView;
- (void)setPlayrateSelectPanelView:(id)arg1;
- (id)operationView;
- (void)setOperationView:(id)arg1;
- (id)tmpLikeListVC;
- (void)setTmpLikeListVC:(id)arg1;
- (id)emoticonCustomCreateLogic;
- (void)setEmoticonCustomCreateLogic:(id)arg1;
- (id)finderHandoffItem;
- (void)setFinderHandoffItem:(id)arg1;
- (void)setLandscapeReportInfo:(id)arg1;
- (BOOL)isPIPVideoPlaying;
- (void)setIsPIPVideoPlaying:(BOOL)arg1;
- (void)setFastSlipLogic:(id)arg1;
- (id)liveCardFastSlipLogic;
- (void)setLiveCardFastSlipLogic:(id)arg1;
- (void).cxx_destruct;
@end
