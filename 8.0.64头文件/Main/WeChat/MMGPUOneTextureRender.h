@interface MMGPUOneTextureRender : NSObject
{
    MMGPUGLProgram * renderProgram; // +0x8
    int filterPositionAttribute; // +0x10
    int filterTextureCoordinateAttribute; // +0x14
    int filterInputTextureUniform; // +0x18
    float backgroundColorRed; // +0x1c
    float backgroundColorGreen; // +0x20
    float backgroundColorBlue; // +0x24
    float backgroundColorAlpha; // +0x28
    CGSize currentFilterSize; // +0x30
    unsigned int texture; // +0x40
    unsigned int framebuffer; // +0x44
    unsigned long long inputRotation; // +0x48
}
- (id)init;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderString:(id)arg2;
- (id)initWithFragmentShaderFromString:(id)arg1;
- (void)destroybuffers;
- (BOOL)checkGLError;
- (BOOL)updatebuffer:(CGSize)arg1;
- (void)initializeAttributes;
- (int)renderToTextue:(int)arg1 inputRes:(CGSize)arg2;
- (int)getTextureID;
- (void)setInteger:(int)arg1 forUniform:(int)arg2;
- (void)setFloat:(float)arg1 forUniform:(int)arg2;
- (void)dealloc;
- (void).cxx_destruct;
@end
