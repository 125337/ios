@interface WCFinderFeedDetailViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, WCFinderFeedDetailRootCommentCellDelegate, WCFinderCommentDetailViewModelDelegate, WCFinderRefreshTableFooterViewDelegate, WCFinderFeedDetailCommentCellActionDelegate, WCFinderCommentAdTableViewCellDelegate, WCFinderHalfScreenProtocol, WCFinderCardWebViewControllerDelegate, WCAdFinderDialogViewControllerDelegate, WCGeneralMonitorDelegate, WCFinderFeedbackViewDelegate, WCFinderPhotoFeedHeaderDelegate, WCFinderFansProfileViewControllerDelegate, MMUIHalfScreenViewControllerDelegate, WCFinderFullToolbarViewDelegate, WCFinderHeadInfoViewDelegate, WCFinderFeedInputCommentPostDelegate, WCFinderFeedInputViewDelegate, WCFinderFeedContentVMExt, RecentForwardScrollViewDelegate, MMScrollActionSheetDelegate, WCFinderImageBrowserViewControllerDelegate, WCFinderDataItemExt, WCFinderShareCustomTransitionProtocol, WCFinderFeedListTransitionHelperBehavior, WCFinderPhotoFeedDetailViewModelDelegate, WCFinderFeedDetailContentViewDelegate, WCFinderFeedDetailFullScreenVideoViewControllerDelegate, RingBackInfoDisplaySheetViewDelegate, ForwardMessageLogicDelegate, WCFinderFeedDetailCommentInputCellDelegate, WCFinderPostDataItemExt, MMFinderLiveCastViewControllerExt, WCFinderFeedDetailPageContext, IFavoritesExt, WCFinderActionSheetBulletAuthorDelegate, WCFinderJumpInfoLBSCardViewDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    BOOL _scrollCanScroll; // +0x70
    BOOL _tableCanScroll; // +0x71
    BOOL _isViewWillAppear; // +0x72
    BOOL _rotating; // +0x73
    BOOL _isShowHalfScreen; // +0x74
    id <WCFinderFeedDetailViewControllerDelegate> _delegate; // +0x78
    UIView * _statusBarBgView; // +0x80
    UIView * _mediaBGView; // +0x88
    UIView * _closeBtnView; // +0x90
    UIView * _fakeNavBar; // +0x98
    WCFinderFeedDetailContentView * _mediaView; // +0xa0
    double _mediaNormalHeight; // +0xa8
    double _mediaCurrentHeight; // +0xb0
    double _mediaMinHeight; // +0xb8
    UIScrollView * _scrollView; // +0xc0
    UITableView * _tableView; // +0xc8
    double _scrollViewOffset; // +0xd0
    WCFinderPhotoFeedHeaderView * _headerView; // +0xd8
    WCFinderRefreshTableFooterView * _footerView; // +0xe0
    WCFinderAnimationLoadingView * _conmmentLoadingView; // +0xe8
    UILabel * _commentCloseTips; // +0xf0
    UIView * _currentCommentTipsView; // +0xf8
    WCFinderFeedbackView * _feedbackView; // +0x100
    UIView * _toolBarBackgroundView; // +0x108
    WCFinderFullToolbarView * _toolBarView; // +0x110
    WCFinderHeadInfoEasyView * _headInfoView; // +0x118
    WCFinderFeedInputView * _commentInputView; // +0x120
    WCFinderScrollActionSheet * _currentActionSheet; // +0x128
    WCFinderJumpInfoLBSCardMiniView * _miniLBSCard; // +0x130
    WCFinderFeedDetailCommentInputCell * _commentInputCell; // +0x138
    WCFinderAnimationLoadingView * _loadingView; // +0x140
    WCFinderPhotoFeedDetailViewModel * _viewModel; // +0x148
    WCFinderCommentDetailViewModel * _commentViewModel; // +0x150
    EmoticonCustomManageAddLogic * _addEmoticonLogic; // +0x158
    unsigned long long _createTime; // +0x160
    unsigned long long _enterTime; // +0x168
    double _viewDidAppearTime; // +0x170
    double _mediaUnexposeStartTime; // +0x178
    unsigned long long _adPlayerExposeCheckTime; // +0x180
    WCFinderExtStatsReporter * _extStatReporter; // +0x188
    WCFinderFeedDetailVCReporter * _vcReporter; // +0x190
    WCFinderFeedDetailVCParams * _vcParams; // +0x198
    NSMutableDictionary * _adPlayerDict; // +0x1a0
    MMFinderHandOffItem * _finderHandoffItem; // +0x1a8
    CGSize _layoutSize; // +0x1b0
}
+ (id)transitionDelegateMgr;
- (BOOL)useCustomNavibar;
- (BOOL)useTransparentNavibar;
- (long long)preferredStatusBarStyle;
- (id)initWithContentVM:(id)arg1;
- (id)initWithContentVM:(id)arg1 params:(id)arg2;
- (id)initWithTid:(id)arg1 nonceID:(id)arg2 params:(id)arg3;
- (id)initWithEntryptedTid:(id)arg1 nonceID:(id)arg2 params:(id)arg3;
- (id)_initWithViewModel:(id)arg1 params:(id)arg2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setupFeedPageWhenContentVMReady;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)doEnterPageReport;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)doLeavePageReport;
- (void)viewWillLayoutSubviews;
- (void)setupFeedContentView;
- (void)reportCommentStayIfNeed;
- (void)setupBottomToolBarView;
- (void)setupCustomBackButtonIfNeed;
- (void)setupFakeNavBar;
- (void)updateCommentTipsView;
- (void)onCloseButtonClicked;
- (id)conmmentLoadingView;
- (void)startCommentLoadingView;
- (void)stopCommentLoadingView;
- (void)showEmptyRetryFetchView;
- (void)retryEmptyFetchAction:(id)arg1;
- (id)commentCloseTips;
- (void)layoutViews;
- (void)layoutFeedContentView;
- (void)layoutToolBar;
- (void)layoutMiniLBSCard;
- (void)updateCommentCountLabel;
- (BOOL)isVideoMedia;
- (void)showCommentInputViewWithReplyComment:(id)arg1 offset:(double)arg2;
- (void)exitCommentInputView;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)mediaNotPinned;
- (void)setupLoadingPage;
- (void)layoutLoadingPage;
- (void)endLoadingView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)subCommentCellConfig;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)mediaAdjustCurrentOffset;
- (void)adjustMiniLBSCardView;
- (void)adjustTableViewHeight;
- (void)handleScrollConflict:(id)arg1;
- (void)scrollToCommentArea:(id /* block */)arg1;
- (double)tableViewMaxOffset;
- (double)scrollViewMaxOffset;
- (void)onFeedDetailVMContentVMReady;
- (void)onFeedDetailVMJumpError:(id)arg1;
- (BOOL)_openComplaintUrl:(id)arg1;
- (BOOL)_onStateOpenLiteApp:(id)arg1;
- (void)onFeedDetailVMDeleteFeed:(id)arg1;
- (void)onFeedDetailVMPrivateFeed:(id)arg1;
- (void)onFeedDetailVMDataItemLoadFail:(id)arg1;
- (void)_exitFeedWithAbnormalState:(id /* block */)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)finderFeedCommentNoMoreData:(id)arg1;
- (void)finderFeedCommentIsEmpty:(id)arg1;
- (void)showNoMoreTipsView;
- (BOOL)isCommentClose;
- (void)finderFeedDataItemUpdate:(id)arg1;
- (void)finderFeedCommentDataChange:(id)arg1;
- (void)finderFeedCommentPostTid:(id)arg1 commentID:(unsigned long long)arg2;
- (void)finderFeedCommentClickLikeTid:(id)arg1 comment:(id)arg2;
- (void)finderFeedCommentClickFullTextTid:(id)arg1 rootCommentID:(unsigned long long)arg2;
- (void)finderFeedCommentClickRefcontentFullTextTid:(id)arg1 rootCommentID:(unsigned long long)arg2;
- (void)finderFeedCommentSubCommentDataChange:(unsigned long long)arg1 updateModel:(id)arg2;
- (void)finderFeedCommentFeedWasDeleted;
- (void)finderFeedSubCommentPostTid:(id)arg1 rootCommentID:(unsigned long long)arg2;
- (void)reloadSectionWith:(unsigned long long)arg1;
- (void)reloadSubCommentListWithRootComment:(unsigned long long)arg1;
- (void)finderFeedCommentNetworkError:(int)arg1 tid:(id)arg2 direction:(unsigned long long)arg3;
- (void)finderFeedCommentPostNetworError:(int)arg1 errorMsg:(id)arg2 comment:(id)arg3;
- (void)finderFeedCommentFetchWithSpecialCode:(int)arg1;
- (void)finderFeedCommentFetchByRefCommentWithTid:(id)arg1 refCommentID:(unsigned long long)arg2 refCommentIndexPath:(id)arg3;
- (void)finderFeedCommentSubCommentFetchFailWithCommentID:(unsigned long long)arg1 direction:(unsigned long long)arg2 retCode:(int)arg3;
- (void)finderFeedCommentCloseStatusChange;
- (void)finderSelectAccountChange;
- (void)reportUserComment:(id)arg1;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)monitorView:(id)arg1 newExposedCells:(id)arg2;
- (void)monitorView:(id)arg1 unExposedCells:(id)arg2;
- (void)reportCommentAd:(id)arg1 withReportScene:(long long)arg2;
- (void)reportCommentAdIfNeededWithReportScene:(long long)arg1;
- (void)checkCommentAdPlayerExposeStateIfNeeded;
- (double)maxHeightForCommentView;
- (void)commentAdCell:(id)arg1 clickAvatarAtSection:(unsigned long long)arg2;
- (void)commentAdCell:(id)arg1 clickNicknameAtSection:(unsigned long long)arg2;
- (void)commentAdCell:(id)arg1 clickFullTextAtSection:(unsigned long long)arg2 isExpand:(BOOL)arg3;
- (void)commentAdCell:(id)arg1 clickJumpInfo:(id)arg2 atSection:(unsigned long long)arg3;
- (void)commentAdCell:(id)arg1 longPressAtSection:(unsigned long long)arg2;
- (void)commentAdCell:(id)arg1 clickFeedbackButton:(id)arg2 atSection:(unsigned long long)arg3;
- (id)playerViewWithFrame:(CGRect)arg1 ForCommentAdCell:(id)arg2 argsWrap:(id)arg3;
- (id)adPlayerDict;
- (void)onFinderFeedbackViewLikeButtonDidClick:(id)arg1;
- (void)onFinderFeedbackViewDislikeButtonDidClick:(id)arg1;
- (void)onFinderFeedbackViewComplainButtonDidClick:(id)arg1;
- (void)onFinderFeedbackView:(id)arg1 shouldCloseWithReasons:(id)arg2;
- (void)_closeFeedbackView:(id)arg1 toastText:(id)arg2;
- (void)onFinderFeedbackViewDidCancel:(id)arg1;
- (id)adFeedbackParamsWithSection:(unsigned long long)arg1;
- (void)onFinderFeedbackView:(id)arg1 didClickDescriptionJumpInfo:(id)arg2;
- (void)replyRootCommentAtSection:(unsigned long long)arg1 cell:(id)arg2;
- (void)rootCommentCell:(id)arg1 clickJumpInfo:(id)arg2 style:(id)arg3;
- (void)replySubCommentAtIndex:(id)arg1 cell:(id)arg2;
- (void)showCommentUserProfileWithComment:(id)arg1;
- (void)onClickSubCommentFinder:(id)arg1;
- (void)onClickSubCommentWeChat:(id)arg1;
- (void)rootCommentCell:(id)arg1 clickReplyUsername:(id)arg2 atSection:(unsigned long long)arg3;
- (void)rootCommentCell:(id)arg1 clickTextViewAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(id)arg1 likeCommentSection:(unsigned long long)arg2;
- (void)rootCommentCell:(id)arg1 clickFullTextAtSection:(unsigned long long)arg2 isExpand:(BOOL)arg3;
- (void)rootCommentCell:(id)arg1 clickFullRefContentTextAtSection:(unsigned long long)arg2 isExpand:(BOOL)arg3;
- (void)rootCommentCell:(id)arg1 longPressAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(id)arg1 clickAvatarAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(id)arg1 clickNicknameAtSection:(unsigned long long)arg2;
- (void)rootCommentCell:(id)arg1 clickCommentRepostAtSection:(unsigned long long)arg2;
- (void)showCommentProfileViewWithComment:(id)arg1;
- (void)showActionSheetWithComment:(id)arg1 rootComment:(id)arg2;
- (void)showReplaceTopCommentActionSheet:(id)arg1;
- (void)handleSetTopWithComment:(id)arg1;
- (void)onCommentClickWithComment:(id)arg1 clickKeyword:(WCFinderKeywordAction)arg2 forCell:(id)arg3;
- (void)onClickSubCommentReadMore:(id)arg1 isExpand:(BOOL)arg2;
- (void)finderFeedSubCommentTableViewCell:(id)arg1 onLongPressAtIndexPath:(id)arg2;
- (void)onClickSubCommentAvatar:(id)arg1;
- (void)onClickSubCommentNickname:(id)arg1;
- (void)finderFeedSubCommentTableViewCell:(id)arg1 clickReplyUsername:(id)arg2 atIndexPath:(id)arg3;
- (void)finderFeedSubCommentTableViewCell:(id)arg1 likeComment:(id)arg2 atIndexPath:(id)arg3;
- (id)indexPathOfRootCommentCell:(id)arg1;
- (void)fansProfileViewController:(id)arg1 clickActionWithContact:(id)arg2 finderContact:(id)arg3 type:(unsigned long long)arg4;
- (void)showDeleteConfirmSheetWithComment:(id)arg1 rootComment:(id)arg2;
- (void)revertBlackListWithComment:(id)arg1;
- (void)showAddBlackListSheetWithComment:(id)arg1;
- (void)fansProfileViewController:(id)arg1 clickPrivateMsgWithContact:(id)arg2 finderContact:(id)arg3 comment:(id)arg4;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (id)feedDetailContentViewCurrentViewController;
- (void)onFeedDetailContentViewClickPhotoImageWithIndex:(unsigned long long)arg1;
- (void)onFeedDetailContentViewPhotoIndexChanged:(unsigned long long)arg1;
- (void)onFeedDetailContentViewClickPlayerFullScreen;
- (void)onFeedDetailContentViewVideoExitFullScreen;
- (void)onFeedDetailContentViewVideoExitIPhoneLandscape;
- (BOOL)feedDetailContentViewRotating;
- (void)onFeedDetailContentVideoPlayUpdateVideoPosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)headerViewHeightChanged:(id)arg1;
- (void)updateCurrentCommentIdentity;
- (void)headerView:(id)arg1 didClickContentPOIAction:(id)arg2;
- (void)headerView:(id)arg1 didClickEventEntry:(id)arg2;
- (void)headerView:(id)arg1 didClickLinkEntry:(id)arg2;
- (void)headerView:(id)arg1 didClickContentUsernameAction:(id)arg2 contentVM:(id)arg3;
- (void)headerView:(id)arg1 didClickContentMentionAction:(id)arg2 nickname:(id)arg3 contentVM:(id)arg4;
- (void)headerView:(id)arg1 didClickContentTopicAction:(id)arg2 contentVM:(id)arg3;
- (void)headerView:(id)arg1 didClickRedPacketJumpInfo:(id)arg2 style:(id)arg3;
- (void)headerView:(id)arg1 didClickLBSCardWithJumpInfo:(id)arg2 style:(id)arg3;
- (void)headerView:(id)arg1 lbsCardDidChangePoiFavState:(BOOL)arg2 withJumpInfo:(id)arg3;
- (id)currentContentVM;
- (void)clickAvatar:(id)arg1;
- (void)clickNicknameWithContact:(id)arg1;
- (void)showSpamTipsWithString:(id)arg1;
- (void)onHeaderMoreClickAction:(id)arg1;
- (void)onHeaderFollowClickAction:(id)arg1;
- (void)onHeaderViewClickWithContentVM:(id)arg1;
- (void)onFeedClickJumpInfo:(id)arg1 style:(id)arg2;
- (void)_jumpWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)_jumpWithJumpInfo:(id)arg1 style:(id)arg2 pos:(unsigned long long)arg3;
- (void)onAdFinderDialogFailedToJumpToAppDirectlyWithAppParams:(id)arg1 jumpParams:(id)arg2;
- (id)createActionSheetWithContentVM:(id)arg1;
- (id)actionSheetItemConfigArrayWithContentVM:(id)arg1;
- (BOOL)shouldHiddenHeadInfoViewFollowBtn;
- (void)tryShowHeaderViewFollowAuthorBtn;
- (void)feedInputViewPostComment:(id)arg1 withReplyComment:(id)arg2;
- (void)inputViewDidUpdateCommentIdentity:(id)arg1;
- (void)onDidClickToolbarLikeAction:(id)arg1 isPrivateLike:(BOOL)arg2;
- (BOOL)feedDetailViewShouldDoubleClickLikeMedia;
- (void)feedDetailContentViewDoubleClickLikeMedia;
- (void)onClickViewAllCommentAction:(id)arg1 isActiveInput:(BOOL)arg2 isFromCommentButton:(BOOL)arg3;
- (void)onClickToolbarShareAction:(id)arg1 shareButton:(id)arg2;
- (void)onClickToolbarCollectionAction:(id)arg1 sourceType:(int)arg2;
- (void)onRefreshToolbarUI:(id)arg1;
- (void)onFeedContent:(id)arg1 commentOpenStateChanged:(BOOL)arg2;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)bulletCommentOpenStateChanged:(BOOL)arg1 itemFlag:(unsigned long long)arg2 changedScene:(long long)arg3 openType:(unsigned long long)arg4;
- (void)didClickFinderHandOff:(id)arg1;
- (void)makeFinderHandoffItem:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)reportForwordWith:(id)arg1;
- (void)didClickToolbarDeleteAction:(id)arg1;
- (void)deleteFeedWithContentVM:(id)arg1;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (void)onFeedContentBeDisliked:(id)arg1;
- (void)onFeedContentJumpInfoContainerChanged:(id)arg1 isPureUIChanged:(BOOL)arg2 showPosition:(int)arg3 scene:(int)arg4;
- (void)onFeedContentJumpInfoContainerChanged:(id)arg1 isPureUIChanged:(BOOL)arg2 showPosition:(int)arg3 scene:(int)arg4 disableReport:(BOOL)arg5;
- (void)listenHalfScreenIsShow:(BOOL)arg1 eventType:(unsigned long long)arg2;
- (unsigned long long)listenHalfScreenOption;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (id)getTopViewControllerForWCImageFullScreenViewController;
- (id)getTopNavigationControllerForWCImageFullScreenViewController;
- (id)getVisibleViewControllerForWCImageFullScreenViewController;
- (void)imageBrowserTransitionAnimationWithStart:(BOOL)arg1 present:(BOOL)arg2;
- (id)imageBrowserViewControllerTransitionImageView:(id)arg1;
- (void)imageBrowserViewControllerWillDismissSelf:(id)arg1;
- (void)imageBrowser:(id)arg1 didSwitchPhotoWithIndex:(unsigned long long)arg2;
- (BOOL)imageBrowserSupportBGMControl:(id)arg1;
- (id)transitionHelperFetchCurrentPlayTid;
- (BOOL)shouldDragDownCloseInvokeForVC:(id)arg1;
- (BOOL)shouldSupportNonEdgeSwipeGestureForVC:(id)arg1;
- (BOOL)shouldStartNoneEdgeSwipeGestureWithPoint:(CGPoint)arg1;
- (void)videoFullScreenPlayerTransitionAnimationWithStart:(BOOL)arg1 present:(BOOL)arg2;
- (CGRect)videoFullScreenPlayerTransitionStartFrame;
- (id)videoFullScreenPlayerFeedVC;
- (void)videoFullScreenPlayerWillDismissSelfWithPause:(BOOL)arg1;
- (void)onRingToneSheetDisappear;
- (void)onRingToneSheetSetRingtoneSuccess:(long long)arg1 friendUsername:(id)arg2;
- (void)commentInputCellDidClickFakeInputLabel;
- (void)commentInputCellUpdateCommentIdentityTypeTo:(unsigned long long)arg1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)liveCastViewControllerDidDismiss:(id)arg1;
- (void)lbsCardDidClickCardWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)lbsCardChangeFavState:(BOOL)arg1 withJumpInfo:(id)arg2;
- (void)OnAddNewFavoritesItems:(id)arg1;
- (void)OnDelFavoritesItems:(id)arg1;
- (int)feedDetailPageCurrentCommentScene;
- (id)feedDetailPageLBSJumpInfo;
- (id)feedDetailPageContentVM;
- (BOOL)feedDetailPageShowLBSJumpInfo;
- (void)registerYReportSdk;
- (void)gotoFinderAuidoMainFeed:(id)arg1;
- (void)addToTingListenLater:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)statusBarBgView;
- (void)setStatusBarBgView:(id)arg1;
- (id)mediaBGView;
- (void)setMediaBGView:(id)arg1;
- (id)closeBtnView;
- (void)setCloseBtnView:(id)arg1;
- (id)fakeNavBar;
- (void)setFakeNavBar:(id)arg1;
- (id)mediaView;
- (void)setMediaView:(id)arg1;
- (double)mediaNormalHeight;
- (void)setMediaNormalHeight:(double)arg1;
- (double)mediaCurrentHeight;
- (void)setMediaCurrentHeight:(double)arg1;
- (double)mediaMinHeight;
- (void)setMediaMinHeight:(double)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (BOOL)scrollCanScroll;
- (void)setScrollCanScroll:(BOOL)arg1;
- (BOOL)tableCanScroll;
- (void)setTableCanScroll:(BOOL)arg1;
- (double)scrollViewOffset;
- (void)setScrollViewOffset:(double)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (void)setConmmentLoadingView:(id)arg1;
- (void)setCommentCloseTips:(id)arg1;
- (id)currentCommentTipsView;
- (void)setCurrentCommentTipsView:(id)arg1;
- (id)feedbackView;
- (void)setFeedbackView:(id)arg1;
- (id)toolBarBackgroundView;
- (void)setToolBarBackgroundView:(id)arg1;
- (id)toolBarView;
- (void)setToolBarView:(id)arg1;
- (id)headInfoView;
- (void)setHeadInfoView:(id)arg1;
- (id)commentInputView;
- (void)setCommentInputView:(id)arg1;
- (id)currentActionSheet;
- (void)setCurrentActionSheet:(id)arg1;
- (id)miniLBSCard;
- (void)setMiniLBSCard:(id)arg1;
- (id)commentInputCell;
- (void)setCommentInputCell:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)commentViewModel;
- (void)setCommentViewModel:(id)arg1;
- (id)addEmoticonLogic;
- (void)setAddEmoticonLogic:(id)arg1;
- (unsigned long long)createTime;
- (void)setCreateTime:(unsigned long long)arg1;
- (BOOL)isViewWillAppear;
- (void)setIsViewWillAppear:(BOOL)arg1;
- (BOOL)rotating;
- (void)setRotating:(BOOL)arg1;
- (CGSize)layoutSize;
- (void)setLayoutSize:(CGSize)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (double)viewDidAppearTime;
- (void)setViewDidAppearTime:(double)arg1;
- (double)mediaUnexposeStartTime;
- (void)setMediaUnexposeStartTime:(double)arg1;
- (BOOL)isShowHalfScreen;
- (void)setIsShowHalfScreen:(BOOL)arg1;
- (unsigned long long)adPlayerExposeCheckTime;
- (void)setAdPlayerExposeCheckTime:(unsigned long long)arg1;
- (id)extStatReporter;
- (void)setExtStatReporter:(id)arg1;
- (id)vcReporter;
- (void)setVcReporter:(id)arg1;
- (id)vcParams;
- (void)setVcParams:(id)arg1;
- (void)setAdPlayerDict:(id)arg1;
- (id)finderHandoffItem;
- (void)setFinderHandoffItem:(id)arg1;
- (void).cxx_destruct;
@end
