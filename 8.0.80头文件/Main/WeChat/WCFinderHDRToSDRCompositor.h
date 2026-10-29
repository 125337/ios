@interface WCFinderHDRToSDRCompositor : NSObject <AVVideoCompositing>
{
    id <MTLDevice> _device; // +0x8
    id <MTLCommandQueue> _commandQueue; // +0x10
    id <MTLLibrary> _shaderLibrary; // +0x18
    id <MTLRenderPipelineState> _renderPipelineState; // +0x20
    __CVMetalTextureCache * _textureCache; // +0x28
    __CVPixelBufferPool * _pixelBufferPool; // +0x30
    AVVideoCompositionRenderContext * _renderContext; // +0x38
    CIContext * _ciContext; // +0x40
    CGSize _currentRenderSize; // +0x48
}
- (id)init;
- (void)dealloc;
- (BOOL)setupMetalPipeline;
- (BOOL)loadShaderLibrary;
- (BOOL)createRenderPipelineStateWithDevice:(id)arg1;
- (void)createPixelBufferPoolWithSize:(CGSize)arg1;
- (id)sourcePixelBufferAttributes;
- (id)requiredPixelBufferAttributesForRenderContext;
- (void)renderContextChanged:(id)arg1;
- (BOOL)supportsHDRSourceFrames;
- (void)startVideoCompositionRequest:(id)arg1;
- (__CVBuffer *)processPixelBuffer:(__CVBuffer *)arg1 transform:(CGAffineTransform)arg2 renderContext:(id)arg3 error:(id *)arg4;
- (__CVBuffer *)rotatePixelBuffer:(__CVBuffer *)arg1 rotation:(unsigned int)arg2 error:(id *)arg3;
- (void)executeRenderingWithInputTexture:(id)arg1 outputTexture:(id)arg2;
- (unsigned int)rotationFromTransform:(CGAffineTransform)arg1;
- (id)device;
- (void)setDevice:(id)arg1;
- (id)commandQueue;
- (void)setCommandQueue:(id)arg1;
- (id)shaderLibrary;
- (void)setShaderLibrary:(id)arg1;
- (id)renderPipelineState;
- (void)setRenderPipelineState:(id)arg1;
- (__CVMetalTextureCache *)textureCache;
- (void)setTextureCache:(__CVMetalTextureCache *)arg1;
- (__CVPixelBufferPool *)pixelBufferPool;
- (void)setPixelBufferPool:(__CVPixelBufferPool *)arg1;
- (CGSize)currentRenderSize;
- (void)setCurrentRenderSize:(CGSize)arg1;
- (id)renderContext;
- (void)setRenderContext:(id)arg1;
- (id)ciContext;
- (void)setCiContext:(id)arg1;
- (void).cxx_destruct;
@end
