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
    BOOL _m_canSelect; // +0x118
    BOOL _m_needEditImage; // +0x119
    BOOL _m_canEditImage; // +0x11a
    BOOL _m_videoMuted; // +0x11b
    BOOL _forcePortrait; // +0x11c
    int _source; // +0x120
    long long _m_longPressScanScene; // +0x128
    UIView * _originView; // +0x130
    id <FavFullScreenImageViewControllerDelegate> _m_delegate; // +0x138
    ScanQRCodeLogicParams * _logicParams; // +0x140
    MMImageActionSheet * _imageActionSheet; // +0x148
    MMScrollActionSheet * _scrollActionSheet; // +0x150
    id /* block */ _downloadCompleteBlock; // +0x158
    NSMutableSet * _markTranslateSet; // +0x160
}
+ (id)animationShowWithRecordData:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3;
+ (id)animationShowWithRecordData:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3 needEdit:(BOOL)arg4 canEdit:(BOOL)arg5;
+ (id)animationShowWithRecordData:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3 needEdit:(BOOL)arg4 canEdit:(BOOL)arg5 delegate:(id)arg6;
+ (id)animationShowWithRecordData:(id)arg1 originRect:(CGRect)arg2 index:(unsigned int)arg3 needEdit:(BOOL)arg4 canEdit:(BOOL)arg5 delegate:(id)arg6;
+ (id)animationShowWithRecordData:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3 fromViewController:(id)arg4 settingBlock:(id /* block */)arg5;
- (BOOL)useTransparentNavibar;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidPush:(BOOL)arg1;
- (void)viewWillPop:(BOOL)arg1;
- (void)dealloc;
- (void)onMemoryWarning;
- (void)adjustViewAndNavBarRect;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)clearStatus;
- (void)resetScrollView;
- (void)setRecordData:(id)arg1 originRect:(CGRect)arg2 index:(unsigned int)arg3;
- (void)reloadContainerImgInfo:(id)arg1 originRect:(CGRect)arg2 index:(unsigned int)arg3;
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
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragEnd;
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
- (void)onWillLongPress:(id)arg1 touchPoint:(CGPoint)arg2 onImage:(id)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)dismissMySelfAndShowContext:(id)arg1 dataItem:(id)arg2;
- (void)onForward2MsgRecordData:(id)arg1;
- (void)onForward2WCRecordData;
- (void)editImage;
- (void)onFavorites;
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
- (void)OnDownloadRecordMessageOK:(id)arg1 DataId:(id)arg2 bThumb:(BOOL)arg3;
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
- (id)logicParams;
- (void)setLogicParams:(id)arg1;
- (id)imageActionSheet;
- (void)setImageActionSheet:(id)arg1;
- (id)scrollActionSheet;
- (void)setScrollActionSheet:(id)arg1;
- (id /* block */)downloadCompleteBlock;
- (void)setDownloadCompleteBlock:(id /* block */)arg1;
- (void)setMarkTranslateSet:(id)arg1;
- (void).cxx_destruct;
@end
