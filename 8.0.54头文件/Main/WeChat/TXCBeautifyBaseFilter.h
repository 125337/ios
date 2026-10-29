@interface TXCBeautifyBaseFilter : NSObject <TXCBeautifyBaseFilterDelegate, TXCBeautifyShaderProvider>
{
    BOOL _enableSharpnessEnhancement; // +0x8
    float _beautyLevel; // +0xc
    float _whitenessLevel; // +0x10
    float _ruddinessLevel; // +0x14
    NSObject<TXCBeautifyBaseFilterDelegate> * _delegate; // +0x18
    NSString * _fragmentShaderString; // +0x20
    NSString * _vertexShaderString; // +0x28
    TXCGlProgram * _program; // +0x30
    id <TXIGlContext> _context; // +0x38
    TXCGlFrameBuffer * _frameBuffer; // +0x40
    TXCVideoFrameCoords * _frameCoords; // +0x48
    CGSize _outputSize; // +0x50
}
- (id)frameCoords;
- (id)initWithContext:(id)arg1;
- (void)dealloc;
- (void)setUniformsForFilter:(id)arg1 fboSize:(CGSize)arg2;
- (void)configFrameCoord:(id)arg1 inputFame:(id)arg2;
- (unsigned long long)beautyStyle;
- (BOOL)createGlObjectsIfNeeded;
- (id)processVideoFrame:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (CGSize)outputSize;
- (void)setOutputSize:(CGSize)arg1;
- (float)beautyLevel;
- (void)setBeautyLevel:(float)arg1;
- (float)whitenessLevel;
- (void)setWhitenessLevel:(float)arg1;
- (float)ruddinessLevel;
- (void)setRuddinessLevel:(float)arg1;
- (BOOL)enableSharpnessEnhancement;
- (void)setEnableSharpnessEnhancement:(BOOL)arg1;
- (id)fragmentShaderString;
- (void)setFragmentShaderString:(id)arg1;
- (id)vertexShaderString;
- (void)setVertexShaderString:(id)arg1;
- (id)program;
- (void)setProgram:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)frameBuffer;
- (void)setFrameBuffer:(id)arg1;
- (void)setFrameCoords:(id)arg1;
- (void).cxx_destruct;
@end

