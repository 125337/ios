@interface CvAbstractCamera2 : NSObject
{
    BOOL _cameraAvailable; // +0x8
    BOOL _running; // +0x9
    BOOL _captureSessionLoaded; // +0xa
    BOOL _useAVCaptureVideoPreviewLayer; // +0xb
    int _defaultFPS; // +0xc
    int _imageWidth; // +0x10
    int _imageHeight; // +0x14
    long long _currentDeviceOrientation; // +0x18
    AVCaptureSession * _captureSession; // +0x20
    AVCaptureConnection * _videoCaptureConnection; // +0x28
    AVCaptureVideoPreviewLayer * _captureVideoPreviewLayer; // +0x30
    long long _defaultAVCaptureDevicePosition; // +0x38
    long long _defaultAVCaptureVideoOrientation; // +0x40
    NSString * _defaultAVCaptureSessionPreset; // +0x48
    UIView * _parentView; // +0x50
}
- (id)init;
- (id)initWithParentView:(id)arg1;
- (void)dealloc;
- (void)start;
- (void)pause;
- (void)stop;
- (void)switchCameras;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)createCaptureSession;
- (void)createCaptureDevice;
- (void)createVideoPreviewLayer;
- (void)setDesiredCameraPosition:(long long)arg1;
- (void)startCaptureSession;
- (void)createCaptureOutput;
- (void)createCustomVideoPreview;
- (void)updateOrientation;
- (void)updateSize;
- (void)lockFocus;
- (void)unlockFocus;
- (void)lockExposure;
- (void)unlockExposure;
- (void)lockBalance;
- (void)unlockBalance;
- (long long)currentDeviceOrientation;
- (void)setCurrentDeviceOrientation:(long long)arg1;
- (BOOL)cameraAvailable;
- (void)setCameraAvailable:(BOOL)arg1;
- (id)captureSession;
- (void)setCaptureSession:(id)arg1;
- (id)videoCaptureConnection;
- (void)setVideoCaptureConnection:(id)arg1;
- (BOOL)running;
- (BOOL)captureSessionLoaded;
- (int)defaultFPS;
- (void)setDefaultFPS:(int)arg1;
- (id)captureVideoPreviewLayer;
- (void)setCaptureVideoPreviewLayer:(id)arg1;
- (long long)defaultAVCaptureDevicePosition;
- (void)setDefaultAVCaptureDevicePosition:(long long)arg1;
- (long long)defaultAVCaptureVideoOrientation;
- (void)setDefaultAVCaptureVideoOrientation:(long long)arg1;
- (BOOL)useAVCaptureVideoPreviewLayer;
- (void)setUseAVCaptureVideoPreviewLayer:(BOOL)arg1;
- (id)defaultAVCaptureSessionPreset;
- (void)setDefaultAVCaptureSessionPreset:(id)arg1;
- (int)imageWidth;
- (void)setImageWidth:(int)arg1;
- (int)imageHeight;
- (void)setImageHeight:(int)arg1;
- (id)parentView;
- (void)setParentView:(id)arg1;
- (void).cxx_destruct;
@end
