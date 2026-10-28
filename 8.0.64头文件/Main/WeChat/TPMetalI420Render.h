@interface TPMetalI420Render : TPMetalRenderBase
{
    id <MTLTexture> _yTexture; // +0x8
    id <MTLTexture> _uTexture; // +0x10
    id <MTLTexture> _vTexture; // +0x18
    MTLTextureDescriptor * _descriptor; // +0x20
    MTLTextureDescriptor * _chromaDescriptor; // +0x28
    int _width; // +0x30
    int _height; // +0x34
    int _chromaWidth; // +0x38
    int _chromaHeight; // +0x3c
}
- (id)initWithMetalDevice:(id)arg1 withColorManagement:(BOOL)arg2;
- (id)shaderSource;
- (id)vertexFunctionSourceName;
- (id)fragmentFunctionSourceName;
- (BOOL)setupTexturesForFrame:(TPFrame *)arg1;
- (void)uploadTexturesToCommandEncoder:(id)arg1;
- (id)getYTexture;
- (void).cxx_destruct;
@end
