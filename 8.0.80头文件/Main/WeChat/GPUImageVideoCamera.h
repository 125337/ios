@interface GPUImageVideoCamera : GPUImageOutput <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate>
{
    unsigned long long numberOfFramesCaptured; // +0x70
    double totalFrameTimeDuringCapture; // +0x78
    AVCaptureSession * _captureSession; // +0x80
    AVCaptureDevice * _inputCamera; // +0x88
    AVCaptureDevice * _microphone; // +0x90
    AVCaptureDeviceInput * videoInput; // +0x98
    AVCaptureVideoDataOutput * videoOutput; // +0xa0
    BOOL capturePaused; // +0xa8
    unsigned long long outputRotation; // +0xb0
    unsigned long long internalRotation; // +0xb8
    NSObject<OS_dispatch_semaphore> * frameRenderingSemaphore; // +0xc0
    BOOL captureAsYUV; // +0xc8
    unsigned int luminanceTexture; // +0xcc
    unsigned int chrominanceTexture; // +0xd0
    id <GPUImageVideoCameraDelegate> _delegate; // +0xd8
    AVCaptureDeviceInput * audioInput; // +0xe0
    AVCaptureAudioDataOutput * audioOutput; // +0xe8
    NSDate * startingCaptureTime; // +0xf0
    NSObject<OS_dispatch_queue> * cameraProcessingQueue; // +0xf8
    NSObject<OS_dispatch_queue> * audioProcessingQueue; // +0x100
    NSObject<OS_dispatch_queue> * delegateProcessingQueue; // +0x108
    GLProgram * yuvConversionProgram; // +0x110
    int yuvConversionPositionAttribute; // +0x118
    int yuvConversionTextureCoordinateAttribute; // +0x11c
    int yuvConversionLuminanceTextureUniform; // +0x120
    int yuvConversionChrominanceTextureUniform; // +0x124
    int yuvConversionMatrixUniform; // +0x128
    const float * _preferredConversion; // +0x130
    BOOL isFullYUVRange; // +0x138
    int imageBufferWidth; // +0x13c
    int imageBufferHeight; // +0x140
    BOOL addedAudioInputsDueToEncodingTarget; // +0x144
    BOOL _useCustomCaptureDevice; // +0x145
    BOOL _runBenchmark; // +0x146
    BOOL _horizontallyMirrorFrontFacingCamera; // +0x147
    BOOL _horizontallyMirrorRearFacingCamera; // +0x148
    int _frameRate; // +0x14c
    NSString * _captureSessionPreset; // +0x150
    long long _outputImageOrientation; // +0x158
}
+ (BOOL)isBackFacingCameraPresent;
+ (BOOL)isFrontFacingCameraPresent;
- (id)init;
- (id)initWithSessionPreset:(id)arg1 cameraPosition:(long long)arg2;
- (id)initWithSessionPreset:(id)arg1 cameraPosition:(long long)arg2 useCustomCaptureDevice:(BOOL)arg3;
- (id)getCaptureDevice:(long long)arg1;
- (id)defaultGetCaptureDevice:(long long)arg1;
- (id)customGetCaptureDevice:(long long)arg1;
- (id)framebufferForOutput;
- (void)dealloc;
- (BOOL)addAudioInputsAndOutputs;
- (BOOL)removeAudioInputsAndOutputs;
- (void)removeInputsAndOutputs;
- (void)addTarget:(id)arg1 atTextureLocation:(long long)arg2;
- (BOOL)isRunning;
- (void)startCameraCapture;
- (void)stopCameraCapture;
- (void)stopCameraCaptureWaitUntilDone;
- (void)pauseCameraCapture;
- (void)resumeCameraCapture;
- (void)rotateCamera;
- (long long)cameraPosition;
- (BOOL)isBackFacingCameraPresent;
- (BOOL)isFrontFacingCameraPresent;
- (void)setCaptureSessionPreset:(id)arg1;
- (void)setFrameRate:(int)arg1;
- (int)frameRate;
- (id)videoCaptureConnection;
- (void)updateTargetsForVideoCameraUsingCacheTextureAtWidth:(int)arg1 height:(int)arg2 time:(struct)arg3;
- (void)processVideoSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (void)processAudioSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (void)convertYUVToRGBOutput;
- (double)averageFrameDurationDuringCapture;
- (void)resetBenchmarkAverage;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)setAudioEncodingTarget:(id)arg1;
- (void)updateOrientationSendToTargets;
- (void)setOutputImageOrientation:(long long)arg1;
- (void)setHorizontallyMirrorFrontFacingCamera:(BOOL)arg1;
- (void)setHorizontallyMirrorRearFacingCamera:(BOOL)arg1;
- (id)captureSessionPreset;
- (id)captureSession;
- (id)inputCamera;
- (BOOL)runBenchmark;
- (void)setRunBenchmark:(BOOL)arg1;
- (long long)outputImageOrientation;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)horizontallyMirrorFrontFacingCamera;
- (BOOL)horizontallyMirrorRearFacingCamera;
- (void).cxx_destruct;
@end
