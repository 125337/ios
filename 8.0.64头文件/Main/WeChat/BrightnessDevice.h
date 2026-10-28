@interface BrightnessDevice : NSObject
{
    float _brightnessValue; // +0x8
    id <OnGetBrightnessInner> _delegate; // +0x10
    NSObject<OS_dispatch_queue> * _videoProcessingQueue; // +0x18
    AVCaptureSession * _session; // +0x20
}
- (void)startLightSensitive;
- (void)stopLightSensitive;
- (float)getBrightness;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)videoProcessingQueue;
- (void)setVideoProcessingQueue:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (float)brightnessValue;
- (void)setBrightnessValue:(float)arg1;
- (void).cxx_destruct;
@end
