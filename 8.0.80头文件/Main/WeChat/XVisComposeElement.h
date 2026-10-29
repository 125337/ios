@interface XVisComposeElement : NSObject
{
    void * yTexture; // +0x8
    void * uvTexture; // +0x10
    void * rgbaTexture; // +0x18
    int _formatType; // +0x20
    XImage * _yImage; // +0x28
    XImage * _uvImage; // +0x30
    XImage * _rgbaImage; // +0x38
    CGSize _inputSize; // +0x40
    CGRect _normalizeCropRect; // +0x50
    CGRect _normalizeFrame; // +0x70
}
- (void)transferFromRenderFrame:(id)arg1;
- (BOOL)isValid;
- (void)clear;
- (int)getElementFormatFromRenderFormat:(long long)arg1;
- (int)formatType;
- (void)setFormatType:(int)arg1;
- (id)yImage;
- (void)setYImage:(id)arg1;
- (id)uvImage;
- (void)setUvImage:(id)arg1;
- (id)rgbaImage;
- (void)setRgbaImage:(id)arg1;
- (CGSize)inputSize;
- (void)setInputSize:(CGSize)arg1;
- (CGRect)normalizeCropRect;
- (void)setNormalizeCropRect:(CGRect)arg1;
- (CGRect)normalizeFrame;
- (void)setNormalizeFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end
