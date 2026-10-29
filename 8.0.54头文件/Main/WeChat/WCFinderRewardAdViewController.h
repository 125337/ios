@interface WCFinderRewardAdViewController : MMUIViewController <WCFinderRewardAdViewModelDelegate, WCFinderFullMultiMediaTableViewCellDelegate, MMScrollActionSheetDelegate, WCFinderPostingCommentExt, WCFinderCommentDetailViewControllerDelegate, WCFinderFeedDetailStatusViewDelegate, WCFinderFeedFriendsLikeListViewControllerDelegate, WCActionSheetDelegate, WCGeneralMonitorDelegate, WCFinderOpenFinderEntryTableViewCellDelegate, WCFinderAdCountdownBannerViewDelegate, WCFinderAdFeedbackPanelViewDelegate, WCFinderAdDislikeReasonPanelViewDelegate, WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderFansProfileViewControllerDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderAdReportInfoProtocol>
{
    WCFinderShareListReportModel * _reportModel; // +0x68
    WCFinderShareCustomTransition * _animator; // +0x70
    WCFinderFeedListView * _feedListView; // +0x78
    WCFinderRewardAdViewModel * _viewModel; // +0x80
    UIView * _moreRelatedView; // +0x88
    WCFinderNearByDescriptionTableViewCell * _descriptionCell; // +0x90
    UIView * _moreRelatedMaskView; // +0x98
    WCFinderFeedFriendsLikeListViewController * _tmpLikeListVC; // +0xa0
    WCFinderAdCountdownBannerView * _adBannerView; // +0xa8
    long long _adFeedsCountdownCount; // +0xb0
    WCFinderAdFeedbackPanelView * _adFeedbackView; // +0xb8
    WCFinderAdDislikeReasonPanelView * _adDislikeReasonPanelView; // +0xc0
}
- (id)initWithEncrytedObjectidTid:(id)arg1 nonceId:(id)arg2 requestScene:(unsigned long long)arg3 reportModel:(id)arg4 functionalParams:(id)arg5;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidLoad;
- (void)onLandScapeBtnClick:(id)arg1;
- (void)adReportClickActionType:(long long)arg1 adReportScene:(long long)arg2;
- (void)adReportClickActionType:(long long)arg1 adReportScene:(long long)arg2 ignoreFeedIdMatching:(BOOL)arg3;
- (id)adBannerView;
- (id)adFeedbackView;
- (id)adDislikeReasonPanelView;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)arg1;
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
- (void)finderFeedListVideoMediaIsPause:(BOOL)arg1;
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
- (void)onClickAdFeedbackPanelLeftButton;
- (void)onClickAdFeedbackPanelCenterButton;
- (void)onClickAdFeedbackPanelBottomButton;
- (void)onClickAdFeedbackPanelMaskView;
- (void)onClickAdDislikeReasonPanelRightTopButton;
- (void)onClickAdDislikeReasonPanelLeftButton;
- (void)onClickAdDislikeReasonPanelCenterButton;
- (void)onClickAdDislikeReasonPanelRightButton;
- (void)onClickAdDislikeReasonPanelBottomButton;
- (void)onClickAdDislikeReasonPanelMaskView;
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
- (void)setAdBannerView:(id)arg1;
- (long long)adFeedsCountdownCount;
- (void)setAdFeedsCountdownCount:(long long)arg1;
- (void)setAdFeedbackView:(id)arg1;
- (void)setAdDislikeReasonPanelView:(id)arg1;
- (void).cxx_destruct;
@end

