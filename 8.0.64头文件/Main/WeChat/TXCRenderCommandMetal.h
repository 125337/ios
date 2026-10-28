@interface TXCRenderCommandMetal : NSObject
{
    BOOL _initialized; // +0x8
    id <MTLDevice> _device; // +0x10
    id <MTLLibrary> _library; // +0x18
    unsigned long long _pixelFormat; // +0x20
    id <MTLRenderPipelineState> _pipelineState; // +0x28
    NSString * _shaderSource; // +0x30
    NSString * _vertexFunction; // +0x38
    NSString * _fragmentFunction; // +0x40
    MTLRenderPassDescriptor * _renderPassDescriptor; // +0x48
}
- (id)initWithDevice:(id)arg1 shaderSource:(id)arg2 vertexFunction:(id)arg3 fragmentFunction:(id)arg4;
- (id)initWithDevice:(id)arg1 pixelFormat:(unsigned long long)arg2 shaderSource:(id)arg3 vertexFunction:(id)arg4 fragmentFunction:(id)arg5;
- (BOOL)setupPipeline;
- (id)createNormalVerticesBuffer;
- (void)setupRenderPassDescriptorForTexture:(id)arg1;
- (BOOL)render:(id)arg1 outputTexture:(id)arg2 execute:(id /* block */)arg3;
- (BOOL)initialized;
- (void)setInitialized:(BOOL)arg1;
- (id)device;
- (void)setDevice:(id)arg1;
- (id)library;
- (void)setLibrary:(id)arg1;
- (unsigned long long)pixelFormat;
- (void)setPixelFormat:(unsigned long long)arg1;
- (id)pipelineState;
- (void)setPipelineState:(id)arg1;
- (id)shaderSource;
- (void)setShaderSource:(id)arg1;
- (id)vertexFunction;
- (void)setVertexFunction:(id)arg1;
- (id)fragmentFunction;
- (void)setFragmentFunction:(id)arg1;
- (id)renderPassDescriptor;
- (void)setRenderPassDescriptor:(id)arg1;
- (void).cxx_destruct;
@end
