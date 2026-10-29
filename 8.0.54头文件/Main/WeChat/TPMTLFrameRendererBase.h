@interface TPMTLFrameRendererBase : NSObject <TPMTLFrameRenderer>
{
    unsigned long long rendererType; // +0x8
    id <MTLDevice> _mtlDevice; // +0x10
    id <MTLCommandQueue> _cmdQueue; // +0x18
    id <MTLLibrary> _library; // +0x20
    id <MTLBuffer> _vertexTexBuffer; // +0x28
    id <MTLRenderPipelineState> _pipelineState; // +0x30
    MTLRenderPassDescriptor * _renderpassDescriptor; // +0x38
    TPMTLDisplayConfig * _displayCfg; // +0x40
}
- (id)initWithMetalDevice:(id)arg1;
- (void)prepareMTLContext;
- (BOOL)prepareRenderer:(id)arg1;
- (id)currentRenderPassDescriptor:(id)arg1;
- (BOOL)render:(TPFrame *)arg1 destination:(id)arg2;
- (void)renderImpl:(id)arg1 withRenderPass:(id)arg2 withCmdBuffer:(id)arg3;
- (id)shaderSource;
- (id)vertexFunctionName;
- (id)fragmentFunctionName;
- (void)uploadResourcesToCommandEncoder:(id)arg1;
- (void)setFrame:(TPFrame *)arg1;
- (unsigned long long)rendererType;
- (id)mtlDevice;
- (void)setMtlDevice:(id)arg1;
- (id)cmdQueue;
- (void)setCmdQueue:(id)arg1;
- (id)library;
- (void)setLibrary:(id)arg1;
- (id)vertexTexBuffer;
- (void)setVertexTexBuffer:(id)arg1;
- (id)pipelineState;
- (void)setPipelineState:(id)arg1;
- (id)renderpassDescriptor;
- (void)setRenderpassDescriptor:(id)arg1;
- (id)displayCfg;
- (void)setDisplayCfg:(id)arg1;
- (void).cxx_destruct;
@end

