@interface LayerOpenGLContext : NSObject
{
    __CVOpenGLESTextureCache * _cvTextureCache; // +0x8
    EAGLContext * _context; // +0x10
    NSObject<OS_dispatch_queue> * _contextQueue; // +0x18
}
- (id)init;
- (void)dealloc;
- (__CVOpenGLESTextureCache *)cvGLESTextureCache;
- (__CVBuffer *)createGLTexture:(__CVBuffer *)arg1 width:(int)arg2 height:(int)arg3 nativeiOSFormat:(int)arg4 glFormat:(unsigned int)arg5 planeIndex:(unsigned long long)arg6;
- (__CVBuffer *)mapPixelBuffer:(__CVBuffer *)arg1 type:(unsigned long long)arg2;
- (id)createGLContext;
- (id)context;
- (void)runSyncOnOpenGLESProcessQueue:(id /* block */)arg1;
- (void)runAsyncOnOpenGLESProcessQueue:(id /* block */)arg1;
- (void)runSyncOnOpenGLESProcessQueueTrue:(id /* block */)arg1;
- (id)contextQueue;
- (void)setContextQueue:(id)arg1;
- (void).cxx_destruct;
@end

