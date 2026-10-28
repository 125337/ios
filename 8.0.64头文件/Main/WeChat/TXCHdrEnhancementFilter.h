@interface TXCHdrEnhancementFilter : NSObject
{
    shared_ptr<liteav::video::GraphicsContext> _graphicsContext; // +0x8
    BOOL _initialized; // +0x18
    id <MTLDevice> _device; // +0x20
    id <MTLCommandQueue> _commandQueue; // +0x28
    __CVMetalTextureCache * _metalTextureCache; // +0x30
    double _sigma; // +0x38
    id <MTLBuffer> _vertexBuffer; // +0x40
    id <MTLTexture> _gainTexture; // +0x48
    id <MTLTexture> _blurredTexture; // +0x50
    TXCRenderCommandMetal * _lutCommand; // +0x58
    TXCRenderCommandMetal * _mixCommand; // +0x60
    MPSImageGaussianBlur * _gaussianBlurFilter; // +0x68
    MPSImageBilinearScale * _scaleFilter; // +0x70
}
- (id)initWithGraphicsContext:(shared_ptr<liteav::video::GraphicsContext>)arg1;
- (void)dealloc;
- (void)initialize;
- (void)uninitialize;
- (BOOL)process:(const NativePixelFrame *)arg1 target:(NativePixelFrame *)arg2;
- (BOOL)processTexture:(id)arg1 outputTexture:(id)arg2;
- (void)recreateTexturesIfResolutionChanged:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)fillMetadata:(NativePixelFrame *)arg1;
- (id)metalTextureFromRGBA64LEPixelBuffer:(__CVBuffer *)arg1;
- (BOOL)initialized;
- (void)setInitialized:(BOOL)arg1;
- (id)device;
- (void)setDevice:(id)arg1;
- (id)commandQueue;
- (void)setCommandQueue:(id)arg1;
- (__CVMetalTextureCache *)metalTextureCache;
- (void)setMetalTextureCache:(__CVMetalTextureCache *)arg1;
- (double)sigma;
- (void)setSigma:(double)arg1;
- (id)vertexBuffer;
- (void)setVertexBuffer:(id)arg1;
- (id)gainTexture;
- (void)setGainTexture:(id)arg1;
- (id)blurredTexture;
- (void)setBlurredTexture:(id)arg1;
- (id)lutCommand;
- (void)setLutCommand:(id)arg1;
- (id)mixCommand;
- (void)setMixCommand:(id)arg1;
- (id)gaussianBlurFilter;
- (void)setGaussianBlurFilter:(id)arg1;
- (id)scaleFilter;
- (void)setScaleFilter:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
