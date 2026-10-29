@interface CvVideoCamera : CvAbstractCamera <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    AVCaptureVideoDataOutput * videoDataOutput; // +0x60
    NSObject<OS_dispatch_queue> * videoDataOutputQueue; // +0x68
    CALayer * customPreviewLayer; // +0x70
    BOOL grayscaleMode; // +0x78
    BOOL recordVideo; // +0x79
    BOOL rotateVideo; // +0x7a
    AVAssetWriterInput * recordAssetWriterInput; // +0x80
    AVAssetWriterInputPixelBufferAdaptor * recordPixelBufferAdaptor; // +0x88
    AVAssetWriter * recordAssetWriter; // +0x90
    struct lastSampleTime; // +0x98
    int recordingCountDown; // +0xb0
    id <CvVideoCameraDelegate> delegate; // +0xb8
}
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
- (id)delegate;
- (void)setDelegate:(id)arg1;
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

