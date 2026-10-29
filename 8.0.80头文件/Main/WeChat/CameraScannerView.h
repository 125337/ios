@interface CameraScannerView : MMUIView <CameraScanPressureOptimizeDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>
{
    AVCaptureSession * _captureSession; // +0x8
    AVCaptureVideoPreviewLayer * _prevLayer; // +0x10
    NSRecursiveLock * _cameraLock; // +0x18
    id <CameraScannerViewDataDelegate> _delegate; // +0x20
    BOOL _hasInit; // +0x28
    BOOL _hasCaptureOutput; // +0x29
    BOOL _currentOpenAutoSwitchCamera; // +0x2a
    AVCaptureDeviceInput * _captureInput; // +0x30
    AVCaptureVideoDataOutput * _captureOutput; // +0x38
    AVCaptureDevice * _captureDevice; // +0x40
    MMTimer * _lowLightCheckTimer; // +0x48
    MMTimer * _firstCenterFocusTimer; // +0x50
    MMTimer * _centerFocusTimer; // +0x58
    BOOL _shouldCheckLowLight; // +0x60
    BOOL _isLowLight; // +0x61
    BOOL _isLightBoostOn; // +0x62
    CGPoint _focusPoint; // +0x68
    BOOL _observingFocus; // +0x78
    BOOL _hasFocused; // +0x79
    NSObject<OS_dispatch_queue> * _sessionQueue; // +0x80
    AVCaptureStillImageOutput * _imageOutput; // +0x88
    BOOL _isTakingPic; // +0x90
    BOOL _shouldStopScan; // +0x91
    BOOL _currentDeviceIsUltraWideAngleCamera; // +0x92
    BOOL _hasAuthorizeAlert; // +0x93
    BOOL _stopTimerCheck; // +0x94
    BOOL _useNewUI; // +0x95
    BOOL _hasReportCameraStatus; // +0x96
    BOOL _isActiveFocus; // +0x97
    BOOL _hasReportCameraRebootStatus; // +0x98
    BOOL _hasReportBlackData; // +0x99
    BOOL _hasTriggeredShortTermTimeout; // +0x9a
    unsigned int _lightMode; // +0x9c
    float _cameraDefaultZoomFactor; // +0xa0
    int _firstDataFrameCost; // +0xa4
    id <CameraScannerViewStatusDelegate> _statusDelegate; // +0xa8
    NSMutableString * _zoomOplog; // +0xb0
    double _userEnterTime; // +0xb8
    CameraScannerViewSwitchOpt * _switchOpt; // +0xc0
    long long _cameraStatus; // +0xc8
    CameraScannerViewBlackOpt * _blackOpt; // +0xd0
    CameraScannerViewFocusOpt * _focusOpt; // +0xd8
    double _startTime; // +0xe0
    long long _errorType; // +0xe8
    CameraScanPressureOptimize * _pressureOpt; // +0xf0
    CameraScanCombineService * _cscService; // +0xf8
    double _cameraOutputTime; // +0x100
    CameraScanService * _scanService; // +0x108
    CameraScanBlackScreenPredictManager * _bsPredictManager; // +0x110
    NSDictionary * _bsPredictConfig; // +0x118
    long long _outputOrientation; // +0x120
    CGPoint _lastestFocusPoint; // +0x128
}
+ (BOOL)usesRotationAngleCompatibility;
+ (id)sharedInstance;
+ (void)releaseInstance;
+ (id)getInstance;
- (void)stopCaptureSessionRunning;
- (void)addAutoFocusObserverForCaptureDevice;
- (void)removeAutoFocusObserverForCaptureDevice;
- (long long)effectiveInterfaceOrientation;
- (id)videoDeviceForRotationConnection:(id)arg1;
- (void)configureRotationAngleForConnection:(id)arg1 orientation:(long long)arg2;
- (CGPoint)captureDevicePointForViewPoint:(CGPoint)arg1;
- (CGPoint)captureDevicePointForOutputPoint:(CGPoint)arg1 connection:(id)arg2;
- (id)init;
- (void)initCameraOptimize;
- (void)dealloc;
- (void)cleanupAVSession;
- (void)stopInstanceIfNeed;
- (void)releaseInstance;
- (id)captureDevice;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)adjustToNewSize:(double)arg1;
- (BOOL)layoutPreviewForPadStyleIfNeeded;
- (float)getRotateRadius:(long long)arg1;
- (BOOL)isUsingFrontCamera;
- (id)wideAngleCameraDeviceWithPosition:(long long)arg1;
- (BOOL)canSwitchCamera;
- (id)captureDeviceWithPosition:(long long)arg1;
- (void)updateVideoMirroringForConnection:(id)arg1 position:(long long)arg2;
- (void)switchCameraWithCompletion:(id /* block */)arg1;
- (long long)diagnoseCamera;
- (void)diagnoseReport:(long long)arg1;
- (void)diagnoseReportReboot:(long long)arg1;
- (id)getCaptureDeviceWithAutoSwitchCamera:(BOOL)arg1;
- (id)defaultCaptureDevice;
- (void)configureMultitaskingCameraAccessForSession:(id)arg1;
- (void)initCaptureWithPreviewScale:(float)arg1 isPortrait:(BOOL)arg2;
- (void)initCaptureWithPreviewScale:(float)arg1 isPortrait:(BOOL)arg2 enableAutoSwitchCamera:(BOOL)arg3;
- (void)initCaptureWithPreviewScale:(float)arg1 enableAutoSwitchCamera:(BOOL)arg2;
- (void)setDelegate:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (BOOL)isUsingUltraWideAngleCamera;
- (unsigned int)getLensType;
- (double)getLastLenPosition;
- (BOOL)isUsingLensCheck;
- (void)checkAutoSwitchCamera;
- (void)checkInitDefaultZoomFactor;
- (double)defaultZoomFactor;
- (double)maxZoomFactor;
- (BOOL)isCurrentOpenAutoSwitchCamera;
- (BOOL)enableScanAutoSwitchCameraWhenFocusing:(long long)arg1;
- (double)autoSwitchingScanCameraLensPosition;
- (void)showTorchButtonWithSeconds:(unsigned int)arg1;
- (long long)getDeviceOrientation:(long long)arg1;
- (void)takePicturWithCompletion:(id /* block */)arg1;
- (void)onCaptureTimeout;
- (void)setPreviewScale:(float)arg1;
- (void)start;
- (void)stop;
- (void)startTimerCheckLowLight;
- (BOOL)enableFocusOpt;
- (BOOL)isFocusSimpleMode;
- (void)startTimerCenterFocus;
- (void)onCenterFocusInternalFirst;
- (void)onCenterFocusInternal;
- (void)updateFocusPoint:(CGPoint)arg1;
- (BOOL)hasActiveFocus;
- (void)onCenterFocus:(CGPoint)arg1;
- (void)stopTimerCenterFocus;
- (void)onTimerCheckLowLight;
- (void)stopTimerCheckLowLight;
- (void)tryRemoveFocusObserver;
- (void)addFocusObserver;
- (void)addCaptureSessionObserver;
- (void)removeCaptureSessionObserver;
- (void)captureSessionRuntimeError:(id)arg1;
- (void)captureSessionDidStartRunning:(id)arg1;
- (void)captureSessionDidStopRunning:(id)arg1;
- (void)captureSessionWasInterrupted:(id)arg1;
- (void)captureSessionInterruptionEnded:(id)arg1;
- (CGRect)convertToPortraitRect:(CGRect)arg1;
- (CGRect)convertToPortraitRect:(CGRect)arg1 orientation:(long long)arg2;
- (CGPoint)convertToPortraitPoint:(CGPoint)arg1;
- (CGRect)convertPortraitToCameraRect:(CGRect)arg1 preset:(id)arg2;
- (CGPoint)convertDevicePointToPortraitPoint:(CGPoint)arg1;
- (CGPoint)pointToCaptureDevice:(CGPoint)arg1;
- (float)getRotateDegreeRelativeToCamera;
- (float)getRotateDegreeRelativeToCameraForOrientation:(long long)arg1;
- (long long)getImageOrientationToCamera;
- (long long)getImageOrientationToCameraForOrientation:(long long)arg1;
- (void)continuousFocusAtPoint:(CGPoint)arg1;
- (void)continuousExposureAtPoint:(CGPoint)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onTimerFocus;
- (void)setLightBoostOn:(BOOL)arg1;
- (BOOL)innerSetLightBoostOn:(BOOL)arg1;
- (double)getZoomFactor;
- (void)setDefaultZoomFactor;
- (void)setZoomFactor:(double)arg1 animated:(BOOL)arg2;
- (void)setZoomFactor:(double)arg1 ignoreLimit:(BOOL)arg2 animated:(BOOL)arg3;
- (void)addZoomFactorLog:(double)arg1 manually:(BOOL)arg2;
- (void)clearLog;
- (void)setupReportTimerWhenStartScan;
- (void)cancelReportTimer;
- (void)onNotRecieveBufferForShotTerm;
- (void)onNotRecieveBufferForLongTerm;
- (void)diagnoseNoBuffer;
- (void)addLifetimeObserver;
- (void)removeLifetimeObserver;
- (void)onEnterBackground:(id)arg1;
- (void)onEnterForegound:(id)arg1;
- (void)recover:(long long)arg1;
- (void)recoverWithCleanupCaptureSession;
- (void)recoverWithSetupCaptureSession:(long long)arg1;
- (void)updateAbnormal:(long long)arg1 code:(int)arg2 msg:(id)arg3;
- (void)setupDynamicFrameRateRange;
- (void)degreeFrame:(id)arg1;
- (long long)getRecoverType;
- (unsigned int)getFirstDataFrameCost;
- (long long)getCameraExceprionCode:(id)arg1;
- (void)tryRecover:(long long)arg1;
- (id)captureSession;
- (id)prevLayer;
- (id)delegate;
- (BOOL)hasInit;
- (BOOL)hasCaptureOutput;
- (void)setHasCaptureOutput:(BOOL)arg1;
- (id)cameraLock;
- (id)statusDelegate;
- (void)setStatusDelegate:(id)arg1;
- (id)zoomOplog;
- (unsigned int)lightMode;
- (BOOL)currentDeviceIsUltraWideAngleCamera;
- (void)setCurrentDeviceIsUltraWideAngleCamera:(BOOL)arg1;
- (float)cameraDefaultZoomFactor;
- (void)setCameraDefaultZoomFactor:(float)arg1;
- (double)userEnterTime;
- (void)setUserEnterTime:(double)arg1;
- (BOOL)hasAuthorizeAlert;
- (void)setHasAuthorizeAlert:(BOOL)arg1;
- (BOOL)stopTimerCheck;
- (void)setStopTimerCheck:(BOOL)arg1;
- (id)switchOpt;
- (void)setSwitchOpt:(id)arg1;
- (BOOL)useNewUI;
- (void)setUseNewUI:(BOOL)arg1;
- (long long)cameraStatus;
- (void)setCameraStatus:(long long)arg1;
- (BOOL)hasReportCameraStatus;
- (void)setHasReportCameraStatus:(BOOL)arg1;
- (id)blackOpt;
- (void)setBlackOpt:(id)arg1;
- (CGPoint)lastestFocusPoint;
- (void)setLastestFocusPoint:(CGPoint)arg1;
- (id)focusOpt;
- (void)setFocusOpt:(id)arg1;
- (BOOL)isActiveFocus;
- (void)setIsActiveFocus:(BOOL)arg1;
- (BOOL)hasReportCameraRebootStatus;
- (void)setHasReportCameraRebootStatus:(BOOL)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (BOOL)hasReportBlackData;
- (void)setHasReportBlackData:(BOOL)arg1;
- (BOOL)hasTriggeredShortTermTimeout;
- (void)setHasTriggeredShortTermTimeout:(BOOL)arg1;
- (long long)errorType;
- (void)setErrorType:(long long)arg1;
- (id)pressureOpt;
- (void)setPressureOpt:(id)arg1;
- (int)firstDataFrameCost;
- (void)setFirstDataFrameCost:(int)arg1;
- (id)cscService;
- (void)setCscService:(id)arg1;
- (double)cameraOutputTime;
- (void)setCameraOutputTime:(double)arg1;
- (id)scanService;
- (void)setScanService:(id)arg1;
- (id)bsPredictManager;
- (void)setBsPredictManager:(id)arg1;
- (id)bsPredictConfig;
- (void)setBsPredictConfig:(id)arg1;
- (long long)outputOrientation;
- (void)setOutputOrientation:(long long)arg1;
- (void).cxx_destruct;
@end
