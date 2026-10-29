@interface CvAbstractCamera : NSObject
{
    long long currentDeviceOrientation; // +0x8
    BOOL cameraAvailable; // +0x10
    BOOL running; // +0x11
    BOOL captureSessionLoaded; // +0x12
    BOOL useAVCaptureVideoPreviewLayer; // +0x13
    int imageWidth; // +0x14
    int imageHeight; // +0x18
    int defaultFPS; // +0x1c
    long long defaultAVCaptureDevicePosition; // +0x20
    long long defaultAVCaptureVideoOrientation; // +0x28
    NSString * defaultAVCaptureSessionPreset; // +0x30
    AVCaptureSession * captureSession; // +0x38
    AVCaptureVideoPreviewLayer * captureVideoPreviewLayer; // +0x40
    AVCaptureConnection * videoCaptureConnection; // +0x48
    UIView * parentView; // +0x50
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
- (int)imageWidth;
- (void)setImageWidth:(int)arg1;
- (int)imageHeight;
- (void)setImageHeight:(int)arg1;
- (int)defaultFPS;
- (void)setDefaultFPS:(int)arg1;
- (long long)defaultAVCaptureDevicePosition;
- (void)setDefaultAVCaptureDevicePosition:(long long)arg1;
- (long long)defaultAVCaptureVideoOrientation;
- (void)setDefaultAVCaptureVideoOrientation:(long long)arg1;
- (id)defaultAVCaptureSessionPreset;
- (void)setDefaultAVCaptureSessionPreset:(id)arg1;
- (id)captureSession;
- (void)setCaptureSession:(id)arg1;
- (id)captureVideoPreviewLayer;
- (void)setCaptureVideoPreviewLayer:(id)arg1;
- (id)videoCaptureConnection;
- (void)setVideoCaptureConnection:(id)arg1;
- (BOOL)running;
- (BOOL)captureSessionLoaded;
- (BOOL)useAVCaptureVideoPreviewLayer;
- (void)setUseAVCaptureVideoPreviewLayer:(BOOL)arg1;
- (id)parentView;
- (void)setParentView:(id)arg1;
@end
