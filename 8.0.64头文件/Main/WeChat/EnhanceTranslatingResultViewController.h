@interface EnhanceTranslatingResultViewController : MMUIViewController <IOCRTransMgrExt, UIScrollViewDelegate, MMScrollActionSheetDelegate, WCActionSheetDelegate, WCImageTranslateDelegate>
{
    unsigned int _sessionId; // +0x70
    int _scene; // +0x74
    UIImage * _originImage; // +0x78
    UIImage * _translatedImage; // +0x80
    double _closeBtnCenterY; // +0x88
    OCRTransReport * _report; // +0x90
    EnhanceTranslatingImageCdnObject * _cdnObject; // +0x98
    id <EnhanceTranslatingResultViewControllerDelegate> _delegate; // +0xa0
    UIScrollView * _scrollView; // +0xa8
    UIImageView * _imageView; // +0xb0
    UIButton * _closeBtn; // +0xb8
    UIButton * _moreBtn; // +0xc0
    UIButton * _translateBtn; // +0xc8
    UIButton * _saveBtn; // +0xd0
    UILabel * _translateLabel; // +0xd8
    UILabel * _saveLabel; // +0xe0
    WCImageTranslateLogic * _imgTranslateLogic; // +0xe8
}
- (void)doFeedBackWithType:(unsigned long long)arg1;
- (void)cdnUploadFeedbackData:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (BOOL)shouldInteractiveDismiss;
- (void)updateBeforeTransitionAnimation;
- (void)updateAfterTransitionAnimation;
- (void)initSubviews;
- (void)setOriginImage:(id)arg1;
- (void)setTranslatedImage:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)translateButtonClicked:(id)arg1;
- (void)saveButtonClicked:(id)arg1;
- (void)clsoeButtonClicked:(id)arg1;
- (void)showActionSheet;
- (void)moreButtonClicked:(id)arg1;
- (void)handleImageLongPressGesture:(id)arg1;
- (void)reTranslateImage;
- (void)onCdnUploadImageDataFinish:(unsigned int)arg1 isSuccess:(BOOL)arg2;
- (void)onSendTransImageData:(unsigned int)arg1 ret:(id)arg2 pbCGIWrap:(id)arg3;
- (void)onGotTranslatingImage:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (id)genMenuItemArray;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)reportTranslateMenuClick:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)getTranslateImgIdentifier:(id)arg1;
- (void)onShowTranslateImage:(id)arg1;
- (id)originImage;
- (id)translatedImage;
- (double)closeBtnCenterY;
- (void)setCloseBtnCenterY:(double)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)report;
- (void)setReport:(id)arg1;
- (id)cdnObject;
- (void)setCdnObject:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (id)moreBtn;
- (void)setMoreBtn:(id)arg1;
- (id)translateBtn;
- (void)setTranslateBtn:(id)arg1;
- (id)saveBtn;
- (void)setSaveBtn:(id)arg1;
- (id)translateLabel;
- (void)setTranslateLabel:(id)arg1;
- (id)saveLabel;
- (void)setSaveLabel:(id)arg1;
- (id)imgTranslateLogic;
- (void)setImgTranslateLogic:(id)arg1;
- (void).cxx_destruct;
@end
