@interface MMLiveILinkCompositerTextureWrap : NSObject
{
    unsigned int _textureID; // +0x8
    __CVBuffer * _openGLESTexture; // +0x10
    __CVBuffer * _pixelBuffer; // +0x18
    unsigned long long _textureWidth; // +0x20
    unsigned long long _textureHeight; // +0x28
}
- (void)dealloc;
- (__CVBuffer *)openGLESTexture;
- (void)setOpenGLESTexture:(__CVBuffer *)arg1;
- (__CVBuffer *)pixelBuffer;
- (void)setPixelBuffer:(__CVBuffer *)arg1;
- (unsigned long long)textureWidth;
- (void)setTextureWidth:(unsigned long long)arg1;
- (unsigned long long)textureHeight;
- (void)setTextureHeight:(unsigned long long)arg1;
- (unsigned int)textureID;
- (void)setTextureID:(unsigned int)arg1;
@end
