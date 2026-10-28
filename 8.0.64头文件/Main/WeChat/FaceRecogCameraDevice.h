@interface FaceRecogCameraDevice : NSObject <AVCaptureDataOutputSynchronizerDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>
{
    NSObject<OS_dispatch_queue> * deviceOperationQueue; // +0x8
    NSObject<OS_dispatch_queue> * videoProcessingQueue; // +0x10
    NSArray * observers; // +0x18
    BOOL focusListening; // +0x20
    BOOL _lowLightBoost; // +0x21
    BOOL _isAdjustingWhiteBalance; // +0x22
    BOOL _isCustomExposureSupported; // +0x23
    BOOL _isDepthEnabled; // +0x24
    int _flashMode; // +0x28
    int _frameRate; // +0x2c
    NSObject<CameraVideoDeviceDelegate> * _delegate; // +0x30
    AVCaptureVideoPreviewLayer * _previewLayer; // +0x38
    double _DeviceISO; // +0x40
    double _Device_minISO; // +0x48
    double _Device_maxISO; // +0x50
    double _DeviceAperture; // +0x58
    AVCaptureSession * _captureSession; // +0x60
    AVCaptureDevice * _inputCamera; // +0x68
    AVCaptureDeviceInput * _videoInput; // +0x70
    AVCaptureVideoDataOutput * _videoOutput; // +0x78
    double _width; // +0x80
    double _height; // +0x88
    AVCaptureDepthDataOutput * _depthDataOutput; // +0x90
    AVCaptureDataOutputSynchronizer * _outputSynchronizer; // +0x98
    CGPoint _focusPoint; // +0xa0
    CGPoint _exposurePoint; // +0xb0
    struct _DeviceExposureDuration; // +0xc0
}
- (id)initWithDelegate:(id)arg1 isDepthEnabled:(BOOL)arg2;
- (void)dealloc;
- (void)setupCaptureSession;
- (BOOL)frameRateSupported:(int)arg1;
- (long long)focusMode;
- (void)setFocusMode:(long long)arg1;
- (void)setFocusPoint:(CGPoint)arg1;
- (long long)exposureMode;
- (void)setExposureMode:(long long)arg1;
- (long long)whiteBalanceMode;
- (BOOL)isAdjustingWhiteBalance;
- (double)DeviceISO;
- (double)Device_minISO;
- (double)Device_maxISO;
- (double)DeviceAperture;
- (struct)DeviceExposureDuration;
- (void)setCameraSettings:(long long)arg1 iso:(int)arg2;
- (void)setWhiteBalanceMode:(long long)arg1;
- (void)setFlashMode:(int)arg1;
- (void)setLowLightBoost:(BOOL)arg1;
- (BOOL)hasFlash;
- (BOOL)hasFront;
- (BOOL)isRunning;
- (void)startDevice;
- (void)stopDevice;
- (id)deviceWithType:(id)arg1 position:(long long)arg2;
- (void)addFocusChangeListener;
- (void)removeFocusChangeListener;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (CGPoint)focusPoint;
- (CGPoint)exposurePoint;
- (void)setExposurePoint:(CGPoint)arg1;
- (int)flashMode;
- (BOOL)lowLightBoost;
- (id)previewLayer;
- (void)setPreviewLayer:(id)arg1;
- (int)frameRate;
- (void)setFrameRate:(int)arg1;
- (void)setIsAdjustingWhiteBalance:(BOOL)arg1;
- (void)setDeviceISO:(double)arg1;
- (void)setDevice_minISO:(double)arg1;
- (void)setDevice_maxISO:(double)arg1;
- (void)setDeviceAperture:(double)arg1;
- (void)setDeviceExposureDuration:(struct)arg1;
- (BOOL)isCustomExposureSupported;
- (void)setIsCustomExposureSupported:(BOOL)arg1;
- (id)captureSession;
- (void)setCaptureSession:(id)arg1;
- (id)inputCamera;
- (void)setInputCamera:(id)arg1;
- (id)videoInput;
- (void)setVideoInput:(id)arg1;
- (id)videoOutput;
- (void)setVideoOutput:(id)arg1;
- (double)width;
- (void)setWidth:(double)arg1;
- (double)height;
- (void)setHeight:(double)arg1;
- (BOOL)isDepthEnabled;
- (void)setIsDepthEnabled:(BOOL)arg1;
- (id)depthDataOutput;
- (void)setDepthDataOutput:(id)arg1;
- (id)outputSynchronizer;
- (void)setOutputSynchronizer:(id)arg1;
- (void).cxx_destruct;
@end
