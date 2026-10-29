@interface FaceRecogCheckBrightnessLogic : NSObject <CameraVideoDeviceDelegate>
{
    BOOL _hasCheckBrightness; // +0x8
    float _lightThreshold; // +0xc
    id <FaceRecogCheckBrightnessLogicDelegate> _delegate; // +0x10
    CameraReflectDevice * _lightDetector; // +0x18
}
- (void)startCheck;
- (float)getBrightness:(opaqueCMSampleBuffer *)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 depthPixelBuffer:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (float)lightThreshold;
- (void)setLightThreshold:(float)arg1;
- (BOOL)hasCheckBrightness;
- (void)setHasCheckBrightness:(BOOL)arg1;
- (id)lightDetector;
- (void)setLightDetector:(id)arg1;
- (void).cxx_destruct;
@end
