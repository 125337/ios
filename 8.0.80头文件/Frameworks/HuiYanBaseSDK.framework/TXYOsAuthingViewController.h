@interface TXYOsAuthingViewController : TXYHuiYanBaseViewController
{
    CALayer * devicePreviewLayer; // +0x8
    NSDictionary * titleColorDic; // +0x10
    NSDictionary * trackerColorDic; // +0x18
    UIButton * _cancelButton; // +0x20
    UIView * _contentView; // +0x28
    UIView * _shapeView; // +0x30
    UILabel * _extraTipsLabel; // +0x38
    UIImageView * _stateImageView; // +0x40
    UILabel * _tipsLabel; // +0x48
    UIImageView * _rectFrameImage; // +0x50
    UILabel * _timeoutLabel; // +0x58
    UIImageView * _gsImageView; // +0x60
    TXYCircleBgView * _circleProgressView; // +0x68
    NSLayoutConstraint * _rectFrameImageW; // +0x70
    NSLayoutConstraint * _rectFrameImageH; // +0x78
    UIImageView * _faceGuideView; // +0x80
    UIView * _faceBlurView; // +0x88
    TXYHuiYanReloadingView * _faceLoadingView; // +0x90
    UIView * _far2NearContentView; // +0x98
    UILabel * _far2NearTipsLabel; // +0xa0
}
- (id)initWithDelegate:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)dealloc;
- (BOOL)shouldAutorotate;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)interfaceOrientation:(long long)arg1;
- (void)observerAppChange;
- (void)checkScreenRecode;
- (void)handleRecordingStartedNotification:(id)arg1;
- (void)takeScreen;
- (void)backgroundCallback;
- (void)showOutAlert:(id)arg1 handle:(id /* block */)arg2;
- (void)cancelClick:(id)arg1;
- (void)initUIColor;
- (void)initContentView;
- (void)updateAuthBgColor:(id)arg1;
- (void)updateUIOnReflectStart;
- (void)updateUIOnStartAuth;
- (void)updateUIOnPrepare;
- (void)updateUIOnPrepareCompareData;
- (void)updateBorderState:(long long)arg1;
- (void)updateExtraTips:(id)arg1;
- (void)updateTips:(id)arg1;
- (void)updateTips:(id)arg1 state:(long long)arg2;
- (void)showKeepPoseUI;
- (void)addDevicePreviewLayer:(id)arg1;
- (void)mountPreviewLayerIfNeeded;
- (void)showPreviewLayerImmediately;
- (void)startLoading;
- (void)stopLoading;
- (void)startImageLoading;
- (void)stopImageLoading;
- (void)changePageColor;
- (CGRect)getDevicePreviewLayerFrame;
- (id)colorWithState:(long long)arg1 isTitle:(BOOL)arg2;
- (void)faceAreaAddBlurViewAndLoadingView;
- (void)faceAreaRemoveBlurViewAndLoadingView;
- (void)reloadChangePageUI;
- (void)faceAreaAddBlurView;
- (void)faceAreaAddLoadingView;
- (void)faceAreaRemoveBlurView;
- (void)faceAreaRemoveLoadingView;
- (id)faceLoadingView;
- (id)faceBlurView;
- (id)faceGuideView;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)shapeView;
- (void)setShapeView:(id)arg1;
- (id)extraTipsLabel;
- (void)setExtraTipsLabel:(id)arg1;
- (id)stateImageView;
- (void)setStateImageView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)rectFrameImage;
- (void)setRectFrameImage:(id)arg1;
- (id)timeoutLabel;
- (void)setTimeoutLabel:(id)arg1;
- (id)gsImageView;
- (void)setGsImageView:(id)arg1;
- (id)circleProgressView;
- (void)setCircleProgressView:(id)arg1;
- (id)rectFrameImageW;
- (void)setRectFrameImageW:(id)arg1;
- (id)rectFrameImageH;
- (void)setRectFrameImageH:(id)arg1;
- (void)setFaceGuideView:(id)arg1;
- (void)setFaceBlurView:(id)arg1;
- (void)setFaceLoadingView:(id)arg1;
- (id)far2NearContentView;
- (void)setFar2NearContentView:(id)arg1;
- (id)far2NearTipsLabel;
- (void)setFar2NearTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end
