@interface TXCBGRADrawer : TXCGLDrawer
{
    __CVBuffer * _textureRef; // +0x8
    BOOL _preferGPUUpload; // +0x10
    unsigned int _rgbaTextureUniform; // +0x14
    unsigned int _textureTarget; // +0x18
    unsigned int _rgbaTexture; // +0x1c
}
- (id)initWithContext:(id)arg1 coords:(id)arg2;
- (void)dealloc;
- (unsigned long long)getType;
- (BOOL)drawPixelBuffer:(__CVBuffer *)arg1;
- (BOOL)drawTexture:(unsigned int)arg1 width:(double)arg2 height:(double)arg3;
- (void)setupProgramIfNeed:(unsigned int)arg1;
- (void)draw;
- (unsigned int)rgbaTextureUniform;
- (unsigned int)textureTarget;
- (unsigned int)rgbaTexture;
- (void)setRgbaTexture:(unsigned int)arg1;
- (BOOL)preferGPUUpload;
- (void)setPreferGPUUpload:(BOOL)arg1;
@end

