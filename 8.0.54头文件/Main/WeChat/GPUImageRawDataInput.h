@interface GPUImageRawDataInput : GPUImageOutput
{
    CGSize uploadedImageSize; // +0x70
    CGSize uploadedChromaSize; // +0x80
    GPUImageFramebuffer * inputLumaTexture; // +0x90
    GPUImageFramebuffer * inputChromaTexture; // +0x98
    NSObject<OS_dispatch_semaphore> * dataUpdateSemaphore; // +0xa0
    GLProgram * convertColorProgram; // +0xa8
    int filterPositionAttribute; // +0xb0
    int filterTextureCoordinateAttribute; // +0xb4
    int filterInputTextureUniform; // +0xb8
    int filterSecondTextureCoordinateAttribute; // +0xbc
    int filterInputTextureUniform2; // +0xc0
    float backgroundColorRed; // +0xc4
    float backgroundColorGreen; // +0xc8
    float backgroundColorBlue; // +0xcc
    float backgroundColorAlpha; // +0xd0
    BOOL isEndProcessing; // +0xd4
    BOOL useYUV420toRGB; // +0xd5
    CGSize currentFilterSize; // +0xd8
    unsigned long long inputRotation; // +0xe8
    BOOL currentlyReceivingMonochromeInput; // +0xf0
    NSMutableDictionary * uniformStateRestorationBlocks; // +0xf8
    NSObject<OS_dispatch_semaphore> * imageCaptureSemaphore; // +0x100
    int _pixelFormat; // +0x108
    int _pixelType; // +0x10c
}
- (id)initWithBytes:(char *)arg1 size:(CGSize)arg2;
- (id)initWithBytes:(char *)arg1 size:(CGSize)arg2 pixelFormat:(int)arg3;
- (id)initWithBytes:(char *)arg1 size:(CGSize)arg2 pixelFormat:(int)arg3 type:(int)arg4;
- (void)initYUVtoRGB:(BOOL)arg1;
- (void)initYUVtoRGBConversin;
- (void)dealloc;
- (void)initializeAttributes;
- (id)renderYUV420toRGB:(unsigned int)arg1 ChromaTexture:(unsigned int)arg2;
- (void)uploadBytes:(char *)arg1;
- (void)uploadBytes:(char *)arg1 NeedRender420ToRGB:(BOOL)arg2;
- (void)updateDataFromBytes:(char *)arg1 size:(CGSize)arg2;
- (void)processData;
- (void)processDataForTimestamp:(struct)arg1;
- (CGSize)outputImageSize;
- (int)pixelFormat;
- (void)setPixelFormat:(int)arg1;
- (int)pixelType;
- (void)setPixelType:(int)arg1;
- (void).cxx_destruct;
@end

