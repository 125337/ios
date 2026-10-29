@interface PhotoViewController : WCDragToCloseViewController <MMImageActionSheetDelegate, MMScrollActionSheetDelegate, MultiImageScrollViewDelegate, IHttpCacheExt, WCActionSheetDelegate>
{
    MultiImageScrollView * pagingScrollView; // +0x70
    NSMutableArray * m_arrayImageUrl; // +0x78
    BOOL m_bAnimating; // +0x80
    double _oldNavigationBarAlpha; // +0x88
    NSString * m_appID; // +0x90
    unsigned long long m_appScene; // +0x98
    MMUILabel * _title; // +0xa0
    NSString * m_referer; // +0xa8
    NSMutableArray * m_arrayImageCache; // +0xb0
    BOOL m_isLiteAppCache; // +0xb8
    BOOL m_isPresented; // +0xb9
    BOOL _isForbidForward; // +0xba
    BOOL _enableImageSearch; // +0xbb
    BOOL _isFromWebview; // +0xbc
    BOOL _isFromWeApp; // +0xbd
    BOOL _isFromLiteApp; // +0xbe
    BOOL _isFromEcs; // +0xbf
    BOOL _showIndicator; // +0xc0
    BOOL _disableAutoResumeNavigationBar; // +0xc1
    BOOL _isFromSafariOr3rdApp; // +0xc2
    BOOL _needDistinguishGif; // +0xc3
    BOOL _needSaveOrigin; // +0xc4
    BOOL _isBanMenu; // +0xc5
    BOOL _shouldTranslateImmediately; // +0xc6
    BOOL _isFromWeAppInnerWebView; // +0xc7
    unsigned int _webViewA8KeyScene; // +0xc8
    unsigned int _adScene; // +0xcc
    int _presetIndex; // +0xd0
    NSString * _relativeUrl; // +0xd8
    id <PhotoViewControllerDelegate> _delegate; // +0xe0
    NSString * _firstUrlString; // +0xe8
    NSString * _webViewUrlString; // +0xf0
    NSString * _fromBizUser; // +0xf8
    NSString * _publisherUserName; // +0x100
    NSString * _wxaPathWithQuery; // +0x108
    NSString * _wxaSessionId; // +0x110
    unsigned long long _weappOrientationMask; // +0x118
    long long _dismissContentMode; // +0x120
    NSSet * _setScanQRCodeResultType; // +0x128
    CMessageWrap * _originMsgWrap; // +0x130
    unsigned long long _adId; // +0x138
    NSMutableDictionary * _presetImages; // +0x140
    NSMutableDictionary * _translatedImages; // +0x148
    MMImageActionSheet * _imageActionSheet; // +0x150
    CGRect _tappedPhotoInWebViewPosition; // +0x158
}
+ (id)genKeyForUrl:(id)arg1;
+ (id)imageDataFromCacheWithUrl:(id)arg1;
+ (id)imageFromLocalCacheWithPath:(id)arg1;
+ (id)imageFromCacheWithUrl:(id)arg1;
- (void)showStatusBar;
- (void)hideStatusBar;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)handleViewWillBePoped:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillPush:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)mm_layoutPagingScrollViewToViewBounds;
- (BOOL)hidesStatusBar;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillPop:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)initNavigationBar;
- (void)initScrollView;
- (BOOL)shouldInteractivePop;
- (void)viewWillBeInteractivePoped;
- (id)init;
- (void)viewDidLoad;
- (void)onMainWindowFrameChanged;
- (void)enterForeground;
- (void)dealloc;
- (BOOL)useCustomNavibar;
- (id)presetImages;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)changePresentedState:(BOOL)arg1;
- (id)imageDataAtPage:(unsigned int)arg1;
- (id)imageWithData:(id)arg1;
- (id)imageAtPage:(unsigned int)arg1;
- (id)viewAtPage:(unsigned int)arg1 frame:(CGRect)arg2;
- (void)setPage:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)updatePhotoatIndex:(unsigned int)arg1;
- (void)addPresetImageForCurrentIndex:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)getPhotoatIndex:(unsigned int)arg1;
- (unsigned long long)getIndexArrayImageUrl:(id)arg1;
- (void)initImageViewerWithUrls:(id)arg1 current:(id)arg2;
- (void)initImageViewerWithUrls:(id)arg1 current:(id)arg2 appID:(id)arg3 appScene:(unsigned long long)arg4 referer:(id)arg5;
- (void)initLocalCaches:(id)arg1;
- (int)currentIndex;
- (int)totalCount;
- (void)updateIndex:(unsigned int)arg1;
- (id)tryGetResource:(id)arg1;
- (id)tryGetResource:(id)arg1 localOnly:(BOOL)arg2;
- (id)tryGetWebKitCachedImageDataForUrl:(id)arg1;
- (unsigned long long)getIndexArrayImageUrlCacheKey:(id)arg1;
- (void)OnHttpGetFinish:(id)arg1 response:(id)arg2 ErrNo:(int)arg3 isWebp:(BOOL)arg4;
- (void)onChangePage;
- (void)onSingleTap:(id)arg1;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenItemDragCancel;
- (void)OnLongPressBegin:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (void)processWatermarkImageInBackgroundWithCompletion:(id /* block */)arg1;
- (void)showFullScreenAnimated:(BOOL)arg1;
- (void)OnMMUIHookViewFrameChanged:(id)arg1;
- (void)showFullScreen;
- (void)onAnimationDidStop;
- (void)onSavedPhotosAlbum;
- (BOOL)canOperateImage;
- (BOOL)canAddImageToAlbum;
- (BOOL)canAddImageToFavorite;
- (BOOL)canAddImageToForward;
- (BOOL)canAddImageToSearch;
- (void)onOperate;
- (void)onQRCodeScansWillFinished;
- (void)forwardMessage;
- (void)addToFavorites;
- (id)getWatermarkImage:(id)arg1 data:(id)arg2;
- (BOOL)shouldAddWatermark;
- (void)onRightButtonTouchDown:(id)arg1;
- (void)PreScanQRCode;
- (void)reportWebviewImageActionWithItemType:(unsigned int)arg1;
- (void)animateTransition:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setIsFromWebview:(BOOL)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)translateImageImmediately;
- (id)genSearchEntity;
- (void)tryReportSimilarImgOperation:(unsigned long long)arg1;
- (void)startImageSearch;
- (void)startCircleToSearch:(unsigned long long)arg1;
- (void)startCircleToSearch:(unsigned long long)arg1 andEntityBlock:(id /* block */)arg2;
- (unsigned long long)circleToSearchScene;
- (id)thirdExtInfoForSearch;
- (id)clickReportInfoFor33399;
- (void)multiImageScrollViewDidEndDecelerating;
- (unsigned int)orcEnterScene;
- (unsigned int)ocrSvrScene;
- (void)imageActionSheet:(id)arg1 itemDidAppear:(id)arg2;
- (void)imageActionSheet:(id)arg1 itemWillClicked:(id)arg2;
- (void)imageActionSheet:(id)arg1 itemDidClicked:(id)arg2;
- (BOOL)imageActionSheet:(id)arg1 itemDidCustomEvent:(id)arg2;
- (void)imageActionSheetDidCancel:(id)arg1;
- (id)translateImageIdentifier;
- (void)onShowTranslateImage:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (id)translatedImages;
- (void)showActionSheetFromTranslateImg;
- (void)displayOriginImage;
- (void)onClickSavedPhotosAlbumButton;
- (void)onClickCancelTranslateButton;
- (void)onClickChangeTranslateLanguageButton;
- (void)onClickTransalteFeedbackButton;
- (void)reportTranslateMenuClick:(id)arg1;
- (id)appId;
- (id)referer;
- (BOOL)isForbidForward;
- (void)setIsForbidForward:(BOOL)arg1;
- (BOOL)enableImageSearch;
- (void)setEnableImageSearch:(BOOL)arg1;
- (BOOL)isFromWebview;
- (BOOL)isFromWeApp;
- (void)setIsFromWeApp:(BOOL)arg1;
- (BOOL)isFromLiteApp;
- (void)setIsFromLiteApp:(BOOL)arg1;
- (BOOL)isFromEcs;
- (void)setIsFromEcs:(BOOL)arg1;
- (BOOL)showIndicator;
- (void)setShowIndicator:(BOOL)arg1;
- (BOOL)disableAutoResumeNavigationBar;
- (void)setDisableAutoResumeNavigationBar:(BOOL)arg1;
- (BOOL)isFromSafariOr3rdApp;
- (void)setIsFromSafariOr3rdApp:(BOOL)arg1;
- (BOOL)needDistinguishGif;
- (void)setNeedDistinguishGif:(BOOL)arg1;
- (BOOL)needSaveOrigin;
- (void)setNeedSaveOrigin:(BOOL)arg1;
- (BOOL)isBanMenu;
- (void)setIsBanMenu:(BOOL)arg1;
- (BOOL)shouldTranslateImmediately;
- (void)setShouldTranslateImmediately:(BOOL)arg1;
- (id)relativeUrl;
- (void)setRelativeUrl:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)firstUrlString;
- (void)setFirstUrlString:(id)arg1;
- (id)webViewUrlString;
- (void)setWebViewUrlString:(id)arg1;
- (unsigned int)webViewA8KeyScene;
- (void)setWebViewA8KeyScene:(unsigned int)arg1;
- (id)fromBizUser;
- (void)setFromBizUser:(id)arg1;
- (id)publisherUserName;
- (void)setPublisherUserName:(id)arg1;
- (CGRect)tappedPhotoInWebViewPosition;
- (void)setTappedPhotoInWebViewPosition:(CGRect)arg1;
- (id)wxaPathWithQuery;
- (void)setWxaPathWithQuery:(id)arg1;
- (id)wxaSessionId;
- (void)setWxaSessionId:(id)arg1;
- (BOOL)isFromWeAppInnerWebView;
- (void)setIsFromWeAppInnerWebView:(BOOL)arg1;
- (unsigned long long)weappOrientationMask;
- (void)setWeappOrientationMask:(unsigned long long)arg1;
- (long long)dismissContentMode;
- (void)setDismissContentMode:(long long)arg1;
- (id)setScanQRCodeResultType;
- (void)setSetScanQRCodeResultType:(id)arg1;
- (id)originMsgWrap;
- (void)setOriginMsgWrap:(id)arg1;
- (unsigned int)adScene;
- (void)setAdScene:(unsigned int)arg1;
- (unsigned long long)adId;
- (void)setAdId:(unsigned long long)arg1;
- (void)setPresetImages:(id)arg1;
- (int)presetIndex;
- (void)setPresetIndex:(int)arg1;
- (void)setTranslatedImages:(id)arg1;
- (id)imageActionSheet;
- (void)setImageActionSheet:(id)arg1;
- (void).cxx_destruct;
@end
