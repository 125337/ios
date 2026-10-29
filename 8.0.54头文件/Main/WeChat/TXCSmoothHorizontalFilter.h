@interface TXCSmoothHorizontalFilter : TXCBeautifyBaseFilter
{
    float _sampleFactor; // +0x8
}
- (id)initWithContext:(id)arg1;
- (id)fragmentShaderString;
- (id)vertexShaderString;
- (void)setUniformsForFilter:(id)arg1 fboSize:(CGSize)arg2;
- (float)sampleFactor;
- (void)setSampleFactor:(float)arg1;
@end

