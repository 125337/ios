@interface AVVideoDevice : MMObject <AVCaptureVideoDataOutputSampleBufferDelegate, XEffectEffectManagerDelegate>
{
    BOOL _m_usingBackCamera; // +0x8
    BOOL _enableClipBeforePreprocessing; // +0x9
    BOOL _remoteIsNoPhone; // +0xa
    BOOL _enableRci; // +0xb
    BOOL _newVideoRotateStrategyEnabled; // +0xc
    BOOL _currentFrameRotationValid; // +0xd
    BOOL _useInputPriorityMode; // +0xe
    BOOL _enableUltraWideAngleCamera; // +0xf
    BOOL _isRunning; // +0x10
    BOOL _shouldWeVisEffectIgnoreBackground; // +0x11
    BOOL _isThisTalkIlink; // +0x12
    BOOL _isVoipBeautySupported; // +0x13
    BOOL _isVoipSpatiotemporalDenosingSupported; // +0x14
    BOOL _isVoipClaritySupported; // +0x15
    BOOL _isEnableClipResamplingGPU; // +0x16
    BOOL _enable720pCapture; // +0x17
    BOOL _enableVoIPLogSwitch; // +0x18
    BOOL _hasSetEffect; // +0x19
    BOOL _isCurrentDirectionHasBlur; // +0x1a
    BOOL _newVideoRotateStrategyRequested; // +0x1b
    BOOL _videoRotateStrategyPrepared; // +0x1c
    int videoDevErrCode; // +0x20
    int videoErrCnt; // +0x24
    int mVoipBeautyCfg; // +0x28
    int _mVideoInterruptEndFlag; // +0x2c
    int _beautyMode; // +0x30
    int _gpuResNoAdditionalSize; // +0x34
    int _clipRatio; // +0x38
    int _voipBeautyBlackList; // +0x3c
    int _VoipSpatiotemporalDenosingPara; // +0x40
    int _voipClarityMode; // +0x44
    int _wevisDeviceCode; // +0x48
    int _rotation; // +0x4c
    AVCaptureSession * session; // +0x50
    AVCaptureDeviceInput * videoInput; // +0x58
    AVCaptureVideoDataOutput * videoDataOutput; // +0x60
    id <AVVideoDeviceDelegate> delegate; // +0x68
    id <AVVideoDataSource> dataSource; // +0x70
    NSRecursiveLock * m_startSessionLock; // +0x78
    id <AVVideoDeviceSessionDelegate> m_sessionDelegate; // +0x80
    char * mCameraBuf; // +0x88
    unsigned long long _workMode; // +0x90
    double _currentFramePreviewAngleDegrees; // +0x98
    double _currentFrameCaptureAngleDegrees; // +0xa0
    id <AVVideoDeviceFrameDelegate> _frameDelegate; // +0xa8
    unsigned long long _frameIndex; // +0xb0
    unsigned long long _timestampStartupAtFirst; // +0xb8
    unsigned long long _timestampRecvAtFirst; // +0xc0
    unsigned long long _countOutputFrames; // +0xc8
    unsigned long long _countDropFrames; // +0xd0
    WeVisVoipEffectMgr * _wevisEffectMgr; // +0xd8
    long long _frontFilter; // +0xe0
    long long _backFilter; // +0xe8
    CMMotionManager * _motion; // +0xf0
    AVCaptureDeviceRotationCoordinator * _rotationCoordinator; // +0xf8
    CALayer * _orientationPreviewLayer; // +0x100
    NSObject<OS_dispatch_queue> * _captureQueue; // +0x108
    XImageContext * _context; // +0x110
    CGSize _resamplingSize; // +0x118
    CGSize _cropSize; // +0x128
    CGSize _lastFrameEncodeSize; // +0x138
}
+ (id)bestFormatForDevice:(id)arg1 targetWidth:(int)arg2 targetFps:(int)arg3 preferDynamicAspectRatio:(BOOL)arg4;
+ (void)kvReportEffect:(id)arg1 roomID:(unsigned long long)arg2 roomKey:(long long)arg3 scene:(unsigned long long)arg4;
- (void)newVideoSample:(opaqueCMSampleBuffer *)arg1 withFrameIndex:(unsigned long long)arg2;
- (void)newVideoPixel:(__CVBuffer *)arg1 withFrameIndex:(unsigned long long)arg2 rgbaTexture:(id)arg3 auxiliaryInfo:(id)arg4;
- (opaqueCMSampleBuffer *)clipResamplingFrame:(opaqueCMSampleBuffer *)arg1 enableClipResampleGPU:(BOOL)arg2;
- (void)clipAndRotateWithSamplerBuffer:(opaqueCMSampleBuffer *)arg1 outputBlock:(id /* block */)arg2;
- (void)processVideoSampleBuffer:(opaqueCMSampleBuffer *)arg1 withFrameIndex:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)processSamplerBuffer:(opaqueCMSampleBuffer *)arg1 captureOutput:(id)arg2;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)newVideoRawSample:(opaqueCMSampleBuffer *)arg1 withFrameIndex:(unsigned long long)arg2;
- (int)getCaptureFps;
- (BOOL)supportsVideoFrameRate:(int)arg1 videoDevice:(id)arg2;
- (int)findNearestVideoFrameRate:(int)arg1 videoDevice:(id)arg2;
- (void)setFrameDuration;
- (void)setFlashModeOff;
- (void)setTorchModeOff;
- (id)frontFacingCamera;
- (id)backFacingCamera;
- (id)cameraWithPosition:(long long)arg1;
- (id)frontUltraWideCameraDevice;
- (id)init;
- (id)context;
- (void)setClipRatioWith:(int)arg1 enableClipBeforePreprocessing:(BOOL)arg2;
- (void)setRemoteDevice:(BOOL)arg1;
- (BOOL)get720pCaptureStatus;
- (BOOL)getVoIPLogSwitch;
- (int)getSTFilterStatus;
- (BOOL)setGPUReslution:(int)arg1;
- (void)dealloc;
- (void)setVideoDeviceSessionDelegate:(id)arg1;
- (void)setOrientationPreviewLayer:(id)arg1;
- (BOOL)shouldRequestNewVideoRotateStrategy;
- (BOOL)prepareNewVideoRotateStrategy;
- (void)activateNewVideoRotateStrategyIfReady;
- (void)disableNewVideoRotateStrategy;
- (void)applyZeroVideoRotationToConnection;
- (void)createCaptureSessionWithCameraFront:(BOOL)arg1;
- (void)setupSessionWithCameraFront:(BOOL)arg1;
- (void)_configureSessionPreset;
- (BOOL)_configureSessionInputPriorityWithFront:(BOOL)arg1;
- (BOOL)_applyBestFormatForInputPriorityWithTargetWidth:(int)arg1 targetFps:(int)arg2 preferDynamicAspectRatio:(BOOL)arg3;
- (void)onVideoError:(id)arg1;
- (void)onVideoStart:(id)arg1;
- (void)onVideoStop:(id)arg1;
- (void)onVideoInterrupt:(id)arg1;
- (void)onVideoInterruptEnd:(id)arg1;
- (void)changeToHighCapture:(int)arg1;
- (void)_changeToHighCaptureInputPriority:(int)arg1;
- (void)_changeToHighCapturePreset:(int)arg1;
- (void)_startSession;
- (void)startSession;
- (void)stopSession;
- (void)_stopSession;
- (void)toggleCamera;
- (unsigned long long)cameraCount;
- (BOOL)isCameraFront;
- (void)loadCurrentVirtualBackgroundAsset;
- (void)setVirtualBackground:(BOOL)arg1;
- (void)updateVideoFilterSetting;
- (void)_updateVideoFilterSetting;
- (unsigned long long)currentFrameRate;
- (id)currentCaptureDevice;
- (id)session;
- (void)setSession:(id)arg1;
- (id)videoInput;
- (void)setVideoInput:(id)arg1;
- (id)videoDataOutput;
- (void)setVideoDataOutput:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)m_startSessionLock;
- (void)setM_startSessionLock:(id)arg1;
- (int)videoDevErrCode;
- (void)setVideoDevErrCode:(int)arg1;
- (id)m_sessionDelegate;
- (void)setM_sessionDelegate:(id)arg1;
- (char *)mCameraBuf;
- (void)setMCameraBuf:(char *)arg1;
- (int)videoErrCnt;
- (void)setVideoErrCnt:(int)arg1;
- (int)mVoipBeautyCfg;
- (void)setMVoipBeautyCfg:(int)arg1;
- (BOOL)m_usingBackCamera;
- (void)setM_usingBackCamera:(BOOL)arg1;
- (int)mVideoInterruptEndFlag;
- (void)setMVideoInterruptEndFlag:(int)arg1;
- (unsigned long long)workMode;
- (void)setWorkMode:(unsigned long long)arg1;
- (int)beautyMode;
- (void)setBeautyMode:(int)arg1;
- (int)gpuResNoAdditionalSize;
- (void)setGpuResNoAdditionalSize:(int)arg1;
- (BOOL)enableClipBeforePreprocessing;
- (void)setEnableClipBeforePreprocessing:(BOOL)arg1;
- (int)clipRatio;
- (void)setClipRatio:(int)arg1;
- (BOOL)remoteIsNoPhone;
- (void)setRemoteIsNoPhone:(BOOL)arg1;
- (CGSize)resamplingSize;
- (void)setResamplingSize:(CGSize)arg1;
- (CGSize)cropSize;
- (void)setCropSize:(CGSize)arg1;
- (CGSize)lastFrameEncodeSize;
- (void)setLastFrameEncodeSize:(CGSize)arg1;
- (BOOL)enableRci;
- (void)setEnableRci:(BOOL)arg1;
- (BOOL)newVideoRotateStrategyEnabled;
- (void)setNewVideoRotateStrategyEnabled:(BOOL)arg1;
- (BOOL)currentFrameRotationValid;
- (void)setCurrentFrameRotationValid:(BOOL)arg1;
- (double)currentFramePreviewAngleDegrees;
- (void)setCurrentFramePreviewAngleDegrees:(double)arg1;
- (double)currentFrameCaptureAngleDegrees;
- (void)setCurrentFrameCaptureAngleDegrees:(double)arg1;
- (BOOL)useInputPriorityMode;
- (void)setUseInputPriorityMode:(BOOL)arg1;
- (BOOL)enableUltraWideAngleCamera;
- (void)setEnableUltraWideAngleCamera:(BOOL)arg1;
- (id)frameDelegate;
- (void)setFrameDelegate:(id)arg1;
- (unsigned long long)frameIndex;
- (void)setFrameIndex:(unsigned long long)arg1;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (BOOL)shouldWeVisEffectIgnoreBackground;
- (void)setShouldWeVisEffectIgnoreBackground:(BOOL)arg1;
- (BOOL)isThisTalkIlink;
- (void)setIsThisTalkIlink:(BOOL)arg1;
- (unsigned long long)timestampStartupAtFirst;
- (void)setTimestampStartupAtFirst:(unsigned long long)arg1;
- (unsigned long long)timestampRecvAtFirst;
- (void)setTimestampRecvAtFirst:(unsigned long long)arg1;
- (unsigned long long)countOutputFrames;
- (void)setCountOutputFrames:(unsigned long long)arg1;
- (unsigned long long)countDropFrames;
- (void)setCountDropFrames:(unsigned long long)arg1;
- (int)voipBeautyBlackList;
- (void)setVoipBeautyBlackList:(int)arg1;
- (BOOL)isVoipBeautySupported;
- (void)setIsVoipBeautySupported:(BOOL)arg1;
- (BOOL)isVoipSpatiotemporalDenosingSupported;
- (void)setIsVoipSpatiotemporalDenosingSupported:(BOOL)arg1;
- (int)VoipSpatiotemporalDenosingPara;
- (void)setVoipSpatiotemporalDenosingPara:(int)arg1;
- (BOOL)isVoipClaritySupported;
- (void)setIsVoipClaritySupported:(BOOL)arg1;
- (int)voipClarityMode;
- (void)setVoipClarityMode:(int)arg1;
- (BOOL)isEnableClipResamplingGPU;
- (void)setIsEnableClipResamplingGPU:(BOOL)arg1;
- (BOOL)enable720pCapture;
- (void)setEnable720pCapture:(BOOL)arg1;
- (BOOL)enableVoIPLogSwitch;
- (void)setEnableVoIPLogSwitch:(BOOL)arg1;
- (id)wevisEffectMgr;
- (void)setWevisEffectMgr:(id)arg1;
- (int)wevisDeviceCode;
- (void)setWevisDeviceCode:(int)arg1;
- (long long)frontFilter;
- (void)setFrontFilter:(long long)arg1;
- (long long)backFilter;
- (void)setBackFilter:(long long)arg1;
- (BOOL)hasSetEffect;
- (void)setHasSetEffect:(BOOL)arg1;
- (BOOL)isCurrentDirectionHasBlur;
- (void)setIsCurrentDirectionHasBlur:(BOOL)arg1;
- (int)rotation;
- (void)setRotation:(int)arg1;
- (id)motion;
- (void)setMotion:(id)arg1;
- (id)rotationCoordinator;
- (void)setRotationCoordinator:(id)arg1;
- (id)orientationPreviewLayer;
- (BOOL)newVideoRotateStrategyRequested;
- (void)setNewVideoRotateStrategyRequested:(BOOL)arg1;
- (BOOL)videoRotateStrategyPrepared;
- (void)setVideoRotateStrategyPrepared:(BOOL)arg1;
- (id)captureQueue;
- (void)setCaptureQueue:(id)arg1;
- (void)setContext:(id)arg1;
- (void).cxx_destruct;
@end
