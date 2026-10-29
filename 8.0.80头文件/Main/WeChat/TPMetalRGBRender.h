@interface TPMetalRGBRender : TPMetalRenderBase
{
    __CVMetalTextureCache * _textureCache; // +0x8
    id <MTLTexture> _rgbaTexture; // +0x10
    MTLTextureDescriptor * _rgbaDescriptor; // +0x18
    int _width; // +0x20
    int _height; // +0x24
}
- (id)initWithMetalDevice:(id)arg1 withColorManagement:(BOOL)arg2;
- (void)dealloc;
- (id)shaderSource;
- (id)vertexFunctionSourceName;
- (id)fragmentFunctionSourceName;
- (BOOL)onMetalContextReady;
- (BOOL)uploadTexturesForFrameFrowRawData:(TPFrame *)arg1;
- (BOOL)setupTexturesForFrame:(TPFrame *)arg1;
- (void)uploadTexturesToCommandEncoder:(id)arg1;
- (unsigned long long)pixelFormatFromFrame:(TPFrame *)arg1;
- (void).cxx_destruct;
@end
