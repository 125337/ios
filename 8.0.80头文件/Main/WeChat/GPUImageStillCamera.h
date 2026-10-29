@interface GPUImageStillCamera : GPUImageVideoCamera
{
    AVCaptureStillImageOutput * photoOutput; // +0xe0
    BOOL requiresFrontCameraTextureCacheCorruptionWorkaround; // +0xe8
    NSDictionary * _currentCaptureMetadata; // +0xf0
    double _jpegCompressionQuality; // +0xf8
}
- (id)initWithSessionPreset:(id)arg1 cameraPosition:(long long)arg2 useCustomCaptureDevice:(BOOL)arg3;
- (id)init;
- (id)initWithSessionPreset:(id)arg1 cameraPosition:(long long)arg2;
- (void)removeInputsAndOutputs;
- (void)capturePhotoAsSampleBufferWithCompletionHandler:(id /* block */)arg1;
- (void)capturePhotoAsImageProcessedUpToFilter:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)capturePhotoAsImageProcessedUpToFilter:(id)arg1 withOrientation:(long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)capturePhotoAsJPEGProcessedUpToFilter:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)capturePhotoAsJPEGProcessedUpToFilter:(id)arg1 withOrientation:(long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)capturePhotoAsPNGProcessedUpToFilter:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)capturePhotoAsPNGProcessedUpToFilter:(id)arg1 withOrientation:(long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)capturePhotoProcessedUpToFilter:(id)arg1 withImageOnGPUHandler:(id /* block */)arg2;
- (id)currentCaptureMetadata;
- (double)jpegCompressionQuality;
- (void)setJpegCompressionQuality:(double)arg1;
- (void).cxx_destruct;
@end
