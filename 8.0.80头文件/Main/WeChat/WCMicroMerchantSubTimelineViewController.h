@interface WCMicroMerchantSubTimelineViewController : WCBaseTimelineViewController <ITranslateSnsMgrExt, IMMGrowTextViewExt, WCCommitViewAnimationDelegate, MMTableViewDelegate, BaseEmoticonViewDelegate, UIViewControllerPreviewingDelegate, WCMicroMerchantAdFeedbackViewDelegate, UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, WCFacadeExt, WCTimeLineCellViewDelegate, EGORefreshTableHeaderDelegate, MMRefreshTableFooterDelegate, InputControllerDelegate, scrollViewDelegate, UIGestureRecognizerDelegate, MMTipsViewControllerDelegate, WCCommentStrangerViewControllerDelegate, WCCommentDetailViewControllerFBDelegate, WCTimeLineCommentCellViewDelegate, ILinkEventExt, WCSetPermissionsViewControllerDelegate, WCSightViewExt, WCContentItemViewExt, WCImageFullScreeViewMgrExt>
{
    BOOL _isViewDidAppear; // +0x70
    BOOL _hasDataSourceChanged; // +0x71
    BOOL _oldBlackList; // +0x72
    BOOL _isEnhanceInteractionEnabled; // +0x73
    BOOL _canReload; // +0x74
    BOOL _startReload; // +0x75
    BOOL _headerViewIsLoading; // +0x76
    BOOL _delayStopFooterLoading; // +0x77
    BOOL _hasSpeedyLoadView; // +0x78
    BOOL _shouldReloadData; // +0x79
    BOOL _shouldForbidRealodData; // +0x7a
    BOOL _isReloadData; // +0x7b
    BOOL _isSubTimelineSizeTransitionInProgress; // +0x7c
    BOOL _isSubTimelineScreenConnectionLayoutInProgress; // +0x7d
    BOOL _isSubTimelineContainerLayoutTransitionActive; // +0x7e
    BOOL _didReloadSubTimelineForContainerLayoutTransition; // +0x7f
    BOOL _usesSubTimelineConnectedScreenContainerSize; // +0x80
    unsigned int _realWsVersion; // +0x84
    id <WCMicroMerchantSubTimelineViewControllerDelegate> _delegate; // +0x88
    MMUIImageView * _arrowImageView; // +0x90
    MMUILabel * _countLabel; // +0x98
    NSString * _latestAutoplayVideoTid; // +0xa0
    WCPasteTextLengthLogic * _pastelogic; // +0xa8
    UIView * _footerViewContainer; // +0xb0
    WCTimeLineFooterView * _footerView; // +0xb8
    EGORefreshTableHeaderView * _headerView; // +0xc0
    WCOperateFloatView * _floatOperateView; // +0xc8
    UIView * _likeEasterEggAvatarView; // +0xd0
    WCSnsLikeEasterEggFocusCenter * _likeEasterEggFocusCenter; // +0xd8
    WCActionButtonFloatView * _dislikeFloatView; // +0xe0
    MicroMerchantTableViewModel * _tableVm; // +0xe8
    WCDataItem * _placeHolder; // +0xf0
    WCDataItem * _cacheDateItem; // +0xf8
    NSString * _userName; // +0x100
    WCMomentsShareScopeMgr * _shareScopeMgr; // +0x108
    long long _newFeedCount; // +0x110
    WCMicroMerchantFeedsGroup * _merchantFeedsGroupItem; // +0x118
    WCMicroMerchantAdFeedbackView * _adFeedbackView; // +0x120
    NSMutableArray * _adReloadIndexPaths; // +0x128
    NSMutableArray * _adInitIndexPaths; // +0x130
    unsigned long long _subTimelineScreenConnectionGeneration; // +0x138
    CGSize _subTimelineContainerLayoutTargetSize; // +0x140
    CGSize _subTimelineLastCommittedContainerSize; // +0x150
    CGSize _subTimelineConnectedScreenContainerSize; // +0x160
    CGRect _likeEasterEggAnchorRect; // +0x170
    CGRect _likeEasterEggFeedRect; // +0x190
}
- (id)init;
- (id)initWithGroupItem:(id)arg1 ofPlaceHolder:(id)arg2;
- (id)getViewModel;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)subTimelineCanReloadForCurrentWindow;
- (BOOL)hasValidSubTimelineContainerSize:(CGSize)arg1;
- (BOOL)subTimelineContainerSize:(CGSize)arg1 isEqualToSize:(CGSize)arg2;
- (BOOL)subTimelineContainerWidth:(double)arg1 matchesConnectedScreenRect:(CGRect)arg2;
- (CGSize)settledSubTimelineContainerSizeForConnectedScreenRect:(CGRect)arg1;
- (BOOL)isSubTimelineContainerSizeChangeInProgress;
- (void)beginSubTimelineContainerLayoutTransitionToSize:(CGSize)arg1;
- (void)updateSubTimelineContainerLayoutTransitionState;
- (double)subTimelineVisibleHeightForContainerSize:(CGSize)arg1;
- (void)updateSubTimelineContainerLayoutForSize:(CGSize)arg1;
- (void)applySubTimelineContainerLayoutForSize:(CGSize)arg1;
- (void)finishSubTimelineContainerLayoutForSize:(CGSize)arg1;
- (void)scheduleSubTimelineConnectedScreenContainerRefresh:(id)arg1 generation:(unsigned long long)arg2 remainingAttempts:(unsigned long long)arg3;
- (void)applySubTimelineConnectedScreen:(id)arg1 rect:(CGRect)arg2 remainingAttempts:(unsigned long long)arg3 generation:(unsigned long long)arg4;
- (void)subTimelineScreenDidConnect:(id)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (id)getViewController;
- (void)adjustViewAndNavBarRect;
- (BOOL)shouldInteractivePop;
- (void)willDisappear;
- (void)willDisshow;
- (void)viewWillPush:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)didDisshow;
- (void)_resetNavBarItem;
- (void)configDataReportForWsFoldSettingBtn:(id)arg1;
- (void)onMoreBarButtonItemClicked:(id)arg1;
- (BOOL)accessibilityScroll:(long long)arg1;
- (id)indexPathOfDataItem:(id)arg1;
- (unsigned long long)sectionIndexForDataItemWithTid:(id)arg1;
- (void)hideFloatView;
- (void)showDetailViewForDataItem:(id)arg1;
- (void)showDetailViewForFailedCommentItem:(id)arg1;
- (void)showDetailViewForFoldedSight:(id)arg1;
- (void)showDetailViewForFoldedImage:(id)arg1;
- (void)showDetailViewForDataItem:(id)arg1 tipType:(long long)arg2;
- (void)showDetailView:(id)arg1;
- (void)tryLogThumbImageLoadedEffiency:(id)arg1;
- (void)onMenuControllerWillShow:(id)arg1;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)onHotVideoOrHotImageItemChange;
- (void)onCommentOrLikeFailQueueChange;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)onNoMoreTimelineData;
- (void)onNormalTimelineData;
- (void)onMediaItemSizeDidChange:(id)arg1;
- (void)onDataItemDeleteFinished:(long long)arg1 dataItemID:(id)arg2;
- (void)onCommentItemDeleteFinished:(long long)arg1 commentItemID:(id)arg2 dataItemID:(id)arg3;
- (void)onReveiceWCMessage:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(CGRect)arg3;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(CGRect)arg3 extraInfo:(id)arg4;
- (void)onViewAnimationWillHide;
- (void)onTextView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)onWCContentItemViewMoreMenu:(id)arg1 sender:(id)arg2;
- (void)onWCContentItemViewExposeMenu:(id)arg1 scene:(long long)arg2;
- (void)onWCContentItemViewOpenedWebViewUseFastLoad:(id)arg1;
- (void)onWCContentItemViewWillEnterFullScreen;
- (void)onWCContentItemViewOutFullScreen;
- (void)onWCContentItemViewOutFullScreenAnimationComplete;
- (void)onViewSightInFullScreen;
- (void)onViewSightOutFullScreen;
- (void)onTranslateSnsChangedFromPhotoContent:(id)arg1;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (void)onDeleteData;
- (void)onDismissViewController:(id)arg1 userName:(id)arg2;
- (void)onWCTimeLineCellViewActionMusic:(id)arg1;
- (void)onWCTimeLineCellViewShowProfile:(id)arg1 jumpData:(id)arg2;
- (void)onWCTimeLineCellViewShowGroup:(id)arg1;
- (void)onWCTimeLineCellViewChangeTranslateLanguage:(id)arg1;
- (void)onCommentDataItem:(id)arg1 point:(CGPoint)arg2;
- (void)onAccessibilityCommentDataItem:(id)arg1;
- (void)onAccessibilityShowDetailDataItem:(id)arg1;
- (void)onUpdateDataItem:(id)arg1 oldHeight:(double)arg2 newHeight:(double)arg3;
- (void)onShowDetailChanged:(id)arg1 bShowDetailBeforeChange:(BOOL)arg2;
- (void)onShowDetailViewForDataItem:(id)arg1;
- (void)onTimeLineCellMoreMenu:(id)arg1;
- (void)onTimeLineCellMoreMenu:(id)arg1 forScene:(unsigned int)arg2;
- (void)onActionLocation:(id)arg1;
- (id)getView;
- (id)getCurTimeLineViewController;
- (void)onEditBlackList:(id)arg1;
- (void)onShowOriginalTextFromTranslate:(id)arg1;
- (void)onActionClearCellCacheAndRefreshCellView:(id)arg1;
- (void)onRestoreTimeLineCellView:(id)arg1;
- (void)onAdvertiseAction:(id)arg1 point:(CGPoint)arg2;
- (void)cacheMediaCellView:(id)arg1 forData:(id)arg2;
- (id)getCachedMediaCellViewForData:(id)arg1;
- (void)onSearchTopicTagClicked:(id)arg1 query:(id)arg2;
- (void)onLinkClickedItem:(id)arg1 url:(id)arg2 backupUrl:(id)arg3 withRect:(CGRect)arg4 extraInfo:(id)arg5;
- (void)onLinkClickedItem:(id)arg1 url:(id)arg2 backupUrl:(id)arg3 withRect:(CGRect)arg4 clickSource:(long long)arg5 originView:(id)arg6;
- (void)onCommentViewDidShowDeleteSelfCommentOption:(id)arg1;
- (void)onFoldAdFeedbackBtnClick:(id)arg1 point:(CGPoint)arg2;
- (void)onFoldAdItemRemoved:(id)arg1;
- (void)onCommentViewTopicTagClicked:(id)arg1 ofDataItem:(id)arg2 query:(id)arg3;
- (void)onWCTimeLineCommentCellOpenFullText:(id)arg1 ofDataItem:(id)arg2;
- (void)onWCTimeLineCommentCellDeleteComment:(unsigned long long)arg1 ofDataItem:(id)arg2;
- (void)onReplyComment:(id)arg1 ofDataItem:(id)arg2 ofTouchedView:(id)arg3;
- (void)onReloadCommentView:(id)arg1 ofDataItem:(id)arg2;
- (void)onRestoreCommentView:(id)arg1 ofDataItem:(id)arg2;
- (void)onCommentViewChangeTranslateLanguage:(id)arg1 ofDataItem:(id)arg2;
- (void)mmTableView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)mmTableView:(id)arg1 touchesMoved:(id)arg2 withEvent:(id)arg3;
- (void)mmTableView:(id)arg1 touchesEnded:(id)arg2 withEvent:(id)arg3;
- (void)mmTableView:(id)arg1 touchesCancelled:(id)arg2 withEvent:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)likeEasterEggFocusCenter;
- (void)applyLikeEasterEggDimToCell:(id)arg1 dataItem:(id)arg2;
- (void)applyLikeEasterEggDimProgressToCell:(id)arg1 dataItem:(id)arg2 progress:(double)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollToTop;
- (void)keyboardWillShow;
- (void)keyboardWillHide;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewDidClickDictationStartIntent:(id)arg1;
- (void)inputControllerDidExposeDictationIcon:(id)arg1;
- (void)onGrowTextViewMenuItemClicked:(unsigned long long)arg1;
- (void)onGrowTextViewDidShowMenuControllerWithMenuItemArr:(id)arg1;
- (void)onHideKeyboard;
- (void)textViewTextDidChange;
- (void)onTextChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)growTextViewDidClickSendWithText:(id)arg1;
- (BOOL)getInputControllerSendButtonCanSendState;
- (void)didCommitEmptyText;
- (void)didCommitText:(id)arg1;
- (void)sendComment:(id)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (BOOL)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (BOOL)onRefreshFooterView:(id)arg1 clickedAtState:(unsigned long long)arg2;
- (void)showContactInfo;
- (void)OnFinishComment:(BOOL)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)panned:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)autoplayVideoProcess;
- (void)throttleScrollProcess;
- (void)videoPreloadProcess;
- (void)realAutoPlayVideo;
- (void)autoPauseLatestAutoplayVideo;
- (void)hideMenu;
- (void)editBlackList:(id)arg1 forSource:(long long)arg2;
- (void)editShield:(id)arg1;
- (void)editShield:(id)arg1 forScene:(long long)arg2;
- (id)shareScopeMgr;
- (double)totalHeightFromTopToSection:(unsigned long long)arg1;
- (void)showComment:(id)arg1 refComment:(id)arg2 touchedView:(id)arg3 isActionAtAd:(BOOL)arg4;
- (void)onClickCommentBtnOnFloatView;
- (void)onTouchDownLikeBtnOnFloatView;
- (BOOL)captureLikeEasterEggAnchorRect:(id)arg1 fallbackToFloatBtn:(BOOL)arg2;
- (void)animateLikeEasterEggDimTransitionWithRestore:(BOOL)arg1;
- (void)_initTableView;
- (void)_initFooterView;
- (void)_resizeFooterView;
- (void)_showUnfoldActionSheet;
- (void)_onUnfoldActionSheet:(id)arg1 clickedAtIndex:(long long)arg2;
- (void)_showFooterByCheckingFoldingState;
- (void)_showUnfoldButtonFooter;
- (void)_showAlreadyUnfoldedTitleFooter;
- (void)updateContentOffset;
- (void)updateGrowTextViewMaxHeight;
- (double)maxGrowTextViewHeight;
- (void)genNormalCell:(id)arg1 indexPath:(id)arg2;
- (id)createAdCellView:(id)arg1;
- (void)setAnimatedImageHidden:(BOOL)arg1 withTimeLineCellView:(id)arg2;
- (void)onTimeLineViewReturn;
- (void)resetStatus:(BOOL)arg1;
- (void)tryResumeStatus;
- (void)refreshWholeView;
- (void)onLoadMore;
- (void)_fetchServerDataAndOverrideLocal:(BOOL)arg1;
- (void)_firstBatchFetchServerDataAndOverrideLocal:(BOOL)arg1 addLocalData:(BOOL)arg2;
- (void)reloadTableView;
- (void)reloadDataWrap;
- (void)delayReload;
- (void)_reloadDataForTableView;
- (void)clearWCCache;
- (void)cacheInputText;
- (void)scrollEndReloadTableView;
- (void)p_reloadTableViewContent;
- (void)handleAfterReloadTableView;
- (void)jumpToUserProfile:(id)arg1 Displayname:(id)arg2 Scence:(unsigned int)arg3 userData:(id)arg4;
- (void)handleUrl:(id)arg1 backupUrl:(id)arg2 item:(id)arg3 extraAdInfo:(id)arg4 clickSource:(long long)arg5 originView:(id)arg6;
- (void)handleUrl:(id)arg1 backupUrl:(id)arg2 item:(id)arg3 extraAdInfo:(id)arg4;
- (void)handleUrl:(id)arg1 backupUrl:(id)arg2 item:(id)arg3;
- (void)handleUrl:(id)arg1 backupUrl:(id)arg2;
- (void)hideAndResetDislikeFloatView;
- (void)ensureInitDislikeActionFloatView;
- (void)onDislike:(id)arg1;
- (void)_onPrivacyActionSheet:(id)arg1 clickedAtIndex:(long long)arg2;
- (void)onCommentViewExposureForItem:(id)arg1 comment:(id)arg2;
- (void)onCommentViewClickForItem:(id)arg1 comment:(id)arg2;
- (void)onCommentViewEmoticonClickForItem:(id)arg1 comment:(id)arg2;
- (void)onCommentViewPicClickForItem:(id)arg1 comment:(id)arg2;
- (void)onCommentViewAddEmotionForItem:(id)arg1 comment:(id)arg2;
- (void)resetAdFeedbackView;
- (void)onAdFeedbackDisappear:(id)arg1;
- (void)onClickComplainBtn:(id)arg1 dataItem:(id)arg2;
- (void)onClickNegativeBtn:(id)arg1;
- (void)onClickNegativeReasonBtn:(id)arg1 dataItem:(id)arg2;
- (void)removeFoldAdAndReportFeedback:(id)arg1 reasonList:(id)arg2;
- (void)onClickPositiveBtn:(id)arg1;
- (void)initAdLogic;
- (void)willDisplayAdCell:(id)arg1 forRowAtIndexPath:(id)arg2 tableView:(id)arg3;
- (void)didEndDisplayingAdCell:(id)arg1 forRowAtIndexPath:(id)arg2 tableView:(id)arg3;
- (void)notifyAdCellDidScroll;
- (id)fetchMerchantAdView:(id)arg1;
- (void)adViewDidAppear;
- (void)adViewDidDisappear;
- (void)adScrollViewDidScroll;
- (void)adOnTimelineViewReturn;
- (id)getVisibleAdCellView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)countLabel;
- (void)setCountLabel:(id)arg1;
- (id)latestAutoplayVideoTid;
- (void)setLatestAutoplayVideoTid:(id)arg1;
- (BOOL)isViewDidAppear;
- (void)setIsViewDidAppear:(BOOL)arg1;
- (id)pastelogic;
- (void)setPastelogic:(id)arg1;
- (BOOL)hasDataSourceChanged;
- (void)setHasDataSourceChanged:(BOOL)arg1;
- (BOOL)oldBlackList;
- (void)setOldBlackList:(BOOL)arg1;
- (BOOL)isEnhanceInteractionEnabled;
- (void)setIsEnhanceInteractionEnabled:(BOOL)arg1;
- (BOOL)canReload;
- (void)setCanReload:(BOOL)arg1;
- (BOOL)startReload;
- (void)setStartReload:(BOOL)arg1;
- (id)footerViewContainer;
- (void)setFooterViewContainer:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (BOOL)headerViewIsLoading;
- (void)setHeaderViewIsLoading:(BOOL)arg1;
- (id)floatOperateView;
- (void)setFloatOperateView:(id)arg1;
- (BOOL)delayStopFooterLoading;
- (void)setDelayStopFooterLoading:(BOOL)arg1;
- (CGRect)likeEasterEggAnchorRect;
- (void)setLikeEasterEggAnchorRect:(CGRect)arg1;
- (id)likeEasterEggAvatarView;
- (void)setLikeEasterEggAvatarView:(id)arg1;
- (CGRect)likeEasterEggFeedRect;
- (void)setLikeEasterEggFeedRect:(CGRect)arg1;
- (void)setLikeEasterEggFocusCenter:(id)arg1;
- (BOOL)hasSpeedyLoadView;
- (void)setHasSpeedyLoadView:(BOOL)arg1;
- (BOOL)shouldReloadData;
- (void)setShouldReloadData:(BOOL)arg1;
- (BOOL)shouldForbidRealodData;
- (void)setShouldForbidRealodData:(BOOL)arg1;
- (id)dislikeFloatView;
- (void)setDislikeFloatView:(id)arg1;
- (id)tableVm;
- (void)setTableVm:(id)arg1;
- (id)placeHolder;
- (void)setPlaceHolder:(id)arg1;
- (id)cacheDateItem;
- (void)setCacheDateItem:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (void)setShareScopeMgr:(id)arg1;
- (unsigned int)realWsVersion;
- (void)setRealWsVersion:(unsigned int)arg1;
- (long long)newFeedCount;
- (void)setNewFeedCount:(long long)arg1;
- (id)merchantFeedsGroupItem;
- (void)setMerchantFeedsGroupItem:(id)arg1;
- (id)adFeedbackView;
- (void)setAdFeedbackView:(id)arg1;
- (id)adReloadIndexPaths;
- (void)setAdReloadIndexPaths:(id)arg1;
- (id)adInitIndexPaths;
- (void)setAdInitIndexPaths:(id)arg1;
- (BOOL)isReloadData;
- (void)setIsReloadData:(BOOL)arg1;
- (BOOL)isSubTimelineSizeTransitionInProgress;
- (void)setIsSubTimelineSizeTransitionInProgress:(BOOL)arg1;
- (BOOL)isSubTimelineScreenConnectionLayoutInProgress;
- (void)setIsSubTimelineScreenConnectionLayoutInProgress:(BOOL)arg1;
- (BOOL)isSubTimelineContainerLayoutTransitionActive;
- (void)setIsSubTimelineContainerLayoutTransitionActive:(BOOL)arg1;
- (BOOL)didReloadSubTimelineForContainerLayoutTransition;
- (void)setDidReloadSubTimelineForContainerLayoutTransition:(BOOL)arg1;
- (unsigned long long)subTimelineScreenConnectionGeneration;
- (void)setSubTimelineScreenConnectionGeneration:(unsigned long long)arg1;
- (CGSize)subTimelineContainerLayoutTargetSize;
- (void)setSubTimelineContainerLayoutTargetSize:(CGSize)arg1;
- (CGSize)subTimelineLastCommittedContainerSize;
- (void)setSubTimelineLastCommittedContainerSize:(CGSize)arg1;
- (BOOL)usesSubTimelineConnectedScreenContainerSize;
- (void)setUsesSubTimelineConnectedScreenContainerSize:(BOOL)arg1;
- (CGSize)subTimelineConnectedScreenContainerSize;
- (void)setSubTimelineConnectedScreenContainerSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
