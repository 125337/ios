@interface WCPayScanPassportViewController : MMUIViewController <AVCaptureVideoDataOutputSampleBufferDelegate, CAAnimationDelegate>
{
    BOOL _use4KMode; // +0x70
    BOOL _testMissingModel; // +0x71
    BOOL _testEngineError; // +0x72
    BOOL _testOutputError; // +0x73
    BOOL _didHandledRotate; // +0x74
    BOOL _didSetupUI; // +0x75
    BOOL _didPlayingScanAnimation; // +0x76
    BOOL _didInNormalScanProcess; // +0x77
    BOOL _shouldEnterLeanFrontScan; // +0x78
    BOOL _didInLeanFrontScanProcess; // +0x79
    BOOL _didRecognizeLeanFront; // +0x7a
    BOOL _shouldEnterLeanBackScan; // +0x7b
    BOOL _didInLeanBackScanProcess; // +0x7c
    BOOL _didRecognizeLeanBack; // +0x7d
    BOOL _shouldPlayLeanAnimation; // +0x7e
    unsigned int _frameCount; // +0x80
    int _captureWidth; // +0x84
    int _captureHeight; // +0x88
    int _viewWidth; // +0x8c
    int _viewHeight; // +0x90
    int _statusResetCount; // +0x94
    int _frameResetCount; // +0x98
    id <WCPayScanPassportViewControllerDelegate> _delegate; // +0xa0
    NSDictionary * _scanDetailMsgMap; // +0xa8
    IntelligentOCRPassport * _ocr; // +0xb0
    unsigned long long _scene; // +0xb8
    AVCaptureSession * _captureSession; // +0xc0
    AVCaptureVideoPreviewLayer * _previewLayer; // +0xc8
    MMUIButton * _closeButton; // +0xd0
    UIView * _containerView; // +0xd8
    UIView * _scanStatusView; // +0xe0
    UIImageView * _scanStatusIcon; // +0xe8
    UILabel * _scanStatusLabel; // +0xf0
    long long _edgeFailedCount; // +0xf8
    long long _stableFailedCount; // +0x100
    unsigned long long _startTime; // +0x108
    MMUILabel * _tipsLabel; // +0x110
    NSMutableArray * _resultRects; // +0x118
    UIImageView * _scanLineView; // +0x120
    double _scanLineTopCenterY; // +0x128
    double _scanLineBottomCenterY; // +0x130
    CornerView * _leftTopView; // +0x138
    CornerView * _rightTopView; // +0x140
    CornerView * _rightBottomView; // +0x148
    CornerView * _leftBottomView; // +0x150
    MobileOCRImage * _reuseImage; // +0x158
    UIImage * _onlyReflectionPhoto; // +0x160
    long long _minWeightingReflectionPixels; // +0x168
    UIImage * _leanFrontOnlyReflectionPhoto; // +0x170
    long long _leanFrontMinWeightingReflectionPixels; // +0x178
    UIImage * _leanBackOnlyReflectionPhoto; // +0x180
    long long _leanBackMinWeightingReflectionPixels; // +0x188
    UILabel * _leanTipsLabel; // +0x190
    UIView * _fixedScanFrameView; // +0x198
    UIImageView * _leftTopCorner; // +0x1a0
    UIImageView * _rightTopCorner; // +0x1a8
    UIImageView * _rightBottomCorner; // +0x1b0
    UIImageView * _leftBottomCorner; // +0x1b8
    UIImageView * _vectorImageView; // +0x1c0
    long long _leanDirection; // +0x1c8
    UILabel * _leanAnimateLabel; // +0x1d0
    long long _pitchDetectTotalWindow; // +0x1d8
    long long _pitchDetectLeanFrontWindow; // +0x1e0
    long long _pitchDetectLeanBackWindow; // +0x1e8
}
- (unsigned long long)getSession;
- (void)setSession:(unsigned long long)arg1;
- (id)init;
- (void)continueFocus;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setupCornerView;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)UISplitViewWillChangeSplitMode;
- (void)setupScanLineView;
- (void)setupCloseButton;
- (double)getCloseBtnCenterY;
- (void)onCloseButtonClicked;
- (void)updateContainerView;
- (void)updateScanStatusView;
- (void)updateScanStatusIcon;
- (void)updateScanStatusLabel;
- (void)hideScanStatus;
- (void)viewDidAppear:(BOOL)arg1;
- (void)timeOutTips;
- (void)leanFrontTimeOutTips;
- (void)leanBackTimeOutTips;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (BOOL)useTransparentNavibar;
- (void)setupUI;
- (void)setupEngine;
- (void)setupInput;
- (void)setupScanSize;
- (BOOL)setupIDCardEngine;
- (void)setupImageBuffer;
- (void)setupVideoDataOutput;
- (void)onCloseButtonCallback;
- (void)onReturn;
- (void)onFail;
- (CGRect)viewBounds;
- (float)getRotateRadius:(long long)arg1;
- (void)handleVisible:(BOOL)arg1 forView:(id)arg2;
- (void)setBarViewToInvisible:(id)arg1;
- (void)stopEngine;
- (void)continuousAutoFocus:(CGPoint)arg1;
- (BOOL)useHighResolution;
- (void)startCapture;
- (void)stopCapture;
- (BOOL)addOutput:(id)arg1;
- (void)updateFrameStatus:(const void *)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (id)getPassportScanImageRectWithPassport:(const void *)arg1;
- (void)animateScanStatusWithTips:(id)arg1;
- (void)startLeanAnimation;
- (void)hideFixedScanFrame;
- (void)setupFixedScanFrameView;
- (void)updateLeanAnimationLabel;
- (id)handleOCRImageToUIImage:(id)arg1 withPassport:(const void *)arg2;
- (id)previewLayer;
- (id)captureSession;
- (void)startScanLineAnimation;
- (void)stopScanLineAnimation;
- (void)reportDetail:(unsigned long long)arg1;
- (void)reportTips:(id)arg1;
- (BOOL)shouldEnableMultiAnglesProcess;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (BOOL)isVerticalScreen;
- (unsigned long long)providedInterfaceOrientationMaskInIphone;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)use4KMode;
- (void)setUse4KMode:(BOOL)arg1;
- (BOOL)testMissingModel;
- (void)setTestMissingModel:(BOOL)arg1;
- (BOOL)testEngineError;
- (void)setTestEngineError:(BOOL)arg1;
- (BOOL)testOutputError;
- (void)setTestOutputError:(BOOL)arg1;
- (id)scanDetailMsgMap;
- (void)setScanDetailMsgMap:(id)arg1;
- (id)ocr;
- (void)setOcr:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (void)setCaptureSession:(id)arg1;
- (void)setPreviewLayer:(id)arg1;
- (BOOL)didHandledRotate;
- (void)setDidHandledRotate:(BOOL)arg1;
- (BOOL)didSetupUI;
- (void)setDidSetupUI:(BOOL)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)scanStatusView;
- (void)setScanStatusView:(id)arg1;
- (id)scanStatusIcon;
- (void)setScanStatusIcon:(id)arg1;
- (id)scanStatusLabel;
- (void)setScanStatusLabel:(id)arg1;
- (long long)edgeFailedCount;
- (void)setEdgeFailedCount:(long long)arg1;
- (long long)stableFailedCount;
- (void)setStableFailedCount:(long long)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (unsigned int)frameCount;
- (void)setFrameCount:(unsigned int)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)resultRects;
- (void)setResultRects:(id)arg1;
- (id)scanLineView;
- (void)setScanLineView:(id)arg1;
- (double)scanLineTopCenterY;
- (void)setScanLineTopCenterY:(double)arg1;
- (double)scanLineBottomCenterY;
- (void)setScanLineBottomCenterY:(double)arg1;
- (id)leftTopView;
- (void)setLeftTopView:(id)arg1;
- (id)rightTopView;
- (void)setRightTopView:(id)arg1;
- (id)rightBottomView;
- (void)setRightBottomView:(id)arg1;
- (id)leftBottomView;
- (void)setLeftBottomView:(id)arg1;
- (int)captureWidth;
- (void)setCaptureWidth:(int)arg1;
- (int)captureHeight;
- (void)setCaptureHeight:(int)arg1;
- (int)viewWidth;
- (void)setViewWidth:(int)arg1;
- (int)viewHeight;
- (void)setViewHeight:(int)arg1;
- (int)statusResetCount;
- (void)setStatusResetCount:(int)arg1;
- (int)frameResetCount;
- (void)setFrameResetCount:(int)arg1;
- (id)reuseImage;
- (void)setReuseImage:(id)arg1;
- (BOOL)didPlayingScanAnimation;
- (void)setDidPlayingScanAnimation:(BOOL)arg1;
- (BOOL)didInNormalScanProcess;
- (void)setDidInNormalScanProcess:(BOOL)arg1;
- (id)onlyReflectionPhoto;
- (void)setOnlyReflectionPhoto:(id)arg1;
- (long long)minWeightingReflectionPixels;
- (void)setMinWeightingReflectionPixels:(long long)arg1;
- (BOOL)shouldEnterLeanFrontScan;
- (void)setShouldEnterLeanFrontScan:(BOOL)arg1;
- (BOOL)didInLeanFrontScanProcess;
- (void)setDidInLeanFrontScanProcess:(BOOL)arg1;
- (id)leanFrontOnlyReflectionPhoto;
- (void)setLeanFrontOnlyReflectionPhoto:(id)arg1;
- (long long)leanFrontMinWeightingReflectionPixels;
- (void)setLeanFrontMinWeightingReflectionPixels:(long long)arg1;
- (BOOL)didRecognizeLeanFront;
- (void)setDidRecognizeLeanFront:(BOOL)arg1;
- (BOOL)shouldEnterLeanBackScan;
- (void)setShouldEnterLeanBackScan:(BOOL)arg1;
- (BOOL)didInLeanBackScanProcess;
- (void)setDidInLeanBackScanProcess:(BOOL)arg1;
- (id)leanBackOnlyReflectionPhoto;
- (void)setLeanBackOnlyReflectionPhoto:(id)arg1;
- (long long)leanBackMinWeightingReflectionPixels;
- (void)setLeanBackMinWeightingReflectionPixels:(long long)arg1;
- (BOOL)didRecognizeLeanBack;
- (void)setDidRecognizeLeanBack:(BOOL)arg1;
- (id)leanTipsLabel;
- (void)setLeanTipsLabel:(id)arg1;
- (id)fixedScanFrameView;
- (void)setFixedScanFrameView:(id)arg1;
- (id)leftTopCorner;
- (void)setLeftTopCorner:(id)arg1;
- (id)rightTopCorner;
- (void)setRightTopCorner:(id)arg1;
- (id)rightBottomCorner;
- (void)setRightBottomCorner:(id)arg1;
- (id)leftBottomCorner;
- (void)setLeftBottomCorner:(id)arg1;
- (id)vectorImageView;
- (void)setVectorImageView:(id)arg1;
- (BOOL)shouldPlayLeanAnimation;
- (void)setShouldPlayLeanAnimation:(BOOL)arg1;
- (long long)leanDirection;
- (void)setLeanDirection:(long long)arg1;
- (id)leanAnimateLabel;
- (void)setLeanAnimateLabel:(id)arg1;
- (long long)pitchDetectTotalWindow;
- (void)setPitchDetectTotalWindow:(long long)arg1;
- (long long)pitchDetectLeanFrontWindow;
- (void)setPitchDetectLeanFrontWindow:(long long)arg1;
- (long long)pitchDetectLeanBackWindow;
- (void)setPitchDetectLeanBackWindow:(long long)arg1;
- (void).cxx_destruct;
@end
