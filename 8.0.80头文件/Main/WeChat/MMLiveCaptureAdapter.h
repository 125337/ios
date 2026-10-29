@interface MMLiveCaptureAdapter : NSObject <MMLiveMangerPusherDelegate, MMLiveManagerMetricsDelegate, MMLiveManagerCaptureDelegate>
{
    id <MMLiveCaptureAdapterDelegate> _captureDelegate; // +0x8
    MMLiveManger * _liveCapture; // +0x10
}
- (void)initLiveCaptureDelegatesAndEffectManager:(id)arg1;
- (void)startCameraCaptureWithContainerView:(id)arg1;
- (void)startCameraCaptureWithContainerView:(id)arg1 useFrontCamera:(BOOL)arg2;
- (void)stopCameraCapture;
- (void)switchCamera;
- (void)switchCameraWithCompletionHandler:(id /* block */)arg1;
- (void)setFrameRate:(int)arg1;
- (void)setMaxRenderFrameRate:(int)arg1;
- (void)setFront:(BOOL)arg1;
- (void)setFaceDetect:(BOOL)arg1;
- (void)setVideoResolution:(long long)arg1;
- (void)setVideoResolution1920x1440;
- (void)setVideoResolution2560x1440;
- (void)updateVideoAspectRatio21_10:(BOOL)arg1;
- (CGSize)getCaptureVideoSize;
- (CGSize)getCaptureVideoSizeWithCroped;
- (void)setRotation:(int)arg1;
- (void)setMirror:(BOOL)arg1 isFront:(BOOL)arg2;
- (void)setRemoteMirror:(BOOL)arg1 isFront:(BOOL)arg2;
- (void)ignoreDarkFramesOnceAfterSettingConfiguration;
- (void)setEnableZoom:(BOOL)arg1;
- (void)setCameraPreviewOrientation:(long long)arg1;
- (void)setSystemRotationOrientationEnabled:(BOOL)arg1;
- (long long)systemRotationContentOrientation;
- (long long)refreshSystemRotationContentOrientation;
- (void)setCustomCameraConfigs:(id)arg1;
- (void)startViewCaptureWithView:(id)arg1;
- (void)stopViewCapture;
- (void)pauseViewCapture;
- (void)resumeViewCapture;
- (void)refreshViewCaptureConfigurations;
- (void)updateZoomScaleWithGestureScale:(double)arg1;
- (void)updateFocusAtPoint:(CGPoint)arg1;
- (id)getLiveCaptureVideoFrameWidgetManageLogic;
- (void)startCustomRender;
- (void)stopCustomRender;
- (void)liveManager:(id)arg1 didPushVideoSampleBuffer:(opaqueCMSampleBuffer *)arg2 shouldReportCaptureMetrics:(BOOL)arg3;
- (void)liveManager:(id)arg1 didFinishCollectingCaptureMetrics:(id)arg2;
- (void)liveManager:(id)arg1 didOutputSampleBufferForRender:(opaqueCMSampleBuffer *)arg2 localRenderFlipX:(BOOL)arg3;
- (void)liveManager:(id)arg1 didOutputSampleBufferForTransmit:(opaqueCMSampleBuffer *)arg2 localRenderFlipX:(BOOL)arg3;
- (void)liveManager:(id)arg1 didOutputRenderFrame:(id)arg2;
- (void)liveManager:(id)arg1 didCapturingChanged:(BOOL)arg2;
- (void)liveManager:(id)arg1 didChangedVirtualCameraCaptureDevice:(BOOL)arg2;
- (void)liveManager:(id)arg1 didRenderRotateTransitingChanged:(BOOL)arg2;
- (void)liveManager:(id)arg1 didChangeSystemRotationContentOrientation:(long long)arg2;
- (void)liveManager:(id)arg1 didOutputInitialSampleBuffer:(opaqueCMSampleBuffer *)arg2;
- (id)captureDelegate;
- (void)setCaptureDelegate:(id)arg1;
- (id)liveCapture;
- (void)setLiveCapture:(id)arg1;
- (void).cxx_destruct;
@end
