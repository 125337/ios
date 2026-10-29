@interface TXCCameraCapturer : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureMetadataOutputObjectsDelegate, TXIVideoCaptureInterface, TXICameraCapturerInterface>
{
    atomic<unsigned int> _subscribersCount; // +0x8
    BOOL _supportsFaceDetection; // +0xc
    BOOL _isRunning; // +0xd
    BOOL _isCustomCaptureSize; // +0xe
    unsigned long long captureType; // +0x10
    TXCDispatchQueue * _queue; // +0x18
    TXCDispatchQueue * _outputQueue; // +0x20
    TXCCameraCaptureConfig * _config; // +0x28
    NSMutableSet * _subscribers; // +0x30
    AVCaptureSession * _session; // +0x38
    AVCaptureVideoDataOutput * _output; // +0x40
    AVCaptureDevice * _device; // +0x48
    AVCaptureDeviceInput * _input; // +0x50
    AVCaptureConnection * _connection; // +0x58
    AVCaptureMetadataOutput * _metaOutput; // +0x60
    id /* block */ _metaOutputHandler; // +0x68
    NSObject<OS_dispatch_queue> * _delegateQueue; // +0x70
}
+ (id)deviceWithConfig:(id)arg1;
+ (id)deviceOfPosition:(BOOL)arg1;
+ (id)presetOfResolution:(CGSize)arg1;
+ (id)sizeToPresetMap;
+ (id)presetSizes;
+ (BOOL)isCameraDevice:(id)arg1;
- (id)initWithQueue:(id)arg1 outputQueue:(id)arg2 device:(id)arg3;
- (unsigned long long)captureType;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)applyConfigs:(id)arg1;
- (void)setFrameRate:(long long)arg1;
- (void)setCaptureResolution:(CGSize)arg1;
- (BOOL)isFrontCamera;
- (void)setFront:(BOOL)arg1;
- (BOOL)isZoomSupported;
- (double)zoomMaxRatio;
- (void)setZoomScale:(double)arg1 multiplyByZoomfactor:(BOOL)arg2;
- (void)enableZoom:(BOOL)arg1;
- (BOOL)isAutoFocusSupported;
- (void)enablesFaceDetect:(BOOL)arg1;
- (void)setFocusPosition:(CGPoint)arg1;
- (BOOL)isTorchSupported;
- (void)setTorchOn:(BOOL)arg1;
- (BOOL)isFaceDetectEnabled;
- (void)setExposureTargetBias:(float)arg1;
- (void)start;
- (void)stop;
- (void)switchCamera:(BOOL)arg1;
- (BOOL)addInput;
- (void)addOutput;
- (void)updateFrameRate;
- (BOOL)supportsVideoFrameRate:(long long)arg1;
- (void)focusAt:(CGPoint)arg1;
- (void)requestAuthorization:(id /* block */)arg1;
- (void)setVideoZoomFactor:(double)arg1 multiplyByZoomfactor:(BOOL)arg2;
- (void)updatePreset;
- (BOOL)setSessionPreset:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)processCapturedFrame:(opaqueCMSampleBuffer *)arg1;
- (void)notifyFrame:(id)arg1 error:(id)arg2;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)setupNotifications;
- (void)handleCaptureSessionInterrupted:(id)arg1;
- (void)handleCaptureSessionInterruptionEnded:(id)arg1;
- (void)handleCaptureSessionRuntimeError:(id)arg1;
- (void)handleDeviceConnected:(id)arg1;
- (void)handleDeviceDisconnected:(id)arg1;
- (void)notifyDeviceUpdated:(id)arg1 isConnected:(BOOL)arg2;
- (id)queue;
- (id)outputQueue;
- (id)config;
- (id)subscribers;
- (void)setSubscribers:(id)arg1;
- (id)session;
- (id)output;
- (void)setOutput:(id)arg1;
- (id)device;
- (void)setDevice:(id)arg1;
- (id)input;
- (void)setInput:(id)arg1;
- (id)connection;
- (void)setConnection:(id)arg1;
- (id)metaOutput;
- (void)setMetaOutput:(id)arg1;
- (id /* block */)metaOutputHandler;
- (void)setMetaOutputHandler:(id /* block */)arg1;
- (BOOL)supportsFaceDetection;
- (void)setSupportsFaceDetection:(BOOL)arg1;
- (id)delegateQueue;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (BOOL)isCustomCaptureSize;
- (void)setIsCustomCaptureSize:(BOOL)arg1;
- (void).cxx_destruct;
@end

