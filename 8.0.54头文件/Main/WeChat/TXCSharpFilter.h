@interface TXCSharpFilter : TXCBeautifyBaseFilter
{
    double _sharpness; // +0x8
}
- (id)vertexShaderString;
- (id)fragmentShaderString;
- (void)setUniformsForFilter:(id)arg1 fboSize:(CGSize)arg2;
- (double)sharpness;
- (void)setSharpness:(double)arg1;
@end

