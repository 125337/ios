@interface CameraDevice : NSObject <YTAGReflectDeviceDelegate>
{
    AVCaptureDevice * inputCamera; // +0x8
    AVCaptureDeviceInput * videoInput; // +0x10
    NSObject<OS_dispatch_queue> * deviceOperationQueue; // +0x18
    NSArray * observers; // +0x20
    BOOL cameraConfiguring; // +0x28
    BOOL focusListening; // +0x29
    BOOL _running; // +0x2a
    BOOL _pause; // +0x2b
    BOOL _lowLightBoost; // +0x2c
    BOOL _isCustomExposureSupported; // +0x2d
    int _flashMode; // +0x30
    NSObject<CameraVideoDeviceDelegate> * _delegate; // +0x38
    AVCaptureSession * _session; // +0x40
    double _DeviceISO; // +0x48
    double _Device_minISO; // +0x50
    double _Device_maxISO; // +0x58
    double _DeviceAperture; // +0x60
    AVCaptureSession * _captureSession; // +0x68
    CGPoint _focusPoint; // +0x70
    CGPoint _exposurePoint; // +0x80
    struct _DeviceExposureDuration; // +0x90
}
+ (BOOL)deviceDenied;
- (id)initWithSessionPreset:(id)arg1 cameraPosition:(long long)arg2;
- (void)dealloc;
- (id)getCaptureDevice;
- (void)setCameraSettings:(long long)arg1 iso:(int)arg2;
- (long long)position;
- (void)setPosition:(long long)arg1;
- (long long)focusMode;
- (void)setFocusMode:(long long)arg1;
- (void)setFocusPoint:(CGPoint)arg1;
- (long long)exposureMode;
- (void)setExposureMode:(long long)arg1;
- (void)setExposurePoint:(CGPoint)arg1;
- (long long)whiteBalanceMode;
- (double)DeviceISO;
- (double)Device_minISO;
- (double)Device_maxISO;
- (double)DeviceAperture;
- (struct)DeviceExposureDuration;
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
- (void)changeDevicePosition;
- (void)addFocusChangeListener;
- (void)removeFocusChangeListener;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (BOOL)running;
- (void)setRunning:(BOOL)arg1;
- (BOOL)pause;
- (void)setPause:(BOOL)arg1;
- (CGPoint)focusPoint;
- (CGPoint)exposurePoint;
- (int)flashMode;
- (BOOL)lowLightBoost;
- (void)setDeviceISO:(double)arg1;
- (void)setDevice_minISO:(double)arg1;
- (void)setDevice_maxISO:(double)arg1;
- (void)setDeviceAperture:(double)arg1;
- (void)setDeviceExposureDuration:(struct)arg1;
- (BOOL)isCustomExposureSupported;
- (void)setIsCustomExposureSupported:(BOOL)arg1;
- (id)captureSession;
- (void)setCaptureSession:(id)arg1;
- (void).cxx_destruct;
@end
