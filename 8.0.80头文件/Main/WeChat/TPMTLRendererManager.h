@interface TPMTLRendererManager : NSObject
{
    BOOL _waitingForMainThread; // +0x8
    BOOL _metalActivePaused; // +0x9
    BOOL _contentModeObserved; // +0xa
    BOOL _enableViewContentMode; // +0xb
    BOOL _needUpdateRenderTarget; // +0xc
    BOOL _atBottom; // +0xd
    BOOL _backgroundRenderingEnabled; // +0xe
    BOOL _isInBackground; // +0xf
    int _gravity; // +0x10
    int _tryLockErrorCount; // +0x14
    id <MTLDevice> _mtlDevice; // +0x18
    TPMTLGeneralFrameRenderer * _renderer; // +0x20
    TPMTLDisplayView * _mtkView; // +0x28
    TPMTLDisplayConfig * _displayConfig; // +0x30
    UIView * _targetView; // +0x38
    ITPRendererInterruptCallback * _interruptCallback; // +0x40
    NSObject * _renderLock; // +0x48
}
- (id)init;
- (void)dealloc;
- (void)configure:(id)arg1;
- (BOOL)setup;
- (void)destory;
- (int)drawFrame:(TPFrame *)arg1;
- (id)getDisplayConfig:(TPFrame *)arg1;
- (CGSize)getDrawableSize:(TPFrame *)arg1;
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
- (void)observeContentMode;
- (void)unObserveContentMode;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setParam:(int)arg1 withBlock:(TPRendererParamBlock)arg2;
- (void)changeMetalActivePausedInBackground;
- (id)mtlDevice;
- (void)setMtlDevice:(id)arg1;
- (id)renderer;
- (void)setRenderer:(id)arg1;
- (id)mtkView;
- (void)setMtkView:(id)arg1;
- (id)displayConfig;
- (void)setDisplayConfig:(id)arg1;
- (id)targetView;
- (void)setTargetView:(id)arg1;
- (int)gravity;
- (void)setGravity:(int)arg1;
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
- (id)renderLock;
- (void)setRenderLock:(id)arg1;
- (BOOL)needUpdateRenderTarget;
- (void)setNeedUpdateRenderTarget:(BOOL)arg1;
- (BOOL)atBottom;
- (void)setAtBottom:(BOOL)arg1;
- (BOOL)backgroundRenderingEnabled;
- (void)setBackgroundRenderingEnabled:(BOOL)arg1;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
- (void).cxx_destruct;
@end
