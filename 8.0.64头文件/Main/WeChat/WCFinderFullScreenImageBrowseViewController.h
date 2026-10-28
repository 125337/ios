@interface WCFinderFullScreenImageBrowseViewController : MMUIViewController <UIScrollViewDelegate, FullScreenGestureDelegate>
{
    UIImage * _originImage; // +0x70
    NSString * _imageURL; // +0x78
    UIImageView * _imageView; // +0x80
    UIScrollView * _scrollView; // +0x88
    id /* block */ _dismissBlock; // +0x90
    WXFullScreenGestureRecognizer * _fullScreenGestrure; // +0x98
    WCFinderAnimationLoadingView * _loadingView; // +0xa0
    WCFinderFullScreenImageBrowseTransition * _transition; // +0xa8
    WCFinderFullScreenImgBrowserVCInitParams * _params; // +0xb0
    MMScrollActionSheet * _scrollActionSheet; // +0xb8
    WCImageTranslateLogic * _imgTranslateLogic; // +0xc0
    OCRTransHalfScreenViewController * _ocrHalfScreenViewCtrl; // +0xc8
}
+ (id)genActionSheetItemWithType:(unsigned long long)arg1 iconImage:(id)arg2 title:(id)arg3;
+ (void)showInViewController:(id)arg1 image:(id)arg2 optionalParams:(id)arg3 dismissBlock:(id /* block */)arg4;
+ (void)showInViewController:(id)arg1 imageURL:(id)arg2 optionalParams:(id)arg3 dismissBlock:(id /* block */)arg4;
+ (void)showInViewController:(id)arg1 image:(id)arg2 imageURL:(id)arg3 optionalParams:(id)arg4 dismissBlock:(id /* block */)arg5;
- (void)showActionSheet;
- (void)reportActionSheetItemWithItemID:(id)arg1 eventId:(id)arg2;
- (id)genScrollActionSheetArray;
- (void)handleShareImage:(id)arg1 toContact:(id)arg2;
- (void)handleSaveImageToAlbumWithImage:(id)arg1;
- (void)handleFavImage:(id)arg1;
- (void)asyncGetImageSavePath:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSearchImage:(id)arg1;
- (void)handleTranslateImage:(id)arg1;
- (void)handleOCRImage:(id)arg1;
- (void)showOCRHalfScreenViewCtrl;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (id)getTranslateImgIdentifier:(id)arg1;
- (void)onShowTranslateImage:(id)arg1;
- (void)onReTranslateImage;
- (id)getOriginImage;
- (void)onImageDetectUploadFinish:(unsigned int)arg1 context:(id)arg2 detectMediaInfo:(id)arg3;
- (void)onImageDetectOCRFinish:(unsigned int)arg1 jsonStr:(id)arg2 reqKey:(id)arg3 ocrResultType:(long long)arg4;
- (id)initWithStartFrame:(CGRect)arg1;
- (void)viewDidLoad;
- (void)setupDataReportIfNeeded;
- (void)setUpUI;
- (void)setOriginImage:(id)arg1;
- (void)_setImageViewImage:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (id)loadingView;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)onFullScreenSingleTap;
- (void)onFullScreenClose;
- (void)onFullScreenDragToRect:(CGRect)arg1;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (id)originImage;
- (id)imageURL;
- (void)setImageURL:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg1;
- (id)fullScreenGestrure;
- (void)setFullScreenGestrure:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (id)transition;
- (void)setTransition:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)scrollActionSheet;
- (void)setScrollActionSheet:(id)arg1;
- (id)imgTranslateLogic;
- (void)setImgTranslateLogic:(id)arg1;
- (id)ocrHalfScreenViewCtrl;
- (void)setOcrHalfScreenViewCtrl:(id)arg1;
- (void).cxx_destruct;
@end
