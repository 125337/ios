@interface TXCSmoothBeautifyFilter : TXCBeautifyBaseFilter
{
    TXCMaskFilter * _maskFilter; // +0x8
    TXCSmoothHorizontalFilter * _smoothHorizontalFilter; // +0x10
    TXCSmoothVerticalFilter * _smoothVerticalFilter; // +0x18
    TXCSmoothMixFilter * _smoothMixFilter; // +0x20
    TXCSharpFilter * _sharpFilter; // +0x28
}
- (id)initWithContext:(id)arg1;
- (id)fragmentShaderString;
- (unsigned long long)beautyStyle;
- (id)processVideoFrame:(id)arg1;
- (id)maskFilter;
- (void)setMaskFilter:(id)arg1;
- (id)smoothHorizontalFilter;
- (void)setSmoothHorizontalFilter:(id)arg1;
- (id)smoothVerticalFilter;
- (void)setSmoothVerticalFilter:(id)arg1;
- (id)smoothMixFilter;
- (void)setSmoothMixFilter:(id)arg1;
- (id)sharpFilter;
- (void)setSharpFilter:(id)arg1;
- (void).cxx_destruct;
@end

