@interface MMUIMaskContainerView : UIView
{
    BOOL _paramChanged; // +0x8
    unsigned long long _maskPosition; // +0x10
    double _maskLength; // +0x18
    CAGradientLayer * _maskLayer; // +0x20
    CGSize _lastLayoutSize; // +0x28
}
- (void)setMaskLength:(double)arg1;
- (void)setMaskPosition:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)rebuildMaskLayer;
- (unsigned long long)maskPosition;
- (double)maskLength;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg1;
- (BOOL)paramChanged;
- (void)setParamChanged:(BOOL)arg1;
- (CGSize)lastLayoutSize;
- (void)setLastLayoutSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
