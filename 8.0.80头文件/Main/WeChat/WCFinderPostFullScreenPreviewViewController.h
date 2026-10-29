@interface WCFinderPostFullScreenPreviewViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderFeedContentVMExt, WCFinderFullMultiMediaTableViewCellDelegate, WCFinderFeedBaseViewControllerProtocol, MMScrollActionSheetDelegate, WCFinderFeedBaseViewControllerProtocol, WCActionSheetDelegate, WCFinderCardWebViewControllerDelegate, RingBackInfoDisplaySheetViewDelegate, WCGeneralMonitorDelegate>
{
    BOOL _needsResumeTimelineVideo; // +0x70
    BOOL _isAuthorPerspective; // +0x71
    BOOL _showDeleteEntry; // +0x72
    id <WCFinderPostFullScreenPreviewViewControllerDelegate> _delegate; // +0x78
    WCFinderFeedContentVM * _contentVM; // +0x80
    WCFinderShareCustomTransition * _animator; // +0x88
    WCFinderPostSessionModel * _postSession; // +0x90
    UITableView * _tableView; // +0x98
    double _currentVideoPlayProgress; // +0xa0
    UIButton * _closeButton; // +0xa8
    MMUIButton * _showHalfMediaButton; // +0xb0
    id /* block */ _dismissBlock; // +0xb8
    unsigned long long _toolbarDisableConfig; // +0xc0
    UIButton * _deleteButton; // +0xc8
}
- (id)initWithDismissBlock:(id /* block */)arg1 toolbarDisableConfig:(unsigned long long)arg2 isAuthorPerspective:(BOOL)arg3 showDeleteEntry:(BOOL)arg4;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)showHalfMediaButton;
- (void)onClickShowHalfMediaButtonAction;
- (id)closeButton;
- (void)onCloseButtonClicked;
- (id)deleteButton;
- (void)onDeleteButtonClicked;
- (void)configureTableView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (void)throttleStartPlayProcess;
- (void)startVideoPlay;
- (void)stopCurrentMedia;
- (void)needsUpdateCurrentVideo:(BOOL)arg1;
- (void)resetCurrentVideoThumb;
- (void)updateCurrentVideoThumb;
- (void)addObserverForForegroundNotification;
- (void)removeObserverForForegroundNotification;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)cellEndExpose;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)feedCellViewParamModelWithContentVM:(id)arg1;
- (BOOL)isInSubScene;
- (id)feedIdByIndex:(id)arg1;
- (id)getListView;
- (void)reloadDataWrap;
- (id)specialParamsForFeedId:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)onFeedContentUserFollowStateChangedWithContentVM:(id)arg1;
- (void)photoContentPageTurning:(id)arg1 currentPage:(unsigned long long)arg2 lastPage:(unsigned long long)arg3;
- (void)retryLoadingVideoResource:(BOOL)arg1;
- (void)onFeedVideoStopPlay:(id)arg1 tid:(id)arg2;
- (BOOL)onMultiMediaCellIsInHotSpots:(id)arg1;
- (unsigned long long)feedViewerScene;
- (void)onClickEventEntry:(id)arg1;
- (void)onRefreshContentCellUI:(id)arg1;
- (BOOL)finderMulitMediaTableViewCellCanProgressGestureWithTid:(id)arg1;
- (void)onFinderVideoPlayerStartPlay;
- (void)onFeedCellDidClickAvatar:(id)arg1 avatarType:(unsigned long long)arg2 contentVM:(id)arg3 cell:(id)arg4 jumpInfo:(id)arg5;
- (void)reportFeedAvatarClickWithContentVM:(id)arg1 avatarType:(unsigned long long)arg2;
- (void)updateMetaModelWhenPositiveLogicBeTriggered:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (int)feedViewControllerScene;
- (id)currentFeedMediaCell;
- (void)contentMediaDidEndPlay:(unsigned long long)arg1 contentVM:(id)arg2 finderPlayerReport:(id)arg3;
- (void)didFeedDoubleLikeAction:(id)arg1;
- (void)likeFeedContentVMAction:(id)arg1 isPrivateLike:(BOOL)arg2;
- (void)onHeaderMoreClickAction:(id)arg1 shareButton:(id)arg2;
- (void)onHeaderFollowBtnClickAction:(id)arg1 followButton:(id)arg2;
- (void)onClickViewAllCommentAction:(id)arg1 isActiveInput:(BOOL)arg2 isFromCommentButton:(BOOL)arg3;
- (void)showCommentListWithContentVM:(id)arg1 shouldEnterKeyBoard:(BOOL)arg2 refCommentID:(unsigned long long)arg3 commentAction:(unsigned long long)arg4 enterType:(unsigned long long)arg5;
- (void)onClickToolbarLikeAction:(id)arg1 isPrivateLike:(BOOL)arg2;
- (void)clickRecommentUrl:(id)arg1;
- (void)onClickToolbarCollectionAction:(id)arg1 sourceType:(int)arg2;
- (void)didFeedDoubleThumbLikeAction:(id)arg1;
- (void)handleFavoriteActionWithContentVM:(id)arg1 sourceType:(int)arg2;
- (void)onClickContentReadMoreAction:(id)arg1 isExpand:(BOOL)arg2;
- (void)onContentTableViewMediaTableViewCell:(id)arg1 longPressContentAction:(id)arg2 rect:(CGRect)arg3;
- (void)onClickContentExtReadingAction:(id)arg1;
- (void)clickContentPOIAction:(id)arg1;
- (void)onClickContentTopicAction:(id)arg1 dataItem:(id)arg2;
- (void)onClickContentMentionAction:(id)arg1 nickname:(id)arg2 dataItem:(id)arg3;
- (void)onClickContentUsernameAction:(id)arg1;
- (void)onClickToolbarFeedAllLikeAction:(id)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (void)onFinderCardWebViewControllerJumpToOthers;
- (void)onFinderCardWebViewControllerWillResume;
- (void)onFinderCardWebViewControllerWillBeClosed;
- (void)onRingToneSheetDisappear;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (id)postSession;
- (void)setPostSession:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (BOOL)needsResumeTimelineVideo;
- (void)setNeedsResumeTimelineVideo:(BOOL)arg1;
- (double)currentVideoPlayProgress;
- (void)setCurrentVideoPlayProgress:(double)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setShowHalfMediaButton:(id)arg1;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg1;
- (unsigned long long)toolbarDisableConfig;
- (void)setToolbarDisableConfig:(unsigned long long)arg1;
- (BOOL)isAuthorPerspective;
- (void)setIsAuthorPerspective:(BOOL)arg1;
- (void)setDeleteButton:(id)arg1;
- (BOOL)showDeleteEntry;
- (void)setShowDeleteEntry:(BOOL)arg1;
- (void).cxx_destruct;
@end
