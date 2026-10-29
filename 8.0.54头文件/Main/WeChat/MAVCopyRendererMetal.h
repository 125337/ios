@interface MAVCopyRendererMetal : NSObject
{
    MTLRenderPassDescriptor * _renderToTextureRenderPassDescriptor; // +0x8
    float _inputRatio; // +0x10
    MAVMetalContext * _context; // +0x18
    id <MTLDevice> _device; // +0x20
    id <MTLCommandQueue> _commandQueue; // +0x28
    id <MTLRenderCommandEncoder> _encoder; // +0x30
    MTLRenderPipelineDescriptor * _pipelineStateDescriptor; // +0x38
    id <MTLRenderPipelineState> _renderToTextureRenderPipeline; // +0x40
    id <MTLTexture> _inputTexture; // +0x48
    struct _inputMatrix; // +0x50
}
- (id)initWithContext:(id)arg1 CommandQueue:(id)arg2;
- (void)fromTexture:(id)arg1;
- (void)fromTexture:(id)arg1 Rotate:(long long)arg2;
- (void)toTexture:(id)arg1;
- (void)toScreen:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)device;
- (void)setDevice:(id)arg1;
- (id)commandQueue;
- (void)setCommandQueue:(id)arg1;
- (id)encoder;
- (void)setEncoder:(id)arg1;
- (id)pipelineStateDescriptor;
- (void)setPipelineStateDescriptor:(id)arg1;
- (id)renderToTextureRenderPipeline;
- (void)setRenderToTextureRenderPipeline:(id)arg1;
- (id)inputTexture;
- (void)setInputTexture:(id)arg1;
- (float)inputRatio;
- (void)setInputRatio:(float)arg1;
- (struct)inputMatrix;
- (void)setInputMatrix:(struct)arg1;
- (void).cxx_destruct;
@end

