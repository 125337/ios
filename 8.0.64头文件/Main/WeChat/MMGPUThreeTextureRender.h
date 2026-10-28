@interface MMGPUThreeTextureRender : MMGPUTwoTextureRender
{
    int filterThirdTextureCoordinateAttribute; // +0x58
    int filterInputTextureUniform3; // +0x5c
}
- (id)initWithFragmentShaderFromString:(id)arg1;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderString:(id)arg2;
- (void)initializeAttributes;
- (int)renderToTextue:(int)arg1 inputSecondTexture:(int)arg2 inputThirdTexture:(int)arg3 inputRes:(CGSize)arg4;
@end
