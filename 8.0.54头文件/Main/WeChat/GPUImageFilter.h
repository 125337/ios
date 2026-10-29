@interface GPUImageFilter : GPUImageOutput <GPUImageInput>
{
    GPUImageFramebuffer * firstInputFramebuffer; // +0x70
    GLProgram * filterProgram; // +0x78
    int filterPositionAttribute; // +0x80
    int filterTextureCoordinateAttribute; // +0x84
    int filterInputTextureUniform; // +0x88
    float backgroundColorRed; // +0x8c
    float backgroundColorGreen; // +0x90
    float backgroundColorBlue; // +0x94
    float backgroundColorAlpha; // +0x98
    int lumaPositionAttribute; // +0x9c
    int lumaTextureCoordinateAttribute; // +0xa0
    int lumaInputTextureUniform; // +0xa4
    int chromaPositionAttribute; // +0xa8
    int chromaTextureCoordinateAttribute; // +0xac
    int chromaInputTextureUniform; // +0xb0
    BOOL isEndProcessing; // +0xb4
    CGSize currentFilterSize; // +0xb8
    unsigned long long inputRotation; // +0xc8
    BOOL currentlyReceivingMonochromeInput; // +0xd0
    NSMutableDictionary * uniformStateRestorationBlocks; // +0xd8
    NSObject<OS_dispatch_semaphore> * imageCaptureSemaphore; // +0xe0
    BOOL _preventRendering; // +0xe8
    __CVBuffer * _renderTarget; // +0xf0
}
+ (const float *)textureCoordinatesForRotation:(unsigned long long)arg1;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2;
- (void)initRGBtoYUV420Filter;
- (void)setRGB2YUV420Process:(BOOL)arg1;
- (BOOL)isUseRGB2YUV420;
- (id)initWithFragmentShaderFromString:(id)arg1;
- (id)initWithFragmentShaderFromFile:(id)arg1;
- (id)init;
- (void)initializeAttributes;
- (void)initializeLumaAttributes;
- (void)initializeChromaAttributes;
- (void)setupFilterForSize:(CGSize)arg1;
- (void)dealloc;
- (void)useNextFrameForImageCapture;
- (CGImage *)newCGImageFromCurrentlyProcessedOutput;
- (CGSize)sizeOfFBO;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)renderRGBToYCbCrWithVertices;
- (void)informTargetsAboutNewFrameAtTime:(struct)arg1;
- (CGSize)outputFrameSize;
- (void)setBackgroundColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)setInteger:(int)arg1 forUniformName:(id)arg2;
- (void)setFloat:(float)arg1 forUniformName:(id)arg2;
- (void)setSize:(CGSize)arg1 forUniformName:(id)arg2;
- (void)setPoint:(CGPoint)arg1 forUniformName:(id)arg2;
- (void)setFloatVec3:(GPUVector3)arg1 forUniformName:(id)arg2;
- (void)setFloatVec4:(GPUVector4)arg1 forUniform:(id)arg2;
- (void)setFloatArray:(float *)arg1 length:(int)arg2 forUniform:(id)arg3;
- (void)setMatrix3f:(GPUMatrix3x3)arg1 forUniform:(int)arg2 program:(id)arg3;
- (void)setMatrix4f:(GPUMatrix4x4)arg1 forUniform:(int)arg2 program:(id)arg3;
- (void)setFloat:(float)arg1 forUniform:(int)arg2 program:(id)arg3;
- (void)setPoint:(CGPoint)arg1 forUniform:(int)arg2 program:(id)arg3;
- (void)setSize:(CGSize)arg1 forUniform:(int)arg2 program:(id)arg3;
- (void)setVec3:(GPUVector3)arg1 forUniform:(int)arg2 program:(id)arg3;
- (void)setVec4:(GPUVector4)arg1 forUniform:(int)arg2 program:(id)arg3;
- (void)setFloatArray:(float *)arg1 length:(int)arg2 forUniform:(int)arg3 program:(id)arg4;
- (void)setInteger:(int)arg1 forUniform:(int)arg2 program:(id)arg3;
- (void)setAndExecuteUniformStateCallbackAtIndex:(int)arg1 forProgram:(id)arg2 toBlock:(id /* block */)arg3;
- (void)setUniformsForProgramAtIndex:(unsigned long long)arg1;
- (void)newFrameReadyAtTime:(struct)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (CGSize)rotatedSize:(CGSize)arg1 forIndex:(long long)arg2;
- (CGPoint)rotatedPoint:(CGPoint)arg1 forRotation:(unsigned long long)arg2;
- (void)setInputSize:(CGSize)arg1 atIndex:(long long)arg2;
- (int)generateFrameBuffer:(BOOL)arg1 newSize:(CGSize)arg2;
- (void)destroyFrameBuffer;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)forceProcessingAtSize:(CGSize)arg1;
- (void)forceProcessingAtSizeRespectingAspectRatio:(CGSize)arg1;
- (CGSize)maximumOutputSize;
- (void)endProcessing;
- (BOOL)wantsMonochromeInput;
- (BOOL)preventRendering;
- (void)setPreventRendering:(BOOL)arg1;
- (BOOL)currentlyReceivingMonochromeInput;
- (void)setCurrentlyReceivingMonochromeInput:(BOOL)arg1;
- (__CVBuffer *)renderTarget;
- (void).cxx_destruct;
@end

