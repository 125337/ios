@interface WAGameRollProgressView : UIView
{
    double _currentProgress; // +0x8
    MovingRhombusView * _view1; // +0x10
}
- (id)initWithFrame:(CGRect)arg1 progressBarColor:(id)arg2;
- (void)updateProgress:(double)arg1;
- (void)beginLoadingAnimation;
- (void)endLoadingAnimation;
- (double)currentProgress;
- (void)setCurrentProgress:(double)arg1;
- (id)view1;
- (void)setView1:(id)arg1;
- (void).cxx_destruct;
@end
