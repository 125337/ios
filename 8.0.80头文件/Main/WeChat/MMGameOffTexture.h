@interface MMGameOffTexture : NSObject
{
    __CVOpenGLESTextureCache * _textureCache; // +0x8
    BOOL _textureCacheAvailable; // +0x10
    unsigned int _frameBuffer; // +0x14
    OTStatusHolder * _status; // +0x18
    EAGLContext * _context; // +0x20
    OTTextureHolder * _flipTexture; // +0x28
    OTTextureProgram * _program; // +0x30
}
- (id)init;
- (void)dealloc;
- (void)tryInit;
- (void)tryUint;
- (__CVBuffer *)draw:(void *)arg1 size:(unsigned int)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4;
- (id)status;
- (void)setStatus:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (unsigned int)frameBuffer;
- (void)setFrameBuffer:(unsigned int)arg1;
- (id)flipTexture;
- (void)setFlipTexture:(id)arg1;
- (id)program;
- (void)setProgram:(id)arg1;
- (void).cxx_destruct;
@end
