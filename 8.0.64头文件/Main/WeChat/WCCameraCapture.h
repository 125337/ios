@interface WCCameraCapture : GPUImageStillCamera
{
    BOOL _isActive; // +0xe0
    BOOL _isAudioActive; // +0xe1
    BOOL _activeQRScan; // +0xe2
    BOOL _currentDeviceIsUltraWideAngleCamera; // +0xe3
    BOOL _currentOpenAutoSwitchCamera; // +0xe4
    BOOL _autoSwitchingScanCameraLensPosition; // +0xe5
    BOOL _enableScanAutoSwitchCameraWhenFocusing; // +0xe6
    float _cameraDefaultZoomFactor; // +0xe8
    AVCaptureVideoPreviewLayer * _previewLayer; // +0xf0
    NSObject<OS_dispatch_queue> * _callbackQueue; // +0xf8
}
- (id)initWithSessionPreset:(id)arg1 frameRate:(int)arg2 enableAutoSwitchCamera:(BOOL)arg3;
- (id)adjustImage:(id)arg1;
- (void)takePictureWithFinalFilter:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)capturePreviewImageWithFinalFilter:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)startRunning;
- (void)startCameraCapture;
- (BOOL)stopCameraCapture;
- (void)focusAtPoint:(CGPoint)arg1;
- (BOOL)isSupportZoomWithFactor:(double)arg1;
- (double)zoomFactor;
- (void)setZoomFactor:(double)arg1;
- (void)setZoomFactor:(double)arg1 ignoreLimit:(BOOL)arg2 animated:(BOOL)arg3;
- (BOOL)canZoom;
- (double)maxZoomFactor;
- (void)zoom;
- (BOOL)hasMultipleCameras;
- (BOOL)switchCamera;
- (void)setCaptureSessionPreset:(id)arg1;
- (BOOL)setFlash:(long long)arg1 AndTorchMode:(long long)arg2;
- (BOOL)supportFlashlightMode;
- (long long)flashMode;
- (void)setFlashlightMode:(long long)arg1;
- (BOOL)supportTorchMode;
- (long long)torchMode;
- (void)setTorchMode:(long long)arg1;
- (void)resetExposureISO;
- (void)checkAutoSwitchCamera;
- (void)setDefaultZoomFactor;
- (double)defaultZoomFactor;
- (void)checkInitDefaultZoomFactor;
- (id)customGetCaptureDevice:(long long)arg1;
- (BOOL)enableScanAutoSwitchCameraWhenFocusing:(long long)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (double)minZoomFactor;
- (BOOL)isActive;
- (void)setIsActive:(BOOL)arg1;
- (BOOL)isAudioActive;
- (BOOL)activeQRScan;
- (void)setActiveQRScan:(BOOL)arg1;
- (id)previewLayer;
- (id)callbackQueue;
- (BOOL)currentDeviceIsUltraWideAngleCamera;
- (void)setCurrentDeviceIsUltraWideAngleCamera:(BOOL)arg1;
- (BOOL)currentOpenAutoSwitchCamera;
- (void)setCurrentOpenAutoSwitchCamera:(BOOL)arg1;
- (float)cameraDefaultZoomFactor;
- (void)setCameraDefaultZoomFactor:(float)arg1;
- (BOOL)autoSwitchingScanCameraLensPosition;
- (void)setAutoSwitchingScanCameraLensPosition:(BOOL)arg1;
- (BOOL)enableScanAutoSwitchCameraWhenFocusing;
- (void)setEnableScanAutoSwitchCameraWhenFocusing:(BOOL)arg1;
- (void).cxx_destruct;
@end
