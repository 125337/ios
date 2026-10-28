@interface WeVisGLDrawQuad : NSObject
{
    unsigned int mQuadVAO; // +0x8
    unsigned int mQuadVBO; // +0xc
    WeVisGLProgram * mQuadProgram; // +0x10
    float mUvScaleX; // +0x18
    float mUvScaleY; // +0x1c
    float mUvOffsetX; // +0x20
    float mUvOffsetY; // +0x24
    int mUVTransform; // +0x28
    int mUvScaleLoc; // +0x2c
    int mUvOffsetLoc; // +0x30
    int mUvMatrixLoc; // +0x34
    int mUvTranslateLoc; // +0x38
    NSMutableDictionary * mUniformCache; // +0x40
    BOOL _isInitialized; // +0x48
}
- (id)initWithFragShader:(const char *)arg1;
- (void)bindUniform:(const char *)arg1 toTexUnit:(int)arg2;
- (void)bindUniform:(const char *)arg1 toFloatX:(float)arg2 Y:(float)arg3;
- (void)dealloc;
- (void)setupQuadVertexStream;
- (void)drawFromTex0:(unsigned int)arg1 UVTransform:(int)arg2;
- (void)drawFromTex0:(unsigned int)arg1 tex1:(unsigned int)arg2 UVTransform:(int)arg3;
- (BOOL)isInitialized;
- (void)setIsInitialized:(BOOL)arg1;
- (void).cxx_destruct;
@end
