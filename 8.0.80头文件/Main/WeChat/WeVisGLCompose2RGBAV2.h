@interface WeVisGLCompose2RGBAV2 : NSObject
{
    int _outputWidth; // +0x8
    int _outputHeight; // +0xc
    unsigned int _maxComposeCnt; // +0x10
    unsigned int _maxTextureUnits; // +0x14
    WeVisGLProgram * _rgbaProgram; // +0x18
    WeVisGLProgram * _yuv420Program; // +0x20
    unsigned int _uvRGBAMatrixLoc; // +0x28
    unsigned int _uvRGBATranslateLoc; // +0x2c
    unsigned int _uvYUVMatrixLoc; // +0x30
    unsigned int _uvYUVTranslateLoc; // +0x34
    unsigned int _positionSlot; // +0x38
    unsigned int _texCoordSlot; // +0x3c
    unsigned int _elementIndexSlot; // +0x40
    unsigned int _yuvToRgbMatrixLoc; // +0x44
    unsigned int _yuvOffsetLoc; // +0x48
    BOOL _isInitialized; // +0x4c
}
- (id)init;
- (void)bindUniformLocations;
- (void)setOutputWidth:(int)arg1 outputHeight:(int)arg2;
- (void)composeElements:(id)arg1 transpose:(BOOL)arg2 rotation:(int)arg3;
- (void)composeElements:(id)arg1 uvTransform:(int)arg2;
- (id)createBatchesFromElements:(id)arg1;
- (void)renderBatch:(id)arg1 uvTransform:(int)arg2;
- (id)programForFormatType:(long long)arg1;
- (void)convertVerticeCoordinateForElement:(id)arg1 toArray:(float *)arg2;
- (void)convertTexCoordinateForElement:(id)arg1 toArray:(float *)arg2;
- (void)convertTexCoordinateToFillModeForElement:(id)arg1 inArray:(float *)arg2;
- (BOOL)isInitialized;
- (void).cxx_destruct;
@end
