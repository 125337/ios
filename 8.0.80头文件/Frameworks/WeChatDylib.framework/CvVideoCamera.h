@interface CvVideoCamera : CvAbstractCamera <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    AVCaptureVideoDataOutput * videoDataOutput; // +0x18
    NSObject<OS_dispatch_queue> * videoDataOutputQueue; // +0x20
    CALayer * customPreviewLayer; // +0x28
    struct lastSampleTime; // +0x30
    int recordingCountDown; // +0x48
    id <CvVideoCameraDelegate> _delegate; // +0x50
    BOOL grayscaleMode; // +0x58
    BOOL recordVideo; // +0x59
    BOOL rotateVideo; // +0x5a
    AVAssetWriterInput * recordAssetWriterInput; // +0x60
    AVAssetWriterInputPixelBufferAdaptor * recordPixelBufferAdaptor; // +0x68
    AVAssetWriter * recordAssetWriter; // +0x70
}
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithParentView:(id)arg1;
- (void)start;
- (void)stop;
- (void)adjustLayoutToInterfaceOrientation:(long long)arg1;
- (void)layoutPreviewLayer;
- (void)createVideoDataOutput;
- (void)createVideoFileOutput;
- (void)createCaptureOutput;
- (void)createCustomVideoPreview;
- (__CVBuffer *)pixelBufferFromCGImage:(CGImage *)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)updateOrientation;
- (void)saveVideo;
- (id)videoFileURL;
- (id)videoFileString;
- (BOOL)grayscaleMode;
- (void)setGrayscaleMode:(BOOL)arg1;
- (id)customPreviewLayer;
- (void)setCustomPreviewLayer:(id)arg1;
- (id)videoDataOutput;
- (void)setVideoDataOutput:(id)arg1;
- (BOOL)recordVideo;
- (void)setRecordVideo:(BOOL)arg1;
- (BOOL)rotateVideo;
- (void)setRotateVideo:(BOOL)arg1;
- (id)recordAssetWriterInput;
- (void)setRecordAssetWriterInput:(id)arg1;
- (id)recordPixelBufferAdaptor;
- (void)setRecordPixelBufferAdaptor:(id)arg1;
- (id)recordAssetWriter;
- (void)setRecordAssetWriter:(id)arg1;
@end
