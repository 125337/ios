@interface TXYCameraDevice : NSObject <YTAGReflectDeviceDelegate>
{
    AVCaptureDevice * inputCamera; // +0x8
    AVCaptureDeviceInput * videoInput; // +0x10
    NSObject<OS_dispatch_queue> * deviceOperationQueue; // +0x18
    NSArray * observers; // +0x20
    BOOL cameraConfiguring; // +0x28
    BOOL focusListening; // +0x29
    struct WhiteBalanceGains; // +0x2c
    BOOL _pause; // +0x38
    BOOL _lowLightBoost; // +0x39
    BOOL _running; // +0x3a
    BOOL _isCustomExposureSupported; // +0x3b
    int _flashMode; // +0x3c
    AVCaptureSession * _session; // +0x40
    NSObject<CameraVideoDeviceDelegate> * _delegate; // +0x48
    long long _position; // +0x50
    double _deviceISO; // +0x58
    double _device_minISO; // +0x60
    double _device_maxISO; // +0x68
    double _deviceAperture; // +0x70
    AVCaptureSession * _captureSession; // +0x78
    double _zoom; // +0x80
    CGPoint _focusPoint; // +0x88
    CGPoint _exposurePoint; // +0x98
    struct _deviceExposureDuration; // +0xa8
}
+ (BOOL)deviceDenied;
- (id)initWithSessionPreset:(id)arg1 cameraPosition:(long long)arg2 delegate:(id)arg3;
- (void)dealloc;
- (id)getCaptureDevice;
- (void)setCameraSettings:(long long)arg1 iso:(int)arg2;
- (long long)focusMode;
- (void)setFocusMode:(long long)arg1;
- (void)setFocusPoint:(CGPoint)arg1;
- (void)setZoom:(double)arg1;
- (long long)exposureMode;
- (void)setExposureMode:(long long)arg1;
- (void)setExposurePoint:(CGPoint)arg1;
- (long long)whiteBalanceMode;
- (double)deviceISO;
- (double)device_minISO;
- (double)device_maxISO;
- (double)deviceAperture;
- (struct)deviceExposureDuration;
- (void)setWhiteBalanceMode:(long long)arg1;
- (void)setFlashMode:(int)arg1;
- (void)setLowLightBoost:(BOOL)arg1;
- (BOOL)hasFlash;
- (BOOL)hasFront;
- (void)startDevice;
- (void)stopDevice;
- (id)deviceQueue;
- (void)beginConfiguration;
- (void)commitConfiguration;
- (void)restartDevcie;
- (id)deviceWithType:(id)arg1 position:(long long)arg2;
- (BOOL)isSupportMaxPixel:(double)arg1;
- (void)addFocusChangeListener;
- (void)removeFocusChangeListener;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)session;
- (void)setSession:(id)arg1;
- (BOOL)pause;
- (void)setPause:(BOOL)arg1;
- (CGPoint)focusPoint;
- (CGPoint)exposurePoint;
- (int)flashMode;
- (BOOL)lowLightBoost;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)running;
- (void)setRunning:(BOOL)arg1;
- (long long)position;
- (void)setPosition:(long long)arg1;
- (void)setDeviceISO:(double)arg1;
- (void)setDevice_minISO:(double)arg1;
- (void)setDevice_maxISO:(double)arg1;
- (void)setDeviceAperture:(double)arg1;
- (void)setDeviceExposureDuration:(struct)arg1;
- (BOOL)isCustomExposureSupported;
- (void)setIsCustomExposureSupported:(BOOL)arg1;
- (id)captureSession;
- (void)setCaptureSession:(id)arg1;
- (double)zoom;
- (void).cxx_destruct;
@end
