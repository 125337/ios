@interface WCPhotoMutipleImageViewController : WCDragToCloseViewController <QRCodeInMultiDisplayViewDelegate, UIScrollViewDelegate, scrollViewDelegate, WCImageViewDelegate, WCActionSheetDelegate, WCFacadeExt, WCImageScrollViewDelegate, WCCommentDetailViewControllerFBDelegate, RichTextLayoutDelegate, BaseScanLogicDelegate, MonoServiceMgrExt>
{
    MMScrollView * pagingScrollView; // +0x70
    NSMutableArray * m_arrDatas; // +0x78
    unsigned int m_uiSource; // +0x80
    BOOL m_isShowingDataItemList; // +0x84
    int m_logicType; // +0x88
    NSMutableSet * recycledImagePage; // +0x90
    NSMutableSet * recycledSightPage; // +0x98
    NSMutableSet * visiblePages; // +0xa0
    int firstVisiblePageIndexBeforeRotation; // +0xa8
    double percentScrolledIntoFirstVisiblePage; // +0xb0
    int m_iNumberOfPages; // +0xb8
    int m_iCurrentPage; // +0xbc
    BOOL m_hideWhenDisappear; // +0xc0
    CContact * m_contact; // +0xc8
    NSMutableArray * menuItems; // +0xd0
    UIView * bottomView; // +0xd8
    UIView * descBackgroundView; // +0xe0
    RichTextView * descLabel; // +0xe8
    MMHeadImageView * headImg; // +0xf0
    UIImageView * lockImgView; // +0xf8
    WCLikeButton * btnLike; // +0x100
    MMUIButton * btnComment; // +0x108
    MMUIButton * rightBottomCtrl; // +0x110
    UILabel * likeCountLable; // +0x118
    UILabel * commentCountLable; // +0x120
    UIImageView * smallLikeImg; // +0x128
    UIImageView * smallCommentImg; // +0x130
    UIButton * setBGButton; // +0x138
    BOOL m_isTileing; // +0x140
    BOOL m_scrollViewLayouting; // +0x141
    BOOL m_orientationRotating; // +0x142
    BOOL m_isBidirectionalFan; // +0x143
    BOOL m_backing; // +0x144
    BOOL m_backEnabled; // +0x145
    BOOL m_forbidSingleTap; // +0x146
    ScanQRCodeLogicController * _scanQRCodeLogic; // +0x148
    BOOL _bIsMoreData; // +0x150
    BOOL _bIsNoMediaDataOverLimitReq; // +0x151
    BOOL _bIsLoadingMoreData; // +0x152
    BOOL _bIsLastDataEmpty; // +0x153
    BOOL _bIsDirectFreshScrollSize; // +0x154
    BOOL _bIsShow; // +0x155
    double _startContentOffsetX; // +0x158
    double _willEndContentOffsetX; // +0x160
    double _endContentOffsetX; // +0x168
    unsigned int _uiMaxContiunePreLoadCount; // +0x170
    ForwardMessageLogicController * m_forwardMsgLogic; // +0x178
    EditImageForwardAndEditLogicController * _editImageLogic; // +0x180
    WCImageTranslateLogic * _imgTranslateLogic; // +0x188
    MMImageOpenWeAppLogic * _openWeAppLogic; // +0x190
    NSMutableSet * m_displayTranslateImageIndexSet; // +0x198
    WCMomentsScrollActionSheet * menu_ActionSheet; // +0x1a0
    ShareDataToOpenSDKController * m_shareDataToOpenSDKViewController; // +0x1a8
    BOOL _isNoPrePageLoad; // +0x1b0
    BOOL _dynamicTagEnabled; // +0x1b1
    BOOL _isEnhanceInteractionEnabled; // +0x1b2
    BOOL _isStarModificationEnabled; // +0x1b3
    BOOL _isStarBrowsingEnabled; // +0x1b4
    BOOL _isShareEmbedExcerptEnabled; // +0x1b5
    long long _homepageType; // +0x1b8
    long long _fromScene; // +0x1c0
    WCMomentsPageContext * _pageContext; // +0x1c8
    WCTogetherHistoryReportSession * _togetherHistoryReportSession; // +0x1d0
    OCRTransHalfScreenViewController * _ocrHalfScreenViewCtrl; // +0x1d8
    QRCodeInMultiDisplayView * _qrCodeMultiView; // +0x1e0
    SessionForwardRecordLogic * _forwardRecordLogic; // +0x1e8
    WCMomentsShareScopeMgr * _shareScopeMgr; // +0x1f0
    double _loadOriginScaleLimit; // +0x1f8
    NSMutableSet * _loadUhdMediaIdSet; // +0x200
    NSMutableDictionary * _mediaLoadImageTypeMap; // +0x208
}
- (id)initWithHomepageType:(long long)arg1 contact:(id)arg2 dataItems:(id)arg3 currentIndex:(unsigned int)arg4 canAutoLoadNextPage:(BOOL)arg5;
- (id)initWithHomepageType:(long long)arg1 contact:(id)arg2 dataItems:(id)arg3 currentIndex:(unsigned int)arg4 canAutoLoadNextPage:(BOOL)arg5 canLoadPrePage:(BOOL)arg6;
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
- (void)layoutHiddenView:(BOOL)arg1;
- (void)showFullScreen;
- (void)showFullScreen:(BOOL)arg1;
- (void)hideFullScreen;
- (void)hideFullScreen:(BOOL)arg1;
- (void)UISplitViewWillChangeSplitMode;
- (void)handleSingleTap;
- (void)onSingleTapWCImageScrollView;
- (void)onFullScreenItemDragLongPressBegin;
- (void)hideVCAnimation;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragEnd;
- (void)layoutScrollView:(BOOL)arg1;
- (void)initScrollView;
- (void)preLoadFinishiedAndReloadData:(id)arg1;
- (void)preLoadPrePageFinishiedAndReloadData:(id)arg1;
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
- (void)onCommentDetailViewController:(id)arg1 reEditDataItem:(id)arg2;
- (void)onBeforeDeleteData;
- (void)onDeleteData;
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
- (void)viewDidLoad;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidTransitionToNewSize;
- (void)checkNoMoreData;
- (void)preLoadProcess;
- (void)tilePages;
- (id)dequeueRecycledImagePage;
- (id)dequeueRecycledSightPage;
- (BOOL)isDisplayingPageForIndex:(unsigned long long)arg1;
- (id)albumFeedBehaviourSession:(id)arg1;
- (id)generateLivePhotoBrowseReportWithMediaItemWrap:(id)arg1;
- (void)configureImagePage:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)updateImageTagsForPage:(id)arg1;
- (void)updateImageTagsForPageIndex:(unsigned long long)arg1;
- (id)imageAtIndex:(unsigned long long)arg1;
- (void)configureSightPage:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)onClickWCImage:(id)arg1;
- (void)reloadImage:(id)arg1;
- (void)pageLoadUhdImage:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
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
- (void)setPageContext:(id)arg1;
- (id)togetherHistoryReportSession;
- (void)setTogetherHistoryReportSession:(id)arg1;
- (BOOL)isNoPrePageLoad;
- (void)setIsNoPrePageLoad:(BOOL)arg1;
- (id)ocrHalfScreenViewCtrl;
- (void)setOcrHalfScreenViewCtrl:(id)arg1;
- (id)qrCodeMultiView;
- (void)setQrCodeMultiView:(id)arg1;
- (void)setForwardRecordLogic:(id)arg1;
- (BOOL)dynamicTagEnabled;
- (void)setDynamicTagEnabled:(BOOL)arg1;
- (void)setShareScopeMgr:(id)arg1;
- (BOOL)isEnhanceInteractionEnabled;
- (void)setIsEnhanceInteractionEnabled:(BOOL)arg1;
- (BOOL)isStarModificationEnabled;
- (void)setIsStarModificationEnabled:(BOOL)arg1;
- (BOOL)isStarBrowsingEnabled;
- (void)setIsStarBrowsingEnabled:(BOOL)arg1;
- (BOOL)isShareEmbedExcerptEnabled;
- (void)setIsShareEmbedExcerptEnabled:(BOOL)arg1;
- (double)loadOriginScaleLimit;
- (void)setLoadOriginScaleLimit:(double)arg1;
- (id)loadUhdMediaIdSet;
- (void)setLoadUhdMediaIdSet:(id)arg1;
- (id)mediaLoadImageTypeMap;
- (void)setMediaLoadImageTypeMap:(id)arg1;
- (void).cxx_destruct;
@end
