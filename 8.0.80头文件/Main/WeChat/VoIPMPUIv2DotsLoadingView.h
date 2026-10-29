@interface VoIPMPUIv2DotsLoadingView : VoIPMPUIv2View
{
    NSArray * _viewDots; // +0x8
    unsigned long long _lightIndex; // +0x10
    id /* block */ _animateBlock; // +0x18
}
- (BOOL)isAnimating;
- (void)animateContinually;
- (void)cancelAnimating;
- (void)layoutSubviews;
- (id)viewDots;
- (void)setViewDots:(id)arg1;
- (unsigned long long)lightIndex;
- (void)setLightIndex:(unsigned long long)arg1;
- (id /* block */)animateBlock;
- (void)setAnimateBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
