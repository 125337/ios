@interface TXCMetalRenderKernel : NSObject
{
    TXCMetalContext * _context; // +0x8
    id <MTLRenderPipelineState> _renderPipelineState; // +0x10
    MTLRenderPipelineReflection * _reflection; // +0x18
}
+ (id)kernelWithSource:(id)arg1 context:(id)arg2 vertexFunction:(id)arg3 fragmentFunction:(id)arg4;
+ (id)kernelWithSource:(id)arg1 pixelFormat:(unsigned long long)arg2 context:(id)arg3 vertexFunction:(id)arg4 fragmentFunction:(id)arg5;
- (id)device;
- (id)initWithContext:(id)arg1 renderPipelineState:(id)arg2 reflection:(id)arg3;
- (void)applyFragmentParameters:(id)arg1 encoder:(id)arg2;
- (id)renderTextures:(id)arg1 toTarget:(id)arg2 parameters:(id)arg3 coordinate:(id)arg4;
- (void).cxx_destruct;
@end

