@interface MMOpenVoiceVideoCapture : MMOpenVoiceVideoBase <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    BOOL _inited; // +0x8
    BOOL _useFrontCamera; // +0x9
    BOOL _m_usingFrontCameraLastFrame; // +0xa
    BOOL _m_cameraFrontState; // +0xb
    int _currentRenderOrien; // +0xc
    unsigned int _frameIdx; // +0x10
    int _m_switchCameraFrameCnt; // +0x14
    unsigned int _m_cameraChangeToOrientationLastCount; // +0x18
    NSObject<OS_dispatch_queue> * _queue; // +0x20
    AVCaptureDevice * _device; // +0x28
    AVCaptureSession * _session; // +0x30
    AVCaptureDeviceInput * _input; // +0x38
    AVCaptureVideoDataOutput * _output; // +0x40
    AVCaptureVideoPreviewLayer * _previewLayer; // +0x48
    long long _m_videoOrientation; // +0x50
    long long _m_cameraOrientation; // +0x58
    long long _m_cameraChangeToOrientation; // +0x60
    CMMotionManager * _m_motionMgr; // +0x68
    WeVisVoipEffectMgr * _wevisEffectMgr; // +0x70
    VOIPVideoRender * _render; // +0x78
    CGSize _resamplingSize; // +0x80
}
- (id)init;
- (void)dealloc;
- (int)initView:(int)arg1 openId:(id)arg2 dic:(id)arg3 queue:(id)arg4;
- (void)updateCaptureRes:(int)arg1;
- (BOOL)enable720pCapture;
- (BOOL)updateGPUReslution:(int)arg1;
- (void)setCameraPos:(long long)arg1;
- (void)updateCameraPosToFitDevice;
- (int)start;
- (int)updateView:(int)arg1 dic:(id)arg2;
- (void)stop;
- (void)uintView;
- (void)newVideoSample:(opaqueCMSampleBuffer *)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (unsigned long long)cameraCount;
- (BOOL)isCameraFront;
- (int)getCaptureFps;
- (void)initWeVisEffectMgr;
- (void)renderNV12:(id)arg1;
- (BOOL)setBackgroundEffectMode:(int)arg1 enable:(BOOL)arg2;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)device;
- (void)setDevice:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (id)input;
- (void)setInput:(id)arg1;
- (id)output;
- (void)setOutput:(id)arg1;
- (id)previewLayer;
- (void)setPreviewLayer:(id)arg1;
- (int)currentRenderOrien;
- (void)setCurrentRenderOrien:(int)arg1;
- (BOOL)inited;
- (void)setInited:(BOOL)arg1;
- (BOOL)useFrontCamera;
- (void)setUseFrontCamera:(BOOL)arg1;
- (unsigned int)frameIdx;
- (void)setFrameIdx:(unsigned int)arg1;
- (long long)m_videoOrientation;
- (void)setM_videoOrientation:(long long)arg1;
- (long long)m_cameraOrientation;
- (void)setM_cameraOrientation:(long long)arg1;
- (BOOL)m_usingFrontCameraLastFrame;
- (void)setM_usingFrontCameraLastFrame:(BOOL)arg1;
- (BOOL)m_cameraFrontState;
- (void)setM_cameraFrontState:(BOOL)arg1;
- (int)m_switchCameraFrameCnt;
- (void)setM_switchCameraFrameCnt:(int)arg1;
- (long long)m_cameraChangeToOrientation;
- (void)setM_cameraChangeToOrientation:(long long)arg1;
- (unsigned int)m_cameraChangeToOrientationLastCount;
- (void)setM_cameraChangeToOrientationLastCount:(unsigned int)arg1;
- (id)m_motionMgr;
- (void)setM_motionMgr:(id)arg1;
- (CGSize)resamplingSize;
- (void)setResamplingSize:(CGSize)arg1;
- (id)wevisEffectMgr;
- (void)setWevisEffectMgr:(id)arg1;
- (id)render;
- (void)setRender:(id)arg1;
- (void).cxx_destruct;
@end
