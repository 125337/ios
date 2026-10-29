@interface CdnRenderFrame : NSObject
{
    int _texture; // +0x8
    int _maskTexture; // +0xc
    __CVBuffer * _pixelBuffer; // +0x10
    char * _texBuff; // +0x18
    MMLiveTextureBuffer * _maskTexBuffer; // +0x20
    CGSize _textureSize; // +0x28
    CGSize _maskTextureSize; // +0x38
}
- (__CVBuffer *)pixelBuffer;
- (void)setPixelBuffer:(__CVBuffer *)arg1;
- (char *)texBuff;
- (void)setTexBuff:(char *)arg1;
- (int)texture;
- (void)setTexture:(int)arg1;
- (CGSize)textureSize;
- (void)setTextureSize:(CGSize)arg1;
- (int)maskTexture;
- (void)setMaskTexture:(int)arg1;
- (id)maskTexBuffer;
- (void)setMaskTexBuffer:(id)arg1;
- (CGSize)maskTextureSize;
- (void)setMaskTextureSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
