@interface GPUImageFourInputFilter : GPUImageThreeInputFilter
{
    GPUImageFramebuffer * fourthInputFramebuffer; // +0x170
    int filterFourthTextureCoordinateAttribute; // +0x178
    int filterInputTextureUniform4; // +0x17c
    unsigned long long inputRotation4; // +0x180
    unsigned int filterSourceTexture4; // +0x188
    struct fourthFrameTime; // +0x18c
    BOOL hasSetThirdTexture; // +0x1a4
    BOOL hasReceivedFourthFrame; // +0x1a5
    BOOL fourthFrameWasVideo; // +0x1a6
    BOOL fourthFrameCheckDisabled; // +0x1a7
}
- (id)initWithFragmentShaderFromString:(id)arg1;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2;
- (void)initializeAttributes;
- (void)disableFourthFrameCheck;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (long long)nextAvailableTextureIndex;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (int)generateFrameBuffer:(BOOL)arg1 newSize:(CGSize)arg2;
- (void)destroyFrameBuffer;
- (void)setInputSize:(CGSize)arg1 atIndex:(long long)arg2;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (CGSize)rotatedSize:(CGSize)arg1 forIndex:(long long)arg2;
- (void)newFrameReadyAtTime:(struct)arg1 atIndex:(long long)arg2;
- (void).cxx_destruct;
@end

