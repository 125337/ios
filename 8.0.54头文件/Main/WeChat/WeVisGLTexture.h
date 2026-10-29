@interface WeVisGLTexture : NSObject
{
    BOOL mOwnTextureId; // +0x8
    unsigned int _textureId; // +0xc
    __CVBuffer * _texture; // +0x10
    CGSize _texSize; // +0x18
}
- (id)initWithTextureRef:(__CVBuffer *)arg1 ownTextureId:(BOOL)arg2;
- (id)initWithTarget:(unsigned int)arg1 width:(int)arg2 height:(int)arg3 internalFormat:(int)arg4 format:(unsigned int)arg5 type:(unsigned int)arg6 data:(const void *)arg7;
- (id)initWithTarget:(unsigned int)arg1 width:(int)arg2 height:(int)arg3 internalFormat:(int)arg4 format:(unsigned int)arg5 type:(unsigned int)arg6 data:(const void *)arg7 ownTexture:(BOOL)arg8;
- (void)dealloc;
- (__CVBuffer *)texture;
- (void)setTexture:(__CVBuffer *)arg1;
- (unsigned int)textureId;
- (void)setTextureId:(unsigned int)arg1;
- (CGSize)texSize;
- (void)setTexSize:(CGSize)arg1;
@end

