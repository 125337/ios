@interface XComposeTextureWrapper : NSObject
{
    void * yTexture; // +0x8
    void * uvTexture; // +0x10
    unsigned int yTextureId; // +0x18
    unsigned int uvTextureId; // +0x1c
    unsigned int paramUniformId; // +0x20
    unsigned int yuvTypeUniformIndex; // +0x24
    XVisComposeElement * _element; // +0x28
}
- (id)initWithComposeElement:(id)arg1;
- (void)registerExternalTextureWithGraph:(void *)arg1;
- (void)sample:(void *)arg1;
- (void)bindTexture:(void *)arg1 resource:(void *)arg2;
- (void)setTextureIdY:(unsigned int)arg1 uv:(unsigned int)arg2;
- (void)setParamsUniformId:(unsigned int)arg1;
- (void)setYUVTypeUniformIndex:(unsigned int)arg1;
- (void)bindYUVTypeToUniformBuffer:(void *)arg1;
- (id)element;
- (void)setElement:(id)arg1;
- (void).cxx_destruct;
@end
