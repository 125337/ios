@interface WCTimeLineViewController : WCBaseTimelineViewController <WCFinderShareCustomTransitionProtocol, ITranslateSnsMgrExt, MMSightCameraViewControllerDelegate, WCAdvertiseActionFloatViewDelegate, MMNavBarInteractiveDelegate, IMMGrowTextViewExt, WCTimelineTrashMgrExt, WCAdvertiseFeedbackViewDelegate, WCTimelineFPSMonitorDelegate, WCTimelineLogicControllerDelegate, WCMomentsFinderRecommendationManagerExt, WCMomentsNewDataSeparatorCellDelegate, MMTableViewDelegate, WCTimelineFooterCellDelegate, BaseEmoticonViewDelegate, WCCommitViewAnimationDelegate, UIViewControllerPreviewingDelegate, WCFinderSnSLiveSectionTableViewCellDelegate, WCUnreadTipsTableViewCellDelegate, TLProfileDragAnimateHelperDelegate, WCPlayerConfigFullScreenViewControllerPostDelegate, WCBGImgLogicExt, WCVideoProducerViewControllerDelegate, IUpdateProfileMgrExt, MJTemplateFullScreenViewControllerPostDelegate, WCAdFireworkCheerInviteFriendCellDelegate, NewLifePostEndDelegate, UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, WCFacadeExt, WCTimeLineCellViewDelegate, EGORefreshTableHeaderDelegate, MMRefreshTableFooterDelegate, InputControllerDelegate, scrollViewDelegate, UIGestureRecognizerDelegate, WCListHeaderViewDelegate, MMTipsViewControllerDelegate, WCCommentStrangerViewControllerDelegate, WCCommentDetailViewControllerFBDelegate, WCTimeLineCommentCellViewDelegate, ILinkEventExt, WCSetPermissionsViewControllerDelegate, IMMFacebookMgrExt, MMImagePickerManagerDelegate, WCPlainTextTipFullScreenViewDelegate, WCSightViewExt, WCContentItemViewExt, WCImageFullScreeViewMgrExt, WCTimeLineContactSelectViewControllerDelegate, WCMicroMerchantSubTimelineViewControllerDelegate, WCFinderPostEditEntrySnsProtocol>
{
    BOOL m_isReflashingHead; // +0x70
    BOOL m_isDelayStopFooterLoading; // +0x71
    BOOL m_bTapHeaderView; // +0x72
    BOOL m_bLongPressRightButton; // +0x73
    BOOL m_hasSpeedyLoadView; // +0x74
    BOOL m_shouldReloadData; // +0x75
    BOOL m_shouldForbidRealodData; // +0x76
    NSArray * m_arrUploadFailItems; // +0x78
    NSArray * m_arrCommentFailItems; // +0x80
    NSArray * m_arrLikeFailItems; // +0x88
    NSArray * m_arrFailureCancelLikeItems; // +0x90
    WCDataItem * m_SightFoldItem; // +0x98
    WCDataItem * m_ImageFoldItem; // +0xa0
    NSString * m_userName; // +0xa8
    BOOL m_hasBeginTimeline; // +0xb0
    double m_lastWCCanvasContentHeight; // +0xb8
    BOOL m_hasDataSourceChanged; // +0xc0
    BOOL m_oldBlackList; // +0xc1
    map<long, mmsns::TimeLineSectionType, std::less<long>, std::allocator<std::pair<const long, mmsns::TimeLineSectionType>>> m_sectionIndexToType; // +0xc8
    BOOL _isStayInPage; // +0xe0
    BOOL _hasOpenedWebViewUseFastLoad; // +0xe1
    BOOL _hasInvokeFastLoadPVBiz; // +0xe2
    NSMutableSet * _setFastLoadTemplateType; // +0xe8
    BOOL _isFirstEntering; // +0xf0
    BOOL _hasNewPhotoWhenEnter; // +0xf1
    BOOL _hasRefrashHead; // +0xf2
    BOOL _openPostActionDirectly; // +0xf3
    BOOL _postTextDirectly; // +0xf4
    BOOL _isEnhanceInteractionEnabled; // +0xf5
    BOOL _canReload; // +0xf6
    BOOL _startReload; // +0xf7
    BOOL _isScrolling; // +0xf8
    BOOL _isScrollBouncingOnBottom; // +0xf9
    BOOL _isActionAtAd; // +0xfa
    BOOL _canShowFinderShareButton; // +0xfb
    BOOL _canShowBizShareButton; // +0xfc
    BOOL _isUseStablizeFinderShareButton; // +0xfd
    BOOL _canShowNewLifeShareButton; // +0xfe
    BOOL _isViewDidAppear; // +0xff
    BOOL _canLogDataList; // +0x100
    BOOL _isReloadingData; // +0x101
    BOOL _hasChangedFoldedState; // +0x102
    BOOL _isModifyingStarStatus; // +0x103
    WCTogetherTailReporter * _togetherTailReporter; // +0x108
    WCMomentsTigerReporter * _tigerReporter; // +0x110
    id <WCTimeLineViewControllerDelegate> _delegate; // +0x118
    NSString * _redDotInfoStr; // +0x120
    WCDataItem * _postingFinderDataItem; // +0x128
    WCTimeLineHeaderView * _headRefreshView; // +0x130
    WCTimeLineFooterView * _footerView; // +0x138
    WCListHeaderView * _headerView; // +0x140
    MMTipsViewController * _introView; // +0x148
    UIButton * _messageTipView; // +0x150
    MMHeadImageView * _messageHeaderView; // +0x158
    WCOperateFloatView * _floatOperateView; // +0x160
    WCPlainTextTipFullScreenView * _plainTextFullScreenView; // +0x168
    long long _messageTipCount; // +0x170
    NSString * _messageTipUserName; // +0x178
    WCDataItem * _cacheDateItem; // +0x180
    UIView * _animationView; // +0x188
    CContact * _atContact; // +0x190
    WCPasteTextLengthLogic * _pastelogic; // +0x198
    WCMomentsPostReportSession * _postReportSession; // +0x1a0
    double _minimumVideoDurationForFinderShare; // +0x1a8
    long long _minimumImageCountForFinderShare; // +0x1b0
    long long _alwaysAllowsImagesWithPOIForFinderShare; // +0x1b8
    NSString * _finderShareTips; // +0x1c0
    UIButton * _reEditButton; // +0x1c8
    UIButton * _reEditTipButton; // +0x1d0
    WCDataItem * _redditItemPlaceHolder; // +0x1d8
    UIView * _commentEmotionBgView; // +0x1e0
    WCCommentEmotionFloatView * _commentEmotionView; // +0x1e8
    NSMutableDictionary * _commentEmotionReportDict; // +0x1f0
    SharePreConfirmSheetView * _sharePreConfirmSheetView; // +0x1f8
    NSString * _latestAutoplayVideoTid; // +0x200
    WCTimeLineVideoPreloadMgr * _videoPreloadMgr; // +0x208
    WCDataItem * _jumpItem; // +0x210
    WCTimeLineFooterView * _headViewForJumpState; // +0x218
    NSString * _missReadItemIdToJump; // +0x220
    WCDataItem * _missReadItem; // +0x228
    WCAdvertiseFeedbackBaseView * _adFeedbackView; // +0x230
    WCADPageWrap * _floatViewPageWrap; // +0x238
    NSMutableArray * _adReloadIndexPaths; // +0x240
    NSMutableArray * _adInitIndexPaths; // +0x248
    WCAdvertiseActionFloatView * _advertiseActionFloatView; // +0x250
    WCTimelineFPSLabel * _fpsLabel; // +0x258
    WCTimelineFPSMonitor * _fpsMonitor; // +0x260
    WCScrollViewMonitor * _scrollViewMonitor; // +0x268
    MMUIButton * _listFrontView; // +0x270
    UIPanGestureRecognizer * _headerPanGestureRecognizer; // +0x278
    TLProfileDragAnimateHelper * _animateHelper; // +0x280
    TLProfileExpandableHeaderView * _expandableHeader; // +0x288
    CContact * _profileContact; // +0x290
    TLProfileModel * _profileModel; // +0x298
    WCCoverActionReporter * _coverActionReporter; // +0x2a0
    WCMomentsTemplateShareInfo * _usingTemplateShareInfo; // +0x2a8
    WCFinderSnSShareLiveLogicController * _finderSnSShareLiveLogicController; // +0x2b0
    NSMutableDictionary * _dataControllers; // +0x2b8
    WCMomentsShareScopeMgr * _shareScopeMgr; // +0x2c0
    WCTimelineDeleteDataItemWrap * _deleteDataItemWrap; // +0x2c8
}
- (void)handleAppmsgWhenEnterPage;
- (void)handleAppmsgWhenWillExitPage;
- (void)handleAppmsgWhenDidExitPage;
- (void)handleAppmsgWhenInPage;
- (unsigned int)currPageAppmsgEnterType;
- (unsigned int)currPageAppmsgReportScene;
- (void)doPreCreateWebViewAndUpdateTemplateAndBatchReport:(id)arg1;
- (BOOL)isDataItemValidAfterCheckForwardAndUrlDomain:(id)arg1 needCheckItemShowType:(BOOL)arg2;
- (void)doResetAppMsgExposureParameter;
- (BOOL)isForwardAppmsg:(id)arg1;
- (BOOL)isAppmsgSupportExposure:(id)arg1;
- (void)recordAllAppmsgExposureInfoForVisibleCells;
- (void)reportAppmsgExposureInfoForDataItem:(id)arg1;
- (void)reportAllAppmsgExposureInfoForVisibleCells;
- (void)dataItemOpenedWebViewUseFastLoad:(id)arg1;
- (void)preDownloadPageDataForVisibleCells;
- (void)doShareAnimation;
- (id)init;
- (void)initDataControllers;
- (void)resetLogicController;
- (id)reportLogicController;
- (id)shareScopeMgr;
- (void)swapHeaderExpandStatus;
- (id)profileContact;
- (void)updateProfileContactIfNeeded;
- (id)profileModel;
- (void)updateProfileModelIfNeeded;
- (BOOL)useExpandableHeader;
- (BOOL)hasSetBackground;
- (void)switchToExpandableHeader;
- (void)updateExpandableHeaderViewProfile;
- (void)switchToNormalHeader;
- (void)setupFrontView;
- (void)setupTLDragAnimateHelper;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)isExpandableHeaderVisiable;
- (void)panGestureRecognize:(id)arg1;
- (void)setupExpanableHeaderIfNeeded;
- (double)mediaViewMinHeight;
- (void)jumpToTextStateSourceViewController;
- (void)onTapAtTLProfileHeadButton;
- (void)onEnterHoverStateByUser;
- (void)onTapAtTLProfileDetailButton;
- (void)onTapAtTLProfileChangeCoverButton;
- (id)onGetTLProfileViewController;
- (void)pauseMedia;
- (void)resumeMedia;
- (id)coverActionReporter;
- (void)clearCoverActionReporter;
- (void)dealSecurityVerificationInSession;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)safeEnsureInitInputViewWrapper;
- (void)ensureInitInputViewWrapper;
- (void)clearWCCache;
- (void)cacheInputText;
- (void)didDisshow;
- (void)reloadDataWrap;
- (void)reloadTableView;
- (void)suspendReloadingTableView;
- (void)resumeReloadingTableView:(BOOL)arg1;
- (void)p_reloadTableViewContent;
- (void)handleAfterReloadTableView;
- (void)scrollEndReloadTableView;
- (void)loadTableFooterView;
- (void)layoutTableFooterView;
- (void)resetRightButtonStatus;
- (void)OnFinishComment:(BOOL)arg1;
- (void)openWriteTextViewController;
- (void)onTimeLineViewReturn;
- (void)resetStatus:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (void)adjustViewAndNavBarRect;
- (void)viewDidLayoutSubviews;
- (void)resetRightBarItem;
- (void)configDataReportForCameraBtn:(id)arg1;
- (void)reloadBadgeForRightBarButtonItem;
- (BOOL)isShowingBadgeOnRightBarButtonItem;
- (void)viewDidLoad;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(BOOL)arg1;
- (void)delayReload;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillPush:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)willAppear;
- (void)didAppear;
- (void)willDisappear;
- (void)willDisshow;
- (long long)calcDataItemIndex:(long long)arg1;
- (id)getNextDataItem:(long long)arg1;
- (void)hideFloatView;
- (void)panned:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleLongPressEx:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)heightForStoryAtIndexPath:(id)arg1;
- (id)getUploadFailItemsFroView;
- (void)genNormalCell:(id)arg1 indexPath:(id)arg2;
- (void)genFoldMessageCell:(id)arg1 indexPath:(id)arg2;
- (void)genUploadFailCell:(id)arg1 indexPath:(id)arg2;
- (void)genRedHeartCell:(id)arg1 indexPath:(id)arg2;
- (void)genStoryHeaderCell:(id)arg1 indexPath:(id)arg2;
- (void)genReEditTipsCell:(id)arg1 indexPath:(id)arg2;
- (void)tryLogThumbImageLoadedEffiency:(id)arg1;
- (void)timelineContentItemWillAppear;
- (void)timelineContentItemWillDisappear;
- (void)timelineContentItemDidDisappear;
- (void)timelineContentItemDidEndDecelerating;
- (void)contentItemWillDisplayForCell:(id)arg1;
- (void)contentItemDidEndDisplayingForCell:(id)arg1;
- (void)contentItemWillDisappearForCell:(id)arg1;
- (void)contentItemDidEndDeceleratingForCell:(id)arg1;
- (void)contentItemBecomeInvisibleForCell:(id)arg1;
- (id)fetchContentItemForCell:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tryClearMissReadJumpBtnWhenWillDisplay:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)showMessageList;
- (void)onRestartUpload;
- (void)onCommentDetailViewController:(id)arg1 reEditDataItem:(id)arg2;
- (void)onDeleteData;
- (void)showDetailViewForDataItem:(id)arg1;
- (void)showDetailViewForFailedCommentItem:(id)arg1;
- (void)showDetailViewControllerForCancelLikeFailureWithDataItem:(id)arg1;
- (void)showAlbumViewControllerForCancelLikeFailureWithDataItem:(id)arg1;
- (void)showDetailViewForFoldedSight:(id)arg1;
- (void)showDetailViewForFoldedImage:(id)arg1;
- (void)showDetailViewForDataItem:(id)arg1 tipType:(long long)arg2;
- (void)showFoldedSightDetailView:(id)arg1;
- (void)showFoldedImageDetailView:(id)arg1;
- (void)showDetailView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tryResumeStatus;
- (void)refreshWholeView;
- (void)mmTableView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)mmTableView:(id)arg1 touchesMoved:(id)arg2 withEvent:(id)arg3;
- (void)mmTableView:(id)arg1 touchesEnded:(id)arg2 withEvent:(id)arg3;
- (void)mmTableView:(id)arg1 touchesCancelled:(id)arg2 withEvent:(id)arg3;
- (id)fpsLabel;
- (void)initFPSMonitor;
- (void)onTick:(float)arg1;
- (id)observerIdentifier;
- (void)startFPSMonitor;
- (void)stopFpsMonitor;
- (void)initScrollViewMonitor;
- (id)getContentTableView;
- (long long)getDataItemIndexForSection:(long long)arg1;
- (id)getTimelineViewController;
- (BOOL)isInJumpState;
- (void)onLogicControllerDataWillChange:(id)arg1;
- (void)onLogicControllerDataTriggerContentTableViewReload:(id)arg1;
- (unsigned int)dynamicHeaderSectionCntOfDataControllers;
- (void)finderRecommendationManager:(id)arg1 didFetchRecommendationInfo:(id)arg2;
- (void)newDataSeparatorCellDidClickFinderRecommendationButton:(id)arg1;
- (void)onMenuControllerWillShow:(id)arg1;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (void)initData;
- (void)onLoadMore;
- (void)didChangeBackground;
- (void)onWCBackgroundChanged;
- (void)onHotVideoOrHotImageItemChange;
- (void)onCommentReturn:(id)arg1 comment:(id)arg2;
- (void)onCommentOrLikeFailQueueChange;
- (void)onCancelLikeFailureQueueChange;
- (void)onPostTipsViewDisappearWithDataItemIDs:(id)arg1;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)onNoMoreTimelineData;
- (void)onNormalTimelineData;
- (void)onTimelineServerError;
- (void)onMediaItemSizeDidChange:(id)arg1;
- (void)onDataItemDeleteFinished:(long long)arg1 dataItemID:(id)arg2;
- (void)onCommentItemDeleteFinished:(long long)arg1 commentItemID:(id)arg2 dataItemID:(id)arg3;
- (void)onModifyDataItemStarStatusFinished:(long long)arg1 dataItem:(id)arg2;
- (void)refreshHead:(unsigned long long)arg1;
- (void)stopRefreshHeaderView;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (BOOL)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)hideMenu;
- (void)renewScrollingState;
- (void)resetScrollingState;
- (void)didBeginScrolling;
- (void)didEndScrolling;
- (void)refreshScrollBouncingState;
- (void)didBecomeScrollBouncingOnBottom;
- (void)didResignScrollBouncingOnBottom;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)autoplayVideoProcess;
- (void)throttleScrollProcess;
- (void)videoPreloadProcess;
- (void)realAutoPlayVideo;
- (BOOL)_canAutoPlayVideoForCellView:(id)arg1;
- (BOOL)shouldPauseAutoPlayForRealodData;
- (void)autoPauseLatestAutoplayVideo;
- (void)refreshHeadOnScrolltoTop;
- (void)startAdOnTimelineReloaded;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollToTop;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (id)visibleDataItemList;
- (BOOL)needToInvalidateCache;
- (void)openCommitViewControllerWithShowLocation:(BOOL)arg1 arrImage:(id)arg2 postReportSession:(id)arg3 trashReportData:(id)arg4 withExtBean:(id)arg5;
- (void)openCommitViewControllerWithSightDraft:(id)arg1 postReportSession:(id)arg2 trashReportData:(id)arg3 withExtBean:(id)arg4;
- (void)showImagePicker:(long long)arg1;
- (void)showImagePicker:(long long)arg1 showsCameraButtonInPicker:(BOOL)arg2 showsCameraButtonAtBottom:(BOOL)arg3 shareInfo:(id)arg4;
- (void)editBlackList:(id)arg1 forSource:(long long)arg2;
- (void)editShield:(id)arg1;
- (void)editShield:(id)arg1 forScene:(long long)arg2;
- (id)assetPickerController:(id)arg1 willFinishPickingAssets:(id)arg2 withCurrentState:(id)arg3;
- (BOOL)_prepareAssetsForPost:(id)arg1 withAssetPickerState:(id)arg2 fromAssetPicker:(id)arg3;
- (void)_prepareCompositeTask:(id)arg1 withAsyncEnabled:(BOOL)arg2 fromAssetPicker:(id)arg3;
- (void)_syncHandleCompositeTask:(id)arg1 fromAssetPicker:(id)arg2;
- (void)_asyncHandleCompositeTask:(id)arg1 fromAssetPicker:(id)arg2;
- (void)_prepareVideoProducerWithAssetList:(id)arg1 withCurrentState:(id)arg2 fromAssetPicker:(id)arg3;
- (void)_prepareVideoProducerVMWithAssetList:(id)arg1 currentState:(id)arg2 fromAssetPicker:(id)arg3;
- (void)_startVideoProducerVCWithVM:(id)arg1 fromAssetPicker:(id)arg2;
- (void)videoProducerViewController:(id)arg1 didFinishWithSightDraft:(id)arg2 isAsyncComposite:(BOOL)arg3;
- (void)videoProducerViewController:(id)arg1 didCancelAfterCleanUp:(BOOL)arg2;
- (id)assetPickerController:(id)arg1 willChangeUserActionCheckTo:(BOOL)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didChangeUserActionCheckTo:(BOOL)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willLoadPreviewForAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didLoadPreviewForAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willSelectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didSelectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willDeselectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didDeselectAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 willEditVideoAsset:(id)arg2 withCurrentState:(id)arg3;
- (id)assetPickerController:(id)arg1 didEditVideoAsset:(id)arg2 byEditAttr:(id)arg3 withCurrentState:(id)arg4;
- (id)_onAssetPickerDidChangeAssetSelection:(id)arg1 withCurrentState:(id)arg2;
- (id)onImagePreviewBrowserController:(id)arg1 didCreateVideoCompositionActionFlow:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithInfo:(id)arg2;
- (void)_onPickNewSightDraft:(id)arg1 withError:(id)arg2 logNote:(id)arg3 fromEntrance:(long long)arg4 isAsyncComposite:(BOOL)arg5;
- (void)onImagePickerManagerClickPostFinderLongVideoWithPostSession:(id)arg1;
- (void)onImagePickerManagerDraftWithPostSession:(id)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onImagePickerManagerClickFooterViewButton;
- (void)onImagePickerManagerDidAppear;
- (void)onImagePickerManagerStartPreview;
- (void)onImagePickerManagerStartEditing;
- (void)onImagePickerManagerOpenCamera;
- (void)onImagePickerManagerDidTakeMedia;
- (void)onImagePickerManagerStartExportingWithAssetId:(id)arg1;
- (void)onImagePickerManagerEndExportingWithAssetId:(id)arg1 error:(id)arg2;
- (id)getViewController;
- (void)_onRecordImagePickerAppear;
- (void)onSightCameraCancel:(id)arg1;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)onSightCameraViewControllerDidTakeMedia;
- (void)onSightCameraViewControllerStartExportingWithAssetId:(id)arg1;
- (void)onSightCameraViewControllerEndExportingWithAssetId:(id)arg1 error:(id)arg2;
- (void)onSightCameraViewControllerStartEditing;
- (void)playerViewController:(id)arg1 requireToPostWithShareInfo:(id)arg2;
- (BOOL)isShareButtonVisibleInPlayerViewController:(id)arg1;
- (void)templateFullScreenViewController:(id)arg1 didClickShareButton:(id)arg2;
- (void)onAdInviteCellClick:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)reportLastDraft;
- (void)showPhotoAlert:(id)arg1;
- (void)configDataReportForActionSheet:(id)arg1;
- (BOOL)recoverFromAutoSavedDraft;
- (BOOL)recoverFromManualSavedDraft;
- (void)showUploadOption:(id)arg1;
- (void)showPostGuide;
- (void)acceptPostGuide;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)resetHeaderView;
- (void)shouldUpdateMessageButton:(id)arg1;
- (void)configDataReportForMessageTipView:(id)arg1;
- (BOOL)shouldUseAdPreferAvatar:(id)arg1 commentUser:(id)arg2;
- (BOOL)hasUnReadMessage;
- (BOOL)shouldShowStoryCell;
- (void)checkNewMessage;
- (void)onMessageUnReadCountChanged;
- (void)onReveiceWCMessage:(id)arg1;
- (void)showContactInfo;
- (double)footerCellHeightChangeWithDataItem:(id)arg1 deleteComment:(id)arg2;
- (id)indexPathOfDataItem:(id)arg1;
- (unsigned long long)sectionIndexForDataItemWithTid:(id)arg1;
- (unsigned long long)getSectionCountBeforeDataItem;
- (double)totalHeightFromTopToSection:(unsigned long long)arg1;
- (void)showComment:(id)arg1 refComment:(id)arg2 touchedView:(id)arg3 isActionAtAd:(BOOL)arg4;
- (void)cacheMediaCellView:(id)arg1 forData:(id)arg2;
- (id)getCachedMediaCellViewForData:(id)arg1;
- (void)onClickCommentBtnOnFloatView;
- (void)onTouchDownLikeBtnOnFloatView;
- (void)onIKnowItBtnClicked;
- (void)startForcedRotationToPortraitIfNeeded;
- (void)onViewAnimationWillHide;
- (void)onViewAnimationDidHide;
- (void)onWCTimeLineCellViewActionAdChainStrengthen:(id)arg1;
- (void)onWCTimeLineCellViewActionAdPOI:(id)arg1;
- (void)onWCTimeLineCellViewActionMusic:(id)arg1;
- (void)onWCTimeLineCellViewActionJump:(id)arg1;
- (void)onWCTimeLineCellViewDeletePhotoClick:(id)arg1;
- (void)onWCTimeLineCellViewShowProfile:(id)arg1 jumpData:(id)arg2;
- (void)onWCTimeLineCellViewUnstar:(id)arg1;
- (void)onWCTimeLineCellViewChangeTranslateLanguage:(id)arg1;
- (void)onWCTimeLineCellViewShowGroup:(id)arg1;
- (void)onAdActoin:(id)arg1;
- (void)onReEditDataItem:(id)arg1;
- (void)onResendDataItem:(id)arg1;
- (void)onRemoveAd:(id)arg1;
- (void)onRemoveAd:(id)arg1 dislikeReasonIdList:(id)arg2;
- (void)onUnInterestOpenIMTimeLine;
- (void)onActionFloatView:(id)arg1 didSelectReason:(id)arg2;
- (void)onActionFloatView:(id)arg1 didSelectFeedbackItem:(id)arg2;
- (void)onAdFeedbackBtnClick:(id)arg1 point:(CGPoint)arg2 buttonWidth:(double)arg3;
- (void)resetAdFeedbackView;
- (void)onAdFeedbackDisappear:(id)arg1;
- (void)onClickComplainBtn:(id)arg1 dataItem:(id)arg2;
- (void)onClickGuideAdManageBtn:(id)arg1 dataItem:(id)arg2;
- (void)onClickPositiveBtn:(id)arg1;
- (void)onClickNegativeBtn:(BOOL)arg1 dataItem:(id)arg2;
- (void)onClickNegativeReasonBtn:(id)arg1 dataItem:(id)arg2;
- (void)onAdvertiseAction:(id)arg1 point:(CGPoint)arg2;
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
- (void)onSearchTopicTagClicked:(id)arg1 query:(id)arg2;
- (void)onCommentViewTopicTagClicked:(id)arg1 ofDataItem:(id)arg2 query:(id)arg3;
- (void)onAdSocialLikeViewLikeTouched:(id)arg1;
- (void)onAdSocialLikeViewLikeClicked:(id)arg1;
- (void)onAdSocialLikeViewCommentClicked:(id)arg1;
- (void)onAdSocialLikeViewAnimationStarted:(id)arg1;
- (void)onAdSocialLikeViewAnimationFinished:(id)arg1;
- (void)onAdFireworkCheerCommentAnimationStarted:(id)arg1;
- (void)onWCTimeLineCommentCellOpenFullText:(id)arg1 ofDataItem:(id)arg2;
- (void)onWCTimeLineCommentCellDeleteComment:(unsigned long long)arg1 ofDataItem:(id)arg2;
- (void)onReplyComment:(id)arg1 ofDataItem:(id)arg2 ofTouchedView:(id)arg3;
- (void)onReloadCommentView:(id)arg1 ofDataItem:(id)arg2;
- (void)onRestoreCommentView:(id)arg1 ofDataItem:(id)arg2;
- (void)onCommentViewChangeTranslateLanguage:(id)arg1 ofDataItem:(id)arg2;
- (void)onCommentViewDidShowDeleteSelfCommentOption:(id)arg1;
- (void)onDismissViewController:(id)arg1 userName:(id)arg2;
- (void)onBindFacebookFinish:(unsigned int)arg1;
- (void)jumpToUserProfile:(id)arg1 Displayname:(id)arg2 Scence:(unsigned int)arg3 userData:(id)arg4;
- (void)handleUrl:(id)arg1 backupUrl:(id)arg2 item:(id)arg3 extraAdInfo:(id)arg4 clickSource:(long long)arg5 originView:(id)arg6;
- (void)handleUrl:(id)arg1 backupUrl:(id)arg2 item:(id)arg3 extraAdInfo:(id)arg4;
- (void)handleUrl:(id)arg1 backupUrl:(id)arg2 item:(id)arg3;
- (void)handleUrl:(id)arg1 backupUrl:(id)arg2;
- (void)onLinkClickedItem:(id)arg1 url:(id)arg2 backupUrl:(id)arg3 withRect:(CGRect)arg4 extraInfo:(id)arg5;
- (void)onLinkClickedItem:(id)arg1 url:(id)arg2 backupUrl:(id)arg3 withRect:(CGRect)arg4 clickSource:(long long)arg5 originView:(id)arg6;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(CGRect)arg3;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(CGRect)arg3 extraInfo:(id)arg4;
- (void)momentsClickHandler:(id)arg1 willClickUserProfileWithContext:(id)arg2;
- (void)momentsClickHandler:(id)arg1 didClickBrandProfileWithContext:(id)arg2;
- (void)momentsClickHandler:(id)arg1 didClickTigerSourceWithContext:(id)arg2;
- (void)momentsClickHandler:(id)arg1 willClickUrlWithContext:(id)arg2;
- (id)footerViewModelForDataItem:(id)arg1;
- (void)clearPostShareButtonIfNeeded;
- (void)updateFinderShareConfigurations;
- (void)footerCellWillDisplay:(id)arg1;
- (void)footerCellDidClickMicroMerchantMoreView:(id)arg1;
- (void)footerCellDidClickFinderShareButton:(id)arg1;
- (void)footerCellDidClickPoiShareButton:(id)arg1;
- (BOOL)shouldInteractivePop;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (void)floatViewHiddenWrap;
- (void)addAtContactSelectedForAd;
- (void)didSelectContact:(id)arg1;
- (void)onCancelSelectContact;
- (void)setInputControllerBecomeTextView;
- (void)tryToCacheInputDataInfo;
- (void)tryToResumeInputDataInfo;
- (void)onJumpToUnreadItem;
- (unsigned long long)sectionIndexForMissReadJump:(id)arg1;
- (void)jumpToMissReadItemAferScroll;
- (void)updateJumpState;
- (id)headViewForJumpState;
- (void)onPrePageUpdate:(BOOL)arg1;
- (void)reloadTableViewWithSameCotentOffsetYToBottom;
- (void)onReEditItem:(id)arg1;
- (void)resendDataItem:(id)arg1;
- (void)reEditDataItem:(id)arg1;
- (void)updateHeaderView;
- (void)setInputToolViewAtable:(BOOL)arg1;
- (void)onAtableAdClicked:(id)arg1;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)updateContentOffset;
- (void)updateGrowTextViewMaxHeight;
- (double)maxGrowTextViewHeight;
- (void)keyboardWillShow;
- (void)keyboardWillHide;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)onHideKeyboard;
- (void)textViewTextDidChange;
- (void)onTextChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)growTextViewDidClickSendWithText:(id)arg1;
- (BOOL)getInputControllerSendButtonCanSendState;
- (void)didCommitEmptyText;
- (void)didCommitText:(id)arg1;
- (void)sendComment:(id)arg1 hasAtFreind:(BOOL)arg2;
- (BOOL)hasAtFriend:(id)arg1;
- (id)subAtContactString:(id)arg1;
- (void)onGrowTextViewDidShowMenuControllerWithMenuItemArr:(id)arg1;
- (void)onGrowTextViewMenuItemClicked:(unsigned long long)arg1;
- (BOOL)shouldRespondToKeyBoardEvent;
- (void)onTextView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)clearAnimationProperties;
- (void)clearAnimationPropertiesProtection;
- (void)setAnimatedImageHidden:(BOOL)arg1;
- (void)setAnimatedImageHidden:(BOOL)arg1 withTimeLineCellView:(id)arg2;
- (void)showAnimationToImageView;
- (void)scrollTableViewToShowDataItem:(id)arg1;
- (void)onStartSendWithoutAnim:(id)arg1;
- (void)animationDidEndRemainView:(id)arg1 hintDataItem:(id)arg2;
- (void)commitAnimationWillStart:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)onWCContentItemViewMoreMenu:(id)arg1 sender:(id)arg2;
- (void)onWCContentItemViewExposeMenu:(id)arg1 scene:(long long)arg2;
- (void)onWCContentItemViewOpenedWebViewUseFastLoad:(id)arg1;
- (void)onWCContentItemViewInteractedByUser:(id)arg1 sender:(id)arg2;
- (void)onWCContentItemViewWillEnterFullScreen;
- (void)onWCContentItemViewOutFullScreen;
- (void)onWCContentItemViewOutFullScreenAnimationComplete;
- (void)onWCCanvasContentItemViewInFullScreen:(id)arg1;
- (void)onWCCanvasContentItemViewOutFullScreen:(id)arg1;
- (void)refreshWholeViewWithFixedDataItem:(id)arg1;
- (void)onViewSightInFullScreen;
- (void)onViewSightOutFullScreen;
- (BOOL)shouldAddShadowView;
- (void)onTranslateSnsChangedFromPhotoContent:(id)arg1;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)confirmToUnstarWithDataItem:(id)arg1;
- (void)unstarWithDataItem:(id)arg1;
- (void)handleModifyDataItemStarStatusFinished:(long long)arg1 dataItem:(id)arg2;
- (void)doStarReportWithDataItem:(id)arg1 isStarred:(BOOL)arg2;
- (void)restoreAccessibilityFocus;
- (BOOL)accessibilityScroll:(long long)arg1;
- (void)onTimeLineSessionExposure:(id)arg1;
- (void)onWCTimelineTrashMgrItemClear;
- (void)onProfileChange;
- (void)onSubTimeLineViewReturn;
- (void)onSubTimeLineViewPushed:(id)arg1;
- (void)onSubTimelineDisplayCellForItem:(id)arg1;
- (void)onSubTimelineFromDataItem:(id)arg1 changedFoldedStateTo:(BOOL)arg2;
- (void)onSubTimelineClickedUnfold;
- (void)onSubTimelineConfirmedUnfold;
- (BOOL)shouldShowFinderLiveHeaderCell;
- (void)genFinderHeaderCell:(id)arg1 indexPath:(id)arg2;
- (void)onDidSelectLiveAtIndex:(id)arg1 inLives:(id)arg2;
- (void)onDidExposeLiveAtIndex:(id)arg1 inLives:(id)arg2;
- (void)finderLiveSectionTableViewCellFetchMoreLiveList:(id)arg1;
- (void)onSnsLiveSectionClickClearBtnAction;
- (id)generatePostReportSessionForEntrance:(long long)arg1;
- (id)recoverPostReportSessionFromTrashWithPostCycleId:(id)arg1;
- (void)clearPostReportSession;
- (void)cancelAndClearPostReportSession;
- (id)togetherTailReporter;
- (void)reportTogetherTailIfNeeded;
- (void)registerYReportSdk;
- (id)tigerReporter;
- (void)reportTigerIfNeeded;
- (void)onCommentViewExposureForItem:(id)arg1 comment:(id)arg2;
- (void)onCommentViewClickForItem:(id)arg1 comment:(id)arg2;
- (void)onCommentViewEmoticonClickForItem:(id)arg1 comment:(id)arg2;
- (void)onCommentViewPicClickForItem:(id)arg1 comment:(id)arg2;
- (void)onCommentViewAddEmotionForItem:(id)arg1 comment:(id)arg2;
- (void)postEditMgrSucFromVC:(id)arg1 postSession:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isFirstEntering;
- (void)setIsFirstEntering:(BOOL)arg1;
- (BOOL)hasNewPhotoWhenEnter;
- (void)setHasNewPhotoWhenEnter:(BOOL)arg1;
- (BOOL)hasRefrashHead;
- (void)setHasRefrashHead:(BOOL)arg1;
- (BOOL)openPostActionDirectly;
- (void)setOpenPostActionDirectly:(BOOL)arg1;
- (BOOL)postTextDirectly;
- (void)setPostTextDirectly:(BOOL)arg1;
- (id)redDotInfoStr;
- (void)setRedDotInfoStr:(id)arg1;
- (id)postingFinderDataItem;
- (void)setPostingFinderDataItem:(id)arg1;
- (id)headRefreshView;
- (void)setHeadRefreshView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)introView;
- (void)setIntroView:(id)arg1;
- (id)messageTipView;
- (void)setMessageTipView:(id)arg1;
- (id)messageHeaderView;
- (void)setMessageHeaderView:(id)arg1;
- (id)floatOperateView;
- (void)setFloatOperateView:(id)arg1;
- (id)plainTextFullScreenView;
- (void)setPlainTextFullScreenView:(id)arg1;
- (BOOL)isEnhanceInteractionEnabled;
- (void)setIsEnhanceInteractionEnabled:(BOOL)arg1;
- (long long)messageTipCount;
- (void)setMessageTipCount:(long long)arg1;
- (id)messageTipUserName;
- (void)setMessageTipUserName:(id)arg1;
- (id)cacheDateItem;
- (void)setCacheDateItem:(id)arg1;
- (id)animationView;
- (void)setAnimationView:(id)arg1;
- (BOOL)canReload;
- (void)setCanReload:(BOOL)arg1;
- (BOOL)startReload;
- (void)setStartReload:(BOOL)arg1;
- (BOOL)isScrolling;
- (void)setIsScrolling:(BOOL)arg1;
- (BOOL)isScrollBouncingOnBottom;
- (void)setIsScrollBouncingOnBottom:(BOOL)arg1;
- (id)atContact;
- (void)setAtContact:(id)arg1;
- (id)pastelogic;
- (void)setPastelogic:(id)arg1;
- (BOOL)isActionAtAd;
- (void)setIsActionAtAd:(BOOL)arg1;
- (id)postReportSession;
- (void)setPostReportSession:(id)arg1;
- (BOOL)canShowFinderShareButton;
- (void)setCanShowFinderShareButton:(BOOL)arg1;
- (double)minimumVideoDurationForFinderShare;
- (void)setMinimumVideoDurationForFinderShare:(double)arg1;
- (long long)minimumImageCountForFinderShare;
- (void)setMinimumImageCountForFinderShare:(long long)arg1;
- (long long)alwaysAllowsImagesWithPOIForFinderShare;
- (void)setAlwaysAllowsImagesWithPOIForFinderShare:(long long)arg1;
- (id)finderShareTips;
- (void)setFinderShareTips:(id)arg1;
- (BOOL)canShowBizShareButton;
- (void)setCanShowBizShareButton:(BOOL)arg1;
- (BOOL)isUseStablizeFinderShareButton;
- (void)setIsUseStablizeFinderShareButton:(BOOL)arg1;
- (BOOL)canShowNewLifeShareButton;
- (void)setCanShowNewLifeShareButton:(BOOL)arg1;
- (id)reEditButton;
- (void)setReEditButton:(id)arg1;
- (id)reEditTipButton;
- (void)setReEditTipButton:(id)arg1;
- (id)redditItemPlaceHolder;
- (void)setRedditItemPlaceHolder:(id)arg1;
- (id)commentEmotionBgView;
- (void)setCommentEmotionBgView:(id)arg1;
- (id)commentEmotionView;
- (void)setCommentEmotionView:(id)arg1;
- (id)commentEmotionReportDict;
- (void)setCommentEmotionReportDict:(id)arg1;
- (id)sharePreConfirmSheetView;
- (void)setSharePreConfirmSheetView:(id)arg1;
- (BOOL)isViewDidAppear;
- (void)setIsViewDidAppear:(BOOL)arg1;
- (id)latestAutoplayVideoTid;
- (void)setLatestAutoplayVideoTid:(id)arg1;
- (id)videoPreloadMgr;
- (void)setVideoPreloadMgr:(id)arg1;
- (id)jumpItem;
- (void)setJumpItem:(id)arg1;
- (void)setHeadViewForJumpState:(id)arg1;
- (id)missReadItemIdToJump;
- (void)setMissReadItemIdToJump:(id)arg1;
- (id)missReadItem;
- (void)setMissReadItem:(id)arg1;
- (id)adFeedbackView;
- (void)setAdFeedbackView:(id)arg1;
- (BOOL)canLogDataList;
- (void)setCanLogDataList:(BOOL)arg1;
- (id)floatViewPageWrap;
- (void)setFloatViewPageWrap:(id)arg1;
- (BOOL)isReloadingData;
- (void)setIsReloadingData:(BOOL)arg1;
- (id)adReloadIndexPaths;
- (void)setAdReloadIndexPaths:(id)arg1;
- (id)adInitIndexPaths;
- (void)setAdInitIndexPaths:(id)arg1;
- (id)advertiseActionFloatView;
- (void)setAdvertiseActionFloatView:(id)arg1;
- (void)setFpsLabel:(id)arg1;
- (id)fpsMonitor;
- (void)setFpsMonitor:(id)arg1;
- (id)scrollViewMonitor;
- (void)setScrollViewMonitor:(id)arg1;
- (id)listFrontView;
- (void)setListFrontView:(id)arg1;
- (id)headerPanGestureRecognizer;
- (void)setHeaderPanGestureRecognizer:(id)arg1;
- (id)animateHelper;
- (void)setAnimateHelper:(id)arg1;
- (id)expandableHeader;
- (void)setExpandableHeader:(id)arg1;
- (void)setProfileContact:(id)arg1;
- (void)setProfileModel:(id)arg1;
- (void)setCoverActionReporter:(id)arg1;
- (id)usingTemplateShareInfo;
- (void)setUsingTemplateShareInfo:(id)arg1;
- (id)finderSnSShareLiveLogicController;
- (void)setFinderSnSShareLiveLogicController:(id)arg1;
- (id)dataControllers;
- (void)setDataControllers:(id)arg1;
- (BOOL)hasChangedFoldedState;
- (void)setHasChangedFoldedState:(BOOL)arg1;
- (void)setShareScopeMgr:(id)arg1;
- (BOOL)isModifyingStarStatus;
- (void)setIsModifyingStarStatus:(BOOL)arg1;
- (id)deleteDataItemWrap;
- (void)setDeleteDataItemWrap:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
