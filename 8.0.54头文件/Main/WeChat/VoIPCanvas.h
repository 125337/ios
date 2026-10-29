@interface VoIPCanvas : NSObject
{
    __CVMetalTextureCache * _metalTextureCache; // +0x8
    BOOL _isRendering; // +0x10
    BOOL _needRender; // +0x11
    VoIPCanvasBuffer * _buffer; // +0x18
    NSMutableArray * _mutablePlugins; // +0x20
    NSObject<OS_dispatch_queue> * _queue; // +0x28
    id <MTLDevice> _device; // +0x30
    id <MTLCommandQueue> _commandQueue; // +0x38
}
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 queue:(id)arg3;
- (id)initWithBuffer:(id)arg1 metalTextureCache:(__CVMetalTextureCache *)arg2 device:(id)arg3 commandQueue:(id)arg4 width:(unsigned long long)arg5 height:(unsigned long long)arg6 queue:(id)arg7;
- (void)dealloc;
- (void)addPlugin:(id)arg1;
- (void)delPlugin:(id)arg1;
- (void)resizeWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)render;
- (__CVBuffer *)createMetalTextureFromPixelBuffer:(__CVBuffer *)arg1 pixelFormat:(unsigned long long)arg2 planeIndex:(long long)arg3;
- (void)clear;
- (id)buffer;
- (void)setBuffer:(id)arg1;
- (id)mutablePlugins;
- (void)setMutablePlugins:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)device;
- (void)setDevice:(id)arg1;
- (id)commandQueue;
- (void)setCommandQueue:(id)arg1;
- (BOOL)isRendering;
- (void)setIsRendering:(BOOL)arg1;
- (BOOL)needRender;
- (void)setNeedRender:(BOOL)arg1;
- (void).cxx_destruct;
@end

