@interface TXCSuperResolutionFilter : NSObject
{
    id <MTLTexture>[3] _cpuTexturesCache; // +0x8
    shared_ptr<std::vector<float>> _lut1xBuffer; // +0x20
    shared_ptr<std::vector<float>> _lut2xBuffer; // +0x30
    shared_ptr<liteav::video::GraphicsContext> _graphicsContext; // +0x40
    int _currentScale; // +0x50
    BOOL _initialized; // +0x54
    id <MTLDevice> _device; // +0x58
    id <MTLCommandQueue> _commandQueue; // +0x60
    __CVMetalTextureCache * _metalTextureCache; // +0x68
    id <TXCYSuperResolutionFilterMetalInterface> _yFilter; // +0x70
    TXCNV12UVSuperResolutionFilterMetal * _nv12uvFilter; // +0x78
    TXCI420UVSuperResolutionFilterMetal * _i420uvFilter; // +0x80
}
- (id)initWithGraphicsContext:(shared_ptr<liteav::video::GraphicsContext>)arg1 lut1xBuffer:(const void *)arg2 lut2xBuffer:(const void *)arg3;
- (void)dealloc;
- (void)initialize;
- (BOOL)doInitialize;
- (void)uninitialize;
- (id)nv12uvFilter;
- (id)i420uvFilter;
- (void)pretest:(const NativePixelFrame *)arg1 result:(void *)arg2;
- (BOOL)recreateYFilterIfScaleChanged:(int)arg1;
- (BOOL)process:(const NativePixelFrame *)arg1 target:(NativePixelFrame *)arg2 scale:(int)arg3;
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
