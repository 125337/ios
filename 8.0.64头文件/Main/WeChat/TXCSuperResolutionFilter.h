@interface TXCSuperResolutionFilter : NSObject
{
    id <MTLTexture>[3] _cpuTexturesCache; // +0x8
    shared_ptr<std::vector<int>> _lutBuffer; // +0x20
    shared_ptr<liteav::video::GraphicsContext> _graphicsContext; // +0x30
    BOOL _initialized; // +0x40
    id <MTLDevice> _device; // +0x48
    id <MTLCommandQueue> _commandQueue; // +0x50
    __CVMetalTextureCache * _metalTextureCache; // +0x58
    TXCYSuperResolutionFilterMetal * _yFilter; // +0x60
    TXCNV12UVSuperResolutionFilterMetal * _nv12uvFilter; // +0x68
    TXCI420UVSuperResolutionFilterMetal * _i420uvFilter; // +0x70
}
- (id)initWithGraphicsContext:(shared_ptr<liteav::video::GraphicsContext>)arg1 lutBuffer:(const void *)arg2;
- (void)dealloc;
- (void)initialize;
- (BOOL)doInitialize;
- (void)uninitialize;
- (id)nv12uvFilter;
- (id)i420uvFilter;
- (BOOL)process:(const NativePixelFrame *)arg1 target:(NativePixelFrame *)arg2;
- (BOOL)processNv12Frame:(__CVBuffer *)arg1 target:(__CVBuffer *)arg2;
- (BOOL)processI420Frame:(const void *)arg1 target:(__CVBuffer *)arg2;
- (id)metalTextureFromNV12PixelBuffer:(__CVBuffer *)arg1 planeIndex:(unsigned long long)arg2;
- (id)metalTextureFromI420PixelBuffer:(__CVBuffer *)arg1 planeIndex:(unsigned long long)arg2;
- (id)metalTextureFromImageFrame:(void *)arg1 planeIndex:(unsigned long long)arg2;
- (BOOL)initialized;
- (void)setInitialized:(BOOL)arg1;
- (id)device;
- (void)setDevice:(id)arg1;
- (id)commandQueue;
- (void)setCommandQueue:(id)arg1;
- (__CVMetalTextureCache *)metalTextureCache;
- (void)setMetalTextureCache:(__CVMetalTextureCache *)arg1;
- (id)yFilter;
- (void)setYFilter:(id)arg1;
- (void)setNv12uvFilter:(id)arg1;
- (void)setI420uvFilter:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
