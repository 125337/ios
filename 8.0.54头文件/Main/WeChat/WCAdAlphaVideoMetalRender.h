@interface WCAdAlphaVideoMetalRender : MMUIView <MTKViewDelegate>
{
    int _videoCompositeType; // +0x8
    MTKView * _mtkView; // +0x10
    __CVMetalTextureCache * _textureCache; // +0x18
    id <MTLRenderPipelineState> _pipelineState; // +0x20
    id <MTLCommandQueue> _commandQueue; // +0x28
    id <MTLTexture> _texture; // +0x30
    id <MTLBuffer> _vertices; // +0x38
    unsigned long long _numVertices; // +0x40
    __CVBuffer * _inputPixelBuffer; // +0x48
     _viewportSize; // +0x50
}
- (id)initWithFrame:(CGRect)arg1 videoCompositeType:(int)arg2;
- (void)renderFrame:(__CVBuffer *)arg1;
- (void)clearFrame;
- (void)setup;
- (void)setupMTKView;
- (void)setupPipeline;
- (void)setupVertex;
- (void)setInputPixelBuffer:(__CVBuffer *)arg1;
- (void)dealloc;
- (void)mtkView:(id)arg1 drawableSizeWillChange:(CGSize)arg2;
- (void)drawInMTKView:(id)arg1;
- (void)drawTextureWithEncoder:(id)arg1;
- (int)videoCompositeType;
- (void)setVideoCompositeType:(int)arg1;
- (id)mtkView;
- (void)setMtkView:(id)arg1;
- (__CVMetalTextureCache *)textureCache;
- (void)setTextureCache:(__CVMetalTextureCache *)arg1;
- (1)viewportSize;
- (void)setViewportSize:(id)arg1;
- (id)pipelineState;
- (void)setPipelineState:(id)arg1;
- (id)commandQueue;
- (void)setCommandQueue:(id)arg1;
- (id)texture;
- (void)setTexture:(id)arg1;
- (id)vertices;
- (void)setVertices:(id)arg1;
- (unsigned long long)numVertices;
- (void)setNumVertices:(unsigned long long)arg1;
- (__CVBuffer *)inputPixelBuffer;
- (void).cxx_destruct;
@end

