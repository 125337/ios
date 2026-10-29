@interface MagicGameLoadingDemoVC : MMUIViewController
{
    BOOL _isResumed; // +0x70
    MMUIButton * _preloadButton; // +0x78
    MMUIButton * _stopButton; // +0x80
    MMUIButton * _startButton; // +0x88
    MMUIButton * _appIdButton; // +0x90
    UIView * _containerView; // +0x98
    MagicSclFrameSetView * _frameSetView; // +0xa0
    MMUIButton * _startToPlayBtn; // +0xa8
    CGRect _halfScreen; // +0xb0
    CGRect _fullScreen; // +0xd0
}
- (void)dealloc;
- (id)biz;
- (void)viewDidLoad;
- (void)setConfig:(id)arg1 type:(unsigned long long)arg2;
- (void)alert;
- (void)initStartToPlayBtn;
- (void)requestFullScreen;
- (void)layoutStartToPlayBtn;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (void)start;
- (void)updateFrameSetData;
- (void)preload;
- (void)stop;
- (id)preloadButton;
- (void)setPreloadButton:(id)arg1;
- (id)stopButton;
- (void)setStopButton:(id)arg1;
- (id)startButton;
- (void)setStartButton:(id)arg1;
- (id)appIdButton;
- (void)setAppIdButton:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)frameSetView;
- (void)setFrameSetView:(id)arg1;
- (BOOL)isResumed;
- (void)setIsResumed:(BOOL)arg1;
- (id)startToPlayBtn;
- (void)setStartToPlayBtn:(id)arg1;
- (CGRect)halfScreen;
- (void)setHalfScreen:(CGRect)arg1;
- (CGRect)fullScreen;
- (void)setFullScreen:(CGRect)arg1;
- (void).cxx_destruct;
@end
