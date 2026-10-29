@interface TXCComputeCommandMetal : NSObject
{
    BOOL _initialized; // +0x8
    id <MTLDevice> _device; // +0x10
    id <MTLLibrary> _library; // +0x18
    id <MTLComputePipelineState> _pipelineState; // +0x20
    NSString * _shaderSource; // +0x28
    NSString * _kernelFunction; // +0x30
    NSData * _metallibData; // +0x38
}
- (id)initWithDevice:(id)arg1 shaderSource:(id)arg2 kernelFunction:(id)arg3;
- (id)initWithDevice:(id)arg1 metallibData:(const void *)arg2 length:(unsigned long long)arg3 kernelFunction:(id)arg4;
- (BOOL)setupPipeline;
- (struct)threadsPerThreadgroup;
- (void)dispatchThreadgroups:(struct)arg1 encoder:(id)arg2;
- (BOOL)compute:(id)arg1 computeSize:(struct)arg2 execute:(id /* block */)arg3;
- (BOOL)initialized;
- (void)setInitialized:(BOOL)arg1;
- (id)device;
- (void)setDevice:(id)arg1;
- (id)library;
- (void)setLibrary:(id)arg1;
- (id)pipelineState;
- (void)setPipelineState:(id)arg1;
- (id)shaderSource;
- (void)setShaderSource:(id)arg1;
- (id)kernelFunction;
- (void)setKernelFunction:(id)arg1;
- (id)metallibData;
- (void)setMetallibData:(id)arg1;
- (void).cxx_destruct;
@end
