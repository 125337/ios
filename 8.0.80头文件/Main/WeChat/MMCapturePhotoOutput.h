@interface MMCapturePhotoOutput : NSObject <AVCapturePhotoCaptureDelegate>
{
    BOOL inNewApi; // +0x8
    BOOL _isAutoMacroSwitchEnabled; // +0x9
    BOOL _isTakingPhoto; // +0xa
    BOOL _isAutoMacroSwitchFunctionEnabled; // +0xb
    NSArray * _constituentDevices; // +0x10
    long long _flashLightMode; // +0x18
    id /* block */ _didCapturePhotoBlock; // +0x20
    AVCaptureStillImageOutput * _imageOutput; // +0x28
    AVCapturePhotoOutput * _photoOutput; // +0x30
    id /* block */ _takePhotoCallback; // +0x38
    NSLock * _lock; // +0x40
    AVCaptureSession * _captureSession; // +0x48
    long long _captureGeneration; // +0x50
    long long _activePhotoSettingsID; // +0x58
    id /* block */ _takePhotoUserCompletion; // +0x60
    long long _highestPhotoWidth; // +0x68
    long long _highestPhotoHeight; // +0x70
}
- (id)initWithCaptureSession:(id)arg1 delegate:(id)arg2 isAutoMacroSwitchFunctionEnabled:(BOOL)arg3;
- (BOOL)canUseNewPhotoOutput:(id)arg1;
- (BOOL)isUseNewApiTakePhoto;
- (void)reportTakePhotoFailWithFailBranch:(long long)arg1 error:(id)arg2;
- (long long)getPhotoQuilityPrioritizationForNewApi;
- (void)armNoCallbackTimeoutGuardWithSubmitTime:(double)arg1;
- (void)handleNoCallbackTimeoutWithGeneration:(long long)arg1 submitTime:(double)arg2 timeoutMs:(long long)arg3;
- (BOOL)isHighestPhotoResolutionConfigEnabled;
- (id)highestPhotoDimensionsDescription:(struct)arg1;
- (id)activeVideoDevice;
- (struct)highestSupportedPhotoDimensions;
- (struct)smallestSupportedPhotoDimensions;
- (void)configureHighestPhotoResolutionForPhotoOutput;
- (BOOL)applyHighestPhotoResolutionToSettings:(id)arg1;
- (void)captureOutput:(id)arg1 willBeginCaptureForResolvedSettings:(id)arg2;
- (void)captureOutput:(id)arg1 willCapturePhotoForResolvedSettings:(id)arg2;
- (void)captureOutput:(id)arg1 didCapturePhotoForResolvedSettings:(id)arg2;
- (void)captureOutput:(id)arg1 didFinishCaptureForResolvedSettings:(id)arg2 error:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishProcessingPhoto:(id)arg2 error:(id)arg3;
- (void)handleDidFinishProcessingPhoto:(id)arg1 output:(id)arg2 error:(id)arg3;
- (void)capturePhotoWithCompletion:(id /* block */)arg1;
- (opaqueCMSampleBuffer *)createSampleBufferFromPixelBuffer:(__CVBuffer *)arg1;
- (BOOL)sceneChanged:(unsigned long long)arg1;
- (BOOL)canUseNewPhotoApi:(unsigned long long)arg1;
- (void)setVirtualDeviceConstituentPhotoDeliveryEnabled:(BOOL)arg1;
- (BOOL)addSelfToSession:(id)arg1;
- (void)removeSelfToSession:(id)arg1;
- (BOOL)isAutoMacroSwitchEnabled;
- (void)setIsAutoMacroSwitchEnabled:(BOOL)arg1;
- (id)constituentDevices;
- (void)setConstituentDevices:(id)arg1;
- (long long)flashLightMode;
- (void)setFlashLightMode:(long long)arg1;
- (id /* block */)didCapturePhotoBlock;
- (void)setDidCapturePhotoBlock:(id /* block */)arg1;
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
- (BOOL)isAutoMacroSwitchFunctionEnabled;
- (void)setIsAutoMacroSwitchFunctionEnabled:(BOOL)arg1;
- (id)captureSession;
- (void)setCaptureSession:(id)arg1;
- (long long)captureGeneration;
- (void)setCaptureGeneration:(long long)arg1;
- (long long)activePhotoSettingsID;
- (void)setActivePhotoSettingsID:(long long)arg1;
- (id /* block */)takePhotoUserCompletion;
- (void)setTakePhotoUserCompletion:(id /* block */)arg1;
- (long long)highestPhotoWidth;
- (void)setHighestPhotoWidth:(long long)arg1;
- (long long)highestPhotoHeight;
- (void)setHighestPhotoHeight:(long long)arg1;
- (void).cxx_destruct;
@end
