@interface TXCI420Drawer : TXCBaseYUVDrawer
{
    unsigned int _yTexture; // +0x8
    unsigned int _uTexture; // +0xc
    unsigned int _vTexture; // +0x10
    unsigned int _yUniform; // +0x14
    unsigned int _uUniform; // +0x18
    unsigned int _vUniform; // +0x1c
}
- (id)initWithContext:(id)arg1 coords:(id)arg2;
- (void)dealloc;
- (void)setupTextures;
- (unsigned long long)getType;
- (BOOL)drawPixelBuffer:(__CVBuffer *)arg1;
- (BOOL)drawTexture:(unsigned int)arg1 width:(double)arg2 height:(double)arg3;
- (void)setupProgramIfNeed;
- (void)uploadTextures:(__CVBuffer *)arg1;
- (void)draw;
- (unsigned int)yTexture;
- (unsigned int)uTexture;
- (unsigned int)vTexture;
- (unsigned int)yUniform;
- (unsigned int)uUniform;
- (unsigned int)vUniform;
@end
