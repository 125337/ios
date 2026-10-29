@interface EcsMagicNativeStarterDemoViewControlller : MMUIViewController
{
    MMUIButton * _preloadButton; // +0x70
    MMUIButton * _stopButton; // +0x78
    MMUIButton * _startButton; // +0x80
    MMUIButton * _notifyButton; // +0x88
    UIView * _containerView; // +0x90
    NSString * _frameSetName; // +0x98
    NSString * _frameSetDataStr; // +0xa0
    _TtC25MagicCardStarterProtocols22MagicCardStarterHandle * _starterHandle; // +0xa8
    CGRect _halfScreen; // +0xb0
    CGRect _fullScreen; // +0xd0
}
- (void)dealloc;
- (void)viewDidLoad;
- (id)getCardStyle;
- (void)requestFullScreen;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (void)commonStart;
- (void)commonBindView;
- (void)commonStop;
- (id)generateCommonEventDicWithEventName:(id)arg1 frameSetName:(id)arg2 frameSetData:(id)arg3;
- (void)stop;
- (id)preloadButton;
- (void)setPreloadButton:(id)arg1;
- (id)stopButton;
- (void)setStopButton:(id)arg1;
- (id)startButton;
- (void)setStartButton:(id)arg1;
- (id)notifyButton;
- (void)setNotifyButton:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (CGRect)halfScreen;
- (void)setHalfScreen:(CGRect)arg1;
- (CGRect)fullScreen;
- (void)setFullScreen:(CGRect)arg1;
- (id)frameSetName;
- (void)setFrameSetName:(id)arg1;
- (id)frameSetDataStr;
- (void)setFrameSetDataStr:(id)arg1;
- (id)starterHandle;
- (void)setStarterHandle:(id)arg1;
- (void).cxx_destruct;
@end
