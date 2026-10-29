@interface TXCSoftBeautifyFilter : TXCBeautifyBaseFilter
{
    TXCSharpFilter * _sharpFilter; // +0x8
}
- (id)fragmentShaderString;
- (unsigned long long)beautyStyle;
- (void)setUniformsForFilter:(id)arg1 fboSize:(CGSize)arg2;
- (id)processVideoFrame:(id)arg1;
- (id)sharpFilter;
- (void)setSharpFilter:(id)arg1;
- (void).cxx_destruct;
@end

