@interface GPUImageTwoInputFilter : GPUImageFilter
{
    GPUImageFramebuffer * secondInputFramebuffer; // +0xe8
    int filterSecondTextureCoordinateAttribute; // +0xf0
    int filterInputTextureUniform2; // +0xf4
    unsigned long long inputRotation2; // +0xf8
    struct firstFrameTime; // +0x100
    struct secondFrameTime; // +0x118
    BOOL hasSetFirstTexture; // +0x130
    BOOL hasReceivedFirstFrame; // +0x131
    BOOL hasReceivedSecondFrame; // +0x132
    BOOL firstFrameWasVideo; // +0x133
    BOOL secondFrameWasVideo; // +0x134
    BOOL firstFrameCheckDisabled; // +0x135
    BOOL secondFrameCheckDisabled; // +0x136
}
- (id)initWithFragmentShaderFromString:(id)arg1;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2;
- (void)initializeAttributes;
- (void)disableFirstFrameCheck;
- (void)disableSecondFrameCheck;
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
