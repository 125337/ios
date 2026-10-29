@interface MMLiveScrollGradientMaskingView : MMLiveGradientLayerView
{
    BOOL _enableFadeoutAtBeginning; // +0x8
    BOOL _enableFadeoutAtEnding; // +0x9
    long long _scrollDirection; // +0x10
    double _gradientInset; // +0x18
    double _gradientLength; // +0x20
    double _gradientFadeoutLength; // +0x28
    CALayer * _fadeoutLayerForBeginning; // +0x30
    CALayer * _fadeoutLayerForEnding; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setScrollDirection:(long long)arg1;
- (void)setGradientInset:(double)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
- (void)layoutSublayersOfLayer:(id)arg1;
- (long long)scrollDirection;
- (BOOL)enableFadeoutAtBeginning;
- (void)setEnableFadeoutAtBeginning:(BOOL)arg1;
- (BOOL)enableFadeoutAtEnding;
- (void)setEnableFadeoutAtEnding:(BOOL)arg1;
- (double)gradientInset;
- (double)gradientLength;
- (void)setGradientLength:(double)arg1;
- (double)gradientFadeoutLength;
- (void)setGradientFadeoutLength:(double)arg1;
- (id)fadeoutLayerForBeginning;
- (void)setFadeoutLayerForBeginning:(id)arg1;
- (id)fadeoutLayerForEnding;
- (void)setFadeoutLayerForEnding:(id)arg1;
- (void).cxx_destruct;
@end

