@interface TXCYoutuFilter : TXCBeautifyBaseFilter
{
    YTBeautyBlurFilter * _smoothBlurFilter; // +0x8
    YTBeautyBlurFilter * _borderBlurFilter; // +0x10
    TXCTwoInputFilter * _borderFilter; // +0x18
    YTBeautySmoothFilter * _smoothFilter; // +0x20
}
- (id)initWithContext:(id)arg1;
- (id)fragmentShaderString;
- (unsigned long long)beautyStyle;
- (id)processVideoFrame:(id)arg1;
- (id)smoothBlurFilter;
- (id)borderBlurFilter;
- (id)borderFilter;
- (id)smoothFilter;
- (void).cxx_destruct;
@end

