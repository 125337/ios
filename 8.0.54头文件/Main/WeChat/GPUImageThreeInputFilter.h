@interface GPUImageThreeInputFilter : GPUImageTwoInputFilter
{
    GPUImageFramebuffer * thirdInputFramebuffer; // +0x138
    int filterThirdTextureCoordinateAttribute; // +0x140
    int filterInputTextureUniform3; // +0x144
    unsigned long long inputRotation3; // +0x148
    unsigned int filterSourceTexture3; // +0x150
    struct thirdFrameTime; // +0x154
    BOOL hasSetSecondTexture; // +0x16c
    BOOL hasReceivedThirdFrame; // +0x16d
    BOOL thirdFrameWasVideo; // +0x16e
    BOOL thirdFrameCheckDisabled; // +0x16f
}
- (id)initWithFragmentShaderFromString:(id)arg1;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2;
- (void)initializeAttributes;
- (void)disableThirdFrameCheck;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (long long)nextAvailableTextureIndex;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (void)setInputSize:(CGSize)arg1 atIndex:(long long)arg2;
- (int)generateFrameBuffer:(BOOL)arg1 newSize:(CGSize)arg2;
- (void)destroyFrameBuffer;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (CGSize)rotatedSize:(CGSize)arg1 forIndex:(long long)arg2;
- (void)newFrameReadyAtTime:(struct)arg1 atIndex:(long long)arg2;
- (void).cxx_destruct;
@end

