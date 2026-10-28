@interface CameraScannerView : MMUIView <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    AVCaptureSession * _captureSession; // +0x8
    AVCaptureVideoPreviewLayer * _prevLayer; // +0x10
    NSRecursiveLock * _cameraLock; // +0x18
    id <CameraScannerViewDelegate> _delegate; // +0x20
    BOOL _hasInit; // +0x28
    BOOL _hasCaptureOutput; // +0x29
    BOOL _currentOpenAutoSwitchCamera; // +0x2a
    AVCaptureDeviceInput * _captureInput; // +0x30
    AVCaptureVideoDataOutput * _captureOutput; // +0x38
    AVCaptureDevice * _captureDevice; // +0x40
    MMTimer * _lowLightCheckTimer; // +0x48
    BOOL _shouldCheckLowLight; // +0x50
    BOOL _isLowLight; // +0x51
    BOOL _isLightBoostOn; // +0x52
    CGPoint _focusPoint; // +0x58
    BOOL _observingFocus; // +0x68
    BOOL _hasFocused; // +0x69
    NSObject<OS_dispatch_queue> * _sessionQueue; // +0x70
    float _compareBrightness; // +0x78
    AVCaptureStillImageOutput * _imageOutput; // +0x80
    BOOL _isTakingPic; // +0x88
    BOOL _shouldStopScan; // +0x89
    long long _initErrorType; // +0x90
    BOOL _currentDeviceIsUltraWideAngleCamera; // +0x98
    BOOL _stopTimerCheck; // +0x99
    BOOL _useNewUI; // +0x9a
    BOOL _hasTimelineObserver; // +0x9b
    BOOL _hasReportCameraStatus; // +0x9c
    unsigned int _lightMode; // +0xa0
    float _cameraDefaultZoomFactor; // +0xa4
    NSMutableString * _zoomOplog; // +0xa8
    CameraScannerViewSwitchOpt * _switchOpt; // +0xb0
    long long _cameraStatus; // +0xb8
    CameraScannerViewBlackOpt * _blackOpt; // +0xc0
}
+ (id)sharedInstance;
+ (void)stopInstanceIfNeed;
+ (void)releaseInstance;
- (void)stopCaptureSessionRunning;
- (void)addAutoFocusObserverForCaptureDevice;
- (void)removeAutoFocusObserverForCaptureDevice;
- (id)init;
- (void)dealloc;
- (void)cleanupAVSession;
- (id)captureDevice;
- (void)layoutSubviews;
- (void)adjustToNewSize:(double)arg1;
- (float)getRotateRadius:(long long)arg1;
- (BOOL)isUsingFrontCamera;
- (long long)diagnoseCamera;
- (void)diagnoseReport:(long long)arg1;
- (id)getCaptureDeviceWithAutoSwitchCamera:(BOOL)arg1;
- (id)defaultCaptureDevice;
- (void)initCaptureWithPreviewScale:(float)arg1 isPortrait:(BOOL)arg2;
- (void)initCaptureWithPreviewScale:(float)arg1 isPortrait:(BOOL)arg2 enableAutoSwitchCamera:(BOOL)arg3;
- (void)initCaptureWithPreviewScale:(float)arg1 enableAutoSwitchCamera:(BOOL)arg2;
- (void)setDelegate:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (BOOL)isUsingUltraWideAngleCamera;
- (unsigned int)isUltraFocusMode;
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
- (CGPoint)convertToPortraitPoint:(CGPoint)arg1;
- (CGRect)convertPortraitToCameraRect:(CGRect)arg1;
- (CGPoint)convertDevicePointToPortraitPoint:(CGPoint)arg1;
- (CGPoint)pointToCaptureDevice:(CGPoint)arg1;
- (float)getRotateDegreeRelativeToCamera;
- (long long)getImageOrientationToCamera;
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
- (void)reportOnNotRecieveBufferForShotTerm;
- (void)reportOnNotRecieveBufferForLongTerm;
- (void)addCameraTimelineObserver;
- (void)removeCameraTimelineObserver;
- (void)diagnoseNoBuffer;
- (void)addLifetimeObserver;
- (void)removeLifetimeObserver;
- (void)onEnterBackground:(id)arg1;
- (void)onEnterForegound:(id)arg1;
- (void)recover;
- (void)cleanupCaptureSession;
- (void)setupCaptureSession;
- (id)captureSession;
- (id)prevLayer;
- (id)delegate;
- (BOOL)hasInit;
- (BOOL)hasCaptureOutput;
- (void)setHasCaptureOutput:(BOOL)arg1;
- (id)cameraLock;
- (id)zoomOplog;
- (unsigned int)lightMode;
- (BOOL)currentDeviceIsUltraWideAngleCamera;
- (void)setCurrentDeviceIsUltraWideAngleCamera:(BOOL)arg1;
- (float)cameraDefaultZoomFactor;
- (void)setCameraDefaultZoomFactor:(float)arg1;
- (BOOL)stopTimerCheck;
- (void)setStopTimerCheck:(BOOL)arg1;
- (id)switchOpt;
- (void)setSwitchOpt:(id)arg1;
- (BOOL)useNewUI;
- (void)setUseNewUI:(BOOL)arg1;
- (long long)cameraStatus;
- (void)setCameraStatus:(long long)arg1;
- (BOOL)hasTimelineObserver;
- (void)setHasTimelineObserver:(BOOL)arg1;
- (BOOL)hasReportCameraStatus;
- (void)setHasReportCameraStatus:(BOOL)arg1;
- (id)blackOpt;
- (void)setBlackOpt:(id)arg1;
- (void).cxx_destruct;
@end
