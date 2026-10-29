@interface TXCPixelTransferSessionMetalImpl : NSObject <TXCPixelTransferSession>
{
    vImage_ARGBToYpCbCr _vImageColorConversionInfo; // +0x10
    BOOL _vImageColorConInitialized; // +0x90
    BOOL _colorConversionFullRange; // +0x91
    BOOL _enableColorConversion; // +0x92
    id <MTLDevice> _metalDevice; // +0x98
    id <MTLLibrary> _library; // +0xa0
    id <MTLBuffer> _colorConversionBuffer; // +0xa8
    id <MTLCommandQueue> _commandQueue; // +0xb0
    __CVMetalTextureCache * _metalTextureCache; // +0xb8
    id <MTLFunction> _kernelFunc; // +0xc0
    id <MTLComputePipelineState> _computePipelineState; // +0xc8
    TXCMetalContext * _metalContext; // +0xd0
    __CFString * _colorConversionMartixKey; // +0xd8
}
- (id)initWithMetalContext:(id)arg1;
- (void)dealloc;
- (id)library;
- (BOOL)setupMetal;
- (void)setupKernelFunc:(id)arg1;
- (BOOL)updateColorConversionPropertyIfNeed:(__CVBuffer *)arg1;
- (BOOL)setupMetalColorConversion:(__CVBuffer *)arg1;
- (void)setupCommandBuffer:(id)arg1 inputTexutres:(id)arg2 outputTexutres:(id)arg3 outputsize:(CGSize)arg4;
- (void)metalTransferMetalTexute:(id)arg1 toPixelBuffer:(__CVBuffer *)arg2;
- (BOOL)metalTransferPixelBuffer:(__CVBuffer *)arg1 toPixelBuffer:(__CVBuffer *)arg2;
- (BOOL)setupvImageColorConversion:(__CVBuffer *)arg1;
- (void)vImageTransferARGBPixelBuffer:(__CVBuffer *)arg1 toI420PixelBuffer:(__CVBuffer *)arg2;
- (void)transferPixelBuffer:(__CVBuffer *)arg1 toPixelBuffer:(__CVBuffer *)arg2;
- (void)transferMetalTexture:(id)arg1 toPixelBuffer:(__CVBuffer *)arg2;
- (id)metalDevice;
- (void)setMetalDevice:(id)arg1;
- (void)setLibrary:(id)arg1;
- (id)colorConversionBuffer;
- (void)setColorConversionBuffer:(id)arg1;
- (id)commandQueue;
- (void)setCommandQueue:(id)arg1;
- (__CVMetalTextureCache *)metalTextureCache;
- (void)setMetalTextureCache:(__CVMetalTextureCache *)arg1;
- (id)kernelFunc;
- (void)setKernelFunc:(id)arg1;
- (id)computePipelineState;
- (void)setComputePipelineState:(id)arg1;
- (id)metalContext;
- (void)setMetalContext:(id)arg1;
- (__CFString *)colorConversionMartixKey;
- (void)setColorConversionMartixKey:(__CFString *)arg1;
- (BOOL)colorConversionFullRange;
- (void)setColorConversionFullRange:(BOOL)arg1;
- (BOOL)enableColorConversion;
- (void)setEnableColorConversion:(BOOL)arg1;
- (void).cxx_destruct;
@end
