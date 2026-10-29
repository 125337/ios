@interface TPAppleOpenGLViewMgr : NSObject
{
    BOOL _inited; // +0x8
    BOOL _waitingForMainThread; // +0x9
    BOOL _glActive; // +0xa
    BOOL _contentModeObserved; // +0xb
    BOOL _backgroundRenderingEnabled; // +0xc
    BOOL _isInBackground; // +0xd
    int _gravity; // +0x10
    int _tryLockErrorCount; // +0x14
    TPAppleOpenGLView * _glView; // +0x18
    UIView * _containerView; // +0x20
    ITPRendererInterruptCallback * _interruptCallback; // +0x28
    NSRecursiveLock * _glActiveLock; // +0x30
    TPRendererVideoFrameParams _curFrameParams; // +0x38
    TPRendererConfigs _configs; // +0x70
}
- (id)init;
- (void)dealloc;
- (int)configure:(TPRendererConfigs)arg1;
- (int)initRenderer;
- (int)unInitRenderer;
- (BOOL)isInited;
- (int)flush;
- (int)writeOneFrame:(TPFrame *)arg1;
- (int)setVideoRenderTarget:(id)arg1;
- (int)setVideoGravity:(int)arg1;
- (void)setInterruptCallback:(ITPRendererInterruptCallback *)arg1;
- (void)setupGLActive;
- (void)lockGLActive;
- (void)unlockGLActive;
- (BOOL)tryLockGLActive;
- (void)toggleGLActive:(BOOL)arg1;
- (void)registerApplicationObservers;
- (void)unregisterApplicationObservers;
- (void)applicationWillEnterForeground;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)applicationDidEnterBackground;
- (void)applicationWillTerminate;
- (void)observeContentMode;
- (void)unObserveContentMode;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (int)createGLView:(TPRendererVideoFrameParams)arg1;
- (void)removeGLView;
- (int)writeOneFrameToGLView:(TPFrame *)arg1;
- (long long)getContentModeFromGravity:(int)arg1;
- (TPRendererVideoFrameParams)getFrameParams:(TPFrame *)arg1;
- (int)waitForMainThread;
- (void)setParam:(int)arg1 withBlock:(TPRendererParamBlock)arg2;
- (void)changeGLActiveInBackground;
- (id)glView;
- (void)setGlView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (TPRendererConfigs)configs;
- (void)setConfigs:(TPRendererConfigs)arg1;
- (BOOL)inited;
- (void)setInited:(BOOL)arg1;
- (TPRendererVideoFrameParams)curFrameParams;
- (void)setCurFrameParams:(TPRendererVideoFrameParams)arg1;
- (int)gravity;
- (void)setGravity:(int)arg1;
- (ITPRendererInterruptCallback *)interruptCallback;
- (BOOL)waitingForMainThread;
- (void)setWaitingForMainThread:(BOOL)arg1;
- (id)glActiveLock;
- (void)setGlActiveLock:(id)arg1;
- (BOOL)glActive;
- (void)setGlActive:(BOOL)arg1;
- (int)tryLockErrorCount;
- (void)setTryLockErrorCount:(int)arg1;
- (BOOL)contentModeObserved;
- (void)setContentModeObserved:(BOOL)arg1;
- (BOOL)backgroundRenderingEnabled;
- (void)setBackgroundRenderingEnabled:(BOOL)arg1;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
