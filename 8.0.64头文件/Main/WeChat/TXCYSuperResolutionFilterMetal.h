@interface TXCYSuperResolutionFilterMetal : NSObject
{
    BOOL _initialized; // +0x8
    id <MTLDevice> _device; // +0x10
    id <MTLLibrary> _library; // +0x18
    id <MTLComputePipelineState> _pipelineState; // +0x20
    id <MTLBuffer> _lutBuffer; // +0x28
}
- (id)initWithDevice:(id)arg1 lutBuffer:(const void *)arg2;
- (void)dealloc;
- (BOOL)setupMetal:(const void *)arg1;
- (BOOL)setupLut:(const void *)arg1;
- (BOOL)setupPipeline;
- (BOOL)process:(id)arg1 yTexture:(id)arg2 outputTexture:(id)arg3;
- (BOOL)initialized;
- (void)setInitialized:(BOOL)arg1;
- (id)device;
- (void)setDevice:(id)arg1;
- (id)library;
- (void)setLibrary:(id)arg1;
- (id)pipelineState;
- (void)setPipelineState:(id)arg1;
- (id)lutBuffer;
- (void)setLutBuffer:(id)arg1;
- (void).cxx_destruct;
@end
