@interface MMAVCameraCapture : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureMetadataOutputObjectsDelegate>
{
    NSObject<OS_dispatch_semaphore> * _frameRenderingSemaphore; // +0x8
    BOOL _front; // +0x10
    BOOL _isCapturing; // +0x11
    unsigned long long _lastDetectedTime; // +0x18
    unsigned long long _captureFrameCount; // +0x20
    double _presetWidth; // +0x28
    double _presetHeight; // +0x30
    long long _resolution; // +0x38
    BOOL _isFrontMirror; // +0x40
    BOOL _isBackMirror; // +0x41
    unsigned int _videoErrCnt; // +0x44
    BOOL _isFrontStable; // +0x48
    BOOL _isBackStable; // +0x49
    BOOL _isAutoExposure; // +0x4a
    BOOL _isAutoWhiteBalance; // +0x4b
    BOOL _ignoreDarkFramesOnce; // +0x4c
    double _lastExposureTime; // +0x50
    double _lastISOSpeedRatings; // +0x58
    BOOL _loggedInvalidFrame; // +0x60
    BOOL _faceDetect; // +0x61
    BOOL _allowCompressed; // +0x62
    BOOL _currentEnableAutoSwitchCamera; // +0x63
    BOOL _currentVirtualDeviceIsUltraWideCamera; // +0x64
    unsigned int _framerate; // +0x68
    id <MMAVCameraCapturerDelegate> _delegate; // +0x70
    id <MMAVCameraCapturerActionDelegate> _actionDelegate; // +0x78
    double _zoomScale; // +0x80
    long long _cameraPreviewOrientation; // +0x88
    long long _rotation; // +0x90
    WCLoopMetricsCollector * _captureMetricsCollector; // +0x98
    double _autoSwitchingScanCameraLensPosition; // +0xa0
    AVCaptureSession * _captureSession; // +0xa8
    AVCaptureDevice * _inputCamera; // +0xb0
    AVCaptureConnection * _connection; // +0xb8
    AVCaptureDeviceInput * _captureInput; // +0xc0
    AVCaptureVideoDataOutput * _captureOutput; // +0xc8
    NSObject<OS_dispatch_queue> * _cameraProcessingQueue; // +0xd0
    NSObject<OS_dispatch_queue> * _captureQueue; // +0xd8
    long long _position; // +0xe0
    AVCaptureVideoPreviewLayer * _prevLayer; // +0xe8
    long long _interfaceOritation; // +0xf0
    AVCaptureMetadataOutput * _metaOutput; // +0xf8
    CGSize _videoSize; // +0x100
}
- (void)runSyncOnCameraProcessingQueue:(id /* block */)arg1;
- (void)runAsyncOnCameraProcessingQueue:(id /* block */)arg1;
- (id)init;
- (void)setFaceDetect:(BOOL)arg1;
- (id)frontCamera;
- (id)cameraWithPosition:(long long)arg1;
- (BOOL)isAutoSwitchCameraEnabled;
- (double)defaultSwitchZoomFactor;
- (BOOL)isAutoSwitchCameraDeviceEnabled;
- (void)checkAutoSwitchCamera;
- (void)handleUIOrientationChanged:(id)arg1;
- (void)onVideoError:(id)arg1;
- (void)onVideoStart:(id)arg1;
- (void)onVideoStop:(id)arg1;
- (void)onVideoInterrupt:(id)arg1;
- (void)onVideoInterruptEnd:(id)arg1;
- (void)startCapture;
- (void)restartCapture;
- (void)startCaptureUseFrontCamera:(BOOL)arg1;
- (unsigned int)findSuitableFormatForOutput:(id)arg1;
- (void)initCameraCapture;
- (void)setRelativeVideoOrientation;
- (void)stopCapture;
- (void)stopCaptureWithCompleteBlock:(id /* block */)arg1;
- (void)setCameraPreviewOrientation:(long long)arg1;
- (int)calculateRotation;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)dealloc;
- (void)removeInputsAndOutputs;
- (BOOL)isRunning;
- (void)setFrameRate:(int)arg1;
- (BOOL)supportsVideoFrameRate:(long long)arg1;
- (int)findNearestVideoFrameRate:(int)arg1 videoDevice:(id)arg2;
- (void)switchCamera;
- (void)switchCameraWithCompletionHandler:(id /* block */)arg1;
- (void)setFront:(BOOL)arg1 withCompletionHandler:(id /* block */)arg2;
- (BOOL)rotateCamera;
- (void)setZoomScale:(double)arg1;
- (void)setZoomScale:(double)arg1 ignoreLimit:(BOOL)arg2 animated:(BOOL)arg3;
- (double)defaultZoomScale;
- (BOOL)setResolution:(long long)arg1;
- (BOOL)setSessionPreset:(id)arg1;
- (BOOL)setResolutionWithDevice:(id)arg1 dimension:(CGSize)arg2;
- (void)setRotation:(long long)arg1;
- (void)setFocusPosition:(CGPoint)arg1;
- (void)resetInterestPoint:(CGPoint)arg1 monitorSubjectAreaChange:(BOOL)arg2;
- (CGPoint)devicePointForPoint:(CGPoint)arg1;
- (void)setVideoSize:(CGSize)arg1;
- (void)setMirror:(BOOL)arg1 isFront:(BOOL)arg2;
- (void)setVideoStable:(BOOL)arg1 isFront:(BOOL)arg2;
- (void)setAutoExposure:(BOOL)arg1;
- (void)setAutoWhiteBalance:(BOOL)arg1;
- (void)ignoreDarkFramesOnceAfterSettingConfiguration;
- (BOOL)isCurrentFront;
- (void)setAllowCompressed:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (unsigned int)framerate;
- (void)setFramerate:(unsigned int)arg1;
- (double)zoomScale;
- (BOOL)faceDetect;
- (long long)cameraPreviewOrientation;
- (long long)rotation;
- (CGSize)videoSize;
- (id)captureMetricsCollector;
- (void)setCaptureMetricsCollector:(id)arg1;
- (BOOL)allowCompressed;
- (BOOL)currentEnableAutoSwitchCamera;
- (void)setCurrentEnableAutoSwitchCamera:(BOOL)arg1;
- (double)autoSwitchingScanCameraLensPosition;
- (void)setAutoSwitchingScanCameraLensPosition:(double)arg1;
- (BOOL)currentVirtualDeviceIsUltraWideCamera;
- (void)setCurrentVirtualDeviceIsUltraWideCamera:(BOOL)arg1;
- (id)captureSession;
- (void)setCaptureSession:(id)arg1;
- (id)inputCamera;
- (void)setInputCamera:(id)arg1;
- (id)connection;
- (void)setConnection:(id)arg1;
- (id)captureInput;
- (void)setCaptureInput:(id)arg1;
- (id)captureOutput;
- (void)setCaptureOutput:(id)arg1;
- (id)cameraProcessingQueue;
- (void)setCameraProcessingQueue:(id)arg1;
- (id)captureQueue;
- (void)setCaptureQueue:(id)arg1;
- (long long)position;
- (void)setPosition:(long long)arg1;
- (id)prevLayer;
- (void)setPrevLayer:(id)arg1;
- (long long)interfaceOritation;
- (void)setInterfaceOritation:(long long)arg1;
- (id)metaOutput;
- (void)setMetaOutput:(id)arg1;
- (void).cxx_destruct;
@end

