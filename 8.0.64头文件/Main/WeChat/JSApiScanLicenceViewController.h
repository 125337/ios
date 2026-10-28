@interface JSApiScanLicenceViewController : MMUIViewController <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    int _edgeTh; // +0x70
    double _typeAspectRadio; // +0x78
    int cutImgVScreenHeight; // +0x80
    int cutImgVScreenWidth; // +0x84
    MyImage * origImg; // +0x88
    MyImage * grayImg; // +0x90
    UIView * _topBarView; // +0x98
    UIView * _bottomBarView; // +0xa0
    UIView * _leftBarView; // +0xa8
    UIView * _rightBarView; // +0xb0
    unsigned long long _scanType; // +0xb8
    ScanLicenceBackgroundView * m_backgroundView; // +0xc0
    MMUILabel * _tipsLabel; // +0xc8
    BOOL shouldStopCapture; // +0xd0
    BOOL _didHandledRotate; // +0xd1
    BOOL _didSetupUI; // +0xd2
    BOOL _canReturn; // +0xd3
    id <JSApiScanLicenceViewControllerDelegate> _delegate; // +0xd8
    AVCaptureSession * _captureSession; // +0xe0
    AVCaptureVideoPreviewLayer * _prevLayer; // +0xe8
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
