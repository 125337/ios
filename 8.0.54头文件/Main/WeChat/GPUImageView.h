@interface GPUImageView : UIView <GPUImageInput>
{
    unsigned long long inputRotation; // +0x8
    GPUImageFramebuffer * inputFramebufferForDisplay; // +0x10
    unsigned int displayRenderbuffer; // +0x18
    unsigned int displayFramebuffer; // +0x1c
    GLProgram * displayProgram; // +0x20
    int displayPositionAttribute; // +0x28
    int displayTextureCoordinateAttribute; // +0x2c
    int displayInputTextureUniform; // +0x30
    CGSize inputImageSize; // +0x38
    float[8] imageVertices; // +0x48
    float backgroundColorRed; // +0x68
    float backgroundColorGreen; // +0x6c
    float backgroundColorBlue; // +0x70
    float backgroundColorAlpha; // +0x74
    CGSize boundsSizeAtFrameBufferEpoch; // +0x78
    BOOL enabled; // +0x88
    unsigned long long aspectRatio; // +0x90
    unsigned long long _fillMode; // +0x98
    CGSize _sizeInPixels; // +0xa0
}
+ (Class)layerClass;
+ (const float *)textureCoordinatesForRotation:(unsigned long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)layoutSubviews;
- (void)dealloc;
- (void)createDisplayFramebuffer;
- (void)destroyDisplayFramebuffer;
- (void)setDisplayFramebuffer;
- (void)presentFramebuffer;
- (void)recalculateViewGeometry;
- (void)setBackgroundColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)newFrameReadyAtTime:(struct)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (int)generateFrameBuffer:(BOOL)arg1 newSize:(CGSize)arg2;
- (void)destroyFrameBuffer;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)setInputSize:(CGSize)arg1 atIndex:(long long)arg2;
- (CGSize)maximumOutputSize;
- (void)endProcessing;
- (BOOL)shouldIgnoreUpdatesToThisTarget;
- (BOOL)wantsMonochromeInput;
- (void)setCurrentlyReceivingMonochromeInput:(BOOL)arg1;
- (CGSize)sizeInPixels;
- (void)setFillMode:(unsigned long long)arg1;
- (unsigned long long)aspectRatio;
- (void)setAspectRatio:(unsigned long long)arg1;
- (unsigned long long)fillMode;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end

