@interface TXCBGRADrawer : TXCGLDrawer
{
    __CVBuffer * _textureRef; // +0x8
    BOOL _swapColorChannels; // +0x10
    BOOL _enablePerspective; // +0x11
    unsigned int _rgbaTextureUniform; // +0x14
    unsigned int _textureTarget; // +0x18
    unsigned int _rgbaTexture; // +0x1c
}
- (id)initWithContext:(id)arg1 coords:(id)arg2;
- (void)dealloc;
- (unsigned long long)getType;
- (BOOL)drawPixelBuffer:(__CVBuffer *)arg1;
- (BOOL)drawTexture:(unsigned int)arg1 width:(double)arg2 height:(double)arg3;
- (void)setupProgramIfNeed:(unsigned int)arg1 swapColorChannels:(BOOL)arg2;
- (void)draw;
- (void)setupCoordsAndDraw;
- (unsigned int)rgbaTextureUniform;
- (unsigned int)textureTarget;
- (unsigned int)rgbaTexture;
- (void)setRgbaTexture:(unsigned int)arg1;
- (BOOL)swapColorChannels;
- (BOOL)enablePerspective;
- (void)setEnablePerspective:(BOOL)arg1;
@end
