@interface XFileRenderer : 119__shared_weak_count13__get_deleterERKSt9type_info <MTKViewDelegate>
{
    int _fileId; // +0x8
    vector<simd_float4x4, std::allocator<simd_float4x4>> _transforms; // +0x10
    vector<id<MTLTexture>, std::allocator<id<MTLTexture>>> textures; // +0x28
    long long time; // +0x40
    UIImage * snapshot; // +0x48
    BOOL _firstFrameNotified; // +0x50
    id <MTLDevice> _device; // +0x58
    id <MTLCommandQueue> _commandQueue; // +0x60
    id <MTLRenderPipelineState> _pipelineState; // +0x68
    id <MTLBuffer> _vertexBuffer; // +0x70
    id /* block */ _onFirstFrameRendered; // +0x78
}
- (id)initWithMetalKitView:(int)arg1 mtkView:(id)arg2;
- (void)_setupVertexData;
- (void)_setupPipeline:(id)arg1;
- (void)mtkView:(id)arg1 drawableSizeWillChange:(CGSize)arg2;
- (void)drawInMTKView:(id)arg1;
- (vector<xfile::FrameTileInfo, std::allocator<xfile::FrameTileInfo>>)getFrameTiles;
- (id)device;
- (void)setDevice:(id)arg1;
- (id)commandQueue;
- (void)setCommandQueue:(id)arg1;
- (id)pipelineState;
- (void)setPipelineState:(id)arg1;
- (id)vertexBuffer;
- (void)setVertexBuffer:(id)arg1;
- (id /* block */)onFirstFrameRendered;
- (void)setOnFirstFrameRendered:(id /* block */)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
