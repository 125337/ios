@interface WeVisGLComposeQuad : NSObject
{
    int outputWidth; // +0x8
    int outputHeight; // +0xc
    WeVisGLProgram * mQuadProgram; // +0x10
    int mUVTransform; // +0x18
    unsigned int positionSlot; // +0x1c
    unsigned int texCoordSlot; // +0x20
    unsigned int elementIndexSlot; // +0x24
    unsigned int mUvMatrixLoc; // +0x28
    unsigned int mUvTranslateLoc; // +0x2c
    NSMutableArray * texUniformWrapperArr; // +0x30
    unsigned int[8] yuvTypeUniformArr; // +0x38
    int maxComposeCnt; // +0x58
    BOOL _isInitialized; // +0x5c
}
- (id)initWithMaxSupportComposeCnt:(int)arg1;
- (void)bindUniforms;
- (void)setOutputWidth:(int)arg1 outputHeight:(int)arg2;
- (void)composeElements:(id)arg1 uvTransform:(int)arg2;
- (void)convertVerticeCoordinateForElement:(id)arg1 toArray:(float *)arg2;
- (void)convertTexCoordinateForElement:(id)arg1 toArray:(float *)arg2;
- (void)convertTexCoordinateToFillModeForElement:(id)arg1 inArray:(float *)arg2;
- (const char *)getTextureYNameAtIndex:(int)arg1;
- (const char *)getTextureUVNameAtIndex:(int)arg1;
- (const char *)getYuvTypeNameAtIndex:(int)arg1;
- (const char *)getRectNameAtIndex:(int)arg1;
- (unsigned int)getTextureToBindAtIndex:(int)arg1;
- (const char *)getUVScaleOffsetNameAtIndex:(int)arg1;
- (BOOL)isInitialized;
- (void)setIsInitialized:(BOOL)arg1;
- (void).cxx_destruct;
@end
