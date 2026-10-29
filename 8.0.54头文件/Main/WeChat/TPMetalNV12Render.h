@interface TPMetalNV12Render : TPMetalRenderBase
{
    __CVMetalTextureCache * _textureCache; // +0x8
    id <MTLTexture> _yTexture; // +0x10
    id <MTLTexture> _CrCbTexture; // +0x18
    MTLTextureDescriptor * _ydescriptor; // +0x20
    MTLTextureDescriptor * _uvDescriptor; // +0x28
    int _yWidth; // +0x30
    int _yHeight; // +0x34
    int _uvWidth; // +0x38
    int _uvHeight; // +0x3c
}
- (id)initWithMetalDevice:(id)arg1 withColorManagement:(BOOL)arg2;
- (void)dealloc;
- (id)shaderSource;
- (id)vertexFunctionSourceName;
- (id)fragmentFunctionSourceName;
- (BOOL)onMetalContextReady;
- (BOOL)uploadTexturesForFrameFrowRawData:(TPFrame *)arg1;
- (BOOL)uploadTextureFromPixelbuffer:(TPFrame *)arg1;
- (BOOL)setupTexturesForFrame:(TPFrame *)arg1;
- (void)uploadTexturesToCommandEncoder:(id)arg1;
- (id)getYTexture;
- (void).cxx_destruct;
@end

