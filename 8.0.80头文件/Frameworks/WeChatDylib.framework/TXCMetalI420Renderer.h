@interface TXCMetalI420Renderer : TXCMetalBaseRenderer
{
    TXCMetalRenderKernel * _renderKernel; // +0x8
    const SimdColorConversion * _colorConversionPtr; // +0x10
    id <MTLBuffer> _colorConversionBuffer; // +0x18
    NSArray * _textures; // +0x20
}
- (id)renderKernel;
- (void)uploadNativePixelFrame:(const NativePixelFrame *)arg1;
- (id)drawToTarget:(id)arg1 coordinate:(id)arg2;
- (unsigned long long)rendererType;
- (void).cxx_destruct;
@end
