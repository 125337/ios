@interface TXDeviceManager : NSObject
{
    weak_ptr<liteav::manager::DeviceManager> deviceManager_; // +0x8
    id /* block */ _micTestBlock; // +0x18
    id /* block */ _speakerTestBlock; // +0x20
}
- (void)setInternelDeviceManager:(weak_ptr<liteav::manager::DeviceManager>)arg1;
- (BOOL)isFrontCamera;
- (long long)switchCamera:(BOOL)arg1;
- (BOOL)isCameraZoomSupported;
- (double)getCameraZoomMaxRatio;
- (long long)setCameraZoomRatio:(double)arg1;
- (BOOL)isAutoFocusEnabled;
- (long long)enableCameraAutoFocus:(BOOL)arg1;
- (long long)setCameraFocusPosition:(CGPoint)arg1;
- (BOOL)isCameraTorchSupported;
- (long long)enableCameraTorch:(BOOL)arg1;
- (long long)setAudioRoute:(long long)arg1;
- (long long)setSystemVolumeType:(long long)arg1;
- (void)onTestMicVolume:(unsigned int)arg1;
- (void)onTestSpeakerVolume:(unsigned int)arg1;
- (id /* block */)micTestBlock;
- (void)setMicTestBlock:(id /* block */)arg1;
- (id /* block */)speakerTestBlock;
- (void)setSpeakerTestBlock:(id /* block */)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

