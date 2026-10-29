@interface MMImgFullScreenViewController : MMUIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, MMImgFullScreenContainerDelegate, MMImgDataLogicDelegate, MMImgDownloadLogicDelegate>
{
    BOOL m_bNeedEditAtStart; // +0x70
    BOOL m_needResumeVideoWhenAppear; // +0x71
    BOOL _bEditMode; // +0x72
    BOOL _lockRotate; // +0x73
    BOOL _isAnimateShowing; // +0x74
    MMImgFullScreenParam * _param; // +0x78
    UIView * _maskView; // +0x80
    NSMutableDictionary * _imageViewDic; // +0x88
    NSMutableDictionary * _videoViewDic; // +0x90
    NSMutableDictionary * _expireViewDic; // +0x98
    MMImgFullScreenContainer * _pagingScrollView; // +0xa0
    unsigned long long _lastScreenshotNotifyTimestamp; // +0xa8
    MMImgDataItem * _lastItem; // +0xb0
    UIView * _snapShotImgView; // +0xb8
    MMImgPreviewData * _imgPreviewData; // +0xc0
    unsigned long long _transitioningStyle; // +0xc8
    id <MsgImgFullScreenTransitionComponent> _transitionComponent; // +0xd0
    id /* block */ _animateCompleteBlock; // +0xd8
    MMScrollActionSheet * _scrollActionSheet; // +0xe0
    QRCodeInMultiDisplayView * _qrCodeMultiView; // +0xe8
    MMImgFullScreenLogic_Forward * _forward; // +0xf0
    MMImgFullScreenLogic_Favorite * _favorite; // +0xf8
    MMImgFullScreenLogic_Search * _search; // +0x100
    MMImgFullScreenLogic_Device * _device; // +0x108
    MMImgFullScreenLogic_Save * _save; // +0x110
    MMImgFullScreenLogic_Edit * _edit; // +0x118
    MMImgFullScreenLogic_Floating * _floating; // +0x120
    MMImgFullScreenLogic_Locate * _locate; // +0x128
    MMImgFullScreenLogic_FastBrowse * _fastBrowse; // +0x130
    MMImgFullScreenLogic_Translate * _translate; // +0x138
    MMImgFullScreenLogic_OCR * _ocr; // +0x140
    MMImgFullScreenLogic_FileSource * _fileSource; // +0x148
    MMImgFullScreenLogic_OpenOther * _openOther; // +0x150
    MMImgFullScreenLogic_OpenWeApp * _openWeApp; // +0x158
    MMImgFullScreenLogic_QrCode * _qrCode; // +0x160
    MMImgFullScreenLogic_ShowOrigin * _showOrigin; // +0x168
    MMImgFullScreenLogic_SNS * _sns; // +0x170
    MMImgFullScreenLogic_AskXiaoWei * _askXiaoWei; // +0x178
    WCImageTranslateLogic * _imgTranslateLogic; // +0x180
    MMImgDownloadLogic * _downloadLogic; // +0x188
    id /* block */ _downloadVideoCompleteBlock; // +0x190
    MMImgDataLogic * _dataLogic; // +0x198
    MMImgLoaderLogic * _loaderLogic; // +0x1a0
    UIEdgeInsets _currentPageContentInset; // +0x1a8
}
- (id)contentViewForTransition;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)animateShowWithOriginRectInScreen:(CGRect)arg1;
- (void)animateHideWithOrientation:(long long)arg1 PreviewData:(id)arg2;
- (id)reporter;
- (void)initEditModeView;
- (void)initBackgroundView;
- (id)getTitleBackGroundView;
- (void)initBackBarButton;
- (void)initSelectCheckButton;
- (void)onSingleTapViewInEditMode;
- (void)pageDidChangedInEditMode;
- (void)onFullScreenItemDragBeginInEditMode;
- (void)onFullScreenItemDragEndInEditMode;
- (void)setTopBarHiddenAnimated:(BOOL)arg1;
- (void)changeSelectedButtonInEditMode;
- (id)getSelectCheckButton;
- (void)OnClickBackBarButton:(id)arg1;
- (void)OnSelectedButtonDone;
- (id)currentItem;
- (id)itemStatusDict;
- (unsigned int)statusForItem:(id)arg1;
- (void)setStatus:(unsigned int)arg1 forItem:(id)arg2;
- (void)initDownloadItem:(id)arg1;
- (void)startDownloadItem:(id)arg1 bHD:(BOOL)arg2 bSave:(BOOL)arg3;
- (void)startDownloadItem:(id)arg1 bHD:(BOOL)arg2 bSave:(BOOL)arg3 bSilent:(BOOL)arg4;
- (void)stopDownloadItem:(id)arg1;
- (void)silentImageDownloadTasks:(id)arg1;
- (void)silentDownloadToBackupDevice:(id)arg1;
- (unsigned long long)downloadStatusForItem:(id)arg1;
- (void)preloadHDImage:(id)arg1 complete:(id /* block */)arg2;
- (void)updateHDImagePreloadData;
- (BOOL)canPreloadHDImage:(id)arg1 availableMemory:(unsigned long long)arg2;
- (void)onDownloadImagePart:(id)arg1 PartLen:(unsigned int)arg2 TotalLen:(unsigned int)arg3;
- (void)onDownloadImageOk:(id)arg1;
- (void)onDownloadImageFail:(id)arg1;
- (void)onDownloadImageExpired:(id)arg1;
- (void)onICloudImageLoading:(id)arg1 progress:(float)arg2;
- (void)onICloudImageLoadingOK:(id)arg1;
- (void)onICloudImageLoadingFail:(id)arg1;
- (void)onSendImageProgress:(id)arg1 progress:(float)arg2;
- (void)onDownloadVideoPart:(id)arg1 PartLen:(unsigned int)arg2 TotalLen:(unsigned int)arg3;
- (void)onDownloadVideoOk:(id)arg1;
- (void)onDownloadVideoFail:(id)arg1;
- (void)onDownloadVideoExpired:(id)arg1;
- (id)playerViewWithItem:(id)arg1;
- (void)setToolViewAlpha:(double)arg1;
- (void)showActionSheetIfNeed:(int)arg1;
- (void)populateActionSheetLogicsWithRecentForward:(BOOL)arg1;
- (void)updateActionSheetFooterView;
- (void)setupScrollActionSheet;
- (id)genScrollActionSheetBodyFooterView;
- (id)genScrollActionSheetBodyFooterView2;
- (void)showActionSheetFromTranslateImg;
- (id)markTranslateSet;
- (void)markDisplayTranslateResult:(id)arg1;
- (void)unmarkDisplayTranslateResult:(id)arg1;
- (BOOL)isDisplayTranslateResult:(id)arg1;
- (void)cancelShowTranslateImg;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)reportHistoryMenuItemClickIfNeeded:(id)arg1;
- (long long)historyMenuClkBtnNameForItem:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)onTappedRowImgSource;
- (void)_onFinderRowViewDidClick;
- (void)onTappedRowInfo:(id)arg1;
- (void)onActionSheetQRCodeRowViewBanned;
- (void)dismissQRCodeMultiView;
- (void)onCancelBtnClicked:(id)arg1;
- (void)onDotViewClicked:(id)arg1;
- (void)onSelectMarkDotInfo:(id)arg1;
- (id)getTranslateImgIdentifier:(id)arg1;
- (void)onShowTranslateImage:(id)arg1;
- (void)onCancelTranslateImage:(id)arg1;
- (void)onPreDetectWordSuccess:(id)arg1;
- (void)reloadCurrentActionSheetForLogic:(id)arg1;
- (void)reloadCurrentActionSheetForLogic:(id)arg1 animated:(BOOL)arg2;
- (void)getTranslateImgInfo:(id)arg1 fileId:(id *)arg2 aesKey:(id *)arg3;
- (void)onSingleTap;
- (void)onLongPressBegin;
- (void)onLongPress;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDragCancel;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)onFullScreenItemClose:(int)arg1;
- (void)onClickAttachButton;
- (void)onClickWeAppButton;
- (void)enterWeAppByScreenshotContextInfoWithScene:(unsigned long long)arg1;
- (void)onClickOriginalArticleButton;
- (void)onClickMPScreenshotSourceButton:(unsigned int)arg1;
- (void)onClickShareButton:(id)arg1;
- (void)onClickDownloadButton:(id)arg1;
- (void)onClickLocateButton:(id)arg1;
- (void)onClickImgFastBrowseButton:(id)arg1;
- (void)onClickAskXiaoWeiButton:(id)arg1;
- (void)onClickMoreButton:(id)arg1;
- (id)initWithParam:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)onBackButtonClicked:(id)arg1;
- (void)onMoreButtonClicked:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)recalculatePageContentInset;
- (void)applyPageContentInsetToAllPages;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)onVideoPlayUIScreenshot:(id)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (BOOL)hidesStatusBar;
- (BOOL)shouldHideNavigationBar;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)shouldWrapViewWithSafeArea;
- (void)registerYReportSdk;
- (void)initData;
- (void)updateData;
- (void)ensurePageOffsetWithItem:(id)arg1;
- (void)ensurePageOffsetWithPageCount:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (id)imageViewForItem:(id)arg1;
- (id)currentImageView;
- (id)videoViewForItem:(id)arg1;
- (id)currentVideoView;
- (void)onFinishShowTransition;
- (void)updateTransitionComponent;
- (void)asyncDetectImageIfNeeded;
- (void)asyncDetectImageIntentIfNeeded;
- (void)asyncDetectImageIfNeededWithPreScan:(BOOL)arg1;
- (void)closeVC:(int)arg1;
- (void)setLockRotate:(BOOL)arg1;
- (unsigned long long)scene;
- (id)delegate;
- (id)maskView;
- (id)imageViewDic;
- (id)videoViewDic;
- (id)expireViewDic;
- (id)pagingScrollView;
- (id)forward;
- (id)sns;
- (id)favorite;
- (id)search;
- (id)save;
- (id)edit;
- (id)floating;
- (id)locate;
- (id)fastBrowse;
- (id)fileSource;
- (id)openOther;
- (id)openWeApp;
- (id)device;
- (id)showOrigin;
- (id)askXiaoWei;
- (id)translate;
- (id)ocr;
- (id)qrCode;
- (id)imgTranslateLogic;
- (id)transitionComponent;
- (id)loaderLogic;
- (id)viewAtPage:(unsigned int)arg1 frame:(CGRect)arg2;
- (void)onChangePage;
- (void)clearImageViewOnChangePage;
- (void)clearVideoViewOnChangePage;
- (void)clearExpireViewOnChangePage;
- (void)multiImageScrollViewWillBeginDragging;
- (void)multiImageScrollViewDidScroll;
- (void)multiImageScrollViewDidEndScrolling;
- (void)onItemBeRemoved:(id)arg1 atIndex:(unsigned int)arg2 isRevoked:(BOOL)arg3;
- (id)param;
- (void)setParam:(id)arg1;
- (void)setMaskView:(id)arg1;
- (void)setImageViewDic:(id)arg1;
- (void)setVideoViewDic:(id)arg1;
- (void)setExpireViewDic:(id)arg1;
- (void)setPagingScrollView:(id)arg1;
- (unsigned long long)lastScreenshotNotifyTimestamp;
- (void)setLastScreenshotNotifyTimestamp:(unsigned long long)arg1;
- (UIEdgeInsets)currentPageContentInset;
- (void)setCurrentPageContentInset:(UIEdgeInsets)arg1;
- (BOOL)bEditMode;
- (void)setBEditMode:(BOOL)arg1;
- (BOOL)lockRotate;
- (id)lastItem;
- (void)setLastItem:(id)arg1;
- (id)snapShotImgView;
- (void)setSnapShotImgView:(id)arg1;
- (id)imgPreviewData;
- (void)setImgPreviewData:(id)arg1;
- (unsigned long long)transitioningStyle;
- (void)setTransitioningStyle:(unsigned long long)arg1;
- (void)setTransitionComponent:(id)arg1;
- (BOOL)isAnimateShowing;
- (void)setIsAnimateShowing:(BOOL)arg1;
- (id /* block */)animateCompleteBlock;
- (void)setAnimateCompleteBlock:(id /* block */)arg1;
- (id)scrollActionSheet;
- (void)setScrollActionSheet:(id)arg1;
- (id)qrCodeMultiView;
- (void)setQrCodeMultiView:(id)arg1;
- (void)setForward:(id)arg1;
- (void)setFavorite:(id)arg1;
- (void)setSearch:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setSave:(id)arg1;
- (void)setEdit:(id)arg1;
- (void)setFloating:(id)arg1;
- (void)setLocate:(id)arg1;
- (void)setFastBrowse:(id)arg1;
- (void)setTranslate:(id)arg1;
- (void)setOcr:(id)arg1;
- (void)setFileSource:(id)arg1;
- (void)setOpenOther:(id)arg1;
- (void)setOpenWeApp:(id)arg1;
- (void)setQrCode:(id)arg1;
- (void)setShowOrigin:(id)arg1;
- (void)setSns:(id)arg1;
- (void)setAskXiaoWei:(id)arg1;
- (void)setImgTranslateLogic:(id)arg1;
- (id)downloadLogic;
- (void)setDownloadLogic:(id)arg1;
- (id /* block */)downloadVideoCompleteBlock;
- (void)setDownloadVideoCompleteBlock:(id /* block */)arg1;
- (id)dataLogic;
- (void)setDataLogic:(id)arg1;
- (void)setLoaderLogic:(id)arg1;
- (void).cxx_destruct;
@end
