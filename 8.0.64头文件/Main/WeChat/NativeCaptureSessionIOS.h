@interface NativeCaptureSessionIOS : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    BOOL _auto_focus_once; // +0x8
    BOOL _need_gl_tex; // +0x9
    int _target_width; // +0xc
    int _target_height; // +0x10
    int _used_width; // +0x14
    int _used_height; // +0x18
    long long _cameraPosition; // +0x20
    AVCaptureSession * _captureSession; // +0x28
    AVCaptureDevice * _captureDevice; // +0x30
    void * _callback; // +0x38
    __CVBuffer * _curPixelBuffer; // +0x40
    __CVBuffer * _curAcquiredPixelBuffer; // +0x48
    __CVOpenGLESTextureCache * _textureCacheRef; // +0x50
    EAGLContext * _glContextOld; // +0x58
    EAGLContext * _glContextNew; // +0x60
    ARNativeCameraFrame _curFrame; // +0x68
}
- (void)dealloc;
- (id)initWithCallback:(void *)arg1 width:(int)arg2 height:(int)arg3 autoFocus_once:(BOOL)arg4 need_gltex:(BOOL)arg5;
- (BOOL)isRunning;
- (void)startRunning;
- (void)stopRunning;
- (ARNativeCameraFrame)acquireLatestFrame;
- (void)setupTextureCache;
- (void)setupEGLContext:(void *)arg1;
- (void)makeEGLContext;
- (void)restoreEGLContext;
- (float)getFOV;
- (int)getNativeWidth;
- (int)getNativeHeight;
- (id)cameraWithPosition:(long long)arg1;
- (void)updateCaptureSession;
- (void)switchCameraPosition:(long long)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)onVideoStart:(id)arg1;
- (void)onVideoStop:(id)arg1;
- (void)onVideoError:(id)arg1;
- (void)onVideoInterrupt:(id)arg1;
- (void)onVideoInterruptEnd:(id)arg1;
- (long long)cameraPosition;
- (void)setCameraPosition:(long long)arg1;
- (id)captureSession;
- (void)setCaptureSession:(id)arg1;
- (id)captureDevice;
- (void)setCaptureDevice:(id)arg1;
- (void *)callback;
- (void)setCallback:(void *)arg1;
- (__CVBuffer *)curPixelBuffer;
- (void)setCurPixelBuffer:(__CVBuffer *)arg1;
- (ARNativeCameraFrame)curFrame;
- (void)setCurFrame:(ARNativeCameraFrame)arg1;
- (__CVBuffer *)curAcquiredPixelBuffer;
- (void)setCurAcquiredPixelBuffer:(__CVBuffer *)arg1;
- (__CVOpenGLESTextureCache *)textureCacheRef;
- (void)setTextureCacheRef:(__CVOpenGLESTextureCache *)arg1;
- (id)glContextOld;
- (void)setGlContextOld:(id)arg1;
- (id)glContextNew;
- (void)setGlContextNew:(id)arg1;
- (int)target_width;
- (void)setTarget_width:(int)arg1;
- (int)target_height;
- (void)setTarget_height:(int)arg1;
- (int)used_width;
- (void)setUsed_width:(int)arg1;
- (int)used_height;
- (void)setUsed_height:(int)arg1;
- (BOOL)auto_focus_once;
- (void)setAuto_focus_once:(BOOL)arg1;
- (BOOL)need_gl_tex;
- (void)setNeed_gl_tex:(BOOL)arg1;
- (void).cxx_destruct;
@end
