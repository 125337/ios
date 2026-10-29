@interface CameraRecordDevice : CameraDevice <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureDataOutputSynchronizerDelegate>
{
    NSObject<OS_dispatch_queue> * videoProcessingQueue; // +0x8
    BOOL _isDepthEnabled; // +0x10
    NSString * videoFolder; // +0x18
    BOOL _isRecordVideo; // +0x20
    AVCaptureVideoPreviewLayer * _previewLayer; // +0x28
    id /* block */ _onGetGrightness; // +0x30
    id /* block */ _onGetGrightness_showLux; // +0x38
    AVCaptureDevice * _captureDevice; // +0x40
    AVCaptureDeviceInput * _captureDeviceInput; // +0x48
    AVCaptureStillImageOutput * _stillImageOutput; // +0x50
    AVCaptureVideoDataOutput * _videoOutput; // +0x58
    NSObject<OS_dispatch_queue> * _bufferQueue; // +0x60
    AVCaptureDepthDataOutput * _depthDataOutput; // +0x68
    AVCaptureDataOutputSynchronizer * _outputSynchronizer; // +0x70
    TXYAVAssetWriteManager * _writeManager; // +0x78
    long long _recordState; // +0x80
    opaqueCMFormatDescription * _outputVideoFormatDescription; // +0x88
}
- (id)initWithPosition:(long long)arg1 deep:(BOOL)arg2;
- (void)setupCaptureSession;
- (void)setUpWriter;
- (void)startRecord;
- (void)stopRecord:(id /* block */)arg1;
- (id)getCaptureDevice;
- (void)startDetectBrightness:(id /* block */)arg1;
- (void)stopDetectBrightness;
- (void)startDetectBrightness_showLux:(id /* block */)arg1;
- (void)stopDetectBrightness_showLux;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2;
- (void)setZoom:(double)arg1;
- (void)setExposureTargetBias:(double)arg1 withMode:(long long)arg2;
- (void)setWhiteBalanceGains:(double)arg1 withMode:(long long)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)appendSampleBufferWith:(id)arg1 sampleBuffer:(opaqueCMSampleBuffer *)arg2;
- (id)videoFolder;
- (id)createVideoFilePath;
- (void)execBlock:(id /* block */)arg1;
- (id)previewLayer;
- (void)setPreviewLayer:(id)arg1;
- (id /* block */)onGetGrightness;
- (void)setOnGetGrightness:(id /* block */)arg1;
- (id /* block */)onGetGrightness_showLux;
- (void)setOnGetGrightness_showLux:(id /* block */)arg1;
- (BOOL)isRecordVideo;
- (void)setIsRecordVideo:(BOOL)arg1;
- (id)captureDevice;
- (void)setCaptureDevice:(id)arg1;
- (id)captureDeviceInput;
- (void)setCaptureDeviceInput:(id)arg1;
- (id)stillImageOutput;
- (void)setStillImageOutput:(id)arg1;
- (id)videoOutput;
- (void)setVideoOutput:(id)arg1;
- (id)bufferQueue;
- (void)setBufferQueue:(id)arg1;
- (id)depthDataOutput;
- (void)setDepthDataOutput:(id)arg1;
- (id)outputSynchronizer;
- (void)setOutputSynchronizer:(id)arg1;
- (id)writeManager;
- (void)setWriteManager:(id)arg1;
- (long long)recordState;
- (void)setRecordState:(long long)arg1;
- (opaqueCMFormatDescription *)outputVideoFormatDescription;
- (void)setOutputVideoFormatDescription:(opaqueCMFormatDescription *)arg1;
- (void).cxx_destruct;
@end
