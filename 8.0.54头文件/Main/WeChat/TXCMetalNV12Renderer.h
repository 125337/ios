@interface TXCMetalNV12Renderer : TXCMetalBaseRenderer
{
    TXCMetalRenderKernel * _renderKernel; // +0x8
    const SimdColorConversion * _colorConversion; // +0x10
    NSArray * _textures; // +0x18
}
- (id)renderKernel;
- (void)uploadPixelBuffer:(__CVBuffer *)arg1;
- (id)drawToTarget:(id)arg1 coordinate:(id)arg2;
- (unsigned long long)rendererType;
- (void).cxx_destruct;
@end

