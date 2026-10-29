@interface OCRTransHalfScreenViewController : MMUIHalfScreenViewController <ZoomingScrollViewDelegate, UIGestureRecognizerDelegate, IMMImageDetectOCRServiceExt, WSWebViewPluginableProtocol>
{
    WSTemplateLogicController * m_logicController; // +0x70
    OCRTransJSHandler * m_jsHandler; // +0x78
    BOOL _hasAddObservers; // +0x80
    BOOL _isBeDismissed; // +0x81
    BOOL _bInNodifyViewTopChanging; // +0x82
    unsigned int _notifyViewTopChangeCount; // +0x84
    BOOL _shouldShowScrollView; // +0x88
    unsigned int _svrScene; // +0x8c
    unsigned int _reportZoomType; // +0x90
    WSWebViewPluginScheduler * pluginScheduler; // +0x98
    UIImage * _sourceImage; // +0xa0
    NSString * _senderUserName; // +0xa8
    double _safeAreaInsetBottom; // +0xb0
    unsigned long long _contextSessionID; // +0xb8
    OCRTransZoomableScrollView * _scrollView; // +0xc0
    UIImageView * _imageView; // +0xc8
    MMUIButton * _crossCloseBtn; // +0xd0
    NSString * _titleBeforeLabelShow; // +0xd8
    UILabel * _titleLabel; // +0xe0
    UIView * _dividingView; // +0xe8
    MMUIButton * _zoomButton; // +0xf0
    NSString * _reqKey; // +0xf8
    long long _ocrResultType; // +0x100
    OCRTransPanGestureAnimationElement * _animationElement; // +0x108
    CGRect _imageViewMaximizedFrame; // +0x110
    CGRect _imageViewMinimizedFrame; // +0x130
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)shouldHideNavigationBar;
- (void)layoutTopViewSubviews;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBePresented:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (id)pathForTestTemplate;
- (void)startImageUploadAndDetect:(id)arg1;
- (void)cancelImageUploadAndDetect;
- (void)initView;
- (void)handlePanGesture:(id)arg1;
- (void)resumeBeforePanGesture:(double)arg1;
- (void)disableWebViewLongPressGesture;
- (BOOL)hidesStatusBar;
- (void)handleTopViewTapGesture:(id)arg1;
- (void)onCrossCloseBtnClicked;
- (void)onSwipClose;
- (void)setHalfScreenTitle:(id)arg1;
- (void)updateZoomButton;
- (void)doImageOCRZoomTypeReport;
- (void)onZoomButtonClicked;
- (void)onZoomingScrollViewDoubleTap;
- (void)onZoomingScrollViewZoomChanged;
- (void)setupAnimateTransitionBlocks;
- (void)notifyContentViewTopChangeEventStartY:(double)arg1 endY:(double)arg2 timeOnce:(double)arg3 repeatCount:(unsigned int)arg4;
- (BOOL)needCloseOnOrientationChanged;
- (void)setScrollViewAndImageViewMaximizedFrame;
- (void)setScrollViewAndImageViewMinimizedFrame;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)onLongPressGesture:(id)arg1;
- (void)onImageDetectUploadFinish:(unsigned int)arg1 context:(id)arg2 detectMediaInfo:(id)arg3;
- (void)onImageDetectOCRFinish:(id)arg1 resultType:(unsigned int)arg2 jsonStr:(id)arg3 reqKey:(id)arg4 ocrResultType:(long long)arg5;
- (id)getCurViewController;
- (id)getLocalJSLogic;
- (unsigned long long)localJSBizType;
- (void)setHalfScreenHeight:(double)arg1;
- (id)pluginScheduler;
- (void)setPluginScheduler:(id)arg1;
- (id)sourceImage;
- (void)setSourceImage:(id)arg1;
- (id)senderUserName;
- (void)setSenderUserName:(id)arg1;
- (double)safeAreaInsetBottom;
- (void)setSafeAreaInsetBottom:(double)arg1;
- (BOOL)shouldShowScrollView;
- (void)setShouldShowScrollView:(BOOL)arg1;
- (unsigned int)svrScene;
- (void)setSvrScene:(unsigned int)arg1;
- (unsigned long long)contextSessionID;
- (void)setContextSessionID:(unsigned long long)arg1;
- (CGRect)imageViewMaximizedFrame;
- (void)setImageViewMaximizedFrame:(CGRect)arg1;
- (CGRect)imageViewMinimizedFrame;
- (void)setImageViewMinimizedFrame:(CGRect)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)crossCloseBtn;
- (void)setCrossCloseBtn:(id)arg1;
- (id)titleBeforeLabelShow;
- (void)setTitleBeforeLabelShow:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)dividingView;
- (void)setDividingView:(id)arg1;
- (id)zoomButton;
- (void)setZoomButton:(id)arg1;
- (id)reqKey;
- (void)setReqKey:(id)arg1;
- (long long)ocrResultType;
- (void)setOcrResultType:(long long)arg1;
- (unsigned int)reportZoomType;
- (void)setReportZoomType:(unsigned int)arg1;
- (id)animationElement;
- (void)setAnimationElement:(id)arg1;
- (void).cxx_destruct;
@end
