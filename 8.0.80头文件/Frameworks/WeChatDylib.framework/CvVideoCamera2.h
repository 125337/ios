@interface CvVideoCamera2 : CvAbstractCamera2 <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    int recordingCountDown; // +0x8
    id <CvVideoCameraDelegate2> _delegate; // +0x10
    NSObject<OS_dispatch_queue> * videoDataOutputQueue; // +0x18
    struct lastSampleTime; // +0x20
    BOOL _grayscaleMode; // +0x38
    BOOL _recordVideo; // +0x39
    BOOL _rotateVideo; // +0x3a
    AVAssetWriterInput * _recordAssetWriterInput; // +0x40
    AVAssetWriterInputPixelBufferAdaptor * _recordPixelBufferAdaptor; // +0x48
    AVAssetWriter * _recordAssetWriter; // +0x50
    CALayer * _customPreviewLayer; // +0x58
    AVCaptureVideoDataOutput * _videoDataOutput; // +0x60
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
- (id)customPreviewLayer;
- (void)setCustomPreviewLayer:(id)arg1;
- (id)videoDataOutput;
- (void)setVideoDataOutput:(id)arg1;
- (void).cxx_destruct;
@end
