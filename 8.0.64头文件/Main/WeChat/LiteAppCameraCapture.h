@interface LiteAppCameraCapture : GPUImageStillCamera
{
    BOOL _isActive; // +0xe0
    BOOL _isAudioActive; // +0xe1
    BOOL _activeQRScan; // +0xe2
    AVCaptureVideoPreviewLayer * _previewLayer; // +0xe8
    NSObject<OS_dispatch_queue> * _callbackQueue; // +0xf0
}
- (id)initWithPreset:(id)arg1;
- (id)initWithSessionPreset:(id)arg1 frameRate:(int)arg2;
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
- (double)minZoomFactor;
- (BOOL)isActive;
- (void)setIsActive:(BOOL)arg1;
- (BOOL)isAudioActive;
- (BOOL)activeQRScan;
- (void)setActiveQRScan:(BOOL)arg1;
- (id)previewLayer;
- (id)callbackQueue;
- (void).cxx_destruct;
@end
