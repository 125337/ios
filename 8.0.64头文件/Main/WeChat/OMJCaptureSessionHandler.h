@interface OMJCaptureSessionHandler : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, OMJPhotoCapturerDelegate>
{
    BOOL _isCameraSwitching; // +0x8
    int _frontCamDimensionLevel; // +0xc
    OMJPhotoCapturer * _photoCapturer; // +0x10
    AVCaptureSession * _captureSession; // +0x18
    NSObject<OS_dispatch_queue> * _sessionQueue; // +0x20
    NSObject<OS_dispatch_queue> * _callbackQueue; // +0x28
    AVCaptureDeviceInput * _videoDeviceInput; // +0x30
    AVCapturePhotoOutput * _photoOutput; // +0x38
    AVCaptureVideoDataOutput * _videoOutput; // +0x40
    AVCaptureSession * _audioCaptureSession; // +0x48
    AVCaptureDeviceInput * _audioDeviceInput; // +0x50
    AVCaptureAudioDataOutput * _audioOutput; // +0x58
    double _videoMaxZoomFactor; // +0x60
    double _videoMinZoomFactor; // +0x68
    long long _currentFlashMode; // +0x70
    long long _targetPositionFlagForSwitchCamera; // +0x78
    function<void (AVCapturePhoto *)> _didCapturePhotoCallback; // +0x80
    function<void (opaqueCMSampleBuffer *, AVCaptureDevicePosition)> _didOutputVideoSampleBufferCallback; // +0xa0
    function<void (opaqueCMSampleBuffer *)> _didOutputAudioSampleBufferCallback; // +0xc0
    function<void ()> _didFinishSwitchCameraCallbackFunc; // +0xe0
}
- (id)init;
- (void)commonInit;
- (void)switchCameraIfNeeded:(BOOL)arg1;
- (void)setupCaptureSessionIfNeededWithIsUseFrontCamera:(BOOL)arg1 frontCamDimensionLevel:(int)arg2 completionHandler:(id /* block */)arg3;
- (void)startRunning:(id /* block */)arg1;
- (void)stopRunning:(id /* block */)arg1;
- (void)startAudioCaptureSessionRunning:(id /* block */)arg1;
- (void)stopAudioCaptureSessionRunning:(id /* block */)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (BOOL)supportFlashMode;
- (long long)flashMode;
- (void)setFlashMode:(long long)arg1;
- (BOOL)supportTorchMode;
- (long long)torchMode;
- (void)setTorchMode:(long long)arg1;
- (float)getDeviceFOV;
- (void)reverseCamera;
- (void)switchCameraToPosition:(long long)arg1;
- (void)switchCameraWithDevice:(id)arg1 position:(long long)arg2;
- (long long)devicePosition;
- (double)videoZoomFactor;
- (void)setVideoZoomFactor:(double)arg1;
- (void)zoomCaptureDeviceWithScale:(double)arg1;
- (void)setFocusPointOfInterest:(CGPoint)arg1;
- (void)setExposureISO:(double)arg1;
- (double)exposureISO;
- (double)maxExposureISO;
- (double)minExposureISO;
- (void)resetExposureISO;
- (void)calculateExposureValue:(function<void (float)>)arg1;
- (void)capturePhoto;
- (id)setUpPhotoSettings;
- (void)didFinishCapturePhoto:(id)arg1 photos:(id)arg2;
- (void)configSessionPresetWithDevicePosition:(long long)arg1;
- (void)configCaptureConnectionMirrorAndOrientationWithDevicePosition:(long long)arg1;
- (void)configVideoMaxAndMinZoomFactor;
- (id)getFrontCommonCaptureDevice;
- (id)getFrontTrueDepthCaptureDevice;
- (id)getBackCommonCaptureDevice;
- (id)getBackBuiltInWideCaptureDevice;
- (id)getBackLongerFocusCaptureDevice;
- (id)photoCapturer;
- (void)setPhotoCapturer:(id)arg1;
- (id)captureSession;
- (void)setCaptureSession:(id)arg1;
- (id)sessionQueue;
- (void)setSessionQueue:(id)arg1;
- (id)callbackQueue;
- (void)setCallbackQueue:(id)arg1;
- (id)videoDeviceInput;
- (void)setVideoDeviceInput:(id)arg1;
- (id)photoOutput;
- (void)setPhotoOutput:(id)arg1;
- (id)videoOutput;
- (void)setVideoOutput:(id)arg1;
- (id)audioCaptureSession;
- (void)setAudioCaptureSession:(id)arg1;
- (id)audioDeviceInput;
- (void)setAudioDeviceInput:(id)arg1;
- (id)audioOutput;
- (void)setAudioOutput:(id)arg1;
- (double)videoMaxZoomFactor;
- (void)setVideoMaxZoomFactor:(double)arg1;
- (double)videoMinZoomFactor;
- (void)setVideoMinZoomFactor:(double)arg1;
- (long long)currentFlashMode;
- (void)setCurrentFlashMode:(long long)arg1;
- (int)frontCamDimensionLevel;
- (void)setFrontCamDimensionLevel:(int)arg1;
- (function<void (AVCapturePhoto *)>)didCapturePhotoCallback;
- (void)setDidCapturePhotoCallback:(function<void (AVCapturePhoto *)>)arg1;
- (function<void (opaqueCMSampleBuffer *, AVCaptureDevicePosition)>)didOutputVideoSampleBufferCallback;
- (void)setDidOutputVideoSampleBufferCallback:(function<void (opaqueCMSampleBuffer *, AVCaptureDevicePosition)>)arg1;
- (function<void (opaqueCMSampleBuffer *)>)didOutputAudioSampleBufferCallback;
- (void)setDidOutputAudioSampleBufferCallback:(function<void (opaqueCMSampleBuffer *)>)arg1;
- (BOOL)isCameraSwitching;
- (void)setIsCameraSwitching:(BOOL)arg1;
- (long long)targetPositionFlagForSwitchCamera;
- (void)setTargetPositionFlagForSwitchCamera:(long long)arg1;
- (function<void ()>)didFinishSwitchCameraCallbackFunc;
- (void)setDidFinishSwitchCameraCallbackFunc:(function<void ()>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
