@interface WCPhotoMutipleImageViewController : FullScreenViewController <QRCodeInMultiDisplayViewDelegate, UIScrollViewDelegate, scrollViewDelegate, WCImageViewDelegate, WCActionSheetDelegate, WCFacadeExt, WCImageScrollViewDelegate, WCCommentDetailViewControllerFBDelegate, RichTextLayoutDelegate, BaseScanLogicDelegate, MonoServiceMgrExt>
{
    MMScrollView * pagingScrollView; // +0x78
    NSMutableArray * m_arrDatas; // +0x80
    unsigned int m_uiSource; // +0x88
    BOOL m_isShowingDataItemList; // +0x8c
    int m_logicType; // +0x90
    NSMutableSet * recycledImagePage; // +0x98
    NSMutableSet * recycledSightPage; // +0xa0
    NSMutableSet * visiblePages; // +0xa8
    int firstVisiblePageIndexBeforeRotation; // +0xb0
    double percentScrolledIntoFirstVisiblePage; // +0xb8
    int m_iNumberOfPages; // +0xc0
    int m_iCurrentPage; // +0xc4
    BOOL m_hideWhenDisappear; // +0xc8
    CContact * m_contact; // +0xd0
    NSMutableArray * menuItems; // +0xd8
    UIView * bottomView; // +0xe0
    UIView * descBackgroundView; // +0xe8
    RichTextView * descLabel; // +0xf0
    MMHeadImageView * headImg; // +0xf8
    UIImageView * lockImgView; // +0x100
    WCLikeButton * btnLike; // +0x108
    MMUIButton * btnComment; // +0x110
    MMUIButton * rightBottomCtrl; // +0x118
    UILabel * likeCountLable; // +0x120
    UILabel * commentCountLable; // +0x128
    UIImageView * smallLikeImg; // +0x130
    UIImageView * smallCommentImg; // +0x138
    UIButton * setBGButton; // +0x140
    BOOL m_isTileing; // +0x148
    BOOL m_scrollViewLayouting; // +0x149
    BOOL m_orientationRotating; // +0x14a
    BOOL m_isBidirectionalFan; // +0x14b
    BOOL m_backing; // +0x14c
    BOOL m_backEnabled; // +0x14d
    BOOL m_forbidSingleTap; // +0x14e
    ScanQRCodeLogicController * _scanQRCodeLogic; // +0x150
    BOOL _bIsMoreData; // +0x158
    BOOL _bIsNoMediaDataOverLimitReq; // +0x159
    BOOL _bIsLoadingMoreData; // +0x15a
    BOOL _bIsLastDataEmpty; // +0x15b
    BOOL _bIsDirectFreshScrollSize; // +0x15c
    BOOL _bIsShow; // +0x15d
    double _startContentOffsetX; // +0x160
    double _willEndContentOffsetX; // +0x168
    double _endContentOffsetX; // +0x170
    unsigned int _uiMaxContiunePreLoadCount; // +0x178
    ForwardMessageLogicController * m_forwardMsgLogic; // +0x180
    EditImageForwardAndEditLogicController * _editImageLogic; // +0x188
    WCImageTranslateLogic * _imgTranslateLogic; // +0x190
    MMImageOpenWeAppLogic * _openWeAppLogic; // +0x198
    NSMutableSet * m_displayTranslateImageIndexSet; // +0x1a0
    WCMomentsScrollActionSheet * menu_ActionSheet; // +0x1a8
    ShareDataToOpenSDKController * m_shareDataToOpenSDKViewController; // +0x1b0
    BOOL _useNewInteraction; // +0x1b8
    BOOL _usesNativeProfileTransition; // +0x1b9
    BOOL _usesAlbumListWindowSnapshot; // +0x1ba
    BOOL _enableJumpToGallery; // +0x1bb
    BOOL _useV3GalleryPagingStyle; // +0x1bc
    BOOL _useV3GalleryControlStyle; // +0x1bd
    BOOL _enableV3PersonalPageExitAnimation; // +0x1be
    BOOL _standaloneDataUpdateEnabled; // +0x1bf
    BOOL _standaloneInitialRangeLoading; // +0x1c0
    BOOL _enableV3DataReport; // +0x1c1
    BOOL _isNoPrePageLoad; // +0x1c2
    BOOL _dynamicTagEnabled; // +0x1c3
    BOOL _isEnhanceInteractionEnabled; // +0x1c4
    BOOL _isStarModificationEnabled; // +0x1c5
    BOOL _isStarBrowsingEnabled; // +0x1c6
    BOOL _unExpReportEnable; // +0x1c7
    BOOL _v3StandaloneShouldAutoContinueAfterCurrentUpdate; // +0x1c8
    BOOL _v3StandaloneShouldKeepLoadingAfterCurrentUpdate; // +0x1c9
    BOOL _v3StandaloneTailAdvancedAfterCurrentUpdate; // +0x1ca
    BOOL _v3StandaloneShouldFinishInitialRangeAfterSettling; // +0x1cb
    BOOL _v3StandaloneDeferredShouldAutoContinue; // +0x1cc
    BOOL _v3StandaloneDeferredShouldKeepLoading; // +0x1cd
    BOOL _v3StandaloneDeferredTailAdvanced; // +0x1ce
    BOOL _v3StandalonePreviousPageLoading; // +0x1cf
    BOOL _v3GalleryExitDismissRequested; // +0x1d0
    BOOL _v3GalleryExitDismissCompleted; // +0x1d1
    BOOL _v3StandaloneNeedsImageRefresh; // +0x1d2
    BOOL _v3StandaloneNeedsCurrentImageActions; // +0x1d3
    BOOL _isShareEmbedExcerptEnabled; // +0x1d4
    BOOL _isAnimatingToShowFullScreen; // +0x1d5
    BOOL _isAnimationToShowFullScreenFinished; // +0x1d6
    BOOL _galleryNeedsLayoutAfterEntryAnimation; // +0x1d7
    BOOL _gallerySizeTransitionInProgress; // +0x1d8
    BOOL _nativeProfileIgnoresDragUntilEnd; // +0x1d9
    BOOL _nativeProfileImageWasPlaying; // +0x1da
    BOOL _nativeProfileChromeHidden; // +0x1db
    BOOL _nativeProfileTopBarsHidden; // +0x1dc
    long long _homepageType; // +0x1e0
    long long _fromScene; // +0x1e8
    UIViewController * _fromViewController; // +0x1f0
    id <WCPhotoMutipleImagePageDelegate> _pageDelegate; // +0x1f8
    WCMomentsPageContext * _pageContext; // +0x200
    WCTogetherHistoryReportSession * _togetherHistoryReportSession; // +0x208
    NSString * _flutterAlbumSessionId; // +0x210
    long long _snsLargeImageFrom; // +0x218
    long long _snsChannel; // +0x220
    OCRTransHalfScreenViewController * _ocrHalfScreenViewCtrl; // +0x228
    QRCodeInMultiDisplayView * _qrCodeMultiView; // +0x230
    SessionForwardRecordLogic * _forwardRecordLogic; // +0x238
    WCMomentsPostSessionController * _miaoJianPostSessionController; // +0x240
    WCMomentsShareScopeMgr * _shareScopeMgr; // +0x248
    NSString * _initialMediaItemId; // +0x250
    NSString * _initialMediaFeedId; // +0x258
    NSString * _originImageRectMediaItemId; // +0x260
    NSString * _v3StandaloneLastRequestedTailItemID; // +0x268
    unsigned long long _v3StandalonePagingRequestToken; // +0x270
    unsigned long long _v3StandalonePagingTimeoutRetryCount; // +0x278
    NSArray * _v3StandaloneDeferredInitialRangeDataItems; // +0x280
    NSArray * _v3StandaloneDeferredPreviousPagingDataItems; // +0x288
    NSArray * _v3StandaloneDeferredPagingDataItems; // +0x290
    unsigned long long _v3StandalonePreviousPagingRequestToken; // +0x298
    unsigned long long _v3StandalonePreviousPagingRetryCount; // +0x2a0
    NSCache * _v3StandaloneImages; // +0x2a8
    NSMutableDictionary * _v3StandaloneImageRequests; // +0x2b0
    NSObject<OS_dispatch_queue> * _v3StandaloneImageQueue; // +0x2b8
    double _loadOriginScaleLimit; // +0x2c0
    NSMutableSet * _loadUhdMediaIdSet; // +0x2c8
    NSMutableDictionary * _mediaLoadImageTypeMap; // +0x2d0
    WCMediaItem * _reloadMediaItem; // +0x2d8
    NSArray * _reloadDataItmes; // +0x2e0
    unsigned long long _galleryScreenConnectionGeneration; // +0x2e8
    WCNativeAlbumTransition * _nativeProfileTransition; // +0x2f0
    NSMapTable * _nativeProfileChromeViewAlphas; // +0x2f8
    UIView * _nativeProfilePresentationOverlayHost; // +0x300
    UIView * _nativeProfileTitleHostView; // +0x308
    UIView * _nativeProfileTitleView; // +0x310
    NSArray * _trackedNativeProfileTitleViews; // +0x318
    NSMapTable * _nativeProfileTopBarViewAlphas; // +0x320
    NSMapTable * _nativeProfileTopBarButtonEnabledStates; // +0x328
    CGSize _galleryContainerLayoutTargetSize; // +0x330
    CGSize _galleryLastAppliedSize; // +0x340
    CGRect _m_originImageRectInScreen; // +0x350
    CGRect _initialOriginImageRectInScreen; // +0x370
}
- (id)initWithHomepageType:(long long)arg1 contact:(id)arg2 dataItems:(id)arg3 currentIndex:(unsigned int)arg4 canAutoLoadNextPage:(BOOL)arg5;
- (id)initWithHomepageType:(long long)arg1 contact:(id)arg2 dataItems:(id)arg3 currentIndex:(unsigned int)arg4 canAutoLoadNextPage:(BOOL)arg5 canLoadPrePage:(BOOL)arg6;
- (id)initWithHomepageType:(long long)arg1 contact:(id)arg2 dataItems:(id)arg3 currentIndex:(unsigned int)arg4 canAutoLoadNextPage:(BOOL)arg5 canLoadPrePage:(BOOL)arg6 usesNativeProfileTransition:(BOOL)arg7;
- (id)initWithWCMediaItemWraps:(id)arg1 contact:(id)arg2 currentIndex:(unsigned int)arg3;
- (void)dealloc;
- (void)setFromScene:(long long)arg1;
- (BOOL)isMyOwnWC;
- (BOOL)isShowingOtherVC;
- (BOOL)realCanLoadPrePage;
- (id)pageContext;
- (id)getMediaItemWrapAt:(long long)arg1;
- (id)getMediaItemWrapAnywayAt:(unsigned int)arg1;
- (void)stopVideoPlayWithMediaItem:(id)arg1;
- (void)resumeVideoPlayWithMediaItem:(id)arg1;
- (id)getSightFullPlayViewWithMediaItem:(id)arg1;
- (id)forwardRecordLogic;
- (id)shareScopeMgr;
- (BOOL)disableScrollViewBottomInsetAdjustment;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAppear;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillBeInteractivePoped;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)isForwardMediaItem:(id)arg1;
- (void)willDisappear;
- (id)navigationBarBackgroundColor;
- (BOOL)navigationBarBlurEffect;
- (double)getContentViewY;
- (BOOL)areGalleryTopBarsHidden;
- (id)nativeProfileTitleContentViews;
- (void)refreshNativeProfileTitleViews;
- (void)setTopBarsHidden:(BOOL)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)galleryChromeContainerView;
- (UIEdgeInsets)galleryChromeSafeAreaInsets;
- (void)layoutNativeProfileChromeBackgrounds;
- (void)adjustNavHeaderView;
- (void)layoutHiddenView:(BOOL)arg1;
- (void)showFullScreen;
- (void)showFullScreen:(BOOL)arg1;
- (void)hideFullScreen;
- (void)hideFullScreen:(BOOL)arg1;
- (void)hideBottomView;
- (void)UISplitViewWillChangeSplitMode;
- (void)handleSingleTap;
- (void)onSingleTapWCImageScrollView;
- (void)onFullScreenItemDragLongPressBegin;
- (void)hideVCAnimation;
- (id)makeNativeProfileTransition;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)onFullScreenItemDragToClose;
- (void)animateNativeProfileChromeHidden:(BOOL)arg1;
- (void)restoreNativeProfileChromeViews;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)finishV3GalleryExitAnimated:(BOOL)arg1;
- (void)armV3GalleryExitFallback;
- (void)onFullScreenItemAnimationHideStop;
- (void)onFullScreenItemAnimationShowStop;
- (CGSize)currentGalleryContainerSize;
- (BOOL)isGalleryLandscapeForSize:(CGSize)arg1;
- (void)applyGalleryLayoutForContainerSize:(CGSize)arg1;
- (void)layoutScrollView:(BOOL)arg1;
- (void)initScrollView;
- (id)galleryMediaIdentityForWrap:(id)arg1;
- (long long)pageIndexForGalleryMediaIdentity:(id)arg1 inMediaWraps:(id)arg2;
- (void)adjustVisiblePageIndicesByOffset:(long long)arg1;
- (BOOL)usesMediaHomepagePaging;
- (void)requestNextGalleryPage;
- (void)requestPreviousGalleryPage;
- (id)currentGalleryDataItems;
- (BOOL)usesV3StandalonePaging;
- (BOOL)isV3WrongFriendImageFixEnabled;
- (long long)gallerySourceHomepageType;
- (BOOL)shouldUseV3GalleryControlStyle;
- (void)setStandalonePagingCanLoadPreviousPage:(BOOL)arg1 canLoadNextPage:(BOOL)arg2;
- (BOOL)isV3StandaloneLoadingPageAtIndex:(long long)arg1;
- (void)scheduleV3StandalonePagingCheck;
- (BOOL)didV3StandalonePagingTailAdvance;
- (void)armV3StandalonePagingTimeoutWithToken:(unsigned long long)arg1;
- (void)armV3StandalonePreviousPagingTimeoutWithToken:(unsigned long long)arg1 requestAccepted:(BOOL)arg2;
- (void)onPagingScrollViewSingleTap:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)preLoadFinishiedAndReloadData:(id)arg1;
- (void)preLoadPrePageFinishiedAndReloadData:(id)arg1;
- (void)reloadAllData:(id)arg1;
- (unsigned long long)getMediaCount;
- (void)initArrData:(id)arg1;
- (id)getWCMediaItemWraps:(id)arg1;
- (void)clearFakeLoaddingPrePageView;
- (void)noMoreData;
- (void)showLastPictureTips;
- (void)deleteVisibleCache;
- (void)reportThisPhoto:(id)arg1;
- (BOOL)isPrivate;
- (void)onRestartUpload;
- (void)makeSameMiaoJianTemplateWithShareInfo:(id)arg1;
- (void)animationDidEndRemainView:(id)arg1 hintDataItem:(id)arg2;
- (void)onCommentDetailViewController:(id)arg1 reEditDataItem:(id)arg2;
- (void)onBeforeDeleteData;
- (BOOL)onDeleteNativeLocalPublishDataItemIfNeeded:(id)arg1;
- (void)onDeleteData;
- (void)onCommentListViewDataChanged:(id)arg1;
- (void)onCommentFriend;
- (void)onPopupCommentFriend;
- (void)onBackFromDetailView;
- (void)onPresentBackFromViewController;
- (void)onDeletePhoto;
- (void)confirmDeletePhoto;
- (void)onSaveToWC;
- (void)doReportSaveLiveToAlbum:(BOOL)arg1 mediaItem:(id)arg2 reportDic:(id)arg3 error:(id)arg4;
- (void)onMakePrivate;
- (void)onMakePublic;
- (void)onForward2Contact:(id)arg1;
- (id)genForwardVideoOpWithMediaItemWrap:(id)arg1;
- (id)genForwardImageOpWithMediaItemWrap:(id)arg1;
- (id)genForwardMessageLogicReportUserInfoWithMediaItemWrap:(id)arg1;
- (void)tryAddScanQRMenuItem;
- (void)onShowMenu:(id)arg1;
- (void)reportAskXiaoWeiSharePanelExposureIfNeeded;
- (void)onOpenSnsAlbumRightItem:(id)arg1;
- (void)setupActionSheet;
- (void)setupActionSheetItemForSight:(id)arg1;
- (void)setupActionSheetItemForImage:(id)arg1;
- (void)updateActionSheetIfNeeded;
- (id)createRecentForwardView:(id)arg1;
- (BOOL)canShowOriginalArticleItem;
- (void)openOriginalArticle;
- (BOOL)_isDownloadArgsMatched:(id)arg1;
- (void)doImageSearchActionExposedReport:(id)arg1;
- (void)onRightButtonTouchDown:(id)arg1;
- (void)PreScanQRCode;
- (void)preDetectWord;
- (void)onBackButtonClicked;
- (void)contactsReturn:(BOOL)arg1 contact:(id)arg2;
- (id)getCurrentViewController;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)modifyShareScope;
- (void)saveVideoToAlbum;
- (void)onStartEditImage;
- (void)startEditImage;
- (void)favoritesAddImg;
- (void)favoritesAddSight;
- (id)tryUpdateMedia:(long long)arg1;
- (long long)getImageLoadType:(id)arg1;
- (long long)getImageDownloadType:(id)arg1;
- (long long)getWcPhotoType:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)onPageChangedWithIndex:(long long)arg1;
- (void)shareToDevices;
- (void)viewDidLayoutSubviews;
- (double)buttonWidth:(id)arg1;
- (void)layoutBottomView:(BOOL)arg1;
- (void)initBottomView;
- (double)contentTopOfBottomViews;
- (void)updateButtonStateAnimate:(BOOL)arg1;
- (BOOL)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (unsigned long long)supportedInterfaceOrientations;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (BOOL)prefersStatusBarHidden;
- (void)viewDidLoad;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)galleryScreenDidConnect:(id)arg1;
- (void)applyGalleryConnectedScreen:(id)arg1 rect:(CGRect)arg2 remainingAttempts:(unsigned long long)arg3 generation:(unsigned long long)arg4;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidTransitionToNewSize;
- (void)showVCAnimation;
- (void)checkNoMoreData;
- (void)preLoadProcess;
- (void)resumeV3StandalonePagingAfterUpdatePrevious:(BOOL)arg1 next:(BOOL)arg2;
- (void)finishStandaloneInitialRangeLoading;
- (BOOL)isV3StandalonePagingMotionActive;
- (void)flushV3StandaloneDeferredReloadIfNeeded;
- (void)flushV3StandaloneImageRefreshIfNeeded;
- (void)tilePages;
- (void)triggerFlutterPageAlbumItemVisibilityChange:(int)arg1 currentPos:(int)arg2;
- (void)setM_originImageRectInScreen:(CGRect)arg1;
- (void)refreshCurrentGalleryHeroTarget;
- (BOOL)isVisibleGalleryHeroTargetRect:(CGRect)arg1;
- (void)updateOriginImageRectInScreen:(CGRect)arg1 forMediaItemId:(id)arg2;
- (id)dequeueRecycledImagePage;
- (id)dequeueRecycledSightPage;
- (BOOL)isDisplayingPageForIndex:(unsigned long long)arg1;
- (void)bringV3PagingOverlayViewsToFront;
- (id)albumFeedBehaviourSession:(id)arg1;
- (id)generateLivePhotoBrowseReportWithMediaItemWrap:(id)arg1;
- (void)configureImagePage:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)updateImageTagsForPage:(id)arg1;
- (void)updateImageTagsForPageIndex:(unsigned long long)arg1;
- (BOOL)refreshV3StandaloneImageAtIndex:(unsigned long long)arg1;
- (void)invalidateV3StandaloneImage:(id)arg1 ofType:(long long)arg2;
- (void)prepareV3StandaloneInitialThumbnail;
- (id)v3StandaloneImageForMedia:(id)arg1 ofType:(long long)arg2;
- (id)imageAtIndex:(unsigned long long)arg1;
- (void)configureSightPage:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)onClickWCImage:(id)arg1;
- (void)reloadImage:(id)arg1;
- (void)pageLoadUhdImage:(id)arg1;
- (BOOL)isSameFeedAtIndex:(long long)arg1 otherIndex:(long long)arg2;
- (id)mediaIndicatorForMediaItemWrap:(id)arg1;
- (void)updatePagingTransitionAlpha;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)onHomepage:(id)arg1 type:(long long)arg2 updateWithResult:(long long)arg3 withAddedData:(id)arg4 changedData:(id)arg5 deletedData:(id)arg6 tips:(id)arg7;
- (void)onHomepage:(id)arg1 type:(long long)arg2 updatePrePage:(id)arg3;
- (void)onSetDataItemPrivateFinished:(long long)arg1 dataItemID:(id)arg2;
- (void)onSetDataItemPublicFinished:(long long)arg1 dataItemID:(id)arg2;
- (void)onModifyDataItemStarStatusFinished:(long long)arg1 dataItem:(id)arg2;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)onMediaItemSizeDidChange:(id)arg1;
- (void)onDataItemDeleteFinished:(long long)arg1 dataItemID:(id)arg2;
- (void)onPlayerDownloadComplete:(id)arg1 downloadInfo:(id)arg2;
- (void)onAudioMonoServiceBussinessAdded:(id)arg1 inMainScene:(BOOL)arg2;
- (CGRect)frameForPagingScrollView:(BOOL)arg1;
- (CGRect)frameForPageAtIndex:(unsigned long long)arg1;
- (CGRect)frameForPageAtIndexForSightView:(unsigned long long)arg1;
- (CGSize)contentSizeForPagingScrollView;
- (CGPoint)contentOffsetForPagingScrollView;
- (void)updateVisibleGalleryPagesForSizeChange:(BOOL)arg1;
- (void)updatePhotoatIndex:(unsigned long long)arg1;
- (BOOL)shouldAnimateFullScreenViewOnShow:(id)arg1;
- (void)onTouchEndOnFullScreenView:(id)arg1;
- (void)willShow;
- (void)goBackAfterSetBackground;
- (void)setWCBackground;
- (void)adjustViewAndNavBarRect;
- (void)onForwardOpDidSend:(id)arg1;
- (void)onForwardOpDidCancel:(id)arg1;
- (id)forwardVideoOpGetPlayerView:(id)arg1;
- (void)originalArticleRowViewDidClick:(id)arg1;
- (void)onClickFullSightView:(id)arg1;
- (void)onLongPressedFullSightView:(id)arg1;
- (void)onScanEnds;
- (id)currentImageScrollView;
- (id)imageScrollViewAtIndex:(unsigned long long)arg1;
- (id)getDisplayingPageForIndex:(unsigned long long)arg1;
- (void)autoPlayCurrentImageScrollViewIfNeeded;
- (void)startPlayingCurrentImageScrollViewIfNeeded;
- (void)pausePlayingCurrentImageScrollViewIfNeeded;
- (void)startDownloadCurrentImageScrollViewVideo;
- (id)targetLogInfo:(id)arg1;
- (void)translateWordInImage;
- (void)showTranslateImg:(id)arg1;
- (void)displayOriginImageAtIndex:(unsigned long long)arg1;
- (void)displayTranslateImageAtIndex:(unsigned long long)arg1;
- (void)displayImageAtIndex:(unsigned long long)arg1;
- (void)showActionSheetForTranslateImage;
- (void)handleTranslateResultActionSheet:(id)arg1 didSelectItem:(id)arg2;
- (void)handleClickActionSheetItemCancelTranslate;
- (void)handleClickActionSheetItemChangeTranslateLang;
- (void)handleClickActionSheetItemTranslateFeedback;
- (void)handleClickActionSheetItemSaveImageToAlbum;
- (void)reportTranslateMenuClick:(id)arg1;
- (id)getTranslateImgIdentifier:(id)arg1;
- (void)getTranslateImgInfo:(id)arg1 fileId:(id *)arg2 aesKey:(id *)arg3;
- (void)onPreDetectWordSuccess:(id)arg1;
- (void)onShowTranslateImage:(id)arg1;
- (void)onCancelTranslateImage:(id)arg1;
- (void)resetFeedBehaviourSession;
- (void)reportOnEnd;
- (void)reportOnPageChange;
- (void)reportOnViewApper;
- (void)reportOnViewDisappear;
- (id)behaviourInfoSession;
- (int)behaviourInfoPageType;
- (id)albumFeedBehaviourSession;
- (void)handleModifyShareScopeExposureReportWithActionSheet:(id)arg1;
- (void)doModifyShareScopeExposureReport:(BOOL)arg1;
- (void)handleClickActionSheetItemAskXiaoWei;
- (void)handleClickActionSheetItemOCR;
- (void)setupOCRHalfScreenViewCtrl:(id)arg1 mediaItem:(id)arg2;
- (void)onImageDetectUploadFinish:(unsigned int)arg1 context:(id)arg2 detectMediaInfo:(id)arg3;
- (void)onImageDetectOCRFinish:(unsigned int)arg1 jsonStr:(id)arg2 reqKey:(id)arg3 ocrResultType:(long long)arg4;
- (void)showOCRHalfScreenViewCtrl;
- (void)onHalfScreenPageDidClose:(id)arg1 action:(long long)arg2;
- (void)showQRCodeMultiDisplayView;
- (void)onDotViewClicked:(id)arg1;
- (void)onCancelBtnClicked:(id)arg1;
- (void)dismissQRCodeMultiView;
- (void)onSelectMarkDotInfo:(id)arg1;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (void)onTappedRowInfo:(id)arg1;
- (void)onActionSheetQRCodeRowViewBanned;
- (void)OnFinishComment:(BOOL)arg1;
- (void)photoMutipleImageBottomViewDidClickCommentButton:(id)arg1;
- (void)photoMutipleImageBottomViewDidClickDetailButton:(id)arg1;
- (void)onShowingEditView;
- (void)onDismissEditView;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void)onOpenWeAppButtonsUpdated:(id)arg1 itemList:(id)arg2;
- (void)modifyStarStatus:(BOOL)arg1;
- (void)_modifyStarStatus:(BOOL)arg1;
- (void)handleModifyDataItemStarStatusFinished:(long long)arg1 dataItem:(id)arg2;
- (void)doStarReportWithDataItem:(id)arg1 isStarred:(BOOL)arg2;
- (void)onReTranslateImage;
- (id)getOriginImage;
- (long long)v3ReportPageScene;
- (id)v3GalleryReportParamsForMediaItemWrap:(id)arg1;
- (long long)v3LargeImageStayTimeForPage:(id)arg1;
- (void)reportV3GalleryEvent:(id)arg1 mediaItemWrap:(id)arg2 page:(id)arg3 extraParams:(id)arg4;
- (void)setupLargeImageReportForPage:(id)arg1 mediaItemWrap:(id)arg2 index:(unsigned long long)arg3;
- (void)reportDetailBtnExp;
- (void)handleReadCountExposureAtIndex:(long long)arg1;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (id)menuItems;
- (void)setMenuItems:(id)arg1;
- (unsigned int)m_uiSource;
- (void)setM_uiSource:(unsigned int)arg1;
- (int)m_logicType;
- (void)setM_logicType:(int)arg1;
- (long long)homepageType;
- (long long)fromScene;
- (BOOL)useNewInteraction;
- (void)setUseNewInteraction:(BOOL)arg1;
- (BOOL)usesNativeProfileTransition;
- (void)setUsesNativeProfileTransition:(BOOL)arg1;
- (BOOL)usesAlbumListWindowSnapshot;
- (void)setUsesAlbumListWindowSnapshot:(BOOL)arg1;
- (BOOL)enableJumpToGallery;
- (void)setEnableJumpToGallery:(BOOL)arg1;
- (BOOL)useV3GalleryPagingStyle;
- (void)setUseV3GalleryPagingStyle:(BOOL)arg1;
- (BOOL)useV3GalleryControlStyle;
- (void)setUseV3GalleryControlStyle:(BOOL)arg1;
- (BOOL)enableV3PersonalPageExitAnimation;
- (void)setEnableV3PersonalPageExitAnimation:(BOOL)arg1;
- (BOOL)standaloneDataUpdateEnabled;
- (void)setStandaloneDataUpdateEnabled:(BOOL)arg1;
- (BOOL)standaloneInitialRangeLoading;
- (void)setStandaloneInitialRangeLoading:(BOOL)arg1;
- (CGRect)m_originImageRectInScreen;
- (id)fromViewController;
- (void)setFromViewController:(id)arg1;
- (id)pageDelegate;
- (void)setPageDelegate:(id)arg1;
- (void)setPageContext:(id)arg1;
- (id)togetherHistoryReportSession;
- (void)setTogetherHistoryReportSession:(id)arg1;
- (id)flutterAlbumSessionId;
- (void)setFlutterAlbumSessionId:(id)arg1;
- (BOOL)enableV3DataReport;
- (void)setEnableV3DataReport:(BOOL)arg1;
- (long long)snsLargeImageFrom;
- (void)setSnsLargeImageFrom:(long long)arg1;
- (long long)snsChannel;
- (void)setSnsChannel:(long long)arg1;
- (BOOL)isNoPrePageLoad;
- (void)setIsNoPrePageLoad:(BOOL)arg1;
- (id)ocrHalfScreenViewCtrl;
- (void)setOcrHalfScreenViewCtrl:(id)arg1;
- (id)qrCodeMultiView;
- (void)setQrCodeMultiView:(id)arg1;
- (void)setForwardRecordLogic:(id)arg1;
- (id)miaoJianPostSessionController;
- (void)setMiaoJianPostSessionController:(id)arg1;
- (BOOL)dynamicTagEnabled;
- (void)setDynamicTagEnabled:(BOOL)arg1;
- (void)setShareScopeMgr:(id)arg1;
- (BOOL)isEnhanceInteractionEnabled;
- (void)setIsEnhanceInteractionEnabled:(BOOL)arg1;
- (BOOL)isStarModificationEnabled;
- (void)setIsStarModificationEnabled:(BOOL)arg1;
- (BOOL)isStarBrowsingEnabled;
- (void)setIsStarBrowsingEnabled:(BOOL)arg1;
- (id)initialMediaItemId;
- (void)setInitialMediaItemId:(id)arg1;
- (id)initialMediaFeedId;
- (void)setInitialMediaFeedId:(id)arg1;
- (CGRect)initialOriginImageRectInScreen;
- (void)setInitialOriginImageRectInScreen:(CGRect)arg1;
- (id)originImageRectMediaItemId;
- (void)setOriginImageRectMediaItemId:(id)arg1;
- (BOOL)unExpReportEnable;
- (void)setUnExpReportEnable:(BOOL)arg1;
- (id)v3StandaloneLastRequestedTailItemID;
- (void)setV3StandaloneLastRequestedTailItemID:(id)arg1;
- (unsigned long long)v3StandalonePagingRequestToken;
- (void)setV3StandalonePagingRequestToken:(unsigned long long)arg1;
- (unsigned long long)v3StandalonePagingTimeoutRetryCount;
- (void)setV3StandalonePagingTimeoutRetryCount:(unsigned long long)arg1;
- (BOOL)v3StandaloneShouldAutoContinueAfterCurrentUpdate;
- (void)setV3StandaloneShouldAutoContinueAfterCurrentUpdate:(BOOL)arg1;
- (BOOL)v3StandaloneShouldKeepLoadingAfterCurrentUpdate;
- (void)setV3StandaloneShouldKeepLoadingAfterCurrentUpdate:(BOOL)arg1;
- (BOOL)v3StandaloneTailAdvancedAfterCurrentUpdate;
- (void)setV3StandaloneTailAdvancedAfterCurrentUpdate:(BOOL)arg1;
- (id)v3StandaloneDeferredInitialRangeDataItems;
- (void)setV3StandaloneDeferredInitialRangeDataItems:(id)arg1;
- (BOOL)v3StandaloneShouldFinishInitialRangeAfterSettling;
- (void)setV3StandaloneShouldFinishInitialRangeAfterSettling:(BOOL)arg1;
- (id)v3StandaloneDeferredPreviousPagingDataItems;
- (void)setV3StandaloneDeferredPreviousPagingDataItems:(id)arg1;
- (id)v3StandaloneDeferredPagingDataItems;
- (void)setV3StandaloneDeferredPagingDataItems:(id)arg1;
- (BOOL)v3StandaloneDeferredShouldAutoContinue;
- (void)setV3StandaloneDeferredShouldAutoContinue:(BOOL)arg1;
- (BOOL)v3StandaloneDeferredShouldKeepLoading;
- (void)setV3StandaloneDeferredShouldKeepLoading:(BOOL)arg1;
- (BOOL)v3StandaloneDeferredTailAdvanced;
- (void)setV3StandaloneDeferredTailAdvanced:(BOOL)arg1;
- (BOOL)v3StandalonePreviousPageLoading;
- (void)setV3StandalonePreviousPageLoading:(BOOL)arg1;
- (unsigned long long)v3StandalonePreviousPagingRequestToken;
- (void)setV3StandalonePreviousPagingRequestToken:(unsigned long long)arg1;
- (unsigned long long)v3StandalonePreviousPagingRetryCount;
- (void)setV3StandalonePreviousPagingRetryCount:(unsigned long long)arg1;
- (BOOL)v3GalleryExitDismissRequested;
- (void)setV3GalleryExitDismissRequested:(BOOL)arg1;
- (BOOL)v3GalleryExitDismissCompleted;
- (void)setV3GalleryExitDismissCompleted:(BOOL)arg1;
- (id)v3StandaloneImages;
- (void)setV3StandaloneImages:(id)arg1;
- (id)v3StandaloneImageRequests;
- (void)setV3StandaloneImageRequests:(id)arg1;
- (id)v3StandaloneImageQueue;
- (void)setV3StandaloneImageQueue:(id)arg1;
- (BOOL)v3StandaloneNeedsImageRefresh;
- (void)setV3StandaloneNeedsImageRefresh:(BOOL)arg1;
- (BOOL)v3StandaloneNeedsCurrentImageActions;
- (void)setV3StandaloneNeedsCurrentImageActions:(BOOL)arg1;
- (BOOL)isShareEmbedExcerptEnabled;
- (void)setIsShareEmbedExcerptEnabled:(BOOL)arg1;
- (double)loadOriginScaleLimit;
- (void)setLoadOriginScaleLimit:(double)arg1;
- (id)loadUhdMediaIdSet;
- (void)setLoadUhdMediaIdSet:(id)arg1;
- (id)mediaLoadImageTypeMap;
- (void)setMediaLoadImageTypeMap:(id)arg1;
- (BOOL)isAnimatingToShowFullScreen;
- (void)setIsAnimatingToShowFullScreen:(BOOL)arg1;
- (BOOL)isAnimationToShowFullScreenFinished;
- (void)setIsAnimationToShowFullScreenFinished:(BOOL)arg1;
- (BOOL)galleryNeedsLayoutAfterEntryAnimation;
- (void)setGalleryNeedsLayoutAfterEntryAnimation:(BOOL)arg1;
- (id)reloadMediaItem;
- (void)setReloadMediaItem:(id)arg1;
- (id)reloadDataItmes;
- (void)setReloadDataItmes:(id)arg1;
- (BOOL)gallerySizeTransitionInProgress;
- (void)setGallerySizeTransitionInProgress:(BOOL)arg1;
- (unsigned long long)galleryScreenConnectionGeneration;
- (void)setGalleryScreenConnectionGeneration:(unsigned long long)arg1;
- (CGSize)galleryContainerLayoutTargetSize;
- (void)setGalleryContainerLayoutTargetSize:(CGSize)arg1;
- (CGSize)galleryLastAppliedSize;
- (void)setGalleryLastAppliedSize:(CGSize)arg1;
- (id)nativeProfileTransition;
- (void)setNativeProfileTransition:(id)arg1;
- (BOOL)nativeProfileIgnoresDragUntilEnd;
- (void)setNativeProfileIgnoresDragUntilEnd:(BOOL)arg1;
- (BOOL)nativeProfileImageWasPlaying;
- (void)setNativeProfileImageWasPlaying:(BOOL)arg1;
- (id)nativeProfileChromeViewAlphas;
- (void)setNativeProfileChromeViewAlphas:(id)arg1;
- (BOOL)nativeProfileChromeHidden;
- (void)setNativeProfileChromeHidden:(BOOL)arg1;
- (id)nativeProfilePresentationOverlayHost;
- (void)setNativeProfilePresentationOverlayHost:(id)arg1;
- (id)nativeProfileTitleHostView;
- (void)setNativeProfileTitleHostView:(id)arg1;
- (id)nativeProfileTitleView;
- (void)setNativeProfileTitleView:(id)arg1;
- (id)trackedNativeProfileTitleViews;
- (void)setTrackedNativeProfileTitleViews:(id)arg1;
- (BOOL)nativeProfileTopBarsHidden;
- (void)setNativeProfileTopBarsHidden:(BOOL)arg1;
- (id)nativeProfileTopBarViewAlphas;
- (void)setNativeProfileTopBarViewAlphas:(id)arg1;
- (id)nativeProfileTopBarButtonEnabledStates;
- (void)setNativeProfileTopBarButtonEnabledStates:(id)arg1;
- (void).cxx_destruct;
@end
