@interface WCFinderFullShareListViewController : MMUIViewController <WCFinderShareListViewModelDelegate, WCFinderFullMultiMediaTableViewCellDelegate, MMScrollActionSheetDelegate, WCFinderPostingCommentExt, WCFinderCommentDetailViewControllerDelegate, WCFinderFeedDetailStatusViewDelegate, WCFinderShareCustomTransitionProtocol, WCFinderFeedFriendsLikeListViewControllerDelegate, WCActionSheetDelegate, WCGeneralMonitorDelegate, WCFinderOpenFinderEntryTableViewCellDelegate, WCFinderCardWebViewControllerDelegate, WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderOpenFinderFeedsTableViewCellDelegate, WCFinderFeedSideColumnViewDelegate, PAGViewListener, MMImagePickerManagerDelegate, WAUINavigationControllerDelegate, WCFinderFeedListViewMinimizeDelegate, WCFinderCustomTransitionProtocol, LiteAppEmbedViewControllerDelegate, WCFinderShareAbstractCell, FullScreenGestureDelegate, MMWebViewDelegate, CNetworkStatusExt, WCFinderNetworkFreeFlowExt, WCFinderNotifyActionExt, WCFinderFeedContentVMExt, WCFinderStreamProfileExt, WCFinderCollectionHalfScreenViewControllerDelegate, WCFinderFeedListViewReportDelegate, WCFinderFansProfileViewControllerDelegate, WCFinderLongVideoExt, WCFinderLeadToMachineTableViewCellDelegate, WCFinderPersonalizedSettingExt, WCFinderWCFinderRecommendThankable, WCFinderTeenagerRestExt, WCFinderFullFeedEnhanceEvents, WCFinderNativeDramaFeedUnlockViewDelegate, WCFinderNativeDramaIAAFeedViewControllerDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    BOOL _doAnimation; // +0x70
    BOOL _needHideNavigationBarWhenDisapper; // +0x71
    BOOL _shareListPlayOverEduTipsShow; // +0x72
    BOOL _canShowFinder; // +0x73
    BOOL _finderEntryCardStyleSwitch; // +0x74
    BOOL _hasCheckTeenLimitGuideView; // +0x75
    BOOL _alreadyShownScrollUpGuideAnimationView; // +0x76
    BOOL _isWillAppear; // +0x77
    BOOL _isFromMiniFloat; // +0x78
    BOOL _pendingPushCommentDetail; // +0x79
    int _moreRelatedViewShowTimes; // +0x7c
    id <WCFinderFullShareListViewControllerDelegate> _delegate; // +0x80
    unsigned long long _enterScene; // +0x88
    WCFinderFeedListView * _feedListView; // +0x90
    WCFinderShareListViewModel * _viewModel; // +0x98
    WCFinderShareListReportModel * _reportModel; // +0xa0
    UIView * _moreRelatedView; // +0xa8
    WCFinderNearByDescriptionTableViewCell * _descriptionCell; // +0xb0
    UIView * _moreRelatedMaskView; // +0xb8
    unsigned long long _videoPlayRemainingDuration; // +0xc0
    WCFinderFeedSideColumnView * _sideColumnView; // +0xc8
    long long _sideColumnViewState; // +0xd0
    UIButton * _customCloseButton; // +0xd8
    UIButton * _customMinimizeButton; // +0xe0
    UIButton * _customSubsceneButton; // +0xe8
    UILabel * _networkTipLabel; // +0xf0
    WCStoryTouchToDismissView * _scrollUpGuideAnimationMaskView; // +0xf8
    PAGView * _scrollUpGuideAnimationView; // +0x100
    MMUILabel * _scrollUpGuideLabel; // +0x108
    WCFinderFeedDetailStatusView * _statusView; // +0x110
    MMLiteAppViewController * _embedLiteAppVC; // +0x118
    UIView * _embedLiteAppView; // +0x120
    WCFinderShareCustomTransition * _animator; // +0x128
    WCFinderRedDotButton * _personCenterRedDotBtn; // +0x130
    WXFullScreenGestureRecognizer * _fullScreenGesture; // +0x138
    NSMutableDictionary * _rptDictionary; // +0x140
    WCFinderWebviewDelegateObject * _webviewDelegate; // +0x148
    WCFinderShareSpanState * _lastSpanState; // +0x150
    WCFinderFeedFriendsLikeListBaseViewController * _tmpLikeListVC; // +0x158
    WCFinderLeadToMachineTableViewCell * _leadToMachineCell; // +0x160
}
+ (CGRect)transitionRectForFeedId:(id)arg1 image:(id)arg2 inNav:(id)arg3;
- (void)_handleErrorState:(id)arg1;
- (BOOL)_openComplaintUrl:(id)arg1;
- (BOOL)_onStateOpenLiteApp:(id)arg1;
- (void)_onStateOfNotExist:(id)arg1;
- (void)handleLiteAppParams:(id)arg1;
- (void)finderFeedListViewControllerExpandPageFromMinimize:(id)arg1;
- (void)onDoneForwardMessageWithContentVM:(id)arg1 andUserArray:(id)arg2;
- (void)onDoneForwardForForwardViewWithContentVM:(id)arg1 isCertificateType:(BOOL)arg2;
- (void)onFeedContent:(id)arg1 commentLikeStatusChangedWithCommentID:(unsigned long long)arg2 likeStatus:(BOOL)arg3;
- (void)onFeedContent:(id)arg1 postCommentSuccessful:(id)arg2;
- (void)onChangeFollowStatusWithTid:(id)arg1 targetFollowState:(unsigned long long)arg2;
- (unsigned long long)postMgrShareScene;
- (void)onOpenFinderLongVideoViewController:(id /* block */)arg1;
- (void)onShowTeenagerRestWithScene:(unsigned long long)arg1;
- (void)onFeedVMData:(id)arg1 didFetchEnhanceList:(id)arg2 eventType:(int)arg3 streamType:(int)arg4;
- (void)onFeedVMData:(id)arg1 failedToFetchEnhanceWithEventType:(int)arg2 streamType:(int)arg3 ret:(int)arg4 errorMsg:(id)arg5;
- (id)initWithTid:(id)arg1 nonceId:(id)arg2;
- (id)initWithEncrytedObjectidTid:(id)arg1 nonceId:(id)arg2 requestScene:(unsigned long long)arg3 reportModel:(id)arg4 functionalParams:(id)arg5;
- (id)initWithTid:(id)arg1 nonceId:(id)arg2 reportModel:(id)arg3 functionalParams:(id)arg4;
- (id)initWithViewModel:(id)arg1 reportModel:(id)arg2 functionalParams:(id)arg3;
- (BOOL)shouldPlayOnUserInteractionBegin;
- (BOOL)shouldPreRender;
- (BOOL)isFinderHelperScanPreviewSceneWith:(id)arg1;
- (void)configShareListSwitch;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)didMoveToNewScene:(id)arg1;
- (void)viewDidLoad;
- (void)onPersonalCenterButtonClicked:(id)arg1;
- (void)_setupPageReport;
- (id)getBarButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(unsigned long long)arg4;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)_pushCommentDetailAfterPush;
- (void)_doPushCommentDetailVC;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)updateRightBarButtonItems;
- (void)setUpPersonCenterRightBarItem:(id)arg1;
- (void)onLimitedClicked;
- (void)updateNaviTitle;
- (id)displayTitle;
- (void)updateNaviLeftCloseItem;
- (void)updateCustomNavItem;
- (void)updateCustomNavItemHiddenState;
- (void)setCustomNavItemAlpha:(double)arg1;
- (void)updateCustomCloseItem;
- (void)updateCustomMinimizeItem;
- (void)updateCustomSubsceneItem;
- (void)onClickCustomMinimizeBtn;
- (void)clearStateFromPhotowall;
- (void)onLandScapeBtnClick:(id)arg1;
- (void)onSwitchScene:(id)arg1;
- (unsigned long long)getShareListGuideStyle;
- (BOOL)shouldAutorotate;
- (BOOL)shouldInteractivePop;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void)callBackIfNeed;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidPushOrPresent:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (BOOL)DismissMyselfAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)scrollUpGuideAnimationMaskView;
- (id)scrollUpGuideAnimationView;
- (id)scrollUpGuideLabel;
- (void)setUpScrollUpGuideAnimationView;
- (void)configureTableView;
- (void)addEmbedLiteAppViewWithVC:(id)arg1;
- (void)relayoutEmbedLiteAppView;
- (void)onClickCloseLeftItem;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)updateLandSpace:(CGSize)arg1;
- (void)viewDidTransitionToNewSize;
- (void)_adjustPortraitUIIfNeeded;
- (id)feedCellViewParamModelWithContentVM:(id)arg1;
- (BOOL)isInSubScene;
- (id)moreRelatedView;
- (void)adjustSideBarColumnViewDisplay;
- (double)scrollDisplaySideBarAlpha;
- (void)tryShowSideBarColumnView:(id)arg1;
- (double)sideColumntViewOriginY;
- (void)changeMoreRelatedViewHidden:(BOOL)arg1;
- (void)changeMoreRelatedViewHidden:(BOOL)arg1 showAnim:(BOOL)arg2;
- (BOOL)canShowScrollUpGuideAnimationView;
- (void)showScrollUpGuideAnimationView;
- (void)showScrollUpGuideAnimationViewAfterDelay;
- (void)showScrollUpGuideAnimation:(double)arg1 videoDuration:(double)arg2;
- (void)reportFinderGlobalPushScrollUpGuideAnimationView:(long long)arg1;
- (BOOL)canShowAutoScrollItem;
- (id)finderFeedList:(id)arg1 actionConfigureWithContentVM:(id)arg2;
- (void)onFeedArrayChanged;
- (void)finderShareList:(id)arg1 contentVMUpdate:(id)arg2;
- (void)finderShareListDataFetchStateChanged:(id)arg1;
- (void)resetFooterView;
- (unsigned long long)finderShareListGetFirstUnExposeFeedIndex:(id)arg1;
- (void)updateLoadingState;
- (void)closeCurPageCompletion:(id /* block */)arg1;
- (void)finderShareList:(id)arg1 firstFeedDidLoadIsFromServer:(BOOL)arg2 withRelativeCGI:(BOOL)arg3;
- (void)finderShareListFirstPageFetchSuccess:(id)arg1;
- (void)viewModel:(id)arg1 didRecivedCgiErrorMessage:(id)arg2;
- (void)reportClickCard;
- (void)finderShareListAutoplayCurrentFeedPlay;
- (void)findershareListSharedItemUpdated;
- (void)finderShareListPlaceHolderDataChange;
- (void)finderShareListFetchFailWithErrorCode:(int)arg1;
- (id)finderShareListCurrentPlayFeedID;
- (void)finderShareListDataItemDeleteBySpamList:(id)arg1;
- (BOOL)onMultiMediaCellIsInHotSpots:(id)arg1;
- (void)scrollToTopFeed;
- (void)pauseTopFeed;
- (id)getContentView;
- (void)pauseCurrentFeed;
- (BOOL)supportRotate;
- (void)stopPlay;
- (void)onClickFriendLikeListDetail:(id)arg1;
- (void)onClickFriendWeChatProfile:(id)arg1;
- (void)clickRecommendUrl:(id)arg1;
- (BOOL)canShowMore;
- (void)onClickLikedListClickMoreActionWith:(id)arg1 ObjectId:(id)arg2;
- (void)onClickLikedListContactWithWith:(id)arg1 LikeInfo:(id)arg2 ObjectID:(id)arg3;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)wx_fansProfileViewController:(id)arg1 clickActionWithFinderContact:(id)arg2;
- (void)onLiveFeedDidTap:(id)arg1 routeModel:(id)arg2;
- (void)onFeedCellDidClickAvatar:(id)arg1 avatarType:(unsigned long long)arg2 contentVM:(id)arg3;
- (void)onFeedCellDidClickLiveNowView:(id)arg1 contentVM:(id)arg2;
- (void)didFeedDoubleLikeAction:(id)arg1;
- (void)doubleClickLikeFeedContentVMAction:(id)arg1;
- (void)likeFeedContentVMAction:(id)arg1 isPrivateLike:(BOOL)arg2 touchPoint:(CGPoint)arg3;
- (void)onFinderDataItemPostingCommentFailBySpecialError:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void)didClickBack:(id)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)doShareAnimation;
- (void)showGuideNextFeedBriefInfoWithCurContentVM:(id)arg1 nextContentVM:(id)arg2;
- (void)jumpToFinderPageWithContentVM:(id)arg1;
- (BOOL)findSettingPageFinderIsClose;
- (BOOL)findDisplayPageFinder;
- (id)webview:(id)arg1 createDelegateWithOrigin:(id)arg2;
- (void)hookPreWebviewDelegate;
- (BOOL)onWebViewPerformClose:(id)arg1;
- (void)finderFeedListViewDidEndDecelerating:(id)arg1;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (BOOL)finderFeedListView:(id)arg1 customViewAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 customCellForRowAtIndexPath:(id)arg2;
- (double)finderFeedListView:(id)arg1 heightForCustomRowAtIndexPath:(id)arg2;
- (BOOL)showOpenFinderFeedsTableViewCellWith:(id)arg1;
- (unsigned long long)currentInletSourceOnFeedCellClickMemberShipPaymentGuideViewConfirmButton:(id)arg1;
- (void)finderFeedListClickAllCommentAction;
- (void)finderFeedListClickHeaderMoreAction;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (unsigned long long)finderFeedListDataBeginRefreshTime:(id)arg1;
- (BOOL)finderFeedListViewCanPreFetchData:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (BOOL)finderFeedListViewIsNoMoreData:(id)arg1;
- (BOOL)finderFeedListViewCanPollFetchTopData:(id)arg1;
- (void)finderFeedListViewOnPollFetchTopData:(id)arg1;
- (long long)finderFeedListView:(id)arg1 rowOfCustomViewAtSection:(long long)arg2;
- (void)finderFeedListView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedListViewVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3 contentVM:(id)arg4;
- (void)enhanceRelatedListByPlayProgressWithContentVM:(id)arg1 progress:(double)arg2;
- (BOOL)showRelatedRecommendGuideByProgress:(double)arg1;
- (id)getFirstTableViewCell;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (void)finderFeedListView:(id)arg1 changeCurrentFocusIndexPath:(id)arg2 currentFocusTid:(id)arg3;
- (id)finderFeedListViewCustomTableViewParam:(id)arg1 contentVM:(id)arg2;
- (void)finderFeedListView:(id)arg1 dislikeContentVM:(id)arg2;
- (void)finderFeedListView:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)udpateMoreRelatedViewShowState;
- (void)_hiddenScrollToNextBriefCardView;
- (void)finderFeedListMediaCellBrowsePhotoLongTime:(id)arg1;
- (void)_handleGuideViewCheck;
- (void)finderFeedListMediaDidEndPlay:(unsigned long long)arg1 contentVM:(id)arg2 finderPlayerReport:(id)arg3;
- (void)finderFeedListMediaDidStopPlay:(unsigned long long)arg1 contentVM:(id)arg2 finderPlayerReport:(id)arg3;
- (void)finderFeedListShowGuideToFinderMoreRelatedView:(id)arg1;
- (void)finderFeedListClickBottomBannerView:(id)arg1 contentVM:(id)arg2 triggerByUser:(BOOL)arg3;
- (void)finderFeedListCloseBottomBannerView:(id)arg1 contentVM:(id)arg2;
- (void)updateCellBottomGradientLayerIndexPath:(id)arg1 display:(BOOL)arg2;
- (void)finderFeedListView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedListViewStartExpose;
- (void)finderFeedListViewEndExpose;
- (void)finderFeedListClickToolbarFavActionWithContentVM:(id)arg1;
- (void)finderFeedListClickToolbarLikeActionWithContentVM:(id)arg1 isPrivateLike:(BOOL)arg2;
- (void)finderFeedListViewAutoPlayNextFeedSwitchUpdated:(BOOL)arg1;
- (BOOL)finderFeedListView:(id)arg1 canAutoOpenJumpInfo:(id)arg2;
- (void)finderFeedListView:(id)arg1 focusedFeedContentUserFollowStateChanged:(id)arg2;
- (void)removeAllUnReadLiveFeed;
- (void)finderFeedListViewRecommendSwitchChangeWithContentVM:(id)arg1;
- (void)finderFeedListViewRecommendClickAction:(id)arg1;
- (BOOL)finderFeedListViewEnableSwipeGesturePushProfilePage:(id)arg1;
- (void)finderFeedListView:(id)arg1 configureUpcomingLiveNavigationWithRouterParameters:(id)arg2;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (id)minimizePageBizKey;
- (BOOL)finderFeedListViewShouldDragDownCloseInvoke;
- (void)onClickOpenFinderEntryTableViewCellActionWithCardIndex:(unsigned long long)arg1;
- (void)onClickOpenFinderFeedsTableViewCellActionWithGuideTips:(id)arg1;
- (void)_jumpToFinderScene;
- (void)onClickHorizonGuideCardWith:(id)arg1 guideTips:(id)arg2;
- (void)sideColumnView:(id)arg1 onClickContentVM:(id)arg2;
- (void)onClickCloseColumnView:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)onAnimationCancel:(id)arg1;
- (void)onAnimationTimeout:(id)arg1;
- (id)minimizeKey;
- (id)currentFeedContentVM;
- (id)currentFeedMediaCell;
- (void)tryMinimizeCurrentFeedContentVM;
- (void)curFeedHalfScreenIsShow:(BOOL)arg1;
- (void)curFeedHalfScreenMovePregress:(double)arg1 heightRatio:(double)arg2;
- (BOOL)isFromPhotoWall;
- (BOOL)navigationController:(id)arg1 shouldUsePresentWhenPushViewController:(id)arg2 animated:(BOOL)arg3 scene:(unsigned long long)arg4;
- (void)finderNotifyActionCheckFeed;
- (void)registerYReportSdk;
- (void)onViewDidAppearForReportPhotoWall;
- (void)onViewDidDisappearForReportPhotoWall;
- (void)reportCustomPageOut;
- (void)reportCustomSessionOut;
- (void)onClickClose:(BOOL)arg1;
- (BOOL)enableDragDownClose;
- (BOOL)shouldPreventDragDownCloseGesture;
- (void)onFullScreenClose;
- (void)onFullScreenDragToRect:(CGRect)arg1;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragEnd;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)finderFeedListViewClickCollectionBubble:(id)arg1;
- (void)finderFeedListViewClickThankForShareButtonWithThank:(BOOL)arg1;
- (BOOL)collectionHalfList:(id)arg1 handleClickContentVM:(id)arg2;
- (void)clickCollectionScrollToContentVM:(id)arg1;
- (BOOL)tryAufoPlayNextFeed:(id)arg1;
- (void)onLeadToMachineCellClickToMachineTabWithDataItem:(id)arg1;
- (void)openFindEntryAndJumpToTimeline:(id)arg1;
- (void)checkPreplayLive;
- (void)preplayLiveIfNeededWithIndex:(unsigned long long)arg1;
- (void)wechatPersonalizedChangeType:(long long)arg1 value:(BOOL)arg2;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)networkFreeFlowStatusChange;
- (void)triggerCheckNetTips;
- (void)checkAndShowNetworkTips:(BOOL)arg1;
- (void)view:(id)arg1 didTriggerUnlockActionWithModel:(id)arg2;
- (void)nativeDramaIAAFeedController:(id)arg1 didUnlockEpisode:(unsigned long long)arg2;
- (id)thankInfoForTid:(id)arg1;
- (id)getSharerUsernameForTid:(id)arg1;
- (BOOL)possibleRecommendThankItemForTid:(id)arg1;
- (id)networkTipLabel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (id)feedListView;
- (void)setFeedListView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (BOOL)doAnimation;
- (void)setDoAnimation:(BOOL)arg1;
- (id)reportModel;
- (void)setReportModel:(id)arg1;
- (BOOL)needHideNavigationBarWhenDisapper;
- (void)setNeedHideNavigationBarWhenDisapper:(BOOL)arg1;
- (void)setMoreRelatedView:(id)arg1;
- (id)descriptionCell;
- (void)setDescriptionCell:(id)arg1;
- (id)moreRelatedMaskView;
- (void)setMoreRelatedMaskView:(id)arg1;
- (unsigned long long)videoPlayRemainingDuration;
- (void)setVideoPlayRemainingDuration:(unsigned long long)arg1;
- (BOOL)shareListPlayOverEduTipsShow;
- (void)setShareListPlayOverEduTipsShow:(BOOL)arg1;
- (int)moreRelatedViewShowTimes;
- (void)setMoreRelatedViewShowTimes:(int)arg1;
- (BOOL)canShowFinder;
- (void)setCanShowFinder:(BOOL)arg1;
- (BOOL)finderEntryCardStyleSwitch;
- (void)setFinderEntryCardStyleSwitch:(BOOL)arg1;
- (id)sideColumnView;
- (void)setSideColumnView:(id)arg1;
- (long long)sideColumnViewState;
- (void)setSideColumnViewState:(long long)arg1;
- (BOOL)hasCheckTeenLimitGuideView;
- (void)setHasCheckTeenLimitGuideView:(BOOL)arg1;
- (id)customCloseButton;
- (void)setCustomCloseButton:(id)arg1;
- (id)customMinimizeButton;
- (void)setCustomMinimizeButton:(id)arg1;
- (id)customSubsceneButton;
- (void)setCustomSubsceneButton:(id)arg1;
- (void)setNetworkTipLabel:(id)arg1;
- (void)setScrollUpGuideAnimationMaskView:(id)arg1;
- (void)setScrollUpGuideAnimationView:(id)arg1;
- (void)setScrollUpGuideLabel:(id)arg1;
- (BOOL)alreadyShownScrollUpGuideAnimationView;
- (void)setAlreadyShownScrollUpGuideAnimationView:(BOOL)arg1;
- (BOOL)isWillAppear;
- (void)setIsWillAppear:(BOOL)arg1;
- (id)statusView;
- (void)setStatusView:(id)arg1;
- (id)embedLiteAppVC;
- (void)setEmbedLiteAppVC:(id)arg1;
- (id)embedLiteAppView;
- (void)setEmbedLiteAppView:(id)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (id)personCenterRedDotBtn;
- (void)setPersonCenterRedDotBtn:(id)arg1;
- (id)fullScreenGesture;
- (void)setFullScreenGesture:(id)arg1;
- (id)rptDictionary;
- (void)setRptDictionary:(id)arg1;
- (id)webviewDelegate;
- (void)setWebviewDelegate:(id)arg1;
- (id)lastSpanState;
- (void)setLastSpanState:(id)arg1;
- (BOOL)isFromMiniFloat;
- (void)setIsFromMiniFloat:(BOOL)arg1;
- (id)tmpLikeListVC;
- (void)setTmpLikeListVC:(id)arg1;
- (id)leadToMachineCell;
- (void)setLeadToMachineCell:(id)arg1;
- (BOOL)pendingPushCommentDetail;
- (void)setPendingPushCommentDetail:(BOOL)arg1;
- (void).cxx_destruct;
@end
