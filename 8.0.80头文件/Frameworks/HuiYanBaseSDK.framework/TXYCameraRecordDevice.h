@interface TXYCameraRecordDevice : TXYCameraDevice <AVCaptureFileOutputRecordingDelegate, AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureDataOutputSynchronizerDelegate>
{
    NSString * videoFolder; // +0x8
    NSString * mySessionPreset; // +0x10
    BOOL _isDepthEnabled; // +0x18
    BOOL _isRecordVideo; // +0x19
    BOOL _needCallback; // +0x1a
    BOOL _useCurrentScreenSizeRecord; // +0x1b
    BOOL _isReceiveBuffer; // +0x1c
    BOOL _ultra; // +0x1d
    BOOL _observerWbAdjusting; // +0x1e
    NSString * _videoFolderName; // +0x20
    AVCaptureDevice * _captureDevice; // +0x28
    AVCaptureVideoPreviewLayer * _previewLayer; // +0x30
    id /* block */ _onGetGrightness; // +0x38
    id /* block */ _onGetGrightness_showLux; // +0x40
    double _deviceTimeout; // +0x48
    unsigned long long _recoredQuality; // +0x50
    long long _frameRate; // +0x58
    long long _bitRate; // +0x60
    AVCaptureDeviceInput * _captureDeviceInput; // +0x68
    AVCaptureStillImageOutput * _stillImageOutput; // +0x70
    AVCaptureVideoDataOutput * _videoOutput; // +0x78
    NSTimer * _countDownTimer; // +0x80
    NSObject<OS_dispatch_queue> * _bufferQueue; // +0x88
    NSObject<OS_dispatch_queue> * _videoProcessingQueue; // +0x90
    TXYAVAssetWriteManager * _writeManager; // +0x98
    long long _recordState; // +0xa0
    opaqueCMFormatDescription * _outputVideoFormatDescription; // +0xa8
    AVCaptureDepthDataOutput * _depthDataOutput; // +0xb0
    AVCaptureDataOutputSynchronizer * _outputSynchronizer; // +0xb8
    id /* block */ _wbAdjustingCallback; // +0xc0
}
- (id)videoProcessingQueue;
- (id)bufferQueue;
- (id)getCaptureDevice;
- (id)initWithPosition:(long long)arg1 withSessionPreset:(id)arg2 delegate:(id)arg3 deep:(BOOL)arg4 ultra:(BOOL)arg5;
- (void)setupCaptureSession;
- (void)setUpWriter;
- (void)startDevice;
- (void)startRecord;
- (void)startRecord:(BOOL)arg1 wbAdjustingCallback:(id /* block */)arg2;
- (void)stopRecord:(id /* block */)arg1;
- (void)takePictureWithSucc:(id /* block */)arg1 withFailure:(id /* block */)arg2;
- (void)changeOrientation:(long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_applyVideoRotationAngle:(double)arg1;
- (void)_applyVideoOrientation:(long long)arg1;
- (long long)_videoOrientationForInterfaceOrientation:(long long)arg1;
- (double)_rotationAngleForInterfaceOrientation:(long long)arg1;
- (void)dealloc;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)startDetectBrightness:(id /* block */)arg1;
- (void)stopDetectBrightness;
- (void)startDetectBrightness_showLux:(id /* block */)arg1;
- (void)stopDetectBrightness_showLux;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (void)appendSampleBufferWith:(id)arg1 sampleBuffer:(opaqueCMSampleBuffer *)arg2;
- (void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2;
- (void)onDeviceErrorWithType:(unsigned long long)arg1 errMsg:(id)arg2;
- (void)onDeviceCallback:(unsigned long long)arg1 errType:(unsigned long long)arg2 msg:(id)arg3;
- (id)videoFolder;
- (void)clearFile;
- (id)createVideoFilePath;
- (void)startSystemCameraDetection;
- (void)startDownTimerWithTimeoutms:(long long)arg1;
- (void)stopDownTimer;
- (void)onTimeoutAction;
- (void)updatePerset:(id)arg1;
- (void)setExposureMode:(long long)arg1;
- (void)setExposureTargetBias:(double)arg1 withMode:(long long)arg2;
- (void)setWhiteBalanceGains:(double)arg1 withMode:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)setZoom:(double)arg1;
- (void)setExposureTargetBias:(double)arg1 expMode:(long long)arg2 needChangeExposure:(BOOL)arg3 wbains:(double)arg4 wbMode:(long long)arg5 needChangeWhiteBalance:(BOOL)arg6 zoom:(double)arg7 needChangeZoom:(BOOL)arg8 handler:(id /* block */)arg9;
- (void)setWhiteBalanceMode:(long long)arg1;
- (CGSize)sizeForPreset:(id)arg1;
- (void)setFlashMode:(int)arg1;
- (id)videoFolderName;
- (void)setVideoFolderName:(id)arg1;
- (id)captureDevice;
- (void)setCaptureDevice:(id)arg1;
- (id)previewLayer;
- (void)setPreviewLayer:(id)arg1;
- (id /* block */)onGetGrightness;
- (void)setOnGetGrightness:(id /* block */)arg1;
- (id /* block */)onGetGrightness_showLux;
- (void)setOnGetGrightness_showLux:(id /* block */)arg1;
- (BOOL)isRecordVideo;
- (void)setIsRecordVideo:(BOOL)arg1;
- (BOOL)needCallback;
- (void)setNeedCallback:(BOOL)arg1;
- (double)deviceTimeout;
- (void)setDeviceTimeout:(double)arg1;
- (BOOL)useCurrentScreenSizeRecord;
- (void)setUseCurrentScreenSizeRecord:(BOOL)arg1;
- (unsigned long long)recoredQuality;
- (void)setRecoredQuality:(unsigned long long)arg1;
- (long long)frameRate;
- (void)setFrameRate:(long long)arg1;
- (long long)bitRate;
- (void)setBitRate:(long long)arg1;
- (id)captureDeviceInput;
- (void)setCaptureDeviceInput:(id)arg1;
- (id)stillImageOutput;
- (void)setStillImageOutput:(id)arg1;
- (id)videoOutput;
- (void)setVideoOutput:(id)arg1;
- (id)countDownTimer;
- (void)setCountDownTimer:(id)arg1;
- (BOOL)isReceiveBuffer;
- (void)setIsReceiveBuffer:(BOOL)arg1;
- (BOOL)ultra;
- (void)setUltra:(BOOL)arg1;
- (void)setBufferQueue:(id)arg1;
- (void)setVideoProcessingQueue:(id)arg1;
- (id)writeManager;
- (void)setWriteManager:(id)arg1;
- (long long)recordState;
- (void)setRecordState:(long long)arg1;
- (opaqueCMFormatDescription *)outputVideoFormatDescription;
- (void)setOutputVideoFormatDescription:(opaqueCMFormatDescription *)arg1;
- (id)depthDataOutput;
- (void)setDepthDataOutput:(id)arg1;
- (id)outputSynchronizer;
- (void)setOutputSynchronizer:(id)arg1;
- (BOOL)observerWbAdjusting;
- (void)setObserverWbAdjusting:(BOOL)arg1;
- (id /* block */)wbAdjustingCallback;
- (void)setWbAdjustingCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
