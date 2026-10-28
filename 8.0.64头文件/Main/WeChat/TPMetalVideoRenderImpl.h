@interface TPMetalVideoRenderImpl : NSObject <TPMTKViewDelegate>
{
    NSObject * _renderLock; // +0x8
    BOOL _needUpdateRenderTarget; // +0x10
    BOOL _colorManagement; // +0x11
    BOOL _enableRenderOptYuv420; // +0x12
    BOOL _waitingForMainThread; // +0x13
    BOOL _metalActivePaused; // +0x14
    BOOL _contentModeObserved; // +0x15
    BOOL _enableViewContentMode; // +0x16
    BOOL _atBottom; // +0x17
    BOOL _backgroundRenderingEnabled; // +0x18
    BOOL _isInBackground; // +0x19
    int _gravity; // +0x1c
    int _enableRendererSharpen; // +0x20
    int _enableRendererLucid; // +0x24
    int _enableRendererClarity; // +0x28
    int _enableRendererColorLUT; // +0x2c
    int _tryLockErrorCount; // +0x30
    id <MTLDevice> _metalDevice; // +0x38
    TPMetalRenderProxy * _metalRender; // +0x40
    TPMTKView * _mtkView; // +0x48
    TPFrame * _videoFrame; // +0x50
    TPFrame * _yuvFrame; // +0x58
    UIView * _targetView; // +0x60
    NSString * _rendererColorLUTFilePath; // +0x68
    ITPRendererInterruptCallback * _interruptCallback; // +0x70
}
- (id)init;
- (void)dealloc;
- (void)configure:(id)arg1;
- (BOOL)setup;
- (void)destory;
- (int)drawFrame:(TPFrame *)arg1;
- (void)setDrawableSize;
- (void)setRenderTarget:(void *)arg1;
- (int)updateRenderTarget;
- (int)waitForMainThread;
- (void)setVideoGravity:(int)arg1;
- (void)setInterruptCallback:(ITPRendererInterruptCallback *)arg1;
- (long long)getContentModeFromGravity:(int)arg1;
- (void)applicationWillEnterForeground;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)applicationDidEnterBackground;
- (void)applicationWillTerminate;
- (void)registerApplicationObservers;
- (void)unregisterApplicationObservers;
- (void)render:(id)arg1;
- (void)reshape:(id)arg1;
- (void)observeContentMode;
- (void)unObserveContentMode;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setParam:(int)arg1 withBlock:(TPRendererParamBlock)arg2;
- (void)changeMetalActivePausedInBackground;
- (id)metalDevice;
- (void)setMetalDevice:(id)arg1;
- (id)metalRender;
- (void)setMetalRender:(id)arg1;
- (id)mtkView;
- (void)setMtkView:(id)arg1;
- (TPFrame *)videoFrame;
- (void)setVideoFrame:(TPFrame *)arg1;
- (TPFrame *)yuvFrame;
- (void)setYuvFrame:(TPFrame *)arg1;
- (id)targetView;
- (void)setTargetView:(id)arg1;
- (int)gravity;
- (void)setGravity:(int)arg1;
- (BOOL)colorManagement;
- (void)setColorManagement:(BOOL)arg1;
- (int)enableRendererSharpen;
- (void)setEnableRendererSharpen:(int)arg1;
- (BOOL)enableRenderOptYuv420;
- (void)setEnableRenderOptYuv420:(BOOL)arg1;
- (int)enableRendererLucid;
- (void)setEnableRendererLucid:(int)arg1;
- (int)enableRendererClarity;
- (void)setEnableRendererClarity:(int)arg1;
- (int)enableRendererColorLUT;
- (void)setEnableRendererColorLUT:(int)arg1;
- (id)rendererColorLUTFilePath;
- (void)setRendererColorLUTFilePath:(id)arg1;
- (ITPRendererInterruptCallback *)interruptCallback;
- (BOOL)waitingForMainThread;
- (void)setWaitingForMainThread:(BOOL)arg1;
- (BOOL)metalActivePaused;
- (void)setMetalActivePaused:(BOOL)arg1;
- (int)tryLockErrorCount;
- (void)setTryLockErrorCount:(int)arg1;
- (BOOL)contentModeObserved;
- (void)setContentModeObserved:(BOOL)arg1;
- (BOOL)enableViewContentMode;
- (void)setEnableViewContentMode:(BOOL)arg1;
- (BOOL)atBottom;
- (void)setAtBottom:(BOOL)arg1;
- (BOOL)backgroundRenderingEnabled;
- (void)setBackgroundRenderingEnabled:(BOOL)arg1;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
- (void).cxx_destruct;
@end
