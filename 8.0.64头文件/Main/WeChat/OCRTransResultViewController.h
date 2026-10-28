@interface OCRTransResultViewController : MMUIViewController <IOCRTransMgrExt, UIScrollViewDelegate, MMTipsViewControllerDelegate, MMScrollActionSheetDelegate, WCImageTranslateDelegate>
{
    UIImageView * _souceImageView; // +0x70
    UIView * _resultView; // +0x78
    MMLoadingView * _loadingView; // +0x80
    BOOL _showOrigin; // +0x88
    NSMutableDictionary * _fontDic; // +0x90
    UIScrollView * _scrollView; // +0x98
    UIView * _contentView; // +0xa0
    UIColor * _bgColor; // +0xa8
    UIColor * _textColor; // +0xb0
    CGPoint _offsetPoint; // +0xb8
    CGRect _newImageRect; // +0xc8
    char * _rgba; // +0xe8
    UILabel * _tipLabel; // +0xf0
    UIButton * _closeBtn; // +0xf8
    UIButton * _showOriginBtn; // +0x100
    UIButton * _saveBtn; // +0x108
    UILabel * _translateLabel; // +0x110
    UILabel * _saveLabel; // +0x118
    CGRect _imageRect; // +0x120
    BOOL _viewIsAppeared; // +0x140
    UIImage * _showOriginNormalImage; // +0x148
    UIImage * _showOriginSelectedImage; // +0x150
    UIImage * _showOriginNormalImageHL; // +0x158
    UIImage * _showOriginSelectedImageHL; // +0x160
    unsigned long long _ZHResultStrCount; // +0x168
    unsigned long long _allResultStrCount; // +0x170
    unsigned int _currSessionId; // +0x178
    UIImage * _image; // +0x180
    UIImage * _translatedImage; // +0x188
    NSArray * _translations; // +0x190
    double _angle; // +0x198
    OCRTransReport * _transReport; // +0x1a0
    double _closeBtnCenterY; // +0x1a8
    id /* block */ _translateFinishBlock; // +0x1b0
    UIView * _animationView; // +0x1b8
    UIView * _topLine; // +0x1c0
    UIView * _rightLine; // +0x1c8
    UIView * _bottomLine; // +0x1d0
    UIView * _leftLine; // +0x1d8
    UIImageView * _scanLineImgView; // +0x1e0
    UIButton * _moreBtn; // +0x1e8
    WCImageTranslateLogic * _imgTranslateLogic; // +0x1f0
    CGRect _imageCropRect; // +0x1f8
}
- (id)init;
- (id)navigationBarBackgroundColor;
- (BOOL)shouldNavigationBarAccessibilityHidden;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)dealloc;
- (void)setImage:(id)arg1;
- (void)animate;
- (void)adjustViewAndTryToAnimate;
- (void)setTranslations:(id)arg1 andAngle:(double)arg2;
- (void)updateResult;
- (void)setupShowOriginButtonImage;
- (CGSize)sizeForText:(id)arg1 withSize:(CGSize)arg2 font:(id)arg3 isMerge:(BOOL)arg4;
- (void)expandForInfo:(id)arg1 withFont:(id)arg2;
- (void)expandToRightForInfo:(id)arg1 font:(id)arg2;
- (void)expandToLeftForInfo:(id)arg1 font:(id)arg2;
- (void)updateAngle;
- (void)switchText;
- (void)OnTakeOCRImage:(id)arg1;
- (void)onCdnUploadImageDataFinish:(unsigned int)arg1 isSuccess:(BOOL)arg2;
- (void)getBitmap;
- (void)onSendTransImageData:(unsigned int)arg1 ret:(id)arg2 pbCGIWrap:(id)arg3;
- (void)onFinishWithTranslateImage:(id)arg1 ret:(id)arg2 pbCGIWrap:(id)arg3;
- (void)setTranslateImage:(id)arg1 withAngle:(float)arg2;
- (void)showDialogWithWording:(id)arg1;
- (void)close;
- (void)moreButtonClicked:(id)arg1;
- (void)handleImageLongPressGesture:(id)arg1;
- (void)showActionSheet;
- (void)reTranslateImage;
- (void)setBackgroundAndTextColorForLabel:(id)arg1 withInfo:(id)arg2;
- (void)saveToAlbum:(id)arg1;
- (id)exportImage;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (id)genMenuItemArray;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (id)getTranslateImgIdentifier:(id)arg1;
- (void)onShowTranslateImage:(id)arg1;
- (id)image;
- (id)translatedImage;
- (id)translations;
- (void)setTranslations:(id)arg1;
- (double)angle;
- (void)setAngle:(double)arg1;
- (CGRect)imageCropRect;
- (void)setImageCropRect:(CGRect)arg1;
- (id)transReport;
- (void)setTransReport:(id)arg1;
- (unsigned int)currSessionId;
- (void)setCurrSessionId:(unsigned int)arg1;
- (double)closeBtnCenterY;
- (void)setCloseBtnCenterY:(double)arg1;
- (id /* block */)translateFinishBlock;
- (void)setTranslateFinishBlock:(id /* block */)arg1;
- (id)animationView;
- (void)setAnimationView:(id)arg1;
- (id)topLine;
- (void)setTopLine:(id)arg1;
- (id)rightLine;
- (void)setRightLine:(id)arg1;
- (id)bottomLine;
- (void)setBottomLine:(id)arg1;
- (id)leftLine;
- (void)setLeftLine:(id)arg1;
- (id)scanLineImgView;
- (void)setScanLineImgView:(id)arg1;
- (id)moreBtn;
- (void)setMoreBtn:(id)arg1;
- (id)imgTranslateLogic;
- (void)setImgTranslateLogic:(id)arg1;
- (void).cxx_destruct;
@end
