@interface MJPublisherBidirectionalSlider : MJPublisherDefaultValueSlider
{
    UIColor * _highlightedTrackTintColor; // +0x8
    CALayer * _highlightedTrackLayer; // +0x10
}
- (void)commonInit;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)setValue:(float)arg1 animated:(BOOL)arg2;
- (void)tintColorDidChange;
- (CGRect)highlightedTrackRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2;
- (void)setHighlightedTrackTintColor:(id)arg1;
- (void)setMaximumTrackTintColor:(id)arg1;
- (void)layoutHighlightedLayerAnimated:(BOOL)arg1;
- (double)ratioForValue:(double)arg1;
- (id)highlightedTrackTintColor;
- (id)highlightedTrackLayer;
- (void)setHighlightedTrackLayer:(id)arg1;
- (void).cxx_destruct;
@end

