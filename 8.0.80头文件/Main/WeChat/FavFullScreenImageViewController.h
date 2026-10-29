@interface FavFullScreenImageViewController : FullScreenViewController <FavForwardLogicDelegate, EditImageForwardAndEditLogicDelegate, MMImageActionSheetDelegate, MMScrollActionSheetDelegate, IRecordDownloadExt, WCPlayerDownloaderExt, UIScrollViewDelegate, scrollViewDelegate, FavImageFullScreenViewContainerDelegate, WCActionSheetDelegate, BaseScanLogicDelegate>
{
    CGRect m_originImageRectInScreen; // +0x78
    BOOL m_isAnimating; // +0x98
    MMScrollView * m_scrollView; // +0xa0
    UIView * m_blackMask; // +0xa8
    NSMutableArray * m_arrFavData; // +0xb0
    NSMutableArray * m_arrImage; // +0xb8
    unsigned int m_iCurIndex; // +0xc0
    unsigned int m_firstIndex; // +0xc4
    BOOL m_isRotating; // +0xc8
    BOOL m_isAnimationShowing; // +0xc9
    ScanQRCodeLogicController * _scanQRCodeLogic; // +0xd0
    int m_qrcodeActionSheetIndex; // +0xd8
    WCActionSheetWithScanWXCode * m_actionSheet; // +0xe0
    SimpleImgInfo * m_forwardDataSrc; // +0xe8
    SimpleImgInfo * m_editImageInfo; // +0xf0
    EditImageForwardAndEditLogicController * m_editImageLogicController; // +0xf8
    BOOL m_allowRotate; // +0x100
    MMFullScreenItemView * m_currentContainer; // +0x108
    FavFullScreenImageButtonsContainerView * m_buttonsContainerView; // +0x110
    FavShowOriginLogic * m_favShowOriginLogic; // +0x118
    BOOL _m_canSelect; // +0x120
    BOOL _m_needEditImage; // +0x121
    BOOL _m_canEditImage; // +0x122
    BOOL _m_videoMuted; // +0x123
    BOOL _preloadAdjacentImages; // +0x124
    BOOL _useOriginalLayoutForThumbnailPlaceholder; // +0x125
    BOOL _forcePortrait; // +0x126
    BOOL _isOpenFromFlutterWeNote; // +0x127
    BOOL _disableAskXiaoWeiEntry; // +0x128
    int _source; // +0x12c
    long long _m_longPressScanScene; // +0x130
    UIView * _originView; // +0x138
    id <FavFullScreenImageViewControllerDelegate> _m_delegate; // +0x140
    unsigned long long _circleToSearchScene; // +0x148
    ScanQRCodeLogicParams * _logicParams; // +0x150
    MMImageActionSheet * _imageActionSheet; // +0x158
    MMScrollActionSheet * _scrollActionSheet; // +0x160
    unsigned long long _lastScreenshotNotifyTimestamp; // +0x168
    id /* block */ _downloadCompleteBlock; // +0x170
    NSMutableSet * _markTranslateSet; // +0x178
    MMImageBrowserIntentPredictor * _askXiaoWeiImageIntentPredictor; // +0x180
    NSMutableDictionary * _askXiaoWeiImageIntentResultDict; // +0x188
    NSMutableSet * _askXiaoWeiDetectingImageIds; // +0x190
    NSMutableDictionary * _askXiaoWeiLatestRequestIdDict; // +0x198
    unsigned long long _askXiaoWeiNextRequestId; // +0x1a0
    NSString * _imageAiPCurrentVisitImageIdentifier; // +0x1a8
    CBTImageAiPReportContext * _imageAiPReportContext; // +0x1b0
}
+ (id)animationShowWithRecordData:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3;
+ (id)animationShowWithRecordData:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3 configureBlock:(id /* block */)arg4;
+ (id)animationShowWithRecordData:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3 needEdit:(BOOL)arg4 canEdit:(BOOL)arg5;
+ (id)animationShowWithRecordData:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3 needEdit:(BOOL)arg4 canEdit:(BOOL)arg5 delegate:(id)arg6;
+ (id)animationShowWithRecordData:(id)arg1 originRect:(CGRect)arg2 index:(unsigned int)arg3 needEdit:(BOOL)arg4 canEdit:(BOOL)arg5 delegate:(id)arg6;
+ (id)animationShowWithRecordData:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3 fromViewController:(id)arg4 settingBlock:(id /* block */)arg5;
+ (id)convertWxamFilePathIfNeeded:(id)arg1;
- (BOOL)useTransparentNavibar;
- (id)init;
- (BOOL)shouldUseAIProcessInImageActionSheet;
- (id)askXiaoWeiActionSheetTitleForAIProcess:(BOOL)arg1;
- (void)setupImageActionSheetForAIProcess:(BOOL)arg1;
- (void)prepareImageActionSheet;
- (id)askXiaoWeiImageIdForImageInfo:(id)arg1;
- (BOOL)canUseAskXiaoWeiForImageInfo:(id)arg1;
- (BOOL)canDetectAskXiaoWeiImageIntentForImageInfo:(id)arg1;
- (long long)askXiaoWeiImageIntentTypeForImageInfo:(id)arg1;
- (id)imageAiPVisitIdentifierForImageInfo:(id)arg1;
- (void)beginImageAiPReportVisitForImageInfo:(id)arg1;
- (id)imageAiPReportContextForImageInfo:(id)arg1;
- (void)detectAskXiaoWeiImageIntentIfNeededForImageInfo:(id)arg1;
- (void)showAskXiaoWeiForCurrentImageWithAnchorView:(id)arg1;
- (BOOL)showRecommendedAskXiaoWeiForCurrentRecordImage;
- (void)viewDidLoad;
- (void)setDisableAskXiaoWeiEntry:(BOOL)arg1;
- (void)setCircleToSearchScene:(unsigned long long)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidPush:(BOOL)arg1;
- (void)viewWillPop:(BOOL)arg1;
- (void)dealloc;
- (void)onVideoPlayUIScreenshot:(id)arg1;
- (void)onMemoryWarning;
- (void)adjustViewAndNavBarRect;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)clearStatus;
- (void)resetScrollView;
- (void)setRecordData:(id)arg1 originRect:(CGRect)arg2 index:(unsigned int)arg3;
- (void)reloadContainerImgInfo:(id)arg1 originRect:(CGRect)arg2 index:(unsigned int)arg3;
- (void)updateCurrentContainerOriginRect:(CGRect)arg1;
- (id)getImgInfoWithIndex:(unsigned int)arg1;
- (void)showVCAnimation;
- (double)animationDuration;
- (BOOL)useBackgroundAnimation;
- (void)hideVCAnimationWillCompleted:(id /* block */)arg1;
- (id)getAnimationControllerForDismissedController:(id)arg1;
- (void)animationShowWithRecordData:(id)arg1 originRect:(CGRect)arg2 index:(unsigned int)arg3;
- (void)downloadImage;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (id)getVisibleViewController;
- (void)onContainerAnimationHideStop;
- (void)animationHideStop;
- (void)onContainerAnimationShowStart;
- (void)onContainerAnimationShowStop;
- (void)onContainerAnimationHideStart;
- (void)onAnimateFadeOut;
- (BOOL)shouldAnimationWhenHide;
- (BOOL)useAlphaAnimation;
- (void)animationHideWithRotate;
- (BOOL)isVideoMuted;
- (void)tryToDownloadVideoWith:(id)arg1;
- (BOOL)isVideoNeedLazyDownload:(id)arg1;
- (void)onFullScreenItemSingleTap;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (id)checkOriginImgViewWhenAnimationHideWith:(id)arg1;
- (BOOL)allowAnimationOnLandscape;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDragCancel;
- (void)onFullScreenItemViewShowWithImgInfo:(id)arg1;
- (CGRect)getOriginImageViewRectWithSimpleImgInfo:(id)arg1;
- (BOOL)needAsyncDoAnimationHideDidStopHandle;
- (void)startCircleToSearch:(unsigned long long)arg1 andEntrance:(unsigned long long)arg2;
- (id)customItemsArrayForImageActionSheet:(id)arg1;
- (void)imageActionSheet:(id)arg1 itemDidAppear:(id)arg2;
- (void)imageActionSheet:(id)arg1 itemWillClicked:(id)arg2;
- (void)imageActionSheet:(id)arg1 itemDidClicked:(id)arg2;
- (BOOL)imageActionSheet:(id)arg1 itemDidCustomEvent:(id)arg2;
- (id)translateImageIdentifier;
- (void)onShowTranslateImage:(id)arg1;
- (void)onLongPressEvent:(id)arg1 onImage:(id)arg2;
- (void)setupShowOriginFooterIfNeeded;
- (void)onWillLongPress:(id)arg1 touchPoint:(CGPoint)arg2 onImage:(id)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)dismissMySelfAndShowContext:(id)arg1 dataItem:(id)arg2;
- (void)onForward2MsgRecordData:(id)arg1;
- (void)onForward2WCRecordData;
- (void)editImage;
- (void)onFavorites;
- (id)tryOperateCurrentVideo:(BOOL)arg1 block:(id /* block */)arg2;
- (BOOL)tryShowRepeatSaveConfirmForRecordAsset:(id)arg1 srcPath:(id)arg2 isVideo:(BOOL)arg3 onConfirm:(id /* block */)arg4;
- (void)recordAlbumBookkeepingIfNeeded:(id)arg1 srcPath:(id)arg2 isVideo:(BOOL)arg3 assetID:(id)arg4;
- (void)onSaveToAlbum;
- (id)getMessageUUID;
- (void)onShowingEditView;
- (void)onDismissEditView;
- (void)onEditImageForwardAndEditResult:(id)arg1;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (id)getFavForawrdViewController;
- (void)markDisplayTranslateResult:(id)arg1;
- (void)unmarkDisplayTranslateResult:(id)arg1;
- (BOOL)isDisplayTranslateResult:(id)arg1;
- (id)markTranslateSet;
- (void)showActionSheetFromTranslateImg;
- (void)displayOriginImage;
- (void)onClickSavedPhotosAlbumButton;
- (void)onClickCancelTranslateButton;
- (void)onClickChangeTranslateLanguageButton;
- (void)onClickTransalteFeedbackButton;
- (void)reportTranslateMenuClick:(id)arg1;
- (void)updateLivePhotoWhenDownloadOK:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordMessagePart:(id)arg1 DataId:(id)arg2 PartLen:(unsigned int)arg3 TotalLen:(unsigned int)arg4;
- (void)OnDownloadRecordMessageExpired:(id)arg1 DataId:(id)arg2;
- (void)OnDownloadRecordMessageFail:(id)arg1 DataId:(id)arg2 failRetCode:(int)arg3;
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (unsigned int)m_iCurIndex;
- (void)setM_iCurIndex:(unsigned int)arg1;
- (BOOL)m_canSelect;
- (void)setM_canSelect:(BOOL)arg1;
- (BOOL)m_needEditImage;
- (void)setM_needEditImage:(BOOL)arg1;
- (BOOL)m_canEditImage;
- (void)setM_canEditImage:(BOOL)arg1;
- (BOOL)m_videoMuted;
- (void)setM_videoMuted:(BOOL)arg1;
- (BOOL)preloadAdjacentImages;
- (void)setPreloadAdjacentImages:(BOOL)arg1;
- (BOOL)useOriginalLayoutForThumbnailPlaceholder;
- (void)setUseOriginalLayoutForThumbnailPlaceholder:(BOOL)arg1;
- (long long)m_longPressScanScene;
- (void)setM_longPressScanScene:(long long)arg1;
- (int)source;
- (void)setSource:(int)arg1;
- (id)originView;
- (void)setOriginView:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)forcePortrait;
- (void)setForcePortrait:(BOOL)arg1;
- (BOOL)isOpenFromFlutterWeNote;
- (void)setIsOpenFromFlutterWeNote:(BOOL)arg1;
- (BOOL)disableAskXiaoWeiEntry;
- (unsigned long long)circleToSearchScene;
- (id)logicParams;
- (void)setLogicParams:(id)arg1;
- (id)imageActionSheet;
- (void)setImageActionSheet:(id)arg1;
- (id)scrollActionSheet;
- (void)setScrollActionSheet:(id)arg1;
- (unsigned long long)lastScreenshotNotifyTimestamp;
- (void)setLastScreenshotNotifyTimestamp:(unsigned long long)arg1;
- (id /* block */)downloadCompleteBlock;
- (void)setDownloadCompleteBlock:(id /* block */)arg1;
- (void)setMarkTranslateSet:(id)arg1;
- (id)askXiaoWeiImageIntentPredictor;
- (void)setAskXiaoWeiImageIntentPredictor:(id)arg1;
- (id)askXiaoWeiImageIntentResultDict;
- (void)setAskXiaoWeiImageIntentResultDict:(id)arg1;
- (id)askXiaoWeiDetectingImageIds;
- (void)setAskXiaoWeiDetectingImageIds:(id)arg1;
- (id)askXiaoWeiLatestRequestIdDict;
- (void)setAskXiaoWeiLatestRequestIdDict:(id)arg1;
- (unsigned long long)askXiaoWeiNextRequestId;
- (void)setAskXiaoWeiNextRequestId:(unsigned long long)arg1;
- (id)imageAiPCurrentVisitImageIdentifier;
- (void)setImageAiPCurrentVisitImageIdentifier:(id)arg1;
- (id)imageAiPReportContext;
- (void)setImageAiPReportContext:(id)arg1;
- (void).cxx_destruct;
@end
