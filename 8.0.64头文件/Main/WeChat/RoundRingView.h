@interface RoundRingView : UIView
{
    long long _annotationState; // +0x8
    UIImageView * _outerRoundView; // +0x10
    UIView * _innerRoundView; // +0x18
    UIView * _dotRoundView; // +0x20
    double _lastWidth; // +0x28
    double _lastHeight; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setAnnotationState:(long long)arg1;
- (void)removeAllAnimations;
- (void)startAnimateFromUnSelectToSelect:(id /* block */)arg1;
- (void)startAnimateFromSelectToUnSelect:(id /* block */)arg1;
- (id)outerRoundView;
- (id)innerRoundView;
- (id)dotRoundView;
- (long long)annotationState;
- (void)setOuterRoundView:(id)arg1;
- (void)setInnerRoundView:(id)arg1;
- (void)setDotRoundView:(id)arg1;
- (double)lastWidth;
- (void)setLastWidth:(double)arg1;
- (double)lastHeight;
- (void)setLastHeight:(double)arg1;
- (void).cxx_destruct;
@end
