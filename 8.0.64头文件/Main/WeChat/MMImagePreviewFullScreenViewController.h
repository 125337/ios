@interface MMImagePreviewFullScreenViewController : MMUIViewController <ImageScrollViewDelegate, WCImageTranslateDelegate, MMScrollActionSheetDelegate, OCRTransHalfScreenViewControllerDelegate>
{
    unsigned int _mode; // +0x70
    ImageScrollView * _imageScrollView; // +0x78
    ImageBrowseButton * _closeBtn; // +0x80
    ImageBrowseButton * _downloadBtn; // +0x88
    ImageBrowseButton * _moreBtn; // +0x90
    UIImage * _originImage; // +0x98
    UIImage * _translatedImage; // +0xa0
    WCImageTranslateLogic * _imgTranslateLogic; // +0xa8
    OCRTransHalfScreenViewController * _ocrHalfScreenViewCtrl; // +0xb0
}
- (id)initWithImage:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)hidesStatusBar;
- (id)imageScrollView;
- (id)closeBtn;
- (id)downloadBtn;
- (id)moreBtn;
- (id)imgTranslateLogic;
- (void)onCloseBtnClick;
- (void)onDownloadBtnClick;
- (void)onMoreBtnClick;
- (void)handleTranslateImage;
- (void)handleImageOCR;
- (void)setToolViewHidden:(BOOL)arg1;
- (void)saveImage;
- (void)ImageScrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (id)getTranslateImgIdentifier:(id)arg1;
- (void)onFinishAnimateTranslateImage:(id)arg1;
- (void)onShowTranslateImage:(id)arg1;
- (void)onCancelTranslateImage:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)onClickSavedPhotosAlbumButton;
- (void)onClickCancelTranslateButton;
- (void)onClickChangeTranslateLanguageButton;
- (void)onClickTransalteFeedbackButton;
- (void)onImageDetectUploadFinish:(unsigned int)arg1 context:(id)arg2 detectMediaInfo:(id)arg3;
- (void)onImageDetectOCRFinish:(unsigned int)arg1 jsonStr:(id)arg2 reqKey:(id)arg3 ocrResultType:(long long)arg4;
- (void)showOCRHalfScreenViewCtrl;
- (void)handleOCRCustomDismiss;
- (unsigned int)mode;
- (void)setMode:(unsigned int)arg1;
- (void)setImageScrollView:(id)arg1;
- (void)setCloseBtn:(id)arg1;
- (void)setDownloadBtn:(id)arg1;
- (void)setMoreBtn:(id)arg1;
- (id)originImage;
- (void)setOriginImage:(id)arg1;
- (id)translatedImage;
- (void)setTranslatedImage:(id)arg1;
- (void)setImgTranslateLogic:(id)arg1;
- (id)ocrHalfScreenViewCtrl;
- (void)setOcrHalfScreenViewCtrl:(id)arg1;
- (void).cxx_destruct;
@end
