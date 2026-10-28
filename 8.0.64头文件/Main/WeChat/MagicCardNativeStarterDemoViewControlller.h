@interface MagicCardNativeStarterDemoViewControlller : MMUIViewController
{
    BOOL _isResumed; // +0x70
    MMUIButton * _preloadButton; // +0x78
    MMUIButton * _stopButton; // +0x80
    MMUIButton * _startButton; // +0x88
    MMUIButton * _coverButton; // +0x90
    MMUIButton * _notifyButton; // +0x98
    MMUIButton * _simpleStartButton; // +0xa0
    UIView * _containerView; // +0xa8
    MagicSclFrameSetView * _frameSetView; // +0xb0
    MMUIButton * _startToPlayBtn; // +0xb8
    _TtC6WeChat22MagicCardStarterSclBiz * _starterBiz; // +0xc0
    NSString * _frameSetName; // +0xc8
    NSString * _frameSetDataStr; // +0xd0
    NSString * _frameSetRootName; // +0xd8
    _TtC6WeChat18MagicSclCustomView * _customView; // +0xe0
    _TtC25MagicCardStarterProtocols22MagicCardStarterHandle * _starterHandle; // +0xe8
    _TtC25MagicCardStarterProtocols25MagicCardStarterBizConfig * _bizConfig; // +0xf0
    CGRect _halfScreen; // +0xf8
    CGRect _fullScreen; // +0x118
}
- (void)dealloc;
- (id)biz;
- (void)viewDidLoad;
- (id)getCardStyle;
- (void)setConfig:(id)arg1 type:(unsigned long long)arg2;
- (void)alert;
- (void)initStartToPlayBtn;
- (void)requestFullScreen;
- (void)layoutStartToPlayBtn;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (void)commonStart;
- (void)commonBindView;
- (void)commonNotifyJsEvent;
- (void)cover;
- (void)commonStop;
- (void)start;
- (void)bindView;
- (void)notifyJsEvent;
- (void)stopBiz;
- (id)generateCommonEventDicWithEventName:(id)arg1 frameSetName:(id)arg2 frameSetData:(id)arg3;
- (void)stop;
- (id)bizConfig;
- (id)getCustomJsEvent;
- (void)simpleStart;
- (void)simpleDestroy;
- (void)startFinderNativeCard;
- (void)bindFinderView;
- (void)notifyFinderJsEvent;
- (void)stopFinderNativeCard;
- (id)preloadButton;
- (void)setPreloadButton:(id)arg1;
- (id)stopButton;
- (void)setStopButton:(id)arg1;
- (id)startButton;
- (void)setStartButton:(id)arg1;
- (id)coverButton;
- (void)setCoverButton:(id)arg1;
- (id)notifyButton;
- (void)setNotifyButton:(id)arg1;
- (id)simpleStartButton;
- (void)setSimpleStartButton:(id)arg1;
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
- (id)starterBiz;
- (void)setStarterBiz:(id)arg1;
- (id)frameSetName;
- (void)setFrameSetName:(id)arg1;
- (id)frameSetDataStr;
- (void)setFrameSetDataStr:(id)arg1;
- (id)frameSetRootName;
- (void)setFrameSetRootName:(id)arg1;
- (id)customView;
- (void)setCustomView:(id)arg1;
- (id)starterHandle;
- (void)setStarterHandle:(id)arg1;
- (void)setBizConfig:(id)arg1;
- (void).cxx_destruct;
@end
