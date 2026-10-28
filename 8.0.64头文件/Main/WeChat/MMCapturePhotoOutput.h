@interface MMCapturePhotoOutput : NSObject <AVCapturePhotoCaptureDelegate>
{
    BOOL inNewApi; // +0x8
    BOOL _isTakingPhoto; // +0x9
    long long _flashLightMode; // +0x10
    AVCaptureStillImageOutput * _imageOutput; // +0x18
    AVCapturePhotoOutput * _photoOutput; // +0x20
    id /* block */ _takePhotoCallback; // +0x28
    NSLock * _lock; // +0x30
}
- (id)initWithCaptureSession:(id)arg1 delegate:(id)arg2;
- (BOOL)canUseNewPhotoOutput:(id)arg1;
- (BOOL)isUseNewApiTakePhoto;
- (long long)getPhotoQuilityPrioritizationForNewApi;
- (void)captureOutput:(id)arg1 didFinishProcessingPhoto:(id)arg2 error:(id)arg3;
- (void)capturePhotoWithCompletion:(id /* block */)arg1;
- (opaqueCMSampleBuffer *)createSampleBufferFromPixelBuffer:(__CVBuffer *)arg1;
- (BOOL)sceneChanged:(unsigned long long)arg1;
- (BOOL)canUseNewPhotoApi:(unsigned long long)arg1;
- (long long)flashLightMode;
- (void)setFlashLightMode:(long long)arg1;
- (id)imageOutput;
- (void)setImageOutput:(id)arg1;
- (id)photoOutput;
- (void)setPhotoOutput:(id)arg1;
- (BOOL)isTakingPhoto;
- (void)setIsTakingPhoto:(BOOL)arg1;
- (id /* block */)takePhotoCallback;
- (void)setTakePhotoCallback:(id /* block */)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end
