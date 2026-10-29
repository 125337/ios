@interface VoipRecentStatusFadeView : UIView
{
    double _startPointY; // +0x8
    double _endPointY; // +0x10
    CAGradientLayer * _caGradientLayer; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (double)startPointY;
- (void)setStartPointY:(double)arg1;
- (double)endPointY;
- (void)setEndPointY:(double)arg1;
- (id)caGradientLayer;
- (void)setCaGradientLayer:(id)arg1;
- (void).cxx_destruct;
@end

