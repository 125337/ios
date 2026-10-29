@interface TXCMetalRGBA64LERenderer : TXCMetalBaseRenderer
{
    TXCMetalRenderKernel * _renderKernel; // +0x8
    NSArray * _textures; // +0x10
    unsigned long long _pixelFormat; // +0x18
}
- (id)initWithContext:(id)arg1;
- (id)renderKernel;
- (void)uploadNativePixelFrame:(const NativePixelFrame *)arg1;
- (void)setDisplayConfig:(id)arg1;
- (id)drawToTarget:(id)arg1 coordinate:(id)arg2;
- (id)drawMetalTexture:(id)arg1 toTarget:(id)arg2 coordinate:(id)arg3;
- (unsigned long long)rendererType;
- (void).cxx_destruct;
@end
