@interface MMLiveManger : NSObject <MMAVCameraCapturerDelegate, MMVideoRenderViewDelegate, MMViewCaptureDelegate, WCLoopMetricsCollectorDelegate, MMAVCameraCapturerActionDelegate>
{
    long long _resolution; // +0x8
    CGSize _videoSize; // +0x10
    int _videoFPS; // +0x20
    int _maxRenderFPS; // +0x24
    BOOL _enableFaceDetect; // +0x28
    BOOL _isPaused; // +0x29
    BOOL _remoteFrontMirror; // +0x2a
    BOOL _remoteBackMirror; // +0x2b
    long long _renderMode; // +0x30
    BOOL _videoAspecRation21_10; // +0x38
    opaqueCMSampleBuffer * _lastSampleBufferFromViewCapture; // +0x40
    _opaque_pthread_mutex_t _compositingLock; // +0x48
    __CVBuffer * _lastCapturedPixelBuffer; // +0x88
    _opaque_pthread_mutex_t _pixelBufferLock; // +0x90
    __CVBuffer * _croppedPixelBuffer; // +0xd0
    BOOL _enableZoom; // +0xd8
    BOOL _enableTouchFocus; // +0xd9
    BOOL _enableRenderViewGestures; // +0xda
    BOOL _isMainThreadLag2024T31Enabled; // +0xdb
    BOOL _isLiveCaptureRenderRotateTransiting; // +0xdc
    BOOL _isUseWeEffectMirror; // +0xdd
    BOOL _enableRci; // +0xde
    BOOL _renderViewInRotateAnimation; // +0xdf
    BOOL _isStartCustomRender; // +0xe0
    BOOL _isResignActive; // +0xe1
    id <MMLiveMangerPusherDelegate> _pusherDelegate; // +0xe8
    id <MMLiveManagerMetricsDelegate> _metricsDelegate; // +0xf0
    id <MMLiveManagerCaptureDelegate> _captureDelegate; // +0xf8
    MMRenderVideoFrame * _mRenderVideoFrame; // +0x100
    MMWeEffectManager * _weEffectManager; // +0x108
    WCLoopMetricsCollector * _captureMetricsCollector; // +0x110
    double _aspectRatioOfCamera; // +0x118
    double _sizeRatioOfCameraToScreen; // +0x120
    double _marginXRatioOfCameraToScreen; // +0x128
    long long _centerXSideOfCameraToScreen; // +0x130
    double _centerYRatioOfCameraToScreen; // +0x138
    MMLiveMangerProxy * _liveManagerProxy; // +0x140
    MMAVCameraCapture * _cameraCapturer; // +0x148
    MMVideoRenderView * _renderView; // +0x150
    MMVideoRciRenderView * _rciRenderView; // +0x158
    MMViewCapture * _viewCapture; // +0x160
    CIContext * _compositingContext; // +0x168
    CIContext * _cropProcessContext; // +0x170
    double _zoomScale; // +0x178
    MMLiveVideoFrameReprocessPipeLine * _videoFrameReprocessPipeLine; // +0x180
    long long _expectedFrameOrientation; // +0x188
    UIImageView * _overlapImageView; // +0x190
    id /* block */ _rotateAnimationRenderRecoverCallback; // +0x198
    long long _fpsCounter; // +0x1a0
    unsigned long long _captureFrameCount; // +0x1a8
    unsigned long long _renderFrameCount; // +0x1b0
    long long _captureFps; // +0x1b8
    long long _renderFps; // +0x1c0
    unsigned long long _captureFpsStatCnt; // +0x1c8
    unsigned long long _renderFpsStatCnt; // +0x1d0
    id /* block */ _captureFpsReport; // +0x1d8
    id /* block */ _renderFpsReport; // +0x1e0
}
+ (id /* block */)createReportTimer:(long long)arg1 block:(id /* block */)arg2;
+ (id)sharedInstance;
+ (void)destroySharedInstance;
+ (opaqueCMSampleBuffer *)createSampleBufferFromPixelBuffer:(__CVBuffer *)arg1;
- (void)initCaptureStats;
- (void)updateCaptureStats;
- (void)clearCaptureStats;
- (void)initRenderStats;
- (void)updateRenderStats;
- (void)clearRenderStats;
- (id /* block */)createCaptureFpsReporter;
- (id /* block */)createRenderFpsReporter;
- (void)increaseCaptureFrameCnt;
- (void)increaseRenderFrameCnt;
- (void)increaseCaptureFpsStatCnt;
- (void)increaseRenderFpsStatCnt;
- (void)logForCaptureStatIfNeed;
- (void)logForRenderStatIfNeed;
- (id)initInternal;
- (void)initNotifications;
- (void)setWeEffectManager:(id)arg1;
- (void)setRenderView:(id)arg1;
- (void)setEnableRenderViewGestures:(BOOL)arg1;
- (id)widgetManageLogic;
- (void)onCameraCapture:(opaqueCMSampleBuffer *)arg1 mirror:(BOOL)arg2 rotation:(long long)arg3 isFront:(BOOL)arg4;
- (void)onCameraCaptureRunningChanged:(BOOL)arg1;
- (void)onAutoChangedVirtualCameraCaptureDevice:(BOOL)arg1;
- (opaqueCMSampleBuffer *)createCompositedSampleBufferWithCameraSampleBuffer:(opaqueCMSampleBuffer *)arg1 isCameraMirror:(BOOL)arg2 inScreenSampleBuffer:(opaqueCMSampleBuffer *)arg3;
- (BOOL)cropPixelBuffer:(__CVBuffer *)arg1 outPixelBuffer:(__CVBuffer *)arg2;
- (BOOL)createCropPixelBufferIfNeed:(unsigned int)arg1;
- (opaqueCMSampleBuffer *)cropSampleFrame:(opaqueCMSampleBuffer *)arg1;
- (void)sendVideoData:(opaqueCMSampleBuffer *)arg1 shouldReportCaptureMetrics:(BOOL)arg2;
- (void)notifyOutputInitialSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (void)notifyOutputSampleBufferForRender:(opaqueCMSampleBuffer *)arg1 localRenderFlipX:(BOOL)arg2;
- (void)notifyOutputSampleBufferForTransmit:(opaqueCMSampleBuffer *)arg1 localRenderFlipX:(BOOL)arg2;
- (void)notifyOutputRenderFrame:(id)arg1;
- (void)setCustomCameraConfigs:(id)arg1;
- (void)startCameraCapture;
- (void)startCameraCaptureUseFrontCamera:(BOOL)arg1;
- (void)stopCameraCapture;
- (void)switchCamera;
- (void)switchCameraWithCompletionHandler:(id /* block */)arg1;
- (void)setFrameRate:(int)arg1;
- (void)setMaxRenderFrameRate:(int)arg1;
- (void)setFront:(BOOL)arg1;
- (void)setFaceDetect:(BOOL)arg1;
- (void)setVideoResolution:(int)arg1 sampleBufferSize:(CGSize)arg2 homeOrientation:(int)arg3;
- (void)setVideoResolutionUse1920x1080:(BOOL)arg1;
- (void)setVideoResolution1920x1440;
- (void)setVideoResolution2560x1440;
- (void)updateVideoAspectRatio21_10:(BOOL)arg1;
- (CGSize)getCaptureVideoSize;
- (CGSize)getCaptureVideoSizeWithCroped;
- (BOOL)isRunning;
- (BOOL)isUsingUltraWideCamera;
- (void)setRotation:(int)arg1;
- (void)setMirror:(BOOL)arg1 isFront:(BOOL)arg2;
- (void)setRemoteMirror:(BOOL)arg1 isFront:(BOOL)arg2;
- (void)ignoreDarkFramesOnceAfterSettingConfiguration;
- (void)addUser:(id)arg1 videoView:(id)arg2;
- (int)currVideoFPS;
- (long long)getFrameInterval;
- (BOOL)checkNeedSkipRenderFrame;
- (void)setEnableZoom:(BOOL)arg1;
- (void)setZoomScale:(double)arg1;
- (void)updateZoomScaleWithGestureScale:(double)arg1;
- (void)onRenderViewPinchScale:(double)arg1;
- (void)updateFocusAtPoint:(CGPoint)arg1;
- (void)setEnableTouchFocus:(BOOL)arg1;
- (void)onRenderViewFocusAtPoint:(CGPoint)arg1;
- (void)setVideoSize:(CGSize)arg1;
- (CGSize)videoSize;
- (BOOL)isViewCapturing;
- (void)startViewCaptureWithView:(id)arg1;
- (void)stopViewCapture;
- (void)pauseViewCapture;
- (void)resumeViewCapture;
- (void)updateLastSampleBufferFromViewCapture:(opaqueCMSampleBuffer *)arg1;
- (void)viewCapture:(id)arg1 didCaptureSampleBuffer:(opaqueCMSampleBuffer *)arg2 orientation:(long long)arg3;
- (void)loopMetricsCollection:(id)arg1 didFinishCollectingMetrics:(id)arg2;
- (void)dealloc;
- (void)resume;
- (void)pause;
- (BOOL)getCurrentRenderable;
- (void)startCustomRender;
- (void)stopCustomRender;
- (void)updateForCustomRenderState;
- (void)animateRotationWithCoordinator:(id)arg1 completion:(id /* block */)arg2 renderRecoverCompletion:(id /* block */)arg3;
- (void)animateRenderViewRotationWithCoordinator:(id)arg1 completion:(id /* block */)arg2 renderRecoverCompletion:(id /* block */)arg3;
- (void)animateRCIRenderViewRotationWithCoordinator:(id)arg1 completion:(id /* block */)arg2 renderRecoverCompletion:(id /* block */)arg3;
- (void)showImageViewOverRenderViewWithSize:(CGSize)arg1 transform:(CGAffineTransform)arg2;
- (void)callAndReleaseRenderCallback;
- (void)hideOverlapImageViewIfNeeded;
- (void)checkRenderRotateTransitingChanged;
- (BOOL)getLiveCaptureRenderRotateTransiting;
- (void)updateRenderViewInRotateAnimation:(BOOL)arg1;
- (void)onBecomeActive;
- (void)onResignActive;
- (void)changeStatsState;
- (BOOL)enableStats;
- (CGSize)getVideoSize:(CGSize)arg1 homeOrientation:(long long)arg2;
- (void)setCameraPreviewOrientation:(long long)arg1;
- (void)updateWeEffectNeedMirrorIfNeeded;
- (BOOL)getWeEffectNeedMirror;
- (id)pusherDelegate;
- (void)setPusherDelegate:(id)arg1;
- (id)metricsDelegate;
- (void)setMetricsDelegate:(id)arg1;
- (id)captureDelegate;
- (void)setCaptureDelegate:(id)arg1;
- (id)mRenderVideoFrame;
- (void)setMRenderVideoFrame:(id)arg1;
- (BOOL)enableZoom;
- (BOOL)enableTouchFocus;
- (id)weEffectManager;
- (id)captureMetricsCollector;
- (void)setCaptureMetricsCollector:(id)arg1;
- (BOOL)enableRenderViewGestures;
- (BOOL)isMainThreadLag2024T31Enabled;
- (void)setIsMainThreadLag2024T31Enabled:(BOOL)arg1;
- (BOOL)isPaused;
- (BOOL)isLiveCaptureRenderRotateTransiting;
- (void)setIsLiveCaptureRenderRotateTransiting:(BOOL)arg1;
- (double)aspectRatioOfCamera;
- (void)setAspectRatioOfCamera:(double)arg1;
- (double)sizeRatioOfCameraToScreen;
- (void)setSizeRatioOfCameraToScreen:(double)arg1;
- (double)marginXRatioOfCameraToScreen;
- (void)setMarginXRatioOfCameraToScreen:(double)arg1;
- (long long)centerXSideOfCameraToScreen;
- (void)setCenterXSideOfCameraToScreen:(long long)arg1;
- (double)centerYRatioOfCameraToScreen;
- (void)setCenterYRatioOfCameraToScreen:(double)arg1;
- (id)liveManagerProxy;
- (void)setLiveManagerProxy:(id)arg1;
- (id)cameraCapturer;
- (void)setCameraCapturer:(id)arg1;
- (id)renderView;
- (void)hide_setRenderView:(id)arg1;
- (id)rciRenderView;
- (void)setRciRenderView:(id)arg1;
- (id)viewCapture;
- (void)setViewCapture:(id)arg1;
- (id)compositingContext;
- (void)setCompositingContext:(id)arg1;
- (id)cropProcessContext;
- (void)setCropProcessContext:(id)arg1;
- (double)zoomScale;
- (BOOL)isUseWeEffectMirror;
- (void)setIsUseWeEffectMirror:(BOOL)arg1;
- (id)videoFrameReprocessPipeLine;
- (void)setVideoFrameReprocessPipeLine:(id)arg1;
- (BOOL)enableRci;
- (void)setEnableRci:(BOOL)arg1;
- (long long)expectedFrameOrientation;
- (void)setExpectedFrameOrientation:(long long)arg1;
- (BOOL)renderViewInRotateAnimation;
- (void)setRenderViewInRotateAnimation:(BOOL)arg1;
- (id)overlapImageView;
- (void)setOverlapImageView:(id)arg1;
- (id /* block */)rotateAnimationRenderRecoverCallback;
- (void)setRotateAnimationRenderRecoverCallback:(id /* block */)arg1;
- (BOOL)isStartCustomRender;
- (void)setIsStartCustomRender:(BOOL)arg1;
- (long long)fpsCounter;
- (void)setFpsCounter:(long long)arg1;
- (BOOL)isResignActive;
- (void)setIsResignActive:(BOOL)arg1;
- (unsigned long long)captureFrameCount;
- (void)setCaptureFrameCount:(unsigned long long)arg1;
- (unsigned long long)renderFrameCount;
- (void)setRenderFrameCount:(unsigned long long)arg1;
- (long long)captureFps;
- (void)setCaptureFps:(long long)arg1;
- (long long)renderFps;
- (void)setRenderFps:(long long)arg1;
- (unsigned long long)captureFpsStatCnt;
- (void)setCaptureFpsStatCnt:(unsigned long long)arg1;
- (unsigned long long)renderFpsStatCnt;
- (void)setRenderFpsStatCnt:(unsigned long long)arg1;
- (id /* block */)captureFpsReport;
- (void)setCaptureFpsReport:(id /* block */)arg1;
- (id /* block */)renderFpsReport;
- (void)setRenderFpsReport:(id /* block */)arg1;
- (void).cxx_destruct;
@end
