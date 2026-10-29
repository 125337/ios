@interface WCMicroMerchantSubTimelineViewController : WCBaseTimelineViewController <ITranslateSnsMgrExt, IMMGrowTextViewExt, WCCommitViewAnimationDelegate, MMTableViewDelegate, BaseEmoticonViewDelegate, UIViewControllerPreviewingDelegate, UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, WCFacadeExt, WCTimeLineCellViewDelegate, EGORefreshTableHeaderDelegate, MMRefreshTableFooterDelegate, InputControllerDelegate, scrollViewDelegate, UIGestureRecognizerDelegate, MMTipsViewControllerDelegate, WCCommentStrangerViewControllerDelegate, WCCommentDetailViewControllerFBDelegate, WCTimeLineCommentCellViewDelegate, ILinkEventExt, WCSetPermissionsViewControllerDelegate, WCSightViewExt, WCContentItemViewExt, WCImageFullScreeViewMgrExt>
{
    BOOL _isViewDidAppear; // +0x68
    BOOL _hasDataSourceChanged; // +0x69
    BOOL _oldBlackList; // +0x6a
    BOOL _isEnhanceInteractionEnabled; // +0x6b
    BOOL _canReload; // +0x6c
    BOOL _startReload; // +0x6d
    BOOL _headerViewIsLoading; // +0x6e
    BOOL _delayStopFooterLoading; // +0x6f
    BOOL _hasSpeedyLoadView; // +0x70
    BOOL _shouldReloadData; // +0x71
    BOOL _shouldForbidRealodData; // +0x72
    id <WCMicroMerchantSubTimelineViewControllerDelegate> _delegate; // +0x78
    MMUIImageView * _arrowImageView; // +0x80
    MMUILabel * _countLabel; // +0x88
    NSString * _latestAutoplayVideoTid; // +0x90
    WCPasteTextLengthLogic * _pastelogic; // +0x98
    UIView * _footerViewContainer; // +0xa0
    WCTimeLineFooterView * _footerView; // +0xa8
    EGORefreshTableHeaderView * _headerView; // +0xb0
    WCOperateFloatView * _floatOperateView; // +0xb8
    WCActionButtonFloatView * _dislikeFloatView; // +0xc0
    WCSubTimelineSessionMgr * _subTimelineSessionMgr; // +0xc8
    MicroMerchantTableViewModel * _tableVm; // +0xd0
    WCDataItem * _placeHolder; // +0xd8
    WCDataItem * _cacheDateItem; // +0xe0
    NSString * _userName; // +0xe8
    WCMomentsShareScopeMgr * _shareScopeMgr; // +0xf0
}
- (id)init;
- (id)initWithGroupItem:(id)arg1 ofPlaceHolder:(id)arg2;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
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
- (void)onWCTimeLineCellViewShowProfile:(id)arg1;
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
- (void)onCommentViewTopicTagClicked:(id)arg1 ofDataItem:(id)arg2 query:(id)arg3;
- (void)onWCTimeLineCommentCellOpenFullText:(id)arg1 ofDataItem:(id)arg2;
- (void)onWCTimeLineCommentCellDeleteComment:(unsigned long long)arg1 ofDataItem:(id)arg2;
- (void)onReplyComment:(id)arg1 ofDataItem:(id)arg2 ofTouchedView:(id)arg3;
- (void)onReloadCommentView:(id)arg1 ofDataItem:(id)arg2;
- (void)onRestoreCommentView:(id)arg1 ofDataItem:(id)arg2;
- (void)onCommentViewEmotionViewSingleClicked:(id)arg1 ofDataItem:(id)arg2 withRect:(CGRect)arg3;
- (void)onCommentViewChangeTranslateLanguage:(id)arg1 ofDataItem:(id)arg2;
- (void)mmTableView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)mmTableView:(id)arg1 touchesMoved:(id)arg2 withEvent:(id)arg3;
- (void)mmTableView:(id)arg1 touchesEnded:(id)arg2 withEvent:(id)arg3;
- (void)mmTableView:(id)arg1 touchesCancelled:(id)arg2 withEvent:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
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
- (void)onHideKeyboard;
- (void)textViewTextDidChange;
- (void)onTextChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)growTextViewDidClickSendWithText:(id)arg1;
- (void)didCommitText:(id)arg1;
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
- (void)setAnimatedImageHidden:(BOOL)arg1 withTimeLineCellView:(id)arg2;
- (void)onTimeLineViewReturn;
- (void)resetStatus:(BOOL)arg1;
- (void)tryResumeStatus;
- (void)refreshWholeView;
- (void)onLoadMore;
- (void)_fetchServerDataAndOverrideLocal:(BOOL)arg1;
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
- (BOOL)hasSpeedyLoadView;
- (void)setHasSpeedyLoadView:(BOOL)arg1;
- (BOOL)shouldReloadData;
- (void)setShouldReloadData:(BOOL)arg1;
- (BOOL)shouldForbidRealodData;
- (void)setShouldForbidRealodData:(BOOL)arg1;
- (id)dislikeFloatView;
- (void)setDislikeFloatView:(id)arg1;
- (id)subTimelineSessionMgr;
- (void)setSubTimelineSessionMgr:(id)arg1;
- (id)tableVm;
- (void)setTableVm:(id)arg1;
- (id)placeHolder;
- (void)setPlaceHolder:(id)arg1;
- (id)cacheDateItem;
- (void)setCacheDateItem:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (void)setShareScopeMgr:(id)arg1;
- (void).cxx_destruct;
@end

