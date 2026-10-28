@interface WCFinderTLBaseViewController : MMUIViewController <WCFinderCustomPagingDelegate, UITableViewDelegate, UITableViewDataSource, WCFinderRefreshTableFooterViewDelegate, EGORefreshTableHeaderDelegate, WCCommitViewResultDelegate, WCFinderRedDotNotifyExt, WCFinderFullMultiMediaTableViewCellDelegate, WCActionSheetDelegate, MMScrollActionSheetDelegate, WCFinderPostingCommentExt, WCFinderCommentDetailViewControllerDelegate, WCFinderRedDotExt, WCFinderFeedBaseViewControllerProtocol, WCFinderFeedContentVMExt, WCFinderStreamProfileExt, WCFinderFeedListDownLoadExt, WCGeneralMonitorDelegate, WCFinderCardWebViewControllerDelegate, WCAdFinderDialogViewControllerDelegate, WCCanvasHalfScreenViewControllerDelegate, MMFinderMenuActionDelegate, RecentForwardScrollViewDelegate, WCFinderFeedDownloadExt, WCFinderPreloadStrategyExt, ForwardMessageLogicDelegate, WCFinderTimelineTipsBubbleProtocol, MMLiveMorphDismissTarget, PAGViewListener, RingBackInfoDisplaySheetViewDelegate, WCFinderFeedNPSCellDelegate, WCFinderNpsSurveyContextInfoDelegate, WCFinderDescTableViewCellDelegate, WCFinderFeedShopTableViewCellDelegate, WCFinderMsgBubbleMgrPanelViewDelegate, WCFinderTLUnreadModelExt, WCFinderPostViewControllerDelegate, WCFinderFeedFriendsLikeListViewControllerDelegate, WCFinderBulletCommentViewControllerDelegate, WCFinderHalfScreenProtocol, WCFinderTabViewControllerExt, MMTipsViewControllerDelegate, MMFinderLiveCastViewControllerExt, WCFinderFansProfileViewControllerDelegate, WCFinderFeedDragUpDislikeControllerDelegate, WCFinderNotifyActionExt, WCFinderLeadToOtherTabTableViewCellDelegate, SnapshotPrinterViewProtocol, WCFinderActionSheetBulletAuthorDelegate, WCFinderPersonalizedSettingExt, WCFinderLiteAppStoreKeyExt, WCFinderMinimizeListProtocol, MMScrollMetricsDelegate, WCFinderColumnTableViewCellDelegate, WCFinderTabViewControllerProtocol, WCFinderFeedBaseViewControllerProtocol, WCFinderPullDownRefreshHeaderViewStatusDelegate, WCFinderTimelineJumpViewDelegate>
{
    BOOL _isViewWillAppeaer; // +0x70
    BOOL _isDisableVideoAutoPlay; // +0x71
    BOOL _footerNoMoreData; // +0x72
    BOOL _needsResumeTimelineVideo; // +0x73
    BOOL _isEnableMarkRead; // +0x74
    BOOL _hasFetchData; // +0x75
    BOOL _alreadyShownScrollUpGuideAnimationView; // +0x76
    BOOL _isPIPVideoPlaying; // +0x77
    BOOL _postFeedInsertMachineTab; // +0x78
    id <WCFinderTimelineTabDelegateProtocol> _delegate; // +0x80
    WCFinderCustomPaging * _customPagingHelper; // +0x88
    UITableView * _tableView; // +0x90
    MMScrollViewProxy * _scrollProxy; // +0x98
    NSMutableDictionary * _exposureDict; // +0xa0
    WCStoryTouchToDismissView * _scrollUpGuideAnimationMaskView; // +0xa8
    PAGView * _scrollUpGuideAnimationView; // +0xb0
    MMUILabel * _scrollUpGuideLabel; // +0xb8
    _TtC6WeChat25WCFinderFeedFastSlipLogic * _fastSlipLogic; // +0xc0
    WCFinderRefreshTableFooterView * _footerView; // +0xc8
    UIImageView * _retryImageView; // +0xd0
    UILabel * _stateTipsLabel; // +0xd8
    UITapGestureRecognizer * _stateRetryGesture; // +0xe0
    WCFinderMsgBubbleMgrPanelView * _msgBubblePanelView; // +0xe8
    WCFinderLandscapeReportInfo * _landscapeReportInfo; // +0xf0
    UIView * _maskView; // +0xf8
    NSString * _currentForceTid; // +0x100
    NSString * _latestAutoplayVideoTid; // +0x108
    NSIndexPath * _preForceIndexPath; // +0x110
    NSIndexPath * _currentForceIndexPath; // +0x118
    NSString * _lastStayFeedTidBeforeTopRefresh; // +0x120
    NSString * _lastTidBeforeScrollToTop; // +0x128
    WCFinderPullDownRefreshHeaderView * _refreshHeaderView; // +0x130
    UIViewController<WCFinderCommentBaseViewProtocol> * _lastCommentVC; // +0x138
    NSString * _currentVideoTid; // +0x140
    long long _tabLastAnchorSecond; // +0x148
    double _refreshHeaderViewLastAlpha; // +0x150
    unsigned long long _enterTime; // +0x158
    WCFinderScrollActionSheet * _currentActionSheet; // +0x160
    UIImage * _minimizeCoverImage; // +0x168
    UIView * _minimizeSnapshotView; // +0x170
    id /* block */ _forwardActionDelayBlock; // +0x178
    WCFinderTLUnreadModel * _unreadModel; // +0x180
    WCFinderRedDotCtrlInfo * _findEntryRedDotCtrl; // +0x188
    MMTipsViewController * _shareToSnsTips; // +0x190
    WCFinderPlayRateOperationView * _operationView; // +0x198
    WCFinderPlayRateSelectPanelView * _operationViewV3; // +0x1a0
    WCFinderFeedFriendsLikeListBaseViewController * _tmpLikeListVC; // +0x1a8
    WCFinderFeedDragUpDislikeController * _notInterestedLogic; // +0x1b0
    WCFinderFeedListBannderView * _bannerView; // +0x1b8
    EmoticonCustomCreateLogic * _emoticonCustomCreateLogic; // +0x1c0
    MMFinderHandOffItem * _finderHandoffItem; // +0x1c8
    id /* block */ _pendingInsertionBlock; // +0x1d0
    WCFinderOpenTimelineParams * _openTimelineParams; // +0x1d8
    NSString * _localPostFailFeedId; // +0x1e0
    unsigned long long _guideBarObjectId; // +0x1e8
    UIView * _noMoreFooterView; // +0x1f0
    UILabel * _refreshHeaderViewTipsLabel; // +0x1f8
    WCFinderTimelineJumpView * _timelineJumpView; // +0x200
    WCFinderTipBarView * _tipsBarView; // +0x208
}
- (id)getCommonViewModel;
- (int)feedViewControllerScene;
- (long long)currentVCTabType;
- (void)startTriggerRefreshHeaderLoadingMode:(unsigned long long)arg1;
- (void)resetFooterViewNormal;
- (void)tabViewControllerSelectionDidChange:(BOOL)arg1;
- (void)transferToRecommond;
- (void)triggerEnhanceLogicActionFrom:(id)arg1;
- (void)appendHotAreaToVM:(id)arg1;
- (void)viewTransitionAnimationCompletion:(BOOL)arg1;
- (BOOL)shouldResetLastStayFeed;
- (void)didScrollAppendAction:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (BOOL)canShowScrollUpGuideAnimationView;
- (void)showScrollUpGuideAnimationView;
- (void)showScrollUpGuideAnimationViewAfterDelay;
- (BOOL)showScrollUpGuideAnimation:(double)arg1 videoDuration:(double)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollToNextFeedWithContentVM:(id)arg1;
- (void)forbidTableViewScrollingWithDuration:(double)arg1;
- (void)scrollTimelineToTop;
- (void)scrollTimelineToTopWithAnimation:(BOOL)arg1;
- (void)throttleScrollProcess;
- (void)scrollEndProcessWithTableViewTargetOffset:(CGPoint)arg1;
- (void)checkShouldScrollToNextFeedWithDelay:(id)arg1;
- (void)tabViewControllerScrollInsertPopupFeedById:(id)arg1;
- (void)tabViewControllerScrollInsertPopupFeedById:(id)arg1 animated:(BOOL)arg2;
- (void)scrollToContentVM:(id)arg1 animated:(BOOL)arg2;
- (void)scrollToNextContentVM:(id)arg1 animated:(BOOL)arg2;
- (void)scrollToNextContentVM:(id)arg1 animated:(BOOL)arg2 limitMediaType:(unsigned long long)arg3;
- (void)scrollToNextVisibleCellAfterLoading:(CGRect)arg1;
- (void)setFeedCellDecorationViewsTranslucent:(BOOL)arg1;
- (void)refreshHeadOnScrolltoTop;
- (void)refreshHeadOnScrolltoTop:(long long)arg1;
- (void)updateAdReportMeta:(id)arg1;
- (void)reportForwordWith:(id)arg1;
- (void)reportFullStatsImmediately;
- (void)reportFullStatsExceptTidImmediately:(id)arg1;
- (void)reportFinderGlobalPushScrollUpGuideAnimationView:(long long)arg1;
- (void)exposureTime:(id)arg1 index:(long long)arg2;
- (void)reportItemsExposed:(id)arg1 withIndex:(unsigned long long)arg2;
- (void)updateExposureStatusOfContentVM:(id)arg1;
- (void)exposeMarkRead:(id)arg1;
- (void)monitorView:(id)arg1 unExposedCells:(id)arg2;
- (void)monitorView:(id)arg1 unExposedItems:(id)arg2;
- (void)onReportBulletComment:(id)arg1 contentVM:(id)arg2;
- (void)handleDataReportLogicViewHidden;
- (void)pourStateIntoPool:(id)arg1;
- (void)handleFeedExposeLogic;
- (void)updateCurrentStats;
- (BOOL)updateStatsExceptTidImmediately:(id)arg1;
- (void)tabViewControllerAutoRefreshTrigerByRedDot;
- (void)finderMediaVideoPreloadSuccessful:(id)arg1 mediaWrap:(id)arg2 isFirstFrameDowloadState:(BOOL)arg3;
- (void)finderPreloadStrategyUpdate;
- (void)prepareToInsertFeedByTL;
- (void)checkPreCreateVideoItems;
- (void)stopPreloadVisibleVideo;
- (void)preloadVideoItems;
- (id)getNeedPreloadItemsWithCurrentIndexPath:(id)arg1;
- (void)snapshotForMinimize;
- (void)updateMinimizePlayInfo;
- (id)minimizeKey;
- (id)snapshotImageForMedia;
- (id)viewForKeepHoldAnimation;
- (id)currentMinimizationTaskBizKey;
- (id)currentMinimizationTaskBizName;
- (id)getNextMinimizeListPlayContentVMWithCurrentTid:(id)arg1;
- (id)minimizeUserAvatarView;
- (void)updateFloatContentMinimizePlayInfo:(id)arg1;
- (id)minimizePlayInfo:(BOOL)arg1;
- (BOOL)checkNeedInterruptMinimize;
- (BOOL)checkIsDisableMinimize;
- (id)minimizeCaptureSnapView;
- (void)updateCurrentThumbForMinimize;
- (void)onMinimizeRestorePlayContentView:(id)arg1 cleanPauseStatus:(BOOL)arg2;
- (void)onMMScrollMetricsWillCollect:(id)arg1;
- (void)onMMScrollMetricsDidCollected:(id)arg1;
- (void)removeAllUnReadLiveFeed;
- (BOOL)shouldLiveUseMorphDismissForCustomKey:(id)arg1;
- (CGRect)liveMorphDismissTargetFrameOnScreenForCustomKey:(id)arg1 videoSize:(CGSize)arg2;
- (id)liveMorphDismissTargetExtraConfigForCustomKey:(id)arg1;
- (BOOL)shouldLiveKeepAudioEnabledAfterMorphDismissForCustomKey:(id)arg1;
- (void)onMultiMediaCell:(id)arg1 lastestLiveInfoClickAction:(id)arg2;
- (void)reportLiveShareActionWithEid:(id)arg1 isExpose:(BOOL)arg2 source:(int)arg3;
- (void)tabViewControllerRemoveAllUnReadLiveFeed;
- (void)liveCastViewControllerDidDismiss:(id)arg1;
- (void)checkPreplayLive;
- (void)preplayLiveIfNeededWithIndex:(unsigned long long)arg1;
- (void)reportShareLiveWithItem:(id)arg1 isExpose:(BOOL)arg2;
- (void)addToTingListenLater:(id)arg1;
- (void)gotoFinderAuidoMainFeed:(id)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)shouldSkipRotation:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (BOOL)useTransparentNavibar;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotate;
- (BOOL)supportRotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)addObserverForForegroundNotification;
- (void)removeObserverForForegroundNotification;
- (void)addScreenshotNotification;
- (void)onUserDidTakeScreenshot;
- (void)removeScreenshotNotification;
- (void)triggerCellEnterForegroundAction;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)triggerCellEnterBackgroundAction;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)ensureEnterBackground;
- (void)onVideoPIPStart:(id)arg1;
- (void)onVideoPIPStop:(id)arg1;
- (void)onCreateScreenShotInfo:(id *)arg1;
- (void)listenHalfScreenIsShow:(BOOL)arg1 eventType:(unsigned long long)arg2;
- (void)listenHalfScreenMoveProgress:(double)arg1 heightRatio:(double)arg2;
- (id)getListenHalfAnimView;
- (unsigned long long)listenHalfScreenOption;
- (void)willPresentHalfScreen;
- (void)resumeFromHalfScreen;
- (void)onFeedVMDataInsertEnhanceList:(id)arg1 targetTid:(id)arg2;
- (void)insertEnhanceList:(id)arg1 location:(unsigned long long)arg2 targetTid:(id)arg3;
- (void)onFeedVMDataReplaceEnhanceList:(id)arg1 targetTid:(id)arg2;
- (void)replaceEnhanceList:(id)arg1 location:(unsigned long long)arg2 targetTid:(id)arg3;
- (void)updateWatchListDebugViewWith:(id)arg1;
- (int)getFinderTabType;
- (id)finderColumnTableViewCellGetReportData;
- (BOOL)finderColumnTableViewCellCheckVCIsShowing;
- (void)finderColumnTableViewCellDidClickPostButton;
- (void)finderColumnTableViewCell:(id)arg1 didClickLikeButtonWithVM:(id)arg2 isPrivateLike:(BOOL)arg3;
- (void)finderColumnTableViewCell:(id)arg1 didClickLiveCardWithVMs:(id)arg2 index:(unsigned long long)arg3 feedRouteModel:(id)arg4 indexPath:(id)arg5;
- (void)clickRFItemCallBack:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheetDidAppeared:(id)arg1;
- (void)scrollActionSheetDidDismiss:(id)arg1;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)setUpTableView;
- (void)setupCustomPaging;
- (void)setUpFooterView;
- (void)setLastCommentVC:(id)arg1;
- (id)tipsBarView;
- (id)timelineJumpView;
- (id)maskView;
- (id)landscapeReportInfo;
- (id)msgBubblePanelView;
- (id)retryImageView;
- (id)stateTipsLabel;
- (id)stateRetryGesture;
- (id)exposureDict;
- (id)scrollUpGuideAnimationMaskView;
- (id)scrollUpGuideAnimationView;
- (id)scrollUpGuideLabel;
- (id)fastSlipLogic;
- (id)refreshHeaderViewTipsLabel;
- (void)setUpNoMoreFooterView;
- (void)setupNotInterestedActionLogicIfNeeded;
- (void)setUpScrollUpGuideAnimationView;
- (void)exposeCurrentDisplayFeed;
- (void)setTableViewScrollEnable;
- (void)stateRetryGestureAction:(id)arg1;
- (void)stopCurrentMedia;
- (void)stopVisibleVideo;
- (void)resetRetryState;
- (void)pauseCurrentMediaWithShowPauseBtn:(BOOL)arg1;
- (void)resumeCurrentMedia;
- (void)setUsedTaskData:(id)arg1;
- (void)addOrUpdateUsedTaskData;
- (void)stopCurrentMediaAndSnapCapture;
- (void)needsUpdateCurrentVideo:(BOOL)arg1;
- (void)resetCurrentVideoThumb;
- (void)updateCurrentVideoThumb;
- (id)getVisibleVideoIndexPathArray:(id)arg1;
- (void)onFeedRevertPlayerState;
- (void)setUpRefreshHeaderView;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)reloadRowAtIndexPath:(id)arg1 contentVM:(id)arg2 animation:(long long)arg3;
- (void)fetchNextPage;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)onFeedVMWillChangeOriginDataIndex:(BOOL)arg1;
- (void)onFeedShowStatusRefreshTipsWithTid:(id)arg1;
- (void)tabViewControllerSilenceInsertPopupFeedById:(id)arg1;
- (void)performInsertFeedId:(id)arg1;
- (void)realInsertFeedId:(id)arg1;
- (BOOL)tabContainerHasTargetFeedId:(id)arg1;
- (void)tabViewRemoveTargetFeedId:(id)arg1;
- (void)tabViewControllerNeedRefreshDataByPassInfo:(id)arg1;
- (BOOL)tabViewControllerIsInPinchState;
- (void)updateCurVideoCellPausePanel;
- (void)tabViewControllerStopCurrentPlayVideo;
- (long long)tabViewControllerReturnCurFeedNum;
- (void)adjustPortraitUIIfNeeded;
- (void)onFeedCellHotAreaAndAutoPlay;
- (BOOL)tabViewControllerGetSelectState;
- (unsigned long long)getCurTableViewVisibleBottomIndex;
- (unsigned long long)tabViewControllerGetCurTableViewVisibleTopIndex;
- (id)getCurViewModelLastBuff;
- (id)getCurrentDataItemWithSessionBuffer;
- (id)getCurrentContentVM;
- (id)getCurMaskView;
- (BOOL)isShowingScrollUpGuide;
- (void)onClickFinderPrivateMsgNotify;
- (void)deleteAllFeedAfterTid:(id)arg1;
- (void)multiMediaCell:(id)arg1 didChangePinchVideoState:(BOOL)arg2;
- (void)finderNotifyActionCheckFeed;
- (BOOL)isCustomPagingSplitView:(id)arg1;
- (void)onBulletCommentViewControllerClosed;
- (void)onBulletCommentViewControllerShowInputViewWithDisable;
- (void)onBulletCommentViewController:(id)arg1 didCommentWithText:(id)arg2 replyItem:(id)arg3;
- (void)onBulletCommentViewControllerChangeBulletCommentOpenState:(BOOL)arg1;
- (void)onDoneForwardMessageWithContentVM:(id)arg1 andUserArray:(id)arg2;
- (void)onFeedContent:(id)arg1 commentLikeStatusChangedWithCommentID:(unsigned long long)arg2 likeStatus:(BOOL)arg3;
- (void)onFinishPublishingTextState:(id)arg1;
- (void)onFeedContent:(id)arg1 postCommentSuccessful:(id)arg2;
- (void)onDoneForwardForForwardViewWithContentVM:(id)arg1 isCertificateType:(BOOL)arg2;
- (void)onChangeFollowStatusWithTid:(id)arg1 targetFollowState:(unsigned long long)arg2;
- (id)currentFeedMediaCell;
- (void)tabViewControllerRecordEnterInfo;
- (BOOL)isCurrentMediaBeginPlayed;
- (BOOL)isTopRrefreshing;
- (void)tabViewControllerDidBePoped:(BOOL)arg1;
- (void)tabViewControllerWillDisappear:(unsigned long long)arg1;
- (void)onCommentDetailViewControllerDidDisappear;
- (void)clickCommentNickname:(id)arg1 username:(id)arg2 contact:(id)arg3 isWeChatFriend:(BOOL)arg4 dataItem:(id)arg5;
- (void)onFinderVideoPlayerStartPlay;
- (void)onFinderDataItemPostingCommentFailBySpecialError:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
- (void)bulletCommentOpenStateChanged:(BOOL)arg1 itemFlag:(unsigned long long)arg2 changedScene:(long long)arg3 openType:(unsigned long long)arg4;
- (void)bulletCommentOpenStateChanged:(BOOL)arg1 itemFlag:(unsigned long long)arg2 changedScene:(long long)arg3;
- (BOOL)currentSelectedMediaIsPlay;
- (double)pauseCurrentPlayingFeedReturnPalybackTime;
- (id)contentScrollView;
- (void)inPicture;
- (void)pipDidClose;
- (void)showPlayRatePanelTriggerByDragging:(BOOL)arg1;
- (void)_showV1OperationView;
- (void)showLockSpeedPlayPanel;
- (void)deleteFeedWithContentVM:(id)arg1;
- (void)didClickToolbarDeleteAction:(id)arg1;
- (void)makeFinderHandoffItem:(id)arg1;
- (void)didClickFinderHandOff:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onClickContentTopicAction:(id)arg1 dataItem:(id)arg2;
- (void)onClickContentTopicAction:(id)arg1 dataItem:(id)arg2 commentVC:(id)arg3;
- (void)_pushContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3 fromVC:(id)arg4 sucBlock:(id /* block */)arg5;
- (void)onClickContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3;
- (void)onClickContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3 commentVC:(id)arg4 sucBlock:(id /* block */)arg5;
- (void)_pushContentExtReadingWithUrl:(id)arg1 fromVC:(id)arg2;
- (void)onClickContentExtReadingAction:(id)arg1;
- (void)onClickContentExtReadingAction:(id)arg1 commentVC:(id)arg2;
- (void)onCanvasHalfScreenViewControllerJumpToOthers;
- (void)onCanvasHalfScreenViewControllerWillResume;
- (void)onCanvasHalfScreenViewControllerWillBeClosed;
- (void)onFinderCardWebViewControllerJumpToOthers;
- (void)onFinderCardWebViewControllerWillResume;
- (void)onFinderCardWebViewControllerWillBeClosed;
- (void)onFeedShowPostEntranceByContentVM:(id)arg1 enterScene:(unsigned long long)arg2 postType:(unsigned long long)arg3;
- (void)onFeedCellClickMiaoJianMusic:(id)arg1 musicId:(id)arg2 tingListenId:(id)arg3;
- (void)onFeedCellClickPostComment:(id)arg1 scene:(int)arg2 contentVM:(id)arg3;
- (void)onFeedCellClickGuideMakeEmotion:(id)arg1;
- (void)onBulletCommentOpenStateChanged:(id)arg1;
- (void)modBlackListWithOpType:(int)arg1 bulletItem:(id)arg2 contentVM:(id)arg3 successText:(id)arg4 failText:(id)arg5;
- (void)onUnBlockBulletComment:(id)arg1 contentVM:(id)arg2;
- (void)onBlockBulletComment:(id)arg1 contentVM:(id)arg2;
- (void)onAdFinderDialogFailedToJumpToAppDirectlyWithAppParams:(id)arg1 jumpParams:(id)arg2;
- (void)onFeedCellClickSetRingToneGuideView:(id)arg1;
- (void)onFeedCellClickHotComment:(id)arg1 contentVM:(id)arg2 enterType:(unsigned long long)arg3;
- (void)onFeedCellTriggerBulletCommentWithReplyItem:(id)arg1;
- (void)onCopyBulletComment:(id)arg1 contentVM:(id)arg2;
- (void)onDeleteBulletComment:(id)arg1 contentVM:(id)arg2;
- (void)onMoreBulletComment:(id)arg1 isInBlackList:(BOOL)arg2 isAuthorScene:(BOOL)arg3 contentVM:(id)arg4;
- (void)onFeedCellShouldCheckPopupViewFromContentVM:(id)arg1 enablePopUpShow:(BOOL)arg2;
- (void)onFeedClickJumpInfo:(id)arg1 style:(id)arg2;
- (void)_pushContentTopicVCWith:(id)arg1 dataItem:(id)arg2 fromVC:(id)arg3;
- (void)onFeedContentUserFollowStateChangedWithContentVM:(id)arg1;
- (void)onClickEventEntry:(id)arg1 commentVC:(id)arg2;
- (void)onClickEventEntry:(id)arg1;
- (void)onFeedCellClickHotWord:(id)arg1;
- (void)_pushEventEntry:(id)arg1 fromVC:(id)arg2;
- (void)onClickContentUsernameAction:(id)arg1 commentVC:(id)arg2;
- (void)onClickContentUsernameAction:(id)arg1;
- (void)_pushContentUsernameVCAction:(id)arg1 fromVC:(id)arg2;
- (void)clickContentPOIAction:(id)arg1 commentVC:(id)arg2;
- (void)clickContentPOIAction:(id)arg1;
- (void)_pushContentPOIVCAction:(id)arg1 fromVC:(id)arg2;
- (void)wx_fansProfileViewController:(id)arg1 clickActionWithFinderContact:(id)arg2;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)doBusinessWithCompletion:(id /* block */)arg1;
- (void)onClickLikedListContactWithWith:(id)arg1 LikeInfo:(id)arg2 ObjectID:(id)arg3;
- (BOOL)canShowMore;
- (void)onClickLikedListClickMoreActionWith:(id)arg1 ObjectId:(id)arg2;
- (void)showCommentFailVCWith:(id)arg1;
- (void)showDetailDataItemVC:(id)arg1;
- (void)showDataItemWasDeletedTips;
- (void)showDataItemErrorTipsWithErrCode:(long long)arg1;
- (void)onClickNotificationMsgBtn;
- (void)onClickMsgBubbleViewWithLevel:(unsigned long long)arg1 bubbleInfo:(id)arg2;
- (BOOL)finderDescTableViewCellCanShowCountDownTips:(id)arg1;
- (void)finderDescTableViewCell:(id)arg1 endCountDownTimmerWithTid:(id)arg2;
- (void)feedShopCell:(id)arg1 clickActionType:(unsigned long long)arg2 contentVM:(id)arg3 reportBuffer:(id)arg4;
- (id)feedShopCellGetCurrentNavigationController;
- (void)onAnimationEnd:(id)arg1;
- (void)onAnimationCancel:(id)arg1;
- (void)onAnimationTimeout:(id)arg1;
- (void)onRingToneSheetDisappear;
- (void)onRingToneSheetSetRingtoneSuccess:(long long)arg1 friendUsername:(id)arg2;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSelectSession:(id)arg1;
- (void)onClickRealNameAction;
- (void)currentForceIndexPathWillChanged;
- (void)tryAutoPlayNextFeedAfterContentVM:(id)arg1;
- (id)getCurrentMediaViewCell;
- (id)getCurrentMediaViewCellBy:(id)arg1;
- (void)onFeedLastestVideoMuteNeedChange;
- (id)currentFeedContentVM;
- (id)currentFocusDataItem;
- (BOOL)isClickAutoPlaySwitchOn;
- (id)timelineTabViewController;
- (void)onClickViewAllCommentAction:(id)arg1 isActiveInput:(BOOL)arg2 isFromCommentButton:(BOOL)arg3;
- (void)showCommentListWithContentVM:(id)arg1 shouldEnterKeyBoard:(BOOL)arg2 refCommentID:(unsigned long long)arg3 commentAction:(unsigned long long)arg4 showTitle:(BOOL)arg5 enterType:(unsigned long long)arg6 appendCommentModel:(id)arg7;
- (unsigned long long)getNextNotSplitSectionWithCurrentSection:(unsigned long long)arg1;
- (void)onFeedVMDataItemMediaResourceIsDeleted;
- (void)reloadDataWrap;
- (id)extInfoForSnapshotPrinter;
- (void)liteAppStoreShowCommentListWithContentVM:(id)arg1;
- (void)liteAppStoreShowCommentHeatUpGuideWithContentVM:(id)arg1;
- (BOOL)showMachineTab;
- (void)animatedDisplayBannerView;
- (void)autoplayVideoProcessWithTableViewTargetOffset:(CGPoint)arg1;
- (void)checkCurrentForceIndexPathWithTableViewTargetOffset:(CGPoint)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)customPagingHelper;
- (void)setCustomPagingHelper:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)scrollProxy;
- (void)setScrollProxy:(id)arg1;
- (void)setExposureDict:(id)arg1;
- (void)setScrollUpGuideAnimationMaskView:(id)arg1;
- (void)setScrollUpGuideAnimationView:(id)arg1;
- (void)setScrollUpGuideLabel:(id)arg1;
- (void)setFastSlipLogic:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (void)setRetryImageView:(id)arg1;
- (void)setStateTipsLabel:(id)arg1;
- (void)setStateRetryGesture:(id)arg1;
- (void)setMsgBubblePanelView:(id)arg1;
- (void)setLandscapeReportInfo:(id)arg1;
- (void)setMaskView:(id)arg1;
- (id)currentForceTid;
- (void)setCurrentForceTid:(id)arg1;
- (BOOL)isViewWillAppeaer;
- (void)setIsViewWillAppeaer:(BOOL)arg1;
- (id)latestAutoplayVideoTid;
- (void)setLatestAutoplayVideoTid:(id)arg1;
- (id)preForceIndexPath;
- (void)setPreForceIndexPath:(id)arg1;
- (id)currentForceIndexPath;
- (void)setCurrentForceIndexPath:(id)arg1;
- (id)lastStayFeedTidBeforeTopRefresh;
- (void)setLastStayFeedTidBeforeTopRefresh:(id)arg1;
- (id)lastTidBeforeScrollToTop;
- (void)setLastTidBeforeScrollToTop:(id)arg1;
- (id)refreshHeaderView;
- (void)setRefreshHeaderView:(id)arg1;
- (BOOL)isDisableVideoAutoPlay;
- (void)setIsDisableVideoAutoPlay:(BOOL)arg1;
- (BOOL)footerNoMoreData;
- (void)setFooterNoMoreData:(BOOL)arg1;
- (id)lastCommentVC;
- (BOOL)needsResumeTimelineVideo;
- (void)setNeedsResumeTimelineVideo:(BOOL)arg1;
- (id)currentVideoTid;
- (void)setCurrentVideoTid:(id)arg1;
- (BOOL)isEnableMarkRead;
- (void)setIsEnableMarkRead:(BOOL)arg1;
- (BOOL)hasFetchData;
- (void)setHasFetchData:(BOOL)arg1;
- (long long)tabLastAnchorSecond;
- (void)setTabLastAnchorSecond:(long long)arg1;
- (double)refreshHeaderViewLastAlpha;
- (void)setRefreshHeaderViewLastAlpha:(double)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (id)currentActionSheet;
- (void)setCurrentActionSheet:(id)arg1;
- (id)minimizeCoverImage;
- (void)setMinimizeCoverImage:(id)arg1;
- (id)minimizeSnapshotView;
- (void)setMinimizeSnapshotView:(id)arg1;
- (id /* block */)forwardActionDelayBlock;
- (void)setForwardActionDelayBlock:(id /* block */)arg1;
- (BOOL)alreadyShownScrollUpGuideAnimationView;
- (void)setAlreadyShownScrollUpGuideAnimationView:(BOOL)arg1;
- (id)unreadModel;
- (void)setUnreadModel:(id)arg1;
- (id)findEntryRedDotCtrl;
- (void)setFindEntryRedDotCtrl:(id)arg1;
- (id)shareToSnsTips;
- (void)setShareToSnsTips:(id)arg1;
- (id)operationView;
- (void)setOperationView:(id)arg1;
- (id)operationViewV3;
- (void)setOperationViewV3:(id)arg1;
- (id)tmpLikeListVC;
- (void)setTmpLikeListVC:(id)arg1;
- (id)notInterestedLogic;
- (void)setNotInterestedLogic:(id)arg1;
- (id)bannerView;
- (void)setBannerView:(id)arg1;
- (id)emoticonCustomCreateLogic;
- (void)setEmoticonCustomCreateLogic:(id)arg1;
- (id)finderHandoffItem;
- (void)setFinderHandoffItem:(id)arg1;
- (id /* block */)pendingInsertionBlock;
- (void)setPendingInsertionBlock:(id /* block */)arg1;
- (BOOL)isPIPVideoPlaying;
- (void)setIsPIPVideoPlaying:(BOOL)arg1;
- (id)openTimelineParams;
- (void)setOpenTimelineParams:(id)arg1;
- (BOOL)postFeedInsertMachineTab;
- (void)setPostFeedInsertMachineTab:(BOOL)arg1;
- (id)localPostFailFeedId;
- (void)setLocalPostFailFeedId:(id)arg1;
- (unsigned long long)guideBarObjectId;
- (void)setGuideBarObjectId:(unsigned long long)arg1;
- (id)noMoreFooterView;
- (void)setNoMoreFooterView:(id)arg1;
- (void)setRefreshHeaderViewTipsLabel:(id)arg1;
- (void)setTimelineJumpView:(id)arg1;
- (void)setTipsBarView:(id)arg1;
- (void).cxx_destruct;
@end
