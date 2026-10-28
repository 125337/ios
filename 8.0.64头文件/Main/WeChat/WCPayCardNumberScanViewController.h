@interface WCPayCardNumberScanViewController : MMUIViewController <WCPayCardNumberScanTaskV2Delegate, WCPayBizeOcrImageHttpDegelate, AVCaptureVideoDataOutputSampleBufferDelegate>
{
    ScanCardBackgroundViewV2 * m_backgroundView; // +0x70
    WCPayCardNumberScanForeView * m_foreView; // +0x78
    BOOL shouldStopCapture; // +0x80
    BOOL _didHandledRotate; // +0x81
    BOOL _didSetupUI; // +0x82
    UIImage * colorImage; // +0x88
    NSString * resultCardId; // +0x90
    unsigned long long m_timeStart; // +0x98
    BOOL m_success; // +0xa0
    NSObject * m_timeoutAlert; // +0xa8
    char * best_img_data; // +0xb0
    FastFocusEngie ffengine; // +0xb8
    BOOL _useHttp; // +0xc0
    BOOL _m_engineStart; // +0xc1
    BOOL _bShouldCheckLowLight; // +0xc2
    BOOL _bIsLowLight; // +0xc3
    BOOL _bIsLightBoostOn; // +0xc4
    BOOL _didSetupEngine; // +0xc5
    unsigned int _seqNum; // +0xc8
    unsigned int _source; // +0xcc
    float _compareBrightness; // +0xd0
    unsigned int _beepSound; // +0xd4
    NSString * _username; // +0xd8
    NSString * _certPem; // +0xe0
    NSString * _baseRequest; // +0xe8
    id <WCPayCardNumberScanDelegate> _delegate; // +0xf0
    AVCaptureSession * _captureSession; // +0xf8
    AVCaptureVideoPreviewLayer * _prevLayer; // +0x100
    NSRecursiveLock * _m_engineLock; // +0x108
    AVCaptureDevice * _captureDevice; // +0x110
    NSMutableArray * _scanTaskArray; // +0x118
    unsigned long long _lastScanTaskTime; // +0x120
    NSString * _sessionKey; // +0x128
    unsigned long long _currentFrameCount; // +0x130
    NSString * _scanResult; // +0x138
    UIButton * _closeButton; // +0x140
    MMTimer * _lowLightCheckTimer; // +0x148
    UIButton * _torchButton; // +0x150
    MMUILabel * _torchLabel; // +0x158
}
+ (id)convertBitmapRGBA8ToUIImage:(char *)arg1 withWidth:(int)arg2 withHeight:(int)arg3;
- (id)init;
- (void)setupData;
- (BOOL)useTransparentNavibar;
- (id)startEngineLock;
- (void)dealloc;
- (void)startTimeout;
- (void)showTimeOutAlert;
- (void)manualInput;
- (void)goonScan;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (float)getRotateRadius:(long long)arg1;
- (void)stopEngine;
- (void)setupEngine;
- (void)realSetupEngine;
- (void)setGreenBarView;
- (void)setupUI;
- (void)setupCloseButton;
- (void)enterBackground;
- (void)enterForeground;
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
- (CGRect)serverRecogFrameFromWidth:(double)arg1 Height:(double)arg2;
- (id)screenshotOfVideoStream:(__CVBuffer *)arg1;
- (__CVBuffer *)pixelBufferFromCGImage:(CGImage *)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)handleVisible:(BOOL)arg1 forView:(id)arg2;
- (void)setBarViewToInvisible:(id)arg1;
- (void)onWCPayCardNumberScanTaskV2:(id)arg1 cardNumber:(id)arg2 seqNum:(unsigned int)arg3 leftTop:(CGPoint)arg4 rightTop:(CGPoint)arg5 rightBottom:(CGPoint)arg6 leftBottom:(CGPoint)arg7 scanResult:(id)arg8;
- (void)onWCPayCardNumberScanTaskV2:(id)arg1 errorMsg:(id)arg2;
- (void)onWCPayScanCardNumberHttp:(id)arg1 cardNumber:(id)arg2 scanResult:(id)arg3;
- (void)onWCPayScanCardNumberHttp:(id)arg1 errorMsg:(id)arg2;
- (void)kvReport:(unsigned long long)arg1;
- (void)startTimerCheckLowLight;
- (void)stopTimerCheckLowLight;
- (void)onTimerCheckLowLight;
- (void)lowLightStatusChanged:(BOOL)arg1;
- (void)showTorchButton;
- (void)updateTorchButtonFrame;
- (void)onTorchButtonClicked:(id)arg1;
- (void)setLightBoostOn:(BOOL)arg1;
- (void)tryHideTorchButton;
- (void)doHideTorchButton;
- (id)username;
- (void)setUsername:(id)arg1;
- (BOOL)useHttp;
- (void)setUseHttp:(BOOL)arg1;
- (id)certPem;
- (void)setCertPem:(id)arg1;
- (id)baseRequest;
- (void)setBaseRequest:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)captureSession;
- (void)setCaptureSession:(id)arg1;
- (id)prevLayer;
- (void)setPrevLayer:(id)arg1;
- (id)m_engineLock;
- (void)setM_engineLock:(id)arg1;
- (id)captureDevice;
- (void)setCaptureDevice:(id)arg1;
- (BOOL)m_engineStart;
- (void)setM_engineStart:(BOOL)arg1;
- (id)scanTaskArray;
- (void)setScanTaskArray:(id)arg1;
- (unsigned long long)lastScanTaskTime;
- (void)setLastScanTaskTime:(unsigned long long)arg1;
- (id)sessionKey;
- (void)setSessionKey:(id)arg1;
- (unsigned int)seqNum;
- (void)setSeqNum:(unsigned int)arg1;
- (unsigned int)source;
- (void)setSource:(unsigned int)arg1;
- (unsigned long long)currentFrameCount;
- (void)setCurrentFrameCount:(unsigned long long)arg1;
- (id)scanResult;
- (void)setScanResult:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (float)compareBrightness;
- (void)setCompareBrightness:(float)arg1;
- (BOOL)bShouldCheckLowLight;
- (void)setBShouldCheckLowLight:(BOOL)arg1;
- (BOOL)bIsLowLight;
- (void)setBIsLowLight:(BOOL)arg1;
- (BOOL)bIsLightBoostOn;
- (void)setBIsLightBoostOn:(BOOL)arg1;
- (id)lowLightCheckTimer;
- (void)setLowLightCheckTimer:(id)arg1;
- (id)torchButton;
- (void)setTorchButton:(id)arg1;
- (id)torchLabel;
- (void)setTorchLabel:(id)arg1;
- (unsigned int)beepSound;
- (void)setBeepSound:(unsigned int)arg1;
- (BOOL)didSetupEngine;
- (void)setDidSetupEngine:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
