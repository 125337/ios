@interface JSApiScanLicenceViewController : MMUIViewController <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    int _edgeTh; // +0x68
    double _typeAspectRadio; // +0x70
    int cutImgVScreenHeight; // +0x78
    int cutImgVScreenWidth; // +0x7c
    MyImage * origImg; // +0x80
    MyImage * grayImg; // +0x88
    UIView * _topBarView; // +0x90
    UIView * _bottomBarView; // +0x98
    UIView * _leftBarView; // +0xa0
    UIView * _rightBarView; // +0xa8
    unsigned long long _scanType; // +0xb0
    ScanLicenceBackgroundView * m_backgroundView; // +0xb8
    MMUILabel * _tipsLabel; // +0xc0
    BOOL shouldStopCapture; // +0xc8
    BOOL _didHandledRotate; // +0xc9
    BOOL _didSetupUI; // +0xca
    BOOL _canReturn; // +0xcb
    id <JSApiScanLicenceViewControllerDelegate> _delegate; // +0xd0
    AVCaptureSession * _captureSession; // +0xd8
    AVCaptureVideoPreviewLayer * _prevLayer; // +0xe0
}
- (id)initWithType:(unsigned long long)arg1;
- (void)dealloc;
- (void)onReturn;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (float)getRotateRadius:(long long)arg1;
- (void)stopEngine;
- (void)setupEngine;
- (void)setGreenBarView;
- (void)setupUI;
- (void)personTipsAction:(id)arg1;
- (void)backAction:(id)arg1;
- (CGRect)viewBounds;
- (void)printVersion;
- (void)startCapture;
- (void)stopCapture;
- (BOOL)addOutput:(id)arg1;
- (void)continuousAutoFocus:(CGPoint)arg1;
- (void)finalizeCapture;
- (BOOL)useHighResolution;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)handleVisible:(BOOL)arg1 forView:(id)arg2;
- (void)setBarViewToInvisible:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)captureSession;
- (void)setCaptureSession:(id)arg1;
- (id)prevLayer;
- (void)setPrevLayer:(id)arg1;
- (void).cxx_destruct;
@end

