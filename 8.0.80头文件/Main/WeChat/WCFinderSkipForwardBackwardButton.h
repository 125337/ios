@interface WCFinderSkipForwardBackwardButton : MMUIButton
{
    double _skipStep; // +0x8
    UIView * _backgroundCircleView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setupBackgroundCircle;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (double)skipStep;
- (void)setSkipStep:(double)arg1;
- (id)backgroundCircleView;
- (void)setBackgroundCircleView:(id)arg1;
- (void).cxx_destruct;
@end
