@interface CdnOpenGLContext : NSObject
{
    int _refCnt; // +0x8
    _opaque_pthread_mutex_t _refCntMutex; // +0x10
    BOOL _isMainThreadLag2024T3StopGlContextEnabled; // +0x50
    EAGLContext * _glContext; // +0x58
    NSObject<OS_dispatch_queue> * _renderQueue; // +0x60
    __CVOpenGLESTextureCache * _coreVideoTextureCache; // +0x68
}
+ (id)sharedInstance;
+ (BOOL)supportsFastTextureUpload;
- (id)init;
- (void)dealloc;
- (void)setupGLContext;
- (id)openGLContext;
- (__CVOpenGLESTextureCache *)coreVideoTextureCache;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (BOOL)isAvailable;
- (void)stopGlContext;
- (id)deviceModelVersion;
- (BOOL)canRenderOnInactiveState;
- (void)runSyncOnRenderQueue:(id /* block */)arg1;
- (void)runAsyncOnRenderQueue:(id /* block */)arg1;
- (void)increaseReference;
- (void)decreaseReference;
- (BOOL)isMainThreadLag2024T3StopGlContextEnabled;
- (void)setIsMainThreadLag2024T3StopGlContextEnabled:(BOOL)arg1;
- (id)glContext;
- (void)setGlContext:(id)arg1;
- (id)renderQueue;
- (void)setRenderQueue:(id)arg1;
- (void)setCoreVideoTextureCache:(__CVOpenGLESTextureCache *)arg1;
- (void).cxx_destruct;
@end

