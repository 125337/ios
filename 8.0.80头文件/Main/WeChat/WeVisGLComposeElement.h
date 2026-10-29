@interface WeVisGLComposeElement : NSObject
{
    __CVBuffer * texY; // +0x8
    __CVBuffer * texUV; // +0x10
    __CVOpenGLESTextureCache * cvTextureCache; // +0x18
    unsigned int _textureY; // +0x20
    unsigned int _textureUV; // +0x24
    unsigned int _textureRGBA; // +0x28
    long long _formatType; // +0x30
    CGSize _inputSize; // +0x38
    CGRect _normalizeFrame; // +0x48
}
- (void)dealloc;
- (void)setSharedCVTexCache:(__CVOpenGLESTextureCache *)arg1;
- (void)transferFromRenderFrame:(id)arg1;
- (BOOL)isValid;
- (void)clear;
- (BOOL)getTexYUVFromPixelBuffer:(__CVBuffer *)arg1;
- (long long)getElementFormatFromRenderFormat:(id)arg1;
- (long long)formatType;
- (void)setFormatType:(long long)arg1;
- (unsigned int)textureY;
- (void)setTextureY:(unsigned int)arg1;
- (unsigned int)textureUV;
- (void)setTextureUV:(unsigned int)arg1;
- (unsigned int)textureRGBA;
- (void)setTextureRGBA:(unsigned int)arg1;
- (CGSize)inputSize;
- (void)setInputSize:(CGSize)arg1;
- (CGRect)normalizeFrame;
- (void)setNormalizeFrame:(CGRect)arg1;
@end
