@interface WAMiniToolVoiceWaveformView : UIView
{
    NSMutableArray * _bars; // +0x8
    BOOL _animating; // +0x10
    UIColor * _waveTintColor; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupLayers;
- (void)setWaveTintColor:(id)arg1;
- (void)layoutSubviews;
- (void)startAnimating;
- (void)stopAnimating;
- (id)waveTintColor;
- (BOOL)animating;
- (void)setAnimating:(BOOL)arg1;
- (void).cxx_destruct;
@end
