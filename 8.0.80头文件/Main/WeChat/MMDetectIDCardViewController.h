@interface MMDetectIDCardViewController : MMUIViewController <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    MyImage * origImg; // +0x70
    MyImage * grayImg; // +0x78
    int _edgeTh; // +0x80
    BOOL _didHandledRotate; // +0x84
    BOOL _didSetupUI; // +0x85
    int _cutImgVScreenHeight; // +0x88
    int _cutImgVScreenWidth; // +0x8c
    unsigned int _frameCount; // +0x90
    id <MMDetectIDCardViewControllerDelegate> _delegate; // +0x98
    AVCaptureSession * _captureSession; // +0xa0
    AVCaptureVideoPreviewLayer * _previewLayer; // +0xa8
    ScanLicenceBackgroundView * _backgroundView; // +0xb0
    MMUILabel * _tipsLabel; // +0xb8
    UIView * _containerView; // +0xc0
    UIView * _scanStatusView; // +0xc8
    UIImageView * _scanStatusIcon; // +0xd0
    UILabel * _scanStatusLabel; // +0xd8
    NSString * _scanStatus; // +0xe0
    long long _edgeFailedCount; // +0xe8
    long long _stableFailedCount; // +0xf0
    NSMutableArray * _frameStatusArray; // +0xf8
    SequenceAnimationObject * _animateObject; // +0x100
    UIView * _topBarView; // +0x108
    UIView * _bottomBarView; // +0x110
    UIView * _leftBarView; // +0x118
    UIView * _rightBarView; // +0x120
    unsigned long long _startTime; // +0x128
    unsigned long long _authScene; // +0x130
}
- (id)initWithAuthScene:(unsigned long long)arg1;
- (void)updateFrameArray;
- (void)dealloc;
- (void)viewDidLoad;
- (void)updateContainerView;
- (void)updateScanStatusView;
- (void)updateScanStatusIcon;
- (void)updateScanStatusLabel;
- (void)hideScanStatus;
- (void)animateScanStatus;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (BOOL)useTransparentNavibar;
- (void)setupUI;
- (void)setGreenBarView;
- (void)setupTipLabel;
- (void)setupEngine;
- (void)setupInput;
- (void)setupScanSize;
- (BOOL)setupIDCardEngine;
- (void)setupImageBuffer;
- (void)setupVideoDataOutput;
- (void)onReturn;
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
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (id)previewLayer;
- (id)captureSession;
- (void)reportMode:(unsigned long long)arg1 action:(unsigned long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setCaptureSession:(id)arg1;
- (void)setPreviewLayer:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)scanStatusView;
- (void)setScanStatusView:(id)arg1;
- (id)scanStatusIcon;
- (void)setScanStatusIcon:(id)arg1;
- (id)scanStatusLabel;
- (void)setScanStatusLabel:(id)arg1;
- (id)scanStatus;
- (void)setScanStatus:(id)arg1;
- (long long)edgeFailedCount;
- (void)setEdgeFailedCount:(long long)arg1;
- (long long)stableFailedCount;
- (void)setStableFailedCount:(long long)arg1;
- (id)frameStatusArray;
- (void)setFrameStatusArray:(id)arg1;
- (id)animateObject;
- (void)setAnimateObject:(id)arg1;
- (id)topBarView;
- (void)setTopBarView:(id)arg1;
- (id)bottomBarView;
- (void)setBottomBarView:(id)arg1;
- (id)leftBarView;
- (void)setLeftBarView:(id)arg1;
- (id)rightBarView;
- (void)setRightBarView:(id)arg1;
- (int)cutImgVScreenHeight;
- (void)setCutImgVScreenHeight:(int)arg1;
- (int)cutImgVScreenWidth;
- (void)setCutImgVScreenWidth:(int)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (unsigned int)frameCount;
- (void)setFrameCount:(unsigned int)arg1;
- (unsigned long long)authScene;
- (void)setAuthScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
