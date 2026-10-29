@interface WCFinderRewardAdViewController : MMUIViewController <WCFinderRewardAdViewModelDelegate, WCFinderFullMultiMediaTableViewCellDelegate, MMScrollActionSheetDelegate, WCFinderPostingCommentExt, WCFinderCommentDetailViewControllerDelegate, WCFinderFeedDetailStatusViewDelegate, WCFinderFeedFriendsLikeListViewControllerDelegate, WCActionSheetDelegate, WCGeneralMonitorDelegate, WCFinderOpenFinderEntryTableViewCellDelegate, WCFinderFeedbackViewDelegate, WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderFansProfileViewControllerDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderAdReportInfoProtocol>
{
    int _commentScene; // +0x70
    WCFinderShareListReportModel * _reportModel; // +0x78
    WCFinderShareCustomTransition * _animator; // +0x80
    WCFinderFeedListView * _feedListView; // +0x88
    WCFinderRewardAdViewModel * _viewModel; // +0x90
    UIView * _moreRelatedView; // +0x98
    WCFinderNearByDescriptionTableViewCell * _descriptionCell; // +0xa0
    UIView * _moreRelatedMaskView; // +0xa8
    WCFinderFeedFriendsLikeListBaseViewController * _tmpLikeListVC; // +0xb0
    WCFinderAdPromotionButton * _adPromotionButton; // +0xb8
    long long _adFeedsCountdownCount; // +0xc0
    long long _totalWatchCount; // +0xc8
    NSTimer * _adCountdownTimer; // +0xd0
    WCFinderFeedbackView * _adFeedbackView; // +0xd8
}
- (double)preferredBottomInsetForStandardOverlay;
- (id)initWithEncrytedObjectidTid:(id)arg1 nonceId:(id)arg2 commentScene:(int)arg3 requestScene:(unsigned long long)arg4 reportModel:(id)arg5 functionalParams:(id)arg6;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidLoad;
- (void)onAppDidEnterBackground;
- (void)onAppWillEnterForeground;
- (void)onLandScapeBtnClick:(id)arg1;
- (void)adReportClickActionType:(long long)arg1 adReportScene:(long long)arg2;
- (void)adReportClickActionType:(long long)arg1 adReportScene:(long long)arg2 ignoreFeedIdMatching:(BOOL)arg3;
- (id)adPromotionButton;
- (void)configAdPromotionBtnForCommentScene;
- (id)adFeedbackView;
- (void)layoutAdPromotionButton;
- (void)layoutAdPanelViews;
- (CGRect)adFeedbackAnchorRect;
- (void)configAdFeedbackView:(id)arg1;
- (void)startAdCountdownTimer;
- (void)stopAdCountdownTimer;
- (void)adCountdownTimerCallBack;
- (void)updateAdCountdownDisplay;
- (BOOL)adHasPlayOver;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)_isCoveredByPushOrPresent;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)enableGestureBack:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidPop:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)willDisappear;
- (void)viewWillLayoutSubviews;
- (void)dealloc;
- (void)configureTableView;
- (void)onClickCloseLeftItem;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)feedCellViewParamModelWithContentVM:(id)arg1;
- (BOOL)isInSubScene;
- (id)moreRelatedView;
- (void)changeMoreRelatedViewHidden:(BOOL)arg1;
- (void)changeMoreRelatedViewHidden:(BOOL)arg1 showAnim:(BOOL)arg2;
- (id)feedIdByIndex:(id)arg1;
- (id)specialParamsForFeedId:(id)arg1;
- (void)finderShareListLoadMoreFinished:(id)arg1 continueFlag:(BOOL)arg2;
- (void)finderShareListFetchDataSuc:(BOOL)arg1;
- (void)finderShareListReplaceFirstItemFinished:(BOOL)arg1;
- (void)reportClickCard;
- (void)finderShareListNoMoreData;
- (void)finderShareListStopCurrentFeedPlay;
- (void)finderShareListOnStateOfNotExist:(id)arg1;
- (void)finderShareListFetchFailWithErrorCode:(int)arg1;
- (void)finderShareListShouldReloadMediaWithTid:(id)arg1;
- (id)getVisibleVideoIndexPathArray:(id)arg1;
- (void)finderFeedListStartMediaPlay;
- (void)finderFeedListVideoMediaIsPause:(BOOL)arg1 pauseType:(long long)arg2;
- (BOOL)onMultiMediaCellIsInHotSpots:(id)arg1;
- (void)clickRecommendUrl:(id)arg1;
- (BOOL)canShowMore;
- (void)onClickLikedListClickMoreActionWith:(id)arg1 ObjectId:(id)arg2;
- (void)onClickLikedListContactWithWith:(id)arg1 LikeInfo:(id)arg2 ObjectID:(id)arg3;
- (void)doBusinessWithCompletion:(id /* block */)arg1;
- (void)fansProfileViewController:(id)arg1 clickFinderActionWithWXUsername:(id)arg2;
- (void)wx_fansProfileViewController:(id)arg1 clickActionWithFinderContact:(id)arg2;
- (void)finderFeedListViewClickFollowLikeBtnWithContentVM:(id)arg1;
- (void)finderFeedListViewClickAvatar:(id)arg1 avatarType:(unsigned long long)arg2 contentVM:(id)arg3;
- (void)finderFeedListClickHeaderMoreAction;
- (void)finderFeedListClickBeginFollowBtnActionWithContentVM:(id)arg1;
- (void)finderFeedListClickToolbarLikeActionWithContentVM:(id)arg1 isPrivateLike:(BOOL)arg2;
- (void)finderFeedListViewDoubleLikeAction:(id)arg1;
- (void)finderFeedListClickAllCommentAction;
- (void)finderFeedListViewClickBigButtonAction:(id)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void)didClickBack:(id)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)adBannerViewClickFeedbackAction;
- (void)closeAdFeedbackView;
- (id)adFeedbackReasonList;
- (id)adFeedbackReasonWithActionType:(long long)arg1 title:(id)arg2;
- (void)openAdFeedbackUrl;
- (void)onFinderFeedbackViewLikeButtonDidClick:(id)arg1;
- (void)onFinderFeedbackViewDislikeButtonDidClick:(id)arg1;
- (void)onFinderFeedbackViewComplainButtonDidClick:(id)arg1;
- (void)onFinderFeedbackViewDidCancel:(id)arg1;
- (void)onFinderFeedbackView:(id)arg1 shouldCloseWithReasons:(id)arg2;
- (void)onFinderFeedbackView:(id)arg1 didClickReason:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (BOOL)finderFeedListView:(id)arg1 customViewAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 customCellForRowAtIndexPath:(id)arg2;
- (double)finderFeedListView:(id)arg1 heightForCustomRowAtIndexPath:(id)arg2;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (unsigned long long)finderFeedListDataBeginRefreshTime:(id)arg1;
- (BOOL)finderFeedListViewCanPreFetchData:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (BOOL)finderFeedListViewIsNoMoreData:(id)arg1;
- (long long)finderFeedListView:(id)arg1 rowOfCustomViewAtSection:(long long)arg2;
- (void)finderFeedListView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (id)finderFeedListViewCustomTableViewParam:(id)arg1 contentVM:(id)arg2;
- (id)reportAdJSONString;
- (id)enterSourceFeedID;
- (id)reportModel;
- (void)setReportModel:(id)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (id)feedListView;
- (void)setFeedListView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setMoreRelatedView:(id)arg1;
- (id)descriptionCell;
- (void)setDescriptionCell:(id)arg1;
- (id)moreRelatedMaskView;
- (void)setMoreRelatedMaskView:(id)arg1;
- (id)tmpLikeListVC;
- (void)setTmpLikeListVC:(id)arg1;
- (void)setAdPromotionButton:(id)arg1;
- (long long)adFeedsCountdownCount;
- (void)setAdFeedsCountdownCount:(long long)arg1;
- (long long)totalWatchCount;
- (void)setTotalWatchCount:(long long)arg1;
- (id)adCountdownTimer;
- (void)setAdCountdownTimer:(id)arg1;
- (void)setAdFeedbackView:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (void).cxx_destruct;
@end
