@interface YTBeautySmoothFilter : TXCThreeInputFilter <TXCBeautifyBaseFilterDelegate>
{
    double _blurStrength; // +0x8
    double _whitenStrength; // +0x10
    double _redStrength; // +0x18
    CGSize _sharpenSize; // +0x20
}
- (id)initWithContext:(id)arg1;
- (id)fragmentShaderString;
- (id)vertexShaderString;
- (void)setUniformsForFilter:(id)arg1 fboSize:(CGSize)arg2;
- (double)blurStrength;
- (void)setBlurStrength:(double)arg1;
- (double)whitenStrength;
- (void)setWhitenStrength:(double)arg1;
- (double)redStrength;
- (void)setRedStrength:(double)arg1;
- (CGSize)sharpenSize;
- (void)setSharpenSize:(CGSize)arg1;
@end

