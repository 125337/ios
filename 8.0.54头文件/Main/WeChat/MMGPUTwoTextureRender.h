@interface MMGPUTwoTextureRender : MMGPUOneTextureRender
{
    int filterSecondTextureCoordinateAttribute; // +0x50
    int filterInputTextureUniform2; // +0x54
}
- (id)initWithFragmentShaderFromString:(id)arg1;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderString:(id)arg2;
- (void)initializeAttributes;
- (int)renderToTextue:(int)arg1 inputSecondTexture:(int)arg2 inputRes:(CGSize)arg3;
@end

