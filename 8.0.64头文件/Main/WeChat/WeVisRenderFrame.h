@interface WeVisRenderFrame : NSObject
{
    int _rgbaTexture; // +0x8
    long long _format; // +0x10
    opaqueCMSampleBuffer * _sampleBuffer; // +0x18
    __CVBuffer * _pixelBuffer; // +0x20
    XImage * _rgbaImage; // +0x28
    CGSize _rgbaTexSize; // +0x30
    CGRect _normalizeFrame; // +0x40
}
- (long long)format;
- (void)setFormat:(long long)arg1;
- (opaqueCMSampleBuffer *)sampleBuffer;
- (void)setSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (__CVBuffer *)pixelBuffer;
- (void)setPixelBuffer:(__CVBuffer *)arg1;
- (int)rgbaTexture;
- (void)setRgbaTexture:(int)arg1;
- (id)rgbaImage;
- (void)setRgbaImage:(id)arg1;
- (CGSize)rgbaTexSize;
- (void)setRgbaTexSize:(CGSize)arg1;
- (CGRect)normalizeFrame;
- (void)setNormalizeFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end
