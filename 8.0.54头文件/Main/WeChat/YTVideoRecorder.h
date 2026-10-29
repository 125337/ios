@interface YTVideoRecorder : NSObject <AVCaptureAudioDataOutputSampleBufferDelegate>
{
    AVAssetWriter * videoWriter; // +0x8
    AVAssetWriterInput * videoInput; // +0x10
    AVAssetWriterInput * audioInput; // +0x18
    AVCaptureAudioDataOutput * audioOutput; // +0x20
    AVCaptureSession * audioCaptureSession; // +0x28
    AVAssetWriterInputPixelBufferAdaptor * adaptor; // +0x30
    long long videoWidth; // +0x38
    long long videoHeight; // +0x40
    int frameCount; // +0x48
    int frameRate; // +0x4c
    BOOL isStarted; // +0x50
    NSString * videoPath; // +0x58
}
- (id)init;
- (void)startWith:(id)arg1 withWidth:(long long)arg2 withHeight:(long long)arg3 withCodecSetting:(id)arg4 withAudioSetting:(id)arg5;
- (void)encodeWith:(const Mat *)arg1;
- (void)stop:(id /* block */)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)saveToCameraRoll:(id /* block */)arg1;
- (__CVBuffer *)newPixelBufferFromCGImage:(const Mat *)arg1;
- (void).cxx_destruct;
@end

