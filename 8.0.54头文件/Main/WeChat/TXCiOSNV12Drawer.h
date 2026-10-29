@interface TXCiOSNV12Drawer : TXCBaseYUVDrawer
{
    __CVBuffer * _yTextureRef; // +0x8
    __CVBuffer * _uvTextureRef; // +0x10
    unsigned int _yUniform; // +0x18
    unsigned int _uvUniform; // +0x1c
}
- (unsigned int)yTexture;
- (unsigned int)uvTexture;
- (id)initWithContext:(id)arg1 coords:(id)arg2;
- (void)dealloc;
- (unsigned long long)getType;
- (BOOL)drawPixelBuffer:(__CVBuffer *)arg1;
- (BOOL)drawTexture:(unsigned int)arg1 width:(double)arg2 height:(double)arg3;
- (void)setupProgramIfNeed;
- (void)uploadTextures:(__CVBuffer *)arg1;
- (void)draw;
- (unsigned int)yUniform;
- (unsigned int)uvUniform;
@end

