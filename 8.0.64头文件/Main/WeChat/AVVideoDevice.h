@interface AVVideoDevice : MMObject <AVCaptureVideoDataOutputSampleBufferDelegate, XEffectEffectManagerDelegate>
{
    BOOL _m_usingBackCamera; // +0x8
    BOOL _enableClipBeforePreprocessing; // +0x9
    BOOL _remoteIsNoPhone; // +0xa
    BOOL _enableRci; // +0xb
    BOOL _isRunning; // +0xc
    BOOL _shouldWeVisEffectIgnoreBackground; // +0xd
    BOOL _isThisTalkIlink; // +0xe
    BOOL _isVoipBeautySupported; // +0xf
    BOOL _isVoipSpatiotemporalDenosingSupported; // +0x10
    BOOL _isVoipClaritySupported; // +0x11
    BOOL _isEnableClipResamplingGPU; // +0x12
    BOOL _enable720pCapture; // +0x13
    BOOL _enableVoIPLogSwitch; // +0x14
    BOOL _hasSetEffect; // +0x15
    BOOL _isCurrentDirectionHasBlur; // +0x16
    int videoDevErrCode; // +0x18
    int videoErrCnt; // +0x1c
    int mVoipBeautyCfg; // +0x20
    int _mVideoInterruptEndFlag; // +0x24
    int _workMode; // +0x28
    int _beautyMode; // +0x2c
    int _gpuResNoAdditionalSize; // +0x30
    int _clipRatio; // +0x34
    int _voipBeautyBlackList; // +0x38
    int _VoipSpatiotemporalDenosingPara; // +0x3c
    int _voipClarityMode; // +0x40
    int _wevisDeviceCode; // +0x44
    int _rotation; // +0x48
    AVCaptureSession * session; // +0x50
    AVCaptureDeviceInput * videoInput; // +0x58
    AVCaptureVideoDataOutput * videoDataOutput; // +0x60
    id <AVVideoDeviceDelegate> delegate; // +0x68
    id <AVVideoDataSource> dataSource; // +0x70
    NSRecursiveLock * m_startSessionLock; // +0x78
    id <AVVideoDeviceSessionDelegate> m_sessionDelegate; // +0x80
    char * mCameraBuf; // +0x88
    id <AVVideoDeviceFrameDelegate> _frameDelegate; // +0x90
    unsigned long long _frameIndex; // +0x98
    unsigned long long _timestampStartupAtFirst; // +0xa0
    unsigned long long _timestampRecvAtFirst; // +0xa8
    unsigned long long _countOutputFrames; // +0xb0
    unsigned long long _countDropFrames; // +0xb8
    WeVisVoipEffectMgr * _wevisEffectMgr; // +0xc0
    long long _frontFilter; // +0xc8
    long long _backFilter; // +0xd0
    CMMotionManager * _motion; // +0xd8
    NSObject<OS_dispatch_queue> * _captureQueue; // +0xe0
    XImageContext * _context; // +0xe8
    CGSize _resamplingSize; // +0xf0
    CGSize _cropSize; // +0x100
    CGSize _lastFrameEncodeSize; // +0x110
}
+ (void)kvReportEffect:(id)arg1 roomID:(unsigned long long)arg2 roomKey:(long long)arg3 scene:(int)arg4;
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
- (void)setupSessionWithCameraFront:(BOOL)arg1;
- (void)onVideoError:(id)arg1;
- (void)onVideoStart:(id)arg1;
- (void)onVideoStop:(id)arg1;
- (void)onVideoInterrupt:(id)arg1;
- (void)onVideoInterruptEnd:(id)arg1;
- (void)changeToHighCapture:(int)arg1;
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
- (int)workMode;
- (void)setWorkMode:(int)arg1;
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
- (id)captureQueue;
- (void)setCaptureQueue:(id)arg1;
- (void)setContext:(id)arg1;
- (void).cxx_destruct;
@end
