@interface XImageContext : NSObject
{
    ObjectRef<xnet::rci::RciRenderDevice> _renderDevice; // +0x8
    unique_ptr<rfx::RfxRenderGraph, std::default_delete<rfx::RfxRenderGraph>> _renderGraph; // +0x10
    vector<PixelBufferPool, std::allocator<PixelBufferPool>> _pixelBufferPools; // +0x18
    __CVMetalTextureCache * _cvMetalTextureCache; // +0x30
    __CVOpenGLESTextureCache * _cvGLTextureCache; // +0x38
    EAGLContext * _glContext; // +0x40
    EAGLContext * _originGLContext; // +0x48
    ObjectRef<rfx::RfxContext> _rfxContext; // +0x50
    NSObject<OS_dispatch_queue> * _queue; // +0x58
    mutex _mutex; // +0x60
}
+ (id)context;
+ (id)builtInShaderPath;
- (void)setup:(id)arg1;
- (id)init;
- (id)initWithGLContext:(id)arg1;
- (void)clear;
- (void)dealloc;
- (void)bindToTLS;
- (void)unBindFromTLS;
- (BOOL)isValid;
- (void *)renderDevice;
- (void *)renderGraph;
- (void *)shaderLibrary;
- (void *)pipelineStateCache;
- (void *)assetManager;
- (__CVMetalTextureCache *)cvMetalTextureCache;
- (__CVOpenGLESTextureCache *)cvGLTextureCache;
- (id)glContext;
- (void *)rfxContext;
- (__CVPixelBufferPool *)getCompatiblePixelBufferPool:(unsigned int)arg1 width:(int)arg2 height:(int)arg3;
- (__CVBuffer *)createPixelBuffer:(unsigned int)arg1 width:(int)arg2 height:(int)arg3;
- (void)dispatchSync:(id /* block */)arg1;
- (void)dispatchAsync:(id /* block */)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
