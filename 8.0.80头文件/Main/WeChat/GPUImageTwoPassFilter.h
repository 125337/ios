@interface GPUImageTwoPassFilter : GPUImageFilter
{
    GPUImageFramebuffer * secondOutputFramebuffer; // +0xe8
    GLProgram * secondFilterProgram; // +0xf0
    int secondFilterPositionAttribute; // +0xf8
    int secondFilterTextureCoordinateAttribute; // +0xfc
    int secondFilterInputTextureUniform; // +0x100
    int secondFilterInputTextureUniform2; // +0x104
    NSMutableDictionary * secondProgramUniformStateRestorationBlocks; // +0x108
}
- (id)initWithFirstStageVertexShaderFromString:(id)arg1 firstStageFragmentShaderFromString:(id)arg2 secondStageVertexShaderFromString:(id)arg3 secondStageFragmentShaderFromString:(id)arg4;
- (id)initWithFirstStageFragmentShaderFromString:(id)arg1 secondStageFragmentShaderFromString:(id)arg2;
- (void)initializeSecondaryAttributes;
- (id)framebufferForOutput;
- (void)removeOutputFramebuffer;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (int)generateFrameBuffer:(BOOL)arg1 newSize:(CGSize)arg2;
- (void)destroyFrameBuffer;
- (void)setAndExecuteUniformStateCallbackAtIndex:(int)arg1 forProgram:(id)arg2 toBlock:(id /* block */)arg3;
- (void)setUniformsForProgramAtIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
