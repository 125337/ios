@interface CameraRecordDevice : CameraDevice <AVCaptureFileOutputRecordingDelegate, AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureDataOutputSynchronizerDelegate>
{
    AVCaptureMovieFileOutput * movieFileOutput; // +0x8
    NSObject<OS_dispatch_queue> * videoProcessingQueue; // +0x10
    BOOL _isDepthEnabled; // +0x18
    AVCaptureVideoPreviewLayer * _previewLayer; // +0x20
    id /* block */ _onGetGrightness; // +0x28
    id /* block */ _onGetGrightness_showLux; // +0x30
    AVCaptureDevice * _captureDevice; // +0x38
    AVCaptureDeviceInput * _captureDeviceInput; // +0x40
    AVCaptureStillImageOutput * _stillImageOutput; // +0x48
    AVCaptureVideoDataOutput * _videoOutput; // +0x50
    NSObject<OS_dispatch_queue> * _bufferQueue; // +0x58
    AVCaptureDepthDataOutput * _depthDataOutput; // +0x60
    AVCaptureDataOutputSynchronizer * _outputSynchronizer; // +0x68
}
- (id)initWithPosition:(long long)arg1 deep:(BOOL)arg2;
- (id)getCaptureDevice;
- (void)setupCaptureSession;
- (void)startRecord;
- (void)stopRecord;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)startDetectBrightness:(id /* block */)arg1;
- (void)stopDetectBrightness;
- (void)startDetectBrightness_showLux:(id /* block */)arg1;
- (void)stopDetectBrightness_showLux;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2;
- (id)previewLayer;
- (void)setPreviewLayer:(id)arg1;
- (id /* block */)onGetGrightness;
- (void)setOnGetGrightness:(id /* block */)arg1;
- (id /* block */)onGetGrightness_showLux;
- (void)setOnGetGrightness_showLux:(id /* block */)arg1;
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
- (void).cxx_destruct;
@end
