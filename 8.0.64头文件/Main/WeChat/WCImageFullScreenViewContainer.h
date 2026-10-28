@interface WCImageFullScreenViewContainer : MMUIScrollView <MMScrollActionSheetDelegate, BaseScanLogicDelegate, FullScreenGestureDelegate, WCPlayerEventExt, WCImageTranslateDelegate, OCRTransHalfScreenViewControllerDelegate, QRCodeInMultiDisplayViewDelegate, RecentForwardScrollViewDelegate, WAWxMaterialRefreshExt, MMActionSheetQRCodeRowViewDelegate, WCMomentsScrollActionSheetBizOriginalArticleRowViewDelegate, WCImageFullScreenTagViewDelegate, UIScrollViewDelegate, MMImageScrollViewHelperDelegate, WCFacadeExt>
{
    WCMediaItem * m_mediaData; // +0x8
    WCMediaItemWrap * m_mediaDataWrap; // +0x10
    CGRect m_originImageRectInScreen; // +0x18
    CGSize m_initalContentSize; // +0x38
    UIImage * m_image; // +0x48
    BOOL m_isAnimating; // +0x50
    BOOL m_isShowing; // +0x51
    BOOL m_bIsLongPressHandled; // +0x52
    BOOL m_isImageReady; // +0x53
    BOOL m_isComeFromDownload; // +0x54
    BOOL m_isDownloadFail; // +0x55
    UIImageView * m_container; // +0x58
    MMLoadingView * m_loadingView; // +0x60
    MMProgressViewEx * m_processView; // +0x68
    MMImageScrollViewHelper * m_scrollViewHelper; // +0x70
    WCMomentsScrollActionSheet * m_actionSheet; // +0x78
    id <WCImageFullScreenViewContainerDelegate> m_delegate; // +0x80
    ScanQRCodeLogicController * _scanQRCodeLogic; // +0x88
    int m_qrcodeActionSheetIndex; // +0x90
    WXFullScreenGestureRecognizer * m_gesture; // +0x98
    UIView * m_gestureView; // +0xa0
    MMUIButton * m_gameButton; // +0xa8
    WCImageTranslateLogic * _imgTranslateLogic; // +0xb0
    BOOL _bNeedEditWhenLoad; // +0xb8
    BOOL _longPressEnabled; // +0xb9
    BOOL _canShowProgress; // +0xba
    BOOL _bSilencePlayLivePhotos; // +0xbb
    BOOL _isShareEmbedExcerptEnabled; // +0xbc
    BOOL _haveMaterialButton; // +0xbd
    BOOL _needsRotateWhenAnimationEnd; // +0xbe
    BOOL _isDraggingToClose; // +0xbf
    BOOL _isClosing; // +0xc0
    BOOL _isUpdateContainerImageStopped; // +0xc1
    BOOL _isDisplayTranslateImage; // +0xc2
    BOOL _m_isShowOriginImage; // +0xc3
    UIView * m_customContainer; // +0xc8
    unsigned long long _contentItemScene; // +0xd0
    NSString * _msgUserName; // +0xd8
    NSString * _msgID; // +0xe0
    WCMomentsPageContext * _pageContext; // +0xe8
    long long _mediaIndex; // +0xf0
    WCImageFullScreenTagView * _imageTagView; // +0xf8
    double _startLoadingTime; // +0x100
    OCRTransHalfScreenViewController * _ocrHalfScreenViewCtrl; // +0x108
    QRCodeInMultiDisplayView * _qrCodeMultiView; // +0x110
    SessionForwardRecordLogic * _forwardRecordLogic; // +0x118
    NSString * _materialFileExt; // +0x120
    MMScrollViewZoomReporter * _zoomReporter; // +0x128
    UIViewPropertyAnimator * _showAnimationAnimator; // +0x130
    long long _loadImageType; // +0x138
    double _loadOriginScaleLimit; // +0x140
    WCLivePhotoBrowseReport * _livePhotoBrowseReport; // +0x148
    UIEdgeInsets _imageTagSafeArea; // +0x150
}
- (id)initWithFrame:(CGRect)arg1;
- (void)loadContainer;
- (long long)getLivePhotoExpFrom;
- (id)albumFeedBehaviourSession:(id)arg1;
- (id)getSnsSessionIdWithMediaItemWrap:(id)arg1;
- (id)generateLivePhotoBrowseReportWithMediaItemWrap:(id)arg1;
- (void)reportLivePhotoExposeData;
- (void)reportLivePhotoPlayData:(long long)arg1;
- (void)setM_customContainer:(id)arg1;
- (id)displayingContainer;
- (void)didLayoutContainer;
- (void)reloadImageTagView;
- (void)removeFromSuperview;
- (void)setImageTagSafeArea:(UIEdgeInsets)arg1;
- (void)updateImageTagSafeArea;
- (void)updateVisibleForImageTagView:(BOOL)arg1;
- (void)layoutImageTagView;
- (void)layoutSubviews;
- (void)stopAllAnimation;
- (void)dealloc;
- (void)setFrame:(CGRect)arg1;
- (void)setZoomScale:(double)arg1 animated:(BOOL)arg2;
- (void)setContentOffset:(CGPoint)arg1;
- (void)setContentSize:(CGSize)arg1;
- (id)forwardRecordLogic;
- (void)startLoadingBlocked;
- (void)startLoadingNonBlock;
- (void)stopLoading;
- (void)updateActionSheetOnDownloadFinishedIfNeeded;
- (void)setupActionSheet;
- (void)setupActionSheetItem;
- (id)createRecentForwardView;
- (BOOL)canShowOriginalArticleItem;
- (void)tryLoadClearestLocalImage;
- (void)displayOriginImage;
- (void)displayTranslateImage;
- (BOOL)isAppearOnScreen;
- (void)autoPlayLivePhotoIfReady;
- (void)startPlayingLivePhoto:(BOOL)arg1;
- (void)startDownloadingLivePhoto;
- (void)pausePlayingLivePhoto;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidChangeAdjustedContentInset:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (id)viewForZooming;
- (void)onDoubleTap:(id)arg1;
- (void)initScrollViewHelper;
- (void)reloadView:(id)arg1;
- (void)showProcessView;
- (void)clearStatus;
- (void)setContentOffsetAndSize;
- (void)animationShowView;
- (void)addGameButton;
- (void)onGameButtonClick:(id)arg1;
- (void)animationShowDidStop;
- (void)animationShowStep2_ImageNotReady;
- (void)animationShowStep2_Animate;
- (void)startUpdateImageFrameAnimation:(BOOL)arg1;
- (void)animationShowStep2;
- (void)animationShowWithMediaItem:(id)arg1;
- (long long)getDefaultLoadPhotoType;
- (void)setM_mediaData:(id)arg1;
- (void)tryDownloadImage;
- (long long)getDownloadType;
- (void)tryDownloadOriginImage;
- (void)reportLoadImage;
- (void)animationHideWithRotate;
- (void)animationHideDidStop;
- (void)hideWithoutAnimation;
- (void)livePhotoButtonClickedInImageTagView:(id)arg1;
- (void)imageSearchButtonClickedInImageTagView:(id)arg1;
- (void)onDownloadMediaProcessChange:(id)arg1 downloadType:(long long)arg2 current:(long long)arg3 total:(long long)arg4;
- (BOOL)_isDownloadArgsMatched:(id)arg1;
- (void)onPlayerDownloadComplete:(id)arg1 downloadInfo:(id)arg2;
- (void)updateContainerImage;
- (void)onDeviceRotate:(BOOL)arg1;
- (void)didDisplay;
- (void)didEndDisplaying;
- (void)contentNeedRotateWithOrientation:(long long)arg1;
- (void)animationRotateDidStop;
- (void)resetZoomScale;
- (void)initGestureView;
- (void)updateGestureView;
- (void)onSingleTap:(id)arg1;
- (BOOL)shouldPreventDragDownCloseGesture;
- (void)onFullScreenSingleTap;
- (void)onFullScreenClose;
- (void)onFullScreenDragToRect:(CGRect)arg1;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragEnd;
- (void)onFullScreenLongPressBegin;
- (void)onFullScreenLongPressEnd;
- (void)doReportSaveLiveToAlbum:(BOOL)arg1 mediaItem:(id)arg2 reportDic:(id)arg3 error:(id)arg4;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (void)startForcedRotationToPortrait;
- (void)onStartEditImage:(BOOL)arg1;
- (void)startEditImage:(BOOL)arg1;
- (void)checkNeedToEditImageWhenLoaded;
- (void)checkNeedToRotateWhenAnimationEnd;
- (void)onScanEnds;
- (void)onStopLoading;
- (id)targetLogInfo;
- (id)imgTranslateLogic;
- (void)resetLogicAndViews;
- (void)cancelImageTranslate;
- (void)preDetectWord;
- (void)onTranslateWordInImage;
- (void)showTranslateImg:(id)arg1;
- (void)handleClickActionSheetItemOCR;
- (void)setupOCRHalfScreenViewCtrl:(id)arg1;
- (void)onImageDetectUploadFinish:(unsigned int)arg1 context:(id)arg2 detectMediaInfo:(id)arg3;
- (void)onImageDetectOCRFinish:(unsigned int)arg1 jsonStr:(id)arg2 reqKey:(id)arg3 ocrResultType:(long long)arg4;
- (void)showOCRHalfScreenViewCtrl;
- (void)onCircleToSearch;
- (void)startImageSearchFromEntrance:(unsigned long long)arg1;
- (void)onImageWebSearch;
- (id)getTranslateImgIdentifier:(id)arg1;
- (void)getTranslateImgInfo:(id)arg1 fileId:(id *)arg2 aesKey:(id *)arg3;
- (void)onPreDetectWordSuccess:(id)arg1;
- (void)onStartAnimateTranslateImage:(id)arg1;
- (void)onFinishAnimateTranslateImage:(id)arg1;
- (void)onCancelTranslateImage:(id)arg1;
- (void)onShowTranslateImage:(id)arg1;
- (void)onHalfScreenPageDidClose:(id)arg1 action:(long long)arg2;
- (void)showQRCodeMultiDisplayView;
- (void)onDotViewClicked:(id)arg1;
- (void)onCancelBtnClicked:(id)arg1;
- (void)dismissQRCodeMultiView;
- (void)onSelectMarkDotInfo:(id)arg1;
- (id)getQRCodeMultiView;
- (void)onTappedRowInfo:(id)arg1;
- (void)onActionSheetQRCodeRowViewBanned;
- (void)refreshWAWxMaterialAppInfo:(id)arg1;
- (void)tryAddWAOpenWxMaterialButtonWhenPopMenu:(BOOL)arg1;
- (BOOL)addWAOpenWxMaterialButton:(id)arg1;
- (void)handleClickWeAppListOpenMaterial;
- (void)handleClickWeAppOpenMaterial:(id)arg1;
- (void)originalArticleRowViewDidClick:(id)arg1;
- (void)_onFinderRowViewDidClick;
- (id)zoomReporter;
- (void)handleClickActionSheetItemCancelTranslate;
- (void)handleClickActionSheetItemChangeTranslateLang;
- (void)handleClickActionSheetItemTranslateFeedback;
- (void)reportTranslateMenuClick:(id)arg1;
- (id)m_image;
- (void)setM_image:(id)arg1;
- (id)m_mediaData;
- (id)m_mediaDataWrap;
- (void)setM_mediaDataWrap:(id)arg1;
- (CGRect)m_originImageRectInScreen;
- (void)setM_originImageRectInScreen:(CGRect)arg1;
- (CGSize)m_initalContentSize;
- (void)setM_initalContentSize:(CGSize)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_container;
- (id)m_customContainer;
- (id)m_loadingView;
- (BOOL)bNeedEditWhenLoad;
- (void)setBNeedEditWhenLoad:(BOOL)arg1;
- (UIEdgeInsets)imageTagSafeArea;
- (unsigned long long)contentItemScene;
- (void)setContentItemScene:(unsigned long long)arg1;
- (id)msgUserName;
- (void)setMsgUserName:(id)arg1;
- (id)msgID;
- (void)setMsgID:(id)arg1;
- (BOOL)longPressEnabled;
- (void)setLongPressEnabled:(BOOL)arg1;
- (BOOL)canShowProgress;
- (void)setCanShowProgress:(BOOL)arg1;
- (BOOL)bSilencePlayLivePhotos;
- (void)setBSilencePlayLivePhotos:(BOOL)arg1;
- (id)pageContext;
- (void)setPageContext:(id)arg1;
- (BOOL)isShareEmbedExcerptEnabled;
- (void)setIsShareEmbedExcerptEnabled:(BOOL)arg1;
- (long long)mediaIndex;
- (void)setMediaIndex:(long long)arg1;
- (id)imageTagView;
- (double)startLoadingTime;
- (void)setStartLoadingTime:(double)arg1;
- (id)ocrHalfScreenViewCtrl;
- (void)setOcrHalfScreenViewCtrl:(id)arg1;
- (id)qrCodeMultiView;
- (void)setQrCodeMultiView:(id)arg1;
- (void)setForwardRecordLogic:(id)arg1;
- (BOOL)haveMaterialButton;
- (void)setHaveMaterialButton:(BOOL)arg1;
- (id)materialFileExt;
- (void)setMaterialFileExt:(id)arg1;
- (BOOL)needsRotateWhenAnimationEnd;
- (void)setNeedsRotateWhenAnimationEnd:(BOOL)arg1;
- (BOOL)isDraggingToClose;
- (void)setIsDraggingToClose:(BOOL)arg1;
- (BOOL)isClosing;
- (void)setIsClosing:(BOOL)arg1;
- (BOOL)isUpdateContainerImageStopped;
- (void)setIsUpdateContainerImageStopped:(BOOL)arg1;
- (void)setZoomReporter:(id)arg1;
- (BOOL)isDisplayTranslateImage;
- (void)setIsDisplayTranslateImage:(BOOL)arg1;
- (id)showAnimationAnimator;
- (void)setShowAnimationAnimator:(id)arg1;
- (long long)loadImageType;
- (void)setLoadImageType:(long long)arg1;
- (double)loadOriginScaleLimit;
- (void)setLoadOriginScaleLimit:(double)arg1;
- (BOOL)m_isShowOriginImage;
- (void)setM_isShowOriginImage:(BOOL)arg1;
- (id)livePhotoBrowseReport;
- (void)setLivePhotoBrowseReport:(id)arg1;
- (void).cxx_destruct;
@end
