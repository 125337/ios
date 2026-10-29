@interface TXCMetalYUV420P10LERenderer : TXCMetalBaseRenderer
{
    TXCMetalRenderKernel * _renderKernel; // +0x8
    const SimdColorConversion * _colorConversion; // +0x10
    NSArray * _textures; // +0x18
    unsigned long long _pixelFormat; // +0x20
}
- (id)initWithContext:(id)arg1;
- (id)renderKernel;
- (void)uploadPixelBuffer:(__CVBuffer *)arg1;
- (void)setDisplayConfig:(id)arg1;
- (id)drawToTarget:(id)arg1 coordinate:(id)arg2;
- (unsigned long long)rendererType;
- (void).cxx_destruct;
@end

