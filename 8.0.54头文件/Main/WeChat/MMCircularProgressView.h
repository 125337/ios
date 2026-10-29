@interface MMCircularProgressView : UIView
{
    BOOL _clockwise; // +0x8
    int _lineCapStyle; // +0xc
    UIColor * _fillColor; // +0x10
    UIColor * _progressColor; // +0x18
    UIImage * _progressImage; // +0x20
    id /* block */ _progressTimingFunction; // +0x28
    UIImage * _borderImage; // +0x30
    double _edgeRatio; // +0x38
    double _innerPadding; // +0x40
    UIImageView * _borderImageView; // +0x48
    NSArray * _steps; // +0x50
    double _max; // +0x58
    double _min; // +0x60
    double _current; // +0x68
    double _animationStep; // +0x70
    MMTimer * _animationTimer; // +0x78
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setBorderImage:(id)arg1;
- (void)incrementBy:(double)arg1;
- (void)setMaxValue:(double)arg1;
- (void)setMinValue:(double)arg1;
- (void)setCurrentValue:(double)arg1;
- (void)setOrientation:(BOOL)arg1;
- (void)setIncrementalSteps:(id)arg1;
- (double)currentValue;
- (double)maxValue;
- (BOOL)orientation;
- (void)startAnimationWithDuration:(double)arg1;
- (void)stopAnimation;
- (void)updateAnimation;
- (void)drawRect:(CGRect)arg1;
- (id)fillColor;
- (void)setFillColor:(id)arg1;
- (id)progressColor;
- (void)setProgressColor:(id)arg1;
- (id)progressImage;
- (void)setProgressImage:(id)arg1;
- (id /* block */)progressTimingFunction;
- (void)setProgressTimingFunction:(id /* block */)arg1;
- (id)borderImage;
- (double)edgeRatio;
- (void)setEdgeRatio:(double)arg1;
- (double)innerPadding;
- (void)setInnerPadding:(double)arg1;
- (int)lineCapStyle;
- (void)setLineCapStyle:(int)arg1;
- (id)borderImageView;
- (void)setBorderImageView:(id)arg1;
- (id)steps;
- (void)setSteps:(id)arg1;
- (double)max;
- (void)setMax:(double)arg1;
- (double)min;
- (void)setMin:(double)arg1;
- (double)current;
- (void)setCurrent:(double)arg1;
- (BOOL)clockwise;
- (void)setClockwise:(BOOL)arg1;
- (double)animationStep;
- (void)setAnimationStep:(double)arg1;
- (id)animationTimer;
- (void)setAnimationTimer:(id)arg1;
- (void).cxx_destruct;
@end

