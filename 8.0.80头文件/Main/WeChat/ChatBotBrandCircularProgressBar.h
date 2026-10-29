@interface ChatBotBrandCircularProgressBar : UIView
{
    BOOL _animating; // +0x8
    UIColor * _color; // +0x10
    double _duration; // +0x18
    double _lineWidth; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)drawRect:(CGRect)arg1;
- (void)startAnimating;
- (void)stopAnimating;
- (void)addRotationAnimation;
- (id)color;
- (void)setColor:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (double)lineWidth;
- (void)setLineWidth:(double)arg1;
- (void).cxx_destruct;
@end
