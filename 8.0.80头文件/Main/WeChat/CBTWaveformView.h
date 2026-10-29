@interface CBTWaveformView : MMUIView
{
    BOOL _animating; // +0x8
    UIColor * _tintColor; // +0x10
    NSMutableArray * _bars; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupLayers;
- (void)setTintColor:(id)arg1;
- (void)layoutSubviews;
- (void)startAnimating;
- (void)stopAnimating;
- (id)tintColor;
- (BOOL)isAnimating;
- (void)setAnimating:(BOOL)arg1;
- (id)bars;
- (void)setBars:(id)arg1;
- (void).cxx_destruct;
@end
