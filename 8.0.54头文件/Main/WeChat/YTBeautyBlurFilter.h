@interface YTBeautyBlurFilter : TXCBeautifyBaseFilter <TXCBeautifyBaseFilterDelegate>
{
    float _verticalTexelSpacing; // +0x8
    float _horizontalTexelSpacing; // +0xc
    TXCBeautifyBaseFilter * _youtuBeautyBlurFilter1; // +0x10
    TXCBeautifyBaseFilter * _youtuBeautyBlurFilter2; // +0x18
}
- (id)initWithContext:(id)arg1;
- (void)setOutputSize:(CGSize)arg1;
- (void)setUniformsForFilter:(id)arg1 fboSize:(CGSize)arg2;
- (id)processVideoFrame:(id)arg1;
- (float)verticalTexelSpacing;
- (void)setVerticalTexelSpacing:(float)arg1;
- (float)horizontalTexelSpacing;
- (void)setHorizontalTexelSpacing:(float)arg1;
- (id)youtuBeautyBlurFilter1;
- (void)setYoutuBeautyBlurFilter1:(id)arg1;
- (id)youtuBeautyBlurFilter2;
- (void)setYoutuBeautyBlurFilter2:(id)arg1;
- (void).cxx_destruct;
@end

