@interface TAVMediaRenderer : NSObject <MTKViewDelegate>
{
    BOOL _firstFrameDidAppear; // +0x8
    id /* block */ _firstFrameAppearBlock; // +0x10
    id <MTLRenderPipelineState> _renderPipelineState; // +0x18
    MTLRenderPassDescriptor * _renderPassDescriptor; // +0x20
    id <MTLTexture> _inputTexture; // +0x28
    id <MTLBuffer> _positionBuffer; // +0x30
    id <MTLBuffer> _textureCoordinateBuffer; // +0x38
    TAVMediaMetalView * _metalView; // +0x40
    CGSize _textureSize; // +0x48
}
+ (id)convertPixelBuffer:(__CVBuffer *)arg1;
- (id)initWithMetalKitView:(id)arg1;
- (void)updatePixelBuffer:(__CVBuffer *)arg1;
- (void)refreshMetalView;
- (void)drawInMTKView:(id)arg1;
- (void)mtkView:(id)arg1 drawableSizeWillChange:(CGSize)arg2;
- (id /* block */)firstFrameAppearBlock;
- (void)setFirstFrameAppearBlock:(id /* block */)arg1;
- (id)renderPipelineState;
- (void)setRenderPipelineState:(id)arg1;
- (id)renderPassDescriptor;
- (void)setRenderPassDescriptor:(id)arg1;
- (id)inputTexture;
- (void)setInputTexture:(id)arg1;
- (id)positionBuffer;
- (void)setPositionBuffer:(id)arg1;
- (id)textureCoordinateBuffer;
- (void)setTextureCoordinateBuffer:(id)arg1;
- (id)metalView;
- (void)setMetalView:(id)arg1;
- (CGSize)textureSize;
- (void)setTextureSize:(CGSize)arg1;
- (BOOL)firstFrameDidAppear;
- (void)setFirstFrameDidAppear:(BOOL)arg1;
- (void).cxx_destruct;
@end

