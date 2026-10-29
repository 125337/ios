@interface MMDetectIDCardViewController : MMUIViewController <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    MyImage * origImg; // +0x68
    MyImage * grayImg; // +0x70
    int _edgeTh; // +0x78
    BOOL _didHandledRotate; // +0x7c
    BOOL _didSetupUI; // +0x7d
    int _cutImgVScreenHeight; // +0x80
    int _cutImgVScreenWidth; // +0x84
    unsigned int _frameCount; // +0x88
    id <MMDetectIDCardViewControllerDelegate> _delegate; // +0x90
    AVCaptureSession * _captureSession; // +0x98
    AVCaptureVideoPreviewLayer * _previewLayer; // +0xa0
    ScanLicenceBackgroundView * _backgroundView; // +0xa8
    MMUILabel * _tipsLabel; // +0xb0
    UIView * _containerView; // +0xb8
    UIView * _scanStatusView; // +0xc0
    UIImageView * _scanStatusIcon; // +0xc8
    UILabel * _scanStatusLabel; // +0xd0
    NSString * _scanStatus; // +0xd8
    long long _edgeFailedCount; // +0xe0
    long long _stableFailedCount; // +0xe8
    NSMutableArray * _frameStatusArray; // +0xf0
    SequenceAnimationObject * _animateObject; // +0xf8
    UIView * _topBarView; // +0x100
    UIView * _bottomBarView; // +0x108
    UIView * _leftBarView; // +0x110
    UIView * _rightBarView; // +0x118
    unsigned long long _startTime; // +0x120
    unsigned long long _authScene; // +0x128
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

